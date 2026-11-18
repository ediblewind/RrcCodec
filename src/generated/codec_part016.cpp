/* ============================================================================
 * src/generated/codec_part016.cpp — 生成的编解码函数
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
// SlotFormatIndicator：ASN.1 SlotFormatIndicator；源文件第 12909 行；SEQUENCE。
// Encode_SlotFormatIndicator 只读不分配；Decode_SlotFormatIndicator 可能 malloc（失败时内部已释放并清零）；Free_SlotFormatIndicator 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SlotFormatIndicator(Encoder& enc, const SlotFormatIndicator& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_slotFormatCombToAddModList);
    enc.WriteBit(value.has_slotFormatCombToReleaseList);
    enc.WriteConstrainedInteger((std::int64_t)(value.sfi_RNTI), 0, 65535);
    enc.WriteConstrainedInteger((std::int64_t)(value.dci_PayloadSize), 1, 128);
    if (value.has_slotFormatCombToAddModList) {
enc.WriteConstrainedLength(value.slotFormatCombToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.slotFormatCombToAddModList_count; ++i) {
    Encode_SlotFormatCombinationsPerCell(enc, value.slotFormatCombToAddModList_items[i]);
}
    }
    if (value.has_slotFormatCombToReleaseList) {
enc.WriteConstrainedLength(value.slotFormatCombToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.slotFormatCombToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.slotFormatCombToReleaseList_items[i]), 0, 31);
}
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SlotFormatIndicator_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SlotFormatIndicator_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_SlotFormatIndicator_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SlotFormatIndicator(Decoder& dec, SlotFormatIndicator& value)
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
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.sfi_RNTI = (RNTI_Value)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 128, tmp_value)) { goto fail; }
        value.dci_PayloadSize = (int64_t)tmp_value;
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.slotFormatCombToAddModList_count)) { goto fail; }
if (value.slotFormatCombToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.slotFormatCombToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.slotFormatCombToAddModList_count > 0u) {
    value.slotFormatCombToAddModList_items = (SlotFormatCombinationsPerCell*)std::malloc((std::size_t)value.slotFormatCombToAddModList_count * sizeof(SlotFormatCombinationsPerCell));
    if (value.slotFormatCombToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.slotFormatCombToAddModList_items, 0, (std::size_t)value.slotFormatCombToAddModList_count * sizeof(SlotFormatCombinationsPerCell));
}
for (std::uint32_t i = 0; i < value.slotFormatCombToAddModList_count; ++i) {
    if (Decode_SlotFormatCombinationsPerCell(dec, value.slotFormatCombToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.slotFormatCombToReleaseList_count)) { goto fail; }
if (value.slotFormatCombToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.slotFormatCombToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.slotFormatCombToReleaseList_count > 0u) {
    value.slotFormatCombToReleaseList_items = (ServCellIndex*)std::malloc((std::size_t)value.slotFormatCombToReleaseList_count * sizeof(ServCellIndex));
    if (value.slotFormatCombToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.slotFormatCombToReleaseList_items, 0, (std::size_t)value.slotFormatCombToReleaseList_count * sizeof(ServCellIndex));
}
for (std::uint32_t i = 0; i < value.slotFormatCombToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.slotFormatCombToReleaseList_items[i] = (ServCellIndex)tmp_value;
}
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
    if (Decode_SlotFormatIndicator_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_SlotFormatIndicator_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_SlotFormatIndicator_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    Free_SlotFormatIndicator(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SlotFormatIndicator(SlotFormatIndicator& value)
{
    if (value.has_slotFormatCombToAddModList) {
        if (value.slotFormatCombToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.slotFormatCombToAddModList_count; ++i) {
                Free_SlotFormatCombinationsPerCell(value.slotFormatCombToAddModList_items[i]);
            }
            std::free(value.slotFormatCombToAddModList_items);
            value.slotFormatCombToAddModList_items = nullptr;
        }
        value.slotFormatCombToAddModList_count = 0;
    }
    if (value.has_slotFormatCombToReleaseList) {
        if (value.slotFormatCombToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.slotFormatCombToReleaseList_count; ++i) {
            }
            std::free(value.slotFormatCombToReleaseList_items);
            value.slotFormatCombToReleaseList_items = nullptr;
        }
        value.slotFormatCombToReleaseList_count = 0;
    }
    if (value.has_extGroup1) {
        Free_SlotFormatIndicator_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SlotFormatIndicator_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_SlotFormatIndicator_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SlotFormatIndicator：ASN.1 SetupRelease<SlotFormatIndicator>；源文件第 9267 行；CHOICE。
// Encode_SetupRelease_SlotFormatIndicator 只读不分配；Decode_SetupRelease_SlotFormatIndicator 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SlotFormatIndicator 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SlotFormatIndicator(Encoder& enc, const SetupRelease_SlotFormatIndicator& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SlotFormatIndicator_Tag_release:
        (void)0;
        break;
    case SetupRelease_SlotFormatIndicator_Tag_setup:
        Encode_SlotFormatIndicator(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SlotFormatIndicator(Decoder& dec, SetupRelease_SlotFormatIndicator& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SlotFormatIndicator_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SlotFormatIndicator_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SlotFormatIndicator_Tag_setup: {
        if (Decode_SlotFormatIndicator(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SlotFormatIndicator(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SlotFormatIndicator(SetupRelease_SlotFormatIndicator& value)
{
    switch (value.tag) {
    case SetupRelease_SlotFormatIndicator_Tag_release:
        break;
    case SetupRelease_SlotFormatIndicator_Tag_setup:
        Free_SlotFormatIndicator(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ServingCellConfig：ASN.1 PDCCH-ServingCellConfig；源文件第 9266 行；SEQUENCE。
// Encode_PDCCH_ServingCellConfig 只读不分配；Decode_PDCCH_ServingCellConfig 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ServingCellConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ServingCellConfig(Encoder& enc, const PDCCH_ServingCellConfig& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_slotFormatIndicator);
    if (value.has_slotFormatIndicator) {
        Encode_SetupRelease_SlotFormatIndicator(enc, value.slotFormatIndicator);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_PDCCH_ServingCellConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_PDCCH_ServingCellConfig_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ServingCellConfig(Decoder& dec, PDCCH_ServingCellConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_SlotFormatIndicator(dec, value.slotFormatIndicator) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_PDCCH_ServingCellConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_PDCCH_ServingCellConfig_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_PDCCH_ServingCellConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ServingCellConfig(PDCCH_ServingCellConfig& value)
{
    if (value.has_slotFormatIndicator) {
        Free_SetupRelease_SlotFormatIndicator(value.slotFormatIndicator);
    }
    if (value.has_extGroup1) {
        Free_PDCCH_ServingCellConfig_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_PDCCH_ServingCellConfig_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PDCCH_ServingCellConfig：ASN.1 SetupRelease<PDCCH-ServingCellConfig>；源文件第 12424 行；CHOICE。
// Encode_SetupRelease_PDCCH_ServingCellConfig 只读不分配；Decode_SetupRelease_PDCCH_ServingCellConfig 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PDCCH_ServingCellConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PDCCH_ServingCellConfig(Encoder& enc, const SetupRelease_PDCCH_ServingCellConfig& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PDCCH_ServingCellConfig_Tag_release:
        (void)0;
        break;
    case SetupRelease_PDCCH_ServingCellConfig_Tag_setup:
        Encode_PDCCH_ServingCellConfig(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PDCCH_ServingCellConfig(Decoder& dec, SetupRelease_PDCCH_ServingCellConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PDCCH_ServingCellConfig_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PDCCH_ServingCellConfig_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PDCCH_ServingCellConfig_Tag_setup: {
        if (Decode_PDCCH_ServingCellConfig(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PDCCH_ServingCellConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PDCCH_ServingCellConfig(SetupRelease_PDCCH_ServingCellConfig& value)
{
    switch (value.tag) {
    case SetupRelease_PDCCH_ServingCellConfig_Tag_release:
        break;
    case SetupRelease_PDCCH_ServingCellConfig_Tag_setup:
        Free_PDCCH_ServingCellConfig(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDSCH_ServingCellConfig_ExtGroup1：ASN.1 PDSCH_ServingCellConfig_ExtGroup1；源文件第 9563 行；扩展添加组 [[ ]]。
// Encode_PDSCH_ServingCellConfig_ExtGroup1 只读不分配；Decode_PDSCH_ServingCellConfig_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_PDSCH_ServingCellConfig_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDSCH_ServingCellConfig_ExtGroup1(Encoder& enc, const PDSCH_ServingCellConfig_ExtGroup1& value)
{
    enc.WriteBit(value.has_maxMIMO_Layers);
    enc.WriteBit(value.has_processingType2Enabled);
    if (value.has_maxMIMO_Layers) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxMIMO_Layers), 1, 8);
    }
    if (value.has_processingType2Enabled) {
        enc.WriteBool(value.processingType2Enabled);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_ServingCellConfig_ExtGroup1(Decoder& dec, PDSCH_ServingCellConfig_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxMIMO_Layers = (int64_t)tmp_value;
    }
    if (present_1) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.processingType2Enabled = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_ServingCellConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_ServingCellConfig_ExtGroup1(PDSCH_ServingCellConfig_ExtGroup1& value)
{
    if (value.has_maxMIMO_Layers) {
    }
    if (value.has_processingType2Enabled) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDSCH_CodeBlockGroupTransmissionList_r16：ASN.1 PDSCH-CodeBlockGroupTransmissionList-r16；源文件第 9582 行；SEQUENCE OF。
// Encode_PDSCH_CodeBlockGroupTransmissionList_r16 只读不分配；Decode_PDSCH_CodeBlockGroupTransmissionList_r16 可能 malloc（失败时内部已释放并清零）；Free_PDSCH_CodeBlockGroupTransmissionList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDSCH_CodeBlockGroupTransmissionList_r16(Encoder& enc, const PDSCH_CodeBlockGroupTransmissionList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 2u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PDSCH_CodeBlockGroupTransmission(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_CodeBlockGroupTransmissionList_r16(Decoder& dec, PDSCH_CodeBlockGroupTransmissionList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 2u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 2u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PDSCH_CodeBlockGroupTransmission*)std::malloc((std::size_t)value.count * sizeof(PDSCH_CodeBlockGroupTransmission));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PDSCH_CodeBlockGroupTransmission));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PDSCH_CodeBlockGroupTransmission(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_CodeBlockGroupTransmissionList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_CodeBlockGroupTransmissionList_r16(PDSCH_CodeBlockGroupTransmissionList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PDSCH_CodeBlockGroupTransmission(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16：ASN.1 SetupRelease<PDSCH-CodeBlockGroupTransmissionList-r16>；源文件第 9568 行；CHOICE。
// Encode_SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16 只读不分配；Decode_SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16(Encoder& enc, const SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16_Tag_setup:
        Encode_PDSCH_CodeBlockGroupTransmissionList_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16(Decoder& dec, SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16_Tag_setup: {
        if (Decode_PDSCH_CodeBlockGroupTransmissionList_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16(SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16& value)
{
    switch (value.tag) {
    case SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16_Tag_release:
        break;
    case SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16_Tag_setup:
        Free_PDSCH_CodeBlockGroupTransmissionList_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDSCH_ServingCellConfig_ExtGroup2：ASN.1 PDSCH_ServingCellConfig_ExtGroup2；源文件第 9567 行；扩展添加组 [[ ]]。
// Encode_PDSCH_ServingCellConfig_ExtGroup2 只读不分配；Decode_PDSCH_ServingCellConfig_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_PDSCH_ServingCellConfig_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDSCH_ServingCellConfig_ExtGroup2(Encoder& enc, const PDSCH_ServingCellConfig_ExtGroup2& value)
{
    enc.WriteBit(value.has_pdsch_CodeBlockGroupTransmissionList_r16);
    if (value.has_pdsch_CodeBlockGroupTransmissionList_r16) {
        Encode_SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16(enc, value.pdsch_CodeBlockGroupTransmissionList_r16);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_ServingCellConfig_ExtGroup2(Decoder& dec, PDSCH_ServingCellConfig_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16(dec, value.pdsch_CodeBlockGroupTransmissionList_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_ServingCellConfig_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_ServingCellConfig_ExtGroup2(PDSCH_ServingCellConfig_ExtGroup2& value)
{
    if (value.has_pdsch_CodeBlockGroupTransmissionList_r16) {
        Free_SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16(value.pdsch_CodeBlockGroupTransmissionList_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_DownlinkHARQ_FeedbackDisabled_r17：ASN.1 SetupRelease<DownlinkHARQ-FeedbackDisabled-r17>；源文件第 9571 行；CHOICE。
// Encode_SetupRelease_DownlinkHARQ_FeedbackDisabled_r17 只读不分配；Decode_SetupRelease_DownlinkHARQ_FeedbackDisabled_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_DownlinkHARQ_FeedbackDisabled_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_DownlinkHARQ_FeedbackDisabled_r17(Encoder& enc, const SetupRelease_DownlinkHARQ_FeedbackDisabled_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DownlinkHARQ_FeedbackDisabled_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_DownlinkHARQ_FeedbackDisabled_r17_Tag_setup:
        enc.WriteFixedBitString(value.u.setup.bytes, value.u.setup.bitLength, 32, 32);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DownlinkHARQ_FeedbackDisabled_r17(Decoder& dec, SetupRelease_DownlinkHARQ_FeedbackDisabled_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DownlinkHARQ_FeedbackDisabled_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DownlinkHARQ_FeedbackDisabled_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DownlinkHARQ_FeedbackDisabled_r17_Tag_setup: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 32)) { goto fail; }
        string_length = 32;
        value.u.setup.bytes = string_bytes;
        value.u.setup.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DownlinkHARQ_FeedbackDisabled_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DownlinkHARQ_FeedbackDisabled_r17(SetupRelease_DownlinkHARQ_FeedbackDisabled_r17& value)
{
    switch (value.tag) {
    case SetupRelease_DownlinkHARQ_FeedbackDisabled_r17_Tag_release:
        break;
    case SetupRelease_DownlinkHARQ_FeedbackDisabled_r17_Tag_setup:
        std::free(value.u.setup.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDSCH_ServingCellConfig_ExtGroup3：ASN.1 PDSCH_ServingCellConfig_ExtGroup3；源文件第 9570 行；扩展添加组 [[ ]]。
// Encode_PDSCH_ServingCellConfig_ExtGroup3 只读不分配；Decode_PDSCH_ServingCellConfig_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_PDSCH_ServingCellConfig_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDSCH_ServingCellConfig_ExtGroup3(Encoder& enc, const PDSCH_ServingCellConfig_ExtGroup3& value)
{
    enc.WriteBit(value.has_downlinkHARQ_FeedbackDisabled_r17);
    enc.WriteBit(value.has_nrofHARQ_ProcessesForPDSCH_v1700);
    if (value.has_downlinkHARQ_FeedbackDisabled_r17) {
        Encode_SetupRelease_DownlinkHARQ_FeedbackDisabled_r17(enc, value.downlinkHARQ_FeedbackDisabled_r17);
    }
    if (value.has_nrofHARQ_ProcessesForPDSCH_v1700) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrofHARQ_ProcessesForPDSCH_v1700), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_ServingCellConfig_ExtGroup3(Decoder& dec, PDSCH_ServingCellConfig_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_DownlinkHARQ_FeedbackDisabled_r17(dec, value.downlinkHARQ_FeedbackDisabled_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.nrofHARQ_ProcessesForPDSCH_v1700 = (PDSCH_ServingCellConfig_ExtGroup3_NrofHARQ_ProcessesForPDSCH_v1700)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_ServingCellConfig_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_ServingCellConfig_ExtGroup3(PDSCH_ServingCellConfig_ExtGroup3& value)
{
    if (value.has_downlinkHARQ_FeedbackDisabled_r17) {
        Free_SetupRelease_DownlinkHARQ_FeedbackDisabled_r17(value.downlinkHARQ_FeedbackDisabled_r17);
    }
    if (value.has_nrofHARQ_ProcessesForPDSCH_v1700) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDSCH_CodeBlockGroupTransmission：ASN.1 PDSCH-CodeBlockGroupTransmission；源文件第 9576 行；SEQUENCE。
// Encode_PDSCH_CodeBlockGroupTransmission 只读不分配；Decode_PDSCH_CodeBlockGroupTransmission 可能 malloc（失败时内部已释放并清零）；Free_PDSCH_CodeBlockGroupTransmission 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDSCH_CodeBlockGroupTransmission(Encoder& enc, const PDSCH_CodeBlockGroupTransmission& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxCodeBlockGroupsPerTransportBlock), 0, 3);
    enc.WriteBool(value.codeBlockGroupFlushIndicator);
    return enc.Error();
}

ErrorCode Decode_PDSCH_CodeBlockGroupTransmission(Decoder& dec, PDSCH_CodeBlockGroupTransmission& value)
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
        value.maxCodeBlockGroupsPerTransportBlock = (PDSCH_CodeBlockGroupTransmission_MaxCodeBlockGroupsPerTransportBlock)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.codeBlockGroupFlushIndicator = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_CodeBlockGroupTransmission(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_CodeBlockGroupTransmission(PDSCH_CodeBlockGroupTransmission& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PDSCH_CodeBlockGroupTransmission：ASN.1 SetupRelease<PDSCH-CodeBlockGroupTransmission>；源文件第 9558 行；CHOICE。
// Encode_SetupRelease_PDSCH_CodeBlockGroupTransmission 只读不分配；Decode_SetupRelease_PDSCH_CodeBlockGroupTransmission 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PDSCH_CodeBlockGroupTransmission 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PDSCH_CodeBlockGroupTransmission(Encoder& enc, const SetupRelease_PDSCH_CodeBlockGroupTransmission& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PDSCH_CodeBlockGroupTransmission_Tag_release:
        (void)0;
        break;
    case SetupRelease_PDSCH_CodeBlockGroupTransmission_Tag_setup:
        Encode_PDSCH_CodeBlockGroupTransmission(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PDSCH_CodeBlockGroupTransmission(Decoder& dec, SetupRelease_PDSCH_CodeBlockGroupTransmission& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PDSCH_CodeBlockGroupTransmission_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PDSCH_CodeBlockGroupTransmission_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PDSCH_CodeBlockGroupTransmission_Tag_setup: {
        if (Decode_PDSCH_CodeBlockGroupTransmission(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PDSCH_CodeBlockGroupTransmission(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PDSCH_CodeBlockGroupTransmission(SetupRelease_PDSCH_CodeBlockGroupTransmission& value)
{
    switch (value.tag) {
    case SetupRelease_PDSCH_CodeBlockGroupTransmission_Tag_release:
        break;
    case SetupRelease_PDSCH_CodeBlockGroupTransmission_Tag_setup:
        Free_PDSCH_CodeBlockGroupTransmission(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDSCH_ServingCellConfig：ASN.1 PDSCH-ServingCellConfig；源文件第 9557 行；SEQUENCE。
// Encode_PDSCH_ServingCellConfig 只读不分配；Decode_PDSCH_ServingCellConfig 可能 malloc（失败时内部已释放并清零）；Free_PDSCH_ServingCellConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDSCH_ServingCellConfig(Encoder& enc, const PDSCH_ServingCellConfig& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_codeBlockGroupTransmission);
    enc.WriteBit(value.has_xOverhead);
    enc.WriteBit(value.has_nrofHARQ_ProcessesForPDSCH);
    enc.WriteBit(value.has_pucch_Cell);
    if (value.has_codeBlockGroupTransmission) {
        Encode_SetupRelease_PDSCH_CodeBlockGroupTransmission(enc, value.codeBlockGroupTransmission);
    }
    if (value.has_xOverhead) {
        enc.WriteConstrainedInteger((std::int64_t)(value.xOverhead), 0, 2);
    }
    if (value.has_nrofHARQ_ProcessesForPDSCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrofHARQ_ProcessesForPDSCH), 0, 5);
    }
    if (value.has_pucch_Cell) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_Cell), 0, 31);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_PDSCH_ServingCellConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_PDSCH_ServingCellConfig_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_PDSCH_ServingCellConfig_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_ServingCellConfig(Decoder& dec, PDSCH_ServingCellConfig& value)
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
        if (Decode_SetupRelease_PDSCH_CodeBlockGroupTransmission(dec, value.codeBlockGroupTransmission) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.xOverhead = (PDSCH_ServingCellConfig_XOverhead)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.nrofHARQ_ProcessesForPDSCH = (PDSCH_ServingCellConfig_NrofHARQ_ProcessesForPDSCH)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.pucch_Cell = (ServCellIndex)tmp_value;
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
    if (Decode_PDSCH_ServingCellConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_PDSCH_ServingCellConfig_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_PDSCH_ServingCellConfig_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    Free_PDSCH_ServingCellConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_ServingCellConfig(PDSCH_ServingCellConfig& value)
{
    if (value.has_codeBlockGroupTransmission) {
        Free_SetupRelease_PDSCH_CodeBlockGroupTransmission(value.codeBlockGroupTransmission);
    }
    if (value.has_xOverhead) {
    }
    if (value.has_nrofHARQ_ProcessesForPDSCH) {
    }
    if (value.has_pucch_Cell) {
    }
    if (value.has_extGroup1) {
        Free_PDSCH_ServingCellConfig_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_PDSCH_ServingCellConfig_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_PDSCH_ServingCellConfig_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PDSCH_ServingCellConfig：ASN.1 SetupRelease<PDSCH-ServingCellConfig>；源文件第 12425 行；CHOICE。
// Encode_SetupRelease_PDSCH_ServingCellConfig 只读不分配；Decode_SetupRelease_PDSCH_ServingCellConfig 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PDSCH_ServingCellConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PDSCH_ServingCellConfig(Encoder& enc, const SetupRelease_PDSCH_ServingCellConfig& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PDSCH_ServingCellConfig_Tag_release:
        (void)0;
        break;
    case SetupRelease_PDSCH_ServingCellConfig_Tag_setup:
        Encode_PDSCH_ServingCellConfig(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PDSCH_ServingCellConfig(Decoder& dec, SetupRelease_PDSCH_ServingCellConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PDSCH_ServingCellConfig_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PDSCH_ServingCellConfig_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PDSCH_ServingCellConfig_Tag_setup: {
        if (Decode_PDSCH_ServingCellConfig(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PDSCH_ServingCellConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PDSCH_ServingCellConfig(SetupRelease_PDSCH_ServingCellConfig& value)
{
    switch (value.tag) {
    case SetupRelease_PDSCH_ServingCellConfig_Tag_release:
        break;
    case SetupRelease_PDSCH_ServingCellConfig_Tag_setup:
        Free_PDSCH_ServingCellConfig(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CSI_MeasConfig_ExtGroup1：ASN.1 CSI_MeasConfig_ExtGroup1；源文件第 5929 行；扩展添加组 [[ ]]。
// Encode_CSI_MeasConfig_ExtGroup1 只读不分配；Decode_CSI_MeasConfig_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_CSI_MeasConfig_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CSI_MeasConfig_ExtGroup1(Encoder& enc, const CSI_MeasConfig_ExtGroup1& value)
{
    enc.WriteBit(value.has_reportTriggerSizeDCI_0_2_r16);
    if (value.has_reportTriggerSizeDCI_0_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.reportTriggerSizeDCI_0_2_r16), 0, 6);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_MeasConfig_ExtGroup1(Decoder& dec, CSI_MeasConfig_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.reportTriggerSizeDCI_0_2_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_MeasConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_MeasConfig_ExtGroup1(CSI_MeasConfig_ExtGroup1& value)
{
    if (value.has_reportTriggerSizeDCI_0_2_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CSI_MeasConfig_ExtGroup2：ASN.1 CSI_MeasConfig_ExtGroup2；源文件第 5932 行；扩展添加组 [[ ]]。
// Encode_CSI_MeasConfig_ExtGroup2 只读不分配；Decode_CSI_MeasConfig_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_CSI_MeasConfig_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CSI_MeasConfig_ExtGroup2(Encoder& enc, const CSI_MeasConfig_ExtGroup2& value)
{
    enc.WriteBit(value.has_sCellActivationRS_ConfigToAddModList_r17);
    enc.WriteBit(value.has_sCellActivationRS_ConfigToReleaseList_r17);
    if (value.has_sCellActivationRS_ConfigToAddModList_r17) {
enc.WriteConstrainedLength(value.sCellActivationRS_ConfigToAddModList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sCellActivationRS_ConfigToAddModList_r17_count; ++i) {
    Encode_SCellActivationRS_Config_r17(enc, value.sCellActivationRS_ConfigToAddModList_r17_items[i]);
}
    }
    if (value.has_sCellActivationRS_ConfigToReleaseList_r17) {
enc.WriteConstrainedLength(value.sCellActivationRS_ConfigToReleaseList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sCellActivationRS_ConfigToReleaseList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sCellActivationRS_ConfigToReleaseList_r17_items[i]), 1, 255);
}
    }
    return enc.Error();
}

ErrorCode Decode_CSI_MeasConfig_ExtGroup2(Decoder& dec, CSI_MeasConfig_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sCellActivationRS_ConfigToAddModList_r17_count)) { goto fail; }
if (value.sCellActivationRS_ConfigToAddModList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sCellActivationRS_ConfigToAddModList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sCellActivationRS_ConfigToAddModList_r17_count > 0u) {
    value.sCellActivationRS_ConfigToAddModList_r17_items = (SCellActivationRS_Config_r17*)std::malloc((std::size_t)value.sCellActivationRS_ConfigToAddModList_r17_count * sizeof(SCellActivationRS_Config_r17));
    if (value.sCellActivationRS_ConfigToAddModList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sCellActivationRS_ConfigToAddModList_r17_items, 0, (std::size_t)value.sCellActivationRS_ConfigToAddModList_r17_count * sizeof(SCellActivationRS_Config_r17));
}
for (std::uint32_t i = 0; i < value.sCellActivationRS_ConfigToAddModList_r17_count; ++i) {
    if (Decode_SCellActivationRS_Config_r17(dec, value.sCellActivationRS_ConfigToAddModList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sCellActivationRS_ConfigToReleaseList_r17_count)) { goto fail; }
if (value.sCellActivationRS_ConfigToReleaseList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sCellActivationRS_ConfigToReleaseList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sCellActivationRS_ConfigToReleaseList_r17_count > 0u) {
    value.sCellActivationRS_ConfigToReleaseList_r17_items = (SCellActivationRS_ConfigId_r17*)std::malloc((std::size_t)value.sCellActivationRS_ConfigToReleaseList_r17_count * sizeof(SCellActivationRS_ConfigId_r17));
    if (value.sCellActivationRS_ConfigToReleaseList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sCellActivationRS_ConfigToReleaseList_r17_items, 0, (std::size_t)value.sCellActivationRS_ConfigToReleaseList_r17_count * sizeof(SCellActivationRS_ConfigId_r17));
}
for (std::uint32_t i = 0; i < value.sCellActivationRS_ConfigToReleaseList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 255, tmp_value)) { goto fail; }
    value.sCellActivationRS_ConfigToReleaseList_r17_items[i] = (SCellActivationRS_ConfigId_r17)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_MeasConfig_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_MeasConfig_ExtGroup2(CSI_MeasConfig_ExtGroup2& value)
{
    if (value.has_sCellActivationRS_ConfigToAddModList_r17) {
        if (value.sCellActivationRS_ConfigToAddModList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sCellActivationRS_ConfigToAddModList_r17_count; ++i) {
                Free_SCellActivationRS_Config_r17(value.sCellActivationRS_ConfigToAddModList_r17_items[i]);
            }
            std::free(value.sCellActivationRS_ConfigToAddModList_r17_items);
            value.sCellActivationRS_ConfigToAddModList_r17_items = nullptr;
        }
        value.sCellActivationRS_ConfigToAddModList_r17_count = 0;
    }
    if (value.has_sCellActivationRS_ConfigToReleaseList_r17) {
        if (value.sCellActivationRS_ConfigToReleaseList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sCellActivationRS_ConfigToReleaseList_r17_count; ++i) {
            }
            std::free(value.sCellActivationRS_ConfigToReleaseList_r17_items);
            value.sCellActivationRS_ConfigToReleaseList_r17_items = nullptr;
        }
        value.sCellActivationRS_ConfigToReleaseList_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CSI_MeasConfig_ExtGroup3：ASN.1 CSI_MeasConfig_ExtGroup3；源文件第 5936 行；扩展添加组 [[ ]]。
// Encode_CSI_MeasConfig_ExtGroup3 只读不分配；Decode_CSI_MeasConfig_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_CSI_MeasConfig_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CSI_MeasConfig_ExtGroup3(Encoder& enc, const CSI_MeasConfig_ExtGroup3& value)
{
    enc.WriteBit(value.has_ltm_CSI_ReportConfigToAddModList_r18);
    enc.WriteBit(value.has_ltm_CSI_ReportConfigToReleaseList_r18);
    if (value.has_ltm_CSI_ReportConfigToAddModList_r18) {
enc.WriteConstrainedLength(value.ltm_CSI_ReportConfigToAddModList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.ltm_CSI_ReportConfigToAddModList_r18_count; ++i) {
    Encode_LTM_CSI_ReportConfig_r18(enc, value.ltm_CSI_ReportConfigToAddModList_r18_items[i]);
}
    }
    if (value.has_ltm_CSI_ReportConfigToReleaseList_r18) {
enc.WriteConstrainedLength(value.ltm_CSI_ReportConfigToReleaseList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.ltm_CSI_ReportConfigToReleaseList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.ltm_CSI_ReportConfigToReleaseList_r18_items[i]), 0, 47);
}
    }
    return enc.Error();
}

ErrorCode Decode_CSI_MeasConfig_ExtGroup3(Decoder& dec, CSI_MeasConfig_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.ltm_CSI_ReportConfigToAddModList_r18_count)) { goto fail; }
if (value.ltm_CSI_ReportConfigToAddModList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.ltm_CSI_ReportConfigToAddModList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.ltm_CSI_ReportConfigToAddModList_r18_count > 0u) {
    value.ltm_CSI_ReportConfigToAddModList_r18_items = (LTM_CSI_ReportConfig_r18*)std::malloc((std::size_t)value.ltm_CSI_ReportConfigToAddModList_r18_count * sizeof(LTM_CSI_ReportConfig_r18));
    if (value.ltm_CSI_ReportConfigToAddModList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.ltm_CSI_ReportConfigToAddModList_r18_items, 0, (std::size_t)value.ltm_CSI_ReportConfigToAddModList_r18_count * sizeof(LTM_CSI_ReportConfig_r18));
}
for (std::uint32_t i = 0; i < value.ltm_CSI_ReportConfigToAddModList_r18_count; ++i) {
    if (Decode_LTM_CSI_ReportConfig_r18(dec, value.ltm_CSI_ReportConfigToAddModList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.ltm_CSI_ReportConfigToReleaseList_r18_count)) { goto fail; }
if (value.ltm_CSI_ReportConfigToReleaseList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.ltm_CSI_ReportConfigToReleaseList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.ltm_CSI_ReportConfigToReleaseList_r18_count > 0u) {
    value.ltm_CSI_ReportConfigToReleaseList_r18_items = (LTM_CSI_ReportConfigId_r18*)std::malloc((std::size_t)value.ltm_CSI_ReportConfigToReleaseList_r18_count * sizeof(LTM_CSI_ReportConfigId_r18));
    if (value.ltm_CSI_ReportConfigToReleaseList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.ltm_CSI_ReportConfigToReleaseList_r18_items, 0, (std::size_t)value.ltm_CSI_ReportConfigToReleaseList_r18_count * sizeof(LTM_CSI_ReportConfigId_r18));
}
for (std::uint32_t i = 0; i < value.ltm_CSI_ReportConfigToReleaseList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 47, tmp_value)) { goto fail; }
    value.ltm_CSI_ReportConfigToReleaseList_r18_items[i] = (LTM_CSI_ReportConfigId_r18)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_MeasConfig_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_MeasConfig_ExtGroup3(CSI_MeasConfig_ExtGroup3& value)
{
    if (value.has_ltm_CSI_ReportConfigToAddModList_r18) {
        if (value.ltm_CSI_ReportConfigToAddModList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.ltm_CSI_ReportConfigToAddModList_r18_count; ++i) {
                Free_LTM_CSI_ReportConfig_r18(value.ltm_CSI_ReportConfigToAddModList_r18_items[i]);
            }
            std::free(value.ltm_CSI_ReportConfigToAddModList_r18_items);
            value.ltm_CSI_ReportConfigToAddModList_r18_items = nullptr;
        }
        value.ltm_CSI_ReportConfigToAddModList_r18_count = 0;
    }
    if (value.has_ltm_CSI_ReportConfigToReleaseList_r18) {
        if (value.ltm_CSI_ReportConfigToReleaseList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.ltm_CSI_ReportConfigToReleaseList_r18_count; ++i) {
            }
            std::free(value.ltm_CSI_ReportConfigToReleaseList_r18_items);
            value.ltm_CSI_ReportConfigToReleaseList_r18_items = nullptr;
        }
        value.ltm_CSI_ReportConfigToReleaseList_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CSI_AperiodicTriggerStateList：ASN.1 CSI-AperiodicTriggerStateList；源文件第 5801 行；SEQUENCE OF。
// Encode_CSI_AperiodicTriggerStateList 只读不分配；Decode_CSI_AperiodicTriggerStateList 可能 malloc（失败时内部已释放并清零）；Free_CSI_AperiodicTriggerStateList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CSI_AperiodicTriggerStateList(Encoder& enc, const CSI_AperiodicTriggerStateList& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 128u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_CSI_AperiodicTriggerState(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_AperiodicTriggerStateList(Decoder& dec, CSI_AperiodicTriggerStateList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 128u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 128u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (CSI_AperiodicTriggerState*)std::malloc((std::size_t)value.count * sizeof(CSI_AperiodicTriggerState));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(CSI_AperiodicTriggerState));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_CSI_AperiodicTriggerState(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_CSI_AperiodicTriggerStateList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_AperiodicTriggerStateList(CSI_AperiodicTriggerStateList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_CSI_AperiodicTriggerState(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_CSI_AperiodicTriggerStateList：ASN.1 SetupRelease<CSI-AperiodicTriggerStateList>；源文件第 5926 行；CHOICE。
// Encode_SetupRelease_CSI_AperiodicTriggerStateList 只读不分配；Decode_SetupRelease_CSI_AperiodicTriggerStateList 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_CSI_AperiodicTriggerStateList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_CSI_AperiodicTriggerStateList(Encoder& enc, const SetupRelease_CSI_AperiodicTriggerStateList& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_CSI_AperiodicTriggerStateList_Tag_release:
        (void)0;
        break;
    case SetupRelease_CSI_AperiodicTriggerStateList_Tag_setup:
        Encode_CSI_AperiodicTriggerStateList(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_CSI_AperiodicTriggerStateList(Decoder& dec, SetupRelease_CSI_AperiodicTriggerStateList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_CSI_AperiodicTriggerStateList_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_CSI_AperiodicTriggerStateList_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_CSI_AperiodicTriggerStateList_Tag_setup: {
        if (Decode_CSI_AperiodicTriggerStateList(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_CSI_AperiodicTriggerStateList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_CSI_AperiodicTriggerStateList(SetupRelease_CSI_AperiodicTriggerStateList& value)
{
    switch (value.tag) {
    case SetupRelease_CSI_AperiodicTriggerStateList_Tag_release:
        break;
    case SetupRelease_CSI_AperiodicTriggerStateList_Tag_setup:
        Free_CSI_AperiodicTriggerStateList(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CSI_SemiPersistentOnPUSCH_TriggerStateList：ASN.1 CSI-SemiPersistentOnPUSCH-TriggerStateList；源文件第 6307 行；SEQUENCE OF。
// Encode_CSI_SemiPersistentOnPUSCH_TriggerStateList 只读不分配；Decode_CSI_SemiPersistentOnPUSCH_TriggerStateList 可能 malloc（失败时内部已释放并清零）；Free_CSI_SemiPersistentOnPUSCH_TriggerStateList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CSI_SemiPersistentOnPUSCH_TriggerStateList(Encoder& enc, const CSI_SemiPersistentOnPUSCH_TriggerStateList& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 64u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_CSI_SemiPersistentOnPUSCH_TriggerState(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_SemiPersistentOnPUSCH_TriggerStateList(Decoder& dec, CSI_SemiPersistentOnPUSCH_TriggerStateList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 64u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 64u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (CSI_SemiPersistentOnPUSCH_TriggerState*)std::malloc((std::size_t)value.count * sizeof(CSI_SemiPersistentOnPUSCH_TriggerState));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(CSI_SemiPersistentOnPUSCH_TriggerState));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_CSI_SemiPersistentOnPUSCH_TriggerState(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_CSI_SemiPersistentOnPUSCH_TriggerStateList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_SemiPersistentOnPUSCH_TriggerStateList(CSI_SemiPersistentOnPUSCH_TriggerStateList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_CSI_SemiPersistentOnPUSCH_TriggerState(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList：ASN.1 SetupRelease<CSI-SemiPersistentOnPUSCH-TriggerStateList>；源文件第 5927 行；CHOICE。
// Encode_SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList 只读不分配；Decode_SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList(Encoder& enc, const SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList_Tag_release:
        (void)0;
        break;
    case SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList_Tag_setup:
        Encode_CSI_SemiPersistentOnPUSCH_TriggerStateList(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList(Decoder& dec, SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList_Tag_setup: {
        if (Decode_CSI_SemiPersistentOnPUSCH_TriggerStateList(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList(SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList& value)
{
    switch (value.tag) {
    case SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList_Tag_release:
        break;
    case SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList_Tag_setup:
        Free_CSI_SemiPersistentOnPUSCH_TriggerStateList(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CSI_MeasConfig：ASN.1 CSI-MeasConfig；源文件第 5905 行；SEQUENCE。
// Encode_CSI_MeasConfig 只读不分配；Decode_CSI_MeasConfig 可能 malloc（失败时内部已释放并清零）；Free_CSI_MeasConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CSI_MeasConfig(Encoder& enc, const CSI_MeasConfig& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_nzp_CSI_RS_ResourceToAddModList);
    enc.WriteBit(value.has_nzp_CSI_RS_ResourceToReleaseList);
    enc.WriteBit(value.has_nzp_CSI_RS_ResourceSetToAddModList);
    enc.WriteBit(value.has_nzp_CSI_RS_ResourceSetToReleaseList);
    enc.WriteBit(value.has_csi_IM_ResourceToAddModList);
    enc.WriteBit(value.has_csi_IM_ResourceToReleaseList);
    enc.WriteBit(value.has_csi_IM_ResourceSetToAddModList);
    enc.WriteBit(value.has_csi_IM_ResourceSetToReleaseList);
    enc.WriteBit(value.has_csi_SSB_ResourceSetToAddModList);
    enc.WriteBit(value.has_csi_SSB_ResourceSetToReleaseList);
    enc.WriteBit(value.has_csi_ResourceConfigToAddModList);
    enc.WriteBit(value.has_csi_ResourceConfigToReleaseList);
    enc.WriteBit(value.has_csi_ReportConfigToAddModList);
    enc.WriteBit(value.has_csi_ReportConfigToReleaseList);
    enc.WriteBit(value.has_reportTriggerSize);
    enc.WriteBit(value.has_aperiodicTriggerStateList);
    enc.WriteBit(value.has_semiPersistentOnPUSCH_TriggerStateList);
    if (value.has_nzp_CSI_RS_ResourceToAddModList) {
enc.WriteConstrainedLength(value.nzp_CSI_RS_ResourceToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nzp_CSI_RS_ResourceToAddModList_count; ++i) {
    Encode_NZP_CSI_RS_Resource(enc, value.nzp_CSI_RS_ResourceToAddModList_items[i]);
}
    }
    if (value.has_nzp_CSI_RS_ResourceToReleaseList) {
enc.WriteConstrainedLength(value.nzp_CSI_RS_ResourceToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nzp_CSI_RS_ResourceToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nzp_CSI_RS_ResourceToReleaseList_items[i]), 0, 191);
}
    }
    if (value.has_nzp_CSI_RS_ResourceSetToAddModList) {
enc.WriteConstrainedLength(value.nzp_CSI_RS_ResourceSetToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nzp_CSI_RS_ResourceSetToAddModList_count; ++i) {
    Encode_NZP_CSI_RS_ResourceSet(enc, value.nzp_CSI_RS_ResourceSetToAddModList_items[i]);
}
    }
    if (value.has_nzp_CSI_RS_ResourceSetToReleaseList) {
enc.WriteConstrainedLength(value.nzp_CSI_RS_ResourceSetToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nzp_CSI_RS_ResourceSetToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nzp_CSI_RS_ResourceSetToReleaseList_items[i]), 0, 63);
}
    }
    if (value.has_csi_IM_ResourceToAddModList) {
enc.WriteConstrainedLength(value.csi_IM_ResourceToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.csi_IM_ResourceToAddModList_count; ++i) {
    Encode_CSI_IM_Resource(enc, value.csi_IM_ResourceToAddModList_items[i]);
}
    }
    if (value.has_csi_IM_ResourceToReleaseList) {
enc.WriteConstrainedLength(value.csi_IM_ResourceToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.csi_IM_ResourceToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.csi_IM_ResourceToReleaseList_items[i]), 0, 31);
}
    }
    if (value.has_csi_IM_ResourceSetToAddModList) {
enc.WriteConstrainedLength(value.csi_IM_ResourceSetToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.csi_IM_ResourceSetToAddModList_count; ++i) {
    Encode_CSI_IM_ResourceSet(enc, value.csi_IM_ResourceSetToAddModList_items[i]);
}
    }
    if (value.has_csi_IM_ResourceSetToReleaseList) {
enc.WriteConstrainedLength(value.csi_IM_ResourceSetToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.csi_IM_ResourceSetToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.csi_IM_ResourceSetToReleaseList_items[i]), 0, 63);
}
    }
    if (value.has_csi_SSB_ResourceSetToAddModList) {
enc.WriteConstrainedLength(value.csi_SSB_ResourceSetToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.csi_SSB_ResourceSetToAddModList_count; ++i) {
    Encode_CSI_SSB_ResourceSet(enc, value.csi_SSB_ResourceSetToAddModList_items[i]);
}
    }
    if (value.has_csi_SSB_ResourceSetToReleaseList) {
enc.WriteConstrainedLength(value.csi_SSB_ResourceSetToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.csi_SSB_ResourceSetToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.csi_SSB_ResourceSetToReleaseList_items[i]), 0, 63);
}
    }
    if (value.has_csi_ResourceConfigToAddModList) {
enc.WriteConstrainedLength(value.csi_ResourceConfigToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.csi_ResourceConfigToAddModList_count; ++i) {
    Encode_CSI_ResourceConfig(enc, value.csi_ResourceConfigToAddModList_items[i]);
}
    }
    if (value.has_csi_ResourceConfigToReleaseList) {
enc.WriteConstrainedLength(value.csi_ResourceConfigToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.csi_ResourceConfigToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.csi_ResourceConfigToReleaseList_items[i]), 0, 111);
}
    }
    if (value.has_csi_ReportConfigToAddModList) {
enc.WriteConstrainedLength(value.csi_ReportConfigToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.csi_ReportConfigToAddModList_count; ++i) {
    Encode_CSI_ReportConfig(enc, value.csi_ReportConfigToAddModList_items[i]);
}
    }
    if (value.has_csi_ReportConfigToReleaseList) {
enc.WriteConstrainedLength(value.csi_ReportConfigToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.csi_ReportConfigToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.csi_ReportConfigToReleaseList_items[i]), 0, 47);
}
    }
    if (value.has_reportTriggerSize) {
        enc.WriteConstrainedInteger((std::int64_t)(value.reportTriggerSize), 0, 6);
    }
    if (value.has_aperiodicTriggerStateList) {
        Encode_SetupRelease_CSI_AperiodicTriggerStateList(enc, value.aperiodicTriggerStateList);
    }
    if (value.has_semiPersistentOnPUSCH_TriggerStateList) {
        Encode_SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList(enc, value.semiPersistentOnPUSCH_TriggerStateList);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_CSI_MeasConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_CSI_MeasConfig_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_CSI_MeasConfig_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_CSI_MeasConfig(Decoder& dec, CSI_MeasConfig& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.nzp_CSI_RS_ResourceToAddModList_count)) { goto fail; }
if (value.nzp_CSI_RS_ResourceToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nzp_CSI_RS_ResourceToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nzp_CSI_RS_ResourceToAddModList_count > 0u) {
    value.nzp_CSI_RS_ResourceToAddModList_items = (NZP_CSI_RS_Resource*)std::malloc((std::size_t)value.nzp_CSI_RS_ResourceToAddModList_count * sizeof(NZP_CSI_RS_Resource));
    if (value.nzp_CSI_RS_ResourceToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nzp_CSI_RS_ResourceToAddModList_items, 0, (std::size_t)value.nzp_CSI_RS_ResourceToAddModList_count * sizeof(NZP_CSI_RS_Resource));
}
for (std::uint32_t i = 0; i < value.nzp_CSI_RS_ResourceToAddModList_count; ++i) {
    if (Decode_NZP_CSI_RS_Resource(dec, value.nzp_CSI_RS_ResourceToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nzp_CSI_RS_ResourceToReleaseList_count)) { goto fail; }
if (value.nzp_CSI_RS_ResourceToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nzp_CSI_RS_ResourceToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nzp_CSI_RS_ResourceToReleaseList_count > 0u) {
    value.nzp_CSI_RS_ResourceToReleaseList_items = (NZP_CSI_RS_ResourceId*)std::malloc((std::size_t)value.nzp_CSI_RS_ResourceToReleaseList_count * sizeof(NZP_CSI_RS_ResourceId));
    if (value.nzp_CSI_RS_ResourceToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nzp_CSI_RS_ResourceToReleaseList_items, 0, (std::size_t)value.nzp_CSI_RS_ResourceToReleaseList_count * sizeof(NZP_CSI_RS_ResourceId));
}
for (std::uint32_t i = 0; i < value.nzp_CSI_RS_ResourceToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 191, tmp_value)) { goto fail; }
    value.nzp_CSI_RS_ResourceToReleaseList_items[i] = (NZP_CSI_RS_ResourceId)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nzp_CSI_RS_ResourceSetToAddModList_count)) { goto fail; }
if (value.nzp_CSI_RS_ResourceSetToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nzp_CSI_RS_ResourceSetToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nzp_CSI_RS_ResourceSetToAddModList_count > 0u) {
    value.nzp_CSI_RS_ResourceSetToAddModList_items = (NZP_CSI_RS_ResourceSet*)std::malloc((std::size_t)value.nzp_CSI_RS_ResourceSetToAddModList_count * sizeof(NZP_CSI_RS_ResourceSet));
    if (value.nzp_CSI_RS_ResourceSetToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nzp_CSI_RS_ResourceSetToAddModList_items, 0, (std::size_t)value.nzp_CSI_RS_ResourceSetToAddModList_count * sizeof(NZP_CSI_RS_ResourceSet));
}
for (std::uint32_t i = 0; i < value.nzp_CSI_RS_ResourceSetToAddModList_count; ++i) {
    if (Decode_NZP_CSI_RS_ResourceSet(dec, value.nzp_CSI_RS_ResourceSetToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nzp_CSI_RS_ResourceSetToReleaseList_count)) { goto fail; }
if (value.nzp_CSI_RS_ResourceSetToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nzp_CSI_RS_ResourceSetToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nzp_CSI_RS_ResourceSetToReleaseList_count > 0u) {
    value.nzp_CSI_RS_ResourceSetToReleaseList_items = (NZP_CSI_RS_ResourceSetId*)std::malloc((std::size_t)value.nzp_CSI_RS_ResourceSetToReleaseList_count * sizeof(NZP_CSI_RS_ResourceSetId));
    if (value.nzp_CSI_RS_ResourceSetToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nzp_CSI_RS_ResourceSetToReleaseList_items, 0, (std::size_t)value.nzp_CSI_RS_ResourceSetToReleaseList_count * sizeof(NZP_CSI_RS_ResourceSetId));
}
for (std::uint32_t i = 0; i < value.nzp_CSI_RS_ResourceSetToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.nzp_CSI_RS_ResourceSetToReleaseList_items[i] = (NZP_CSI_RS_ResourceSetId)tmp_value;
}
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.csi_IM_ResourceToAddModList_count)) { goto fail; }
if (value.csi_IM_ResourceToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.csi_IM_ResourceToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.csi_IM_ResourceToAddModList_count > 0u) {
    value.csi_IM_ResourceToAddModList_items = (CSI_IM_Resource*)std::malloc((std::size_t)value.csi_IM_ResourceToAddModList_count * sizeof(CSI_IM_Resource));
    if (value.csi_IM_ResourceToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.csi_IM_ResourceToAddModList_items, 0, (std::size_t)value.csi_IM_ResourceToAddModList_count * sizeof(CSI_IM_Resource));
}
for (std::uint32_t i = 0; i < value.csi_IM_ResourceToAddModList_count; ++i) {
    if (Decode_CSI_IM_Resource(dec, value.csi_IM_ResourceToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_5) {
if (!dec.ReadConstrainedLength(0u, 0u, value.csi_IM_ResourceToReleaseList_count)) { goto fail; }
if (value.csi_IM_ResourceToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.csi_IM_ResourceToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.csi_IM_ResourceToReleaseList_count > 0u) {
    value.csi_IM_ResourceToReleaseList_items = (CSI_IM_ResourceId*)std::malloc((std::size_t)value.csi_IM_ResourceToReleaseList_count * sizeof(CSI_IM_ResourceId));
    if (value.csi_IM_ResourceToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.csi_IM_ResourceToReleaseList_items, 0, (std::size_t)value.csi_IM_ResourceToReleaseList_count * sizeof(CSI_IM_ResourceId));
}
for (std::uint32_t i = 0; i < value.csi_IM_ResourceToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.csi_IM_ResourceToReleaseList_items[i] = (CSI_IM_ResourceId)tmp_value;
}
    }
    if (present_6) {
if (!dec.ReadConstrainedLength(0u, 0u, value.csi_IM_ResourceSetToAddModList_count)) { goto fail; }
if (value.csi_IM_ResourceSetToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.csi_IM_ResourceSetToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.csi_IM_ResourceSetToAddModList_count > 0u) {
    value.csi_IM_ResourceSetToAddModList_items = (CSI_IM_ResourceSet*)std::malloc((std::size_t)value.csi_IM_ResourceSetToAddModList_count * sizeof(CSI_IM_ResourceSet));
    if (value.csi_IM_ResourceSetToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.csi_IM_ResourceSetToAddModList_items, 0, (std::size_t)value.csi_IM_ResourceSetToAddModList_count * sizeof(CSI_IM_ResourceSet));
}
for (std::uint32_t i = 0; i < value.csi_IM_ResourceSetToAddModList_count; ++i) {
    if (Decode_CSI_IM_ResourceSet(dec, value.csi_IM_ResourceSetToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_7) {
if (!dec.ReadConstrainedLength(0u, 0u, value.csi_IM_ResourceSetToReleaseList_count)) { goto fail; }
if (value.csi_IM_ResourceSetToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.csi_IM_ResourceSetToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.csi_IM_ResourceSetToReleaseList_count > 0u) {
    value.csi_IM_ResourceSetToReleaseList_items = (CSI_IM_ResourceSetId*)std::malloc((std::size_t)value.csi_IM_ResourceSetToReleaseList_count * sizeof(CSI_IM_ResourceSetId));
    if (value.csi_IM_ResourceSetToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.csi_IM_ResourceSetToReleaseList_items, 0, (std::size_t)value.csi_IM_ResourceSetToReleaseList_count * sizeof(CSI_IM_ResourceSetId));
}
for (std::uint32_t i = 0; i < value.csi_IM_ResourceSetToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.csi_IM_ResourceSetToReleaseList_items[i] = (CSI_IM_ResourceSetId)tmp_value;
}
    }
    if (present_8) {
if (!dec.ReadConstrainedLength(0u, 0u, value.csi_SSB_ResourceSetToAddModList_count)) { goto fail; }
if (value.csi_SSB_ResourceSetToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.csi_SSB_ResourceSetToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.csi_SSB_ResourceSetToAddModList_count > 0u) {
    value.csi_SSB_ResourceSetToAddModList_items = (CSI_SSB_ResourceSet*)std::malloc((std::size_t)value.csi_SSB_ResourceSetToAddModList_count * sizeof(CSI_SSB_ResourceSet));
    if (value.csi_SSB_ResourceSetToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.csi_SSB_ResourceSetToAddModList_items, 0, (std::size_t)value.csi_SSB_ResourceSetToAddModList_count * sizeof(CSI_SSB_ResourceSet));
}
for (std::uint32_t i = 0; i < value.csi_SSB_ResourceSetToAddModList_count; ++i) {
    if (Decode_CSI_SSB_ResourceSet(dec, value.csi_SSB_ResourceSetToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_9) {
if (!dec.ReadConstrainedLength(0u, 0u, value.csi_SSB_ResourceSetToReleaseList_count)) { goto fail; }
if (value.csi_SSB_ResourceSetToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.csi_SSB_ResourceSetToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.csi_SSB_ResourceSetToReleaseList_count > 0u) {
    value.csi_SSB_ResourceSetToReleaseList_items = (CSI_SSB_ResourceSetId*)std::malloc((std::size_t)value.csi_SSB_ResourceSetToReleaseList_count * sizeof(CSI_SSB_ResourceSetId));
    if (value.csi_SSB_ResourceSetToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.csi_SSB_ResourceSetToReleaseList_items, 0, (std::size_t)value.csi_SSB_ResourceSetToReleaseList_count * sizeof(CSI_SSB_ResourceSetId));
}
for (std::uint32_t i = 0; i < value.csi_SSB_ResourceSetToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.csi_SSB_ResourceSetToReleaseList_items[i] = (CSI_SSB_ResourceSetId)tmp_value;
}
    }
    if (present_10) {
if (!dec.ReadConstrainedLength(0u, 0u, value.csi_ResourceConfigToAddModList_count)) { goto fail; }
if (value.csi_ResourceConfigToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.csi_ResourceConfigToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.csi_ResourceConfigToAddModList_count > 0u) {
    value.csi_ResourceConfigToAddModList_items = (CSI_ResourceConfig*)std::malloc((std::size_t)value.csi_ResourceConfigToAddModList_count * sizeof(CSI_ResourceConfig));
    if (value.csi_ResourceConfigToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.csi_ResourceConfigToAddModList_items, 0, (std::size_t)value.csi_ResourceConfigToAddModList_count * sizeof(CSI_ResourceConfig));
}
for (std::uint32_t i = 0; i < value.csi_ResourceConfigToAddModList_count; ++i) {
    if (Decode_CSI_ResourceConfig(dec, value.csi_ResourceConfigToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_11) {
if (!dec.ReadConstrainedLength(0u, 0u, value.csi_ResourceConfigToReleaseList_count)) { goto fail; }
if (value.csi_ResourceConfigToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.csi_ResourceConfigToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.csi_ResourceConfigToReleaseList_count > 0u) {
    value.csi_ResourceConfigToReleaseList_items = (CSI_ResourceConfigId*)std::malloc((std::size_t)value.csi_ResourceConfigToReleaseList_count * sizeof(CSI_ResourceConfigId));
    if (value.csi_ResourceConfigToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.csi_ResourceConfigToReleaseList_items, 0, (std::size_t)value.csi_ResourceConfigToReleaseList_count * sizeof(CSI_ResourceConfigId));
}
for (std::uint32_t i = 0; i < value.csi_ResourceConfigToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 111, tmp_value)) { goto fail; }
    value.csi_ResourceConfigToReleaseList_items[i] = (CSI_ResourceConfigId)tmp_value;
}
    }
    if (present_12) {
if (!dec.ReadConstrainedLength(0u, 0u, value.csi_ReportConfigToAddModList_count)) { goto fail; }
if (value.csi_ReportConfigToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.csi_ReportConfigToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.csi_ReportConfigToAddModList_count > 0u) {
    value.csi_ReportConfigToAddModList_items = (CSI_ReportConfig*)std::malloc((std::size_t)value.csi_ReportConfigToAddModList_count * sizeof(CSI_ReportConfig));
    if (value.csi_ReportConfigToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.csi_ReportConfigToAddModList_items, 0, (std::size_t)value.csi_ReportConfigToAddModList_count * sizeof(CSI_ReportConfig));
}
for (std::uint32_t i = 0; i < value.csi_ReportConfigToAddModList_count; ++i) {
    if (Decode_CSI_ReportConfig(dec, value.csi_ReportConfigToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_13) {
if (!dec.ReadConstrainedLength(0u, 0u, value.csi_ReportConfigToReleaseList_count)) { goto fail; }
if (value.csi_ReportConfigToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.csi_ReportConfigToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.csi_ReportConfigToReleaseList_count > 0u) {
    value.csi_ReportConfigToReleaseList_items = (CSI_ReportConfigId*)std::malloc((std::size_t)value.csi_ReportConfigToReleaseList_count * sizeof(CSI_ReportConfigId));
    if (value.csi_ReportConfigToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.csi_ReportConfigToReleaseList_items, 0, (std::size_t)value.csi_ReportConfigToReleaseList_count * sizeof(CSI_ReportConfigId));
}
for (std::uint32_t i = 0; i < value.csi_ReportConfigToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 47, tmp_value)) { goto fail; }
    value.csi_ReportConfigToReleaseList_items[i] = (CSI_ReportConfigId)tmp_value;
}
    }
    if (present_14) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.reportTriggerSize = (int64_t)tmp_value;
    }
    if (present_15) {
        if (Decode_SetupRelease_CSI_AperiodicTriggerStateList(dec, value.aperiodicTriggerStateList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_16) {
        if (Decode_SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList(dec, value.semiPersistentOnPUSCH_TriggerStateList) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_CSI_MeasConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_CSI_MeasConfig_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_CSI_MeasConfig_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    Free_CSI_MeasConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_MeasConfig(CSI_MeasConfig& value)
{
    if (value.has_nzp_CSI_RS_ResourceToAddModList) {
        if (value.nzp_CSI_RS_ResourceToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nzp_CSI_RS_ResourceToAddModList_count; ++i) {
                Free_NZP_CSI_RS_Resource(value.nzp_CSI_RS_ResourceToAddModList_items[i]);
            }
            std::free(value.nzp_CSI_RS_ResourceToAddModList_items);
            value.nzp_CSI_RS_ResourceToAddModList_items = nullptr;
        }
        value.nzp_CSI_RS_ResourceToAddModList_count = 0;
    }
    if (value.has_nzp_CSI_RS_ResourceToReleaseList) {
        if (value.nzp_CSI_RS_ResourceToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nzp_CSI_RS_ResourceToReleaseList_count; ++i) {
            }
            std::free(value.nzp_CSI_RS_ResourceToReleaseList_items);
            value.nzp_CSI_RS_ResourceToReleaseList_items = nullptr;
        }
        value.nzp_CSI_RS_ResourceToReleaseList_count = 0;
    }
    if (value.has_nzp_CSI_RS_ResourceSetToAddModList) {
        if (value.nzp_CSI_RS_ResourceSetToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nzp_CSI_RS_ResourceSetToAddModList_count; ++i) {
                Free_NZP_CSI_RS_ResourceSet(value.nzp_CSI_RS_ResourceSetToAddModList_items[i]);
            }
            std::free(value.nzp_CSI_RS_ResourceSetToAddModList_items);
            value.nzp_CSI_RS_ResourceSetToAddModList_items = nullptr;
        }
        value.nzp_CSI_RS_ResourceSetToAddModList_count = 0;
    }
    if (value.has_nzp_CSI_RS_ResourceSetToReleaseList) {
        if (value.nzp_CSI_RS_ResourceSetToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nzp_CSI_RS_ResourceSetToReleaseList_count; ++i) {
            }
            std::free(value.nzp_CSI_RS_ResourceSetToReleaseList_items);
            value.nzp_CSI_RS_ResourceSetToReleaseList_items = nullptr;
        }
        value.nzp_CSI_RS_ResourceSetToReleaseList_count = 0;
    }
    if (value.has_csi_IM_ResourceToAddModList) {
        if (value.csi_IM_ResourceToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.csi_IM_ResourceToAddModList_count; ++i) {
                Free_CSI_IM_Resource(value.csi_IM_ResourceToAddModList_items[i]);
            }
            std::free(value.csi_IM_ResourceToAddModList_items);
            value.csi_IM_ResourceToAddModList_items = nullptr;
        }
        value.csi_IM_ResourceToAddModList_count = 0;
    }
    if (value.has_csi_IM_ResourceToReleaseList) {
        if (value.csi_IM_ResourceToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.csi_IM_ResourceToReleaseList_count; ++i) {
            }
            std::free(value.csi_IM_ResourceToReleaseList_items);
            value.csi_IM_ResourceToReleaseList_items = nullptr;
        }
        value.csi_IM_ResourceToReleaseList_count = 0;
    }
    if (value.has_csi_IM_ResourceSetToAddModList) {
        if (value.csi_IM_ResourceSetToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.csi_IM_ResourceSetToAddModList_count; ++i) {
                Free_CSI_IM_ResourceSet(value.csi_IM_ResourceSetToAddModList_items[i]);
            }
            std::free(value.csi_IM_ResourceSetToAddModList_items);
            value.csi_IM_ResourceSetToAddModList_items = nullptr;
        }
        value.csi_IM_ResourceSetToAddModList_count = 0;
    }
    if (value.has_csi_IM_ResourceSetToReleaseList) {
        if (value.csi_IM_ResourceSetToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.csi_IM_ResourceSetToReleaseList_count; ++i) {
            }
            std::free(value.csi_IM_ResourceSetToReleaseList_items);
            value.csi_IM_ResourceSetToReleaseList_items = nullptr;
        }
        value.csi_IM_ResourceSetToReleaseList_count = 0;
    }
    if (value.has_csi_SSB_ResourceSetToAddModList) {
        if (value.csi_SSB_ResourceSetToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.csi_SSB_ResourceSetToAddModList_count; ++i) {
                Free_CSI_SSB_ResourceSet(value.csi_SSB_ResourceSetToAddModList_items[i]);
            }
            std::free(value.csi_SSB_ResourceSetToAddModList_items);
            value.csi_SSB_ResourceSetToAddModList_items = nullptr;
        }
        value.csi_SSB_ResourceSetToAddModList_count = 0;
    }
    if (value.has_csi_SSB_ResourceSetToReleaseList) {
        if (value.csi_SSB_ResourceSetToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.csi_SSB_ResourceSetToReleaseList_count; ++i) {
            }
            std::free(value.csi_SSB_ResourceSetToReleaseList_items);
            value.csi_SSB_ResourceSetToReleaseList_items = nullptr;
        }
        value.csi_SSB_ResourceSetToReleaseList_count = 0;
    }
    if (value.has_csi_ResourceConfigToAddModList) {
        if (value.csi_ResourceConfigToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.csi_ResourceConfigToAddModList_count; ++i) {
                Free_CSI_ResourceConfig(value.csi_ResourceConfigToAddModList_items[i]);
            }
            std::free(value.csi_ResourceConfigToAddModList_items);
            value.csi_ResourceConfigToAddModList_items = nullptr;
        }
        value.csi_ResourceConfigToAddModList_count = 0;
    }
    if (value.has_csi_ResourceConfigToReleaseList) {
        if (value.csi_ResourceConfigToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.csi_ResourceConfigToReleaseList_count; ++i) {
            }
            std::free(value.csi_ResourceConfigToReleaseList_items);
            value.csi_ResourceConfigToReleaseList_items = nullptr;
        }
        value.csi_ResourceConfigToReleaseList_count = 0;
    }
    if (value.has_csi_ReportConfigToAddModList) {
        if (value.csi_ReportConfigToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.csi_ReportConfigToAddModList_count; ++i) {
                Free_CSI_ReportConfig(value.csi_ReportConfigToAddModList_items[i]);
            }
            std::free(value.csi_ReportConfigToAddModList_items);
            value.csi_ReportConfigToAddModList_items = nullptr;
        }
        value.csi_ReportConfigToAddModList_count = 0;
    }
    if (value.has_csi_ReportConfigToReleaseList) {
        if (value.csi_ReportConfigToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.csi_ReportConfigToReleaseList_count; ++i) {
            }
            std::free(value.csi_ReportConfigToReleaseList_items);
            value.csi_ReportConfigToReleaseList_items = nullptr;
        }
        value.csi_ReportConfigToReleaseList_count = 0;
    }
    if (value.has_reportTriggerSize) {
    }
    if (value.has_aperiodicTriggerStateList) {
        Free_SetupRelease_CSI_AperiodicTriggerStateList(value.aperiodicTriggerStateList);
    }
    if (value.has_semiPersistentOnPUSCH_TriggerStateList) {
        Free_SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList(value.semiPersistentOnPUSCH_TriggerStateList);
    }
    if (value.has_extGroup1) {
        Free_CSI_MeasConfig_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_CSI_MeasConfig_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_CSI_MeasConfig_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_CSI_MeasConfig：ASN.1 SetupRelease<CSI-MeasConfig>；源文件第 12426 行；CHOICE。
// Encode_SetupRelease_CSI_MeasConfig 只读不分配；Decode_SetupRelease_CSI_MeasConfig 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_CSI_MeasConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_CSI_MeasConfig(Encoder& enc, const SetupRelease_CSI_MeasConfig& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_CSI_MeasConfig_Tag_release:
        (void)0;
        break;
    case SetupRelease_CSI_MeasConfig_Tag_setup:
        Encode_CSI_MeasConfig(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_CSI_MeasConfig(Decoder& dec, SetupRelease_CSI_MeasConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_CSI_MeasConfig_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_CSI_MeasConfig_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_CSI_MeasConfig_Tag_setup: {
        if (Decode_CSI_MeasConfig(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_CSI_MeasConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_CSI_MeasConfig(SetupRelease_CSI_MeasConfig& value)
{
    switch (value.tag) {
    case SetupRelease_CSI_MeasConfig_Tag_release:
        break;
    case SetupRelease_CSI_MeasConfig_Tag_setup:
        Free_CSI_MeasConfig(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ServingCellConfig：ASN.1 ServingCellConfig；源文件第 12411 行；SEQUENCE。
// Encode_ServingCellConfig 只读不分配；Decode_ServingCellConfig 可能 malloc（失败时内部已释放并清零）；Free_ServingCellConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ServingCellConfig(Encoder& enc, const ServingCellConfig& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4 || value.has_extGroup5 || value.has_extGroup6 || value.has_extGroup7 || value.has_extGroup8;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_tdd_UL_DL_ConfigurationDedicated);
    enc.WriteBit(value.has_initialDownlinkBWP);
    enc.WriteBit(value.has_downlinkBWP_ToReleaseList);
    enc.WriteBit(value.has_downlinkBWP_ToAddModList);
    enc.WriteBit(value.has_firstActiveDownlinkBWP_Id);
    enc.WriteBit(value.has_bwp_InactivityTimer);
    enc.WriteBit(value.has_defaultDownlinkBWP_Id);
    enc.WriteBit(value.has_uplinkConfig);
    enc.WriteBit(value.has_supplementaryUplink);
    enc.WriteBit(value.has_pdcch_ServingCellConfig);
    enc.WriteBit(value.has_pdsch_ServingCellConfig);
    enc.WriteBit(value.has_csi_MeasConfig);
    enc.WriteBit(value.has_sCellDeactivationTimer);
    enc.WriteBit(value.has_crossCarrierSchedulingConfig);
    enc.WriteBit(value.has_dummy1);
    enc.WriteBit(value.has_pathlossReferenceLinking);
    enc.WriteBit(value.has_servingCellMO);
    if (value.has_tdd_UL_DL_ConfigurationDedicated) {
        Encode_TDD_UL_DL_ConfigDedicated(enc, value.tdd_UL_DL_ConfigurationDedicated);
    }
    if (value.has_initialDownlinkBWP) {
        Encode_BWP_DownlinkDedicated(enc, value.initialDownlinkBWP);
    }
    if (value.has_downlinkBWP_ToReleaseList) {
enc.WriteConstrainedLength(value.downlinkBWP_ToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.downlinkBWP_ToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.downlinkBWP_ToReleaseList_items[i]), 0, 4);
}
    }
    if (value.has_downlinkBWP_ToAddModList) {
enc.WriteConstrainedLength(value.downlinkBWP_ToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.downlinkBWP_ToAddModList_count; ++i) {
    Encode_BWP_Downlink(enc, value.downlinkBWP_ToAddModList_items[i]);
}
    }
    if (value.has_firstActiveDownlinkBWP_Id) {
        enc.WriteConstrainedInteger((std::int64_t)(value.firstActiveDownlinkBWP_Id), 0, 4);
    }
    if (value.has_bwp_InactivityTimer) {
        enc.WriteConstrainedInteger((std::int64_t)(value.bwp_InactivityTimer), 0, 30);
    }
    if (value.has_defaultDownlinkBWP_Id) {
        enc.WriteConstrainedInteger((std::int64_t)(value.defaultDownlinkBWP_Id), 0, 4);
    }
    if (value.has_uplinkConfig) {
        Encode_UplinkConfig(enc, value.uplinkConfig);
    }
    if (value.has_supplementaryUplink) {
        Encode_UplinkConfig(enc, value.supplementaryUplink);
    }
    if (value.has_pdcch_ServingCellConfig) {
        Encode_SetupRelease_PDCCH_ServingCellConfig(enc, value.pdcch_ServingCellConfig);
    }
    if (value.has_pdsch_ServingCellConfig) {
        Encode_SetupRelease_PDSCH_ServingCellConfig(enc, value.pdsch_ServingCellConfig);
    }
    if (value.has_csi_MeasConfig) {
        Encode_SetupRelease_CSI_MeasConfig(enc, value.csi_MeasConfig);
    }
    if (value.has_sCellDeactivationTimer) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sCellDeactivationTimer), 0, 15);
    }
    if (value.has_crossCarrierSchedulingConfig) {
        Encode_CrossCarrierSchedulingConfig(enc, value.crossCarrierSchedulingConfig);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.tag_Id), 0, 3);
    if (value.has_dummy1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy1), 0, 0);
    }
    if (value.has_pathlossReferenceLinking) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pathlossReferenceLinking), 0, 1);
    }
    if (value.has_servingCellMO) {
        enc.WriteConstrainedInteger((std::int64_t)(value.servingCellMO), 1, 64);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(8u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        enc.WriteBit(value.has_extGroup4);
        enc.WriteBit(value.has_extGroup5);
        enc.WriteBit(value.has_extGroup6);
        enc.WriteBit(value.has_extGroup7);
        enc.WriteBit(value.has_extGroup8);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_ServingCellConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_ServingCellConfig_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_ServingCellConfig_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_ServingCellConfig_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup5) {
    Encoder sub;
    Encode_ServingCellConfig_ExtGroup5(sub, value.extGroup5);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup6) {
    Encoder sub;
    Encode_ServingCellConfig_ExtGroup6(sub, value.extGroup6);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup7) {
    Encoder sub;
    Encode_ServingCellConfig_ExtGroup7(sub, value.extGroup7);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup8) {
    Encoder sub;
    Encode_ServingCellConfig_ExtGroup8(sub, value.extGroup8);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfig(Decoder& dec, ServingCellConfig& value)
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
        if (Decode_TDD_UL_DL_ConfigDedicated(dec, value.tdd_UL_DL_ConfigurationDedicated) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BWP_DownlinkDedicated(dec, value.initialDownlinkBWP) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.downlinkBWP_ToReleaseList_count)) { goto fail; }
if (value.downlinkBWP_ToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.downlinkBWP_ToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.downlinkBWP_ToReleaseList_count > 0u) {
    value.downlinkBWP_ToReleaseList_items = (BWP_Id*)std::malloc((std::size_t)value.downlinkBWP_ToReleaseList_count * sizeof(BWP_Id));
    if (value.downlinkBWP_ToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.downlinkBWP_ToReleaseList_items, 0, (std::size_t)value.downlinkBWP_ToReleaseList_count * sizeof(BWP_Id));
}
for (std::uint32_t i = 0; i < value.downlinkBWP_ToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
    value.downlinkBWP_ToReleaseList_items[i] = (BWP_Id)tmp_value;
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.downlinkBWP_ToAddModList_count)) { goto fail; }
if (value.downlinkBWP_ToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.downlinkBWP_ToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.downlinkBWP_ToAddModList_count > 0u) {
    value.downlinkBWP_ToAddModList_items = (BWP_Downlink*)std::malloc((std::size_t)value.downlinkBWP_ToAddModList_count * sizeof(BWP_Downlink));
    if (value.downlinkBWP_ToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.downlinkBWP_ToAddModList_items, 0, (std::size_t)value.downlinkBWP_ToAddModList_count * sizeof(BWP_Downlink));
}
for (std::uint32_t i = 0; i < value.downlinkBWP_ToAddModList_count; ++i) {
    if (Decode_BWP_Downlink(dec, value.downlinkBWP_ToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.firstActiveDownlinkBWP_Id = (BWP_Id)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.bwp_InactivityTimer = (ServingCellConfig_Bwp_InactivityTimer)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.defaultDownlinkBWP_Id = (BWP_Id)tmp_value;
    }
    if (present_7) {
        if (Decode_UplinkConfig(dec, value.uplinkConfig) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        if (Decode_UplinkConfig(dec, value.supplementaryUplink) != ErrorCode_Ok) { goto fail; }
    }
    if (present_9) {
        if (Decode_SetupRelease_PDCCH_ServingCellConfig(dec, value.pdcch_ServingCellConfig) != ErrorCode_Ok) { goto fail; }
    }
    if (present_10) {
        if (Decode_SetupRelease_PDSCH_ServingCellConfig(dec, value.pdsch_ServingCellConfig) != ErrorCode_Ok) { goto fail; }
    }
    if (present_11) {
        if (Decode_SetupRelease_CSI_MeasConfig(dec, value.csi_MeasConfig) != ErrorCode_Ok) { goto fail; }
    }
    if (present_12) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.sCellDeactivationTimer = (ServingCellConfig_SCellDeactivationTimer)tmp_value;
    }
    if (present_13) {
        if (Decode_CrossCarrierSchedulingConfig(dec, value.crossCarrierSchedulingConfig) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.tag_Id = (TAG_Id)tmp_value;
    }
    if (present_14) {
        value.dummy1 = (ServingCellConfig_Dummy1)0;
    }
    if (present_15) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.pathlossReferenceLinking = (ServingCellConfig_PathlossReferenceLinking)tmp_value;
    }
    if (present_16) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.servingCellMO = (MeasObjectId)tmp_value;
    }
    if (extension) {
        std::uint32_t addition_count = 0;
        if (!dec.ReadNormallySmallLength(addition_count)) { goto fail; }
        if (addition_count > 8u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        bool addition_present[8] = {false};
        for (std::uint32_t i = 0; i < addition_count; ++i) {
            bool bit = false;
            if (!dec.ReadBit(bit)) { goto fail; }
            addition_present[i] = bit;
        }
        if (addition_present[0]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_ServingCellConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_ServingCellConfig_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_ServingCellConfig_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_ServingCellConfig_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    if (Decode_ServingCellConfig_ExtGroup5(sub, value.extGroup5) != ErrorCode_Ok) {
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
    if (Decode_ServingCellConfig_ExtGroup6(sub, value.extGroup6) != ErrorCode_Ok) {
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
    if (Decode_ServingCellConfig_ExtGroup7(sub, value.extGroup7) != ErrorCode_Ok) {
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
    if (Decode_ServingCellConfig_ExtGroup8(sub, value.extGroup8) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup8 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfig(ServingCellConfig& value)
{
    if (value.has_tdd_UL_DL_ConfigurationDedicated) {
        Free_TDD_UL_DL_ConfigDedicated(value.tdd_UL_DL_ConfigurationDedicated);
    }
    if (value.has_initialDownlinkBWP) {
        Free_BWP_DownlinkDedicated(value.initialDownlinkBWP);
    }
    if (value.has_downlinkBWP_ToReleaseList) {
        if (value.downlinkBWP_ToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.downlinkBWP_ToReleaseList_count; ++i) {
            }
            std::free(value.downlinkBWP_ToReleaseList_items);
            value.downlinkBWP_ToReleaseList_items = nullptr;
        }
        value.downlinkBWP_ToReleaseList_count = 0;
    }
    if (value.has_downlinkBWP_ToAddModList) {
        if (value.downlinkBWP_ToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.downlinkBWP_ToAddModList_count; ++i) {
                Free_BWP_Downlink(value.downlinkBWP_ToAddModList_items[i]);
            }
            std::free(value.downlinkBWP_ToAddModList_items);
            value.downlinkBWP_ToAddModList_items = nullptr;
        }
        value.downlinkBWP_ToAddModList_count = 0;
    }
    if (value.has_firstActiveDownlinkBWP_Id) {
    }
    if (value.has_bwp_InactivityTimer) {
    }
    if (value.has_defaultDownlinkBWP_Id) {
    }
    if (value.has_uplinkConfig) {
        Free_UplinkConfig(value.uplinkConfig);
    }
    if (value.has_supplementaryUplink) {
        Free_UplinkConfig(value.supplementaryUplink);
    }
    if (value.has_pdcch_ServingCellConfig) {
        Free_SetupRelease_PDCCH_ServingCellConfig(value.pdcch_ServingCellConfig);
    }
    if (value.has_pdsch_ServingCellConfig) {
        Free_SetupRelease_PDSCH_ServingCellConfig(value.pdsch_ServingCellConfig);
    }
    if (value.has_csi_MeasConfig) {
        Free_SetupRelease_CSI_MeasConfig(value.csi_MeasConfig);
    }
    if (value.has_sCellDeactivationTimer) {
    }
    if (value.has_crossCarrierSchedulingConfig) {
        Free_CrossCarrierSchedulingConfig(value.crossCarrierSchedulingConfig);
    }
    if (value.has_dummy1) {
    }
    if (value.has_pathlossReferenceLinking) {
    }
    if (value.has_servingCellMO) {
    }
    if (value.has_extGroup1) {
        Free_ServingCellConfig_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_ServingCellConfig_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_ServingCellConfig_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_ServingCellConfig_ExtGroup4(value.extGroup4);
    }
    if (value.has_extGroup5) {
        Free_ServingCellConfig_ExtGroup5(value.extGroup5);
    }
    if (value.has_extGroup6) {
        Free_ServingCellConfig_ExtGroup6(value.extGroup6);
    }
    if (value.has_extGroup7) {
        Free_ServingCellConfig_ExtGroup7(value.extGroup7);
    }
    if (value.has_extGroup8) {
        Free_ServingCellConfig_ExtGroup8(value.extGroup8);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLF_TimersAndConstants_ExtGroup1：ASN.1 RLF_TimersAndConstants_ExtGroup1；源文件第 12010 行；扩展添加组 [[ ]]。
// Encode_RLF_TimersAndConstants_ExtGroup1 只读不分配；Decode_RLF_TimersAndConstants_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_RLF_TimersAndConstants_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLF_TimersAndConstants_ExtGroup1(Encoder& enc, const RLF_TimersAndConstants_ExtGroup1& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.t311), 0, 6);
    return enc.Error();
}

ErrorCode Decode_RLF_TimersAndConstants_ExtGroup1(Decoder& dec, RLF_TimersAndConstants_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.t311 = (RLF_TimersAndConstants_ExtGroup1_T311)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLF_TimersAndConstants_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLF_TimersAndConstants_ExtGroup1(RLF_TimersAndConstants_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLF_TimersAndConstants：ASN.1 RLF-TimersAndConstants；源文件第 12005 行；SEQUENCE。
// Encode_RLF_TimersAndConstants 只读不分配；Decode_RLF_TimersAndConstants 可能 malloc（失败时内部已释放并清零）；Free_RLF_TimersAndConstants 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLF_TimersAndConstants(Encoder& enc, const RLF_TimersAndConstants& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.t310), 0, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.n310), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.n311), 0, 7);
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_RLF_TimersAndConstants_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_RLF_TimersAndConstants(Decoder& dec, RLF_TimersAndConstants& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 8, tmp_value)) { goto fail; }
        value.t310 = (RLF_TimersAndConstants_T310)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.n310 = (RLF_TimersAndConstants_N310)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.n311 = (RLF_TimersAndConstants_N311)tmp_value;
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
    if (Decode_RLF_TimersAndConstants_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_RLF_TimersAndConstants(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLF_TimersAndConstants(RLF_TimersAndConstants& value)
{
    if (value.has_extGroup1) {
        Free_RLF_TimersAndConstants_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_RLF_TimersAndConstants：ASN.1 SetupRelease<RLF-TimersAndConstants>；源文件第 4900 行；CHOICE。
// Encode_SetupRelease_RLF_TimersAndConstants 只读不分配；Decode_SetupRelease_RLF_TimersAndConstants 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_RLF_TimersAndConstants 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_RLF_TimersAndConstants(Encoder& enc, const SetupRelease_RLF_TimersAndConstants& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_RLF_TimersAndConstants_Tag_release:
        (void)0;
        break;
    case SetupRelease_RLF_TimersAndConstants_Tag_setup:
        Encode_RLF_TimersAndConstants(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_RLF_TimersAndConstants(Decoder& dec, SetupRelease_RLF_TimersAndConstants& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_RLF_TimersAndConstants_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_RLF_TimersAndConstants_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_RLF_TimersAndConstants_Tag_setup: {
        if (Decode_RLF_TimersAndConstants(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_RLF_TimersAndConstants(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_RLF_TimersAndConstants(SetupRelease_RLF_TimersAndConstants& value)
{
    switch (value.tag) {
    case SetupRelease_RLF_TimersAndConstants_Tag_release:
        break;
    case SetupRelease_RLF_TimersAndConstants_Tag_setup:
        Free_RLF_TimersAndConstants(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SpCellConfig：ASN.1 SpCellConfig；源文件第 4897 行；SEQUENCE。
// Encode_SpCellConfig 只读不分配；Decode_SpCellConfig 可能 malloc（失败时内部已释放并清零）；Free_SpCellConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SpCellConfig(Encoder& enc, const SpCellConfig& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_servCellIndex);
    enc.WriteBit(value.has_reconfigurationWithSync);
    enc.WriteBit(value.has_rlf_TimersAndConstants);
    enc.WriteBit(value.has_rlmInSyncOutOfSyncThreshold);
    enc.WriteBit(value.has_spCellConfigDedicated);
    if (value.has_servCellIndex) {
        enc.WriteConstrainedInteger((std::int64_t)(value.servCellIndex), 0, 31);
    }
    if (value.has_reconfigurationWithSync) {
        Encode_ReconfigurationWithSync(enc, value.reconfigurationWithSync);
    }
    if (value.has_rlf_TimersAndConstants) {
        Encode_SetupRelease_RLF_TimersAndConstants(enc, value.rlf_TimersAndConstants);
    }
    if (value.has_rlmInSyncOutOfSyncThreshold) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rlmInSyncOutOfSyncThreshold), 0, 0);
    }
    if (value.has_spCellConfigDedicated) {
        Encode_ServingCellConfig(enc, value.spCellConfigDedicated);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SpCellConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SpCellConfig(Decoder& dec, SpCellConfig& value)
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
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.servCellIndex = (ServCellIndex)tmp_value;
    }
    if (present_1) {
        if (Decode_ReconfigurationWithSync(dec, value.reconfigurationWithSync) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SetupRelease_RLF_TimersAndConstants(dec, value.rlf_TimersAndConstants) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        value.rlmInSyncOutOfSyncThreshold = (SpCellConfig_RlmInSyncOutOfSyncThreshold)0;
    }
    if (present_4) {
        if (Decode_ServingCellConfig(dec, value.spCellConfigDedicated) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_SpCellConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_SpCellConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SpCellConfig(SpCellConfig& value)
{
    if (value.has_servCellIndex) {
    }
    if (value.has_reconfigurationWithSync) {
        Free_ReconfigurationWithSync(value.reconfigurationWithSync);
    }
    if (value.has_rlf_TimersAndConstants) {
        Free_SetupRelease_RLF_TimersAndConstants(value.rlf_TimersAndConstants);
    }
    if (value.has_rlmInSyncOutOfSyncThreshold) {
    }
    if (value.has_spCellConfigDedicated) {
        Free_ServingCellConfig(value.spCellConfigDedicated);
    }
    if (value.has_extGroup1) {
        Free_SpCellConfig_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_DataInactivityTimer：ASN.1 SetupRelease<DataInactivityTimer>；源文件第 7316 行；CHOICE。
// Encode_SetupRelease_DataInactivityTimer 只读不分配；Decode_SetupRelease_DataInactivityTimer 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_DataInactivityTimer 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_DataInactivityTimer(Encoder& enc, const SetupRelease_DataInactivityTimer& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DataInactivityTimer_Tag_release:
        (void)0;
        break;
    case SetupRelease_DataInactivityTimer_Tag_setup:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.setup), 0, 15);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DataInactivityTimer(Decoder& dec, SetupRelease_DataInactivityTimer& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DataInactivityTimer_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DataInactivityTimer_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DataInactivityTimer_Tag_setup: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.setup = (DataInactivityTimer)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DataInactivityTimer(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DataInactivityTimer(SetupRelease_DataInactivityTimer& value)
{
    switch (value.tag) {
    case SetupRelease_DataInactivityTimer_Tag_release:
        break;
    case SetupRelease_DataInactivityTimer_Tag_setup:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MAC_CellGroupConfig_ExtGroup1：ASN.1 MAC_CellGroupConfig_ExtGroup1；源文件第 7314 行；扩展添加组 [[ ]]。
// Encode_MAC_CellGroupConfig_ExtGroup1 只读不分配；Decode_MAC_CellGroupConfig_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_MAC_CellGroupConfig_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MAC_CellGroupConfig_ExtGroup1(Encoder& enc, const MAC_CellGroupConfig_ExtGroup1& value)
{
    enc.WriteBit(value.has_csi_Mask);
    enc.WriteBit(value.has_dataInactivityTimer);
    if (value.has_csi_Mask) {
        enc.WriteBool(value.csi_Mask);
    }
    if (value.has_dataInactivityTimer) {
        Encode_SetupRelease_DataInactivityTimer(enc, value.dataInactivityTimer);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_CellGroupConfig_ExtGroup1(Decoder& dec, MAC_CellGroupConfig_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.csi_Mask = tmp_value;
    }
    if (present_1) {
        if (Decode_SetupRelease_DataInactivityTimer(dec, value.dataInactivityTimer) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_CellGroupConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_CellGroupConfig_ExtGroup1(MAC_CellGroupConfig_ExtGroup1& value)
{
    if (value.has_csi_Mask) {
    }
    if (value.has_dataInactivityTimer) {
        Free_SetupRelease_DataInactivityTimer(value.dataInactivityTimer);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16：ASN.1 drx-onDurationTimer-r16；源文件第 6735 行；CHOICE。
// Encode_DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16 只读不分配；Decode_DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16 可能 malloc（失败时内部已释放并清零）；Free_DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16(Encoder& enc, const DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_Tag_subMilliSeconds:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.subMilliSeconds), 1, 31);
        break;
    case DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_Tag_milliSeconds:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.milliSeconds), 0, 31);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16(Decoder& dec, DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_Tag)root_index;
    switch (value.tag) {
    case DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_Tag_subMilliSeconds: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 31, tmp_value)) { goto fail; }
        value.u.subMilliSeconds = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_Tag_milliSeconds: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.milliSeconds = (DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16(DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16& value)
{
    switch (value.tag) {
    case DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_Tag_subMilliSeconds:
        break;
    case DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_Tag_milliSeconds:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DRX_ConfigSecondaryGroup_r16：ASN.1 DRX-ConfigSecondaryGroup-r16；源文件第 6734 行；SEQUENCE。
// Encode_DRX_ConfigSecondaryGroup_r16 只读不分配；Decode_DRX_ConfigSecondaryGroup_r16 可能 malloc（失败时内部已释放并清零）；Free_DRX_ConfigSecondaryGroup_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DRX_ConfigSecondaryGroup_r16(Encoder& enc, const DRX_ConfigSecondaryGroup_r16& value)
{
    Encode_DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16(enc, value.drx_onDurationTimer_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.drx_InactivityTimer_r16), 0, 31);
    return enc.Error();
}

ErrorCode Decode_DRX_ConfigSecondaryGroup_r16(Decoder& dec, DRX_ConfigSecondaryGroup_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16(dec, value.drx_onDurationTimer_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.drx_InactivityTimer_r16 = (DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DRX_ConfigSecondaryGroup_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DRX_ConfigSecondaryGroup_r16(DRX_ConfigSecondaryGroup_r16& value)
{
    Free_DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16(value.drx_onDurationTimer_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_DRX_ConfigSecondaryGroup_r16：ASN.1 SetupRelease<DRX-ConfigSecondaryGroup-r16>；源文件第 7323 行；CHOICE。
// Encode_SetupRelease_DRX_ConfigSecondaryGroup_r16 只读不分配；Decode_SetupRelease_DRX_ConfigSecondaryGroup_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_DRX_ConfigSecondaryGroup_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_DRX_ConfigSecondaryGroup_r16(Encoder& enc, const SetupRelease_DRX_ConfigSecondaryGroup_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DRX_ConfigSecondaryGroup_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_DRX_ConfigSecondaryGroup_r16_Tag_setup:
        Encode_DRX_ConfigSecondaryGroup_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DRX_ConfigSecondaryGroup_r16(Decoder& dec, SetupRelease_DRX_ConfigSecondaryGroup_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DRX_ConfigSecondaryGroup_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DRX_ConfigSecondaryGroup_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DRX_ConfigSecondaryGroup_r16_Tag_setup: {
        if (Decode_DRX_ConfigSecondaryGroup_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DRX_ConfigSecondaryGroup_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DRX_ConfigSecondaryGroup_r16(SetupRelease_DRX_ConfigSecondaryGroup_r16& value)
{
    switch (value.tag) {
    case SetupRelease_DRX_ConfigSecondaryGroup_r16_Tag_release:
        break;
    case SetupRelease_DRX_ConfigSecondaryGroup_r16_Tag_setup:
        Free_DRX_ConfigSecondaryGroup_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MAC_CellGroupConfig_ExtGroup2：ASN.1 MAC_CellGroupConfig_ExtGroup2；源文件第 7318 行；扩展添加组 [[ ]]。
// Encode_MAC_CellGroupConfig_ExtGroup2 只读不分配；Decode_MAC_CellGroupConfig_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_MAC_CellGroupConfig_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MAC_CellGroupConfig_ExtGroup2(Encoder& enc, const MAC_CellGroupConfig_ExtGroup2& value)
{
    enc.WriteBit(value.has_usePreBSR_r16);
    enc.WriteBit(value.has_schedulingRequestID_LBT_SCell_r16);
    enc.WriteBit(value.has_lch_BasedPrioritization_r16);
    enc.WriteBit(value.has_schedulingRequestID_BFR_SCell_r16);
    enc.WriteBit(value.has_drx_ConfigSecondaryGroup_r16);
    if (value.has_usePreBSR_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.usePreBSR_r16), 0, 0);
    }
    if (value.has_schedulingRequestID_LBT_SCell_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.schedulingRequestID_LBT_SCell_r16), 0, 7);
    }
    if (value.has_lch_BasedPrioritization_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.lch_BasedPrioritization_r16), 0, 0);
    }
    if (value.has_schedulingRequestID_BFR_SCell_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.schedulingRequestID_BFR_SCell_r16), 0, 7);
    }
    if (value.has_drx_ConfigSecondaryGroup_r16) {
        Encode_SetupRelease_DRX_ConfigSecondaryGroup_r16(enc, value.drx_ConfigSecondaryGroup_r16);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_CellGroupConfig_ExtGroup2(Decoder& dec, MAC_CellGroupConfig_ExtGroup2& value)
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
        value.usePreBSR_r16 = (MAC_CellGroupConfig_ExtGroup2_UsePreBSR_r16)0;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.schedulingRequestID_LBT_SCell_r16 = (SchedulingRequestId)tmp_value;
    }
    if (present_2) {
        value.lch_BasedPrioritization_r16 = (MAC_CellGroupConfig_ExtGroup2_Lch_BasedPrioritization_r16)0;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.schedulingRequestID_BFR_SCell_r16 = (SchedulingRequestId)tmp_value;
    }
    if (present_4) {
        if (Decode_SetupRelease_DRX_ConfigSecondaryGroup_r16(dec, value.drx_ConfigSecondaryGroup_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_CellGroupConfig_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_CellGroupConfig_ExtGroup2(MAC_CellGroupConfig_ExtGroup2& value)
{
    if (value.has_usePreBSR_r16) {
    }
    if (value.has_schedulingRequestID_LBT_SCell_r16) {
    }
    if (value.has_lch_BasedPrioritization_r16) {
    }
    if (value.has_schedulingRequestID_BFR_SCell_r16) {
    }
    if (value.has_drx_ConfigSecondaryGroup_r16) {
        Free_SetupRelease_DRX_ConfigSecondaryGroup_r16(value.drx_ConfigSecondaryGroup_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MAC_CellGroupConfig_ExtGroup3：ASN.1 MAC_CellGroupConfig_ExtGroup3；源文件第 7325 行；扩展添加组 [[ ]]。
// Encode_MAC_CellGroupConfig_ExtGroup3 只读不分配；Decode_MAC_CellGroupConfig_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_MAC_CellGroupConfig_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MAC_CellGroupConfig_ExtGroup3(Encoder& enc, const MAC_CellGroupConfig_ExtGroup3& value)
{
    enc.WriteBit(value.has_enhancedSkipUplinkTxDynamic_r16);
    enc.WriteBit(value.has_enhancedSkipUplinkTxConfigured_r16);
    if (value.has_enhancedSkipUplinkTxDynamic_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enhancedSkipUplinkTxDynamic_r16), 0, 0);
    }
    if (value.has_enhancedSkipUplinkTxConfigured_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enhancedSkipUplinkTxConfigured_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_CellGroupConfig_ExtGroup3(Decoder& dec, MAC_CellGroupConfig_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.enhancedSkipUplinkTxDynamic_r16 = (MAC_CellGroupConfig_ExtGroup3_EnhancedSkipUplinkTxDynamic_r16)0;
    }
    if (present_1) {
        value.enhancedSkipUplinkTxConfigured_r16 = (MAC_CellGroupConfig_ExtGroup3_EnhancedSkipUplinkTxConfigured_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_CellGroupConfig_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_CellGroupConfig_ExtGroup3(MAC_CellGroupConfig_ExtGroup3& value)
{
    if (value.has_enhancedSkipUplinkTxDynamic_r16) {
    }
    if (value.has_enhancedSkipUplinkTxConfigured_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SchedulingRequestConfig_v1700：ASN.1 SchedulingRequestConfig-v1700；源文件第 12080 行；SEQUENCE。
// Encode_SchedulingRequestConfig_v1700 只读不分配；Decode_SchedulingRequestConfig_v1700 可能 malloc（失败时内部已释放并清零）；Free_SchedulingRequestConfig_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SchedulingRequestConfig_v1700(Encoder& enc, const SchedulingRequestConfig_v1700& value)
{
    enc.WriteBit(value.has_schedulingRequestToAddModListExt_v1700);
    if (value.has_schedulingRequestToAddModListExt_v1700) {
enc.WriteConstrainedLength(value.schedulingRequestToAddModListExt_v1700_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.schedulingRequestToAddModListExt_v1700_count; ++i) {
    Encode_SchedulingRequestToAddModExt_v1700(enc, value.schedulingRequestToAddModListExt_v1700_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_SchedulingRequestConfig_v1700(Decoder& dec, SchedulingRequestConfig_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.schedulingRequestToAddModListExt_v1700_count)) { goto fail; }
if (value.schedulingRequestToAddModListExt_v1700_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.schedulingRequestToAddModListExt_v1700_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.schedulingRequestToAddModListExt_v1700_count > 0u) {
    value.schedulingRequestToAddModListExt_v1700_items = (SchedulingRequestToAddModExt_v1700*)std::malloc((std::size_t)value.schedulingRequestToAddModListExt_v1700_count * sizeof(SchedulingRequestToAddModExt_v1700));
    if (value.schedulingRequestToAddModListExt_v1700_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.schedulingRequestToAddModListExt_v1700_items, 0, (std::size_t)value.schedulingRequestToAddModListExt_v1700_count * sizeof(SchedulingRequestToAddModExt_v1700));
}
for (std::uint32_t i = 0; i < value.schedulingRequestToAddModListExt_v1700_count; ++i) {
    if (Decode_SchedulingRequestToAddModExt_v1700(dec, value.schedulingRequestToAddModListExt_v1700_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SchedulingRequestConfig_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SchedulingRequestConfig_v1700(SchedulingRequestConfig_v1700& value)
{
    if (value.has_schedulingRequestToAddModListExt_v1700) {
        if (value.schedulingRequestToAddModListExt_v1700_items != nullptr) {
            for (std::uint32_t i = 0; i < value.schedulingRequestToAddModListExt_v1700_count; ++i) {
                Free_SchedulingRequestToAddModExt_v1700(value.schedulingRequestToAddModListExt_v1700_items[i]);
            }
            std::free(value.schedulingRequestToAddModListExt_v1700_items);
            value.schedulingRequestToAddModListExt_v1700_items = nullptr;
        }
        value.schedulingRequestToAddModListExt_v1700_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DRX_ConfigSL_r17：ASN.1 DRX-ConfigSL-r17；源文件第 6751 行；SEQUENCE。
// Encode_DRX_ConfigSL_r17 只读不分配；Decode_DRX_ConfigSL_r17 可能 malloc（失败时内部已释放并清零）；Free_DRX_ConfigSL_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DRX_ConfigSL_r17(Encoder& enc, const DRX_ConfigSL_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.drx_HARQ_RTT_TimerSL_r17), 0, 56);
    enc.WriteConstrainedInteger((std::int64_t)(value.drx_RetransmissionTimerSL_r17), 0, 31);
    return enc.Error();
}

ErrorCode Decode_DRX_ConfigSL_r17(Decoder& dec, DRX_ConfigSL_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 56, tmp_value)) { goto fail; }
        value.drx_HARQ_RTT_TimerSL_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.drx_RetransmissionTimerSL_r17 = (DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DRX_ConfigSL_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DRX_ConfigSL_r17(DRX_ConfigSL_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_DRX_ConfigSL_r17：ASN.1 SetupRelease<DRX-ConfigSL-r17>；源文件第 7331 行；CHOICE。
// Encode_SetupRelease_DRX_ConfigSL_r17 只读不分配；Decode_SetupRelease_DRX_ConfigSL_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_DRX_ConfigSL_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_DRX_ConfigSL_r17(Encoder& enc, const SetupRelease_DRX_ConfigSL_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DRX_ConfigSL_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_DRX_ConfigSL_r17_Tag_setup:
        Encode_DRX_ConfigSL_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DRX_ConfigSL_r17(Decoder& dec, SetupRelease_DRX_ConfigSL_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DRX_ConfigSL_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DRX_ConfigSL_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DRX_ConfigSL_r17_Tag_setup: {
        if (Decode_DRX_ConfigSL_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DRX_ConfigSL_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DRX_ConfigSL_r17(SetupRelease_DRX_ConfigSL_r17& value)
{
    switch (value.tag) {
    case SetupRelease_DRX_ConfigSL_r17_Tag_release:
        break;
    case SetupRelease_DRX_ConfigSL_r17_Tag_setup:
        Free_DRX_ConfigSL_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DRX_ConfigExt_v1700：ASN.1 DRX-ConfigExt-v1700；源文件第 6687 行；SEQUENCE。
// Encode_DRX_ConfigExt_v1700 只读不分配；Decode_DRX_ConfigExt_v1700 可能 malloc（失败时内部已释放并清零）；Free_DRX_ConfigExt_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DRX_ConfigExt_v1700(Encoder& enc, const DRX_ConfigExt_v1700& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.drx_HARQ_RTT_TimerDL_r17), 0, 448);
    enc.WriteConstrainedInteger((std::int64_t)(value.drx_HARQ_RTT_TimerUL_r17), 0, 448);
    return enc.Error();
}

ErrorCode Decode_DRX_ConfigExt_v1700(Decoder& dec, DRX_ConfigExt_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 448, tmp_value)) { goto fail; }
        value.drx_HARQ_RTT_TimerDL_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 448, tmp_value)) { goto fail; }
        value.drx_HARQ_RTT_TimerUL_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DRX_ConfigExt_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DRX_ConfigExt_v1700(DRX_ConfigExt_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_DRX_ConfigExt_v1700：ASN.1 SetupRelease<DRX-ConfigExt-v1700>；源文件第 7332 行；CHOICE。
// Encode_SetupRelease_DRX_ConfigExt_v1700 只读不分配；Decode_SetupRelease_DRX_ConfigExt_v1700 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_DRX_ConfigExt_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_DRX_ConfigExt_v1700(Encoder& enc, const SetupRelease_DRX_ConfigExt_v1700& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DRX_ConfigExt_v1700_Tag_release:
        (void)0;
        break;
    case SetupRelease_DRX_ConfigExt_v1700_Tag_setup:
        Encode_DRX_ConfigExt_v1700(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DRX_ConfigExt_v1700(Decoder& dec, SetupRelease_DRX_ConfigExt_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DRX_ConfigExt_v1700_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DRX_ConfigExt_v1700_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DRX_ConfigExt_v1700_Tag_setup: {
        if (Decode_DRX_ConfigExt_v1700(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DRX_ConfigExt_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DRX_ConfigExt_v1700(SetupRelease_DRX_ConfigExt_v1700& value)
{
    switch (value.tag) {
    case SetupRelease_DRX_ConfigExt_v1700_Tag_release:
        break;
    case SetupRelease_DRX_ConfigExt_v1700_Tag_setup:
        Free_DRX_ConfigExt_v1700(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TAR_Config_r17：ASN.1 TAR-Config-r17；源文件第 13643 行；SEQUENCE。
// Encode_TAR_Config_r17 只读不分配；Decode_TAR_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_TAR_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TAR_Config_r17(Encoder& enc, const TAR_Config_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_offsetThresholdTA_r17);
    enc.WriteBit(value.has_timingAdvanceSR_r17);
    if (value.has_offsetThresholdTA_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.offsetThresholdTA_r17), 0, 28);
    }
    if (value.has_timingAdvanceSR_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.timingAdvanceSR_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_TAR_Config_r17(Decoder& dec, TAR_Config_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 28, tmp_value)) { goto fail; }
        value.offsetThresholdTA_r17 = (TAR_Config_r17_OffsetThresholdTA_r17)tmp_value;
    }
    if (present_1) {
        value.timingAdvanceSR_r17 = (TAR_Config_r17_TimingAdvanceSR_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_TAR_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TAR_Config_r17(TAR_Config_r17& value)
{
    if (value.has_offsetThresholdTA_r17) {
    }
    if (value.has_timingAdvanceSR_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_TAR_Config_r17：ASN.1 SetupRelease<TAR-Config-r17>；源文件第 7336 行；CHOICE。
// Encode_SetupRelease_TAR_Config_r17 只读不分配；Decode_SetupRelease_TAR_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_TAR_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_TAR_Config_r17(Encoder& enc, const SetupRelease_TAR_Config_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_TAR_Config_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_TAR_Config_r17_Tag_setup:
        Encode_TAR_Config_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_TAR_Config_r17(Decoder& dec, SetupRelease_TAR_Config_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_TAR_Config_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_TAR_Config_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_TAR_Config_r17_Tag_setup: {
        if (Decode_TAR_Config_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_TAR_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_TAR_Config_r17(SetupRelease_TAR_Config_r17& value)
{
    switch (value.tag) {
    case SetupRelease_TAR_Config_r17_Tag_release:
        break;
    case SetupRelease_TAR_Config_r17_Tag_setup:
        Free_TAR_Config_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MAC_CellGroupConfig_ExtGroup4：ASN.1 MAC_CellGroupConfig_ExtGroup4；源文件第 7329 行；扩展添加组 [[ ]]。
// Encode_MAC_CellGroupConfig_ExtGroup4 只读不分配；Decode_MAC_CellGroupConfig_ExtGroup4 可能 malloc（失败时内部已释放并清零）；Free_MAC_CellGroupConfig_ExtGroup4 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MAC_CellGroupConfig_ExtGroup4(Encoder& enc, const MAC_CellGroupConfig_ExtGroup4& value)
{
    enc.WriteBit(value.has_intraCG_Prioritization_r17);
    enc.WriteBit(value.has_drx_ConfigSL_r17);
    enc.WriteBit(value.has_drx_ConfigExt_v1700);
    enc.WriteBit(value.has_schedulingRequestID_BFR_r17);
    enc.WriteBit(value.has_schedulingRequestID_BFR2_r17);
    enc.WriteBit(value.has_schedulingRequestConfig_v1700);
    enc.WriteBit(value.has_tar_Config_r17);
    enc.WriteBit(value.has_g_RNTI_ConfigToAddModList_r17);
    enc.WriteBit(value.has_g_RNTI_ConfigToReleaseList_r17);
    enc.WriteBit(value.has_g_CS_RNTI_ConfigToAddModList_r17);
    enc.WriteBit(value.has_g_CS_RNTI_ConfigToReleaseList_r17);
    enc.WriteBit(value.has_allowCSI_SRS_Tx_MulticastDRX_Active_r17);
    if (value.has_intraCG_Prioritization_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.intraCG_Prioritization_r17), 0, 0);
    }
    if (value.has_drx_ConfigSL_r17) {
        Encode_SetupRelease_DRX_ConfigSL_r17(enc, value.drx_ConfigSL_r17);
    }
    if (value.has_drx_ConfigExt_v1700) {
        Encode_SetupRelease_DRX_ConfigExt_v1700(enc, value.drx_ConfigExt_v1700);
    }
    if (value.has_schedulingRequestID_BFR_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.schedulingRequestID_BFR_r17), 0, 7);
    }
    if (value.has_schedulingRequestID_BFR2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.schedulingRequestID_BFR2_r17), 0, 7);
    }
    if (value.has_schedulingRequestConfig_v1700) {
        Encode_SchedulingRequestConfig_v1700(enc, value.schedulingRequestConfig_v1700);
    }
    if (value.has_tar_Config_r17) {
        Encode_SetupRelease_TAR_Config_r17(enc, value.tar_Config_r17);
    }
    if (value.has_g_RNTI_ConfigToAddModList_r17) {
enc.WriteConstrainedLength(value.g_RNTI_ConfigToAddModList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.g_RNTI_ConfigToAddModList_r17_count; ++i) {
    Encode_MBS_RNTI_SpecificConfig_r17(enc, value.g_RNTI_ConfigToAddModList_r17_items[i]);
}
    }
    if (value.has_g_RNTI_ConfigToReleaseList_r17) {
enc.WriteConstrainedLength(value.g_RNTI_ConfigToReleaseList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.g_RNTI_ConfigToReleaseList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.g_RNTI_ConfigToReleaseList_r17_items[i]), 0, 15);
}
    }
    if (value.has_g_CS_RNTI_ConfigToAddModList_r17) {
enc.WriteConstrainedLength(value.g_CS_RNTI_ConfigToAddModList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.g_CS_RNTI_ConfigToAddModList_r17_count; ++i) {
    Encode_MBS_RNTI_SpecificConfig_r17(enc, value.g_CS_RNTI_ConfigToAddModList_r17_items[i]);
}
    }
    if (value.has_g_CS_RNTI_ConfigToReleaseList_r17) {
enc.WriteConstrainedLength(value.g_CS_RNTI_ConfigToReleaseList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.g_CS_RNTI_ConfigToReleaseList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.g_CS_RNTI_ConfigToReleaseList_r17_items[i]), 0, 15);
}
    }
    if (value.has_allowCSI_SRS_Tx_MulticastDRX_Active_r17) {
        enc.WriteBool(value.allowCSI_SRS_Tx_MulticastDRX_Active_r17);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_CellGroupConfig_ExtGroup4(Decoder& dec, MAC_CellGroupConfig_ExtGroup4& value)
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
        value.intraCG_Prioritization_r17 = (MAC_CellGroupConfig_ExtGroup4_IntraCG_Prioritization_r17)0;
    }
    if (present_1) {
        if (Decode_SetupRelease_DRX_ConfigSL_r17(dec, value.drx_ConfigSL_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SetupRelease_DRX_ConfigExt_v1700(dec, value.drx_ConfigExt_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.schedulingRequestID_BFR_r17 = (SchedulingRequestId)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.schedulingRequestID_BFR2_r17 = (SchedulingRequestId)tmp_value;
    }
    if (present_5) {
        if (Decode_SchedulingRequestConfig_v1700(dec, value.schedulingRequestConfig_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_SetupRelease_TAR_Config_r17(dec, value.tar_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
if (!dec.ReadConstrainedLength(0u, 0u, value.g_RNTI_ConfigToAddModList_r17_count)) { goto fail; }
if (value.g_RNTI_ConfigToAddModList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.g_RNTI_ConfigToAddModList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.g_RNTI_ConfigToAddModList_r17_count > 0u) {
    value.g_RNTI_ConfigToAddModList_r17_items = (MBS_RNTI_SpecificConfig_r17*)std::malloc((std::size_t)value.g_RNTI_ConfigToAddModList_r17_count * sizeof(MBS_RNTI_SpecificConfig_r17));
    if (value.g_RNTI_ConfigToAddModList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.g_RNTI_ConfigToAddModList_r17_items, 0, (std::size_t)value.g_RNTI_ConfigToAddModList_r17_count * sizeof(MBS_RNTI_SpecificConfig_r17));
}
for (std::uint32_t i = 0; i < value.g_RNTI_ConfigToAddModList_r17_count; ++i) {
    if (Decode_MBS_RNTI_SpecificConfig_r17(dec, value.g_RNTI_ConfigToAddModList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_8) {
if (!dec.ReadConstrainedLength(0u, 0u, value.g_RNTI_ConfigToReleaseList_r17_count)) { goto fail; }
if (value.g_RNTI_ConfigToReleaseList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.g_RNTI_ConfigToReleaseList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.g_RNTI_ConfigToReleaseList_r17_count > 0u) {
    value.g_RNTI_ConfigToReleaseList_r17_items = (MBS_RNTI_SpecificConfigId_r17*)std::malloc((std::size_t)value.g_RNTI_ConfigToReleaseList_r17_count * sizeof(MBS_RNTI_SpecificConfigId_r17));
    if (value.g_RNTI_ConfigToReleaseList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.g_RNTI_ConfigToReleaseList_r17_items, 0, (std::size_t)value.g_RNTI_ConfigToReleaseList_r17_count * sizeof(MBS_RNTI_SpecificConfigId_r17));
}
for (std::uint32_t i = 0; i < value.g_RNTI_ConfigToReleaseList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
    value.g_RNTI_ConfigToReleaseList_r17_items[i] = (MBS_RNTI_SpecificConfigId_r17)tmp_value;
}
    }
    if (present_9) {
if (!dec.ReadConstrainedLength(0u, 0u, value.g_CS_RNTI_ConfigToAddModList_r17_count)) { goto fail; }
if (value.g_CS_RNTI_ConfigToAddModList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.g_CS_RNTI_ConfigToAddModList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.g_CS_RNTI_ConfigToAddModList_r17_count > 0u) {
    value.g_CS_RNTI_ConfigToAddModList_r17_items = (MBS_RNTI_SpecificConfig_r17*)std::malloc((std::size_t)value.g_CS_RNTI_ConfigToAddModList_r17_count * sizeof(MBS_RNTI_SpecificConfig_r17));
    if (value.g_CS_RNTI_ConfigToAddModList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.g_CS_RNTI_ConfigToAddModList_r17_items, 0, (std::size_t)value.g_CS_RNTI_ConfigToAddModList_r17_count * sizeof(MBS_RNTI_SpecificConfig_r17));
}
for (std::uint32_t i = 0; i < value.g_CS_RNTI_ConfigToAddModList_r17_count; ++i) {
    if (Decode_MBS_RNTI_SpecificConfig_r17(dec, value.g_CS_RNTI_ConfigToAddModList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_10) {
if (!dec.ReadConstrainedLength(0u, 0u, value.g_CS_RNTI_ConfigToReleaseList_r17_count)) { goto fail; }
if (value.g_CS_RNTI_ConfigToReleaseList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.g_CS_RNTI_ConfigToReleaseList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.g_CS_RNTI_ConfigToReleaseList_r17_count > 0u) {
    value.g_CS_RNTI_ConfigToReleaseList_r17_items = (MBS_RNTI_SpecificConfigId_r17*)std::malloc((std::size_t)value.g_CS_RNTI_ConfigToReleaseList_r17_count * sizeof(MBS_RNTI_SpecificConfigId_r17));
    if (value.g_CS_RNTI_ConfigToReleaseList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.g_CS_RNTI_ConfigToReleaseList_r17_items, 0, (std::size_t)value.g_CS_RNTI_ConfigToReleaseList_r17_count * sizeof(MBS_RNTI_SpecificConfigId_r17));
}
for (std::uint32_t i = 0; i < value.g_CS_RNTI_ConfigToReleaseList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
    value.g_CS_RNTI_ConfigToReleaseList_r17_items[i] = (MBS_RNTI_SpecificConfigId_r17)tmp_value;
}
    }
    if (present_11) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.allowCSI_SRS_Tx_MulticastDRX_Active_r17 = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_CellGroupConfig_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_CellGroupConfig_ExtGroup4(MAC_CellGroupConfig_ExtGroup4& value)
{
    if (value.has_intraCG_Prioritization_r17) {
    }
    if (value.has_drx_ConfigSL_r17) {
        Free_SetupRelease_DRX_ConfigSL_r17(value.drx_ConfigSL_r17);
    }
    if (value.has_drx_ConfigExt_v1700) {
        Free_SetupRelease_DRX_ConfigExt_v1700(value.drx_ConfigExt_v1700);
    }
    if (value.has_schedulingRequestID_BFR_r17) {
    }
    if (value.has_schedulingRequestID_BFR2_r17) {
    }
    if (value.has_schedulingRequestConfig_v1700) {
        Free_SchedulingRequestConfig_v1700(value.schedulingRequestConfig_v1700);
    }
    if (value.has_tar_Config_r17) {
        Free_SetupRelease_TAR_Config_r17(value.tar_Config_r17);
    }
    if (value.has_g_RNTI_ConfigToAddModList_r17) {
        if (value.g_RNTI_ConfigToAddModList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.g_RNTI_ConfigToAddModList_r17_count; ++i) {
                Free_MBS_RNTI_SpecificConfig_r17(value.g_RNTI_ConfigToAddModList_r17_items[i]);
            }
            std::free(value.g_RNTI_ConfigToAddModList_r17_items);
            value.g_RNTI_ConfigToAddModList_r17_items = nullptr;
        }
        value.g_RNTI_ConfigToAddModList_r17_count = 0;
    }
    if (value.has_g_RNTI_ConfigToReleaseList_r17) {
        if (value.g_RNTI_ConfigToReleaseList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.g_RNTI_ConfigToReleaseList_r17_count; ++i) {
            }
            std::free(value.g_RNTI_ConfigToReleaseList_r17_items);
            value.g_RNTI_ConfigToReleaseList_r17_items = nullptr;
        }
        value.g_RNTI_ConfigToReleaseList_r17_count = 0;
    }
    if (value.has_g_CS_RNTI_ConfigToAddModList_r17) {
        if (value.g_CS_RNTI_ConfigToAddModList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.g_CS_RNTI_ConfigToAddModList_r17_count; ++i) {
                Free_MBS_RNTI_SpecificConfig_r17(value.g_CS_RNTI_ConfigToAddModList_r17_items[i]);
            }
            std::free(value.g_CS_RNTI_ConfigToAddModList_r17_items);
            value.g_CS_RNTI_ConfigToAddModList_r17_items = nullptr;
        }
        value.g_CS_RNTI_ConfigToAddModList_r17_count = 0;
    }
    if (value.has_g_CS_RNTI_ConfigToReleaseList_r17) {
        if (value.g_CS_RNTI_ConfigToReleaseList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.g_CS_RNTI_ConfigToReleaseList_r17_count; ++i) {
            }
            std::free(value.g_CS_RNTI_ConfigToReleaseList_r17_items);
            value.g_CS_RNTI_ConfigToReleaseList_r17_items = nullptr;
        }
        value.g_CS_RNTI_ConfigToReleaseList_r17_count = 0;
    }
    if (value.has_allowCSI_SRS_Tx_MulticastDRX_Active_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MAC_CellGroupConfig_ExtGroup5：ASN.1 MAC_CellGroupConfig_ExtGroup5；源文件第 7343 行；扩展添加组 [[ ]]。
// Encode_MAC_CellGroupConfig_ExtGroup5 只读不分配；Decode_MAC_CellGroupConfig_ExtGroup5 可能 malloc（失败时内部已释放并清零）；Free_MAC_CellGroupConfig_ExtGroup5 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MAC_CellGroupConfig_ExtGroup5(Encoder& enc, const MAC_CellGroupConfig_ExtGroup5& value)
{
    enc.WriteBit(value.has_schedulingRequestID_PosMG_Request_r17);
    enc.WriteBit(value.has_drx_LastTransmissionUL_r17);
    if (value.has_schedulingRequestID_PosMG_Request_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.schedulingRequestID_PosMG_Request_r17), 0, 7);
    }
    if (value.has_drx_LastTransmissionUL_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.drx_LastTransmissionUL_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_CellGroupConfig_ExtGroup5(Decoder& dec, MAC_CellGroupConfig_ExtGroup5& value)
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
        value.schedulingRequestID_PosMG_Request_r17 = (SchedulingRequestId)tmp_value;
    }
    if (present_1) {
        value.drx_LastTransmissionUL_r17 = (MAC_CellGroupConfig_ExtGroup5_Drx_LastTransmissionUL_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_CellGroupConfig_ExtGroup5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_CellGroupConfig_ExtGroup5(MAC_CellGroupConfig_ExtGroup5& value)
{
    if (value.has_schedulingRequestID_PosMG_Request_r17) {
    }
    if (value.has_drx_LastTransmissionUL_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MAC_CellGroupConfig_ExtGroup6：ASN.1 MAC_CellGroupConfig_ExtGroup6；源文件第 7347 行；扩展添加组 [[ ]]。
// Encode_MAC_CellGroupConfig_ExtGroup6 只读不分配；Decode_MAC_CellGroupConfig_ExtGroup6 可能 malloc（失败时内部已释放并清零）；Free_MAC_CellGroupConfig_ExtGroup6 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MAC_CellGroupConfig_ExtGroup6(Encoder& enc, const MAC_CellGroupConfig_ExtGroup6& value)
{
    enc.WriteBit(value.has_posMG_Request_r17);
    if (value.has_posMG_Request_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.posMG_Request_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_CellGroupConfig_ExtGroup6(Decoder& dec, MAC_CellGroupConfig_ExtGroup6& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.posMG_Request_r17 = (MAC_CellGroupConfig_ExtGroup6_PosMG_Request_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_CellGroupConfig_ExtGroup6(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_CellGroupConfig_ExtGroup6(MAC_CellGroupConfig_ExtGroup6& value)
{
    if (value.has_posMG_Request_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18：ASN.1 drx-NonIntegerLongCycleStartOffset-r18；源文件第 6693 行；CHOICE。
// Encode_DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18 只读不分配；Decode_DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18 可能 malloc（失败时内部已释放并清零）；Free_DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18(Encoder& enc, const DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 23) {
        if (choice_index >= 23) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 23));
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
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 22);
    switch (value.tag) {
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over240:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms1001over240), 0, 3);
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms25over6:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms25over6), 0, 3);
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms25over3:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms25over3), 0, 7);
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over120:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms1001over120), 0, 7);
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms100over9:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms100over9), 0, 10);
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms25over2:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms25over2), 0, 11);
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms40over3:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms40over3), 0, 12);
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms125over9:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms125over9), 0, 12);
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms50over3:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms50over3), 0, 15);
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over60:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms1001over60), 0, 15);
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms125over6:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms125over6), 0, 19);
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms200over9:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms200over9), 0, 21);
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms250over9:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms250over9), 0, 26);
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms100over3:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms100over3), 0, 32);
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over30:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms1001over30), 0, 32);
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms75over2:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms75over2), 0, 36);
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms125over3:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms125over3), 0, 40);
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over24:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms1001over24), 0, 40);
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms200over3:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms200over3), 0, 65);
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over15:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms1001over15), 0, 65);
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms250over3:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms250over3), 0, 82);
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over12:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms1001over12), 0, 82);
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms400over3:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms400over3), 0, 132);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18(Decoder& dec, DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18& value)
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
        value.tag = (DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag)(23 + extension_index);
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
    if (!dec.ReadConstrainedInteger(0, 22, root_index)) {
        goto fail;
    }
    value.tag = (DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag)root_index;
    switch (value.tag) {
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over240: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.ms1001over240 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms25over6: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.ms25over6 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms25over3: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.u.ms25over3 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over120: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.u.ms1001over120 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms100over9: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.u.ms100over9 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms25over2: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 11, tmp_value)) { goto fail; }
        value.u.ms25over2 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms40over3: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 12, tmp_value)) { goto fail; }
        value.u.ms40over3 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms125over9: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 12, tmp_value)) { goto fail; }
        value.u.ms125over9 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms50over3: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.ms50over3 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over60: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.ms1001over60 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms125over6: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 19, tmp_value)) { goto fail; }
        value.u.ms125over6 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms200over9: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 21, tmp_value)) { goto fail; }
        value.u.ms200over9 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms250over9: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 26, tmp_value)) { goto fail; }
        value.u.ms250over9 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms100over3: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 32, tmp_value)) { goto fail; }
        value.u.ms100over3 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over30: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 32, tmp_value)) { goto fail; }
        value.u.ms1001over30 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms75over2: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 36, tmp_value)) { goto fail; }
        value.u.ms75over2 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms125over3: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 40, tmp_value)) { goto fail; }
        value.u.ms125over3 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over24: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 40, tmp_value)) { goto fail; }
        value.u.ms1001over24 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms200over3: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65, tmp_value)) { goto fail; }
        value.u.ms200over3 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over15: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65, tmp_value)) { goto fail; }
        value.u.ms1001over15 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms250over3: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 82, tmp_value)) { goto fail; }
        value.u.ms250over3 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over12: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 82, tmp_value)) { goto fail; }
        value.u.ms1001over12 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms400over3: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 132, tmp_value)) { goto fail; }
        value.u.ms400over3 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18(DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18& value)
{
    switch (value.tag) {
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over240:
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms25over6:
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms25over3:
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over120:
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms100over9:
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms25over2:
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms40over3:
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms125over9:
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms50over3:
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over60:
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms125over6:
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms200over9:
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms250over9:
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms100over3:
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over30:
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms75over2:
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms125over3:
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over24:
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms200over3:
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over15:
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms250over3:
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over12:
        break;
    case DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms400over3:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DRX_ConfigExt2_v1800_ShortDRX_r18：ASN.1 shortDRX-r18；源文件第 6719 行；SEQUENCE。
// Encode_DRX_ConfigExt2_v1800_ShortDRX_r18 只读不分配；Decode_DRX_ConfigExt2_v1800_ShortDRX_r18 可能 malloc（失败时内部已释放并清零）；Free_DRX_ConfigExt2_v1800_ShortDRX_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DRX_ConfigExt2_v1800_ShortDRX_r18(Encoder& enc, const DRX_ConfigExt2_v1800_ShortDRX_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.drx_NonIntegerShortCycle_r18), 0, 31);
    enc.WriteConstrainedInteger((std::int64_t)(value.drx_ShortCycleTimer_r18), 1, 16);
    return enc.Error();
}

ErrorCode Decode_DRX_ConfigExt2_v1800_ShortDRX_r18(Decoder& dec, DRX_ConfigExt2_v1800_ShortDRX_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.drx_NonIntegerShortCycle_r18 = (DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.drx_ShortCycleTimer_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DRX_ConfigExt2_v1800_ShortDRX_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DRX_ConfigExt2_v1800_ShortDRX_r18(DRX_ConfigExt2_v1800_ShortDRX_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DRX_ConfigExt2_v1800：ASN.1 DRX-ConfigExt2-v1800；源文件第 6692 行；SEQUENCE。
// Encode_DRX_ConfigExt2_v1800 只读不分配；Decode_DRX_ConfigExt2_v1800 可能 malloc（失败时内部已释放并清零）；Free_DRX_ConfigExt2_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DRX_ConfigExt2_v1800(Encoder& enc, const DRX_ConfigExt2_v1800& value)
{
    enc.WriteBit(value.has_shortDRX_r18);
    enc.WriteBit(value.has_drx_TimeReferenceSFN_r18);
    Encode_DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18(enc, value.drx_NonIntegerLongCycleStartOffset_r18);
    if (value.has_shortDRX_r18) {
        Encode_DRX_ConfigExt2_v1800_ShortDRX_r18(enc, value.shortDRX_r18);
    }
    if (value.has_drx_TimeReferenceSFN_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.drx_TimeReferenceSFN_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_DRX_ConfigExt2_v1800(Decoder& dec, DRX_ConfigExt2_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        if (Decode_DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18(dec, value.drx_NonIntegerLongCycleStartOffset_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_DRX_ConfigExt2_v1800_ShortDRX_r18(dec, value.shortDRX_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.drx_TimeReferenceSFN_r18 = (DRX_ConfigExt2_v1800_Drx_TimeReferenceSFN_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DRX_ConfigExt2_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DRX_ConfigExt2_v1800(DRX_ConfigExt2_v1800& value)
{
    Free_DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18(value.drx_NonIntegerLongCycleStartOffset_r18);
    if (value.has_shortDRX_r18) {
        Free_DRX_ConfigExt2_v1800_ShortDRX_r18(value.shortDRX_r18);
    }
    if (value.has_drx_TimeReferenceSFN_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_DRX_ConfigExt2_v1800：ASN.1 SetupRelease<DRX-ConfigExt2-v1800>；源文件第 7351 行；CHOICE。
// Encode_SetupRelease_DRX_ConfigExt2_v1800 只读不分配；Decode_SetupRelease_DRX_ConfigExt2_v1800 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_DRX_ConfigExt2_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_DRX_ConfigExt2_v1800(Encoder& enc, const SetupRelease_DRX_ConfigExt2_v1800& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DRX_ConfigExt2_v1800_Tag_release:
        (void)0;
        break;
    case SetupRelease_DRX_ConfigExt2_v1800_Tag_setup:
        Encode_DRX_ConfigExt2_v1800(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DRX_ConfigExt2_v1800(Decoder& dec, SetupRelease_DRX_ConfigExt2_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DRX_ConfigExt2_v1800_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DRX_ConfigExt2_v1800_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DRX_ConfigExt2_v1800_Tag_setup: {
        if (Decode_DRX_ConfigExt2_v1800(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DRX_ConfigExt2_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DRX_ConfigExt2_v1800(SetupRelease_DRX_ConfigExt2_v1800& value)
{
    switch (value.tag) {
    case SetupRelease_DRX_ConfigExt2_v1800_Tag_release:
        break;
    case SetupRelease_DRX_ConfigExt2_v1800_Tag_setup:
        Free_DRX_ConfigExt2_v1800(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TAR_Config_r18：ASN.1 TAR-Config-r18；源文件第 13650 行；SEQUENCE。
// Encode_TAR_Config_r18 只读不分配；Decode_TAR_Config_r18 可能 malloc（失败时内部已释放并清零）；Free_TAR_Config_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TAR_Config_r18(Encoder& enc, const TAR_Config_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_offsetThresholdTA_r18);
    enc.WriteBit(value.has_timingAdvanceSR_r18);
    if (value.has_offsetThresholdTA_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.offsetThresholdTA_r18), 1, 56);
    }
    if (value.has_timingAdvanceSR_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.timingAdvanceSR_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_TAR_Config_r18(Decoder& dec, TAR_Config_r18& value)
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
        if (!dec.ReadConstrainedInteger(1, 56, tmp_value)) { goto fail; }
        value.offsetThresholdTA_r18 = (int64_t)tmp_value;
    }
    if (present_1) {
        value.timingAdvanceSR_r18 = (TAR_Config_r18_TimingAdvanceSR_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_TAR_Config_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TAR_Config_r18(TAR_Config_r18& value)
{
    if (value.has_offsetThresholdTA_r18) {
    }
    if (value.has_timingAdvanceSR_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_TAR_Config_r18：ASN.1 SetupRelease<TAR-Config-r18>；源文件第 7355 行；CHOICE。
// Encode_SetupRelease_TAR_Config_r18 只读不分配；Decode_SetupRelease_TAR_Config_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_TAR_Config_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_TAR_Config_r18(Encoder& enc, const SetupRelease_TAR_Config_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_TAR_Config_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_TAR_Config_r18_Tag_setup:
        Encode_TAR_Config_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_TAR_Config_r18(Decoder& dec, SetupRelease_TAR_Config_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_TAR_Config_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_TAR_Config_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_TAR_Config_r18_Tag_setup: {
        if (Decode_TAR_Config_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_TAR_Config_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_TAR_Config_r18(SetupRelease_TAR_Config_r18& value)
{
    switch (value.tag) {
    case SetupRelease_TAR_Config_r18_Tag_release:
        break;
    case SetupRelease_TAR_Config_r18_Tag_setup:
        Free_TAR_Config_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MAC_CellGroupConfig_ExtGroup7：ASN.1 MAC_CellGroupConfig_ExtGroup7；源文件第 7350 行；扩展添加组 [[ ]]。
// Encode_MAC_CellGroupConfig_ExtGroup7 只读不分配；Decode_MAC_CellGroupConfig_ExtGroup7 可能 malloc（失败时内部已释放并清零）；Free_MAC_CellGroupConfig_ExtGroup7 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MAC_CellGroupConfig_ExtGroup7(Encoder& enc, const MAC_CellGroupConfig_ExtGroup7& value)
{
    enc.WriteBit(value.has_drx_ConfigExt2_v1800);
    enc.WriteBit(value.has_additionalBS_TableAllowed_r18);
    enc.WriteBit(value.has_dsr_ConfigToAddModList_r18);
    enc.WriteBit(value.has_dsr_ConfigToReleaseList_r18);
    enc.WriteBit(value.has_tar_Config_r18);
    if (value.has_drx_ConfigExt2_v1800) {
        Encode_SetupRelease_DRX_ConfigExt2_v1800(enc, value.drx_ConfigExt2_v1800);
    }
    if (value.has_additionalBS_TableAllowed_r18) {
        enc.WriteFixedBitString(value.additionalBS_TableAllowed_r18.bytes, value.additionalBS_TableAllowed_r18.bitLength, 8, 8);
    }
    if (value.has_dsr_ConfigToAddModList_r18) {
enc.WriteConstrainedLength(value.dsr_ConfigToAddModList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.dsr_ConfigToAddModList_r18_count; ++i) {
    Encode_LCG_DSR_Config_r18(enc, value.dsr_ConfigToAddModList_r18_items[i]);
}
    }
    if (value.has_dsr_ConfigToReleaseList_r18) {
enc.WriteConstrainedLength(value.dsr_ConfigToReleaseList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.dsr_ConfigToReleaseList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.dsr_ConfigToReleaseList_r18_items[i]), 0, 7);
}
    }
    if (value.has_tar_Config_r18) {
        Encode_SetupRelease_TAR_Config_r18(enc, value.tar_Config_r18);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_CellGroupConfig_ExtGroup7(Decoder& dec, MAC_CellGroupConfig_ExtGroup7& value)
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
        if (Decode_SetupRelease_DRX_ConfigExt2_v1800(dec, value.drx_ConfigExt2_v1800) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.additionalBS_TableAllowed_r18.bytes = string_bytes;
        value.additionalBS_TableAllowed_r18.bitLength = string_length;
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.dsr_ConfigToAddModList_r18_count)) { goto fail; }
if (value.dsr_ConfigToAddModList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.dsr_ConfigToAddModList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.dsr_ConfigToAddModList_r18_count > 0u) {
    value.dsr_ConfigToAddModList_r18_items = (LCG_DSR_Config_r18*)std::malloc((std::size_t)value.dsr_ConfigToAddModList_r18_count * sizeof(LCG_DSR_Config_r18));
    if (value.dsr_ConfigToAddModList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.dsr_ConfigToAddModList_r18_items, 0, (std::size_t)value.dsr_ConfigToAddModList_r18_count * sizeof(LCG_DSR_Config_r18));
}
for (std::uint32_t i = 0; i < value.dsr_ConfigToAddModList_r18_count; ++i) {
    if (Decode_LCG_DSR_Config_r18(dec, value.dsr_ConfigToAddModList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.dsr_ConfigToReleaseList_r18_count)) { goto fail; }
if (value.dsr_ConfigToReleaseList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.dsr_ConfigToReleaseList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.dsr_ConfigToReleaseList_r18_count > 0u) {
    value.dsr_ConfigToReleaseList_r18_items = (LCG_Id_r18*)std::malloc((std::size_t)value.dsr_ConfigToReleaseList_r18_count * sizeof(LCG_Id_r18));
    if (value.dsr_ConfigToReleaseList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.dsr_ConfigToReleaseList_r18_items, 0, (std::size_t)value.dsr_ConfigToReleaseList_r18_count * sizeof(LCG_Id_r18));
}
for (std::uint32_t i = 0; i < value.dsr_ConfigToReleaseList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.dsr_ConfigToReleaseList_r18_items[i] = (LCG_Id_r18)tmp_value;
}
    }
    if (present_4) {
        if (Decode_SetupRelease_TAR_Config_r18(dec, value.tar_Config_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_CellGroupConfig_ExtGroup7(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_CellGroupConfig_ExtGroup7(MAC_CellGroupConfig_ExtGroup7& value)
{
    if (value.has_drx_ConfigExt2_v1800) {
        Free_SetupRelease_DRX_ConfigExt2_v1800(value.drx_ConfigExt2_v1800);
    }
    if (value.has_additionalBS_TableAllowed_r18) {
        std::free(value.additionalBS_TableAllowed_r18.bytes);
        value.additionalBS_TableAllowed_r18.bytes = nullptr;
        value.additionalBS_TableAllowed_r18.bitLength = 0;
    }
    if (value.has_dsr_ConfigToAddModList_r18) {
        if (value.dsr_ConfigToAddModList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.dsr_ConfigToAddModList_r18_count; ++i) {
                Free_LCG_DSR_Config_r18(value.dsr_ConfigToAddModList_r18_items[i]);
            }
            std::free(value.dsr_ConfigToAddModList_r18_items);
            value.dsr_ConfigToAddModList_r18_items = nullptr;
        }
        value.dsr_ConfigToAddModList_r18_count = 0;
    }
    if (value.has_dsr_ConfigToReleaseList_r18) {
        if (value.dsr_ConfigToReleaseList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.dsr_ConfigToReleaseList_r18_count; ++i) {
            }
            std::free(value.dsr_ConfigToReleaseList_r18_items);
            value.dsr_ConfigToReleaseList_r18_items = nullptr;
        }
        value.dsr_ConfigToReleaseList_r18_count = 0;
    }
    if (value.has_tar_Config_r18) {
        Free_SetupRelease_TAR_Config_r18(value.tar_Config_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SchedulingRequestConfig：ASN.1 SchedulingRequestConfig；源文件第 12067 行；SEQUENCE。
// Encode_SchedulingRequestConfig 只读不分配；Decode_SchedulingRequestConfig 可能 malloc（失败时内部已释放并清零）；Free_SchedulingRequestConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SchedulingRequestConfig(Encoder& enc, const SchedulingRequestConfig& value)
{
    enc.WriteBit(value.has_schedulingRequestToAddModList);
    enc.WriteBit(value.has_schedulingRequestToReleaseList);
    if (value.has_schedulingRequestToAddModList) {
enc.WriteConstrainedLength(value.schedulingRequestToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.schedulingRequestToAddModList_count; ++i) {
    Encode_SchedulingRequestToAddMod(enc, value.schedulingRequestToAddModList_items[i]);
}
    }
    if (value.has_schedulingRequestToReleaseList) {
enc.WriteConstrainedLength(value.schedulingRequestToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.schedulingRequestToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.schedulingRequestToReleaseList_items[i]), 0, 7);
}
    }
    return enc.Error();
}

ErrorCode Decode_SchedulingRequestConfig(Decoder& dec, SchedulingRequestConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.schedulingRequestToAddModList_count)) { goto fail; }
if (value.schedulingRequestToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.schedulingRequestToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.schedulingRequestToAddModList_count > 0u) {
    value.schedulingRequestToAddModList_items = (SchedulingRequestToAddMod*)std::malloc((std::size_t)value.schedulingRequestToAddModList_count * sizeof(SchedulingRequestToAddMod));
    if (value.schedulingRequestToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.schedulingRequestToAddModList_items, 0, (std::size_t)value.schedulingRequestToAddModList_count * sizeof(SchedulingRequestToAddMod));
}
for (std::uint32_t i = 0; i < value.schedulingRequestToAddModList_count; ++i) {
    if (Decode_SchedulingRequestToAddMod(dec, value.schedulingRequestToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.schedulingRequestToReleaseList_count)) { goto fail; }
if (value.schedulingRequestToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.schedulingRequestToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.schedulingRequestToReleaseList_count > 0u) {
    value.schedulingRequestToReleaseList_items = (SchedulingRequestId*)std::malloc((std::size_t)value.schedulingRequestToReleaseList_count * sizeof(SchedulingRequestId));
    if (value.schedulingRequestToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.schedulingRequestToReleaseList_items, 0, (std::size_t)value.schedulingRequestToReleaseList_count * sizeof(SchedulingRequestId));
}
for (std::uint32_t i = 0; i < value.schedulingRequestToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.schedulingRequestToReleaseList_items[i] = (SchedulingRequestId)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SchedulingRequestConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SchedulingRequestConfig(SchedulingRequestConfig& value)
{
    if (value.has_schedulingRequestToAddModList) {
        if (value.schedulingRequestToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.schedulingRequestToAddModList_count; ++i) {
                Free_SchedulingRequestToAddMod(value.schedulingRequestToAddModList_items[i]);
            }
            std::free(value.schedulingRequestToAddModList_items);
            value.schedulingRequestToAddModList_items = nullptr;
        }
        value.schedulingRequestToAddModList_count = 0;
    }
    if (value.has_schedulingRequestToReleaseList) {
        if (value.schedulingRequestToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.schedulingRequestToReleaseList_count; ++i) {
            }
            std::free(value.schedulingRequestToReleaseList_items);
            value.schedulingRequestToReleaseList_items = nullptr;
        }
        value.schedulingRequestToReleaseList_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TAG_Config：ASN.1 TAG-Config；源文件第 13627 行；SEQUENCE。
// Encode_TAG_Config 只读不分配；Decode_TAG_Config 可能 malloc（失败时内部已释放并清零）；Free_TAG_Config 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TAG_Config(Encoder& enc, const TAG_Config& value)
{
    enc.WriteBit(value.has_tag_ToReleaseList);
    enc.WriteBit(value.has_tag_ToAddModList);
    if (value.has_tag_ToReleaseList) {
enc.WriteConstrainedLength(value.tag_ToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.tag_ToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.tag_ToReleaseList_items[i]), 0, 3);
}
    }
    if (value.has_tag_ToAddModList) {
enc.WriteConstrainedLength(value.tag_ToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.tag_ToAddModList_count; ++i) {
    Encode_TAG(enc, value.tag_ToAddModList_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_TAG_Config(Decoder& dec, TAG_Config& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.tag_ToReleaseList_count)) { goto fail; }
if (value.tag_ToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.tag_ToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.tag_ToReleaseList_count > 0u) {
    value.tag_ToReleaseList_items = (TAG_Id*)std::malloc((std::size_t)value.tag_ToReleaseList_count * sizeof(TAG_Id));
    if (value.tag_ToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.tag_ToReleaseList_items, 0, (std::size_t)value.tag_ToReleaseList_count * sizeof(TAG_Id));
}
for (std::uint32_t i = 0; i < value.tag_ToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
    value.tag_ToReleaseList_items[i] = (TAG_Id)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.tag_ToAddModList_count)) { goto fail; }
if (value.tag_ToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.tag_ToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.tag_ToAddModList_count > 0u) {
    value.tag_ToAddModList_items = (TAG*)std::malloc((std::size_t)value.tag_ToAddModList_count * sizeof(TAG));
    if (value.tag_ToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.tag_ToAddModList_items, 0, (std::size_t)value.tag_ToAddModList_count * sizeof(TAG));
}
for (std::uint32_t i = 0; i < value.tag_ToAddModList_count; ++i) {
    if (Decode_TAG(dec, value.tag_ToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_TAG_Config(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TAG_Config(TAG_Config& value)
{
    if (value.has_tag_ToReleaseList) {
        if (value.tag_ToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.tag_ToReleaseList_count; ++i) {
            }
            std::free(value.tag_ToReleaseList_items);
            value.tag_ToReleaseList_items = nullptr;
        }
        value.tag_ToReleaseList_count = 0;
    }
    if (value.has_tag_ToAddModList) {
        if (value.tag_ToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.tag_ToAddModList_count; ++i) {
                Free_TAG(value.tag_ToAddModList_items[i]);
            }
            std::free(value.tag_ToAddModList_items);
            value.tag_ToAddModList_items = nullptr;
        }
        value.tag_ToAddModList_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DRX_Config_Drx_onDurationTimer：ASN.1 drx-onDurationTimer；源文件第 6634 行；CHOICE。
// Encode_DRX_Config_Drx_onDurationTimer 只读不分配；Decode_DRX_Config_Drx_onDurationTimer 可能 malloc（失败时内部已释放并清零）；Free_DRX_Config_Drx_onDurationTimer 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DRX_Config_Drx_onDurationTimer(Encoder& enc, const DRX_Config_Drx_onDurationTimer& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case DRX_Config_Drx_onDurationTimer_Tag_subMilliSeconds:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.subMilliSeconds), 1, 31);
        break;
    case DRX_Config_Drx_onDurationTimer_Tag_milliSeconds:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.milliSeconds), 0, 31);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_DRX_Config_Drx_onDurationTimer(Decoder& dec, DRX_Config_Drx_onDurationTimer& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (DRX_Config_Drx_onDurationTimer_Tag)root_index;
    switch (value.tag) {
    case DRX_Config_Drx_onDurationTimer_Tag_subMilliSeconds: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 31, tmp_value)) { goto fail; }
        value.u.subMilliSeconds = (int64_t)tmp_value;
        break;
    }
    case DRX_Config_Drx_onDurationTimer_Tag_milliSeconds: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.milliSeconds = (DRX_Config_Drx_onDurationTimer_MilliSeconds)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DRX_Config_Drx_onDurationTimer(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DRX_Config_Drx_onDurationTimer(DRX_Config_Drx_onDurationTimer& value)
{
    switch (value.tag) {
    case DRX_Config_Drx_onDurationTimer_Tag_subMilliSeconds:
        break;
    case DRX_Config_Drx_onDurationTimer_Tag_milliSeconds:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DRX_Config_Drx_LongCycleStartOffset：ASN.1 drx-LongCycleStartOffset；源文件第 6655 行；CHOICE。
// Encode_DRX_Config_Drx_LongCycleStartOffset 只读不分配；Decode_DRX_Config_Drx_LongCycleStartOffset 可能 malloc（失败时内部已释放并清零）；Free_DRX_Config_Drx_LongCycleStartOffset 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DRX_Config_Drx_LongCycleStartOffset(Encoder& enc, const DRX_Config_Drx_LongCycleStartOffset& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 19);
    switch (value.tag) {
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms10:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms10), 0, 9);
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms20:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms20), 0, 19);
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms32:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms32), 0, 31);
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms40:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms40), 0, 39);
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms60:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms60), 0, 59);
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms64:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms64), 0, 63);
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms70:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms70), 0, 69);
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms80:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms80), 0, 79);
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms128:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms128), 0, 127);
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms160:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms160), 0, 159);
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms256:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms256), 0, 255);
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms320:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms320), 0, 319);
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms512:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms512), 0, 511);
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms640:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms640), 0, 639);
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms1024:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms1024), 0, 1023);
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms1280:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms1280), 0, 1279);
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms2048:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms2048), 0, 2047);
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms2560:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms2560), 0, 2559);
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms5120:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms5120), 0, 5119);
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms10240:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms10240), 0, 10239);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_DRX_Config_Drx_LongCycleStartOffset(Decoder& dec, DRX_Config_Drx_LongCycleStartOffset& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 19, root_index)) {
        goto fail;
    }
    value.tag = (DRX_Config_Drx_LongCycleStartOffset_Tag)root_index;
    switch (value.tag) {
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms10: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.u.ms10 = (int64_t)tmp_value;
        break;
    }
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms20: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 19, tmp_value)) { goto fail; }
        value.u.ms20 = (int64_t)tmp_value;
        break;
    }
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms32: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.ms32 = (int64_t)tmp_value;
        break;
    }
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms40: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.ms40 = (int64_t)tmp_value;
        break;
    }
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms60: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 59, tmp_value)) { goto fail; }
        value.u.ms60 = (int64_t)tmp_value;
        break;
    }
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms64: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.ms64 = (int64_t)tmp_value;
        break;
    }
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms70: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 69, tmp_value)) { goto fail; }
        value.u.ms70 = (int64_t)tmp_value;
        break;
    }
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms80: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.ms80 = (int64_t)tmp_value;
        break;
    }
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms128: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.u.ms128 = (int64_t)tmp_value;
        break;
    }
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms160: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.u.ms160 = (int64_t)tmp_value;
        break;
    }
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms256: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
        value.u.ms256 = (int64_t)tmp_value;
        break;
    }
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms320: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.u.ms320 = (int64_t)tmp_value;
        break;
    }
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms512: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
        value.u.ms512 = (int64_t)tmp_value;
        break;
    }
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms640: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.u.ms640 = (int64_t)tmp_value;
        break;
    }
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms1024: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.u.ms1024 = (int64_t)tmp_value;
        break;
    }
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms1280: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1279, tmp_value)) { goto fail; }
        value.u.ms1280 = (int64_t)tmp_value;
        break;
    }
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms2048: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2047, tmp_value)) { goto fail; }
        value.u.ms2048 = (int64_t)tmp_value;
        break;
    }
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms2560: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2559, tmp_value)) { goto fail; }
        value.u.ms2560 = (int64_t)tmp_value;
        break;
    }
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms5120: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5119, tmp_value)) { goto fail; }
        value.u.ms5120 = (int64_t)tmp_value;
        break;
    }
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms10240: {
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
    Free_DRX_Config_Drx_LongCycleStartOffset(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DRX_Config_Drx_LongCycleStartOffset(DRX_Config_Drx_LongCycleStartOffset& value)
{
    switch (value.tag) {
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms10:
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms20:
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms32:
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms40:
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms60:
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms64:
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms70:
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms80:
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms128:
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms160:
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms256:
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms320:
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms512:
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms640:
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms1024:
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms1280:
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms2048:
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms2560:
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms5120:
        break;
    case DRX_Config_Drx_LongCycleStartOffset_Tag_ms10240:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DRX_Config_ShortDRX：ASN.1 shortDRX；源文件第 6677 行；SEQUENCE。
// Encode_DRX_Config_ShortDRX 只读不分配；Decode_DRX_Config_ShortDRX 可能 malloc（失败时内部已释放并清零）；Free_DRX_Config_ShortDRX 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DRX_Config_ShortDRX(Encoder& enc, const DRX_Config_ShortDRX& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.drx_ShortCycle), 0, 31);
    enc.WriteConstrainedInteger((std::int64_t)(value.drx_ShortCycleTimer), 1, 16);
    return enc.Error();
}

ErrorCode Decode_DRX_Config_ShortDRX(Decoder& dec, DRX_Config_ShortDRX& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.drx_ShortCycle = (DRX_Config_ShortDRX_Drx_ShortCycle)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.drx_ShortCycleTimer = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DRX_Config_ShortDRX(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DRX_Config_ShortDRX(DRX_Config_ShortDRX& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DRX_Config：ASN.1 DRX-Config；源文件第 6633 行；SEQUENCE。
// Encode_DRX_Config 只读不分配；Decode_DRX_Config 可能 malloc（失败时内部已释放并清零）；Free_DRX_Config 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DRX_Config(Encoder& enc, const DRX_Config& value)
{
    enc.WriteBit(value.has_shortDRX);
    Encode_DRX_Config_Drx_onDurationTimer(enc, value.drx_onDurationTimer);
    enc.WriteConstrainedInteger((std::int64_t)(value.drx_InactivityTimer), 0, 31);
    enc.WriteConstrainedInteger((std::int64_t)(value.drx_HARQ_RTT_TimerDL), 0, 56);
    enc.WriteConstrainedInteger((std::int64_t)(value.drx_HARQ_RTT_TimerUL), 0, 56);
    enc.WriteConstrainedInteger((std::int64_t)(value.drx_RetransmissionTimerDL), 0, 31);
    enc.WriteConstrainedInteger((std::int64_t)(value.drx_RetransmissionTimerUL), 0, 31);
    Encode_DRX_Config_Drx_LongCycleStartOffset(enc, value.drx_LongCycleStartOffset);
    if (value.has_shortDRX) {
        Encode_DRX_Config_ShortDRX(enc, value.shortDRX);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.drx_SlotOffset), 0, 31);
    return enc.Error();
}

ErrorCode Decode_DRX_Config(Decoder& dec, DRX_Config& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_DRX_Config_Drx_onDurationTimer(dec, value.drx_onDurationTimer) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.drx_InactivityTimer = (DRX_Config_Drx_InactivityTimer)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 56, tmp_value)) { goto fail; }
        value.drx_HARQ_RTT_TimerDL = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 56, tmp_value)) { goto fail; }
        value.drx_HARQ_RTT_TimerUL = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.drx_RetransmissionTimerDL = (DRX_Config_Drx_RetransmissionTimerDL)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.drx_RetransmissionTimerUL = (DRX_Config_Drx_RetransmissionTimerUL)tmp_value;
    }
    {
        if (Decode_DRX_Config_Drx_LongCycleStartOffset(dec, value.drx_LongCycleStartOffset) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_DRX_Config_ShortDRX(dec, value.shortDRX) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.drx_SlotOffset = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DRX_Config(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DRX_Config(DRX_Config& value)
{
    Free_DRX_Config_Drx_onDurationTimer(value.drx_onDurationTimer);
    Free_DRX_Config_Drx_LongCycleStartOffset(value.drx_LongCycleStartOffset);
    if (value.has_shortDRX) {
        Free_DRX_Config_ShortDRX(value.shortDRX);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_DRX_Config：ASN.1 SetupRelease<DRX-Config>；源文件第 7307 行；CHOICE。
// Encode_SetupRelease_DRX_Config 只读不分配；Decode_SetupRelease_DRX_Config 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_DRX_Config 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_DRX_Config(Encoder& enc, const SetupRelease_DRX_Config& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DRX_Config_Tag_release:
        (void)0;
        break;
    case SetupRelease_DRX_Config_Tag_setup:
        Encode_DRX_Config(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DRX_Config(Decoder& dec, SetupRelease_DRX_Config& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DRX_Config_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DRX_Config_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DRX_Config_Tag_setup: {
        if (Decode_DRX_Config(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DRX_Config(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DRX_Config(SetupRelease_DRX_Config& value)
{
    switch (value.tag) {
    case SetupRelease_DRX_Config_Tag_release:
        break;
    case SetupRelease_DRX_Config_Tag_setup:
        Free_DRX_Config(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MPE_Config_FR2_r16：ASN.1 MPE-Config-FR2-r16；源文件第 9653 行；SEQUENCE。
// Encode_MPE_Config_FR2_r16 只读不分配；Decode_MPE_Config_FR2_r16 可能 malloc（失败时内部已释放并清零）；Free_MPE_Config_FR2_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MPE_Config_FR2_r16(Encoder& enc, const MPE_Config_FR2_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.mpe_ProhibitTimer_r16), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.mpe_Threshold_r16), 0, 3);
    return enc.Error();
}

ErrorCode Decode_MPE_Config_FR2_r16(Decoder& dec, MPE_Config_FR2_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.mpe_ProhibitTimer_r16 = (MPE_Config_FR2_r16_Mpe_ProhibitTimer_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.mpe_Threshold_r16 = (MPE_Config_FR2_r16_Mpe_Threshold_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MPE_Config_FR2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MPE_Config_FR2_r16(MPE_Config_FR2_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_MPE_Config_FR2_r16：ASN.1 SetupRelease<MPE-Config-FR2-r16>；源文件第 9641 行；CHOICE。
// Encode_SetupRelease_MPE_Config_FR2_r16 只读不分配；Decode_SetupRelease_MPE_Config_FR2_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_MPE_Config_FR2_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_MPE_Config_FR2_r16(Encoder& enc, const SetupRelease_MPE_Config_FR2_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_MPE_Config_FR2_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_MPE_Config_FR2_r16_Tag_setup:
        Encode_MPE_Config_FR2_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_MPE_Config_FR2_r16(Decoder& dec, SetupRelease_MPE_Config_FR2_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_MPE_Config_FR2_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_MPE_Config_FR2_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_MPE_Config_FR2_r16_Tag_setup: {
        if (Decode_MPE_Config_FR2_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_MPE_Config_FR2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_MPE_Config_FR2_r16(SetupRelease_MPE_Config_FR2_r16& value)
{
    switch (value.tag) {
    case SetupRelease_MPE_Config_FR2_r16_Tag_release:
        break;
    case SetupRelease_MPE_Config_FR2_r16_Tag_setup:
        Free_MPE_Config_FR2_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PHR_Config_ExtGroup1：ASN.1 PHR_Config_ExtGroup1；源文件第 9640 行；扩展添加组 [[ ]]。
// Encode_PHR_Config_ExtGroup1 只读不分配；Decode_PHR_Config_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_PHR_Config_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PHR_Config_ExtGroup1(Encoder& enc, const PHR_Config_ExtGroup1& value)
{
    enc.WriteBit(value.has_mpe_Reporting_FR2_r16);
    if (value.has_mpe_Reporting_FR2_r16) {
        Encode_SetupRelease_MPE_Config_FR2_r16(enc, value.mpe_Reporting_FR2_r16);
    }
    return enc.Error();
}

ErrorCode Decode_PHR_Config_ExtGroup1(Decoder& dec, PHR_Config_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_MPE_Config_FR2_r16(dec, value.mpe_Reporting_FR2_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PHR_Config_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PHR_Config_ExtGroup1(PHR_Config_ExtGroup1& value)
{
    if (value.has_mpe_Reporting_FR2_r16) {
        Free_SetupRelease_MPE_Config_FR2_r16(value.mpe_Reporting_FR2_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MPE_Config_FR2_r17：ASN.1 MPE-Config-FR2-r17；源文件第 9658 行；SEQUENCE。
// Encode_MPE_Config_FR2_r17 只读不分配；Decode_MPE_Config_FR2_r17 可能 malloc（失败时内部已释放并清零）；Free_MPE_Config_FR2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MPE_Config_FR2_r17(Encoder& enc, const MPE_Config_FR2_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.mpe_ProhibitTimer_r17), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.mpe_Threshold_r17), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.numberOfN_r17), 1, 4);
    return enc.Error();
}

ErrorCode Decode_MPE_Config_FR2_r17(Decoder& dec, MPE_Config_FR2_r17& value)
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
        value.mpe_ProhibitTimer_r17 = (MPE_Config_FR2_r17_Mpe_ProhibitTimer_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.mpe_Threshold_r17 = (MPE_Config_FR2_r17_Mpe_Threshold_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.numberOfN_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MPE_Config_FR2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MPE_Config_FR2_r17(MPE_Config_FR2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_MPE_Config_FR2_r17：ASN.1 SetupRelease<MPE-Config-FR2-r17>；源文件第 9644 行；CHOICE。
// Encode_SetupRelease_MPE_Config_FR2_r17 只读不分配；Decode_SetupRelease_MPE_Config_FR2_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_MPE_Config_FR2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_MPE_Config_FR2_r17(Encoder& enc, const SetupRelease_MPE_Config_FR2_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_MPE_Config_FR2_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_MPE_Config_FR2_r17_Tag_setup:
        Encode_MPE_Config_FR2_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_MPE_Config_FR2_r17(Decoder& dec, SetupRelease_MPE_Config_FR2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_MPE_Config_FR2_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_MPE_Config_FR2_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_MPE_Config_FR2_r17_Tag_setup: {
        if (Decode_MPE_Config_FR2_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_MPE_Config_FR2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_MPE_Config_FR2_r17(SetupRelease_MPE_Config_FR2_r17& value)
{
    switch (value.tag) {
    case SetupRelease_MPE_Config_FR2_r17_Tag_release:
        break;
    case SetupRelease_MPE_Config_FR2_r17_Tag_setup:
        Free_MPE_Config_FR2_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PHR_Config_ExtGroup2：ASN.1 PHR_Config_ExtGroup2；源文件第 9643 行；扩展添加组 [[ ]]。
// Encode_PHR_Config_ExtGroup2 只读不分配；Decode_PHR_Config_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_PHR_Config_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PHR_Config_ExtGroup2(Encoder& enc, const PHR_Config_ExtGroup2& value)
{
    enc.WriteBit(value.has_mpe_Reporting_FR2_r17);
    enc.WriteBit(value.has_twoPHRMode_r17);
    if (value.has_mpe_Reporting_FR2_r17) {
        Encode_SetupRelease_MPE_Config_FR2_r17(enc, value.mpe_Reporting_FR2_r17);
    }
    if (value.has_twoPHRMode_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPHRMode_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PHR_Config_ExtGroup2(Decoder& dec, PHR_Config_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_MPE_Config_FR2_r17(dec, value.mpe_Reporting_FR2_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.twoPHRMode_r17 = (PHR_Config_ExtGroup2_TwoPHRMode_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PHR_Config_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PHR_Config_ExtGroup2(PHR_Config_ExtGroup2& value)
{
    if (value.has_mpe_Reporting_FR2_r17) {
        Free_SetupRelease_MPE_Config_FR2_r17(value.mpe_Reporting_FR2_r17);
    }
    if (value.has_twoPHRMode_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PHR_Config_ExtGroup3：ASN.1 PHR_Config_ExtGroup3；源文件第 9647 行；扩展添加组 [[ ]]。
// Encode_PHR_Config_ExtGroup3 只读不分配；Decode_PHR_Config_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_PHR_Config_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PHR_Config_ExtGroup3(Encoder& enc, const PHR_Config_ExtGroup3& value)
{
    enc.WriteBit(value.has_phr_AssumedPUSCH_Reporting_r18);
    enc.WriteBit(value.has_dpc_Reporting_FR1_r18);
    if (value.has_phr_AssumedPUSCH_Reporting_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.phr_AssumedPUSCH_Reporting_r18), 0, 0);
    }
    if (value.has_dpc_Reporting_FR1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dpc_Reporting_FR1_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PHR_Config_ExtGroup3(Decoder& dec, PHR_Config_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.phr_AssumedPUSCH_Reporting_r18 = (PHR_Config_ExtGroup3_Phr_AssumedPUSCH_Reporting_r18)0;
    }
    if (present_1) {
        value.dpc_Reporting_FR1_r18 = (PHR_Config_ExtGroup3_Dpc_Reporting_FR1_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PHR_Config_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PHR_Config_ExtGroup3(PHR_Config_ExtGroup3& value)
{
    if (value.has_phr_AssumedPUSCH_Reporting_r18) {
    }
    if (value.has_dpc_Reporting_FR1_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PHR_Config：ASN.1 PHR-Config；源文件第 9631 行；SEQUENCE。
// Encode_PHR_Config 只读不分配；Decode_PHR_Config 可能 malloc（失败时内部已释放并清零）；Free_PHR_Config 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PHR_Config(Encoder& enc, const PHR_Config& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.phr_PeriodicTimer), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.phr_ProhibitTimer), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.phr_Tx_PowerFactorChange), 0, 3);
    enc.WriteBool(value.multiplePHR);
    enc.WriteBool(value.dummy);
    enc.WriteBool(value.phr_Type2OtherCell);
    enc.WriteConstrainedInteger((std::int64_t)(value.phr_ModeOtherCG), 0, 1);
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_PHR_Config_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_PHR_Config_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_PHR_Config_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PHR_Config(Decoder& dec, PHR_Config& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.phr_PeriodicTimer = (PHR_Config_Phr_PeriodicTimer)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.phr_ProhibitTimer = (PHR_Config_Phr_ProhibitTimer)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.phr_Tx_PowerFactorChange = (PHR_Config_Phr_Tx_PowerFactorChange)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.multiplePHR = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.dummy = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.phr_Type2OtherCell = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.phr_ModeOtherCG = (PHR_Config_Phr_ModeOtherCG)tmp_value;
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
    if (Decode_PHR_Config_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_PHR_Config_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_PHR_Config_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    Free_PHR_Config(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PHR_Config(PHR_Config& value)
{
    if (value.has_extGroup1) {
        Free_PHR_Config_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_PHR_Config_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_PHR_Config_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PHR_Config：ASN.1 SetupRelease<PHR-Config>；源文件第 7311 行；CHOICE。
// Encode_SetupRelease_PHR_Config 只读不分配；Decode_SetupRelease_PHR_Config 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PHR_Config 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PHR_Config(Encoder& enc, const SetupRelease_PHR_Config& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PHR_Config_Tag_release:
        (void)0;
        break;
    case SetupRelease_PHR_Config_Tag_setup:
        Encode_PHR_Config(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PHR_Config(Decoder& dec, SetupRelease_PHR_Config& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PHR_Config_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PHR_Config_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PHR_Config_Tag_setup: {
        if (Decode_PHR_Config(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PHR_Config(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PHR_Config(SetupRelease_PHR_Config& value)
{
    switch (value.tag) {
    case SetupRelease_PHR_Config_Tag_release:
        break;
    case SetupRelease_PHR_Config_Tag_setup:
        Free_PHR_Config(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MAC_CellGroupConfig：ASN.1 MAC-CellGroupConfig；源文件第 7306 行；SEQUENCE。
// Encode_MAC_CellGroupConfig 只读不分配；Decode_MAC_CellGroupConfig 可能 malloc（失败时内部已释放并清零）；Free_MAC_CellGroupConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MAC_CellGroupConfig(Encoder& enc, const MAC_CellGroupConfig& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4 || value.has_extGroup5 || value.has_extGroup6 || value.has_extGroup7;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_drx_Config);
    enc.WriteBit(value.has_schedulingRequestConfig);
    enc.WriteBit(value.has_bsr_Config);
    enc.WriteBit(value.has_tag_Config);
    enc.WriteBit(value.has_phr_Config);
    if (value.has_drx_Config) {
        Encode_SetupRelease_DRX_Config(enc, value.drx_Config);
    }
    if (value.has_schedulingRequestConfig) {
        Encode_SchedulingRequestConfig(enc, value.schedulingRequestConfig);
    }
    if (value.has_bsr_Config) {
        Encode_BSR_Config(enc, value.bsr_Config);
    }
    if (value.has_tag_Config) {
        Encode_TAG_Config(enc, value.tag_Config);
    }
    if (value.has_phr_Config) {
        Encode_SetupRelease_PHR_Config(enc, value.phr_Config);
    }
    enc.WriteBool(value.skipUplinkTxDynamic);
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
    Encode_MAC_CellGroupConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_MAC_CellGroupConfig_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_MAC_CellGroupConfig_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_MAC_CellGroupConfig_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup5) {
    Encoder sub;
    Encode_MAC_CellGroupConfig_ExtGroup5(sub, value.extGroup5);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup6) {
    Encoder sub;
    Encode_MAC_CellGroupConfig_ExtGroup6(sub, value.extGroup6);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup7) {
    Encoder sub;
    Encode_MAC_CellGroupConfig_ExtGroup7(sub, value.extGroup7);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_MAC_CellGroupConfig(Decoder& dec, MAC_CellGroupConfig& value)
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
        if (Decode_SetupRelease_DRX_Config(dec, value.drx_Config) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SchedulingRequestConfig(dec, value.schedulingRequestConfig) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_BSR_Config(dec, value.bsr_Config) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_TAG_Config(dec, value.tag_Config) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SetupRelease_PHR_Config(dec, value.phr_Config) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.skipUplinkTxDynamic = tmp_value;
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
    if (Decode_MAC_CellGroupConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_MAC_CellGroupConfig_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_MAC_CellGroupConfig_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_MAC_CellGroupConfig_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    if (Decode_MAC_CellGroupConfig_ExtGroup5(sub, value.extGroup5) != ErrorCode_Ok) {
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
    if (Decode_MAC_CellGroupConfig_ExtGroup6(sub, value.extGroup6) != ErrorCode_Ok) {
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
    if (Decode_MAC_CellGroupConfig_ExtGroup7(sub, value.extGroup7) != ErrorCode_Ok) {
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
    Free_MAC_CellGroupConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_CellGroupConfig(MAC_CellGroupConfig& value)
{
    if (value.has_drx_Config) {
        Free_SetupRelease_DRX_Config(value.drx_Config);
    }
    if (value.has_schedulingRequestConfig) {
        Free_SchedulingRequestConfig(value.schedulingRequestConfig);
    }
    if (value.has_bsr_Config) {
        Free_BSR_Config(value.bsr_Config);
    }
    if (value.has_tag_Config) {
        Free_TAG_Config(value.tag_Config);
    }
    if (value.has_phr_Config) {
        Free_SetupRelease_PHR_Config(value.phr_Config);
    }
    if (value.has_extGroup1) {
        Free_MAC_CellGroupConfig_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_MAC_CellGroupConfig_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_MAC_CellGroupConfig_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_MAC_CellGroupConfig_ExtGroup4(value.extGroup4);
    }
    if (value.has_extGroup5) {
        Free_MAC_CellGroupConfig_ExtGroup5(value.extGroup5);
    }
    if (value.has_extGroup6) {
        Free_MAC_CellGroupConfig_ExtGroup6(value.extGroup6);
    }
    if (value.has_extGroup7) {
        Free_MAC_CellGroupConfig_ExtGroup7(value.extGroup7);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PhysicalCellGroupConfig_ExtGroup7：ASN.1 PhysicalCellGroupConfig_ExtGroup7；源文件第 9760 行；扩展添加组 [[ ]]。
// Encode_PhysicalCellGroupConfig_ExtGroup7 只读不分配；Decode_PhysicalCellGroupConfig_ExtGroup7 可能 malloc（失败时内部已释放并清零）；Free_PhysicalCellGroupConfig_ExtGroup7 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PhysicalCellGroupConfig_ExtGroup7(Encoder& enc, const PhysicalCellGroupConfig_ExtGroup7& value)
{
    enc.WriteBit(value.has_intraBandNC_PRACH_simulTx_r17);
    if (value.has_intraBandNC_PRACH_simulTx_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.intraBandNC_PRACH_simulTx_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PhysicalCellGroupConfig_ExtGroup7(Decoder& dec, PhysicalCellGroupConfig_ExtGroup7& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.intraBandNC_PRACH_simulTx_r17 = (PhysicalCellGroupConfig_ExtGroup7_IntraBandNC_PRACH_simulTx_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PhysicalCellGroupConfig_ExtGroup7(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PhysicalCellGroupConfig_ExtGroup7(PhysicalCellGroupConfig_ExtGroup7& value)
{
    if (value.has_intraBandNC_PRACH_simulTx_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PhysicalCellGroupConfig_ExtGroup2：ASN.1 PhysicalCellGroupConfig_ExtGroup2；源文件第 9688 行；扩展添加组 [[ ]]。
// Encode_PhysicalCellGroupConfig_ExtGroup2 只读不分配；Decode_PhysicalCellGroupConfig_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_PhysicalCellGroupConfig_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PhysicalCellGroupConfig_ExtGroup2(Encoder& enc, const PhysicalCellGroupConfig_ExtGroup2& value)
{
    enc.WriteBit(value.has_xScale);
    if (value.has_xScale) {
        enc.WriteConstrainedInteger((std::int64_t)(value.xScale), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_PhysicalCellGroupConfig_ExtGroup2(Decoder& dec, PhysicalCellGroupConfig_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.xScale = (PhysicalCellGroupConfig_ExtGroup2_XScale)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PhysicalCellGroupConfig_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PhysicalCellGroupConfig_ExtGroup2(PhysicalCellGroupConfig_ExtGroup2& value)
{
    if (value.has_xScale) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PDCCH_BlindDetection：ASN.1 SetupRelease<PDCCH-BlindDetection>；源文件第 9692 行；CHOICE。
// Encode_SetupRelease_PDCCH_BlindDetection 只读不分配；Decode_SetupRelease_PDCCH_BlindDetection 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PDCCH_BlindDetection 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PDCCH_BlindDetection(Encoder& enc, const SetupRelease_PDCCH_BlindDetection& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PDCCH_BlindDetection_Tag_release:
        (void)0;
        break;
    case SetupRelease_PDCCH_BlindDetection_Tag_setup:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.setup), 1, 15);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PDCCH_BlindDetection(Decoder& dec, SetupRelease_PDCCH_BlindDetection& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PDCCH_BlindDetection_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PDCCH_BlindDetection_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PDCCH_BlindDetection_Tag_setup: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 15, tmp_value)) { goto fail; }
        value.u.setup = (PDCCH_BlindDetection)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PDCCH_BlindDetection(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PDCCH_BlindDetection(SetupRelease_PDCCH_BlindDetection& value)
{
    switch (value.tag) {
    case SetupRelease_PDCCH_BlindDetection_Tag_release:
        break;
    case SetupRelease_PDCCH_BlindDetection_Tag_setup:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PhysicalCellGroupConfig_ExtGroup3：ASN.1 PhysicalCellGroupConfig_ExtGroup3；源文件第 9691 行；扩展添加组 [[ ]]。
// Encode_PhysicalCellGroupConfig_ExtGroup3 只读不分配；Decode_PhysicalCellGroupConfig_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_PhysicalCellGroupConfig_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PhysicalCellGroupConfig_ExtGroup3(Encoder& enc, const PhysicalCellGroupConfig_ExtGroup3& value)
{
    enc.WriteBit(value.has_pdcch_BlindDetection);
    if (value.has_pdcch_BlindDetection) {
        Encode_SetupRelease_PDCCH_BlindDetection(enc, value.pdcch_BlindDetection);
    }
    return enc.Error();
}

ErrorCode Decode_PhysicalCellGroupConfig_ExtGroup3(Decoder& dec, PhysicalCellGroupConfig_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_PDCCH_BlindDetection(dec, value.pdcch_BlindDetection) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PhysicalCellGroupConfig_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PhysicalCellGroupConfig_ExtGroup3(PhysicalCellGroupConfig_ExtGroup3& value)
{
    if (value.has_pdcch_BlindDetection) {
        Free_SetupRelease_PDCCH_BlindDetection(value.pdcch_BlindDetection);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DCP_Config_r16：ASN.1 DCP-Config-r16；源文件第 9800 行；SEQUENCE。
// Encode_DCP_Config_r16 只读不分配；Decode_DCP_Config_r16 可能 malloc（失败时内部已释放并清零）；Free_DCP_Config_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DCP_Config_r16(Encoder& enc, const DCP_Config_r16& value)
{
    enc.WriteBit(value.has_ps_WakeUp_r16);
    enc.WriteBit(value.has_ps_TransmitPeriodicL1_RSRP_r16);
    enc.WriteBit(value.has_ps_TransmitOtherPeriodicCSI_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.ps_RNTI_r16), 0, 65535);
    enc.WriteConstrainedInteger((std::int64_t)(value.ps_Offset_r16), 1, 120);
    enc.WriteConstrainedInteger((std::int64_t)(value.sizeDCI_2_6_r16), 1, 140);
    enc.WriteConstrainedInteger((std::int64_t)(value.ps_PositionDCI_2_6_r16), 0, 139);
    if (value.has_ps_WakeUp_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ps_WakeUp_r16), 0, 0);
    }
    if (value.has_ps_TransmitPeriodicL1_RSRP_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ps_TransmitPeriodicL1_RSRP_r16), 0, 0);
    }
    if (value.has_ps_TransmitOtherPeriodicCSI_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ps_TransmitOtherPeriodicCSI_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_DCP_Config_r16(Decoder& dec, DCP_Config_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.ps_RNTI_r16 = (RNTI_Value)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 120, tmp_value)) { goto fail; }
        value.ps_Offset_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 140, tmp_value)) { goto fail; }
        value.sizeDCI_2_6_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 139, tmp_value)) { goto fail; }
        value.ps_PositionDCI_2_6_r16 = (int64_t)tmp_value;
    }
    if (present_0) {
        value.ps_WakeUp_r16 = (DCP_Config_r16_Ps_WakeUp_r16)0;
    }
    if (present_1) {
        value.ps_TransmitPeriodicL1_RSRP_r16 = (DCP_Config_r16_Ps_TransmitPeriodicL1_RSRP_r16)0;
    }
    if (present_2) {
        value.ps_TransmitOtherPeriodicCSI_r16 = (DCP_Config_r16_Ps_TransmitOtherPeriodicCSI_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DCP_Config_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DCP_Config_r16(DCP_Config_r16& value)
{
    if (value.has_ps_WakeUp_r16) {
    }
    if (value.has_ps_TransmitPeriodicL1_RSRP_r16) {
    }
    if (value.has_ps_TransmitOtherPeriodicCSI_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_DCP_Config_r16：ASN.1 SetupRelease<DCP-Config-r16>；源文件第 9695 行；CHOICE。
// Encode_SetupRelease_DCP_Config_r16 只读不分配；Decode_SetupRelease_DCP_Config_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_DCP_Config_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_DCP_Config_r16(Encoder& enc, const SetupRelease_DCP_Config_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DCP_Config_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_DCP_Config_r16_Tag_setup:
        Encode_DCP_Config_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DCP_Config_r16(Decoder& dec, SetupRelease_DCP_Config_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DCP_Config_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DCP_Config_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DCP_Config_r16_Tag_setup: {
        if (Decode_DCP_Config_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DCP_Config_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DCP_Config_r16(SetupRelease_DCP_Config_r16& value)
{
    switch (value.tag) {
    case SetupRelease_DCP_Config_r16_Tag_release:
        break;
    case SetupRelease_DCP_Config_r16_Tag_setup:
        Free_DCP_Config_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDSCH_HARQ_ACK_CodebookList_r16：ASN.1 PDSCH-HARQ-ACK-CodebookList-r16；源文件第 9810 行；SEQUENCE OF。
// Encode_PDSCH_HARQ_ACK_CodebookList_r16 只读不分配；Decode_PDSCH_HARQ_ACK_CodebookList_r16 可能 malloc（失败时内部已释放并清零）；Free_PDSCH_HARQ_ACK_CodebookList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDSCH_HARQ_ACK_CodebookList_r16(Encoder& enc, const PDSCH_HARQ_ACK_CodebookList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 2u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_HARQ_ACK_CodebookList_r16(Decoder& dec, PDSCH_HARQ_ACK_CodebookList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 2u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 2u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PDSCH_HARQ_ACK_CodebookList_r16_Item*)std::malloc((std::size_t)value.count * sizeof(PDSCH_HARQ_ACK_CodebookList_r16_Item));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PDSCH_HARQ_ACK_CodebookList_r16_Item));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
    value.items[i] = (PDSCH_HARQ_ACK_CodebookList_r16_Item)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_HARQ_ACK_CodebookList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_HARQ_ACK_CodebookList_r16(PDSCH_HARQ_ACK_CodebookList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16：ASN.1 SetupRelease<PDSCH-HARQ-ACK-CodebookList-r16>；源文件第 9711 行；CHOICE。
// Encode_SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16 只读不分配；Decode_SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16(Encoder& enc, const SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16_Tag_setup:
        Encode_PDSCH_HARQ_ACK_CodebookList_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16(Decoder& dec, SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16_Tag_setup: {
        if (Decode_PDSCH_HARQ_ACK_CodebookList_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16(SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16& value)
{
    switch (value.tag) {
    case SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16_Tag_release:
        break;
    case SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16_Tag_setup:
        Free_PDSCH_HARQ_ACK_CodebookList_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_BlindDetectionCA_CombIndicator_r16：ASN.1 PDCCH-BlindDetectionCA-CombIndicator-r16；源文件第 9812 行；SEQUENCE。
// Encode_PDCCH_BlindDetectionCA_CombIndicator_r16 只读不分配；Decode_PDCCH_BlindDetectionCA_CombIndicator_r16 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_BlindDetectionCA_CombIndicator_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_BlindDetectionCA_CombIndicator_r16(Encoder& enc, const PDCCH_BlindDetectionCA_CombIndicator_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCA1_r16), 1, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCA2_r16), 1, 15);
    return enc.Error();
}

ErrorCode Decode_PDCCH_BlindDetectionCA_CombIndicator_r16(Decoder& dec, PDCCH_BlindDetectionCA_CombIndicator_r16& value)
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
    Free_PDCCH_BlindDetectionCA_CombIndicator_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_BlindDetectionCA_CombIndicator_r16(PDCCH_BlindDetectionCA_CombIndicator_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16：ASN.1 SetupRelease<PDCCH-BlindDetectionCA-CombIndicator-r16>；源文件第 9713 行；CHOICE。
// Encode_SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16 只读不分配；Decode_SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16(Encoder& enc, const SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16_Tag_setup:
        Encode_PDCCH_BlindDetectionCA_CombIndicator_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16(Decoder& dec, SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16_Tag_setup: {
        if (Decode_PDCCH_BlindDetectionCA_CombIndicator_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16(SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16& value)
{
    switch (value.tag) {
    case SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16_Tag_release:
        break;
    case SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16_Tag_setup:
        Free_PDCCH_BlindDetectionCA_CombIndicator_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PDCCH_BlindDetection2_r16：ASN.1 SetupRelease<PDCCH-BlindDetection2-r16>；源文件第 9714 行；CHOICE。
// Encode_SetupRelease_PDCCH_BlindDetection2_r16 只读不分配；Decode_SetupRelease_PDCCH_BlindDetection2_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PDCCH_BlindDetection2_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PDCCH_BlindDetection2_r16(Encoder& enc, const SetupRelease_PDCCH_BlindDetection2_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PDCCH_BlindDetection2_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_PDCCH_BlindDetection2_r16_Tag_setup:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.setup), 1, 15);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PDCCH_BlindDetection2_r16(Decoder& dec, SetupRelease_PDCCH_BlindDetection2_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PDCCH_BlindDetection2_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PDCCH_BlindDetection2_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PDCCH_BlindDetection2_r16_Tag_setup: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 15, tmp_value)) { goto fail; }
        value.u.setup = (PDCCH_BlindDetection2_r16)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PDCCH_BlindDetection2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PDCCH_BlindDetection2_r16(SetupRelease_PDCCH_BlindDetection2_r16& value)
{
    switch (value.tag) {
    case SetupRelease_PDCCH_BlindDetection2_r16_Tag_release:
        break;
    case SetupRelease_PDCCH_BlindDetection2_r16_Tag_setup:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PDCCH_BlindDetection3_r16：ASN.1 SetupRelease<PDCCH-BlindDetection3-r16>；源文件第 9715 行；CHOICE。
// Encode_SetupRelease_PDCCH_BlindDetection3_r16 只读不分配；Decode_SetupRelease_PDCCH_BlindDetection3_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PDCCH_BlindDetection3_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PDCCH_BlindDetection3_r16(Encoder& enc, const SetupRelease_PDCCH_BlindDetection3_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PDCCH_BlindDetection3_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_PDCCH_BlindDetection3_r16_Tag_setup:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.setup), 1, 15);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PDCCH_BlindDetection3_r16(Decoder& dec, SetupRelease_PDCCH_BlindDetection3_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PDCCH_BlindDetection3_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PDCCH_BlindDetection3_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PDCCH_BlindDetection3_r16_Tag_setup: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 15, tmp_value)) { goto fail; }
        value.u.setup = (PDCCH_BlindDetection3_r16)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PDCCH_BlindDetection3_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PDCCH_BlindDetection3_r16(SetupRelease_PDCCH_BlindDetection3_r16& value)
{
    switch (value.tag) {
    case SetupRelease_PDCCH_BlindDetection3_r16_Tag_release:
        break;
    case SetupRelease_PDCCH_BlindDetection3_r16_Tag_setup:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PhysicalCellGroupConfig_ExtGroup4：ASN.1 PhysicalCellGroupConfig_ExtGroup4；源文件第 9694 行；扩展添加组 [[ ]]。
// Encode_PhysicalCellGroupConfig_ExtGroup4 只读不分配；Decode_PhysicalCellGroupConfig_ExtGroup4 可能 malloc（失败时内部已释放并清零）；Free_PhysicalCellGroupConfig_ExtGroup4 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PhysicalCellGroupConfig_ExtGroup4(Encoder& enc, const PhysicalCellGroupConfig_ExtGroup4& value)
{
    enc.WriteBit(value.has_dcp_Config_r16);
    enc.WriteBit(value.has_harq_ACK_SpatialBundlingPUCCH_secondaryPUCCHgroup_r16);
    enc.WriteBit(value.has_harq_ACK_SpatialBundlingPUSCH_secondaryPUCCHgroup_r16);
    enc.WriteBit(value.has_pdsch_HARQ_ACK_Codebook_secondaryPUCCHgroup_r16);
    enc.WriteBit(value.has_p_NR_FR2_r16);
    enc.WriteBit(value.has_p_UE_FR2_r16);
    enc.WriteBit(value.has_nrdc_PCmode_FR1_r16);
    enc.WriteBit(value.has_nrdc_PCmode_FR2_r16);
    enc.WriteBit(value.has_pdsch_HARQ_ACK_Codebook_r16);
    enc.WriteBit(value.has_nfi_TotalDAI_Included_r16);
    enc.WriteBit(value.has_ul_TotalDAI_Included_r16);
    enc.WriteBit(value.has_pdsch_HARQ_ACK_OneShotFeedback_r16);
    enc.WriteBit(value.has_pdsch_HARQ_ACK_OneShotFeedbackNDI_r16);
    enc.WriteBit(value.has_pdsch_HARQ_ACK_OneShotFeedbackCBG_r16);
    enc.WriteBit(value.has_downlinkAssignmentIndexDCI_0_2_r16);
    enc.WriteBit(value.has_downlinkAssignmentIndexDCI_1_2_r16);
    enc.WriteBit(value.has_pdsch_HARQ_ACK_CodebookList_r16);
    enc.WriteBit(value.has_ackNackFeedbackMode_r16);
    enc.WriteBit(value.has_pdcch_BlindDetectionCA_CombIndicator_r16);
    enc.WriteBit(value.has_pdcch_BlindDetection2_r16);
    enc.WriteBit(value.has_pdcch_BlindDetection3_r16);
    enc.WriteBit(value.has_bdFactorR_r16);
    if (value.has_dcp_Config_r16) {
        Encode_SetupRelease_DCP_Config_r16(enc, value.dcp_Config_r16);
    }
    if (value.has_harq_ACK_SpatialBundlingPUCCH_secondaryPUCCHgroup_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.harq_ACK_SpatialBundlingPUCCH_secondaryPUCCHgroup_r16), 0, 1);
    }
    if (value.has_harq_ACK_SpatialBundlingPUSCH_secondaryPUCCHgroup_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.harq_ACK_SpatialBundlingPUSCH_secondaryPUCCHgroup_r16), 0, 1);
    }
    if (value.has_pdsch_HARQ_ACK_Codebook_secondaryPUCCHgroup_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_HARQ_ACK_Codebook_secondaryPUCCHgroup_r16), 0, 1);
    }
    if (value.has_p_NR_FR2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.p_NR_FR2_r16), -30, 33);
    }
    if (value.has_p_UE_FR2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.p_UE_FR2_r16), -30, 33);
    }
    if (value.has_nrdc_PCmode_FR1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrdc_PCmode_FR1_r16), 0, 2);
    }
    if (value.has_nrdc_PCmode_FR2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrdc_PCmode_FR2_r16), 0, 2);
    }
    if (value.has_pdsch_HARQ_ACK_Codebook_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_HARQ_ACK_Codebook_r16), 0, 0);
    }
    if (value.has_nfi_TotalDAI_Included_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nfi_TotalDAI_Included_r16), 0, 0);
    }
    if (value.has_ul_TotalDAI_Included_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_TotalDAI_Included_r16), 0, 0);
    }
    if (value.has_pdsch_HARQ_ACK_OneShotFeedback_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_HARQ_ACK_OneShotFeedback_r16), 0, 0);
    }
    if (value.has_pdsch_HARQ_ACK_OneShotFeedbackNDI_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_HARQ_ACK_OneShotFeedbackNDI_r16), 0, 0);
    }
    if (value.has_pdsch_HARQ_ACK_OneShotFeedbackCBG_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_HARQ_ACK_OneShotFeedbackCBG_r16), 0, 0);
    }
    if (value.has_downlinkAssignmentIndexDCI_0_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.downlinkAssignmentIndexDCI_0_2_r16), 0, 0);
    }
    if (value.has_downlinkAssignmentIndexDCI_1_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.downlinkAssignmentIndexDCI_1_2_r16), 0, 2);
    }
    if (value.has_pdsch_HARQ_ACK_CodebookList_r16) {
        Encode_SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16(enc, value.pdsch_HARQ_ACK_CodebookList_r16);
    }
    if (value.has_ackNackFeedbackMode_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ackNackFeedbackMode_r16), 0, 1);
    }
    if (value.has_pdcch_BlindDetectionCA_CombIndicator_r16) {
        Encode_SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16(enc, value.pdcch_BlindDetectionCA_CombIndicator_r16);
    }
    if (value.has_pdcch_BlindDetection2_r16) {
        Encode_SetupRelease_PDCCH_BlindDetection2_r16(enc, value.pdcch_BlindDetection2_r16);
    }
    if (value.has_pdcch_BlindDetection3_r16) {
        Encode_SetupRelease_PDCCH_BlindDetection3_r16(enc, value.pdcch_BlindDetection3_r16);
    }
    if (value.has_bdFactorR_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.bdFactorR_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PhysicalCellGroupConfig_ExtGroup4(Decoder& dec, PhysicalCellGroupConfig_ExtGroup4& value)
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
    if (present_0) {
        if (Decode_SetupRelease_DCP_Config_r16(dec, value.dcp_Config_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.harq_ACK_SpatialBundlingPUCCH_secondaryPUCCHgroup_r16 = (PhysicalCellGroupConfig_ExtGroup4_Harq_ACK_SpatialBundlingPUCCH_secondaryPUCCHgroup_r16)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.harq_ACK_SpatialBundlingPUSCH_secondaryPUCCHgroup_r16 = (PhysicalCellGroupConfig_ExtGroup4_Harq_ACK_SpatialBundlingPUSCH_secondaryPUCCHgroup_r16)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.pdsch_HARQ_ACK_Codebook_secondaryPUCCHgroup_r16 = (PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_Codebook_secondaryPUCCHgroup_r16)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-30, 33, tmp_value)) { goto fail; }
        value.p_NR_FR2_r16 = (P_Max)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-30, 33, tmp_value)) { goto fail; }
        value.p_UE_FR2_r16 = (P_Max)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.nrdc_PCmode_FR1_r16 = (PhysicalCellGroupConfig_ExtGroup4_Nrdc_PCmode_FR1_r16)tmp_value;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.nrdc_PCmode_FR2_r16 = (PhysicalCellGroupConfig_ExtGroup4_Nrdc_PCmode_FR2_r16)tmp_value;
    }
    if (present_8) {
        value.pdsch_HARQ_ACK_Codebook_r16 = (PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_Codebook_r16)0;
    }
    if (present_9) {
        value.nfi_TotalDAI_Included_r16 = (PhysicalCellGroupConfig_ExtGroup4_Nfi_TotalDAI_Included_r16)0;
    }
    if (present_10) {
        value.ul_TotalDAI_Included_r16 = (PhysicalCellGroupConfig_ExtGroup4_Ul_TotalDAI_Included_r16)0;
    }
    if (present_11) {
        value.pdsch_HARQ_ACK_OneShotFeedback_r16 = (PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_OneShotFeedback_r16)0;
    }
    if (present_12) {
        value.pdsch_HARQ_ACK_OneShotFeedbackNDI_r16 = (PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_OneShotFeedbackNDI_r16)0;
    }
    if (present_13) {
        value.pdsch_HARQ_ACK_OneShotFeedbackCBG_r16 = (PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_OneShotFeedbackCBG_r16)0;
    }
    if (present_14) {
        value.downlinkAssignmentIndexDCI_0_2_r16 = (PhysicalCellGroupConfig_ExtGroup4_DownlinkAssignmentIndexDCI_0_2_r16)0;
    }
    if (present_15) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.downlinkAssignmentIndexDCI_1_2_r16 = (PhysicalCellGroupConfig_ExtGroup4_DownlinkAssignmentIndexDCI_1_2_r16)tmp_value;
    }
    if (present_16) {
        if (Decode_SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16(dec, value.pdsch_HARQ_ACK_CodebookList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_17) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.ackNackFeedbackMode_r16 = (PhysicalCellGroupConfig_ExtGroup4_AckNackFeedbackMode_r16)tmp_value;
    }
    if (present_18) {
        if (Decode_SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16(dec, value.pdcch_BlindDetectionCA_CombIndicator_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_19) {
        if (Decode_SetupRelease_PDCCH_BlindDetection2_r16(dec, value.pdcch_BlindDetection2_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_20) {
        if (Decode_SetupRelease_PDCCH_BlindDetection3_r16(dec, value.pdcch_BlindDetection3_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_21) {
        value.bdFactorR_r16 = (PhysicalCellGroupConfig_ExtGroup4_BdFactorR_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PhysicalCellGroupConfig_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PhysicalCellGroupConfig_ExtGroup4(PhysicalCellGroupConfig_ExtGroup4& value)
{
    if (value.has_dcp_Config_r16) {
        Free_SetupRelease_DCP_Config_r16(value.dcp_Config_r16);
    }
    if (value.has_harq_ACK_SpatialBundlingPUCCH_secondaryPUCCHgroup_r16) {
    }
    if (value.has_harq_ACK_SpatialBundlingPUSCH_secondaryPUCCHgroup_r16) {
    }
    if (value.has_pdsch_HARQ_ACK_Codebook_secondaryPUCCHgroup_r16) {
    }
    if (value.has_p_NR_FR2_r16) {
    }
    if (value.has_p_UE_FR2_r16) {
    }
    if (value.has_nrdc_PCmode_FR1_r16) {
    }
    if (value.has_nrdc_PCmode_FR2_r16) {
    }
    if (value.has_pdsch_HARQ_ACK_Codebook_r16) {
    }
    if (value.has_nfi_TotalDAI_Included_r16) {
    }
    if (value.has_ul_TotalDAI_Included_r16) {
    }
    if (value.has_pdsch_HARQ_ACK_OneShotFeedback_r16) {
    }
    if (value.has_pdsch_HARQ_ACK_OneShotFeedbackNDI_r16) {
    }
    if (value.has_pdsch_HARQ_ACK_OneShotFeedbackCBG_r16) {
    }
    if (value.has_downlinkAssignmentIndexDCI_0_2_r16) {
    }
    if (value.has_downlinkAssignmentIndexDCI_1_2_r16) {
    }
    if (value.has_pdsch_HARQ_ACK_CodebookList_r16) {
        Free_SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16(value.pdsch_HARQ_ACK_CodebookList_r16);
    }
    if (value.has_ackNackFeedbackMode_r16) {
    }
    if (value.has_pdcch_BlindDetectionCA_CombIndicator_r16) {
        Free_SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16(value.pdcch_BlindDetectionCA_CombIndicator_r16);
    }
    if (value.has_pdcch_BlindDetection2_r16) {
        Free_SetupRelease_PDCCH_BlindDetection2_r16(value.pdcch_BlindDetection2_r16);
    }
    if (value.has_pdcch_BlindDetection3_r16) {
        Free_SetupRelease_PDCCH_BlindDetection3_r16(value.pdcch_BlindDetection3_r16);
    }
    if (value.has_bdFactorR_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PhysicalCellGroupConfig_ExtGroup1：ASN.1 PhysicalCellGroupConfig_ExtGroup1；源文件第 9684 行；扩展添加组 [[ ]]。
// Encode_PhysicalCellGroupConfig_ExtGroup1 只读不分配；Decode_PhysicalCellGroupConfig_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_PhysicalCellGroupConfig_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PhysicalCellGroupConfig_ExtGroup1(Encoder& enc, const PhysicalCellGroupConfig_ExtGroup1& value)
{
    enc.WriteBit(value.has_mcs_C_RNTI);
    enc.WriteBit(value.has_p_UE_FR1);
    if (value.has_mcs_C_RNTI) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mcs_C_RNTI), 0, 65535);
    }
    if (value.has_p_UE_FR1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.p_UE_FR1), -30, 33);
    }
    return enc.Error();
}

ErrorCode Decode_PhysicalCellGroupConfig_ExtGroup1(Decoder& dec, PhysicalCellGroupConfig_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.mcs_C_RNTI = (RNTI_Value)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-30, 33, tmp_value)) { goto fail; }
        value.p_UE_FR1 = (P_Max)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PhysicalCellGroupConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PhysicalCellGroupConfig_ExtGroup1(PhysicalCellGroupConfig_ExtGroup1& value)
{
    if (value.has_mcs_C_RNTI) {
    }
    if (value.has_p_UE_FR1) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MulticastConfig_r17：ASN.1 MulticastConfig-r17；源文件第 9823 行；SEQUENCE。
// Encode_MulticastConfig_r17 只读不分配；Decode_MulticastConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_MulticastConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MulticastConfig_r17(Encoder& enc, const MulticastConfig_r17& value)
{
    enc.WriteBit(value.has_pdsch_HARQ_ACK_CodebookListMulticast_r17);
    enc.WriteBit(value.has_type1CodebookGenerationMode_r17);
    if (value.has_pdsch_HARQ_ACK_CodebookListMulticast_r17) {
        Encode_SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16(enc, value.pdsch_HARQ_ACK_CodebookListMulticast_r17);
    }
    if (value.has_type1CodebookGenerationMode_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.type1CodebookGenerationMode_r17), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_MulticastConfig_r17(Decoder& dec, MulticastConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16(dec, value.pdsch_HARQ_ACK_CodebookListMulticast_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.type1CodebookGenerationMode_r17 = (MulticastConfig_r17_Type1CodebookGenerationMode_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MulticastConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MulticastConfig_r17(MulticastConfig_r17& value)
{
    if (value.has_pdsch_HARQ_ACK_CodebookListMulticast_r17) {
        Free_SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16(value.pdsch_HARQ_ACK_CodebookListMulticast_r17);
    }
    if (value.has_type1CodebookGenerationMode_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_MulticastConfig_r17：ASN.1 SetupRelease<MulticastConfig-r17>；源文件第 9754 行；CHOICE。
// Encode_SetupRelease_MulticastConfig_r17 只读不分配；Decode_SetupRelease_MulticastConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_MulticastConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_MulticastConfig_r17(Encoder& enc, const SetupRelease_MulticastConfig_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_MulticastConfig_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_MulticastConfig_r17_Tag_setup:
        Encode_MulticastConfig_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_MulticastConfig_r17(Decoder& dec, SetupRelease_MulticastConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_MulticastConfig_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_MulticastConfig_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_MulticastConfig_r17_Tag_setup: {
        if (Decode_MulticastConfig_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_MulticastConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_MulticastConfig_r17(SetupRelease_MulticastConfig_r17& value)
{
    switch (value.tag) {
    case SetupRelease_MulticastConfig_r17_Tag_release:
        break;
    case SetupRelease_MulticastConfig_r17_Tag_setup:
        Free_MulticastConfig_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_BlindDetectionCA_CombIndicator_r17：ASN.1 PDCCH-BlindDetectionCA-CombIndicator-r17；源文件第 9828 行；SEQUENCE。
// Encode_PDCCH_BlindDetectionCA_CombIndicator_r17 只读不分配；Decode_PDCCH_BlindDetectionCA_CombIndicator_r17 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_BlindDetectionCA_CombIndicator_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_BlindDetectionCA_CombIndicator_r17(Encoder& enc, const PDCCH_BlindDetectionCA_CombIndicator_r17& value)
{
    enc.WriteBit(value.has_pdcch_BlindDetectionCA1_r17);
    enc.WriteBit(value.has_pdcch_BlindDetectionCA2_r17);
    if (value.has_pdcch_BlindDetectionCA1_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCA1_r17), 1, 15);
    }
    if (value.has_pdcch_BlindDetectionCA2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCA2_r17), 1, 15);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCA3_r17), 1, 15);
    return enc.Error();
}

ErrorCode Decode_PDCCH_BlindDetectionCA_CombIndicator_r17(Decoder& dec, PDCCH_BlindDetectionCA_CombIndicator_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionCA1_r17 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionCA2_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionCA3_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_BlindDetectionCA_CombIndicator_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_BlindDetectionCA_CombIndicator_r17(PDCCH_BlindDetectionCA_CombIndicator_r17& value)
{
    if (value.has_pdcch_BlindDetectionCA1_r17) {
    }
    if (value.has_pdcch_BlindDetectionCA2_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17：ASN.1 SetupRelease<PDCCH-BlindDetectionCA-CombIndicator-r17>；源文件第 9755 行；CHOICE。
// Encode_SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17 只读不分配；Decode_SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17(Encoder& enc, const SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17_Tag_setup:
        Encode_PDCCH_BlindDetectionCA_CombIndicator_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17(Decoder& dec, SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17_Tag_setup: {
        if (Decode_PDCCH_BlindDetectionCA_CombIndicator_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17(SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17& value)
{
    switch (value.tag) {
    case SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17_Tag_release:
        break;
    case SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17_Tag_setup:
        Free_PDCCH_BlindDetectionCA_CombIndicator_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PhysicalCellGroupConfig_ExtGroup5：ASN.1 PhysicalCellGroupConfig_ExtGroup5；源文件第 9718 行；扩展添加组 [[ ]]。
// Encode_PhysicalCellGroupConfig_ExtGroup5 只读不分配；Decode_PhysicalCellGroupConfig_ExtGroup5 可能 malloc（失败时内部已释放并清零）；Free_PhysicalCellGroupConfig_ExtGroup5 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PhysicalCellGroupConfig_ExtGroup5(Encoder& enc, const PhysicalCellGroupConfig_ExtGroup5& value)
{
    enc.WriteBit(value.has_pdsch_HARQ_ACK_EnhType3ToAddModList_r17);
    enc.WriteBit(value.has_pdsch_HARQ_ACK_EnhType3ToReleaseList_r17);
    enc.WriteBit(value.has_pdsch_HARQ_ACK_EnhType3SecondaryToAddModList_r17);
    enc.WriteBit(value.has_pdsch_HARQ_ACK_EnhType3SecondaryToReleaseList_r17);
    enc.WriteBit(value.has_pdsch_HARQ_ACK_EnhType3DCI_FieldSecondaryPUCCHgroup_r17);
    enc.WriteBit(value.has_pdsch_HARQ_ACK_EnhType3DCI_Field_r17);
    enc.WriteBit(value.has_pdsch_HARQ_ACK_Retx_r17);
    enc.WriteBit(value.has_pdsch_HARQ_ACK_RetxSecondaryPUCCHgroup_r17);
    enc.WriteBit(value.has_pucch_sSCell_r17);
    enc.WriteBit(value.has_pucch_sSCellSecondaryPUCCHgroup_r17);
    enc.WriteBit(value.has_pucch_sSCellDyn_r17);
    enc.WriteBit(value.has_pucch_sSCellDynSecondaryPUCCHgroup_r17);
    enc.WriteBit(value.has_pucch_sSCellPattern_r17);
    enc.WriteBit(value.has_pucch_sSCellPatternSecondaryPUCCHgroup_r17);
    enc.WriteBit(value.has_uci_MuxWithDiffPrio_r17);
    enc.WriteBit(value.has_uci_MuxWithDiffPrioSecondaryPUCCHgroup_r17);
    enc.WriteBit(value.has_simultaneousPUCCH_PUSCH_r17);
    enc.WriteBit(value.has_simultaneousPUCCH_PUSCH_SecondaryPUCCHgroup_r17);
    enc.WriteBit(value.has_prioLowDG_HighCG_r17);
    enc.WriteBit(value.has_prioHighDG_LowCG_r17);
    enc.WriteBit(value.has_twoQCLTypeDforPDCCHRepetition_r17);
    enc.WriteBit(value.has_multicastConfig_r17);
    enc.WriteBit(value.has_pdcch_BlindDetectionCA_CombIndicator_r17);
    if (value.has_pdsch_HARQ_ACK_EnhType3ToAddModList_r17) {
enc.WriteConstrainedLength(value.pdsch_HARQ_ACK_EnhType3ToAddModList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pdsch_HARQ_ACK_EnhType3ToAddModList_r17_count; ++i) {
    Encode_PDSCH_HARQ_ACK_EnhType3_r17(enc, value.pdsch_HARQ_ACK_EnhType3ToAddModList_r17_items[i]);
}
    }
    if (value.has_pdsch_HARQ_ACK_EnhType3ToReleaseList_r17) {
enc.WriteConstrainedLength(value.pdsch_HARQ_ACK_EnhType3ToReleaseList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pdsch_HARQ_ACK_EnhType3ToReleaseList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_HARQ_ACK_EnhType3ToReleaseList_r17_items[i]), 0, 7);
}
    }
    if (value.has_pdsch_HARQ_ACK_EnhType3SecondaryToAddModList_r17) {
enc.WriteConstrainedLength(value.pdsch_HARQ_ACK_EnhType3SecondaryToAddModList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pdsch_HARQ_ACK_EnhType3SecondaryToAddModList_r17_count; ++i) {
    Encode_PDSCH_HARQ_ACK_EnhType3_r17(enc, value.pdsch_HARQ_ACK_EnhType3SecondaryToAddModList_r17_items[i]);
}
    }
    if (value.has_pdsch_HARQ_ACK_EnhType3SecondaryToReleaseList_r17) {
enc.WriteConstrainedLength(value.pdsch_HARQ_ACK_EnhType3SecondaryToReleaseList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pdsch_HARQ_ACK_EnhType3SecondaryToReleaseList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_HARQ_ACK_EnhType3SecondaryToReleaseList_r17_items[i]), 0, 7);
}
    }
    if (value.has_pdsch_HARQ_ACK_EnhType3DCI_FieldSecondaryPUCCHgroup_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_HARQ_ACK_EnhType3DCI_FieldSecondaryPUCCHgroup_r17), 0, 0);
    }
    if (value.has_pdsch_HARQ_ACK_EnhType3DCI_Field_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_HARQ_ACK_EnhType3DCI_Field_r17), 0, 0);
    }
    if (value.has_pdsch_HARQ_ACK_Retx_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_HARQ_ACK_Retx_r17), 0, 0);
    }
    if (value.has_pdsch_HARQ_ACK_RetxSecondaryPUCCHgroup_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_HARQ_ACK_RetxSecondaryPUCCHgroup_r17), 0, 0);
    }
    if (value.has_pucch_sSCell_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_sSCell_r17), 1, 31);
    }
    if (value.has_pucch_sSCellSecondaryPUCCHgroup_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_sSCellSecondaryPUCCHgroup_r17), 1, 31);
    }
    if (value.has_pucch_sSCellDyn_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_sSCellDyn_r17), 0, 0);
    }
    if (value.has_pucch_sSCellDynSecondaryPUCCHgroup_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_sSCellDynSecondaryPUCCHgroup_r17), 0, 0);
    }
    if (value.has_pucch_sSCellPattern_r17) {
enc.WriteConstrainedLength(value.pucch_sSCellPattern_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pucch_sSCellPattern_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.pucch_sSCellPattern_r17_items[i]), 0, 1);
}
    }
    if (value.has_pucch_sSCellPatternSecondaryPUCCHgroup_r17) {
enc.WriteConstrainedLength(value.pucch_sSCellPatternSecondaryPUCCHgroup_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pucch_sSCellPatternSecondaryPUCCHgroup_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.pucch_sSCellPatternSecondaryPUCCHgroup_r17_items[i]), 0, 1);
}
    }
    if (value.has_uci_MuxWithDiffPrio_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uci_MuxWithDiffPrio_r17), 0, 0);
    }
    if (value.has_uci_MuxWithDiffPrioSecondaryPUCCHgroup_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uci_MuxWithDiffPrioSecondaryPUCCHgroup_r17), 0, 0);
    }
    if (value.has_simultaneousPUCCH_PUSCH_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousPUCCH_PUSCH_r17), 0, 0);
    }
    if (value.has_simultaneousPUCCH_PUSCH_SecondaryPUCCHgroup_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousPUCCH_PUSCH_SecondaryPUCCHgroup_r17), 0, 0);
    }
    if (value.has_prioLowDG_HighCG_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.prioLowDG_HighCG_r17), 0, 0);
    }
    if (value.has_prioHighDG_LowCG_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.prioHighDG_LowCG_r17), 0, 0);
    }
    if (value.has_twoQCLTypeDforPDCCHRepetition_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoQCLTypeDforPDCCHRepetition_r17), 0, 0);
    }
    if (value.has_multicastConfig_r17) {
        Encode_SetupRelease_MulticastConfig_r17(enc, value.multicastConfig_r17);
    }
    if (value.has_pdcch_BlindDetectionCA_CombIndicator_r17) {
        Encode_SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17(enc, value.pdcch_BlindDetectionCA_CombIndicator_r17);
    }
    return enc.Error();
}

ErrorCode Decode_PhysicalCellGroupConfig_ExtGroup5(Decoder& dec, PhysicalCellGroupConfig_ExtGroup5& value)
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
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.pdsch_HARQ_ACK_EnhType3ToAddModList_r17_count)) { goto fail; }
if (value.pdsch_HARQ_ACK_EnhType3ToAddModList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pdsch_HARQ_ACK_EnhType3ToAddModList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pdsch_HARQ_ACK_EnhType3ToAddModList_r17_count > 0u) {
    value.pdsch_HARQ_ACK_EnhType3ToAddModList_r17_items = (PDSCH_HARQ_ACK_EnhType3_r17*)std::malloc((std::size_t)value.pdsch_HARQ_ACK_EnhType3ToAddModList_r17_count * sizeof(PDSCH_HARQ_ACK_EnhType3_r17));
    if (value.pdsch_HARQ_ACK_EnhType3ToAddModList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pdsch_HARQ_ACK_EnhType3ToAddModList_r17_items, 0, (std::size_t)value.pdsch_HARQ_ACK_EnhType3ToAddModList_r17_count * sizeof(PDSCH_HARQ_ACK_EnhType3_r17));
}
for (std::uint32_t i = 0; i < value.pdsch_HARQ_ACK_EnhType3ToAddModList_r17_count; ++i) {
    if (Decode_PDSCH_HARQ_ACK_EnhType3_r17(dec, value.pdsch_HARQ_ACK_EnhType3ToAddModList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.pdsch_HARQ_ACK_EnhType3ToReleaseList_r17_count)) { goto fail; }
if (value.pdsch_HARQ_ACK_EnhType3ToReleaseList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pdsch_HARQ_ACK_EnhType3ToReleaseList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pdsch_HARQ_ACK_EnhType3ToReleaseList_r17_count > 0u) {
    value.pdsch_HARQ_ACK_EnhType3ToReleaseList_r17_items = (PDSCH_HARQ_ACK_EnhType3Index_r17*)std::malloc((std::size_t)value.pdsch_HARQ_ACK_EnhType3ToReleaseList_r17_count * sizeof(PDSCH_HARQ_ACK_EnhType3Index_r17));
    if (value.pdsch_HARQ_ACK_EnhType3ToReleaseList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pdsch_HARQ_ACK_EnhType3ToReleaseList_r17_items, 0, (std::size_t)value.pdsch_HARQ_ACK_EnhType3ToReleaseList_r17_count * sizeof(PDSCH_HARQ_ACK_EnhType3Index_r17));
}
for (std::uint32_t i = 0; i < value.pdsch_HARQ_ACK_EnhType3ToReleaseList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.pdsch_HARQ_ACK_EnhType3ToReleaseList_r17_items[i] = (PDSCH_HARQ_ACK_EnhType3Index_r17)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.pdsch_HARQ_ACK_EnhType3SecondaryToAddModList_r17_count)) { goto fail; }
if (value.pdsch_HARQ_ACK_EnhType3SecondaryToAddModList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pdsch_HARQ_ACK_EnhType3SecondaryToAddModList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pdsch_HARQ_ACK_EnhType3SecondaryToAddModList_r17_count > 0u) {
    value.pdsch_HARQ_ACK_EnhType3SecondaryToAddModList_r17_items = (PDSCH_HARQ_ACK_EnhType3_r17*)std::malloc((std::size_t)value.pdsch_HARQ_ACK_EnhType3SecondaryToAddModList_r17_count * sizeof(PDSCH_HARQ_ACK_EnhType3_r17));
    if (value.pdsch_HARQ_ACK_EnhType3SecondaryToAddModList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pdsch_HARQ_ACK_EnhType3SecondaryToAddModList_r17_items, 0, (std::size_t)value.pdsch_HARQ_ACK_EnhType3SecondaryToAddModList_r17_count * sizeof(PDSCH_HARQ_ACK_EnhType3_r17));
}
for (std::uint32_t i = 0; i < value.pdsch_HARQ_ACK_EnhType3SecondaryToAddModList_r17_count; ++i) {
    if (Decode_PDSCH_HARQ_ACK_EnhType3_r17(dec, value.pdsch_HARQ_ACK_EnhType3SecondaryToAddModList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.pdsch_HARQ_ACK_EnhType3SecondaryToReleaseList_r17_count)) { goto fail; }
if (value.pdsch_HARQ_ACK_EnhType3SecondaryToReleaseList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pdsch_HARQ_ACK_EnhType3SecondaryToReleaseList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pdsch_HARQ_ACK_EnhType3SecondaryToReleaseList_r17_count > 0u) {
    value.pdsch_HARQ_ACK_EnhType3SecondaryToReleaseList_r17_items = (PDSCH_HARQ_ACK_EnhType3Index_r17*)std::malloc((std::size_t)value.pdsch_HARQ_ACK_EnhType3SecondaryToReleaseList_r17_count * sizeof(PDSCH_HARQ_ACK_EnhType3Index_r17));
    if (value.pdsch_HARQ_ACK_EnhType3SecondaryToReleaseList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pdsch_HARQ_ACK_EnhType3SecondaryToReleaseList_r17_items, 0, (std::size_t)value.pdsch_HARQ_ACK_EnhType3SecondaryToReleaseList_r17_count * sizeof(PDSCH_HARQ_ACK_EnhType3Index_r17));
}
for (std::uint32_t i = 0; i < value.pdsch_HARQ_ACK_EnhType3SecondaryToReleaseList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.pdsch_HARQ_ACK_EnhType3SecondaryToReleaseList_r17_items[i] = (PDSCH_HARQ_ACK_EnhType3Index_r17)tmp_value;
}
    }
    if (present_4) {
        value.pdsch_HARQ_ACK_EnhType3DCI_FieldSecondaryPUCCHgroup_r17 = (PhysicalCellGroupConfig_ExtGroup5_Pdsch_HARQ_ACK_EnhType3DCI_FieldSecondaryPUCCHgroup_r17)0;
    }
    if (present_5) {
        value.pdsch_HARQ_ACK_EnhType3DCI_Field_r17 = (PhysicalCellGroupConfig_ExtGroup5_Pdsch_HARQ_ACK_EnhType3DCI_Field_r17)0;
    }
    if (present_6) {
        value.pdsch_HARQ_ACK_Retx_r17 = (PhysicalCellGroupConfig_ExtGroup5_Pdsch_HARQ_ACK_Retx_r17)0;
    }
    if (present_7) {
        value.pdsch_HARQ_ACK_RetxSecondaryPUCCHgroup_r17 = (PhysicalCellGroupConfig_ExtGroup5_Pdsch_HARQ_ACK_RetxSecondaryPUCCHgroup_r17)0;
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 31, tmp_value)) { goto fail; }
        value.pucch_sSCell_r17 = (SCellIndex)tmp_value;
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 31, tmp_value)) { goto fail; }
        value.pucch_sSCellSecondaryPUCCHgroup_r17 = (SCellIndex)tmp_value;
    }
    if (present_10) {
        value.pucch_sSCellDyn_r17 = (PhysicalCellGroupConfig_ExtGroup5_Pucch_sSCellDyn_r17)0;
    }
    if (present_11) {
        value.pucch_sSCellDynSecondaryPUCCHgroup_r17 = (PhysicalCellGroupConfig_ExtGroup5_Pucch_sSCellDynSecondaryPUCCHgroup_r17)0;
    }
    if (present_12) {
if (!dec.ReadConstrainedLength(0u, 0u, value.pucch_sSCellPattern_r17_count)) { goto fail; }
if (value.pucch_sSCellPattern_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pucch_sSCellPattern_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pucch_sSCellPattern_r17_count > 0u) {
    value.pucch_sSCellPattern_r17_items = (int64_t*)std::malloc((std::size_t)value.pucch_sSCellPattern_r17_count * sizeof(int64_t));
    if (value.pucch_sSCellPattern_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pucch_sSCellPattern_r17_items, 0, (std::size_t)value.pucch_sSCellPattern_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.pucch_sSCellPattern_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
    value.pucch_sSCellPattern_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_13) {
if (!dec.ReadConstrainedLength(0u, 0u, value.pucch_sSCellPatternSecondaryPUCCHgroup_r17_count)) { goto fail; }
if (value.pucch_sSCellPatternSecondaryPUCCHgroup_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pucch_sSCellPatternSecondaryPUCCHgroup_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pucch_sSCellPatternSecondaryPUCCHgroup_r17_count > 0u) {
    value.pucch_sSCellPatternSecondaryPUCCHgroup_r17_items = (int64_t*)std::malloc((std::size_t)value.pucch_sSCellPatternSecondaryPUCCHgroup_r17_count * sizeof(int64_t));
    if (value.pucch_sSCellPatternSecondaryPUCCHgroup_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pucch_sSCellPatternSecondaryPUCCHgroup_r17_items, 0, (std::size_t)value.pucch_sSCellPatternSecondaryPUCCHgroup_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.pucch_sSCellPatternSecondaryPUCCHgroup_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
    value.pucch_sSCellPatternSecondaryPUCCHgroup_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_14) {
        value.uci_MuxWithDiffPrio_r17 = (PhysicalCellGroupConfig_ExtGroup5_Uci_MuxWithDiffPrio_r17)0;
    }
    if (present_15) {
        value.uci_MuxWithDiffPrioSecondaryPUCCHgroup_r17 = (PhysicalCellGroupConfig_ExtGroup5_Uci_MuxWithDiffPrioSecondaryPUCCHgroup_r17)0;
    }
    if (present_16) {
        value.simultaneousPUCCH_PUSCH_r17 = (PhysicalCellGroupConfig_ExtGroup5_SimultaneousPUCCH_PUSCH_r17)0;
    }
    if (present_17) {
        value.simultaneousPUCCH_PUSCH_SecondaryPUCCHgroup_r17 = (PhysicalCellGroupConfig_ExtGroup5_SimultaneousPUCCH_PUSCH_SecondaryPUCCHgroup_r17)0;
    }
    if (present_18) {
        value.prioLowDG_HighCG_r17 = (PhysicalCellGroupConfig_ExtGroup5_PrioLowDG_HighCG_r17)0;
    }
    if (present_19) {
        value.prioHighDG_LowCG_r17 = (PhysicalCellGroupConfig_ExtGroup5_PrioHighDG_LowCG_r17)0;
    }
    if (present_20) {
        value.twoQCLTypeDforPDCCHRepetition_r17 = (PhysicalCellGroupConfig_ExtGroup5_TwoQCLTypeDforPDCCHRepetition_r17)0;
    }
    if (present_21) {
        if (Decode_SetupRelease_MulticastConfig_r17(dec, value.multicastConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_22) {
        if (Decode_SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17(dec, value.pdcch_BlindDetectionCA_CombIndicator_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PhysicalCellGroupConfig_ExtGroup5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PhysicalCellGroupConfig_ExtGroup5(PhysicalCellGroupConfig_ExtGroup5& value)
{
    if (value.has_pdsch_HARQ_ACK_EnhType3ToAddModList_r17) {
        if (value.pdsch_HARQ_ACK_EnhType3ToAddModList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pdsch_HARQ_ACK_EnhType3ToAddModList_r17_count; ++i) {
                Free_PDSCH_HARQ_ACK_EnhType3_r17(value.pdsch_HARQ_ACK_EnhType3ToAddModList_r17_items[i]);
            }
            std::free(value.pdsch_HARQ_ACK_EnhType3ToAddModList_r17_items);
            value.pdsch_HARQ_ACK_EnhType3ToAddModList_r17_items = nullptr;
        }
        value.pdsch_HARQ_ACK_EnhType3ToAddModList_r17_count = 0;
    }
    if (value.has_pdsch_HARQ_ACK_EnhType3ToReleaseList_r17) {
        if (value.pdsch_HARQ_ACK_EnhType3ToReleaseList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pdsch_HARQ_ACK_EnhType3ToReleaseList_r17_count; ++i) {
            }
            std::free(value.pdsch_HARQ_ACK_EnhType3ToReleaseList_r17_items);
            value.pdsch_HARQ_ACK_EnhType3ToReleaseList_r17_items = nullptr;
        }
        value.pdsch_HARQ_ACK_EnhType3ToReleaseList_r17_count = 0;
    }
    if (value.has_pdsch_HARQ_ACK_EnhType3SecondaryToAddModList_r17) {
        if (value.pdsch_HARQ_ACK_EnhType3SecondaryToAddModList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pdsch_HARQ_ACK_EnhType3SecondaryToAddModList_r17_count; ++i) {
                Free_PDSCH_HARQ_ACK_EnhType3_r17(value.pdsch_HARQ_ACK_EnhType3SecondaryToAddModList_r17_items[i]);
            }
            std::free(value.pdsch_HARQ_ACK_EnhType3SecondaryToAddModList_r17_items);
            value.pdsch_HARQ_ACK_EnhType3SecondaryToAddModList_r17_items = nullptr;
        }
        value.pdsch_HARQ_ACK_EnhType3SecondaryToAddModList_r17_count = 0;
    }
    if (value.has_pdsch_HARQ_ACK_EnhType3SecondaryToReleaseList_r17) {
        if (value.pdsch_HARQ_ACK_EnhType3SecondaryToReleaseList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pdsch_HARQ_ACK_EnhType3SecondaryToReleaseList_r17_count; ++i) {
            }
            std::free(value.pdsch_HARQ_ACK_EnhType3SecondaryToReleaseList_r17_items);
            value.pdsch_HARQ_ACK_EnhType3SecondaryToReleaseList_r17_items = nullptr;
        }
        value.pdsch_HARQ_ACK_EnhType3SecondaryToReleaseList_r17_count = 0;
    }
    if (value.has_pdsch_HARQ_ACK_EnhType3DCI_FieldSecondaryPUCCHgroup_r17) {
    }
    if (value.has_pdsch_HARQ_ACK_EnhType3DCI_Field_r17) {
    }
    if (value.has_pdsch_HARQ_ACK_Retx_r17) {
    }
    if (value.has_pdsch_HARQ_ACK_RetxSecondaryPUCCHgroup_r17) {
    }
    if (value.has_pucch_sSCell_r17) {
    }
    if (value.has_pucch_sSCellSecondaryPUCCHgroup_r17) {
    }
    if (value.has_pucch_sSCellDyn_r17) {
    }
    if (value.has_pucch_sSCellDynSecondaryPUCCHgroup_r17) {
    }
    if (value.has_pucch_sSCellPattern_r17) {
        if (value.pucch_sSCellPattern_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pucch_sSCellPattern_r17_count; ++i) {
            }
            std::free(value.pucch_sSCellPattern_r17_items);
            value.pucch_sSCellPattern_r17_items = nullptr;
        }
        value.pucch_sSCellPattern_r17_count = 0;
    }
    if (value.has_pucch_sSCellPatternSecondaryPUCCHgroup_r17) {
        if (value.pucch_sSCellPatternSecondaryPUCCHgroup_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pucch_sSCellPatternSecondaryPUCCHgroup_r17_count; ++i) {
            }
            std::free(value.pucch_sSCellPatternSecondaryPUCCHgroup_r17_items);
            value.pucch_sSCellPatternSecondaryPUCCHgroup_r17_items = nullptr;
        }
        value.pucch_sSCellPatternSecondaryPUCCHgroup_r17_count = 0;
    }
    if (value.has_uci_MuxWithDiffPrio_r17) {
    }
    if (value.has_uci_MuxWithDiffPrioSecondaryPUCCHgroup_r17) {
    }
    if (value.has_simultaneousPUCCH_PUSCH_r17) {
    }
    if (value.has_simultaneousPUCCH_PUSCH_SecondaryPUCCHgroup_r17) {
    }
    if (value.has_prioLowDG_HighCG_r17) {
    }
    if (value.has_prioHighDG_LowCG_r17) {
    }
    if (value.has_twoQCLTypeDforPDCCHRepetition_r17) {
    }
    if (value.has_multicastConfig_r17) {
        Free_SetupRelease_MulticastConfig_r17(value.multicastConfig_r17);
    }
    if (value.has_pdcch_BlindDetectionCA_CombIndicator_r17) {
        Free_SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17(value.pdcch_BlindDetectionCA_CombIndicator_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PhysicalCellGroupConfig_ExtGroup6：ASN.1 PhysicalCellGroupConfig_ExtGroup6；源文件第 9757 行；扩展添加组 [[ ]]。
// Encode_PhysicalCellGroupConfig_ExtGroup6 只读不分配；Decode_PhysicalCellGroupConfig_ExtGroup6 可能 malloc（失败时内部已释放并清零）；Free_PhysicalCellGroupConfig_ExtGroup6 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PhysicalCellGroupConfig_ExtGroup6(Encoder& enc, const PhysicalCellGroupConfig_ExtGroup6& value)
{
    enc.WriteBit(value.has_simultaneousSR_PUSCH_diffPUCCH_Groups_r17);
    if (value.has_simultaneousSR_PUSCH_diffPUCCH_Groups_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousSR_PUSCH_diffPUCCH_Groups_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PhysicalCellGroupConfig_ExtGroup6(Decoder& dec, PhysicalCellGroupConfig_ExtGroup6& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.simultaneousSR_PUSCH_diffPUCCH_Groups_r17 = (PhysicalCellGroupConfig_ExtGroup6_SimultaneousSR_PUSCH_diffPUCCH_Groups_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PhysicalCellGroupConfig_ExtGroup6(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PhysicalCellGroupConfig_ExtGroup6(PhysicalCellGroupConfig_ExtGroup6& value)
{
    if (value.has_simultaneousSR_PUSCH_diffPUCCH_Groups_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PDCCH_BlindDetection4_r17：ASN.1 SetupRelease<PDCCH-BlindDetection4-r17>；源文件第 9764 行；CHOICE。
// Encode_SetupRelease_PDCCH_BlindDetection4_r17 只读不分配；Decode_SetupRelease_PDCCH_BlindDetection4_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PDCCH_BlindDetection4_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PDCCH_BlindDetection4_r17(Encoder& enc, const SetupRelease_PDCCH_BlindDetection4_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PDCCH_BlindDetection4_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_PDCCH_BlindDetection4_r17_Tag_setup:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.setup), 1, 15);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PDCCH_BlindDetection4_r17(Decoder& dec, SetupRelease_PDCCH_BlindDetection4_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PDCCH_BlindDetection4_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PDCCH_BlindDetection4_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PDCCH_BlindDetection4_r17_Tag_setup: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 15, tmp_value)) { goto fail; }
        value.u.setup = (PDCCH_BlindDetection4_r17)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PDCCH_BlindDetection4_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PDCCH_BlindDetection4_r17(SetupRelease_PDCCH_BlindDetection4_r17& value)
{
    switch (value.tag) {
    case SetupRelease_PDCCH_BlindDetection4_r17_Tag_release:
        break;
    case SetupRelease_PDCCH_BlindDetection4_r17_Tag_setup:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PhysicalCellGroupConfig_ExtGroup8：ASN.1 PhysicalCellGroupConfig_ExtGroup8；源文件第 9763 行；扩展添加组 [[ ]]。
// Encode_PhysicalCellGroupConfig_ExtGroup8 只读不分配；Decode_PhysicalCellGroupConfig_ExtGroup8 可能 malloc（失败时内部已释放并清零）；Free_PhysicalCellGroupConfig_ExtGroup8 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PhysicalCellGroupConfig_ExtGroup8(Encoder& enc, const PhysicalCellGroupConfig_ExtGroup8& value)
{
    enc.WriteBit(value.has_pdcch_BlindDetection4_r17);
    if (value.has_pdcch_BlindDetection4_r17) {
        Encode_SetupRelease_PDCCH_BlindDetection4_r17(enc, value.pdcch_BlindDetection4_r17);
    }
    return enc.Error();
}

ErrorCode Decode_PhysicalCellGroupConfig_ExtGroup8(Decoder& dec, PhysicalCellGroupConfig_ExtGroup8& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_PDCCH_BlindDetection4_r17(dec, value.pdcch_BlindDetection4_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PhysicalCellGroupConfig_ExtGroup8(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PhysicalCellGroupConfig_ExtGroup8(PhysicalCellGroupConfig_ExtGroup8& value)
{
    if (value.has_pdcch_BlindDetection4_r17) {
        Free_SetupRelease_PDCCH_BlindDetection4_r17(value.pdcch_BlindDetection4_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PhysicalCellGroupConfig_ExtGroup9：ASN.1 PhysicalCellGroupConfig_ExtGroup9；源文件第 9766 行；扩展添加组 [[ ]]。
// Encode_PhysicalCellGroupConfig_ExtGroup9 只读不分配；Decode_PhysicalCellGroupConfig_ExtGroup9 可能 malloc（失败时内部已释放并清零）；Free_PhysicalCellGroupConfig_ExtGroup9 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PhysicalCellGroupConfig_ExtGroup9(Encoder& enc, const PhysicalCellGroupConfig_ExtGroup9& value)
{
    enc.WriteBit(value.has_simultaneousPUCCH_PUSCH_SamePriority_r17);
    enc.WriteBit(value.has_simultaneousPUCCH_PUSCH_SamePriority_SecondaryPUCCHgroup_r17);
    if (value.has_simultaneousPUCCH_PUSCH_SamePriority_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousPUCCH_PUSCH_SamePriority_r17), 0, 0);
    }
    if (value.has_simultaneousPUCCH_PUSCH_SamePriority_SecondaryPUCCHgroup_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousPUCCH_PUSCH_SamePriority_SecondaryPUCCHgroup_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PhysicalCellGroupConfig_ExtGroup9(Decoder& dec, PhysicalCellGroupConfig_ExtGroup9& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.simultaneousPUCCH_PUSCH_SamePriority_r17 = (PhysicalCellGroupConfig_ExtGroup9_SimultaneousPUCCH_PUSCH_SamePriority_r17)0;
    }
    if (present_1) {
        value.simultaneousPUCCH_PUSCH_SamePriority_SecondaryPUCCHgroup_r17 = (PhysicalCellGroupConfig_ExtGroup9_SimultaneousPUCCH_PUSCH_SamePriority_SecondaryPUCCHgroup_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PhysicalCellGroupConfig_ExtGroup9(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PhysicalCellGroupConfig_ExtGroup9(PhysicalCellGroupConfig_ExtGroup9& value)
{
    if (value.has_simultaneousPUCCH_PUSCH_SamePriority_r17) {
    }
    if (value.has_simultaneousPUCCH_PUSCH_SamePriority_SecondaryPUCCHgroup_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellDTRX_DCI_config_r18：ASN.1 CellDTRX-DCI-config-r18；源文件第 9834 行；SEQUENCE。
// Encode_CellDTRX_DCI_config_r18 只读不分配；Decode_CellDTRX_DCI_config_r18 可能 malloc（失败时内部已释放并清零）；Free_CellDTRX_DCI_config_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellDTRX_DCI_config_r18(Encoder& enc, const CellDTRX_DCI_config_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.cellDTRX_RNTI_r18), 0, 65535);
    enc.WriteConstrainedInteger((std::int64_t)(value.sizeDCI_2_9_r18), 1, 140);
    return enc.Error();
}

ErrorCode Decode_CellDTRX_DCI_config_r18(Decoder& dec, CellDTRX_DCI_config_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.cellDTRX_RNTI_r18 = (RNTI_Value)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 140, tmp_value)) { goto fail; }
        value.sizeDCI_2_9_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CellDTRX_DCI_config_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellDTRX_DCI_config_r18(CellDTRX_DCI_config_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_CellDTRX_DCI_config_r18：ASN.1 SetupRelease<CellDTRX-DCI-config-r18>；源文件第 9772 行；CHOICE。
// Encode_SetupRelease_CellDTRX_DCI_config_r18 只读不分配；Decode_SetupRelease_CellDTRX_DCI_config_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_CellDTRX_DCI_config_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_CellDTRX_DCI_config_r18(Encoder& enc, const SetupRelease_CellDTRX_DCI_config_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_CellDTRX_DCI_config_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_CellDTRX_DCI_config_r18_Tag_setup:
        Encode_CellDTRX_DCI_config_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_CellDTRX_DCI_config_r18(Decoder& dec, SetupRelease_CellDTRX_DCI_config_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_CellDTRX_DCI_config_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_CellDTRX_DCI_config_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_CellDTRX_DCI_config_r18_Tag_setup: {
        if (Decode_CellDTRX_DCI_config_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_CellDTRX_DCI_config_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_CellDTRX_DCI_config_r18(SetupRelease_CellDTRX_DCI_config_r18& value)
{
    switch (value.tag) {
    case SetupRelease_CellDTRX_DCI_config_r18_Tag_release:
        break;
    case SetupRelease_CellDTRX_DCI_config_r18_Tag_setup:
        Free_CellDTRX_DCI_config_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PhysicalCellGroupConfig_ExtGroup10：ASN.1 PhysicalCellGroupConfig_ExtGroup10；源文件第 9770 行；扩展添加组 [[ ]]。
// Encode_PhysicalCellGroupConfig_ExtGroup10 只读不分配；Decode_PhysicalCellGroupConfig_ExtGroup10 可能 malloc（失败时内部已释放并清零）；Free_PhysicalCellGroupConfig_ExtGroup10 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PhysicalCellGroupConfig_ExtGroup10(Encoder& enc, const PhysicalCellGroupConfig_ExtGroup10& value)
{
    enc.WriteBit(value.has_ncr_RNTI_r18);
    enc.WriteBit(value.has_cellDTRX_DCI_config_r18);
    enc.WriteBit(value.has_twoQCL_TypeD_ForMultiDCI_r18);
    enc.WriteBit(value.has_enableType1HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18);
    enc.WriteBit(value.has_enableType2HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18);
    enc.WriteBit(value.has_enableType3HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18);
    enc.WriteBit(value.has_enableDiffPUCCH_Resource_r18);
    enc.WriteBit(value.has_enableDiffCB_Size_r18);
    if (value.has_ncr_RNTI_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ncr_RNTI_r18), 0, 65535);
    }
    if (value.has_cellDTRX_DCI_config_r18) {
        Encode_SetupRelease_CellDTRX_DCI_config_r18(enc, value.cellDTRX_DCI_config_r18);
    }
    if (value.has_twoQCL_TypeD_ForMultiDCI_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoQCL_TypeD_ForMultiDCI_r18), 0, 0);
    }
    if (value.has_enableType1HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enableType1HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18), 0, 0);
    }
    if (value.has_enableType2HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enableType2HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18), 0, 0);
    }
    if (value.has_enableType3HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enableType3HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18), 0, 0);
    }
    if (value.has_enableDiffPUCCH_Resource_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enableDiffPUCCH_Resource_r18), 0, 0);
    }
    if (value.has_enableDiffCB_Size_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enableDiffCB_Size_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PhysicalCellGroupConfig_ExtGroup10(Decoder& dec, PhysicalCellGroupConfig_ExtGroup10& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.ncr_RNTI_r18 = (RNTI_Value)tmp_value;
    }
    if (present_1) {
        if (Decode_SetupRelease_CellDTRX_DCI_config_r18(dec, value.cellDTRX_DCI_config_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        value.twoQCL_TypeD_ForMultiDCI_r18 = (PhysicalCellGroupConfig_ExtGroup10_TwoQCL_TypeD_ForMultiDCI_r18)0;
    }
    if (present_3) {
        value.enableType1HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18 = (PhysicalCellGroupConfig_ExtGroup10_EnableType1HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18)0;
    }
    if (present_4) {
        value.enableType2HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18 = (PhysicalCellGroupConfig_ExtGroup10_EnableType2HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18)0;
    }
    if (present_5) {
        value.enableType3HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18 = (PhysicalCellGroupConfig_ExtGroup10_EnableType3HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18)0;
    }
    if (present_6) {
        value.enableDiffPUCCH_Resource_r18 = (PhysicalCellGroupConfig_ExtGroup10_EnableDiffPUCCH_Resource_r18)0;
    }
    if (present_7) {
        value.enableDiffCB_Size_r18 = (PhysicalCellGroupConfig_ExtGroup10_EnableDiffCB_Size_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PhysicalCellGroupConfig_ExtGroup10(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PhysicalCellGroupConfig_ExtGroup10(PhysicalCellGroupConfig_ExtGroup10& value)
{
    if (value.has_ncr_RNTI_r18) {
    }
    if (value.has_cellDTRX_DCI_config_r18) {
        Free_SetupRelease_CellDTRX_DCI_config_r18(value.cellDTRX_DCI_config_r18);
    }
    if (value.has_twoQCL_TypeD_ForMultiDCI_r18) {
    }
    if (value.has_enableType1HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18) {
    }
    if (value.has_enableType2HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18) {
    }
    if (value.has_enableType3HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18) {
    }
    if (value.has_enableDiffPUCCH_Resource_r18) {
    }
    if (value.has_enableDiffCB_Size_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_RNTI_Value：ASN.1 SetupRelease<RNTI-Value>；源文件第 9682 行；CHOICE。
// Encode_SetupRelease_RNTI_Value 只读不分配；Decode_SetupRelease_RNTI_Value 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_RNTI_Value 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_RNTI_Value(Encoder& enc, const SetupRelease_RNTI_Value& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_RNTI_Value_Tag_release:
        (void)0;
        break;
    case SetupRelease_RNTI_Value_Tag_setup:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.setup), 0, 65535);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_RNTI_Value(Decoder& dec, SetupRelease_RNTI_Value& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_RNTI_Value_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_RNTI_Value_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_RNTI_Value_Tag_setup: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.u.setup = (RNTI_Value)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_RNTI_Value(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_RNTI_Value(SetupRelease_RNTI_Value& value)
{
    switch (value.tag) {
    case SetupRelease_RNTI_Value_Tag_release:
        break;
    case SetupRelease_RNTI_Value_Tag_setup:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PhysicalCellGroupConfig：ASN.1 PhysicalCellGroupConfig；源文件第 9673 行；SEQUENCE。
// Encode_PhysicalCellGroupConfig 只读不分配；Decode_PhysicalCellGroupConfig 可能 malloc（失败时内部已释放并清零）；Free_PhysicalCellGroupConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PhysicalCellGroupConfig(Encoder& enc, const PhysicalCellGroupConfig& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4 || value.has_extGroup5 || value.has_extGroup6 || value.has_extGroup7 || value.has_extGroup8 || value.has_extGroup9 || value.has_extGroup10;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_harq_ACK_SpatialBundlingPUCCH);
    enc.WriteBit(value.has_harq_ACK_SpatialBundlingPUSCH);
    enc.WriteBit(value.has_p_NR_FR1);
    enc.WriteBit(value.has_tpc_SRS_RNTI);
    enc.WriteBit(value.has_tpc_PUCCH_RNTI);
    enc.WriteBit(value.has_tpc_PUSCH_RNTI);
    enc.WriteBit(value.has_sp_CSI_RNTI);
    enc.WriteBit(value.has_cs_RNTI);
    if (value.has_harq_ACK_SpatialBundlingPUCCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.harq_ACK_SpatialBundlingPUCCH), 0, 0);
    }
    if (value.has_harq_ACK_SpatialBundlingPUSCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.harq_ACK_SpatialBundlingPUSCH), 0, 0);
    }
    if (value.has_p_NR_FR1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.p_NR_FR1), -30, 33);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_HARQ_ACK_Codebook), 0, 1);
    if (value.has_tpc_SRS_RNTI) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tpc_SRS_RNTI), 0, 65535);
    }
    if (value.has_tpc_PUCCH_RNTI) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tpc_PUCCH_RNTI), 0, 65535);
    }
    if (value.has_tpc_PUSCH_RNTI) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tpc_PUSCH_RNTI), 0, 65535);
    }
    if (value.has_sp_CSI_RNTI) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sp_CSI_RNTI), 0, 65535);
    }
    if (value.has_cs_RNTI) {
        Encode_SetupRelease_RNTI_Value(enc, value.cs_RNTI);
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
    Encode_PhysicalCellGroupConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_PhysicalCellGroupConfig_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_PhysicalCellGroupConfig_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_PhysicalCellGroupConfig_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup5) {
    Encoder sub;
    Encode_PhysicalCellGroupConfig_ExtGroup5(sub, value.extGroup5);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup6) {
    Encoder sub;
    Encode_PhysicalCellGroupConfig_ExtGroup6(sub, value.extGroup6);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup7) {
    Encoder sub;
    Encode_PhysicalCellGroupConfig_ExtGroup7(sub, value.extGroup7);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup8) {
    Encoder sub;
    Encode_PhysicalCellGroupConfig_ExtGroup8(sub, value.extGroup8);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup9) {
    Encoder sub;
    Encode_PhysicalCellGroupConfig_ExtGroup9(sub, value.extGroup9);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup10) {
    Encoder sub;
    Encode_PhysicalCellGroupConfig_ExtGroup10(sub, value.extGroup10);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PhysicalCellGroupConfig(Decoder& dec, PhysicalCellGroupConfig& value)
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
        value.harq_ACK_SpatialBundlingPUCCH = (PhysicalCellGroupConfig_Harq_ACK_SpatialBundlingPUCCH)0;
    }
    if (present_1) {
        value.harq_ACK_SpatialBundlingPUSCH = (PhysicalCellGroupConfig_Harq_ACK_SpatialBundlingPUSCH)0;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-30, 33, tmp_value)) { goto fail; }
        value.p_NR_FR1 = (P_Max)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.pdsch_HARQ_ACK_Codebook = (PhysicalCellGroupConfig_Pdsch_HARQ_ACK_Codebook)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.tpc_SRS_RNTI = (RNTI_Value)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.tpc_PUCCH_RNTI = (RNTI_Value)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.tpc_PUSCH_RNTI = (RNTI_Value)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.sp_CSI_RNTI = (RNTI_Value)tmp_value;
    }
    if (present_7) {
        if (Decode_SetupRelease_RNTI_Value(dec, value.cs_RNTI) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_PhysicalCellGroupConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_PhysicalCellGroupConfig_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_PhysicalCellGroupConfig_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_PhysicalCellGroupConfig_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    if (Decode_PhysicalCellGroupConfig_ExtGroup5(sub, value.extGroup5) != ErrorCode_Ok) {
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
    if (Decode_PhysicalCellGroupConfig_ExtGroup6(sub, value.extGroup6) != ErrorCode_Ok) {
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
    if (Decode_PhysicalCellGroupConfig_ExtGroup7(sub, value.extGroup7) != ErrorCode_Ok) {
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
    if (Decode_PhysicalCellGroupConfig_ExtGroup8(sub, value.extGroup8) != ErrorCode_Ok) {
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
    if (Decode_PhysicalCellGroupConfig_ExtGroup9(sub, value.extGroup9) != ErrorCode_Ok) {
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
    if (Decode_PhysicalCellGroupConfig_ExtGroup10(sub, value.extGroup10) != ErrorCode_Ok) {
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
    Free_PhysicalCellGroupConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PhysicalCellGroupConfig(PhysicalCellGroupConfig& value)
{
    if (value.has_harq_ACK_SpatialBundlingPUCCH) {
    }
    if (value.has_harq_ACK_SpatialBundlingPUSCH) {
    }
    if (value.has_p_NR_FR1) {
    }
    if (value.has_tpc_SRS_RNTI) {
    }
    if (value.has_tpc_PUCCH_RNTI) {
    }
    if (value.has_tpc_PUSCH_RNTI) {
    }
    if (value.has_sp_CSI_RNTI) {
    }
    if (value.has_cs_RNTI) {
        Free_SetupRelease_RNTI_Value(value.cs_RNTI);
    }
    if (value.has_extGroup1) {
        Free_PhysicalCellGroupConfig_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_PhysicalCellGroupConfig_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_PhysicalCellGroupConfig_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_PhysicalCellGroupConfig_ExtGroup4(value.extGroup4);
    }
    if (value.has_extGroup5) {
        Free_PhysicalCellGroupConfig_ExtGroup5(value.extGroup5);
    }
    if (value.has_extGroup6) {
        Free_PhysicalCellGroupConfig_ExtGroup6(value.extGroup6);
    }
    if (value.has_extGroup7) {
        Free_PhysicalCellGroupConfig_ExtGroup7(value.extGroup7);
    }
    if (value.has_extGroup8) {
        Free_PhysicalCellGroupConfig_ExtGroup8(value.extGroup8);
    }
    if (value.has_extGroup9) {
        Free_PhysicalCellGroupConfig_ExtGroup9(value.extGroup9);
    }
    if (value.has_extGroup10) {
        Free_PhysicalCellGroupConfig_ExtGroup10(value.extGroup10);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellGroupConfig：ASN.1 CellGroupConfig；源文件第 4837 行；SEQUENCE。
// Encode_CellGroupConfig 只读不分配；Decode_CellGroupConfig 可能 malloc（失败时内部已释放并清零）；Free_CellGroupConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellGroupConfig(Encoder& enc, const CellGroupConfig& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4 || value.has_extGroup5 || value.has_extGroup6 || value.has_extGroup7;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_rlc_BearerToAddModList);
    enc.WriteBit(value.has_rlc_BearerToReleaseList);
    enc.WriteBit(value.has_mac_CellGroupConfig);
    enc.WriteBit(value.has_physicalCellGroupConfig);
    enc.WriteBit(value.has_spCellConfig);
    enc.WriteBit(value.has_sCellToAddModList);
    enc.WriteBit(value.has_sCellToReleaseList);
    enc.WriteConstrainedInteger((std::int64_t)(value.cellGroupId), 0, 3);
    if (value.has_rlc_BearerToAddModList) {
enc.WriteConstrainedLength(value.rlc_BearerToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.rlc_BearerToAddModList_count; ++i) {
    Encode_RLC_BearerConfig(enc, value.rlc_BearerToAddModList_items[i]);
}
    }
    if (value.has_rlc_BearerToReleaseList) {
enc.WriteConstrainedLength(value.rlc_BearerToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.rlc_BearerToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.rlc_BearerToReleaseList_items[i]), 1, 32);
}
    }
    if (value.has_mac_CellGroupConfig) {
        Encode_MAC_CellGroupConfig(enc, value.mac_CellGroupConfig);
    }
    if (value.has_physicalCellGroupConfig) {
        Encode_PhysicalCellGroupConfig(enc, value.physicalCellGroupConfig);
    }
    if (value.has_spCellConfig) {
        Encode_SpCellConfig(enc, value.spCellConfig);
    }
    if (value.has_sCellToAddModList) {
enc.WriteConstrainedLength(value.sCellToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sCellToAddModList_count; ++i) {
    Encode_SCellConfig(enc, value.sCellToAddModList_items[i]);
}
    }
    if (value.has_sCellToReleaseList) {
enc.WriteConstrainedLength(value.sCellToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sCellToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sCellToReleaseList_items[i]), 1, 31);
}
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
    Encode_CellGroupConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_CellGroupConfig_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_CellGroupConfig_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_CellGroupConfig_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup5) {
    Encoder sub;
    Encode_CellGroupConfig_ExtGroup5(sub, value.extGroup5);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup6) {
    Encoder sub;
    Encode_CellGroupConfig_ExtGroup6(sub, value.extGroup6);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup7) {
    Encoder sub;
    Encode_CellGroupConfig_ExtGroup7(sub, value.extGroup7);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_CellGroupConfig(Decoder& dec, CellGroupConfig& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.cellGroupId = (CellGroupId)tmp_value;
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.rlc_BearerToAddModList_count)) { goto fail; }
if (value.rlc_BearerToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.rlc_BearerToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.rlc_BearerToAddModList_count > 0u) {
    value.rlc_BearerToAddModList_items = (RLC_BearerConfig*)std::malloc((std::size_t)value.rlc_BearerToAddModList_count * sizeof(RLC_BearerConfig));
    if (value.rlc_BearerToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.rlc_BearerToAddModList_items, 0, (std::size_t)value.rlc_BearerToAddModList_count * sizeof(RLC_BearerConfig));
}
for (std::uint32_t i = 0; i < value.rlc_BearerToAddModList_count; ++i) {
    if (Decode_RLC_BearerConfig(dec, value.rlc_BearerToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.rlc_BearerToReleaseList_count)) { goto fail; }
if (value.rlc_BearerToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.rlc_BearerToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.rlc_BearerToReleaseList_count > 0u) {
    value.rlc_BearerToReleaseList_items = (LogicalChannelIdentity*)std::malloc((std::size_t)value.rlc_BearerToReleaseList_count * sizeof(LogicalChannelIdentity));
    if (value.rlc_BearerToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.rlc_BearerToReleaseList_items, 0, (std::size_t)value.rlc_BearerToReleaseList_count * sizeof(LogicalChannelIdentity));
}
for (std::uint32_t i = 0; i < value.rlc_BearerToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
    value.rlc_BearerToReleaseList_items[i] = (LogicalChannelIdentity)tmp_value;
}
    }
    if (present_2) {
        if (Decode_MAC_CellGroupConfig(dec, value.mac_CellGroupConfig) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_PhysicalCellGroupConfig(dec, value.physicalCellGroupConfig) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SpCellConfig(dec, value.spCellConfig) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sCellToAddModList_count)) { goto fail; }
if (value.sCellToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sCellToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sCellToAddModList_count > 0u) {
    value.sCellToAddModList_items = (SCellConfig*)std::malloc((std::size_t)value.sCellToAddModList_count * sizeof(SCellConfig));
    if (value.sCellToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sCellToAddModList_items, 0, (std::size_t)value.sCellToAddModList_count * sizeof(SCellConfig));
}
for (std::uint32_t i = 0; i < value.sCellToAddModList_count; ++i) {
    if (Decode_SCellConfig(dec, value.sCellToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_6) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sCellToReleaseList_count)) { goto fail; }
if (value.sCellToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sCellToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sCellToReleaseList_count > 0u) {
    value.sCellToReleaseList_items = (SCellIndex*)std::malloc((std::size_t)value.sCellToReleaseList_count * sizeof(SCellIndex));
    if (value.sCellToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sCellToReleaseList_items, 0, (std::size_t)value.sCellToReleaseList_count * sizeof(SCellIndex));
}
for (std::uint32_t i = 0; i < value.sCellToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 31, tmp_value)) { goto fail; }
    value.sCellToReleaseList_items[i] = (SCellIndex)tmp_value;
}
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
    if (Decode_CellGroupConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_CellGroupConfig_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_CellGroupConfig_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_CellGroupConfig_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    if (Decode_CellGroupConfig_ExtGroup5(sub, value.extGroup5) != ErrorCode_Ok) {
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
    if (Decode_CellGroupConfig_ExtGroup6(sub, value.extGroup6) != ErrorCode_Ok) {
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
    if (Decode_CellGroupConfig_ExtGroup7(sub, value.extGroup7) != ErrorCode_Ok) {
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
    Free_CellGroupConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellGroupConfig(CellGroupConfig& value)
{
    if (value.has_rlc_BearerToAddModList) {
        if (value.rlc_BearerToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.rlc_BearerToAddModList_count; ++i) {
                Free_RLC_BearerConfig(value.rlc_BearerToAddModList_items[i]);
            }
            std::free(value.rlc_BearerToAddModList_items);
            value.rlc_BearerToAddModList_items = nullptr;
        }
        value.rlc_BearerToAddModList_count = 0;
    }
    if (value.has_rlc_BearerToReleaseList) {
        if (value.rlc_BearerToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.rlc_BearerToReleaseList_count; ++i) {
            }
            std::free(value.rlc_BearerToReleaseList_items);
            value.rlc_BearerToReleaseList_items = nullptr;
        }
        value.rlc_BearerToReleaseList_count = 0;
    }
    if (value.has_mac_CellGroupConfig) {
        Free_MAC_CellGroupConfig(value.mac_CellGroupConfig);
    }
    if (value.has_physicalCellGroupConfig) {
        Free_PhysicalCellGroupConfig(value.physicalCellGroupConfig);
    }
    if (value.has_spCellConfig) {
        Free_SpCellConfig(value.spCellConfig);
    }
    if (value.has_sCellToAddModList) {
        if (value.sCellToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sCellToAddModList_count; ++i) {
                Free_SCellConfig(value.sCellToAddModList_items[i]);
            }
            std::free(value.sCellToAddModList_items);
            value.sCellToAddModList_items = nullptr;
        }
        value.sCellToAddModList_count = 0;
    }
    if (value.has_sCellToReleaseList) {
        if (value.sCellToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sCellToReleaseList_count; ++i) {
            }
            std::free(value.sCellToReleaseList_items);
            value.sCellToReleaseList_items = nullptr;
        }
        value.sCellToReleaseList_count = 0;
    }
    if (value.has_extGroup1) {
        Free_CellGroupConfig_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_CellGroupConfig_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_CellGroupConfig_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_CellGroupConfig_ExtGroup4(value.extGroup4);
    }
    if (value.has_extGroup5) {
        Free_CellGroupConfig_ExtGroup5(value.extGroup5);
    }
    if (value.has_extGroup6) {
        Free_CellGroupConfig_ExtGroup6(value.extGroup6);
    }
    if (value.has_extGroup7) {
        Free_CellGroupConfig_ExtGroup7(value.extGroup7);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SCellConfig_ExtGroup1：ASN.1 SCellConfig_ExtGroup1；源文件第 4951 行；扩展添加组 [[ ]]。
// Encode_SCellConfig_ExtGroup1 只读不分配；Decode_SCellConfig_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SCellConfig_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SCellConfig_ExtGroup1(Encoder& enc, const SCellConfig_ExtGroup1& value)
{
    enc.WriteBit(value.has_smtc);
    if (value.has_smtc) {
        Encode_SSB_MTC(enc, value.smtc);
    }
    return enc.Error();
}

ErrorCode Decode_SCellConfig_ExtGroup1(Decoder& dec, SCellConfig_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SSB_MTC(dec, value.smtc) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SCellConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SCellConfig_ExtGroup1(SCellConfig_ExtGroup1& value)
{
    if (value.has_smtc) {
        Free_SSB_MTC(value.smtc);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SCellConfig_ExtGroup2：ASN.1 SCellConfig_ExtGroup2；源文件第 4954 行；扩展添加组 [[ ]]。
// Encode_SCellConfig_ExtGroup2 只读不分配；Decode_SCellConfig_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_SCellConfig_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SCellConfig_ExtGroup2(Encoder& enc, const SCellConfig_ExtGroup2& value)
{
    enc.WriteBit(value.has_sCellState_r16);
    enc.WriteBit(value.has_secondaryDRX_GroupConfig_r16);
    if (value.has_sCellState_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sCellState_r16), 0, 0);
    }
    if (value.has_secondaryDRX_GroupConfig_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.secondaryDRX_GroupConfig_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SCellConfig_ExtGroup2(Decoder& dec, SCellConfig_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.sCellState_r16 = (SCellConfig_ExtGroup2_SCellState_r16)0;
    }
    if (present_1) {
        value.secondaryDRX_GroupConfig_r16 = (SCellConfig_ExtGroup2_SecondaryDRX_GroupConfig_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SCellConfig_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SCellConfig_ExtGroup2(SCellConfig_ExtGroup2& value)
{
    if (value.has_sCellState_r16) {
    }
    if (value.has_secondaryDRX_GroupConfig_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SCellSIB20_r17：ASN.1 SetupRelease<SCellSIB20-r17>；源文件第 4961 行；CHOICE。
// Encode_SetupRelease_SCellSIB20_r17 只读不分配；Decode_SetupRelease_SCellSIB20_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SCellSIB20_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SCellSIB20_r17(Encoder& enc, const SetupRelease_SCellSIB20_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SCellSIB20_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_SCellSIB20_r17_Tag_setup:
        if (value.u.setup == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_SystemInformation(enc, *value.u.setup);
        }
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SCellSIB20_r17(Decoder& dec, SetupRelease_SCellSIB20_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SCellSIB20_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SCellSIB20_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SCellSIB20_r17_Tag_setup: {
        if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
            dec.Fail(ErrorCode_ContainingDepthExceeded); goto fail;
        }
        std::vector<std::uint8_t> containing_bytes;
        if (!dec.ReadOpenType(containing_bytes)) { goto fail; }
        Decoder containing_sub(containing_bytes.data(), containing_bytes.size());
        containing_sub.SetContainingDepth(dec.ContainingDepth() + 1);
        SystemInformation* containing_value = (SystemInformation*)std::malloc(sizeof(SystemInformation));
        if (containing_value == nullptr) {
            dec.Fail(ErrorCode_OutOfMemory); goto fail;
        }
        std::memset(containing_value, 0, sizeof(*containing_value));
        if (Decode_SystemInformation(containing_sub, *containing_value) != ErrorCode_Ok) {
            Free_SystemInformation(*containing_value);
            std::free(containing_value);
            dec.Fail(containing_sub.Error()); goto fail;
        }
        if (!containing_sub.CheckOpenTypeEnd()) {
            Free_SystemInformation(*containing_value);
            std::free(containing_value);
            dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
        }
        value.u.setup = containing_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SCellSIB20_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SCellSIB20_r17(SetupRelease_SCellSIB20_r17& value)
{
    switch (value.tag) {
    case SetupRelease_SCellSIB20_r17_Tag_release:
        break;
    case SetupRelease_SCellSIB20_r17_Tag_setup:
        if (value.u.setup != nullptr) {
            Free_SystemInformation(*value.u.setup);
            std::free(value.u.setup);
        }
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SCellConfig_ExtGroup3：ASN.1 SCellConfig_ExtGroup3；源文件第 4958 行；扩展添加组 [[ ]]。
// Encode_SCellConfig_ExtGroup3 只读不分配；Decode_SCellConfig_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_SCellConfig_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SCellConfig_ExtGroup3(Encoder& enc, const SCellConfig_ExtGroup3& value)
{
    enc.WriteBit(value.has_preConfGapStatus_r17);
    enc.WriteBit(value.has_goodServingCellEvaluationBFD_r17);
    enc.WriteBit(value.has_sCellSIB20_r17);
    if (value.has_preConfGapStatus_r17) {
        enc.WriteFixedBitString(value.preConfGapStatus_r17.bytes, value.preConfGapStatus_r17.bitLength, 8, 8);
    }
    if (value.has_goodServingCellEvaluationBFD_r17) {
        Encode_GoodServingCellEvaluation_r17(enc, value.goodServingCellEvaluationBFD_r17);
    }
    if (value.has_sCellSIB20_r17) {
        Encode_SetupRelease_SCellSIB20_r17(enc, value.sCellSIB20_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SCellConfig_ExtGroup3(Decoder& dec, SCellConfig_ExtGroup3& value)
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
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.preConfGapStatus_r17.bytes = string_bytes;
        value.preConfGapStatus_r17.bitLength = string_length;
    }
    if (present_1) {
        if (Decode_GoodServingCellEvaluation_r17(dec, value.goodServingCellEvaluationBFD_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SetupRelease_SCellSIB20_r17(dec, value.sCellSIB20_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SCellConfig_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SCellConfig_ExtGroup3(SCellConfig_ExtGroup3& value)
{
    if (value.has_preConfGapStatus_r17) {
        std::free(value.preConfGapStatus_r17.bytes);
        value.preConfGapStatus_r17.bytes = nullptr;
        value.preConfGapStatus_r17.bitLength = 0;
    }
    if (value.has_goodServingCellEvaluationBFD_r17) {
        Free_GoodServingCellEvaluation_r17(value.goodServingCellEvaluationBFD_r17);
    }
    if (value.has_sCellSIB20_r17) {
        Free_SetupRelease_SCellSIB20_r17(value.sCellSIB20_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PLMN_IdentityInfoList：ASN.1 SetupRelease<PLMN-IdentityInfoList>；源文件第 4964 行；CHOICE。
// Encode_SetupRelease_PLMN_IdentityInfoList 只读不分配；Decode_SetupRelease_PLMN_IdentityInfoList 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PLMN_IdentityInfoList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PLMN_IdentityInfoList(Encoder& enc, const SetupRelease_PLMN_IdentityInfoList& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PLMN_IdentityInfoList_Tag_release:
        (void)0;
        break;
    case SetupRelease_PLMN_IdentityInfoList_Tag_setup:
        Encode_PLMN_IdentityInfoList(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PLMN_IdentityInfoList(Decoder& dec, SetupRelease_PLMN_IdentityInfoList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PLMN_IdentityInfoList_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PLMN_IdentityInfoList_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PLMN_IdentityInfoList_Tag_setup: {
        if (Decode_PLMN_IdentityInfoList(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PLMN_IdentityInfoList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PLMN_IdentityInfoList(SetupRelease_PLMN_IdentityInfoList& value)
{
    switch (value.tag) {
    case SetupRelease_PLMN_IdentityInfoList_Tag_release:
        break;
    case SetupRelease_PLMN_IdentityInfoList_Tag_setup:
        Free_PLMN_IdentityInfoList(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_NPN_IdentityInfoList_r16：ASN.1 SetupRelease<NPN-IdentityInfoList-r16>；源文件第 4965 行；CHOICE。
// Encode_SetupRelease_NPN_IdentityInfoList_r16 只读不分配；Decode_SetupRelease_NPN_IdentityInfoList_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_NPN_IdentityInfoList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_NPN_IdentityInfoList_r16(Encoder& enc, const SetupRelease_NPN_IdentityInfoList_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_NPN_IdentityInfoList_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_NPN_IdentityInfoList_r16_Tag_setup:
        Encode_NPN_IdentityInfoList_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_NPN_IdentityInfoList_r16(Decoder& dec, SetupRelease_NPN_IdentityInfoList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_NPN_IdentityInfoList_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_NPN_IdentityInfoList_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_NPN_IdentityInfoList_r16_Tag_setup: {
        if (Decode_NPN_IdentityInfoList_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_NPN_IdentityInfoList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_NPN_IdentityInfoList_r16(SetupRelease_NPN_IdentityInfoList_r16& value)
{
    switch (value.tag) {
    case SetupRelease_NPN_IdentityInfoList_r16_Tag_release:
        break;
    case SetupRelease_NPN_IdentityInfoList_r16_Tag_setup:
        Free_NPN_IdentityInfoList_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SCellConfig_ExtGroup4：ASN.1 SCellConfig_ExtGroup4；源文件第 4963 行；扩展添加组 [[ ]]。
// Encode_SCellConfig_ExtGroup4 只读不分配；Decode_SCellConfig_ExtGroup4 可能 malloc（失败时内部已释放并清零）；Free_SCellConfig_ExtGroup4 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SCellConfig_ExtGroup4(Encoder& enc, const SCellConfig_ExtGroup4& value)
{
    enc.WriteBit(value.has_plmn_IdentityInfoList_r17);
    enc.WriteBit(value.has_npn_IdentityInfoList_r17);
    if (value.has_plmn_IdentityInfoList_r17) {
        Encode_SetupRelease_PLMN_IdentityInfoList(enc, value.plmn_IdentityInfoList_r17);
    }
    if (value.has_npn_IdentityInfoList_r17) {
        Encode_SetupRelease_NPN_IdentityInfoList_r16(enc, value.npn_IdentityInfoList_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SCellConfig_ExtGroup4(Decoder& dec, SCellConfig_ExtGroup4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_PLMN_IdentityInfoList(dec, value.plmn_IdentityInfoList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_NPN_IdentityInfoList_r16(dec, value.npn_IdentityInfoList_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SCellConfig_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SCellConfig_ExtGroup4(SCellConfig_ExtGroup4& value)
{
    if (value.has_plmn_IdentityInfoList_r17) {
        Free_SetupRelease_PLMN_IdentityInfoList(value.plmn_IdentityInfoList_r17);
    }
    if (value.has_npn_IdentityInfoList_r17) {
        Free_SetupRelease_NPN_IdentityInfoList_r16(value.npn_IdentityInfoList_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SCellConfig：ASN.1 SCellConfig；源文件第 4946 行；SEQUENCE。
// Encode_SCellConfig 只读不分配；Decode_SCellConfig 可能 malloc（失败时内部已释放并清零）；Free_SCellConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SCellConfig(Encoder& enc, const SCellConfig& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sCellConfigCommon);
    enc.WriteBit(value.has_sCellConfigDedicated);
    enc.WriteConstrainedInteger((std::int64_t)(value.sCellIndex), 1, 31);
    if (value.has_sCellConfigCommon) {
        Encode_ServingCellConfigCommon(enc, value.sCellConfigCommon);
    }
    if (value.has_sCellConfigDedicated) {
        Encode_ServingCellConfig(enc, value.sCellConfigDedicated);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(4u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        enc.WriteBit(value.has_extGroup4);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SCellConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SCellConfig_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_SCellConfig_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_SCellConfig_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SCellConfig(Decoder& dec, SCellConfig& value)
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
        if (!dec.ReadConstrainedInteger(1, 31, tmp_value)) { goto fail; }
        value.sCellIndex = (SCellIndex)tmp_value;
    }
    if (present_0) {
        if (Decode_ServingCellConfigCommon(dec, value.sCellConfigCommon) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_ServingCellConfig(dec, value.sCellConfigDedicated) != ErrorCode_Ok) { goto fail; }
    }
    if (extension) {
        std::uint32_t addition_count = 0;
        if (!dec.ReadNormallySmallLength(addition_count)) { goto fail; }
        if (addition_count > 4u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        bool addition_present[4] = {false};
        for (std::uint32_t i = 0; i < addition_count; ++i) {
            bool bit = false;
            if (!dec.ReadBit(bit)) { goto fail; }
            addition_present[i] = bit;
        }
        if (addition_present[0]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_SCellConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_SCellConfig_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_SCellConfig_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_SCellConfig_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup4 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SCellConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SCellConfig(SCellConfig& value)
{
    if (value.has_sCellConfigCommon) {
        Free_ServingCellConfigCommon(value.sCellConfigCommon);
    }
    if (value.has_sCellConfigDedicated) {
        Free_ServingCellConfig(value.sCellConfigDedicated);
    }
    if (value.has_extGroup1) {
        Free_SCellConfig_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SCellConfig_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_SCellConfig_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_SCellConfig_ExtGroup4(value.extGroup4);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IAB_ResourceConfig_r17：ASN.1 IAB-ResourceConfig-r17；源文件第 4986 行；SEQUENCE。
// Encode_IAB_ResourceConfig_r17 只读不分配；Decode_IAB_ResourceConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_IAB_ResourceConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IAB_ResourceConfig_r17(Encoder& enc, const IAB_ResourceConfig_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_slotList_r17);
    enc.WriteBit(value.has_periodicitySlotList_r17);
    enc.WriteBit(value.has_slotListSubcarrierSpacing_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.iab_ResourceConfigID_r17), 0, 65535);
    if (value.has_slotList_r17) {
enc.WriteConstrainedLength(value.slotList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.slotList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.slotList_r17_items[i]), 0, 5119);
}
    }
    if (value.has_periodicitySlotList_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.periodicitySlotList_r17), 0, 11);
    }
    if (value.has_slotListSubcarrierSpacing_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.slotListSubcarrierSpacing_r17), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_IAB_ResourceConfig_r17(Decoder& dec, IAB_ResourceConfig_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.iab_ResourceConfigID_r17 = (IAB_ResourceConfigID_r17)tmp_value;
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.slotList_r17_count)) { goto fail; }
if (value.slotList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.slotList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.slotList_r17_count > 0u) {
    value.slotList_r17_items = (int64_t*)std::malloc((std::size_t)value.slotList_r17_count * sizeof(int64_t));
    if (value.slotList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.slotList_r17_items, 0, (std::size_t)value.slotList_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.slotList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 5119, tmp_value)) { goto fail; }
    value.slotList_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 11, tmp_value)) { goto fail; }
        value.periodicitySlotList_r17 = (IAB_ResourceConfig_r17_PeriodicitySlotList_r17)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.slotListSubcarrierSpacing_r17 = (SubcarrierSpacing)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_IAB_ResourceConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IAB_ResourceConfig_r17(IAB_ResourceConfig_r17& value)
{
    if (value.has_slotList_r17) {
        if (value.slotList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.slotList_r17_count; ++i) {
            }
            std::free(value.slotList_r17_items);
            value.slotList_r17_items = nullptr;
        }
        value.slotList_r17_count = 0;
    }
    if (value.has_periodicitySlotList_r17) {
    }
    if (value.has_slotListSubcarrierSpacing_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IntraBandCC_CombinationReqList_r17：ASN.1 IntraBandCC-CombinationReqList-r17；源文件第 4997 行；SEQUENCE。
// Encode_IntraBandCC_CombinationReqList_r17 只读不分配；Decode_IntraBandCC_CombinationReqList_r17 可能 malloc（失败时内部已释放并清零）；Free_IntraBandCC_CombinationReqList_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IntraBandCC_CombinationReqList_r17(Encoder& enc, const IntraBandCC_CombinationReqList_r17& value)
{
enc.WriteConstrainedLength(value.servCellIndexList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.servCellIndexList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.servCellIndexList_r17_items[i]), 0, 31);
}
enc.WriteConstrainedLength(value.cc_CombinationList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cc_CombinationList_r17_count; ++i) {
    Encode_IntraBandCC_Combination_r17(enc, value.cc_CombinationList_r17_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_IntraBandCC_CombinationReqList_r17(Decoder& dec, IntraBandCC_CombinationReqList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.servCellIndexList_r17_count)) { goto fail; }
if (value.servCellIndexList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.servCellIndexList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.servCellIndexList_r17_count > 0u) {
    value.servCellIndexList_r17_items = (ServCellIndex*)std::malloc((std::size_t)value.servCellIndexList_r17_count * sizeof(ServCellIndex));
    if (value.servCellIndexList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.servCellIndexList_r17_items, 0, (std::size_t)value.servCellIndexList_r17_count * sizeof(ServCellIndex));
}
for (std::uint32_t i = 0; i < value.servCellIndexList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.servCellIndexList_r17_items[i] = (ServCellIndex)tmp_value;
}
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.cc_CombinationList_r17_count)) { goto fail; }
if (value.cc_CombinationList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cc_CombinationList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cc_CombinationList_r17_count > 0u) {
    value.cc_CombinationList_r17_items = (IntraBandCC_Combination_r17*)std::malloc((std::size_t)value.cc_CombinationList_r17_count * sizeof(IntraBandCC_Combination_r17));
    if (value.cc_CombinationList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cc_CombinationList_r17_items, 0, (std::size_t)value.cc_CombinationList_r17_count * sizeof(IntraBandCC_Combination_r17));
}
for (std::uint32_t i = 0; i < value.cc_CombinationList_r17_count; ++i) {
    if (Decode_IntraBandCC_Combination_r17(dec, value.cc_CombinationList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_IntraBandCC_CombinationReqList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IntraBandCC_CombinationReqList_r17(IntraBandCC_CombinationReqList_r17& value)
{
    if (value.servCellIndexList_r17_items != nullptr) {
        for (std::uint32_t i = 0; i < value.servCellIndexList_r17_count; ++i) {
        }
        std::free(value.servCellIndexList_r17_items);
        value.servCellIndexList_r17_items = nullptr;
    }
    value.servCellIndexList_r17_count = 0;
    if (value.cc_CombinationList_r17_items != nullptr) {
        for (std::uint32_t i = 0; i < value.cc_CombinationList_r17_count; ++i) {
            Free_IntraBandCC_Combination_r17(value.cc_CombinationList_r17_items[i]);
        }
        std::free(value.cc_CombinationList_r17_items);
        value.cc_CombinationList_r17_items = nullptr;
    }
    value.cc_CombinationList_r17_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IntraBandCC_Combination_r17：ASN.1 IntraBandCC-Combination-r17；源文件第 5002 行；SEQUENCE OF。
// Encode_IntraBandCC_Combination_r17 只读不分配；Decode_IntraBandCC_Combination_r17 可能 malloc（失败时内部已释放并清零）；Free_IntraBandCC_Combination_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IntraBandCC_Combination_r17(Encoder& enc, const IntraBandCC_Combination_r17& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_CC_State_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_IntraBandCC_Combination_r17(Decoder& dec, IntraBandCC_Combination_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (CC_State_r17*)std::malloc((std::size_t)value.count * sizeof(CC_State_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(CC_State_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_CC_State_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_IntraBandCC_Combination_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IntraBandCC_Combination_r17(IntraBandCC_Combination_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_CC_State_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CarrierState_r17：ASN.1 CarrierState-r17；源文件第 5009 行；CHOICE。
// Encode_CarrierState_r17 只读不分配；Decode_CarrierState_r17 可能 malloc（失败时内部已释放并清零）；Free_CarrierState_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CarrierState_r17(Encoder& enc, const CarrierState_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CarrierState_r17_Tag_deActivated_r17:
        (void)0;
        break;
    case CarrierState_r17_Tag_activeBWP_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.activeBWP_r17), 0, 4);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CarrierState_r17(Decoder& dec, CarrierState_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CarrierState_r17_Tag)root_index;
    switch (value.tag) {
    case CarrierState_r17_Tag_deActivated_r17: {
        (void)0;
        break;
    }
    case CarrierState_r17_Tag_activeBWP_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.u.activeBWP_r17 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CarrierState_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CarrierState_r17(CarrierState_r17& value)
{
    switch (value.tag) {
    case CarrierState_r17_Tag_deActivated_r17:
        break;
    case CarrierState_r17_Tag_activeBWP_r17:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CC_State_r17：ASN.1 CC-State-r17；源文件第 5004 行；SEQUENCE。
// Encode_CC_State_r17 只读不分配；Decode_CC_State_r17 可能 malloc（失败时内部已释放并清零）；Free_CC_State_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CC_State_r17(Encoder& enc, const CC_State_r17& value)
{
    enc.WriteBit(value.has_dlCarrier_r17);
    enc.WriteBit(value.has_ulCarrier_r17);
    if (value.has_dlCarrier_r17) {
        Encode_CarrierState_r17(enc, value.dlCarrier_r17);
    }
    if (value.has_ulCarrier_r17) {
        Encode_CarrierState_r17(enc, value.ulCarrier_r17);
    }
    return enc.Error();
}

ErrorCode Decode_CC_State_r17(Decoder& dec, CC_State_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_CarrierState_r17(dec, value.dlCarrier_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CarrierState_r17(dec, value.ulCarrier_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CC_State_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CC_State_r17(CC_State_r17& value)
{
    if (value.has_dlCarrier_r17) {
        Free_CarrierState_r17(value.dlCarrier_r17);
    }
    if (value.has_ulCarrier_r17) {
        Free_CarrierState_r17(value.ulCarrier_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UplinkTxSwitchingBandPairConfig_r18：ASN.1 UplinkTxSwitchingBandPairConfig-r18；源文件第 5037 行；SEQUENCE。
// Encode_UplinkTxSwitchingBandPairConfig_r18 只读不分配；Decode_UplinkTxSwitchingBandPairConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_UplinkTxSwitchingBandPairConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UplinkTxSwitchingBandPairConfig_r18(Encoder& enc, const UplinkTxSwitchingBandPairConfig_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_switching2T_Mode_r18);
    enc.WriteBit(value.has_switchingPeriodConfigForBandPair_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.bandInfoUL1_r18), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.bandInfoUL2_r18), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.switchingOptionConfigForBandPair_r18), 0, 1);
    if (value.has_switching2T_Mode_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.switching2T_Mode_r18), 0, 0);
    }
    if (value.has_switchingPeriodConfigForBandPair_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.switchingPeriodConfigForBandPair_r18), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_UplinkTxSwitchingBandPairConfig_r18(Decoder& dec, UplinkTxSwitchingBandPairConfig_r18& value)
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
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.bandInfoUL1_r18 = (UplinkTxSwitchingBandIndex_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.bandInfoUL2_r18 = (UplinkTxSwitchingBandIndex_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.switchingOptionConfigForBandPair_r18 = (UplinkTxSwitchingBandPairConfig_r18_SwitchingOptionConfigForBandPair_r18)tmp_value;
    }
    if (present_0) {
        value.switching2T_Mode_r18 = (UplinkTxSwitchingBandPairConfig_r18_Switching2T_Mode_r18)0;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.switchingPeriodConfigForBandPair_r18 = (UplinkTxSwitchingBandPairConfig_r18_SwitchingPeriodConfigForBandPair_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UplinkTxSwitchingBandPairConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkTxSwitchingBandPairConfig_r18(UplinkTxSwitchingBandPairConfig_r18& value)
{
    if (value.has_switching2T_Mode_r18) {
    }
    if (value.has_switchingPeriodConfigForBandPair_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UplinkTxSwitchingAssociatedBandDualUL_r18：ASN.1 UplinkTxSwitchingAssociatedBandDualUL-r18；源文件第 5048 行；SEQUENCE。
// Encode_UplinkTxSwitchingAssociatedBandDualUL_r18 只读不分配；Decode_UplinkTxSwitchingAssociatedBandDualUL_r18 可能 malloc（失败时内部已释放并清零）；Free_UplinkTxSwitchingAssociatedBandDualUL_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UplinkTxSwitchingAssociatedBandDualUL_r18(Encoder& enc, const UplinkTxSwitchingAssociatedBandDualUL_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.transmitBand_r18), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.associatedBand_r18), 1, 32);
    return enc.Error();
}

ErrorCode Decode_UplinkTxSwitchingAssociatedBandDualUL_r18(Decoder& dec, UplinkTxSwitchingAssociatedBandDualUL_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.transmitBand_r18 = (UplinkTxSwitchingBandIndex_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.associatedBand_r18 = (UplinkTxSwitchingBandIndex_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UplinkTxSwitchingAssociatedBandDualUL_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkTxSwitchingAssociatedBandDualUL_r18(UplinkTxSwitchingAssociatedBandDualUL_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MultiBandInfoListEUTRA：ASN.1 MultiBandInfoListEUTRA；源文件第 8057 行；SEQUENCE OF。
// Encode_MultiBandInfoListEUTRA 只读不分配；Decode_MultiBandInfoListEUTRA 可能 malloc（失败时内部已释放并清零）；Free_MultiBandInfoListEUTRA 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MultiBandInfoListEUTRA(Encoder& enc, const MultiBandInfoListEUTRA& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 1, 256);
    }
    return enc.Error();
}

ErrorCode Decode_MultiBandInfoListEUTRA(Decoder& dec, MultiBandInfoListEUTRA& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (FreqBandIndicatorEUTRA*)std::malloc((std::size_t)value.count * sizeof(FreqBandIndicatorEUTRA));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(FreqBandIndicatorEUTRA));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 256, tmp_value)) { goto fail; }
    value.items[i] = (FreqBandIndicatorEUTRA)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_MultiBandInfoListEUTRA(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MultiBandInfoListEUTRA(MultiBandInfoListEUTRA& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CGI_InfoEUTRA_Cgi_info_EPC：ASN.1 cgi-info-EPC；源文件第 5094 行；SEQUENCE。
// Encode_CGI_InfoEUTRA_Cgi_info_EPC 只读不分配；Decode_CGI_InfoEUTRA_Cgi_info_EPC 可能 malloc（失败时内部已释放并清零）；Free_CGI_InfoEUTRA_Cgi_info_EPC 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CGI_InfoEUTRA_Cgi_info_EPC(Encoder& enc, const CGI_InfoEUTRA_Cgi_info_EPC& value)
{
    enc.WriteBit(value.has_cgi_info_EPC_list);
    Encode_CellAccessRelatedInfo_EUTRA_EPC(enc, value.cgi_info_EPC_legacy);
    if (value.has_cgi_info_EPC_list) {
enc.WriteConstrainedLength(value.cgi_info_EPC_list_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cgi_info_EPC_list_count; ++i) {
    Encode_CellAccessRelatedInfo_EUTRA_EPC(enc, value.cgi_info_EPC_list_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_CGI_InfoEUTRA_Cgi_info_EPC(Decoder& dec, CGI_InfoEUTRA_Cgi_info_EPC& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_CellAccessRelatedInfo_EUTRA_EPC(dec, value.cgi_info_EPC_legacy) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.cgi_info_EPC_list_count)) { goto fail; }
if (value.cgi_info_EPC_list_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cgi_info_EPC_list_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cgi_info_EPC_list_count > 0u) {
    value.cgi_info_EPC_list_items = (CellAccessRelatedInfo_EUTRA_EPC*)std::malloc((std::size_t)value.cgi_info_EPC_list_count * sizeof(CellAccessRelatedInfo_EUTRA_EPC));
    if (value.cgi_info_EPC_list_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cgi_info_EPC_list_items, 0, (std::size_t)value.cgi_info_EPC_list_count * sizeof(CellAccessRelatedInfo_EUTRA_EPC));
}
for (std::uint32_t i = 0; i < value.cgi_info_EPC_list_count; ++i) {
    if (Decode_CellAccessRelatedInfo_EUTRA_EPC(dec, value.cgi_info_EPC_list_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CGI_InfoEUTRA_Cgi_info_EPC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CGI_InfoEUTRA_Cgi_info_EPC(CGI_InfoEUTRA_Cgi_info_EPC& value)
{
    Free_CellAccessRelatedInfo_EUTRA_EPC(value.cgi_info_EPC_legacy);
    if (value.has_cgi_info_EPC_list) {
        if (value.cgi_info_EPC_list_items != nullptr) {
            for (std::uint32_t i = 0; i < value.cgi_info_EPC_list_count; ++i) {
                Free_CellAccessRelatedInfo_EUTRA_EPC(value.cgi_info_EPC_list_items[i]);
            }
            std::free(value.cgi_info_EPC_list_items);
            value.cgi_info_EPC_list_items = nullptr;
        }
        value.cgi_info_EPC_list_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CGI_InfoEUTRA：ASN.1 CGI-InfoEUTRA；源文件第 5093 行；SEQUENCE。
// Encode_CGI_InfoEUTRA 只读不分配；Decode_CGI_InfoEUTRA 可能 malloc（失败时内部已释放并清零）；Free_CGI_InfoEUTRA 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CGI_InfoEUTRA(Encoder& enc, const CGI_InfoEUTRA& value)
{
    enc.WriteBit(value.has_cgi_info_EPC);
    enc.WriteBit(value.has_cgi_info_5GC);
    enc.WriteBit(value.has_multiBandInfoList);
    enc.WriteBit(value.has_freqBandIndicatorPriority);
    if (value.has_cgi_info_EPC) {
        Encode_CGI_InfoEUTRA_Cgi_info_EPC(enc, value.cgi_info_EPC);
    }
    if (value.has_cgi_info_5GC) {
enc.WriteConstrainedLength(value.cgi_info_5GC_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cgi_info_5GC_count; ++i) {
    Encode_CellAccessRelatedInfo_EUTRA_5GC(enc, value.cgi_info_5GC_items[i]);
}
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.freqBandIndicator), 1, 256);
    if (value.has_multiBandInfoList) {
        Encode_MultiBandInfoListEUTRA(enc, value.multiBandInfoList);
    }
    if (value.has_freqBandIndicatorPriority) {
        enc.WriteConstrainedInteger((std::int64_t)(value.freqBandIndicatorPriority), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CGI_InfoEUTRA(Decoder& dec, CGI_InfoEUTRA& value)
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
        if (Decode_CGI_InfoEUTRA_Cgi_info_EPC(dec, value.cgi_info_EPC) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.cgi_info_5GC_count)) { goto fail; }
if (value.cgi_info_5GC_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cgi_info_5GC_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cgi_info_5GC_count > 0u) {
    value.cgi_info_5GC_items = (CellAccessRelatedInfo_EUTRA_5GC*)std::malloc((std::size_t)value.cgi_info_5GC_count * sizeof(CellAccessRelatedInfo_EUTRA_5GC));
    if (value.cgi_info_5GC_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cgi_info_5GC_items, 0, (std::size_t)value.cgi_info_5GC_count * sizeof(CellAccessRelatedInfo_EUTRA_5GC));
}
for (std::uint32_t i = 0; i < value.cgi_info_5GC_count; ++i) {
    if (Decode_CellAccessRelatedInfo_EUTRA_5GC(dec, value.cgi_info_5GC_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 256, tmp_value)) { goto fail; }
        value.freqBandIndicator = (FreqBandIndicatorEUTRA)tmp_value;
    }
    if (present_2) {
        if (Decode_MultiBandInfoListEUTRA(dec, value.multiBandInfoList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        value.freqBandIndicatorPriority = (CGI_InfoEUTRA_FreqBandIndicatorPriority)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CGI_InfoEUTRA(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CGI_InfoEUTRA(CGI_InfoEUTRA& value)
{
    if (value.has_cgi_info_EPC) {
        Free_CGI_InfoEUTRA_Cgi_info_EPC(value.cgi_info_EPC);
    }
    if (value.has_cgi_info_5GC) {
        if (value.cgi_info_5GC_items != nullptr) {
            for (std::uint32_t i = 0; i < value.cgi_info_5GC_count; ++i) {
                Free_CellAccessRelatedInfo_EUTRA_5GC(value.cgi_info_5GC_items[i]);
            }
            std::free(value.cgi_info_5GC_items);
            value.cgi_info_5GC_items = nullptr;
        }
        value.cgi_info_5GC_count = 0;
    }
    if (value.has_multiBandInfoList) {
        Free_MultiBandInfoListEUTRA(value.multiBandInfoList);
    }
    if (value.has_freqBandIndicatorPriority) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CGI_InfoNR_ExtGroup1：ASN.1 CGI_InfoNR_ExtGroup1；源文件第 5127 行；扩展添加组 [[ ]]。
// Encode_CGI_InfoNR_ExtGroup1 只读不分配；Decode_CGI_InfoNR_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_CGI_InfoNR_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CGI_InfoNR_ExtGroup1(Encoder& enc, const CGI_InfoNR_ExtGroup1& value)
{
    enc.WriteBit(value.has_npn_IdentityInfoList_r16);
    if (value.has_npn_IdentityInfoList_r16) {
        Encode_NPN_IdentityInfoList_r16(enc, value.npn_IdentityInfoList_r16);
    }
    return enc.Error();
}

ErrorCode Decode_CGI_InfoNR_ExtGroup1(Decoder& dec, CGI_InfoNR_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_NPN_IdentityInfoList_r16(dec, value.npn_IdentityInfoList_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CGI_InfoNR_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CGI_InfoNR_ExtGroup1(CGI_InfoNR_ExtGroup1& value)
{
    if (value.has_npn_IdentityInfoList_r16) {
        Free_NPN_IdentityInfoList_r16(value.npn_IdentityInfoList_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CGI_InfoNR_ExtGroup2：ASN.1 CGI_InfoNR_ExtGroup2；源文件第 5130 行；扩展添加组 [[ ]]。
// Encode_CGI_InfoNR_ExtGroup2 只读不分配；Decode_CGI_InfoNR_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_CGI_InfoNR_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CGI_InfoNR_ExtGroup2(Encoder& enc, const CGI_InfoNR_ExtGroup2& value)
{
    enc.WriteBit(value.has_cellReservedForOtherUse_r16);
    if (value.has_cellReservedForOtherUse_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cellReservedForOtherUse_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CGI_InfoNR_ExtGroup2(Decoder& dec, CGI_InfoNR_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.cellReservedForOtherUse_r16 = (CGI_InfoNR_ExtGroup2_CellReservedForOtherUse_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CGI_InfoNR_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CGI_InfoNR_ExtGroup2(CGI_InfoNR_ExtGroup2& value)
{
    if (value.has_cellReservedForOtherUse_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CGI_InfoNR_NoSIB1：ASN.1 noSIB1；源文件第 5122 行；SEQUENCE。
// Encode_CGI_InfoNR_NoSIB1 只读不分配；Decode_CGI_InfoNR_NoSIB1 可能 malloc（失败时内部已释放并清零）；Free_CGI_InfoNR_NoSIB1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CGI_InfoNR_NoSIB1(Encoder& enc, const CGI_InfoNR_NoSIB1& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.ssb_SubcarrierOffset), 0, 15);
    Encode_PDCCH_ConfigSIB1(enc, value.pdcch_ConfigSIB1);
    return enc.Error();
}

ErrorCode Decode_CGI_InfoNR_NoSIB1(Decoder& dec, CGI_InfoNR_NoSIB1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.ssb_SubcarrierOffset = (int64_t)tmp_value;
    }
    {
        if (Decode_PDCCH_ConfigSIB1(dec, value.pdcch_ConfigSIB1) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CGI_InfoNR_NoSIB1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CGI_InfoNR_NoSIB1(CGI_InfoNR_NoSIB1& value)
{
    Free_PDCCH_ConfigSIB1(value.pdcch_ConfigSIB1);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CGI_InfoNR：ASN.1 CGI-InfoNR；源文件第 5119 行；SEQUENCE。
// Encode_CGI_InfoNR 只读不分配；Decode_CGI_InfoNR 可能 malloc（失败时内部已释放并清零）；Free_CGI_InfoNR 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CGI_InfoNR(Encoder& enc, const CGI_InfoNR& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_plmn_IdentityInfoList);
    enc.WriteBit(value.has_frequencyBandList);
    enc.WriteBit(value.has_noSIB1);
    if (value.has_plmn_IdentityInfoList) {
        Encode_PLMN_IdentityInfoList(enc, value.plmn_IdentityInfoList);
    }
    if (value.has_frequencyBandList) {
        Encode_MultiFrequencyBandListNR(enc, value.frequencyBandList);
    }
    if (value.has_noSIB1) {
        Encode_CGI_InfoNR_NoSIB1(enc, value.noSIB1);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_CGI_InfoNR_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_CGI_InfoNR_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_CGI_InfoNR(Decoder& dec, CGI_InfoNR& value)
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
        if (Decode_PLMN_IdentityInfoList(dec, value.plmn_IdentityInfoList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MultiFrequencyBandListNR(dec, value.frequencyBandList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_CGI_InfoNR_NoSIB1(dec, value.noSIB1) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_CGI_InfoNR_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_CGI_InfoNR_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_CGI_InfoNR(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CGI_InfoNR(CGI_InfoNR& value)
{
    if (value.has_plmn_IdentityInfoList) {
        Free_PLMN_IdentityInfoList(value.plmn_IdentityInfoList);
    }
    if (value.has_frequencyBandList) {
        Free_MultiFrequencyBandListNR(value.frequencyBandList);
    }
    if (value.has_noSIB1) {
        Free_CGI_InfoNR_NoSIB1(value.noSIB1);
    }
    if (value.has_extGroup1) {
        Free_CGI_InfoNR_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_CGI_InfoNR_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
