/* ============================================================================
 * src/generated/codec_part010.cpp — 生成的编解码函数
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
// OverheatingAssistance_r17_ReducedMaxBW_FR2_2_r17：ASN.1 reducedMaxBW-FR2-2-r17；源文件第 2248 行；SEQUENCE。
// Encode_OverheatingAssistance_r17_ReducedMaxBW_FR2_2_r17 只读不分配；Decode_OverheatingAssistance_r17_ReducedMaxBW_FR2_2_r17 可能 malloc（失败时内部已释放并清零）；Free_OverheatingAssistance_r17_ReducedMaxBW_FR2_2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_OverheatingAssistance_r17_ReducedMaxBW_FR2_2_r17(Encoder& enc, const OverheatingAssistance_r17_ReducedMaxBW_FR2_2_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.reducedBW_FR2_2_DL_r17), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.reducedBW_FR2_2_UL_r17), 0, 7);
    return enc.Error();
}

ErrorCode Decode_OverheatingAssistance_r17_ReducedMaxBW_FR2_2_r17(Decoder& dec, OverheatingAssistance_r17_ReducedMaxBW_FR2_2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.reducedBW_FR2_2_DL_r17 = (ReducedAggregatedBandwidth_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.reducedBW_FR2_2_UL_r17 = (ReducedAggregatedBandwidth_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_OverheatingAssistance_r17_ReducedMaxBW_FR2_2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_OverheatingAssistance_r17_ReducedMaxBW_FR2_2_r17(OverheatingAssistance_r17_ReducedMaxBW_FR2_2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// OverheatingAssistance_r17_ReducedMaxMIMO_LayersFR2_2：ASN.1 reducedMaxMIMO-LayersFR2-2；源文件第 2252 行；SEQUENCE。
// Encode_OverheatingAssistance_r17_ReducedMaxMIMO_LayersFR2_2 只读不分配；Decode_OverheatingAssistance_r17_ReducedMaxMIMO_LayersFR2_2 可能 malloc（失败时内部已释放并清零）；Free_OverheatingAssistance_r17_ReducedMaxMIMO_LayersFR2_2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_OverheatingAssistance_r17_ReducedMaxMIMO_LayersFR2_2(Encoder& enc, const OverheatingAssistance_r17_ReducedMaxMIMO_LayersFR2_2& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.reducedMIMO_LayersFR2_2_DL), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.reducedMIMO_LayersFR2_2_UL), 0, 2);
    return enc.Error();
}

ErrorCode Decode_OverheatingAssistance_r17_ReducedMaxMIMO_LayersFR2_2(Decoder& dec, OverheatingAssistance_r17_ReducedMaxMIMO_LayersFR2_2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.reducedMIMO_LayersFR2_2_DL = (MIMO_LayersDL)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.reducedMIMO_LayersFR2_2_UL = (MIMO_LayersUL)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_OverheatingAssistance_r17_ReducedMaxMIMO_LayersFR2_2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_OverheatingAssistance_r17_ReducedMaxMIMO_LayersFR2_2(OverheatingAssistance_r17_ReducedMaxMIMO_LayersFR2_2& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// OverheatingAssistance_r17：ASN.1 OverheatingAssistance-r17；源文件第 2247 行；SEQUENCE。
// Encode_OverheatingAssistance_r17 只读不分配；Decode_OverheatingAssistance_r17 可能 malloc（失败时内部已释放并清零）；Free_OverheatingAssistance_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_OverheatingAssistance_r17(Encoder& enc, const OverheatingAssistance_r17& value)
{
    enc.WriteBit(value.has_reducedMaxBW_FR2_2_r17);
    enc.WriteBit(value.has_reducedMaxMIMO_LayersFR2_2);
    if (value.has_reducedMaxBW_FR2_2_r17) {
        Encode_OverheatingAssistance_r17_ReducedMaxBW_FR2_2_r17(enc, value.reducedMaxBW_FR2_2_r17);
    }
    if (value.has_reducedMaxMIMO_LayersFR2_2) {
        Encode_OverheatingAssistance_r17_ReducedMaxMIMO_LayersFR2_2(enc, value.reducedMaxMIMO_LayersFR2_2);
    }
    return enc.Error();
}

ErrorCode Decode_OverheatingAssistance_r17(Decoder& dec, OverheatingAssistance_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_OverheatingAssistance_r17_ReducedMaxBW_FR2_2_r17(dec, value.reducedMaxBW_FR2_2_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_OverheatingAssistance_r17_ReducedMaxMIMO_LayersFR2_2(dec, value.reducedMaxMIMO_LayersFR2_2) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_OverheatingAssistance_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_OverheatingAssistance_r17(OverheatingAssistance_r17& value)
{
    if (value.has_reducedMaxBW_FR2_2_r17) {
        Free_OverheatingAssistance_r17_ReducedMaxBW_FR2_2_r17(value.reducedMaxBW_FR2_2_r17);
    }
    if (value.has_reducedMaxMIMO_LayersFR2_2) {
        Free_OverheatingAssistance_r17_ReducedMaxMIMO_LayersFR2_2(value.reducedMaxMIMO_LayersFR2_2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MUSIM_GapPriorityPreferenceList_r18：ASN.1 MUSIM-GapPriorityPreferenceList-r18；源文件第 2431 行；SEQUENCE OF。
// Encode_MUSIM_GapPriorityPreferenceList_r18 只读不分配；Decode_MUSIM_GapPriorityPreferenceList_r18 可能 malloc（失败时内部已释放并清零）；Free_MUSIM_GapPriorityPreferenceList_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MUSIM_GapPriorityPreferenceList_r18(Encoder& enc, const MUSIM_GapPriorityPreferenceList_r18& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 3u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 1, 16);
    }
    return enc.Error();
}

ErrorCode Decode_MUSIM_GapPriorityPreferenceList_r18(Decoder& dec, MUSIM_GapPriorityPreferenceList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 3u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 3u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (GapPriority_r17*)std::malloc((std::size_t)value.count * sizeof(GapPriority_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(GapPriority_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
    value.items[i] = (GapPriority_r17)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_MUSIM_GapPriorityPreferenceList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MUSIM_GapPriorityPreferenceList_r18(MUSIM_GapPriorityPreferenceList_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MUSIM_CellToRelease_r18：ASN.1 MUSIM-CellToRelease-r18；源文件第 2446 行；SEQUENCE OF。
// Encode_MUSIM_CellToRelease_r18 只读不分配；Decode_MUSIM_CellToRelease_r18 可能 malloc（失败时内部已释放并清零）；Free_MUSIM_CellToRelease_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MUSIM_CellToRelease_r18(Encoder& enc, const MUSIM_CellToRelease_r18& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 1, 31);
    }
    return enc.Error();
}

ErrorCode Decode_MUSIM_CellToRelease_r18(Decoder& dec, MUSIM_CellToRelease_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SCellIndex*)std::malloc((std::size_t)value.count * sizeof(SCellIndex));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SCellIndex));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 31, tmp_value)) { goto fail; }
    value.items[i] = (SCellIndex)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_MUSIM_CellToRelease_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MUSIM_CellToRelease_r18(MUSIM_CellToRelease_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MUSIM_Cell_SCG_ToRelease_r18：ASN.1 MUSIM-Cell-SCG-ToRelease-r18；源文件第 2441 行；SEQUENCE。
// Encode_MUSIM_Cell_SCG_ToRelease_r18 只读不分配；Decode_MUSIM_Cell_SCG_ToRelease_r18 可能 malloc（失败时内部已释放并清零）；Free_MUSIM_Cell_SCG_ToRelease_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MUSIM_Cell_SCG_ToRelease_r18(Encoder& enc, const MUSIM_Cell_SCG_ToRelease_r18& value)
{
    enc.WriteBit(value.has_musim_CellToRelease_r18);
    enc.WriteBit(value.has_scg_ReleasePreference_r18);
    if (value.has_musim_CellToRelease_r18) {
        Encode_MUSIM_CellToRelease_r18(enc, value.musim_CellToRelease_r18);
    }
    if (value.has_scg_ReleasePreference_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scg_ReleasePreference_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MUSIM_Cell_SCG_ToRelease_r18(Decoder& dec, MUSIM_Cell_SCG_ToRelease_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MUSIM_CellToRelease_r18(dec, value.musim_CellToRelease_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.scg_ReleasePreference_r18 = (MUSIM_Cell_SCG_ToRelease_r18_Scg_ReleasePreference_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MUSIM_Cell_SCG_ToRelease_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MUSIM_Cell_SCG_ToRelease_r18(MUSIM_Cell_SCG_ToRelease_r18& value)
{
    if (value.has_musim_CellToRelease_r18) {
        Free_MUSIM_CellToRelease_r18(value.musim_CellToRelease_r18);
    }
    if (value.has_scg_ReleasePreference_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MUSIM_CellToAffectList_r18：ASN.1 MUSIM-CellToAffectList-r18；源文件第 2448 行；SEQUENCE OF。
// Encode_MUSIM_CellToAffectList_r18 只读不分配；Decode_MUSIM_CellToAffectList_r18 可能 malloc（失败时内部已释放并清零）；Free_MUSIM_CellToAffectList_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MUSIM_CellToAffectList_r18(Encoder& enc, const MUSIM_CellToAffectList_r18& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MUSIM_CellToAffect_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MUSIM_CellToAffectList_r18(Decoder& dec, MUSIM_CellToAffectList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MUSIM_CellToAffect_r18*)std::malloc((std::size_t)value.count * sizeof(MUSIM_CellToAffect_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MUSIM_CellToAffect_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MUSIM_CellToAffect_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MUSIM_CellToAffectList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MUSIM_CellToAffectList_r18(MUSIM_CellToAffectList_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MUSIM_CellToAffect_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MUSIM_AffectedBandsList_r18：ASN.1 MUSIM-AffectedBandsList-r18；源文件第 2458 行；SEQUENCE OF。
// Encode_MUSIM_AffectedBandsList_r18 只读不分配；Decode_MUSIM_AffectedBandsList_r18 可能 malloc（失败时内部已释放并清零）；Free_MUSIM_AffectedBandsList_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MUSIM_AffectedBandsList_r18(Encoder& enc, const MUSIM_AffectedBandsList_r18& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MUSIM_AffectedBands_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MUSIM_AffectedBandsList_r18(Decoder& dec, MUSIM_AffectedBandsList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MUSIM_AffectedBands_r18*)std::malloc((std::size_t)value.count * sizeof(MUSIM_AffectedBands_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MUSIM_AffectedBands_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MUSIM_AffectedBands_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MUSIM_AffectedBandsList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MUSIM_AffectedBandsList_r18(MUSIM_AffectedBandsList_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MUSIM_AffectedBands_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MUSIM_AvoidedBandsList_r18：ASN.1 MUSIM-AvoidedBandsList-r18；源文件第 2472 行；SEQUENCE OF。
// Encode_MUSIM_AvoidedBandsList_r18 只读不分配；Decode_MUSIM_AvoidedBandsList_r18 可能 malloc（失败时内部已释放并清零）；Free_MUSIM_AvoidedBandsList_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MUSIM_AvoidedBandsList_r18(Encoder& enc, const MUSIM_AvoidedBandsList_r18& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MUSIM_AvoidedBands_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MUSIM_AvoidedBandsList_r18(Decoder& dec, MUSIM_AvoidedBandsList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MUSIM_AvoidedBands_r18*)std::malloc((std::size_t)value.count * sizeof(MUSIM_AvoidedBands_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MUSIM_AvoidedBands_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MUSIM_AvoidedBands_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MUSIM_AvoidedBandsList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MUSIM_AvoidedBandsList_r18(MUSIM_AvoidedBandsList_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MUSIM_AvoidedBands_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MUSIM_MaxCC_r18：ASN.1 MUSIM-MaxCC-r18；源文件第 2478 行；SEQUENCE。
// Encode_MUSIM_MaxCC_r18 只读不分配；Decode_MUSIM_MaxCC_r18 可能 malloc（失败时内部已释放并清零）；Free_MUSIM_MaxCC_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MUSIM_MaxCC_r18(Encoder& enc, const MUSIM_MaxCC_r18& value)
{
    enc.WriteBit(value.has_musim_MaxCC_DL_r18);
    enc.WriteBit(value.has_musim_MaxCC_UL_r18);
    if (value.has_musim_MaxCC_DL_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.musim_MaxCC_DL_r18), 1, 32);
    }
    if (value.has_musim_MaxCC_UL_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.musim_MaxCC_UL_r18), 1, 32);
    }
    return enc.Error();
}

ErrorCode Decode_MUSIM_MaxCC_r18(Decoder& dec, MUSIM_MaxCC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.musim_MaxCC_DL_r18 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.musim_MaxCC_UL_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MUSIM_MaxCC_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MUSIM_MaxCC_r18(MUSIM_MaxCC_r18& value)
{
    if (value.has_musim_MaxCC_DL_r18) {
    }
    if (value.has_musim_MaxCC_UL_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MUSIM_CapRestriction_r18：ASN.1 MUSIM-CapRestriction-r18；源文件第 2433 行；SEQUENCE。
// Encode_MUSIM_CapRestriction_r18 只读不分配；Decode_MUSIM_CapRestriction_r18 可能 malloc（失败时内部已释放并清零）；Free_MUSIM_CapRestriction_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MUSIM_CapRestriction_r18(Encoder& enc, const MUSIM_CapRestriction_r18& value)
{
    enc.WriteBit(value.has_musim_Cell_SCG_ToRelease_r18);
    enc.WriteBit(value.has_musim_CellToAffectList_r18);
    enc.WriteBit(value.has_musim_AffectedBandsList_r18);
    enc.WriteBit(value.has_musim_AvoidedBandsList_r18);
    enc.WriteBit(value.has_musim_MaxCC_r18);
    if (value.has_musim_Cell_SCG_ToRelease_r18) {
        Encode_MUSIM_Cell_SCG_ToRelease_r18(enc, value.musim_Cell_SCG_ToRelease_r18);
    }
    if (value.has_musim_CellToAffectList_r18) {
        Encode_MUSIM_CellToAffectList_r18(enc, value.musim_CellToAffectList_r18);
    }
    if (value.has_musim_AffectedBandsList_r18) {
        Encode_MUSIM_AffectedBandsList_r18(enc, value.musim_AffectedBandsList_r18);
    }
    if (value.has_musim_AvoidedBandsList_r18) {
        Encode_MUSIM_AvoidedBandsList_r18(enc, value.musim_AvoidedBandsList_r18);
    }
    if (value.has_musim_MaxCC_r18) {
        Encode_MUSIM_MaxCC_r18(enc, value.musim_MaxCC_r18);
    }
    return enc.Error();
}

ErrorCode Decode_MUSIM_CapRestriction_r18(Decoder& dec, MUSIM_CapRestriction_r18& value)
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
        if (Decode_MUSIM_Cell_SCG_ToRelease_r18(dec, value.musim_Cell_SCG_ToRelease_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MUSIM_CellToAffectList_r18(dec, value.musim_CellToAffectList_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_MUSIM_AffectedBandsList_r18(dec, value.musim_AffectedBandsList_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_MUSIM_AvoidedBandsList_r18(dec, value.musim_AvoidedBandsList_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_MUSIM_MaxCC_r18(dec, value.musim_MaxCC_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MUSIM_CapRestriction_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MUSIM_CapRestriction_r18(MUSIM_CapRestriction_r18& value)
{
    if (value.has_musim_Cell_SCG_ToRelease_r18) {
        Free_MUSIM_Cell_SCG_ToRelease_r18(value.musim_Cell_SCG_ToRelease_r18);
    }
    if (value.has_musim_CellToAffectList_r18) {
        Free_MUSIM_CellToAffectList_r18(value.musim_CellToAffectList_r18);
    }
    if (value.has_musim_AffectedBandsList_r18) {
        Free_MUSIM_AffectedBandsList_r18(value.musim_AffectedBandsList_r18);
    }
    if (value.has_musim_AvoidedBandsList_r18) {
        Free_MUSIM_AvoidedBandsList_r18(value.musim_AvoidedBandsList_r18);
    }
    if (value.has_musim_MaxCC_r18) {
        Free_MUSIM_MaxCC_r18(value.musim_MaxCC_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MUSIM_Assistance_v1800：ASN.1 MUSIM-Assistance-v1800；源文件第 2424 行；SEQUENCE。
// Encode_MUSIM_Assistance_v1800 只读不分配；Decode_MUSIM_Assistance_v1800 可能 malloc（失败时内部已释放并清零）；Free_MUSIM_Assistance_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MUSIM_Assistance_v1800(Encoder& enc, const MUSIM_Assistance_v1800& value)
{
    enc.WriteBit(value.has_musim_GapPriorityPreferenceList_r18);
    enc.WriteBit(value.has_musim_GapKeepPreference_r18);
    enc.WriteBit(value.has_musim_CapRestriction_r18);
    enc.WriteBit(value.has_musim_NeedForGapsInfoNR_r18);
    if (value.has_musim_GapPriorityPreferenceList_r18) {
        Encode_MUSIM_GapPriorityPreferenceList_r18(enc, value.musim_GapPriorityPreferenceList_r18);
    }
    if (value.has_musim_GapKeepPreference_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.musim_GapKeepPreference_r18), 0, 0);
    }
    if (value.has_musim_CapRestriction_r18) {
        Encode_MUSIM_CapRestriction_r18(enc, value.musim_CapRestriction_r18);
    }
    if (value.has_musim_NeedForGapsInfoNR_r18) {
        Encode_NeedForGapsInfoNR_r16(enc, value.musim_NeedForGapsInfoNR_r18);
    }
    return enc.Error();
}

ErrorCode Decode_MUSIM_Assistance_v1800(Decoder& dec, MUSIM_Assistance_v1800& value)
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
        if (Decode_MUSIM_GapPriorityPreferenceList_r18(dec, value.musim_GapPriorityPreferenceList_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.musim_GapKeepPreference_r18 = (MUSIM_Assistance_v1800_Musim_GapKeepPreference_r18)0;
    }
    if (present_2) {
        if (Decode_MUSIM_CapRestriction_r18(dec, value.musim_CapRestriction_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_NeedForGapsInfoNR_r16(dec, value.musim_NeedForGapsInfoNR_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MUSIM_Assistance_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MUSIM_Assistance_v1800(MUSIM_Assistance_v1800& value)
{
    if (value.has_musim_GapPriorityPreferenceList_r18) {
        Free_MUSIM_GapPriorityPreferenceList_r18(value.musim_GapPriorityPreferenceList_r18);
    }
    if (value.has_musim_GapKeepPreference_r18) {
    }
    if (value.has_musim_CapRestriction_r18) {
        Free_MUSIM_CapRestriction_r18(value.musim_CapRestriction_r18);
    }
    if (value.has_musim_NeedForGapsInfoNR_r18) {
        Free_NeedForGapsInfoNR_r16(value.musim_NeedForGapsInfoNR_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// AffectedCarrierFreqRangeList_r18：ASN.1 AffectedCarrierFreqRangeList-r18；源文件第 2534 行；SEQUENCE OF。
// Encode_AffectedCarrierFreqRangeList_r18 只读不分配；Decode_AffectedCarrierFreqRangeList_r18 可能 malloc（失败时内部已释放并清零）；Free_AffectedCarrierFreqRangeList_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_AffectedCarrierFreqRangeList_r18(Encoder& enc, const AffectedCarrierFreqRangeList_r18& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 128u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_AffectedCarrierFreqRange_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_AffectedCarrierFreqRangeList_r18(Decoder& dec, AffectedCarrierFreqRangeList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 128u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 128u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (AffectedCarrierFreqRange_r18*)std::malloc((std::size_t)value.count * sizeof(AffectedCarrierFreqRange_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(AffectedCarrierFreqRange_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_AffectedCarrierFreqRange_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_AffectedCarrierFreqRangeList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AffectedCarrierFreqRangeList_r18(AffectedCarrierFreqRangeList_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_AffectedCarrierFreqRange_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// AffectedCarrierFreqRangeCombList_r18：ASN.1 AffectedCarrierFreqRangeCombList-r18；源文件第 2541 行；SEQUENCE OF。
// Encode_AffectedCarrierFreqRangeCombList_r18 只读不分配；Decode_AffectedCarrierFreqRangeCombList_r18 可能 malloc（失败时内部已释放并清零）；Free_AffectedCarrierFreqRangeCombList_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_AffectedCarrierFreqRangeCombList_r18(Encoder& enc, const AffectedCarrierFreqRangeCombList_r18& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 128u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_AffectedCarrierFreqRangeComb_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_AffectedCarrierFreqRangeCombList_r18(Decoder& dec, AffectedCarrierFreqRangeCombList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 128u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 128u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (AffectedCarrierFreqRangeComb_r18*)std::malloc((std::size_t)value.count * sizeof(AffectedCarrierFreqRangeComb_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(AffectedCarrierFreqRangeComb_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_AffectedCarrierFreqRangeComb_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_AffectedCarrierFreqRangeCombList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AffectedCarrierFreqRangeCombList_r18(AffectedCarrierFreqRangeCombList_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_AffectedCarrierFreqRangeComb_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IDC_FDM_Assistance_r18：ASN.1 IDC-FDM-Assistance-r18；源文件第 2512 行；SEQUENCE。
// Encode_IDC_FDM_Assistance_r18 只读不分配；Decode_IDC_FDM_Assistance_r18 可能 malloc（失败时内部已释放并清零）；Free_IDC_FDM_Assistance_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IDC_FDM_Assistance_r18(Encoder& enc, const IDC_FDM_Assistance_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_affectedCarrierFreqRangeList_r18);
    enc.WriteBit(value.has_affectedCarrierFreqRangeCombList_r18);
    if (value.has_affectedCarrierFreqRangeList_r18) {
        Encode_AffectedCarrierFreqRangeList_r18(enc, value.affectedCarrierFreqRangeList_r18);
    }
    if (value.has_affectedCarrierFreqRangeCombList_r18) {
        Encode_AffectedCarrierFreqRangeCombList_r18(enc, value.affectedCarrierFreqRangeCombList_r18);
    }
    return enc.Error();
}

ErrorCode Decode_IDC_FDM_Assistance_r18(Decoder& dec, IDC_FDM_Assistance_r18& value)
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
        if (Decode_AffectedCarrierFreqRangeList_r18(dec, value.affectedCarrierFreqRangeList_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_AffectedCarrierFreqRangeCombList_r18(dec, value.affectedCarrierFreqRangeCombList_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_IDC_FDM_Assistance_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IDC_FDM_Assistance_r18(IDC_FDM_Assistance_r18& value)
{
    if (value.has_affectedCarrierFreqRangeList_r18) {
        Free_AffectedCarrierFreqRangeList_r18(value.affectedCarrierFreqRangeList_r18);
    }
    if (value.has_affectedCarrierFreqRangeCombList_r18) {
        Free_AffectedCarrierFreqRangeCombList_r18(value.affectedCarrierFreqRangeCombList_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IDC_TDM_Assistance_r18_ActiveDuration_r18：ASN.1 activeDuration-r18；源文件第 2524 行；CHOICE。
// Encode_IDC_TDM_Assistance_r18_ActiveDuration_r18 只读不分配；Decode_IDC_TDM_Assistance_r18_ActiveDuration_r18 可能 malloc（失败时内部已释放并清零）；Free_IDC_TDM_Assistance_r18_ActiveDuration_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IDC_TDM_Assistance_r18_ActiveDuration_r18(Encoder& enc, const IDC_TDM_Assistance_r18_ActiveDuration_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case IDC_TDM_Assistance_r18_ActiveDuration_r18_Tag_subMilliSeconds:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.subMilliSeconds), 1, 31);
        break;
    case IDC_TDM_Assistance_r18_ActiveDuration_r18_Tag_milliSeconds:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.milliSeconds), 0, 31);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_IDC_TDM_Assistance_r18_ActiveDuration_r18(Decoder& dec, IDC_TDM_Assistance_r18_ActiveDuration_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (IDC_TDM_Assistance_r18_ActiveDuration_r18_Tag)root_index;
    switch (value.tag) {
    case IDC_TDM_Assistance_r18_ActiveDuration_r18_Tag_subMilliSeconds: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 31, tmp_value)) { goto fail; }
        value.u.subMilliSeconds = (int64_t)tmp_value;
        break;
    }
    case IDC_TDM_Assistance_r18_ActiveDuration_r18_Tag_milliSeconds: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.milliSeconds = (IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_IDC_TDM_Assistance_r18_ActiveDuration_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IDC_TDM_Assistance_r18_ActiveDuration_r18(IDC_TDM_Assistance_r18_ActiveDuration_r18& value)
{
    switch (value.tag) {
    case IDC_TDM_Assistance_r18_ActiveDuration_r18_Tag_subMilliSeconds:
        break;
    case IDC_TDM_Assistance_r18_ActiveDuration_r18_Tag_milliSeconds:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IDC_TDM_Assistance_r18：ASN.1 IDC-TDM-Assistance-r18；源文件第 2518 行；SEQUENCE。
// Encode_IDC_TDM_Assistance_r18 只读不分配；Decode_IDC_TDM_Assistance_r18 可能 malloc（失败时内部已释放并清零）；Free_IDC_TDM_Assistance_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IDC_TDM_Assistance_r18(Encoder& enc, const IDC_TDM_Assistance_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.cycleLength_r18), 0, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.startOffset_r18), 0, 10239);
    enc.WriteConstrainedInteger((std::int64_t)(value.slotOffset_r18), 0, 31);
    Encode_IDC_TDM_Assistance_r18_ActiveDuration_r18(enc, value.activeDuration_r18);
    return enc.Error();
}

ErrorCode Decode_IDC_TDM_Assistance_r18(Decoder& dec, IDC_TDM_Assistance_r18& value)
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
        if (!dec.ReadConstrainedInteger(0, 32, tmp_value)) { goto fail; }
        value.cycleLength_r18 = (IDC_TDM_Assistance_r18_CycleLength_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10239, tmp_value)) { goto fail; }
        value.startOffset_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.slotOffset_r18 = (int64_t)tmp_value;
    }
    {
        if (Decode_IDC_TDM_Assistance_r18_ActiveDuration_r18(dec, value.activeDuration_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_IDC_TDM_Assistance_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IDC_TDM_Assistance_r18(IDC_TDM_Assistance_r18& value)
{
    Free_IDC_TDM_Assistance_r18_ActiveDuration_r18(value.activeDuration_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UL_TrafficInfo_r18：ASN.1 UL-TrafficInfo-r18；源文件第 2557 行；SEQUENCE OF。
// Encode_UL_TrafficInfo_r18 只读不分配；Decode_UL_TrafficInfo_r18 可能 malloc（失败时内部已释放并清零）；Free_UL_TrafficInfo_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UL_TrafficInfo_r18(Encoder& enc, const UL_TrafficInfo_r18& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 256u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PDU_SessionUL_TrafficInfo_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_UL_TrafficInfo_r18(Decoder& dec, UL_TrafficInfo_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 256u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 256u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PDU_SessionUL_TrafficInfo_r18*)std::malloc((std::size_t)value.count * sizeof(PDU_SessionUL_TrafficInfo_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PDU_SessionUL_TrafficInfo_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PDU_SessionUL_TrafficInfo_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_UL_TrafficInfo_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UL_TrafficInfo_r18(UL_TrafficInfo_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PDU_SessionUL_TrafficInfo_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PRS_UE_AssistanceInformationNR_r18：ASN.1 SL-PRS-UE-AssistanceInformationNR-r18；源文件第 2587 行；SEQUENCE OF。
// Encode_SL_PRS_UE_AssistanceInformationNR_r18 只读不分配；Decode_SL_PRS_UE_AssistanceInformationNR_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_PRS_UE_AssistanceInformationNR_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PRS_UE_AssistanceInformationNR_r18(Encoder& enc, const SL_PRS_UE_AssistanceInformationNR_r18& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 64u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SL_PRS_TxInfo_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PRS_UE_AssistanceInformationNR_r18(Decoder& dec, SL_PRS_UE_AssistanceInformationNR_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 64u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 64u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_PRS_TxInfo_r18*)std::malloc((std::size_t)value.count * sizeof(SL_PRS_TxInfo_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_PRS_TxInfo_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SL_PRS_TxInfo_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_PRS_UE_AssistanceInformationNR_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PRS_UE_AssistanceInformationNR_r18(SL_PRS_UE_AssistanceInformationNR_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SL_PRS_TxInfo_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEAssistanceInformation_v1800_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 2303 行；空 SEQUENCE{}。
// Encode_UEAssistanceInformation_v1800_IEs_NonCriticalExtension 只读不分配；Decode_UEAssistanceInformation_v1800_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_UEAssistanceInformation_v1800_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEAssistanceInformation_v1800_IEs_NonCriticalExtension(Encoder& enc, const UEAssistanceInformation_v1800_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_UEAssistanceInformation_v1800_IEs_NonCriticalExtension(Decoder& dec, UEAssistanceInformation_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEAssistanceInformation_v1800_IEs_NonCriticalExtension(UEAssistanceInformation_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEAssistanceInformation_v1800_IEs：ASN.1 UEAssistanceInformation-v1800-IEs；源文件第 2294 行；SEQUENCE。
// Encode_UEAssistanceInformation_v1800_IEs 只读不分配；Decode_UEAssistanceInformation_v1800_IEs 可能 malloc（失败时内部已释放并清零）；Free_UEAssistanceInformation_v1800_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEAssistanceInformation_v1800_IEs(Encoder& enc, const UEAssistanceInformation_v1800_IEs& value)
{
    enc.WriteBit(value.has_idc_FDM_Assistance_r18);
    enc.WriteBit(value.has_idc_TDM_Assistance_r18);
    enc.WriteBit(value.has_multiRx_PreferenceFR2_r18);
    enc.WriteBit(value.has_musim_Assistance_v1800);
    enc.WriteBit(value.has_flightPathInfoAvailable_r18);
    enc.WriteBit(value.has_ul_TrafficInfo_r18);
    enc.WriteBit(value.has_n3c_RelayUE_InfoList_r18);
    enc.WriteBit(value.has_sl_PRS_UE_AssistanceInformationNR_r18);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_idc_FDM_Assistance_r18) {
        Encode_IDC_FDM_Assistance_r18(enc, value.idc_FDM_Assistance_r18);
    }
    if (value.has_idc_TDM_Assistance_r18) {
        Encode_IDC_TDM_Assistance_r18(enc, value.idc_TDM_Assistance_r18);
    }
    if (value.has_multiRx_PreferenceFR2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multiRx_PreferenceFR2_r18), 0, 1);
    }
    if (value.has_musim_Assistance_v1800) {
        Encode_MUSIM_Assistance_v1800(enc, value.musim_Assistance_v1800);
    }
    if (value.has_flightPathInfoAvailable_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.flightPathInfoAvailable_r18), 0, 0);
    }
    if (value.has_ul_TrafficInfo_r18) {
        Encode_UL_TrafficInfo_r18(enc, value.ul_TrafficInfo_r18);
    }
    if (value.has_n3c_RelayUE_InfoList_r18) {
enc.WriteConstrainedLength(value.n3c_RelayUE_InfoList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.n3c_RelayUE_InfoList_r18_count; ++i) {
    Encode_N3C_RelayUE_Info_r18(enc, value.n3c_RelayUE_InfoList_r18_items[i]);
}
    }
    if (value.has_sl_PRS_UE_AssistanceInformationNR_r18) {
        Encode_SL_PRS_UE_AssistanceInformationNR_r18(enc, value.sl_PRS_UE_AssistanceInformationNR_r18);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UEAssistanceInformation_v1800_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UEAssistanceInformation_v1800_IEs(Decoder& dec, UEAssistanceInformation_v1800_IEs& value)
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
        if (Decode_IDC_FDM_Assistance_r18(dec, value.idc_FDM_Assistance_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_IDC_TDM_Assistance_r18(dec, value.idc_TDM_Assistance_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.multiRx_PreferenceFR2_r18 = (UEAssistanceInformation_v1800_IEs_MultiRx_PreferenceFR2_r18)tmp_value;
    }
    if (present_3) {
        if (Decode_MUSIM_Assistance_v1800(dec, value.musim_Assistance_v1800) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        value.flightPathInfoAvailable_r18 = (UEAssistanceInformation_v1800_IEs_FlightPathInfoAvailable_r18)0;
    }
    if (present_5) {
        if (Decode_UL_TrafficInfo_r18(dec, value.ul_TrafficInfo_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
if (!dec.ReadConstrainedLength(0u, 0u, value.n3c_RelayUE_InfoList_r18_count)) { goto fail; }
if (value.n3c_RelayUE_InfoList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.n3c_RelayUE_InfoList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.n3c_RelayUE_InfoList_r18_count > 0u) {
    value.n3c_RelayUE_InfoList_r18_items = (N3C_RelayUE_Info_r18*)std::malloc((std::size_t)value.n3c_RelayUE_InfoList_r18_count * sizeof(N3C_RelayUE_Info_r18));
    if (value.n3c_RelayUE_InfoList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.n3c_RelayUE_InfoList_r18_items, 0, (std::size_t)value.n3c_RelayUE_InfoList_r18_count * sizeof(N3C_RelayUE_Info_r18));
}
for (std::uint32_t i = 0; i < value.n3c_RelayUE_InfoList_r18_count; ++i) {
    if (Decode_N3C_RelayUE_Info_r18(dec, value.n3c_RelayUE_InfoList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_7) {
        if (Decode_SL_PRS_UE_AssistanceInformationNR_r18(dec, value.sl_PRS_UE_AssistanceInformationNR_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        if (Decode_UEAssistanceInformation_v1800_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UEAssistanceInformation_v1800_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEAssistanceInformation_v1800_IEs(UEAssistanceInformation_v1800_IEs& value)
{
    if (value.has_idc_FDM_Assistance_r18) {
        Free_IDC_FDM_Assistance_r18(value.idc_FDM_Assistance_r18);
    }
    if (value.has_idc_TDM_Assistance_r18) {
        Free_IDC_TDM_Assistance_r18(value.idc_TDM_Assistance_r18);
    }
    if (value.has_multiRx_PreferenceFR2_r18) {
    }
    if (value.has_musim_Assistance_v1800) {
        Free_MUSIM_Assistance_v1800(value.musim_Assistance_v1800);
    }
    if (value.has_flightPathInfoAvailable_r18) {
    }
    if (value.has_ul_TrafficInfo_r18) {
        Free_UL_TrafficInfo_r18(value.ul_TrafficInfo_r18);
    }
    if (value.has_n3c_RelayUE_InfoList_r18) {
        if (value.n3c_RelayUE_InfoList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.n3c_RelayUE_InfoList_r18_count; ++i) {
                Free_N3C_RelayUE_Info_r18(value.n3c_RelayUE_InfoList_r18_items[i]);
            }
            std::free(value.n3c_RelayUE_InfoList_r18_items);
            value.n3c_RelayUE_InfoList_r18_items = nullptr;
        }
        value.n3c_RelayUE_InfoList_r18_count = 0;
    }
    if (value.has_sl_PRS_UE_AssistanceInformationNR_r18) {
        Free_SL_PRS_UE_AssistanceInformationNR_r18(value.sl_PRS_UE_AssistanceInformationNR_r18);
    }
    if (value.has_nonCriticalExtension) {
        Free_UEAssistanceInformation_v1800_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MaxBW_PreferenceFR2_2_r17_ReducedMaxBW_FR2_2_r17：ASN.1 reducedMaxBW-FR2-2-r17；源文件第 2362 行；SEQUENCE。
// Encode_MaxBW_PreferenceFR2_2_r17_ReducedMaxBW_FR2_2_r17 只读不分配；Decode_MaxBW_PreferenceFR2_2_r17_ReducedMaxBW_FR2_2_r17 可能 malloc（失败时内部已释放并清零）；Free_MaxBW_PreferenceFR2_2_r17_ReducedMaxBW_FR2_2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MaxBW_PreferenceFR2_2_r17_ReducedMaxBW_FR2_2_r17(Encoder& enc, const MaxBW_PreferenceFR2_2_r17_ReducedMaxBW_FR2_2_r17& value)
{
    enc.WriteBit(value.has_reducedBW_FR2_2_DL_r17);
    enc.WriteBit(value.has_reducedBW_FR2_2_UL_r17);
    if (value.has_reducedBW_FR2_2_DL_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.reducedBW_FR2_2_DL_r17), 0, 7);
    }
    if (value.has_reducedBW_FR2_2_UL_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.reducedBW_FR2_2_UL_r17), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_MaxBW_PreferenceFR2_2_r17_ReducedMaxBW_FR2_2_r17(Decoder& dec, MaxBW_PreferenceFR2_2_r17_ReducedMaxBW_FR2_2_r17& value)
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
        value.reducedBW_FR2_2_DL_r17 = (ReducedAggregatedBandwidth_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.reducedBW_FR2_2_UL_r17 = (ReducedAggregatedBandwidth_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MaxBW_PreferenceFR2_2_r17_ReducedMaxBW_FR2_2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MaxBW_PreferenceFR2_2_r17_ReducedMaxBW_FR2_2_r17(MaxBW_PreferenceFR2_2_r17_ReducedMaxBW_FR2_2_r17& value)
{
    if (value.has_reducedBW_FR2_2_DL_r17) {
    }
    if (value.has_reducedBW_FR2_2_UL_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MaxBW_PreferenceFR2_2_r17：ASN.1 MaxBW-PreferenceFR2-2-r17；源文件第 2361 行；SEQUENCE。
// Encode_MaxBW_PreferenceFR2_2_r17 只读不分配；Decode_MaxBW_PreferenceFR2_2_r17 可能 malloc（失败时内部已释放并清零）；Free_MaxBW_PreferenceFR2_2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MaxBW_PreferenceFR2_2_r17(Encoder& enc, const MaxBW_PreferenceFR2_2_r17& value)
{
    enc.WriteBit(value.has_reducedMaxBW_FR2_2_r17);
    if (value.has_reducedMaxBW_FR2_2_r17) {
        Encode_MaxBW_PreferenceFR2_2_r17_ReducedMaxBW_FR2_2_r17(enc, value.reducedMaxBW_FR2_2_r17);
    }
    return enc.Error();
}

ErrorCode Decode_MaxBW_PreferenceFR2_2_r17(Decoder& dec, MaxBW_PreferenceFR2_2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_MaxBW_PreferenceFR2_2_r17_ReducedMaxBW_FR2_2_r17(dec, value.reducedMaxBW_FR2_2_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MaxBW_PreferenceFR2_2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MaxBW_PreferenceFR2_2_r17(MaxBW_PreferenceFR2_2_r17& value)
{
    if (value.has_reducedMaxBW_FR2_2_r17) {
        Free_MaxBW_PreferenceFR2_2_r17_ReducedMaxBW_FR2_2_r17(value.reducedMaxBW_FR2_2_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MaxMIMO_LayerPreferenceFR2_2_r17_ReducedMaxMIMO_LayersFR2_2_r17：ASN.1 reducedMaxMIMO-LayersFR2-2-r17；源文件第 2384 行；SEQUENCE。
// Encode_MaxMIMO_LayerPreferenceFR2_2_r17_ReducedMaxMIMO_LayersFR2_2_r17 只读不分配；Decode_MaxMIMO_LayerPreferenceFR2_2_r17_ReducedMaxMIMO_LayersFR2_2_r17 可能 malloc（失败时内部已释放并清零）；Free_MaxMIMO_LayerPreferenceFR2_2_r17_ReducedMaxMIMO_LayersFR2_2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MaxMIMO_LayerPreferenceFR2_2_r17_ReducedMaxMIMO_LayersFR2_2_r17(Encoder& enc, const MaxMIMO_LayerPreferenceFR2_2_r17_ReducedMaxMIMO_LayersFR2_2_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.reducedMIMO_LayersFR2_2_DL_r17), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.reducedMIMO_LayersFR2_2_UL_r17), 1, 4);
    return enc.Error();
}

ErrorCode Decode_MaxMIMO_LayerPreferenceFR2_2_r17_ReducedMaxMIMO_LayersFR2_2_r17(Decoder& dec, MaxMIMO_LayerPreferenceFR2_2_r17_ReducedMaxMIMO_LayersFR2_2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.reducedMIMO_LayersFR2_2_DL_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.reducedMIMO_LayersFR2_2_UL_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MaxMIMO_LayerPreferenceFR2_2_r17_ReducedMaxMIMO_LayersFR2_2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MaxMIMO_LayerPreferenceFR2_2_r17_ReducedMaxMIMO_LayersFR2_2_r17(MaxMIMO_LayerPreferenceFR2_2_r17_ReducedMaxMIMO_LayersFR2_2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MaxMIMO_LayerPreferenceFR2_2_r17：ASN.1 MaxMIMO-LayerPreferenceFR2-2-r17；源文件第 2383 行；SEQUENCE。
// Encode_MaxMIMO_LayerPreferenceFR2_2_r17 只读不分配；Decode_MaxMIMO_LayerPreferenceFR2_2_r17 可能 malloc（失败时内部已释放并清零）；Free_MaxMIMO_LayerPreferenceFR2_2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MaxMIMO_LayerPreferenceFR2_2_r17(Encoder& enc, const MaxMIMO_LayerPreferenceFR2_2_r17& value)
{
    enc.WriteBit(value.has_reducedMaxMIMO_LayersFR2_2_r17);
    if (value.has_reducedMaxMIMO_LayersFR2_2_r17) {
        Encode_MaxMIMO_LayerPreferenceFR2_2_r17_ReducedMaxMIMO_LayersFR2_2_r17(enc, value.reducedMaxMIMO_LayersFR2_2_r17);
    }
    return enc.Error();
}

ErrorCode Decode_MaxMIMO_LayerPreferenceFR2_2_r17(Decoder& dec, MaxMIMO_LayerPreferenceFR2_2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_MaxMIMO_LayerPreferenceFR2_2_r17_ReducedMaxMIMO_LayersFR2_2_r17(dec, value.reducedMaxMIMO_LayersFR2_2_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MaxMIMO_LayerPreferenceFR2_2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MaxMIMO_LayerPreferenceFR2_2_r17(MaxMIMO_LayerPreferenceFR2_2_r17& value)
{
    if (value.has_reducedMaxMIMO_LayersFR2_2_r17) {
        Free_MaxMIMO_LayerPreferenceFR2_2_r17_ReducedMaxMIMO_LayersFR2_2_r17(value.reducedMaxMIMO_LayersFR2_2_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17：ASN.1 preferredK0-r17；源文件第 2406 行；SEQUENCE。
// Encode_MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17 只读不分配；Decode_MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17 可能 malloc（失败时内部已释放并清零）；Free_MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17(Encoder& enc, const MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17& value)
{
    enc.WriteBit(value.has_preferredK0_SCS_480kHz_r17);
    enc.WriteBit(value.has_preferredK0_SCS_960kHz_r17);
    if (value.has_preferredK0_SCS_480kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.preferredK0_SCS_480kHz_r17), 0, 3);
    }
    if (value.has_preferredK0_SCS_960kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.preferredK0_SCS_960kHz_r17), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17(Decoder& dec, MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17& value)
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
        value.preferredK0_SCS_480kHz_r17 = (MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17_PreferredK0_SCS_480kHz_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.preferredK0_SCS_960kHz_r17 = (MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17_PreferredK0_SCS_960kHz_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17(MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17& value)
{
    if (value.has_preferredK0_SCS_480kHz_r17) {
    }
    if (value.has_preferredK0_SCS_960kHz_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17：ASN.1 preferredK2-r17；源文件第 2410 行；SEQUENCE。
// Encode_MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17 只读不分配；Decode_MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17 可能 malloc（失败时内部已释放并清零）；Free_MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17(Encoder& enc, const MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17& value)
{
    enc.WriteBit(value.has_preferredK2_SCS_480kHz_r17);
    enc.WriteBit(value.has_preferredK2_SCS_960kHz_r17);
    if (value.has_preferredK2_SCS_480kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.preferredK2_SCS_480kHz_r17), 0, 3);
    }
    if (value.has_preferredK2_SCS_960kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.preferredK2_SCS_960kHz_r17), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17(Decoder& dec, MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17& value)
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
        value.preferredK2_SCS_480kHz_r17 = (MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17_PreferredK2_SCS_480kHz_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.preferredK2_SCS_960kHz_r17 = (MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17_PreferredK2_SCS_960kHz_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17(MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17& value)
{
    if (value.has_preferredK2_SCS_480kHz_r17) {
    }
    if (value.has_preferredK2_SCS_960kHz_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MinSchedulingOffsetPreferenceExt_r17：ASN.1 MinSchedulingOffsetPreferenceExt-r17；源文件第 2405 行；SEQUENCE。
// Encode_MinSchedulingOffsetPreferenceExt_r17 只读不分配；Decode_MinSchedulingOffsetPreferenceExt_r17 可能 malloc（失败时内部已释放并清零）；Free_MinSchedulingOffsetPreferenceExt_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MinSchedulingOffsetPreferenceExt_r17(Encoder& enc, const MinSchedulingOffsetPreferenceExt_r17& value)
{
    enc.WriteBit(value.has_preferredK0_r17);
    enc.WriteBit(value.has_preferredK2_r17);
    if (value.has_preferredK0_r17) {
        Encode_MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17(enc, value.preferredK0_r17);
    }
    if (value.has_preferredK2_r17) {
        Encode_MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17(enc, value.preferredK2_r17);
    }
    return enc.Error();
}

ErrorCode Decode_MinSchedulingOffsetPreferenceExt_r17(Decoder& dec, MinSchedulingOffsetPreferenceExt_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17(dec, value.preferredK0_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17(dec, value.preferredK2_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MinSchedulingOffsetPreferenceExt_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MinSchedulingOffsetPreferenceExt_r17(MinSchedulingOffsetPreferenceExt_r17& value)
{
    if (value.has_preferredK0_r17) {
        Free_MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17(value.preferredK0_r17);
    }
    if (value.has_preferredK2_r17) {
        Free_MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17(value.preferredK2_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MUSIM_GapPreferenceList_r17：ASN.1 MUSIM-GapPreferenceList-r17；源文件第 2421 行；SEQUENCE OF。
// Encode_MUSIM_GapPreferenceList_r17 只读不分配；Decode_MUSIM_GapPreferenceList_r17 可能 malloc（失败时内部已释放并清零）；Free_MUSIM_GapPreferenceList_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MUSIM_GapPreferenceList_r17(Encoder& enc, const MUSIM_GapPreferenceList_r17& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MUSIM_GapInfo_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MUSIM_GapPreferenceList_r17(Decoder& dec, MUSIM_GapPreferenceList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MUSIM_GapInfo_r17*)std::malloc((std::size_t)value.count * sizeof(MUSIM_GapInfo_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MUSIM_GapInfo_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MUSIM_GapInfo_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MUSIM_GapPreferenceList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MUSIM_GapPreferenceList_r17(MUSIM_GapPreferenceList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MUSIM_GapInfo_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MUSIM_Assistance_r17：ASN.1 MUSIM-Assistance-r17；源文件第 2416 行；SEQUENCE。
// Encode_MUSIM_Assistance_r17 只读不分配；Decode_MUSIM_Assistance_r17 可能 malloc（失败时内部已释放并清零）；Free_MUSIM_Assistance_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MUSIM_Assistance_r17(Encoder& enc, const MUSIM_Assistance_r17& value)
{
    enc.WriteBit(value.has_musim_PreferredRRC_State_r17);
    enc.WriteBit(value.has_musim_GapPreferenceList_r17);
    if (value.has_musim_PreferredRRC_State_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.musim_PreferredRRC_State_r17), 0, 2);
    }
    if (value.has_musim_GapPreferenceList_r17) {
        Encode_MUSIM_GapPreferenceList_r17(enc, value.musim_GapPreferenceList_r17);
    }
    return enc.Error();
}

ErrorCode Decode_MUSIM_Assistance_r17(Decoder& dec, MUSIM_Assistance_r17& value)
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
        value.musim_PreferredRRC_State_r17 = (MUSIM_Assistance_r17_Musim_PreferredRRC_State_r17)tmp_value;
    }
    if (present_1) {
        if (Decode_MUSIM_GapPreferenceList_r17(dec, value.musim_GapPreferenceList_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MUSIM_Assistance_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MUSIM_Assistance_r17(MUSIM_Assistance_r17& value)
{
    if (value.has_musim_PreferredRRC_State_r17) {
    }
    if (value.has_musim_GapPreferenceList_r17) {
        Free_MUSIM_GapPreferenceList_r17(value.musim_GapPreferenceList_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UL_GapFR2_Preference_r17：ASN.1 UL-GapFR2-Preference-r17；源文件第 2506 行；SEQUENCE。
// Encode_UL_GapFR2_Preference_r17 只读不分配；Decode_UL_GapFR2_Preference_r17 可能 malloc（失败时内部已释放并清零）；Free_UL_GapFR2_Preference_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UL_GapFR2_Preference_r17(Encoder& enc, const UL_GapFR2_Preference_r17& value)
{
    enc.WriteBit(value.has_ul_GapFR2_PatternPreference_r17);
    if (value.has_ul_GapFR2_PatternPreference_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_GapFR2_PatternPreference_r17), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_UL_GapFR2_Preference_r17(Decoder& dec, UL_GapFR2_Preference_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.ul_GapFR2_PatternPreference_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UL_GapFR2_Preference_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UL_GapFR2_Preference_r17(UL_GapFR2_Preference_r17& value)
{
    if (value.has_ul_GapFR2_PatternPreference_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PropagationDelayDifference_r17：ASN.1 PropagationDelayDifference-r17；源文件第 2510 行；SEQUENCE OF。
// Encode_PropagationDelayDifference_r17 只读不分配；Decode_PropagationDelayDifference_r17 可能 malloc（失败时内部已释放并清零）；Free_PropagationDelayDifference_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PropagationDelayDifference_r17(Encoder& enc, const PropagationDelayDifference_r17& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), -270, 270);
    }
    return enc.Error();
}

ErrorCode Decode_PropagationDelayDifference_r17(Decoder& dec, PropagationDelayDifference_r17& value)
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
    if (!dec.ReadConstrainedInteger(-270, 270, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PropagationDelayDifference_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PropagationDelayDifference_r17(PropagationDelayDifference_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEAssistanceInformation_v1700_IEs_NonSDT_DataIndication_r17：ASN.1 nonSDT-DataIndication-r17；源文件第 2284 行；SEQUENCE。
// Encode_UEAssistanceInformation_v1700_IEs_NonSDT_DataIndication_r17 只读不分配；Decode_UEAssistanceInformation_v1700_IEs_NonSDT_DataIndication_r17 可能 malloc（失败时内部已释放并清零）；Free_UEAssistanceInformation_v1700_IEs_NonSDT_DataIndication_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEAssistanceInformation_v1700_IEs_NonSDT_DataIndication_r17(Encoder& enc, const UEAssistanceInformation_v1700_IEs_NonSDT_DataIndication_r17& value)
{
    enc.WriteBit(value.has_resumeCause_r17);
    if (value.has_resumeCause_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.resumeCause_r17), 0, 15);
    }
    return enc.Error();
}

ErrorCode Decode_UEAssistanceInformation_v1700_IEs_NonSDT_DataIndication_r17(Decoder& dec, UEAssistanceInformation_v1700_IEs_NonSDT_DataIndication_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.resumeCause_r17 = (ResumeCause)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UEAssistanceInformation_v1700_IEs_NonSDT_DataIndication_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEAssistanceInformation_v1700_IEs_NonSDT_DataIndication_r17(UEAssistanceInformation_v1700_IEs_NonSDT_DataIndication_r17& value)
{
    if (value.has_resumeCause_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEAssistanceInformation_v1700_IEs：ASN.1 UEAssistanceInformation-v1700-IEs；源文件第 2275 行；SEQUENCE。
// Encode_UEAssistanceInformation_v1700_IEs 只读不分配；Decode_UEAssistanceInformation_v1700_IEs 可能 malloc（失败时内部已释放并清零）；Free_UEAssistanceInformation_v1700_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEAssistanceInformation_v1700_IEs(Encoder& enc, const UEAssistanceInformation_v1700_IEs& value)
{
    enc.WriteBit(value.has_ul_GapFR2_Preference_r17);
    enc.WriteBit(value.has_musim_Assistance_r17);
    enc.WriteBit(value.has_overheatingAssistance_r17);
    enc.WriteBit(value.has_maxBW_PreferenceFR2_2_r17);
    enc.WriteBit(value.has_maxMIMO_LayerPreferenceFR2_2_r17);
    enc.WriteBit(value.has_minSchedulingOffsetPreferenceExt_r17);
    enc.WriteBit(value.has_rlm_MeasRelaxationState_r17);
    enc.WriteBit(value.has_bfd_MeasRelaxationState_r17);
    enc.WriteBit(value.has_nonSDT_DataIndication_r17);
    enc.WriteBit(value.has_scg_DeactivationPreference_r17);
    enc.WriteBit(value.has_uplinkData_r17);
    enc.WriteBit(value.has_rrm_MeasRelaxationFulfilment_r17);
    enc.WriteBit(value.has_propagationDelayDifference_r17);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_ul_GapFR2_Preference_r17) {
        Encode_UL_GapFR2_Preference_r17(enc, value.ul_GapFR2_Preference_r17);
    }
    if (value.has_musim_Assistance_r17) {
        Encode_MUSIM_Assistance_r17(enc, value.musim_Assistance_r17);
    }
    if (value.has_overheatingAssistance_r17) {
        Encode_OverheatingAssistance_r17(enc, value.overheatingAssistance_r17);
    }
    if (value.has_maxBW_PreferenceFR2_2_r17) {
        Encode_MaxBW_PreferenceFR2_2_r17(enc, value.maxBW_PreferenceFR2_2_r17);
    }
    if (value.has_maxMIMO_LayerPreferenceFR2_2_r17) {
        Encode_MaxMIMO_LayerPreferenceFR2_2_r17(enc, value.maxMIMO_LayerPreferenceFR2_2_r17);
    }
    if (value.has_minSchedulingOffsetPreferenceExt_r17) {
        Encode_MinSchedulingOffsetPreferenceExt_r17(enc, value.minSchedulingOffsetPreferenceExt_r17);
    }
    if (value.has_rlm_MeasRelaxationState_r17) {
        enc.WriteBool(value.rlm_MeasRelaxationState_r17);
    }
    if (value.has_bfd_MeasRelaxationState_r17) {
        enc.WriteConstrainedBitString(value.bfd_MeasRelaxationState_r17.bytes, value.bfd_MeasRelaxationState_r17.bitLength, 1, 32);
    }
    if (value.has_nonSDT_DataIndication_r17) {
        Encode_UEAssistanceInformation_v1700_IEs_NonSDT_DataIndication_r17(enc, value.nonSDT_DataIndication_r17);
    }
    if (value.has_scg_DeactivationPreference_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scg_DeactivationPreference_r17), 0, 1);
    }
    if (value.has_uplinkData_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uplinkData_r17), 0, 0);
    }
    if (value.has_rrm_MeasRelaxationFulfilment_r17) {
        enc.WriteBool(value.rrm_MeasRelaxationFulfilment_r17);
    }
    if (value.has_propagationDelayDifference_r17) {
        Encode_PropagationDelayDifference_r17(enc, value.propagationDelayDifference_r17);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UEAssistanceInformation_v1800_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UEAssistanceInformation_v1700_IEs(Decoder& dec, UEAssistanceInformation_v1700_IEs& value)
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
        if (Decode_UL_GapFR2_Preference_r17(dec, value.ul_GapFR2_Preference_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MUSIM_Assistance_r17(dec, value.musim_Assistance_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_OverheatingAssistance_r17(dec, value.overheatingAssistance_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_MaxBW_PreferenceFR2_2_r17(dec, value.maxBW_PreferenceFR2_2_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_MaxMIMO_LayerPreferenceFR2_2_r17(dec, value.maxMIMO_LayerPreferenceFR2_2_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_MinSchedulingOffsetPreferenceExt_r17(dec, value.minSchedulingOffsetPreferenceExt_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.rlm_MeasRelaxationState_r17 = tmp_value;
    }
    if (present_7) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 1, 32)) { goto fail; }
        value.bfd_MeasRelaxationState_r17.bytes = string_bytes;
        value.bfd_MeasRelaxationState_r17.bitLength = string_length;
    }
    if (present_8) {
        if (Decode_UEAssistanceInformation_v1700_IEs_NonSDT_DataIndication_r17(dec, value.nonSDT_DataIndication_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.scg_DeactivationPreference_r17 = (UEAssistanceInformation_v1700_IEs_Scg_DeactivationPreference_r17)tmp_value;
    }
    if (present_10) {
        value.uplinkData_r17 = (UEAssistanceInformation_v1700_IEs_UplinkData_r17)0;
    }
    if (present_11) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.rrm_MeasRelaxationFulfilment_r17 = tmp_value;
    }
    if (present_12) {
        if (Decode_PropagationDelayDifference_r17(dec, value.propagationDelayDifference_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_13) {
        if (Decode_UEAssistanceInformation_v1800_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UEAssistanceInformation_v1700_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEAssistanceInformation_v1700_IEs(UEAssistanceInformation_v1700_IEs& value)
{
    if (value.has_ul_GapFR2_Preference_r17) {
        Free_UL_GapFR2_Preference_r17(value.ul_GapFR2_Preference_r17);
    }
    if (value.has_musim_Assistance_r17) {
        Free_MUSIM_Assistance_r17(value.musim_Assistance_r17);
    }
    if (value.has_overheatingAssistance_r17) {
        Free_OverheatingAssistance_r17(value.overheatingAssistance_r17);
    }
    if (value.has_maxBW_PreferenceFR2_2_r17) {
        Free_MaxBW_PreferenceFR2_2_r17(value.maxBW_PreferenceFR2_2_r17);
    }
    if (value.has_maxMIMO_LayerPreferenceFR2_2_r17) {
        Free_MaxMIMO_LayerPreferenceFR2_2_r17(value.maxMIMO_LayerPreferenceFR2_2_r17);
    }
    if (value.has_minSchedulingOffsetPreferenceExt_r17) {
        Free_MinSchedulingOffsetPreferenceExt_r17(value.minSchedulingOffsetPreferenceExt_r17);
    }
    if (value.has_rlm_MeasRelaxationState_r17) {
    }
    if (value.has_bfd_MeasRelaxationState_r17) {
        std::free(value.bfd_MeasRelaxationState_r17.bytes);
        value.bfd_MeasRelaxationState_r17.bytes = nullptr;
        value.bfd_MeasRelaxationState_r17.bitLength = 0;
    }
    if (value.has_nonSDT_DataIndication_r17) {
        Free_UEAssistanceInformation_v1700_IEs_NonSDT_DataIndication_r17(value.nonSDT_DataIndication_r17);
    }
    if (value.has_scg_DeactivationPreference_r17) {
    }
    if (value.has_uplinkData_r17) {
    }
    if (value.has_rrm_MeasRelaxationFulfilment_r17) {
    }
    if (value.has_propagationDelayDifference_r17) {
        Free_PropagationDelayDifference_r17(value.propagationDelayDifference_r17);
    }
    if (value.has_nonCriticalExtension) {
        Free_UEAssistanceInformation_v1800_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// AffectedCarrierFreqList_r16：ASN.1 AffectedCarrierFreqList-r16；源文件第 2312 行；SEQUENCE OF。
// Encode_AffectedCarrierFreqList_r16 只读不分配；Decode_AffectedCarrierFreqList_r16 可能 malloc（失败时内部已释放并清零）；Free_AffectedCarrierFreqList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_AffectedCarrierFreqList_r16(Encoder& enc, const AffectedCarrierFreqList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 128u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_AffectedCarrierFreq_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_AffectedCarrierFreqList_r16(Decoder& dec, AffectedCarrierFreqList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 128u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 128u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (AffectedCarrierFreq_r16*)std::malloc((std::size_t)value.count * sizeof(AffectedCarrierFreq_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(AffectedCarrierFreq_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_AffectedCarrierFreq_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_AffectedCarrierFreqList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AffectedCarrierFreqList_r16(AffectedCarrierFreqList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_AffectedCarrierFreq_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// AffectedCarrierFreqCombList_r16：ASN.1 AffectedCarrierFreqCombList-r16；源文件第 2319 行；SEQUENCE OF。
// Encode_AffectedCarrierFreqCombList_r16 只读不分配；Decode_AffectedCarrierFreqCombList_r16 可能 malloc（失败时内部已释放并清零）；Free_AffectedCarrierFreqCombList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_AffectedCarrierFreqCombList_r16(Encoder& enc, const AffectedCarrierFreqCombList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 128u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_AffectedCarrierFreqComb_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_AffectedCarrierFreqCombList_r16(Decoder& dec, AffectedCarrierFreqCombList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 128u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 128u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (AffectedCarrierFreqComb_r16*)std::malloc((std::size_t)value.count * sizeof(AffectedCarrierFreqComb_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(AffectedCarrierFreqComb_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_AffectedCarrierFreqComb_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_AffectedCarrierFreqCombList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AffectedCarrierFreqCombList_r16(AffectedCarrierFreqCombList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_AffectedCarrierFreqComb_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IDC_Assistance_r16：ASN.1 IDC-Assistance-r16；源文件第 2306 行；SEQUENCE。
// Encode_IDC_Assistance_r16 只读不分配；Decode_IDC_Assistance_r16 可能 malloc（失败时内部已释放并清零）；Free_IDC_Assistance_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IDC_Assistance_r16(Encoder& enc, const IDC_Assistance_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_affectedCarrierFreqList_r16);
    enc.WriteBit(value.has_affectedCarrierFreqCombList_r16);
    if (value.has_affectedCarrierFreqList_r16) {
        Encode_AffectedCarrierFreqList_r16(enc, value.affectedCarrierFreqList_r16);
    }
    if (value.has_affectedCarrierFreqCombList_r16) {
        Encode_AffectedCarrierFreqCombList_r16(enc, value.affectedCarrierFreqCombList_r16);
    }
    return enc.Error();
}

ErrorCode Decode_IDC_Assistance_r16(Decoder& dec, IDC_Assistance_r16& value)
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
        if (Decode_AffectedCarrierFreqList_r16(dec, value.affectedCarrierFreqList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_AffectedCarrierFreqCombList_r16(dec, value.affectedCarrierFreqCombList_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_IDC_Assistance_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IDC_Assistance_r16(IDC_Assistance_r16& value)
{
    if (value.has_affectedCarrierFreqList_r16) {
        Free_AffectedCarrierFreqList_r16(value.affectedCarrierFreqList_r16);
    }
    if (value.has_affectedCarrierFreqCombList_r16) {
        Free_AffectedCarrierFreqCombList_r16(value.affectedCarrierFreqCombList_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DRX_Preference_r16：ASN.1 DRX-Preference-r16；源文件第 2340 行；SEQUENCE。
// Encode_DRX_Preference_r16 只读不分配；Decode_DRX_Preference_r16 可能 malloc（失败时内部已释放并清零）；Free_DRX_Preference_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DRX_Preference_r16(Encoder& enc, const DRX_Preference_r16& value)
{
    enc.WriteBit(value.has_preferredDRX_InactivityTimer_r16);
    enc.WriteBit(value.has_preferredDRX_LongCycle_r16);
    enc.WriteBit(value.has_preferredDRX_ShortCycle_r16);
    enc.WriteBit(value.has_preferredDRX_ShortCycleTimer_r16);
    if (value.has_preferredDRX_InactivityTimer_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.preferredDRX_InactivityTimer_r16), 0, 31);
    }
    if (value.has_preferredDRX_LongCycle_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.preferredDRX_LongCycle_r16), 0, 31);
    }
    if (value.has_preferredDRX_ShortCycle_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.preferredDRX_ShortCycle_r16), 0, 31);
    }
    if (value.has_preferredDRX_ShortCycleTimer_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.preferredDRX_ShortCycleTimer_r16), 1, 16);
    }
    return enc.Error();
}

ErrorCode Decode_DRX_Preference_r16(Decoder& dec, DRX_Preference_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.preferredDRX_InactivityTimer_r16 = (DRX_Preference_r16_PreferredDRX_InactivityTimer_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.preferredDRX_LongCycle_r16 = (DRX_Preference_r16_PreferredDRX_LongCycle_r16)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.preferredDRX_ShortCycle_r16 = (DRX_Preference_r16_PreferredDRX_ShortCycle_r16)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.preferredDRX_ShortCycleTimer_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DRX_Preference_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DRX_Preference_r16(DRX_Preference_r16& value)
{
    if (value.has_preferredDRX_InactivityTimer_r16) {
    }
    if (value.has_preferredDRX_LongCycle_r16) {
    }
    if (value.has_preferredDRX_ShortCycle_r16) {
    }
    if (value.has_preferredDRX_ShortCycleTimer_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MaxBW_Preference_r16：ASN.1 MaxBW-Preference-r16；源文件第 2356 行；SEQUENCE。
// Encode_MaxBW_Preference_r16 只读不分配；Decode_MaxBW_Preference_r16 可能 malloc（失败时内部已释放并清零）；Free_MaxBW_Preference_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MaxBW_Preference_r16(Encoder& enc, const MaxBW_Preference_r16& value)
{
    enc.WriteBit(value.has_reducedMaxBW_FR1_r16);
    enc.WriteBit(value.has_reducedMaxBW_FR2_r16);
    if (value.has_reducedMaxBW_FR1_r16) {
        Encode_ReducedMaxBW_FRx_r16(enc, value.reducedMaxBW_FR1_r16);
    }
    if (value.has_reducedMaxBW_FR2_r16) {
        Encode_ReducedMaxBW_FRx_r16(enc, value.reducedMaxBW_FR2_r16);
    }
    return enc.Error();
}

ErrorCode Decode_MaxBW_Preference_r16(Decoder& dec, MaxBW_Preference_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_ReducedMaxBW_FRx_r16(dec, value.reducedMaxBW_FR1_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_ReducedMaxBW_FRx_r16(dec, value.reducedMaxBW_FR2_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MaxBW_Preference_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MaxBW_Preference_r16(MaxBW_Preference_r16& value)
{
    if (value.has_reducedMaxBW_FR1_r16) {
        Free_ReducedMaxBW_FRx_r16(value.reducedMaxBW_FR1_r16);
    }
    if (value.has_reducedMaxBW_FR2_r16) {
        Free_ReducedMaxBW_FRx_r16(value.reducedMaxBW_FR2_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MaxCC_Preference_r16：ASN.1 MaxCC-Preference-r16；源文件第 2368 行；SEQUENCE。
// Encode_MaxCC_Preference_r16 只读不分配；Decode_MaxCC_Preference_r16 可能 malloc（失败时内部已释放并清零）；Free_MaxCC_Preference_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MaxCC_Preference_r16(Encoder& enc, const MaxCC_Preference_r16& value)
{
    enc.WriteBit(value.has_reducedMaxCCs_r16);
    if (value.has_reducedMaxCCs_r16) {
        Encode_ReducedMaxCCs_r16(enc, value.reducedMaxCCs_r16);
    }
    return enc.Error();
}

ErrorCode Decode_MaxCC_Preference_r16(Decoder& dec, MaxCC_Preference_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_ReducedMaxCCs_r16(dec, value.reducedMaxCCs_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MaxCC_Preference_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MaxCC_Preference_r16(MaxCC_Preference_r16& value)
{
    if (value.has_reducedMaxCCs_r16) {
        Free_ReducedMaxCCs_r16(value.reducedMaxCCs_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR1_r16：ASN.1 reducedMaxMIMO-LayersFR1-r16；源文件第 2373 行；SEQUENCE。
// Encode_MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR1_r16 只读不分配；Decode_MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR1_r16 可能 malloc（失败时内部已释放并清零）；Free_MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR1_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR1_r16(Encoder& enc, const MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR1_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.reducedMIMO_LayersFR1_DL_r16), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.reducedMIMO_LayersFR1_UL_r16), 1, 4);
    return enc.Error();
}

ErrorCode Decode_MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR1_r16(Decoder& dec, MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR1_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.reducedMIMO_LayersFR1_DL_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.reducedMIMO_LayersFR1_UL_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR1_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR1_r16(MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR1_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR2_r16：ASN.1 reducedMaxMIMO-LayersFR2-r16；源文件第 2377 行；SEQUENCE。
// Encode_MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR2_r16 只读不分配；Decode_MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR2_r16 可能 malloc（失败时内部已释放并清零）；Free_MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR2_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR2_r16(Encoder& enc, const MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR2_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.reducedMIMO_LayersFR2_DL_r16), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.reducedMIMO_LayersFR2_UL_r16), 1, 4);
    return enc.Error();
}

ErrorCode Decode_MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR2_r16(Decoder& dec, MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR2_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.reducedMIMO_LayersFR2_DL_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.reducedMIMO_LayersFR2_UL_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR2_r16(MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR2_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MaxMIMO_LayerPreference_r16：ASN.1 MaxMIMO-LayerPreference-r16；源文件第 2372 行；SEQUENCE。
// Encode_MaxMIMO_LayerPreference_r16 只读不分配；Decode_MaxMIMO_LayerPreference_r16 可能 malloc（失败时内部已释放并清零）；Free_MaxMIMO_LayerPreference_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MaxMIMO_LayerPreference_r16(Encoder& enc, const MaxMIMO_LayerPreference_r16& value)
{
    enc.WriteBit(value.has_reducedMaxMIMO_LayersFR1_r16);
    enc.WriteBit(value.has_reducedMaxMIMO_LayersFR2_r16);
    if (value.has_reducedMaxMIMO_LayersFR1_r16) {
        Encode_MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR1_r16(enc, value.reducedMaxMIMO_LayersFR1_r16);
    }
    if (value.has_reducedMaxMIMO_LayersFR2_r16) {
        Encode_MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR2_r16(enc, value.reducedMaxMIMO_LayersFR2_r16);
    }
    return enc.Error();
}

ErrorCode Decode_MaxMIMO_LayerPreference_r16(Decoder& dec, MaxMIMO_LayerPreference_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR1_r16(dec, value.reducedMaxMIMO_LayersFR1_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR2_r16(dec, value.reducedMaxMIMO_LayersFR2_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MaxMIMO_LayerPreference_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MaxMIMO_LayerPreference_r16(MaxMIMO_LayerPreference_r16& value)
{
    if (value.has_reducedMaxMIMO_LayersFR1_r16) {
        Free_MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR1_r16(value.reducedMaxMIMO_LayersFR1_r16);
    }
    if (value.has_reducedMaxMIMO_LayersFR2_r16) {
        Free_MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR2_r16(value.reducedMaxMIMO_LayersFR2_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MinSchedulingOffsetPreference_r16_PreferredK0_r16：ASN.1 preferredK0-r16；源文件第 2391 行；SEQUENCE。
// Encode_MinSchedulingOffsetPreference_r16_PreferredK0_r16 只读不分配；Decode_MinSchedulingOffsetPreference_r16_PreferredK0_r16 可能 malloc（失败时内部已释放并清零）；Free_MinSchedulingOffsetPreference_r16_PreferredK0_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MinSchedulingOffsetPreference_r16_PreferredK0_r16(Encoder& enc, const MinSchedulingOffsetPreference_r16_PreferredK0_r16& value)
{
    enc.WriteBit(value.has_preferredK0_SCS_15kHz_r16);
    enc.WriteBit(value.has_preferredK0_SCS_30kHz_r16);
    enc.WriteBit(value.has_preferredK0_SCS_60kHz_r16);
    enc.WriteBit(value.has_preferredK0_SCS_120kHz_r16);
    if (value.has_preferredK0_SCS_15kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.preferredK0_SCS_15kHz_r16), 0, 3);
    }
    if (value.has_preferredK0_SCS_30kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.preferredK0_SCS_30kHz_r16), 0, 3);
    }
    if (value.has_preferredK0_SCS_60kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.preferredK0_SCS_60kHz_r16), 0, 3);
    }
    if (value.has_preferredK0_SCS_120kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.preferredK0_SCS_120kHz_r16), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_MinSchedulingOffsetPreference_r16_PreferredK0_r16(Decoder& dec, MinSchedulingOffsetPreference_r16_PreferredK0_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.preferredK0_SCS_15kHz_r16 = (MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_15kHz_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.preferredK0_SCS_30kHz_r16 = (MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_30kHz_r16)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.preferredK0_SCS_60kHz_r16 = (MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_60kHz_r16)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.preferredK0_SCS_120kHz_r16 = (MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_120kHz_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MinSchedulingOffsetPreference_r16_PreferredK0_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MinSchedulingOffsetPreference_r16_PreferredK0_r16(MinSchedulingOffsetPreference_r16_PreferredK0_r16& value)
{
    if (value.has_preferredK0_SCS_15kHz_r16) {
    }
    if (value.has_preferredK0_SCS_30kHz_r16) {
    }
    if (value.has_preferredK0_SCS_60kHz_r16) {
    }
    if (value.has_preferredK0_SCS_120kHz_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MinSchedulingOffsetPreference_r16_PreferredK2_r16：ASN.1 preferredK2-r16；源文件第 2397 行；SEQUENCE。
// Encode_MinSchedulingOffsetPreference_r16_PreferredK2_r16 只读不分配；Decode_MinSchedulingOffsetPreference_r16_PreferredK2_r16 可能 malloc（失败时内部已释放并清零）；Free_MinSchedulingOffsetPreference_r16_PreferredK2_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MinSchedulingOffsetPreference_r16_PreferredK2_r16(Encoder& enc, const MinSchedulingOffsetPreference_r16_PreferredK2_r16& value)
{
    enc.WriteBit(value.has_preferredK2_SCS_15kHz_r16);
    enc.WriteBit(value.has_preferredK2_SCS_30kHz_r16);
    enc.WriteBit(value.has_preferredK2_SCS_60kHz_r16);
    enc.WriteBit(value.has_preferredK2_SCS_120kHz_r16);
    if (value.has_preferredK2_SCS_15kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.preferredK2_SCS_15kHz_r16), 0, 3);
    }
    if (value.has_preferredK2_SCS_30kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.preferredK2_SCS_30kHz_r16), 0, 3);
    }
    if (value.has_preferredK2_SCS_60kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.preferredK2_SCS_60kHz_r16), 0, 3);
    }
    if (value.has_preferredK2_SCS_120kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.preferredK2_SCS_120kHz_r16), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_MinSchedulingOffsetPreference_r16_PreferredK2_r16(Decoder& dec, MinSchedulingOffsetPreference_r16_PreferredK2_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.preferredK2_SCS_15kHz_r16 = (MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_15kHz_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.preferredK2_SCS_30kHz_r16 = (MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_30kHz_r16)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.preferredK2_SCS_60kHz_r16 = (MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_60kHz_r16)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.preferredK2_SCS_120kHz_r16 = (MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_120kHz_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MinSchedulingOffsetPreference_r16_PreferredK2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MinSchedulingOffsetPreference_r16_PreferredK2_r16(MinSchedulingOffsetPreference_r16_PreferredK2_r16& value)
{
    if (value.has_preferredK2_SCS_15kHz_r16) {
    }
    if (value.has_preferredK2_SCS_30kHz_r16) {
    }
    if (value.has_preferredK2_SCS_60kHz_r16) {
    }
    if (value.has_preferredK2_SCS_120kHz_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MinSchedulingOffsetPreference_r16：ASN.1 MinSchedulingOffsetPreference-r16；源文件第 2390 行；SEQUENCE。
// Encode_MinSchedulingOffsetPreference_r16 只读不分配；Decode_MinSchedulingOffsetPreference_r16 可能 malloc（失败时内部已释放并清零）；Free_MinSchedulingOffsetPreference_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MinSchedulingOffsetPreference_r16(Encoder& enc, const MinSchedulingOffsetPreference_r16& value)
{
    enc.WriteBit(value.has_preferredK0_r16);
    enc.WriteBit(value.has_preferredK2_r16);
    if (value.has_preferredK0_r16) {
        Encode_MinSchedulingOffsetPreference_r16_PreferredK0_r16(enc, value.preferredK0_r16);
    }
    if (value.has_preferredK2_r16) {
        Encode_MinSchedulingOffsetPreference_r16_PreferredK2_r16(enc, value.preferredK2_r16);
    }
    return enc.Error();
}

ErrorCode Decode_MinSchedulingOffsetPreference_r16(Decoder& dec, MinSchedulingOffsetPreference_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MinSchedulingOffsetPreference_r16_PreferredK0_r16(dec, value.preferredK0_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MinSchedulingOffsetPreference_r16_PreferredK2_r16(dec, value.preferredK2_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MinSchedulingOffsetPreference_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MinSchedulingOffsetPreference_r16(MinSchedulingOffsetPreference_r16& value)
{
    if (value.has_preferredK0_r16) {
        Free_MinSchedulingOffsetPreference_r16_PreferredK0_r16(value.preferredK0_r16);
    }
    if (value.has_preferredK2_r16) {
        Free_MinSchedulingOffsetPreference_r16_PreferredK2_r16(value.preferredK2_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ReleasePreference_r16：ASN.1 ReleasePreference-r16；源文件第 2483 行；SEQUENCE。
// Encode_ReleasePreference_r16 只读不分配；Decode_ReleasePreference_r16 可能 malloc（失败时内部已释放并清零）；Free_ReleasePreference_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ReleasePreference_r16(Encoder& enc, const ReleasePreference_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.preferredRRC_State_r16), 0, 3);
    return enc.Error();
}

ErrorCode Decode_ReleasePreference_r16(Decoder& dec, ReleasePreference_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.preferredRRC_State_r16 = (ReleasePreference_r16_PreferredRRC_State_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReleasePreference_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReleasePreference_r16(ReleasePreference_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_UE_AssistanceInformationNR_r16：ASN.1 SL-UE-AssistanceInformationNR-r16；源文件第 2497 行；SEQUENCE OF。
// Encode_SL_UE_AssistanceInformationNR_r16 只读不分配；Decode_SL_UE_AssistanceInformationNR_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_UE_AssistanceInformationNR_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_UE_AssistanceInformationNR_r16(Encoder& enc, const SL_UE_AssistanceInformationNR_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SL_TrafficPatternInfo_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SL_UE_AssistanceInformationNR_r16(Decoder& dec, SL_UE_AssistanceInformationNR_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_TrafficPatternInfo_r16*)std::malloc((std::size_t)value.count * sizeof(SL_TrafficPatternInfo_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_TrafficPatternInfo_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SL_TrafficPatternInfo_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_UE_AssistanceInformationNR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_UE_AssistanceInformationNR_r16(SL_UE_AssistanceInformationNR_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SL_TrafficPatternInfo_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEAssistanceInformation_v1610_IEs：ASN.1 UEAssistanceInformation-v1610-IEs；源文件第 2262 行；SEQUENCE。
// Encode_UEAssistanceInformation_v1610_IEs 只读不分配；Decode_UEAssistanceInformation_v1610_IEs 可能 malloc（失败时内部已释放并清零）；Free_UEAssistanceInformation_v1610_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEAssistanceInformation_v1610_IEs(Encoder& enc, const UEAssistanceInformation_v1610_IEs& value)
{
    enc.WriteBit(value.has_idc_Assistance_r16);
    enc.WriteBit(value.has_drx_Preference_r16);
    enc.WriteBit(value.has_maxBW_Preference_r16);
    enc.WriteBit(value.has_maxCC_Preference_r16);
    enc.WriteBit(value.has_maxMIMO_LayerPreference_r16);
    enc.WriteBit(value.has_minSchedulingOffsetPreference_r16);
    enc.WriteBit(value.has_releasePreference_r16);
    enc.WriteBit(value.has_sl_UE_AssistanceInformationNR_r16);
    enc.WriteBit(value.has_referenceTimeInfoPreference_r16);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_idc_Assistance_r16) {
        Encode_IDC_Assistance_r16(enc, value.idc_Assistance_r16);
    }
    if (value.has_drx_Preference_r16) {
        Encode_DRX_Preference_r16(enc, value.drx_Preference_r16);
    }
    if (value.has_maxBW_Preference_r16) {
        Encode_MaxBW_Preference_r16(enc, value.maxBW_Preference_r16);
    }
    if (value.has_maxCC_Preference_r16) {
        Encode_MaxCC_Preference_r16(enc, value.maxCC_Preference_r16);
    }
    if (value.has_maxMIMO_LayerPreference_r16) {
        Encode_MaxMIMO_LayerPreference_r16(enc, value.maxMIMO_LayerPreference_r16);
    }
    if (value.has_minSchedulingOffsetPreference_r16) {
        Encode_MinSchedulingOffsetPreference_r16(enc, value.minSchedulingOffsetPreference_r16);
    }
    if (value.has_releasePreference_r16) {
        Encode_ReleasePreference_r16(enc, value.releasePreference_r16);
    }
    if (value.has_sl_UE_AssistanceInformationNR_r16) {
        Encode_SL_UE_AssistanceInformationNR_r16(enc, value.sl_UE_AssistanceInformationNR_r16);
    }
    if (value.has_referenceTimeInfoPreference_r16) {
        enc.WriteBool(value.referenceTimeInfoPreference_r16);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UEAssistanceInformation_v1700_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UEAssistanceInformation_v1610_IEs(Decoder& dec, UEAssistanceInformation_v1610_IEs& value)
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
        if (Decode_IDC_Assistance_r16(dec, value.idc_Assistance_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_DRX_Preference_r16(dec, value.drx_Preference_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_MaxBW_Preference_r16(dec, value.maxBW_Preference_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_MaxCC_Preference_r16(dec, value.maxCC_Preference_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_MaxMIMO_LayerPreference_r16(dec, value.maxMIMO_LayerPreference_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_MinSchedulingOffsetPreference_r16(dec, value.minSchedulingOffsetPreference_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_ReleasePreference_r16(dec, value.releasePreference_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        if (Decode_SL_UE_AssistanceInformationNR_r16(dec, value.sl_UE_AssistanceInformationNR_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.referenceTimeInfoPreference_r16 = tmp_value;
    }
    if (present_9) {
        if (Decode_UEAssistanceInformation_v1700_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UEAssistanceInformation_v1610_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEAssistanceInformation_v1610_IEs(UEAssistanceInformation_v1610_IEs& value)
{
    if (value.has_idc_Assistance_r16) {
        Free_IDC_Assistance_r16(value.idc_Assistance_r16);
    }
    if (value.has_drx_Preference_r16) {
        Free_DRX_Preference_r16(value.drx_Preference_r16);
    }
    if (value.has_maxBW_Preference_r16) {
        Free_MaxBW_Preference_r16(value.maxBW_Preference_r16);
    }
    if (value.has_maxCC_Preference_r16) {
        Free_MaxCC_Preference_r16(value.maxCC_Preference_r16);
    }
    if (value.has_maxMIMO_LayerPreference_r16) {
        Free_MaxMIMO_LayerPreference_r16(value.maxMIMO_LayerPreference_r16);
    }
    if (value.has_minSchedulingOffsetPreference_r16) {
        Free_MinSchedulingOffsetPreference_r16(value.minSchedulingOffsetPreference_r16);
    }
    if (value.has_releasePreference_r16) {
        Free_ReleasePreference_r16(value.releasePreference_r16);
    }
    if (value.has_sl_UE_AssistanceInformationNR_r16) {
        Free_SL_UE_AssistanceInformationNR_r16(value.sl_UE_AssistanceInformationNR_r16);
    }
    if (value.has_referenceTimeInfoPreference_r16) {
    }
    if (value.has_nonCriticalExtension) {
        Free_UEAssistanceInformation_v1700_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEAssistanceInformation_v1540_IEs：ASN.1 UEAssistanceInformation-v1540-IEs；源文件第 2229 行；SEQUENCE。
// Encode_UEAssistanceInformation_v1540_IEs 只读不分配；Decode_UEAssistanceInformation_v1540_IEs 可能 malloc（失败时内部已释放并清零）；Free_UEAssistanceInformation_v1540_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEAssistanceInformation_v1540_IEs(Encoder& enc, const UEAssistanceInformation_v1540_IEs& value)
{
    enc.WriteBit(value.has_overheatingAssistance);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_overheatingAssistance) {
        Encode_OverheatingAssistance(enc, value.overheatingAssistance);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UEAssistanceInformation_v1610_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UEAssistanceInformation_v1540_IEs(Decoder& dec, UEAssistanceInformation_v1540_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_OverheatingAssistance(dec, value.overheatingAssistance) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_UEAssistanceInformation_v1610_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UEAssistanceInformation_v1540_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEAssistanceInformation_v1540_IEs(UEAssistanceInformation_v1540_IEs& value)
{
    if (value.has_overheatingAssistance) {
        Free_OverheatingAssistance(value.overheatingAssistance);
    }
    if (value.has_nonCriticalExtension) {
        Free_UEAssistanceInformation_v1610_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEAssistanceInformation_IEs：ASN.1 UEAssistanceInformation-IEs；源文件第 2216 行；SEQUENCE。
// Encode_UEAssistanceInformation_IEs 只读不分配；Decode_UEAssistanceInformation_IEs 可能 malloc（失败时内部已释放并清零）；Free_UEAssistanceInformation_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEAssistanceInformation_IEs(Encoder& enc, const UEAssistanceInformation_IEs& value)
{
    enc.WriteBit(value.has_delayBudgetReport);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_delayBudgetReport) {
        Encode_DelayBudgetReport(enc, value.delayBudgetReport);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UEAssistanceInformation_v1540_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UEAssistanceInformation_IEs(Decoder& dec, UEAssistanceInformation_IEs& value)
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
        if (Decode_DelayBudgetReport(dec, value.delayBudgetReport) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_2) {
        if (Decode_UEAssistanceInformation_v1540_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UEAssistanceInformation_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEAssistanceInformation_IEs(UEAssistanceInformation_IEs& value)
{
    if (value.has_delayBudgetReport) {
        Free_DelayBudgetReport(value.delayBudgetReport);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_UEAssistanceInformation_v1540_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEAssistanceInformation_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 2212 行；空 SEQUENCE{}。
// Encode_UEAssistanceInformation_CriticalExtensionsFuture 只读不分配；Decode_UEAssistanceInformation_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_UEAssistanceInformation_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEAssistanceInformation_CriticalExtensionsFuture(Encoder& enc, const UEAssistanceInformation_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_UEAssistanceInformation_CriticalExtensionsFuture(Decoder& dec, UEAssistanceInformation_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEAssistanceInformation_CriticalExtensionsFuture(UEAssistanceInformation_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEAssistanceInformation_CriticalExtensions：ASN.1 criticalExtensions；源文件第 2210 行；CHOICE。
// Encode_UEAssistanceInformation_CriticalExtensions 只读不分配；Decode_UEAssistanceInformation_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_UEAssistanceInformation_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEAssistanceInformation_CriticalExtensions(Encoder& enc, const UEAssistanceInformation_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case UEAssistanceInformation_CriticalExtensions_Tag_ueAssistanceInformation:
        Encode_UEAssistanceInformation_IEs(enc, value.u.ueAssistanceInformation);
        break;
    case UEAssistanceInformation_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_UEAssistanceInformation_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_UEAssistanceInformation_CriticalExtensions(Decoder& dec, UEAssistanceInformation_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (UEAssistanceInformation_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case UEAssistanceInformation_CriticalExtensions_Tag_ueAssistanceInformation: {
        if (Decode_UEAssistanceInformation_IEs(dec, value.u.ueAssistanceInformation) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case UEAssistanceInformation_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_UEAssistanceInformation_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UEAssistanceInformation_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEAssistanceInformation_CriticalExtensions(UEAssistanceInformation_CriticalExtensions& value)
{
    switch (value.tag) {
    case UEAssistanceInformation_CriticalExtensions_Tag_ueAssistanceInformation:
        Free_UEAssistanceInformation_IEs(value.u.ueAssistanceInformation);
        break;
    case UEAssistanceInformation_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_UEAssistanceInformation_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEAssistanceInformation：ASN.1 UEAssistanceInformation；源文件第 2209 行；SEQUENCE。
// Encode_UEAssistanceInformation 只读不分配；Decode_UEAssistanceInformation 可能 malloc（失败时内部已释放并清零）；Free_UEAssistanceInformation 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEAssistanceInformation(Encoder& enc, const UEAssistanceInformation& value)
{
    Encode_UEAssistanceInformation_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_UEAssistanceInformation(Decoder& dec, UEAssistanceInformation& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_UEAssistanceInformation_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UEAssistanceInformation(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEAssistanceInformation(UEAssistanceInformation& value)
{
    Free_UEAssistanceInformation_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// AffectedCarrierFreq_r16：ASN.1 AffectedCarrierFreq-r16；源文件第 2314 行；SEQUENCE。
// Encode_AffectedCarrierFreq_r16 只读不分配；Decode_AffectedCarrierFreq_r16 可能 malloc（失败时内部已释放并清零）；Free_AffectedCarrierFreq_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_AffectedCarrierFreq_r16(Encoder& enc, const AffectedCarrierFreq_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierFreq_r16), 0, 3279165);
    enc.WriteConstrainedInteger((std::int64_t)(value.interferenceDirection_r16), 0, 3);
    return enc.Error();
}

ErrorCode Decode_AffectedCarrierFreq_r16(Decoder& dec, AffectedCarrierFreq_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.carrierFreq_r16 = (ARFCN_ValueNR)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.interferenceDirection_r16 = (AffectedCarrierFreq_r16_InterferenceDirection_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_AffectedCarrierFreq_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AffectedCarrierFreq_r16(AffectedCarrierFreq_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// VictimSystemType_r16_ExtGroup1：ASN.1 VictimSystemType_r16_ExtGroup1；源文件第 2335 行；扩展添加组 [[ ]]。
// Encode_VictimSystemType_r16_ExtGroup1 只读不分配；Decode_VictimSystemType_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_VictimSystemType_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_VictimSystemType_r16_ExtGroup1(Encoder& enc, const VictimSystemType_r16_ExtGroup1& value)
{
    enc.WriteBit(value.has_uwb_r18);
    if (value.has_uwb_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uwb_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_VictimSystemType_r16_ExtGroup1(Decoder& dec, VictimSystemType_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.uwb_r18 = (VictimSystemType_r16_ExtGroup1_Uwb_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_VictimSystemType_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_VictimSystemType_r16_ExtGroup1(VictimSystemType_r16_ExtGroup1& value)
{
    if (value.has_uwb_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// VictimSystemType_r16：ASN.1 VictimSystemType-r16；源文件第 2326 行；SEQUENCE。
// Encode_VictimSystemType_r16 只读不分配；Decode_VictimSystemType_r16 可能 malloc（失败时内部已释放并清零）；Free_VictimSystemType_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_VictimSystemType_r16(Encoder& enc, const VictimSystemType_r16& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_gps_r16);
    enc.WriteBit(value.has_glonass_r16);
    enc.WriteBit(value.has_bds_r16);
    enc.WriteBit(value.has_galileo_r16);
    enc.WriteBit(value.has_navIC_r16);
    enc.WriteBit(value.has_wlan_r16);
    enc.WriteBit(value.has_bluetooth_r16);
    if (value.has_gps_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.gps_r16), 0, 0);
    }
    if (value.has_glonass_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.glonass_r16), 0, 0);
    }
    if (value.has_bds_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.bds_r16), 0, 0);
    }
    if (value.has_galileo_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.galileo_r16), 0, 0);
    }
    if (value.has_navIC_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.navIC_r16), 0, 0);
    }
    if (value.has_wlan_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.wlan_r16), 0, 0);
    }
    if (value.has_bluetooth_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.bluetooth_r16), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_VictimSystemType_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_VictimSystemType_r16(Decoder& dec, VictimSystemType_r16& value)
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
        value.gps_r16 = (VictimSystemType_r16_Gps_r16)0;
    }
    if (present_1) {
        value.glonass_r16 = (VictimSystemType_r16_Glonass_r16)0;
    }
    if (present_2) {
        value.bds_r16 = (VictimSystemType_r16_Bds_r16)0;
    }
    if (present_3) {
        value.galileo_r16 = (VictimSystemType_r16_Galileo_r16)0;
    }
    if (present_4) {
        value.navIC_r16 = (VictimSystemType_r16_NavIC_r16)0;
    }
    if (present_5) {
        value.wlan_r16 = (VictimSystemType_r16_Wlan_r16)0;
    }
    if (present_6) {
        value.bluetooth_r16 = (VictimSystemType_r16_Bluetooth_r16)0;
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
    if (Decode_VictimSystemType_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_VictimSystemType_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_VictimSystemType_r16(VictimSystemType_r16& value)
{
    if (value.has_gps_r16) {
    }
    if (value.has_glonass_r16) {
    }
    if (value.has_bds_r16) {
    }
    if (value.has_galileo_r16) {
    }
    if (value.has_navIC_r16) {
    }
    if (value.has_wlan_r16) {
    }
    if (value.has_bluetooth_r16) {
    }
    if (value.has_extGroup1) {
        Free_VictimSystemType_r16_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// AffectedCarrierFreqComb_r16：ASN.1 AffectedCarrierFreqComb-r16；源文件第 2321 行；SEQUENCE。
// Encode_AffectedCarrierFreqComb_r16 只读不分配；Decode_AffectedCarrierFreqComb_r16 可能 malloc（失败时内部已释放并清零）；Free_AffectedCarrierFreqComb_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_AffectedCarrierFreqComb_r16(Encoder& enc, const AffectedCarrierFreqComb_r16& value)
{
    enc.WriteBit(value.has_affectedCarrierFreqComb_r16);
    if (value.has_affectedCarrierFreqComb_r16) {
enc.WriteConstrainedLength(value.affectedCarrierFreqComb_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.affectedCarrierFreqComb_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.affectedCarrierFreqComb_r16_items[i]), 0, 3279165);
}
    }
    Encode_VictimSystemType_r16(enc, value.victimSystemType_r16);
    return enc.Error();
}

ErrorCode Decode_AffectedCarrierFreqComb_r16(Decoder& dec, AffectedCarrierFreqComb_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.affectedCarrierFreqComb_r16_count)) { goto fail; }
if (value.affectedCarrierFreqComb_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.affectedCarrierFreqComb_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.affectedCarrierFreqComb_r16_count > 0u) {
    value.affectedCarrierFreqComb_r16_items = (ARFCN_ValueNR*)std::malloc((std::size_t)value.affectedCarrierFreqComb_r16_count * sizeof(ARFCN_ValueNR));
    if (value.affectedCarrierFreqComb_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.affectedCarrierFreqComb_r16_items, 0, (std::size_t)value.affectedCarrierFreqComb_r16_count * sizeof(ARFCN_ValueNR));
}
for (std::uint32_t i = 0; i < value.affectedCarrierFreqComb_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
    value.affectedCarrierFreqComb_r16_items[i] = (ARFCN_ValueNR)tmp_value;
}
    }
    {
        if (Decode_VictimSystemType_r16(dec, value.victimSystemType_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_AffectedCarrierFreqComb_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AffectedCarrierFreqComb_r16(AffectedCarrierFreqComb_r16& value)
{
    if (value.has_affectedCarrierFreqComb_r16) {
        if (value.affectedCarrierFreqComb_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.affectedCarrierFreqComb_r16_count; ++i) {
            }
            std::free(value.affectedCarrierFreqComb_r16_items);
            value.affectedCarrierFreqComb_r16_items = nullptr;
        }
        value.affectedCarrierFreqComb_r16_count = 0;
    }
    Free_VictimSystemType_r16(value.victimSystemType_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SupportedBandwidth：ASN.1 SupportedBandwidth；源文件第 20792 行；CHOICE。
// Encode_SupportedBandwidth 只读不分配；Decode_SupportedBandwidth 可能 malloc（失败时内部已释放并清零）；Free_SupportedBandwidth 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SupportedBandwidth(Encoder& enc, const SupportedBandwidth& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SupportedBandwidth_Tag_fr1:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.fr1), 0, 10);
        break;
    case SupportedBandwidth_Tag_fr2:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.fr2), 0, 3);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SupportedBandwidth(Decoder& dec, SupportedBandwidth& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SupportedBandwidth_Tag)root_index;
    switch (value.tag) {
    case SupportedBandwidth_Tag_fr1: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.u.fr1 = (SupportedBandwidth_Fr1)tmp_value;
        break;
    }
    case SupportedBandwidth_Tag_fr2: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.fr2 = (SupportedBandwidth_Fr2)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SupportedBandwidth(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SupportedBandwidth(SupportedBandwidth& value)
{
    switch (value.tag) {
    case SupportedBandwidth_Tag_fr1:
        break;
    case SupportedBandwidth_Tag_fr2:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MUSIM_CellToAffect_r18：ASN.1 MUSIM-CellToAffect-r18；源文件第 2450 行；SEQUENCE。
// Encode_MUSIM_CellToAffect_r18 只读不分配；Decode_MUSIM_CellToAffect_r18 可能 malloc（失败时内部已释放并清零）；Free_MUSIM_CellToAffect_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MUSIM_CellToAffect_r18(Encoder& enc, const MUSIM_CellToAffect_r18& value)
{
    enc.WriteBit(value.has_musim_MIMO_Layers_DL_r18);
    enc.WriteBit(value.has_musim_MIMO_Layers_UL_r18);
    enc.WriteBit(value.has_musim_SupportedBandwidth_DL_r18);
    enc.WriteBit(value.has_musim_SupportedBandwidth_UL_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.musim_ServCellIndex_r18), 0, 31);
    if (value.has_musim_MIMO_Layers_DL_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.musim_MIMO_Layers_DL_r18), 1, 8);
    }
    if (value.has_musim_MIMO_Layers_UL_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.musim_MIMO_Layers_UL_r18), 1, 4);
    }
    if (value.has_musim_SupportedBandwidth_DL_r18) {
        Encode_SupportedBandwidth(enc, value.musim_SupportedBandwidth_DL_r18);
    }
    if (value.has_musim_SupportedBandwidth_UL_r18) {
        Encode_SupportedBandwidth(enc, value.musim_SupportedBandwidth_UL_r18);
    }
    return enc.Error();
}

ErrorCode Decode_MUSIM_CellToAffect_r18(Decoder& dec, MUSIM_CellToAffect_r18& value)
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
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.musim_ServCellIndex_r18 = (ServCellIndex)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.musim_MIMO_Layers_DL_r18 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.musim_MIMO_Layers_UL_r18 = (int64_t)tmp_value;
    }
    if (present_2) {
        if (Decode_SupportedBandwidth(dec, value.musim_SupportedBandwidth_DL_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SupportedBandwidth(dec, value.musim_SupportedBandwidth_UL_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MUSIM_CellToAffect_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MUSIM_CellToAffect_r18(MUSIM_CellToAffect_r18& value)
{
    if (value.has_musim_MIMO_Layers_DL_r18) {
    }
    if (value.has_musim_MIMO_Layers_UL_r18) {
    }
    if (value.has_musim_SupportedBandwidth_DL_r18) {
        Free_SupportedBandwidth(value.musim_SupportedBandwidth_DL_r18);
    }
    if (value.has_musim_SupportedBandwidth_UL_r18) {
        Free_SupportedBandwidth(value.musim_SupportedBandwidth_UL_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MUSIM_AffectedBands_r18：ASN.1 MUSIM-AffectedBands-r18；源文件第 2460 行；SEQUENCE OF。
// Encode_MUSIM_AffectedBands_r18 只读不分配；Decode_MUSIM_AffectedBands_r18 可能 malloc（失败时内部已释放并清零）；Free_MUSIM_AffectedBands_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MUSIM_AffectedBands_r18(Encoder& enc, const MUSIM_AffectedBands_r18& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MUSIM_CapabilityRestrictedBandParameters_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MUSIM_AffectedBands_r18(Decoder& dec, MUSIM_AffectedBands_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MUSIM_CapabilityRestrictedBandParameters_r18*)std::malloc((std::size_t)value.count * sizeof(MUSIM_CapabilityRestrictedBandParameters_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MUSIM_CapabilityRestrictedBandParameters_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MUSIM_CapabilityRestrictedBandParameters_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MUSIM_AffectedBands_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MUSIM_AffectedBands_r18(MUSIM_AffectedBands_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MUSIM_CapabilityRestrictedBandParameters_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MUSIM_CapabilityRestrictedBandParameters_r18_Musim_CapabilityRestricted_r18：ASN.1 musim-CapabilityRestricted-r18；源文件第 2464 行；SEQUENCE。
// Encode_MUSIM_CapabilityRestrictedBandParameters_r18_Musim_CapabilityRestricted_r18 只读不分配；Decode_MUSIM_CapabilityRestrictedBandParameters_r18_Musim_CapabilityRestricted_r18 可能 malloc（失败时内部已释放并清零）；Free_MUSIM_CapabilityRestrictedBandParameters_r18_Musim_CapabilityRestricted_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MUSIM_CapabilityRestrictedBandParameters_r18_Musim_CapabilityRestricted_r18(Encoder& enc, const MUSIM_CapabilityRestrictedBandParameters_r18_Musim_CapabilityRestricted_r18& value)
{
    enc.WriteBit(value.has_musim_MIMO_Layers_DL_r18);
    enc.WriteBit(value.has_musim_MIMO_Layers_UL_r18);
    enc.WriteBit(value.has_musim_SupportedBandwidth_DL_r18);
    enc.WriteBit(value.has_musim_SupportedBandwidth_UL_r18);
    if (value.has_musim_MIMO_Layers_DL_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.musim_MIMO_Layers_DL_r18), 1, 8);
    }
    if (value.has_musim_MIMO_Layers_UL_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.musim_MIMO_Layers_UL_r18), 1, 4);
    }
    if (value.has_musim_SupportedBandwidth_DL_r18) {
        Encode_SupportedBandwidth(enc, value.musim_SupportedBandwidth_DL_r18);
    }
    if (value.has_musim_SupportedBandwidth_UL_r18) {
        Encode_SupportedBandwidth(enc, value.musim_SupportedBandwidth_UL_r18);
    }
    return enc.Error();
}

ErrorCode Decode_MUSIM_CapabilityRestrictedBandParameters_r18_Musim_CapabilityRestricted_r18(Decoder& dec, MUSIM_CapabilityRestrictedBandParameters_r18_Musim_CapabilityRestricted_r18& value)
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
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.musim_MIMO_Layers_DL_r18 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.musim_MIMO_Layers_UL_r18 = (int64_t)tmp_value;
    }
    if (present_2) {
        if (Decode_SupportedBandwidth(dec, value.musim_SupportedBandwidth_DL_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SupportedBandwidth(dec, value.musim_SupportedBandwidth_UL_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MUSIM_CapabilityRestrictedBandParameters_r18_Musim_CapabilityRestricted_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MUSIM_CapabilityRestrictedBandParameters_r18_Musim_CapabilityRestricted_r18(MUSIM_CapabilityRestrictedBandParameters_r18_Musim_CapabilityRestricted_r18& value)
{
    if (value.has_musim_MIMO_Layers_DL_r18) {
    }
    if (value.has_musim_MIMO_Layers_UL_r18) {
    }
    if (value.has_musim_SupportedBandwidth_DL_r18) {
        Free_SupportedBandwidth(value.musim_SupportedBandwidth_DL_r18);
    }
    if (value.has_musim_SupportedBandwidth_UL_r18) {
        Free_SupportedBandwidth(value.musim_SupportedBandwidth_UL_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MUSIM_CapabilityRestrictedBandParameters_r18：ASN.1 MUSIM-CapabilityRestrictedBandParameters-r18；源文件第 2462 行；SEQUENCE。
// Encode_MUSIM_CapabilityRestrictedBandParameters_r18 只读不分配；Decode_MUSIM_CapabilityRestrictedBandParameters_r18 可能 malloc（失败时内部已释放并清零）；Free_MUSIM_CapabilityRestrictedBandParameters_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MUSIM_CapabilityRestrictedBandParameters_r18(Encoder& enc, const MUSIM_CapabilityRestrictedBandParameters_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.musim_bandEntryIndex_r18), 1, 8);
    Encode_MUSIM_CapabilityRestrictedBandParameters_r18_Musim_CapabilityRestricted_r18(enc, value.musim_CapabilityRestricted_r18);
    return enc.Error();
}

ErrorCode Decode_MUSIM_CapabilityRestrictedBandParameters_r18(Decoder& dec, MUSIM_CapabilityRestrictedBandParameters_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.musim_bandEntryIndex_r18 = (MUSIM_BandEntryIndex_r18)tmp_value;
    }
    {
        if (Decode_MUSIM_CapabilityRestrictedBandParameters_r18_Musim_CapabilityRestricted_r18(dec, value.musim_CapabilityRestricted_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MUSIM_CapabilityRestrictedBandParameters_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MUSIM_CapabilityRestrictedBandParameters_r18(MUSIM_CapabilityRestrictedBandParameters_r18& value)
{
    Free_MUSIM_CapabilityRestrictedBandParameters_r18_Musim_CapabilityRestricted_r18(value.musim_CapabilityRestricted_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MUSIM_AvoidedBands_r18：ASN.1 MUSIM-AvoidedBands-r18；源文件第 2474 行；SEQUENCE OF。
// Encode_MUSIM_AvoidedBands_r18 只读不分配；Decode_MUSIM_AvoidedBands_r18 可能 malloc（失败时内部已释放并清零）；Free_MUSIM_AvoidedBands_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MUSIM_AvoidedBands_r18(Encoder& enc, const MUSIM_AvoidedBands_r18& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 1, 8);
    }
    return enc.Error();
}

ErrorCode Decode_MUSIM_AvoidedBands_r18(Decoder& dec, MUSIM_AvoidedBands_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MUSIM_BandEntryIndex_r18*)std::malloc((std::size_t)value.count * sizeof(MUSIM_BandEntryIndex_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MUSIM_BandEntryIndex_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
    value.items[i] = (MUSIM_BandEntryIndex_r18)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_MUSIM_AvoidedBands_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MUSIM_AvoidedBands_r18(MUSIM_AvoidedBands_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_TrafficPatternInfo_r16：ASN.1 SL-TrafficPatternInfo-r16；源文件第 2499 行；SEQUENCE。
// Encode_SL_TrafficPatternInfo_r16 只读不分配；Decode_SL_TrafficPatternInfo_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_TrafficPatternInfo_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_TrafficPatternInfo_r16(Encoder& enc, const SL_TrafficPatternInfo_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.trafficPeriodicity_r16), 0, 11);
    enc.WriteConstrainedInteger((std::int64_t)(value.timingOffset_r16), 0, 10239);
    enc.WriteFixedBitString(value.messageSize_r16.bytes, value.messageSize_r16.bitLength, 8, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_QoS_FlowIdentity_r16), 1, 2048);
    return enc.Error();
}

ErrorCode Decode_SL_TrafficPatternInfo_r16(Decoder& dec, SL_TrafficPatternInfo_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 11, tmp_value)) { goto fail; }
        value.trafficPeriodicity_r16 = (SL_TrafficPatternInfo_r16_TrafficPeriodicity_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10239, tmp_value)) { goto fail; }
        value.timingOffset_r16 = (int64_t)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.messageSize_r16.bytes = string_bytes;
        value.messageSize_r16.bitLength = string_length;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2048, tmp_value)) { goto fail; }
        value.sl_QoS_FlowIdentity_r16 = (SL_QoS_FlowIdentity_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_TrafficPatternInfo_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_TrafficPatternInfo_r16(SL_TrafficPatternInfo_r16& value)
{
    std::free(value.messageSize_r16.bytes);
    value.messageSize_r16.bytes = nullptr;
    value.messageSize_r16.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// AffectedFreqRange_r18：ASN.1 AffectedFreqRange-r18；源文件第 2549 行；SEQUENCE。
// Encode_AffectedFreqRange_r18 只读不分配；Decode_AffectedFreqRange_r18 可能 malloc（失败时内部已释放并清零）；Free_AffectedFreqRange_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_AffectedFreqRange_r18(Encoder& enc, const AffectedFreqRange_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.centerFreq_r18), 0, 3279165);
    enc.WriteConstrainedInteger((std::int64_t)(value.affectedBandwidth_r18), 0, 31);
    return enc.Error();
}

ErrorCode Decode_AffectedFreqRange_r18(Decoder& dec, AffectedFreqRange_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.centerFreq_r18 = (ARFCN_ValueNR)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.affectedBandwidth_r18 = (AffectedFreqRange_r18_AffectedBandwidth_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_AffectedFreqRange_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AffectedFreqRange_r18(AffectedFreqRange_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// AffectedCarrierFreqRange_r18：ASN.1 AffectedCarrierFreqRange-r18；源文件第 2536 行；SEQUENCE。
// Encode_AffectedCarrierFreqRange_r18 只读不分配；Decode_AffectedCarrierFreqRange_r18 可能 malloc（失败时内部已释放并清零）；Free_AffectedCarrierFreqRange_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_AffectedCarrierFreqRange_r18(Encoder& enc, const AffectedCarrierFreqRange_r18& value)
{
    enc.WriteBit(value.has_victimSystemType_r18);
    Encode_AffectedFreqRange_r18(enc, value.affectedFreqRange_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.interferenceDirection_r18), 0, 3);
    if (value.has_victimSystemType_r18) {
        Encode_VictimSystemType_r16(enc, value.victimSystemType_r18);
    }
    return enc.Error();
}

ErrorCode Decode_AffectedCarrierFreqRange_r18(Decoder& dec, AffectedCarrierFreqRange_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_AffectedFreqRange_r18(dec, value.affectedFreqRange_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.interferenceDirection_r18 = (AffectedCarrierFreqRange_r18_InterferenceDirection_r18)tmp_value;
    }
    if (present_0) {
        if (Decode_VictimSystemType_r16(dec, value.victimSystemType_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_AffectedCarrierFreqRange_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AffectedCarrierFreqRange_r18(AffectedCarrierFreqRange_r18& value)
{
    Free_AffectedFreqRange_r18(value.affectedFreqRange_r18);
    if (value.has_victimSystemType_r18) {
        Free_VictimSystemType_r16(value.victimSystemType_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// AffectedCarrierFreqRangeComb_r18：ASN.1 AffectedCarrierFreqRangeComb-r18；源文件第 2543 行；SEQUENCE。
// Encode_AffectedCarrierFreqRangeComb_r18 只读不分配；Decode_AffectedCarrierFreqRangeComb_r18 可能 malloc（失败时内部已释放并清零）；Free_AffectedCarrierFreqRangeComb_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_AffectedCarrierFreqRangeComb_r18(Encoder& enc, const AffectedCarrierFreqRangeComb_r18& value)
{
    enc.WriteBit(value.has_victimSystemType_r18);
enc.WriteConstrainedLength(value.affectedCarrierFreqRangeComb_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.affectedCarrierFreqRangeComb_r18_count; ++i) {
    Encode_AffectedFreqRange_r18(enc, value.affectedCarrierFreqRangeComb_r18_items[i]);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.interferenceDirection_r18), 0, 3);
    if (value.has_victimSystemType_r18) {
        Encode_VictimSystemType_r16(enc, value.victimSystemType_r18);
    }
    return enc.Error();
}

ErrorCode Decode_AffectedCarrierFreqRangeComb_r18(Decoder& dec, AffectedCarrierFreqRangeComb_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.affectedCarrierFreqRangeComb_r18_count)) { goto fail; }
if (value.affectedCarrierFreqRangeComb_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.affectedCarrierFreqRangeComb_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.affectedCarrierFreqRangeComb_r18_count > 0u) {
    value.affectedCarrierFreqRangeComb_r18_items = (AffectedFreqRange_r18*)std::malloc((std::size_t)value.affectedCarrierFreqRangeComb_r18_count * sizeof(AffectedFreqRange_r18));
    if (value.affectedCarrierFreqRangeComb_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.affectedCarrierFreqRangeComb_r18_items, 0, (std::size_t)value.affectedCarrierFreqRangeComb_r18_count * sizeof(AffectedFreqRange_r18));
}
for (std::uint32_t i = 0; i < value.affectedCarrierFreqRangeComb_r18_count; ++i) {
    if (Decode_AffectedFreqRange_r18(dec, value.affectedCarrierFreqRangeComb_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.interferenceDirection_r18 = (AffectedCarrierFreqRangeComb_r18_InterferenceDirection_r18)tmp_value;
    }
    if (present_0) {
        if (Decode_VictimSystemType_r16(dec, value.victimSystemType_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_AffectedCarrierFreqRangeComb_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AffectedCarrierFreqRangeComb_r18(AffectedCarrierFreqRangeComb_r18& value)
{
    if (value.affectedCarrierFreqRangeComb_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.affectedCarrierFreqRangeComb_r18_count; ++i) {
            Free_AffectedFreqRange_r18(value.affectedCarrierFreqRangeComb_r18_items[i]);
        }
        std::free(value.affectedCarrierFreqRangeComb_r18_items);
        value.affectedCarrierFreqRangeComb_r18_items = nullptr;
    }
    value.affectedCarrierFreqRangeComb_r18_count = 0;
    if (value.has_victimSystemType_r18) {
        Free_VictimSystemType_r16(value.victimSystemType_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDU_SessionUL_TrafficInfo_r18：ASN.1 PDU-SessionUL-TrafficInfo-r18；源文件第 2559 行；SEQUENCE。
// Encode_PDU_SessionUL_TrafficInfo_r18 只读不分配；Decode_PDU_SessionUL_TrafficInfo_r18 可能 malloc（失败时内部已释放并清零）；Free_PDU_SessionUL_TrafficInfo_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDU_SessionUL_TrafficInfo_r18(Encoder& enc, const PDU_SessionUL_TrafficInfo_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.pdu_SessionID_r18), 0, 255);
enc.WriteConstrainedLength(value.qos_FlowUL_TrafficInfoList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.qos_FlowUL_TrafficInfoList_r18_count; ++i) {
    Encode_QOS_FlowUL_TrafficInfo_r18(enc, value.qos_FlowUL_TrafficInfoList_r18_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_PDU_SessionUL_TrafficInfo_r18(Decoder& dec, PDU_SessionUL_TrafficInfo_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
        value.pdu_SessionID_r18 = (PDU_SessionID)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.qos_FlowUL_TrafficInfoList_r18_count)) { goto fail; }
if (value.qos_FlowUL_TrafficInfoList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.qos_FlowUL_TrafficInfoList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.qos_FlowUL_TrafficInfoList_r18_count > 0u) {
    value.qos_FlowUL_TrafficInfoList_r18_items = (QOS_FlowUL_TrafficInfo_r18*)std::malloc((std::size_t)value.qos_FlowUL_TrafficInfoList_r18_count * sizeof(QOS_FlowUL_TrafficInfo_r18));
    if (value.qos_FlowUL_TrafficInfoList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.qos_FlowUL_TrafficInfoList_r18_items, 0, (std::size_t)value.qos_FlowUL_TrafficInfoList_r18_count * sizeof(QOS_FlowUL_TrafficInfo_r18));
}
for (std::uint32_t i = 0; i < value.qos_FlowUL_TrafficInfoList_r18_count; ++i) {
    if (Decode_QOS_FlowUL_TrafficInfo_r18(dec, value.qos_FlowUL_TrafficInfoList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDU_SessionUL_TrafficInfo_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDU_SessionUL_TrafficInfo_r18(PDU_SessionUL_TrafficInfo_r18& value)
{
    if (value.qos_FlowUL_TrafficInfoList_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.qos_FlowUL_TrafficInfoList_r18_count; ++i) {
            Free_QOS_FlowUL_TrafficInfo_r18(value.qos_FlowUL_TrafficInfoList_r18_items[i]);
        }
        std::free(value.qos_FlowUL_TrafficInfoList_r18_items);
        value.qos_FlowUL_TrafficInfoList_r18_items = nullptr;
    }
    value.qos_FlowUL_TrafficInfoList_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// QOS_FlowUL_TrafficInfo_r18_JitterRange_r18：ASN.1 jitterRange-r18；源文件第 2566 行；SEQUENCE。
// Encode_QOS_FlowUL_TrafficInfo_r18_JitterRange_r18 只读不分配；Decode_QOS_FlowUL_TrafficInfo_r18_JitterRange_r18 可能 malloc（失败时内部已释放并清零）；Free_QOS_FlowUL_TrafficInfo_r18_JitterRange_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_QOS_FlowUL_TrafficInfo_r18_JitterRange_r18(Encoder& enc, const QOS_FlowUL_TrafficInfo_r18_JitterRange_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.lowerBound_r18), 0, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.upperBound_r18), 0, 15);
    return enc.Error();
}

ErrorCode Decode_QOS_FlowUL_TrafficInfo_r18_JitterRange_r18(Decoder& dec, QOS_FlowUL_TrafficInfo_r18_JitterRange_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.lowerBound_r18 = (JitterBound_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.upperBound_r18 = (JitterBound_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_QOS_FlowUL_TrafficInfo_r18_JitterRange_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_QOS_FlowUL_TrafficInfo_r18_JitterRange_r18(QOS_FlowUL_TrafficInfo_r18_JitterRange_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ReferenceSFN_AndSlot_r18：ASN.1 ReferenceSFN-AndSlot-r18；源文件第 2580 行；SEQUENCE。
// Encode_ReferenceSFN_AndSlot_r18 只读不分配；Decode_ReferenceSFN_AndSlot_r18 可能 malloc（失败时内部已释放并清零）；Free_ReferenceSFN_AndSlot_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ReferenceSFN_AndSlot_r18(Encoder& enc, const ReferenceSFN_AndSlot_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.referenceSFN_r18), 0, 1023);
    enc.WriteConstrainedInteger((std::int64_t)(value.referenceSlot_r18), 0, 639);
    return enc.Error();
}

ErrorCode Decode_ReferenceSFN_AndSlot_r18(Decoder& dec, ReferenceSFN_AndSlot_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.referenceSFN_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.referenceSlot_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReferenceSFN_AndSlot_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReferenceSFN_AndSlot_r18(ReferenceSFN_AndSlot_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18：ASN.1 burstArrivalTime-r18；源文件第 2570 行；CHOICE。
// Encode_QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18 只读不分配；Decode_QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18 可能 malloc（失败时内部已释放并清零）；Free_QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18(Encoder& enc, const QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18_Tag_referenceTime:
        Encode_ReferenceTime_r16(enc, value.u.referenceTime);
        break;
    case QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18_Tag_referenceSFN_AndSlot:
        Encode_ReferenceSFN_AndSlot_r18(enc, value.u.referenceSFN_AndSlot);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18(Decoder& dec, QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18_Tag)root_index;
    switch (value.tag) {
    case QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18_Tag_referenceTime: {
        if (Decode_ReferenceTime_r16(dec, value.u.referenceTime) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18_Tag_referenceSFN_AndSlot: {
        if (Decode_ReferenceSFN_AndSlot_r18(dec, value.u.referenceSFN_AndSlot) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18(QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18& value)
{
    switch (value.tag) {
    case QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18_Tag_referenceTime:
        Free_ReferenceTime_r16(value.u.referenceTime);
        break;
    case QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18_Tag_referenceSFN_AndSlot:
        Free_ReferenceSFN_AndSlot_r18(value.u.referenceSFN_AndSlot);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// QOS_FlowUL_TrafficInfo_r18：ASN.1 QOS-FlowUL-TrafficInfo-r18；源文件第 2564 行；SEQUENCE。
// Encode_QOS_FlowUL_TrafficInfo_r18 只读不分配；Decode_QOS_FlowUL_TrafficInfo_r18 可能 malloc（失败时内部已释放并清零）；Free_QOS_FlowUL_TrafficInfo_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_QOS_FlowUL_TrafficInfo_r18(Encoder& enc, const QOS_FlowUL_TrafficInfo_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_jitterRange_r18);
    enc.WriteBit(value.has_burstArrivalTime_r18);
    enc.WriteBit(value.has_trafficPeriodicity_r18);
    enc.WriteBit(value.has_pduSetIdentification_r18);
    enc.WriteBit(value.has_psiIdentification_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.qfi_r18), 0, 63);
    if (value.has_jitterRange_r18) {
        Encode_QOS_FlowUL_TrafficInfo_r18_JitterRange_r18(enc, value.jitterRange_r18);
    }
    if (value.has_burstArrivalTime_r18) {
        Encode_QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18(enc, value.burstArrivalTime_r18);
    }
    if (value.has_trafficPeriodicity_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.trafficPeriodicity_r18), 1, 640000);
    }
    if (value.has_pduSetIdentification_r18) {
        enc.WriteBool(value.pduSetIdentification_r18);
    }
    if (value.has_psiIdentification_r18) {
        enc.WriteBool(value.psiIdentification_r18);
    }
    return enc.Error();
}

ErrorCode Decode_QOS_FlowUL_TrafficInfo_r18(Decoder& dec, QOS_FlowUL_TrafficInfo_r18& value)
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
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.qfi_r18 = (QFI)tmp_value;
    }
    if (present_0) {
        if (Decode_QOS_FlowUL_TrafficInfo_r18_JitterRange_r18(dec, value.jitterRange_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18(dec, value.burstArrivalTime_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 640000, tmp_value)) { goto fail; }
        value.trafficPeriodicity_r18 = (int64_t)tmp_value;
    }
    if (present_3) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.pduSetIdentification_r18 = tmp_value;
    }
    if (present_4) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.psiIdentification_r18 = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_QOS_FlowUL_TrafficInfo_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_QOS_FlowUL_TrafficInfo_r18(QOS_FlowUL_TrafficInfo_r18& value)
{
    if (value.has_jitterRange_r18) {
        Free_QOS_FlowUL_TrafficInfo_r18_JitterRange_r18(value.jitterRange_r18);
    }
    if (value.has_burstArrivalTime_r18) {
        Free_QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18(value.burstArrivalTime_r18);
    }
    if (value.has_trafficPeriodicity_r18) {
    }
    if (value.has_pduSetIdentification_r18) {
    }
    if (value.has_psiIdentification_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PRS_TxInfo_r18：ASN.1 SL-PRS-TxInfo-r18；源文件第 2589 行；SEQUENCE。
// Encode_SL_PRS_TxInfo_r18 只读不分配；Decode_SL_PRS_TxInfo_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_PRS_TxInfo_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PRS_TxInfo_r18(Encoder& enc, const SL_PRS_TxInfo_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_PRS_Priority_r18);
    enc.WriteBit(value.has_sl_PRS_DelayBudget_r18);
    enc.WriteBit(value.has_sl_PRS_Bandwidth_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_PRS_Periodicity_r18), 0, 15);
    if (value.has_sl_PRS_Priority_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PRS_Priority_r18), 1, 8);
    }
    if (value.has_sl_PRS_DelayBudget_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PRS_DelayBudget_r18), 0, 1023);
    }
    if (value.has_sl_PRS_Bandwidth_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PRS_Bandwidth_r18), 0, 14);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PRS_TxInfo_r18(Decoder& dec, SL_PRS_TxInfo_r18& value)
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
        value.sl_PRS_Periodicity_r18 = (SL_PRS_TxInfo_r18_Sl_PRS_Periodicity_r18)tmp_value;
    }
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
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 14, tmp_value)) { goto fail; }
        value.sl_PRS_Bandwidth_r18 = (SL_PRS_TxInfo_r18_Sl_PRS_Bandwidth_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PRS_TxInfo_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PRS_TxInfo_r18(SL_PRS_TxInfo_r18& value)
{
    if (value.has_sl_PRS_Priority_r18) {
    }
    if (value.has_sl_PRS_DelayBudget_r18) {
    }
    if (value.has_sl_PRS_Bandwidth_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UE_CapabilityRAT_RequestList：ASN.1 UE-CapabilityRAT-RequestList；源文件第 20842 行；SEQUENCE OF。
// Encode_UE_CapabilityRAT_RequestList 只读不分配；Decode_UE_CapabilityRAT_RequestList 可能 malloc（失败时内部已释放并清零）；Free_UE_CapabilityRAT_RequestList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UE_CapabilityRAT_RequestList(Encoder& enc, const UE_CapabilityRAT_RequestList& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_UE_CapabilityRAT_Request(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_UE_CapabilityRAT_RequestList(Decoder& dec, UE_CapabilityRAT_RequestList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (UE_CapabilityRAT_Request*)std::malloc((std::size_t)value.count * sizeof(UE_CapabilityRAT_Request));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(UE_CapabilityRAT_Request));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_UE_CapabilityRAT_Request(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_UE_CapabilityRAT_RequestList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_CapabilityRAT_RequestList(UE_CapabilityRAT_RequestList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_UE_CapabilityRAT_Request(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UECapabilityEnquiry_IEs：ASN.1 UECapabilityEnquiry-IEs；源文件第 2612 行；SEQUENCE。
// Encode_UECapabilityEnquiry_IEs 只读不分配；Decode_UECapabilityEnquiry_IEs 可能 malloc（失败时内部已释放并清零）；Free_UECapabilityEnquiry_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UECapabilityEnquiry_IEs(Encoder& enc, const UECapabilityEnquiry_IEs& value)
{
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.ue_CapabilityEnquiryExt != nullptr);
    Encode_UE_CapabilityRAT_RequestList(enc, value.ue_CapabilityRAT_RequestList);
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.ue_CapabilityEnquiryExt != nullptr) {
        if (value.ue_CapabilityEnquiryExt == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_UECapabilityEnquiry_v1560_IEs(enc, *value.ue_CapabilityEnquiryExt);
        }
    }
    return enc.Error();
}

ErrorCode Decode_UECapabilityEnquiry_IEs(Decoder& dec, UECapabilityEnquiry_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        if (Decode_UE_CapabilityRAT_RequestList(dec, value.ue_CapabilityRAT_RequestList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_1) {
        if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
    dec.Fail(ErrorCode_ContainingDepthExceeded); goto fail;
        }
        std::vector<std::uint8_t> containing_bytes;
        if (!dec.ReadOpenType(containing_bytes)) { goto fail; }
        Decoder containing_sub(containing_bytes.data(), containing_bytes.size());
        containing_sub.SetContainingDepth(dec.ContainingDepth() + 1);
        UECapabilityEnquiry_v1560_IEs* containing_value = (UECapabilityEnquiry_v1560_IEs*)std::malloc(sizeof(UECapabilityEnquiry_v1560_IEs));
        if (containing_value == nullptr) {
    dec.Fail(ErrorCode_OutOfMemory); goto fail;
        }
        std::memset(containing_value, 0, sizeof(*containing_value));
        if (Decode_UECapabilityEnquiry_v1560_IEs(containing_sub, *containing_value) != ErrorCode_Ok) {
    Free_UECapabilityEnquiry_v1560_IEs(*containing_value);
    std::free(containing_value);
    dec.Fail(containing_sub.Error()); goto fail;
        }
        if (!containing_sub.CheckOpenTypeEnd()) {
    Free_UECapabilityEnquiry_v1560_IEs(*containing_value);
    std::free(containing_value);
    dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
        }
        value.ue_CapabilityEnquiryExt = containing_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UECapabilityEnquiry_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UECapabilityEnquiry_IEs(UECapabilityEnquiry_IEs& value)
{
    Free_UE_CapabilityRAT_RequestList(value.ue_CapabilityRAT_RequestList);
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.ue_CapabilityEnquiryExt != nullptr) {
        if (value.ue_CapabilityEnquiryExt != nullptr) {
            Free_UECapabilityEnquiry_v1560_IEs(*value.ue_CapabilityEnquiryExt);
            std::free(value.ue_CapabilityEnquiryExt);
            value.ue_CapabilityEnquiryExt = nullptr;
        }
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UECapabilityEnquiry_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 2608 行；空 SEQUENCE{}。
// Encode_UECapabilityEnquiry_CriticalExtensionsFuture 只读不分配；Decode_UECapabilityEnquiry_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_UECapabilityEnquiry_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UECapabilityEnquiry_CriticalExtensionsFuture(Encoder& enc, const UECapabilityEnquiry_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_UECapabilityEnquiry_CriticalExtensionsFuture(Decoder& dec, UECapabilityEnquiry_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UECapabilityEnquiry_CriticalExtensionsFuture(UECapabilityEnquiry_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UECapabilityEnquiry_CriticalExtensions：ASN.1 criticalExtensions；源文件第 2606 行；CHOICE。
// Encode_UECapabilityEnquiry_CriticalExtensions 只读不分配；Decode_UECapabilityEnquiry_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_UECapabilityEnquiry_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UECapabilityEnquiry_CriticalExtensions(Encoder& enc, const UECapabilityEnquiry_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case UECapabilityEnquiry_CriticalExtensions_Tag_ueCapabilityEnquiry:
        Encode_UECapabilityEnquiry_IEs(enc, value.u.ueCapabilityEnquiry);
        break;
    case UECapabilityEnquiry_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_UECapabilityEnquiry_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_UECapabilityEnquiry_CriticalExtensions(Decoder& dec, UECapabilityEnquiry_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (UECapabilityEnquiry_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case UECapabilityEnquiry_CriticalExtensions_Tag_ueCapabilityEnquiry: {
        if (Decode_UECapabilityEnquiry_IEs(dec, value.u.ueCapabilityEnquiry) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case UECapabilityEnquiry_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_UECapabilityEnquiry_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UECapabilityEnquiry_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UECapabilityEnquiry_CriticalExtensions(UECapabilityEnquiry_CriticalExtensions& value)
{
    switch (value.tag) {
    case UECapabilityEnquiry_CriticalExtensions_Tag_ueCapabilityEnquiry:
        Free_UECapabilityEnquiry_IEs(value.u.ueCapabilityEnquiry);
        break;
    case UECapabilityEnquiry_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_UECapabilityEnquiry_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UECapabilityEnquiry：ASN.1 UECapabilityEnquiry；源文件第 2604 行；SEQUENCE。
// Encode_UECapabilityEnquiry 只读不分配；Decode_UECapabilityEnquiry 可能 malloc（失败时内部已释放并清零）；Free_UECapabilityEnquiry 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UECapabilityEnquiry(Encoder& enc, const UECapabilityEnquiry& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.rrc_TransactionIdentifier), 0, 3);
    Encode_UECapabilityEnquiry_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_UECapabilityEnquiry(Decoder& dec, UECapabilityEnquiry& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.rrc_TransactionIdentifier = (RRC_TransactionIdentifier)tmp_value;
    }
    {
        if (Decode_UECapabilityEnquiry_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UECapabilityEnquiry(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UECapabilityEnquiry(UECapabilityEnquiry& value)
{
    Free_UECapabilityEnquiry_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UECapabilityEnquiry_v1610_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 2625 行；空 SEQUENCE{}。
// Encode_UECapabilityEnquiry_v1610_IEs_NonCriticalExtension 只读不分配；Decode_UECapabilityEnquiry_v1610_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_UECapabilityEnquiry_v1610_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UECapabilityEnquiry_v1610_IEs_NonCriticalExtension(Encoder& enc, const UECapabilityEnquiry_v1610_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_UECapabilityEnquiry_v1610_IEs_NonCriticalExtension(Decoder& dec, UECapabilityEnquiry_v1610_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UECapabilityEnquiry_v1610_IEs_NonCriticalExtension(UECapabilityEnquiry_v1610_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UECapabilityEnquiry_v1610_IEs：ASN.1 UECapabilityEnquiry-v1610-IEs；源文件第 2623 行；SEQUENCE。
// Encode_UECapabilityEnquiry_v1610_IEs 只读不分配；Decode_UECapabilityEnquiry_v1610_IEs 可能 malloc（失败时内部已释放并清零）；Free_UECapabilityEnquiry_v1610_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UECapabilityEnquiry_v1610_IEs(Encoder& enc, const UECapabilityEnquiry_v1610_IEs& value)
{
    enc.WriteBit(value.has_rrc_SegAllowed_r16);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_rrc_SegAllowed_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rrc_SegAllowed_r16), 0, 0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UECapabilityEnquiry_v1610_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UECapabilityEnquiry_v1610_IEs(Decoder& dec, UECapabilityEnquiry_v1610_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.rrc_SegAllowed_r16 = (UECapabilityEnquiry_v1610_IEs_Rrc_SegAllowed_r16)0;
    }
    if (present_1) {
        if (Decode_UECapabilityEnquiry_v1610_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UECapabilityEnquiry_v1610_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UECapabilityEnquiry_v1610_IEs(UECapabilityEnquiry_v1610_IEs& value)
{
    if (value.has_rrc_SegAllowed_r16) {
    }
    if (value.has_nonCriticalExtension) {
        Free_UECapabilityEnquiry_v1610_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16：ASN.1 codebookTypeRequest-r16；源文件第 20861 行；SEQUENCE。
// Encode_UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16 只读不分配；Decode_UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16 可能 malloc（失败时内部已释放并清零）；Free_UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16(Encoder& enc, const UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16& value)
{
    enc.WriteBit(value.has_type1_SinglePanel_r16);
    enc.WriteBit(value.has_type1_MultiPanel_r16);
    enc.WriteBit(value.has_type2_r16);
    enc.WriteBit(value.has_type2_PortSelection_r16);
    if (value.has_type1_SinglePanel_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.type1_SinglePanel_r16), 0, 0);
    }
    if (value.has_type1_MultiPanel_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.type1_MultiPanel_r16), 0, 0);
    }
    if (value.has_type2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.type2_r16), 0, 0);
    }
    if (value.has_type2_PortSelection_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.type2_PortSelection_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16(Decoder& dec, UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16& value)
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
        value.type1_SinglePanel_r16 = (UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16_Type1_SinglePanel_r16)0;
    }
    if (present_1) {
        value.type1_MultiPanel_r16 = (UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16_Type1_MultiPanel_r16)0;
    }
    if (present_2) {
        value.type2_r16 = (UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16_Type2_r16)0;
    }
    if (present_3) {
        value.type2_PortSelection_r16 = (UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16_Type2_PortSelection_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16(UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16& value)
{
    if (value.has_type1_SinglePanel_r16) {
    }
    if (value.has_type1_MultiPanel_r16) {
    }
    if (value.has_type2_r16) {
    }
    if (value.has_type2_PortSelection_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UE_CapabilityRequestFilterCommon_ExtGroup1：ASN.1 UE_CapabilityRequestFilterCommon_ExtGroup1；源文件第 20860 行；扩展添加组 [[ ]]。
// Encode_UE_CapabilityRequestFilterCommon_ExtGroup1 只读不分配；Decode_UE_CapabilityRequestFilterCommon_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_UE_CapabilityRequestFilterCommon_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UE_CapabilityRequestFilterCommon_ExtGroup1(Encoder& enc, const UE_CapabilityRequestFilterCommon_ExtGroup1& value)
{
    enc.WriteBit(value.has_codebookTypeRequest_r16);
    enc.WriteBit(value.has_uplinkTxSwitchRequest_r16);
    if (value.has_codebookTypeRequest_r16) {
        Encode_UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16(enc, value.codebookTypeRequest_r16);
    }
    if (value.has_uplinkTxSwitchRequest_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uplinkTxSwitchRequest_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_UE_CapabilityRequestFilterCommon_ExtGroup1(Decoder& dec, UE_CapabilityRequestFilterCommon_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16(dec, value.codebookTypeRequest_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.uplinkTxSwitchRequest_r16 = (UE_CapabilityRequestFilterCommon_ExtGroup1_UplinkTxSwitchRequest_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_CapabilityRequestFilterCommon_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_CapabilityRequestFilterCommon_ExtGroup1(UE_CapabilityRequestFilterCommon_ExtGroup1& value)
{
    if (value.has_codebookTypeRequest_r16) {
        Free_UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16(value.codebookTypeRequest_r16);
    }
    if (value.has_uplinkTxSwitchRequest_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UE_CapabilityRequestFilterCommon_ExtGroup3：ASN.1 UE_CapabilityRequestFilterCommon_ExtGroup3；源文件第 20872 行；扩展添加组 [[ ]]。
// Encode_UE_CapabilityRequestFilterCommon_ExtGroup3 只读不分配；Decode_UE_CapabilityRequestFilterCommon_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_UE_CapabilityRequestFilterCommon_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UE_CapabilityRequestFilterCommon_ExtGroup3(Encoder& enc, const UE_CapabilityRequestFilterCommon_ExtGroup3& value)
{
    enc.WriteBit(value.has_fallbackGroupFiveRequest_r17);
    if (value.has_fallbackGroupFiveRequest_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fallbackGroupFiveRequest_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_UE_CapabilityRequestFilterCommon_ExtGroup3(Decoder& dec, UE_CapabilityRequestFilterCommon_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.fallbackGroupFiveRequest_r17 = (UE_CapabilityRequestFilterCommon_ExtGroup3_FallbackGroupFiveRequest_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_CapabilityRequestFilterCommon_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_CapabilityRequestFilterCommon_ExtGroup3(UE_CapabilityRequestFilterCommon_ExtGroup3& value)
{
    if (value.has_fallbackGroupFiveRequest_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18：ASN.1 lowerMSDRequest-r18；源文件第 20876 行；SEQUENCE。
// Encode_UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18 只读不分配；Decode_UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18 可能 malloc（失败时内部已释放并清零）；Free_UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18(Encoder& enc, const UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18& value)
{
    enc.WriteBit(value.has_pc1dot5_r18);
    enc.WriteBit(value.has_pc2_r18);
    enc.WriteBit(value.has_pc3_r18);
    if (value.has_pc1dot5_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pc1dot5_r18), 0, 0);
    }
    if (value.has_pc2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pc2_r18), 0, 0);
    }
    if (value.has_pc3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pc3_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18(Decoder& dec, UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18& value)
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
        value.pc1dot5_r18 = (UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18_Pc1dot5_r18)0;
    }
    if (present_1) {
        value.pc2_r18 = (UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18_Pc2_r18)0;
    }
    if (present_2) {
        value.pc3_r18 = (UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18_Pc3_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18(UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18& value)
{
    if (value.has_pc1dot5_r18) {
    }
    if (value.has_pc2_r18) {
    }
    if (value.has_pc3_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UE_CapabilityRequestFilterCommon_ExtGroup4：ASN.1 UE_CapabilityRequestFilterCommon_ExtGroup4；源文件第 20875 行；扩展添加组 [[ ]]。
// Encode_UE_CapabilityRequestFilterCommon_ExtGroup4 只读不分配；Decode_UE_CapabilityRequestFilterCommon_ExtGroup4 可能 malloc（失败时内部已释放并清零）；Free_UE_CapabilityRequestFilterCommon_ExtGroup4 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UE_CapabilityRequestFilterCommon_ExtGroup4(Encoder& enc, const UE_CapabilityRequestFilterCommon_ExtGroup4& value)
{
    enc.WriteBit(value.has_lowerMSDRequest_r18);
    if (value.has_lowerMSDRequest_r18) {
        Encode_UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18(enc, value.lowerMSDRequest_r18);
    }
    return enc.Error();
}

ErrorCode Decode_UE_CapabilityRequestFilterCommon_ExtGroup4(Decoder& dec, UE_CapabilityRequestFilterCommon_ExtGroup4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18(dec, value.lowerMSDRequest_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_CapabilityRequestFilterCommon_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_CapabilityRequestFilterCommon_ExtGroup4(UE_CapabilityRequestFilterCommon_ExtGroup4& value)
{
    if (value.has_lowerMSDRequest_r18) {
        Free_UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18(value.lowerMSDRequest_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UE_CapabilityRequestFilterCommon_ExtGroup2：ASN.1 UE_CapabilityRequestFilterCommon_ExtGroup2；源文件第 20869 行；扩展添加组 [[ ]]。
// Encode_UE_CapabilityRequestFilterCommon_ExtGroup2 只读不分配；Decode_UE_CapabilityRequestFilterCommon_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_UE_CapabilityRequestFilterCommon_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UE_CapabilityRequestFilterCommon_ExtGroup2(Encoder& enc, const UE_CapabilityRequestFilterCommon_ExtGroup2& value)
{
    enc.WriteBit(value.has_requestedCellGrouping_r16);
    if (value.has_requestedCellGrouping_r16) {
enc.WriteConstrainedLength(value.requestedCellGrouping_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.requestedCellGrouping_r16_count; ++i) {
    Encode_CellGrouping_r16(enc, value.requestedCellGrouping_r16_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_UE_CapabilityRequestFilterCommon_ExtGroup2(Decoder& dec, UE_CapabilityRequestFilterCommon_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.requestedCellGrouping_r16_count)) { goto fail; }
if (value.requestedCellGrouping_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.requestedCellGrouping_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.requestedCellGrouping_r16_count > 0u) {
    value.requestedCellGrouping_r16_items = (CellGrouping_r16*)std::malloc((std::size_t)value.requestedCellGrouping_r16_count * sizeof(CellGrouping_r16));
    if (value.requestedCellGrouping_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.requestedCellGrouping_r16_items, 0, (std::size_t)value.requestedCellGrouping_r16_count * sizeof(CellGrouping_r16));
}
for (std::uint32_t i = 0; i < value.requestedCellGrouping_r16_count; ++i) {
    if (Decode_CellGrouping_r16(dec, value.requestedCellGrouping_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_CapabilityRequestFilterCommon_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_CapabilityRequestFilterCommon_ExtGroup2(UE_CapabilityRequestFilterCommon_ExtGroup2& value)
{
    if (value.has_requestedCellGrouping_r16) {
        if (value.requestedCellGrouping_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.requestedCellGrouping_r16_count; ++i) {
                Free_CellGrouping_r16(value.requestedCellGrouping_r16_items[i]);
            }
            std::free(value.requestedCellGrouping_r16_items);
            value.requestedCellGrouping_r16_items = nullptr;
        }
        value.requestedCellGrouping_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UE_CapabilityRequestFilterCommon_Mrdc_Request：ASN.1 mrdc-Request；源文件第 20854 行；SEQUENCE。
// Encode_UE_CapabilityRequestFilterCommon_Mrdc_Request 只读不分配；Decode_UE_CapabilityRequestFilterCommon_Mrdc_Request 可能 malloc（失败时内部已释放并清零）；Free_UE_CapabilityRequestFilterCommon_Mrdc_Request 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UE_CapabilityRequestFilterCommon_Mrdc_Request(Encoder& enc, const UE_CapabilityRequestFilterCommon_Mrdc_Request& value)
{
    enc.WriteBit(value.has_omitEN_DC);
    enc.WriteBit(value.has_includeNR_DC);
    enc.WriteBit(value.has_includeNE_DC);
    if (value.has_omitEN_DC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.omitEN_DC), 0, 0);
    }
    if (value.has_includeNR_DC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.includeNR_DC), 0, 0);
    }
    if (value.has_includeNE_DC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.includeNE_DC), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_UE_CapabilityRequestFilterCommon_Mrdc_Request(Decoder& dec, UE_CapabilityRequestFilterCommon_Mrdc_Request& value)
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
        value.omitEN_DC = (UE_CapabilityRequestFilterCommon_Mrdc_Request_OmitEN_DC)0;
    }
    if (present_1) {
        value.includeNR_DC = (UE_CapabilityRequestFilterCommon_Mrdc_Request_IncludeNR_DC)0;
    }
    if (present_2) {
        value.includeNE_DC = (UE_CapabilityRequestFilterCommon_Mrdc_Request_IncludeNE_DC)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_CapabilityRequestFilterCommon_Mrdc_Request(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_CapabilityRequestFilterCommon_Mrdc_Request(UE_CapabilityRequestFilterCommon_Mrdc_Request& value)
{
    if (value.has_omitEN_DC) {
    }
    if (value.has_includeNR_DC) {
    }
    if (value.has_includeNE_DC) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UE_CapabilityRequestFilterCommon：ASN.1 UE-CapabilityRequestFilterCommon；源文件第 20853 行；SEQUENCE。
// Encode_UE_CapabilityRequestFilterCommon 只读不分配；Decode_UE_CapabilityRequestFilterCommon 可能 malloc（失败时内部已释放并清零）；Free_UE_CapabilityRequestFilterCommon 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UE_CapabilityRequestFilterCommon(Encoder& enc, const UE_CapabilityRequestFilterCommon& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_mrdc_Request);
    if (value.has_mrdc_Request) {
        Encode_UE_CapabilityRequestFilterCommon_Mrdc_Request(enc, value.mrdc_Request);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(4u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        enc.WriteBit(value.has_extGroup4);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_UE_CapabilityRequestFilterCommon_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_UE_CapabilityRequestFilterCommon_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_UE_CapabilityRequestFilterCommon_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_UE_CapabilityRequestFilterCommon_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_UE_CapabilityRequestFilterCommon(Decoder& dec, UE_CapabilityRequestFilterCommon& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_UE_CapabilityRequestFilterCommon_Mrdc_Request(dec, value.mrdc_Request) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_UE_CapabilityRequestFilterCommon_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_UE_CapabilityRequestFilterCommon_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_UE_CapabilityRequestFilterCommon_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_UE_CapabilityRequestFilterCommon_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    Free_UE_CapabilityRequestFilterCommon(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_CapabilityRequestFilterCommon(UE_CapabilityRequestFilterCommon& value)
{
    if (value.has_mrdc_Request) {
        Free_UE_CapabilityRequestFilterCommon_Mrdc_Request(value.mrdc_Request);
    }
    if (value.has_extGroup1) {
        Free_UE_CapabilityRequestFilterCommon_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_UE_CapabilityRequestFilterCommon_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_UE_CapabilityRequestFilterCommon_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_UE_CapabilityRequestFilterCommon_ExtGroup4(value.extGroup4);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UECapabilityEnquiry_v1560_IEs：ASN.1 UECapabilityEnquiry-v1560-IEs；源文件第 2618 行；SEQUENCE。
// Encode_UECapabilityEnquiry_v1560_IEs 只读不分配；Decode_UECapabilityEnquiry_v1560_IEs 可能 malloc（失败时内部已释放并清零）；Free_UECapabilityEnquiry_v1560_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UECapabilityEnquiry_v1560_IEs(Encoder& enc, const UECapabilityEnquiry_v1560_IEs& value)
{
    enc.WriteBit(value.has_capabilityRequestFilterCommon);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_capabilityRequestFilterCommon) {
        Encode_UE_CapabilityRequestFilterCommon(enc, value.capabilityRequestFilterCommon);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UECapabilityEnquiry_v1610_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UECapabilityEnquiry_v1560_IEs(Decoder& dec, UECapabilityEnquiry_v1560_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_UE_CapabilityRequestFilterCommon(dec, value.capabilityRequestFilterCommon) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_UECapabilityEnquiry_v1610_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UECapabilityEnquiry_v1560_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UECapabilityEnquiry_v1560_IEs(UECapabilityEnquiry_v1560_IEs& value)
{
    if (value.has_capabilityRequestFilterCommon) {
        Free_UE_CapabilityRequestFilterCommon(value.capabilityRequestFilterCommon);
    }
    if (value.has_nonCriticalExtension) {
        Free_UECapabilityEnquiry_v1610_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UE_CapabilityRAT_ContainerList：ASN.1 UE-CapabilityRAT-ContainerList；源文件第 20832 行；SEQUENCE OF。
// Encode_UE_CapabilityRAT_ContainerList 只读不分配；Decode_UE_CapabilityRAT_ContainerList 可能 malloc（失败时内部已释放并清零）；Free_UE_CapabilityRAT_ContainerList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UE_CapabilityRAT_ContainerList(Encoder& enc, const UE_CapabilityRAT_ContainerList& value)
{
    enc.WriteConstrainedLength(value.count, 0u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_UE_CapabilityRAT_Container(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_UE_CapabilityRAT_ContainerList(Decoder& dec, UE_CapabilityRAT_ContainerList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(0u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (UE_CapabilityRAT_Container*)std::malloc((std::size_t)value.count * sizeof(UE_CapabilityRAT_Container));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(UE_CapabilityRAT_Container));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_UE_CapabilityRAT_Container(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_UE_CapabilityRAT_ContainerList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_CapabilityRAT_ContainerList(UE_CapabilityRAT_ContainerList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_UE_CapabilityRAT_Container(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UECapabilityInformation_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 2642 行；空 SEQUENCE{}。
// Encode_UECapabilityInformation_IEs_NonCriticalExtension 只读不分配；Decode_UECapabilityInformation_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_UECapabilityInformation_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UECapabilityInformation_IEs_NonCriticalExtension(Encoder& enc, const UECapabilityInformation_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_UECapabilityInformation_IEs_NonCriticalExtension(Decoder& dec, UECapabilityInformation_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UECapabilityInformation_IEs_NonCriticalExtension(UECapabilityInformation_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UECapabilityInformation_IEs：ASN.1 UECapabilityInformation-IEs；源文件第 2639 行；SEQUENCE。
// Encode_UECapabilityInformation_IEs 只读不分配；Decode_UECapabilityInformation_IEs 可能 malloc（失败时内部已释放并清零）；Free_UECapabilityInformation_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UECapabilityInformation_IEs(Encoder& enc, const UECapabilityInformation_IEs& value)
{
    enc.WriteBit(value.has_ue_CapabilityRAT_ContainerList);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_ue_CapabilityRAT_ContainerList) {
        Encode_UE_CapabilityRAT_ContainerList(enc, value.ue_CapabilityRAT_ContainerList);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UECapabilityInformation_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UECapabilityInformation_IEs(Decoder& dec, UECapabilityInformation_IEs& value)
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
        if (Decode_UE_CapabilityRAT_ContainerList(dec, value.ue_CapabilityRAT_ContainerList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_2) {
        if (Decode_UECapabilityInformation_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UECapabilityInformation_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UECapabilityInformation_IEs(UECapabilityInformation_IEs& value)
{
    if (value.has_ue_CapabilityRAT_ContainerList) {
        Free_UE_CapabilityRAT_ContainerList(value.ue_CapabilityRAT_ContainerList);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_UECapabilityInformation_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UECapabilityInformation_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 2635 行；空 SEQUENCE{}。
// Encode_UECapabilityInformation_CriticalExtensionsFuture 只读不分配；Decode_UECapabilityInformation_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_UECapabilityInformation_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UECapabilityInformation_CriticalExtensionsFuture(Encoder& enc, const UECapabilityInformation_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_UECapabilityInformation_CriticalExtensionsFuture(Decoder& dec, UECapabilityInformation_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UECapabilityInformation_CriticalExtensionsFuture(UECapabilityInformation_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UECapabilityInformation_CriticalExtensions：ASN.1 criticalExtensions；源文件第 2633 行；CHOICE。
// Encode_UECapabilityInformation_CriticalExtensions 只读不分配；Decode_UECapabilityInformation_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_UECapabilityInformation_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UECapabilityInformation_CriticalExtensions(Encoder& enc, const UECapabilityInformation_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case UECapabilityInformation_CriticalExtensions_Tag_ueCapabilityInformation:
        Encode_UECapabilityInformation_IEs(enc, value.u.ueCapabilityInformation);
        break;
    case UECapabilityInformation_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_UECapabilityInformation_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_UECapabilityInformation_CriticalExtensions(Decoder& dec, UECapabilityInformation_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (UECapabilityInformation_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case UECapabilityInformation_CriticalExtensions_Tag_ueCapabilityInformation: {
        if (Decode_UECapabilityInformation_IEs(dec, value.u.ueCapabilityInformation) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case UECapabilityInformation_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_UECapabilityInformation_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UECapabilityInformation_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UECapabilityInformation_CriticalExtensions(UECapabilityInformation_CriticalExtensions& value)
{
    switch (value.tag) {
    case UECapabilityInformation_CriticalExtensions_Tag_ueCapabilityInformation:
        Free_UECapabilityInformation_IEs(value.u.ueCapabilityInformation);
        break;
    case UECapabilityInformation_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_UECapabilityInformation_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UECapabilityInformation：ASN.1 UECapabilityInformation；源文件第 2631 行；SEQUENCE。
// Encode_UECapabilityInformation 只读不分配；Decode_UECapabilityInformation 可能 malloc（失败时内部已释放并清零）；Free_UECapabilityInformation 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UECapabilityInformation(Encoder& enc, const UECapabilityInformation& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.rrc_TransactionIdentifier), 0, 3);
    Encode_UECapabilityInformation_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_UECapabilityInformation(Decoder& dec, UECapabilityInformation& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.rrc_TransactionIdentifier = (RRC_TransactionIdentifier)tmp_value;
    }
    {
        if (Decode_UECapabilityInformation_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UECapabilityInformation(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UECapabilityInformation(UECapabilityInformation& value)
{
    Free_UECapabilityInformation_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FlightPathInfoReportConfig_r18：ASN.1 FlightPathInfoReportConfig-r18；源文件第 2680 行；SEQUENCE。
// Encode_FlightPathInfoReportConfig_r18 只读不分配；Decode_FlightPathInfoReportConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_FlightPathInfoReportConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FlightPathInfoReportConfig_r18(Encoder& enc, const FlightPathInfoReportConfig_r18& value)
{
    enc.WriteBit(value.has_includeTimeStamp_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxWayPointNumber_r18), 1, 20);
    if (value.has_includeTimeStamp_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.includeTimeStamp_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_FlightPathInfoReportConfig_r18(Decoder& dec, FlightPathInfoReportConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 20, tmp_value)) { goto fail; }
        value.maxWayPointNumber_r18 = (int64_t)tmp_value;
    }
    if (present_0) {
        value.includeTimeStamp_r18 = (FlightPathInfoReportConfig_r18_IncludeTimeStamp_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FlightPathInfoReportConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FlightPathInfoReportConfig_r18(FlightPathInfoReportConfig_r18& value)
{
    if (value.has_includeTimeStamp_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEInformationRequest_v1800_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 2677 行；空 SEQUENCE{}。
// Encode_UEInformationRequest_v1800_IEs_NonCriticalExtension 只读不分配；Decode_UEInformationRequest_v1800_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_UEInformationRequest_v1800_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEInformationRequest_v1800_IEs_NonCriticalExtension(Encoder& enc, const UEInformationRequest_v1800_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_UEInformationRequest_v1800_IEs_NonCriticalExtension(Decoder& dec, UEInformationRequest_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEInformationRequest_v1800_IEs_NonCriticalExtension(UEInformationRequest_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEInformationRequest_v1800_IEs：ASN.1 UEInformationRequest-v1800-IEs；源文件第 2673 行；SEQUENCE。
// Encode_UEInformationRequest_v1800_IEs 只读不分配；Decode_UEInformationRequest_v1800_IEs 可能 malloc（失败时内部已释放并清零）；Free_UEInformationRequest_v1800_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEInformationRequest_v1800_IEs(Encoder& enc, const UEInformationRequest_v1800_IEs& value)
{
    enc.WriteBit(value.has_flightPathInfoReq_r18);
    enc.WriteBit(value.has_successPSCell_ReportReq_r18);
    enc.WriteBit(value.has_reselectionMeasurementReq_r18);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_flightPathInfoReq_r18) {
        Encode_FlightPathInfoReportConfig_r18(enc, value.flightPathInfoReq_r18);
    }
    if (value.has_successPSCell_ReportReq_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.successPSCell_ReportReq_r18), 0, 0);
    }
    if (value.has_reselectionMeasurementReq_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.reselectionMeasurementReq_r18), 0, 0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UEInformationRequest_v1800_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UEInformationRequest_v1800_IEs(Decoder& dec, UEInformationRequest_v1800_IEs& value)
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
        if (Decode_FlightPathInfoReportConfig_r18(dec, value.flightPathInfoReq_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.successPSCell_ReportReq_r18 = (UEInformationRequest_v1800_IEs_SuccessPSCell_ReportReq_r18)0;
    }
    if (present_2) {
        value.reselectionMeasurementReq_r18 = (UEInformationRequest_v1800_IEs_ReselectionMeasurementReq_r18)0;
    }
    if (present_3) {
        if (Decode_UEInformationRequest_v1800_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UEInformationRequest_v1800_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEInformationRequest_v1800_IEs(UEInformationRequest_v1800_IEs& value)
{
    if (value.has_flightPathInfoReq_r18) {
        Free_FlightPathInfoReportConfig_r18(value.flightPathInfoReq_r18);
    }
    if (value.has_successPSCell_ReportReq_r18) {
    }
    if (value.has_reselectionMeasurementReq_r18) {
    }
    if (value.has_nonCriticalExtension) {
        Free_UEInformationRequest_v1800_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEInformationRequest_v1700_IEs：ASN.1 UEInformationRequest-v1700-IEs；源文件第 2667 行；SEQUENCE。
// Encode_UEInformationRequest_v1700_IEs 只读不分配；Decode_UEInformationRequest_v1700_IEs 可能 malloc（失败时内部已释放并清零）；Free_UEInformationRequest_v1700_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEInformationRequest_v1700_IEs(Encoder& enc, const UEInformationRequest_v1700_IEs& value)
{
    enc.WriteBit(value.has_successHO_ReportReq_r17);
    enc.WriteBit(value.has_coarseLocationRequest_r17);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_successHO_ReportReq_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.successHO_ReportReq_r17), 0, 0);
    }
    if (value.has_coarseLocationRequest_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.coarseLocationRequest_r17), 0, 0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UEInformationRequest_v1800_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UEInformationRequest_v1700_IEs(Decoder& dec, UEInformationRequest_v1700_IEs& value)
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
        value.successHO_ReportReq_r17 = (UEInformationRequest_v1700_IEs_SuccessHO_ReportReq_r17)0;
    }
    if (present_1) {
        value.coarseLocationRequest_r17 = (UEInformationRequest_v1700_IEs_CoarseLocationRequest_r17)0;
    }
    if (present_2) {
        if (Decode_UEInformationRequest_v1800_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UEInformationRequest_v1700_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEInformationRequest_v1700_IEs(UEInformationRequest_v1700_IEs& value)
{
    if (value.has_successHO_ReportReq_r17) {
    }
    if (value.has_coarseLocationRequest_r17) {
    }
    if (value.has_nonCriticalExtension) {
        Free_UEInformationRequest_v1800_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEInformationRequest_r16_IEs：ASN.1 UEInformationRequest-r16-IEs；源文件第 2656 行；SEQUENCE。
// Encode_UEInformationRequest_r16_IEs 只读不分配；Decode_UEInformationRequest_r16_IEs 可能 malloc（失败时内部已释放并清零）；Free_UEInformationRequest_r16_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEInformationRequest_r16_IEs(Encoder& enc, const UEInformationRequest_r16_IEs& value)
{
    enc.WriteBit(value.has_idleModeMeasurementReq_r16);
    enc.WriteBit(value.has_logMeasReportReq_r16);
    enc.WriteBit(value.has_connEstFailReportReq_r16);
    enc.WriteBit(value.has_ra_ReportReq_r16);
    enc.WriteBit(value.has_rlf_ReportReq_r16);
    enc.WriteBit(value.has_mobilityHistoryReportReq_r16);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_idleModeMeasurementReq_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.idleModeMeasurementReq_r16), 0, 0);
    }
    if (value.has_logMeasReportReq_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.logMeasReportReq_r16), 0, 0);
    }
    if (value.has_connEstFailReportReq_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.connEstFailReportReq_r16), 0, 0);
    }
    if (value.has_ra_ReportReq_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ra_ReportReq_r16), 0, 0);
    }
    if (value.has_rlf_ReportReq_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rlf_ReportReq_r16), 0, 0);
    }
    if (value.has_mobilityHistoryReportReq_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mobilityHistoryReportReq_r16), 0, 0);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UEInformationRequest_v1700_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UEInformationRequest_r16_IEs(Decoder& dec, UEInformationRequest_r16_IEs& value)
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
        value.idleModeMeasurementReq_r16 = (UEInformationRequest_r16_IEs_IdleModeMeasurementReq_r16)0;
    }
    if (present_1) {
        value.logMeasReportReq_r16 = (UEInformationRequest_r16_IEs_LogMeasReportReq_r16)0;
    }
    if (present_2) {
        value.connEstFailReportReq_r16 = (UEInformationRequest_r16_IEs_ConnEstFailReportReq_r16)0;
    }
    if (present_3) {
        value.ra_ReportReq_r16 = (UEInformationRequest_r16_IEs_Ra_ReportReq_r16)0;
    }
    if (present_4) {
        value.rlf_ReportReq_r16 = (UEInformationRequest_r16_IEs_Rlf_ReportReq_r16)0;
    }
    if (present_5) {
        value.mobilityHistoryReportReq_r16 = (UEInformationRequest_r16_IEs_MobilityHistoryReportReq_r16)0;
    }
    if (present_6) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_7) {
        if (Decode_UEInformationRequest_v1700_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UEInformationRequest_r16_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEInformationRequest_r16_IEs(UEInformationRequest_r16_IEs& value)
{
    if (value.has_idleModeMeasurementReq_r16) {
    }
    if (value.has_logMeasReportReq_r16) {
    }
    if (value.has_connEstFailReportReq_r16) {
    }
    if (value.has_ra_ReportReq_r16) {
    }
    if (value.has_rlf_ReportReq_r16) {
    }
    if (value.has_mobilityHistoryReportReq_r16) {
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_UEInformationRequest_v1700_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEInformationRequest_r16_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 2652 行；空 SEQUENCE{}。
// Encode_UEInformationRequest_r16_CriticalExtensionsFuture 只读不分配；Decode_UEInformationRequest_r16_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_UEInformationRequest_r16_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEInformationRequest_r16_CriticalExtensionsFuture(Encoder& enc, const UEInformationRequest_r16_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_UEInformationRequest_r16_CriticalExtensionsFuture(Decoder& dec, UEInformationRequest_r16_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEInformationRequest_r16_CriticalExtensionsFuture(UEInformationRequest_r16_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEInformationRequest_r16_CriticalExtensions：ASN.1 criticalExtensions；源文件第 2650 行；CHOICE。
// Encode_UEInformationRequest_r16_CriticalExtensions 只读不分配；Decode_UEInformationRequest_r16_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_UEInformationRequest_r16_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEInformationRequest_r16_CriticalExtensions(Encoder& enc, const UEInformationRequest_r16_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case UEInformationRequest_r16_CriticalExtensions_Tag_ueInformationRequest_r16:
        Encode_UEInformationRequest_r16_IEs(enc, value.u.ueInformationRequest_r16);
        break;
    case UEInformationRequest_r16_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_UEInformationRequest_r16_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_UEInformationRequest_r16_CriticalExtensions(Decoder& dec, UEInformationRequest_r16_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (UEInformationRequest_r16_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case UEInformationRequest_r16_CriticalExtensions_Tag_ueInformationRequest_r16: {
        if (Decode_UEInformationRequest_r16_IEs(dec, value.u.ueInformationRequest_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case UEInformationRequest_r16_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_UEInformationRequest_r16_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UEInformationRequest_r16_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEInformationRequest_r16_CriticalExtensions(UEInformationRequest_r16_CriticalExtensions& value)
{
    switch (value.tag) {
    case UEInformationRequest_r16_CriticalExtensions_Tag_ueInformationRequest_r16:
        Free_UEInformationRequest_r16_IEs(value.u.ueInformationRequest_r16);
        break;
    case UEInformationRequest_r16_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_UEInformationRequest_r16_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEInformationRequest_r16：ASN.1 UEInformationRequest-r16；源文件第 2648 行；SEQUENCE。
// Encode_UEInformationRequest_r16 只读不分配；Decode_UEInformationRequest_r16 可能 malloc（失败时内部已释放并清零）；Free_UEInformationRequest_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEInformationRequest_r16(Encoder& enc, const UEInformationRequest_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.rrc_TransactionIdentifier), 0, 3);
    Encode_UEInformationRequest_r16_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_UEInformationRequest_r16(Decoder& dec, UEInformationRequest_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.rrc_TransactionIdentifier = (RRC_TransactionIdentifier)tmp_value;
    }
    {
        if (Decode_UEInformationRequest_r16_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UEInformationRequest_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEInformationRequest_r16(UEInformationRequest_r16& value)
{
    Free_UEInformationRequest_r16_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FlightPathInfoReport_r18：ASN.1 FlightPathInfoReport-r18；源文件第 2722 行；SEQUENCE OF。
// Encode_FlightPathInfoReport_r18 只读不分配；Decode_FlightPathInfoReport_r18 可能 malloc（失败时内部已释放并清零）；Free_FlightPathInfoReport_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FlightPathInfoReport_r18(Encoder& enc, const FlightPathInfoReport_r18& value)
{
    enc.WriteConstrainedLength(value.count, 0u, 20u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_WayPoint_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_FlightPathInfoReport_r18(Decoder& dec, FlightPathInfoReport_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(0u, 20u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 20u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (WayPoint_r18*)std::malloc((std::size_t)value.count * sizeof(WayPoint_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(WayPoint_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_WayPoint_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_FlightPathInfoReport_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FlightPathInfoReport_r18(FlightPathInfoReport_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_WayPoint_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PerRAInfoList_v1660：ASN.1 PerRAInfoList-v1660；源文件第 2882 行；SEQUENCE OF。
// Encode_PerRAInfoList_v1660 只读不分配；Decode_PerRAInfoList_v1660 可能 malloc（失败时内部已释放并清零）；Free_PerRAInfoList_v1660 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PerRAInfoList_v1660(Encoder& enc, const PerRAInfoList_v1660& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 200u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PerRACSI_RSInfo_v1660(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_PerRAInfoList_v1660(Decoder& dec, PerRAInfoList_v1660& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 200u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 200u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PerRACSI_RSInfo_v1660*)std::malloc((std::size_t)value.count * sizeof(PerRACSI_RSInfo_v1660));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PerRACSI_RSInfo_v1660));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PerRACSI_RSInfo_v1660(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_PerRAInfoList_v1660(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PerRAInfoList_v1660(PerRAInfoList_v1660& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PerRACSI_RSInfo_v1660(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RA_InformationCommon_r16_ExtGroup1：ASN.1 RA_InformationCommon_r16_ExtGroup1；源文件第 2825 行；扩展添加组 [[ ]]。
// Encode_RA_InformationCommon_r16_ExtGroup1 只读不分配；Decode_RA_InformationCommon_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_RA_InformationCommon_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RA_InformationCommon_r16_ExtGroup1(Encoder& enc, const RA_InformationCommon_r16_ExtGroup1& value)
{
    enc.WriteBit(value.has_perRAInfoList_v1660);
    if (value.has_perRAInfoList_v1660) {
        Encode_PerRAInfoList_v1660(enc, value.perRAInfoList_v1660);
    }
    return enc.Error();
}

ErrorCode Decode_RA_InformationCommon_r16_ExtGroup1(Decoder& dec, RA_InformationCommon_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_PerRAInfoList_v1660(dec, value.perRAInfoList_v1660) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RA_InformationCommon_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RA_InformationCommon_r16_ExtGroup1(RA_InformationCommon_r16_ExtGroup1& value)
{
    if (value.has_perRAInfoList_v1660) {
        Free_PerRAInfoList_v1660(value.perRAInfoList_v1660);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RA_InformationCommon_r16_ExtGroup2：ASN.1 RA_InformationCommon_r16_ExtGroup2；源文件第 2828 行；扩展添加组 [[ ]]。
// Encode_RA_InformationCommon_r16_ExtGroup2 只读不分配；Decode_RA_InformationCommon_r16_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_RA_InformationCommon_r16_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RA_InformationCommon_r16_ExtGroup2(Encoder& enc, const RA_InformationCommon_r16_ExtGroup2& value)
{
    enc.WriteBit(value.has_msg1_SCS_From_prach_ConfigurationIndex_r16);
    if (value.has_msg1_SCS_From_prach_ConfigurationIndex_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msg1_SCS_From_prach_ConfigurationIndex_r16), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_RA_InformationCommon_r16_ExtGroup2(Decoder& dec, RA_InformationCommon_r16_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.msg1_SCS_From_prach_ConfigurationIndex_r16 = (RA_InformationCommon_r16_ExtGroup2_Msg1_SCS_From_prach_ConfigurationIndex_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RA_InformationCommon_r16_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RA_InformationCommon_r16_ExtGroup2(RA_InformationCommon_r16_ExtGroup2& value)
{
    if (value.has_msg1_SCS_From_prach_ConfigurationIndex_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RA_InformationCommon_r16_ExtGroup3：ASN.1 RA_InformationCommon_r16_ExtGroup3；源文件第 2831 行；扩展添加组 [[ ]]。
// Encode_RA_InformationCommon_r16_ExtGroup3 只读不分配；Decode_RA_InformationCommon_r16_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_RA_InformationCommon_r16_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RA_InformationCommon_r16_ExtGroup3(Encoder& enc, const RA_InformationCommon_r16_ExtGroup3& value)
{
    enc.WriteBit(value.has_msg1_SCS_From_prach_ConfigurationIndexCFRA_r16);
    if (value.has_msg1_SCS_From_prach_ConfigurationIndexCFRA_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msg1_SCS_From_prach_ConfigurationIndexCFRA_r16), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_RA_InformationCommon_r16_ExtGroup3(Decoder& dec, RA_InformationCommon_r16_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.msg1_SCS_From_prach_ConfigurationIndexCFRA_r16 = (RA_InformationCommon_r16_ExtGroup3_Msg1_SCS_From_prach_ConfigurationIndexCFRA_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RA_InformationCommon_r16_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RA_InformationCommon_r16_ExtGroup3(RA_InformationCommon_r16_ExtGroup3& value)
{
    if (value.has_msg1_SCS_From_prach_ConfigurationIndexCFRA_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RA_InformationCommon_r16_ExtGroup4：ASN.1 RA_InformationCommon_r16_ExtGroup4；源文件第 2834 行；扩展添加组 [[ ]]。
// Encode_RA_InformationCommon_r16_ExtGroup4 只读不分配；Decode_RA_InformationCommon_r16_ExtGroup4 可能 malloc（失败时内部已释放并清零）；Free_RA_InformationCommon_r16_ExtGroup4 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RA_InformationCommon_r16_ExtGroup4(Encoder& enc, const RA_InformationCommon_r16_ExtGroup4& value)
{
    enc.WriteBit(value.has_msgA_RO_FrequencyStart_r17);
    enc.WriteBit(value.has_msgA_RO_FrequencyStartCFRA_r17);
    enc.WriteBit(value.has_msgA_SubcarrierSpacing_r17);
    enc.WriteBit(value.has_msgA_RO_FDM_r17);
    enc.WriteBit(value.has_msgA_RO_FDMCFRA_r17);
    enc.WriteBit(value.has_msgA_SCS_From_prach_ConfigurationIndex_r17);
    enc.WriteBit(value.has_msgA_TransMax_r17);
    enc.WriteBit(value.has_msgA_MCS_r17);
    enc.WriteBit(value.has_nrofPRBs_PerMsgA_PO_r17);
    enc.WriteBit(value.has_msgA_PUSCH_TimeDomainAllocation_r17);
    enc.WriteBit(value.has_frequencyStartMsgA_PUSCH_r17);
    enc.WriteBit(value.has_nrofMsgA_PO_FDM_r17);
    enc.WriteBit(value.has_dlPathlossRSRP_r17);
    enc.WriteBit(value.has_intendedSIBs_r17);
    enc.WriteBit(value.has_ssbsForSI_Acquisition_r17);
    enc.WriteBit(value.has_msgA_PUSCH_PayloadSize_r17);
    enc.WriteBit(value.has_onDemandSISuccess_r17);
    if (value.has_msgA_RO_FrequencyStart_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_RO_FrequencyStart_r17), 0, 274);
    }
    if (value.has_msgA_RO_FrequencyStartCFRA_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_RO_FrequencyStartCFRA_r17), 0, 274);
    }
    if (value.has_msgA_SubcarrierSpacing_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_SubcarrierSpacing_r17), 0, 7);
    }
    if (value.has_msgA_RO_FDM_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_RO_FDM_r17), 0, 3);
    }
    if (value.has_msgA_RO_FDMCFRA_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_RO_FDMCFRA_r17), 0, 3);
    }
    if (value.has_msgA_SCS_From_prach_ConfigurationIndex_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_SCS_From_prach_ConfigurationIndex_r17), 0, 3);
    }
    if (value.has_msgA_TransMax_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_TransMax_r17), 0, 9);
    }
    if (value.has_msgA_MCS_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_MCS_r17), 0, 15);
    }
    if (value.has_nrofPRBs_PerMsgA_PO_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrofPRBs_PerMsgA_PO_r17), 1, 32);
    }
    if (value.has_msgA_PUSCH_TimeDomainAllocation_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_PUSCH_TimeDomainAllocation_r17), 1, 16);
    }
    if (value.has_frequencyStartMsgA_PUSCH_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.frequencyStartMsgA_PUSCH_r17), 0, 274);
    }
    if (value.has_nrofMsgA_PO_FDM_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrofMsgA_PO_FDM_r17), 0, 3);
    }
    if (value.has_dlPathlossRSRP_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dlPathlossRSRP_r17), 0, 127);
    }
    if (value.has_intendedSIBs_r17) {
enc.WriteConstrainedLength(value.intendedSIBs_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.intendedSIBs_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.intendedSIBs_r17_items[i]), 0, 15);
}
    }
    if (value.has_ssbsForSI_Acquisition_r17) {
enc.WriteConstrainedLength(value.ssbsForSI_Acquisition_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.ssbsForSI_Acquisition_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.ssbsForSI_Acquisition_r17_items[i]), 0, 63);
}
    }
    if (value.has_msgA_PUSCH_PayloadSize_r17) {
        enc.WriteFixedBitString(value.msgA_PUSCH_PayloadSize_r17.bytes, value.msgA_PUSCH_PayloadSize_r17.bitLength, 5, 5);
    }
    if (value.has_onDemandSISuccess_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.onDemandSISuccess_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_RA_InformationCommon_r16_ExtGroup4(Decoder& dec, RA_InformationCommon_r16_ExtGroup4& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 274, tmp_value)) { goto fail; }
        value.msgA_RO_FrequencyStart_r17 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 274, tmp_value)) { goto fail; }
        value.msgA_RO_FrequencyStartCFRA_r17 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.msgA_SubcarrierSpacing_r17 = (SubcarrierSpacing)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.msgA_RO_FDM_r17 = (RA_InformationCommon_r16_ExtGroup4_MsgA_RO_FDM_r17)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.msgA_RO_FDMCFRA_r17 = (RA_InformationCommon_r16_ExtGroup4_MsgA_RO_FDMCFRA_r17)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.msgA_SCS_From_prach_ConfigurationIndex_r17 = (RA_InformationCommon_r16_ExtGroup4_MsgA_SCS_From_prach_ConfigurationIndex_r17)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.msgA_TransMax_r17 = (RA_InformationCommon_r16_ExtGroup4_MsgA_TransMax_r17)tmp_value;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.msgA_MCS_r17 = (int64_t)tmp_value;
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.nrofPRBs_PerMsgA_PO_r17 = (int64_t)tmp_value;
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.msgA_PUSCH_TimeDomainAllocation_r17 = (int64_t)tmp_value;
    }
    if (present_10) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 274, tmp_value)) { goto fail; }
        value.frequencyStartMsgA_PUSCH_r17 = (int64_t)tmp_value;
    }
    if (present_11) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.nrofMsgA_PO_FDM_r17 = (RA_InformationCommon_r16_ExtGroup4_NrofMsgA_PO_FDM_r17)tmp_value;
    }
    if (present_12) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.dlPathlossRSRP_r17 = (RSRP_Range)tmp_value;
    }
    if (present_13) {
if (!dec.ReadConstrainedLength(0u, 0u, value.intendedSIBs_r17_count)) { goto fail; }
if (value.intendedSIBs_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.intendedSIBs_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.intendedSIBs_r17_count > 0u) {
    value.intendedSIBs_r17_items = (SIB_Type_r17*)std::malloc((std::size_t)value.intendedSIBs_r17_count * sizeof(SIB_Type_r17));
    if (value.intendedSIBs_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.intendedSIBs_r17_items, 0, (std::size_t)value.intendedSIBs_r17_count * sizeof(SIB_Type_r17));
}
for (std::uint32_t i = 0; i < value.intendedSIBs_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
    value.intendedSIBs_r17_items[i] = (SIB_Type_r17)tmp_value;
}
    }
    if (present_14) {
if (!dec.ReadConstrainedLength(0u, 0u, value.ssbsForSI_Acquisition_r17_count)) { goto fail; }
if (value.ssbsForSI_Acquisition_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.ssbsForSI_Acquisition_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.ssbsForSI_Acquisition_r17_count > 0u) {
    value.ssbsForSI_Acquisition_r17_items = (SSB_Index*)std::malloc((std::size_t)value.ssbsForSI_Acquisition_r17_count * sizeof(SSB_Index));
    if (value.ssbsForSI_Acquisition_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.ssbsForSI_Acquisition_r17_items, 0, (std::size_t)value.ssbsForSI_Acquisition_r17_count * sizeof(SSB_Index));
}
for (std::uint32_t i = 0; i < value.ssbsForSI_Acquisition_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.ssbsForSI_Acquisition_r17_items[i] = (SSB_Index)tmp_value;
}
    }
    if (present_15) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 5)) { goto fail; }
        string_length = 5;
        value.msgA_PUSCH_PayloadSize_r17.bytes = string_bytes;
        value.msgA_PUSCH_PayloadSize_r17.bitLength = string_length;
    }
    if (present_16) {
        value.onDemandSISuccess_r17 = (RA_InformationCommon_r16_ExtGroup4_OnDemandSISuccess_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RA_InformationCommon_r16_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RA_InformationCommon_r16_ExtGroup4(RA_InformationCommon_r16_ExtGroup4& value)
{
    if (value.has_msgA_RO_FrequencyStart_r17) {
    }
    if (value.has_msgA_RO_FrequencyStartCFRA_r17) {
    }
    if (value.has_msgA_SubcarrierSpacing_r17) {
    }
    if (value.has_msgA_RO_FDM_r17) {
    }
    if (value.has_msgA_RO_FDMCFRA_r17) {
    }
    if (value.has_msgA_SCS_From_prach_ConfigurationIndex_r17) {
    }
    if (value.has_msgA_TransMax_r17) {
    }
    if (value.has_msgA_MCS_r17) {
    }
    if (value.has_nrofPRBs_PerMsgA_PO_r17) {
    }
    if (value.has_msgA_PUSCH_TimeDomainAllocation_r17) {
    }
    if (value.has_frequencyStartMsgA_PUSCH_r17) {
    }
    if (value.has_nrofMsgA_PO_FDM_r17) {
    }
    if (value.has_dlPathlossRSRP_r17) {
    }
    if (value.has_intendedSIBs_r17) {
        if (value.intendedSIBs_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.intendedSIBs_r17_count; ++i) {
            }
            std::free(value.intendedSIBs_r17_items);
            value.intendedSIBs_r17_items = nullptr;
        }
        value.intendedSIBs_r17_count = 0;
    }
    if (value.has_ssbsForSI_Acquisition_r17) {
        if (value.ssbsForSI_Acquisition_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.ssbsForSI_Acquisition_r17_count; ++i) {
            }
            std::free(value.ssbsForSI_Acquisition_r17_items);
            value.ssbsForSI_Acquisition_r17_items = nullptr;
        }
        value.ssbsForSI_Acquisition_r17_count = 0;
    }
    if (value.has_msgA_PUSCH_PayloadSize_r17) {
        std::free(value.msgA_PUSCH_PayloadSize_r17.bytes);
        value.msgA_PUSCH_PayloadSize_r17.bytes = nullptr;
        value.msgA_PUSCH_PayloadSize_r17.bitLength = 0;
    }
    if (value.has_onDemandSISuccess_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NSAG_List_r17：ASN.1 NSAG-List-r17；源文件第 6832 行；SEQUENCE OF。
// Encode_NSAG_List_r17 只读不分配；Decode_NSAG_List_r17 可能 malloc（失败时内部已释放并清零）；Free_NSAG_List_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NSAG_List_r17(Encoder& enc, const NSAG_List_r17& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteFixedBitString(value.items[i].bytes, value.items[i].bitLength, 8, 8);
    }
    return enc.Error();
}

ErrorCode Decode_NSAG_List_r17(Decoder& dec, NSAG_List_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (NSAG_ID_r17*)std::malloc((std::size_t)value.count * sizeof(NSAG_ID_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(NSAG_ID_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
    string_length = 8;
    value.items[i].bytes = string_bytes;
    value.items[i].bitLength = string_length;
}
    return dec.Error();
    } while (false);
fail:
    Free_NSAG_List_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NSAG_List_r17(NSAG_List_r17& value)
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
// ReportedFeatureCombination_r18：ASN.1 ReportedFeatureCombination-r18；源文件第 2870 行；SEQUENCE。
// Encode_ReportedFeatureCombination_r18 只读不分配；Decode_ReportedFeatureCombination_r18 可能 malloc（失败时内部已释放并清零）；Free_ReportedFeatureCombination_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ReportedFeatureCombination_r18(Encoder& enc, const ReportedFeatureCombination_r18& value)
{
    enc.WriteBit(value.has_redCap_r18);
    enc.WriteBit(value.has_smallData_r18);
    enc.WriteBit(value.has_nsag_r18);
    enc.WriteBit(value.has_msg3_Repetitions_r18);
    enc.WriteBit(value.has_msg1_Repetitions_r18);
    enc.WriteBit(value.has_eRedCap_r18);
    enc.WriteBit(value.has_triggered_S_NSSAI_List_r18);
    if (value.has_redCap_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.redCap_r18), 0, 0);
    }
    if (value.has_smallData_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.smallData_r18), 0, 0);
    }
    if (value.has_nsag_r18) {
        Encode_NSAG_List_r17(enc, value.nsag_r18);
    }
    if (value.has_msg3_Repetitions_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msg3_Repetitions_r18), 0, 0);
    }
    if (value.has_msg1_Repetitions_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msg1_Repetitions_r18), 0, 0);
    }
    if (value.has_eRedCap_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eRedCap_r18), 0, 0);
    }
    if (value.has_triggered_S_NSSAI_List_r18) {
enc.WriteConstrainedLength(value.triggered_S_NSSAI_List_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.triggered_S_NSSAI_List_r18_count; ++i) {
    Encode_S_NSSAI(enc, value.triggered_S_NSSAI_List_r18_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_ReportedFeatureCombination_r18(Decoder& dec, ReportedFeatureCombination_r18& value)
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
        value.redCap_r18 = (ReportedFeatureCombination_r18_RedCap_r18)0;
    }
    if (present_1) {
        value.smallData_r18 = (ReportedFeatureCombination_r18_SmallData_r18)0;
    }
    if (present_2) {
        if (Decode_NSAG_List_r17(dec, value.nsag_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        value.msg3_Repetitions_r18 = (ReportedFeatureCombination_r18_Msg3_Repetitions_r18)0;
    }
    if (present_4) {
        value.msg1_Repetitions_r18 = (ReportedFeatureCombination_r18_Msg1_Repetitions_r18)0;
    }
    if (present_5) {
        value.eRedCap_r18 = (ReportedFeatureCombination_r18_ERedCap_r18)0;
    }
    if (present_6) {
if (!dec.ReadConstrainedLength(0u, 0u, value.triggered_S_NSSAI_List_r18_count)) { goto fail; }
if (value.triggered_S_NSSAI_List_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.triggered_S_NSSAI_List_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.triggered_S_NSSAI_List_r18_count > 0u) {
    value.triggered_S_NSSAI_List_r18_items = (S_NSSAI*)std::malloc((std::size_t)value.triggered_S_NSSAI_List_r18_count * sizeof(S_NSSAI));
    if (value.triggered_S_NSSAI_List_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.triggered_S_NSSAI_List_r18_items, 0, (std::size_t)value.triggered_S_NSSAI_List_r18_count * sizeof(S_NSSAI));
}
for (std::uint32_t i = 0; i < value.triggered_S_NSSAI_List_r18_count; ++i) {
    if (Decode_S_NSSAI(dec, value.triggered_S_NSSAI_List_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReportedFeatureCombination_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReportedFeatureCombination_r18(ReportedFeatureCombination_r18& value)
{
    if (value.has_redCap_r18) {
    }
    if (value.has_smallData_r18) {
    }
    if (value.has_nsag_r18) {
        Free_NSAG_List_r17(value.nsag_r18);
    }
    if (value.has_msg3_Repetitions_r18) {
    }
    if (value.has_msg1_Repetitions_r18) {
    }
    if (value.has_eRedCap_r18) {
    }
    if (value.has_triggered_S_NSSAI_List_r18) {
        if (value.triggered_S_NSSAI_List_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.triggered_S_NSSAI_List_r18_count; ++i) {
                Free_S_NSSAI(value.triggered_S_NSSAI_List_r18_items[i]);
            }
            std::free(value.triggered_S_NSSAI_List_r18_items);
            value.triggered_S_NSSAI_List_r18_items = nullptr;
        }
        value.triggered_S_NSSAI_List_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PerRAInfoList_v1800：ASN.1 PerRAInfoList-v1800；源文件第 2889 行；SEQUENCE OF。
// Encode_PerRAInfoList_v1800 只读不分配；Decode_PerRAInfoList_v1800 可能 malloc（失败时内部已释放并清零）；Free_PerRAInfoList_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PerRAInfoList_v1800(Encoder& enc, const PerRAInfoList_v1800& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 200u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PerRAInfo_v1800(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_PerRAInfoList_v1800(Decoder& dec, PerRAInfoList_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 200u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 200u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PerRAInfo_v1800*)std::malloc((std::size_t)value.count * sizeof(PerRAInfo_v1800));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PerRAInfo_v1800));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PerRAInfo_v1800(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_PerRAInfoList_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PerRAInfoList_v1800(PerRAInfoList_v1800& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PerRAInfo_v1800(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RA_InformationCommon_r16_ExtGroup5：ASN.1 RA_InformationCommon_r16_ExtGroup5；源文件第 2853 行；扩展添加组 [[ ]]。
// Encode_RA_InformationCommon_r16_ExtGroup5 只读不分配；Decode_RA_InformationCommon_r16_ExtGroup5 可能 malloc（失败时内部已释放并清零）；Free_RA_InformationCommon_r16_ExtGroup5 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RA_InformationCommon_r16_ExtGroup5(Encoder& enc, const RA_InformationCommon_r16_ExtGroup5& value)
{
    enc.WriteBit(value.has_usedFeatureCombination_r18);
    enc.WriteBit(value.has_triggeredFeatureCombination_r18);
    enc.WriteBit(value.has_startPreambleForThisPartition_r18);
    enc.WriteBit(value.has_numberOfPreamblesPerSSB_ForThisPartition_r18);
    enc.WriteBit(value.has_attemptedBWP_InfoList_r18);
    enc.WriteBit(value.has_numberOfLBTFailures_r18);
    enc.WriteBit(value.has_perRAInfoList_v1800);
    enc.WriteBit(value.has_sdt_Failed_r18);
    enc.WriteBit(value.has_intendedSIBs_r18);
    if (value.has_usedFeatureCombination_r18) {
        Encode_ReportedFeatureCombination_r18(enc, value.usedFeatureCombination_r18);
    }
    if (value.has_triggeredFeatureCombination_r18) {
        Encode_ReportedFeatureCombination_r18(enc, value.triggeredFeatureCombination_r18);
    }
    if (value.has_startPreambleForThisPartition_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.startPreambleForThisPartition_r18), 0, 63);
    }
    if (value.has_numberOfPreamblesPerSSB_ForThisPartition_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.numberOfPreamblesPerSSB_ForThisPartition_r18), 1, 64);
    }
    if (value.has_attemptedBWP_InfoList_r18) {
enc.WriteConstrainedLength(value.attemptedBWP_InfoList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.attemptedBWP_InfoList_r18_count; ++i) {
    Encode_AttemptedBWP_Info_r18(enc, value.attemptedBWP_InfoList_r18_items[i]);
}
    }
    if (value.has_numberOfLBTFailures_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.numberOfLBTFailures_r18), 1, 128);
    }
    if (value.has_perRAInfoList_v1800) {
        Encode_PerRAInfoList_v1800(enc, value.perRAInfoList_v1800);
    }
    if (value.has_sdt_Failed_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sdt_Failed_r18), 0, 0);
    }
    if (value.has_intendedSIBs_r18) {
enc.WriteConstrainedLength(value.intendedSIBs_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.intendedSIBs_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.intendedSIBs_r18_items[i]), 0, 15);
}
    }
    return enc.Error();
}

ErrorCode Decode_RA_InformationCommon_r16_ExtGroup5(Decoder& dec, RA_InformationCommon_r16_ExtGroup5& value)
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
        if (Decode_ReportedFeatureCombination_r18(dec, value.usedFeatureCombination_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_ReportedFeatureCombination_r18(dec, value.triggeredFeatureCombination_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.startPreambleForThisPartition_r18 = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.numberOfPreamblesPerSSB_ForThisPartition_r18 = (int64_t)tmp_value;
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.attemptedBWP_InfoList_r18_count)) { goto fail; }
if (value.attemptedBWP_InfoList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.attemptedBWP_InfoList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.attemptedBWP_InfoList_r18_count > 0u) {
    value.attemptedBWP_InfoList_r18_items = (AttemptedBWP_Info_r18*)std::malloc((std::size_t)value.attemptedBWP_InfoList_r18_count * sizeof(AttemptedBWP_Info_r18));
    if (value.attemptedBWP_InfoList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.attemptedBWP_InfoList_r18_items, 0, (std::size_t)value.attemptedBWP_InfoList_r18_count * sizeof(AttemptedBWP_Info_r18));
}
for (std::uint32_t i = 0; i < value.attemptedBWP_InfoList_r18_count; ++i) {
    if (Decode_AttemptedBWP_Info_r18(dec, value.attemptedBWP_InfoList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 128, tmp_value)) { goto fail; }
        value.numberOfLBTFailures_r18 = (int64_t)tmp_value;
    }
    if (present_6) {
        if (Decode_PerRAInfoList_v1800(dec, value.perRAInfoList_v1800) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        value.sdt_Failed_r18 = (RA_InformationCommon_r16_ExtGroup5_Sdt_Failed_r18)0;
    }
    if (present_8) {
if (!dec.ReadConstrainedLength(0u, 0u, value.intendedSIBs_r18_count)) { goto fail; }
if (value.intendedSIBs_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.intendedSIBs_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.intendedSIBs_r18_count > 0u) {
    value.intendedSIBs_r18_items = (SIB_Type_r18*)std::malloc((std::size_t)value.intendedSIBs_r18_count * sizeof(SIB_Type_r18));
    if (value.intendedSIBs_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.intendedSIBs_r18_items, 0, (std::size_t)value.intendedSIBs_r18_count * sizeof(SIB_Type_r18));
}
for (std::uint32_t i = 0; i < value.intendedSIBs_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
    value.intendedSIBs_r18_items[i] = (SIB_Type_r18)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_RA_InformationCommon_r16_ExtGroup5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RA_InformationCommon_r16_ExtGroup5(RA_InformationCommon_r16_ExtGroup5& value)
{
    if (value.has_usedFeatureCombination_r18) {
        Free_ReportedFeatureCombination_r18(value.usedFeatureCombination_r18);
    }
    if (value.has_triggeredFeatureCombination_r18) {
        Free_ReportedFeatureCombination_r18(value.triggeredFeatureCombination_r18);
    }
    if (value.has_startPreambleForThisPartition_r18) {
    }
    if (value.has_numberOfPreamblesPerSSB_ForThisPartition_r18) {
    }
    if (value.has_attemptedBWP_InfoList_r18) {
        if (value.attemptedBWP_InfoList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.attemptedBWP_InfoList_r18_count; ++i) {
                Free_AttemptedBWP_Info_r18(value.attemptedBWP_InfoList_r18_items[i]);
            }
            std::free(value.attemptedBWP_InfoList_r18_items);
            value.attemptedBWP_InfoList_r18_items = nullptr;
        }
        value.attemptedBWP_InfoList_r18_count = 0;
    }
    if (value.has_numberOfLBTFailures_r18) {
    }
    if (value.has_perRAInfoList_v1800) {
        Free_PerRAInfoList_v1800(value.perRAInfoList_v1800);
    }
    if (value.has_sdt_Failed_r18) {
    }
    if (value.has_intendedSIBs_r18) {
        if (value.intendedSIBs_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.intendedSIBs_r18_count; ++i) {
            }
            std::free(value.intendedSIBs_r18_items);
            value.intendedSIBs_r18_items = nullptr;
        }
        value.intendedSIBs_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RA_InformationCommon_r16：ASN.1 RA-InformationCommon-r16；源文件第 2813 行；SEQUENCE。
// Encode_RA_InformationCommon_r16 只读不分配；Decode_RA_InformationCommon_r16 可能 malloc（失败时内部已释放并清零）；Free_RA_InformationCommon_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RA_InformationCommon_r16(Encoder& enc, const RA_InformationCommon_r16& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4 || value.has_extGroup5;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_msg1_FrequencyStart_r16);
    enc.WriteBit(value.has_msg1_FrequencyStartCFRA_r16);
    enc.WriteBit(value.has_msg1_SubcarrierSpacing_r16);
    enc.WriteBit(value.has_msg1_SubcarrierSpacingCFRA_r16);
    enc.WriteBit(value.has_msg1_FDM_r16);
    enc.WriteBit(value.has_msg1_FDMCFRA_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.absoluteFrequencyPointA_r16), 0, 3279165);
    enc.WriteConstrainedInteger((std::int64_t)(value.locationAndBandwidth_r16), 0, 37949);
    enc.WriteConstrainedInteger((std::int64_t)(value.subcarrierSpacing_r16), 0, 7);
    if (value.has_msg1_FrequencyStart_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msg1_FrequencyStart_r16), 0, 274);
    }
    if (value.has_msg1_FrequencyStartCFRA_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msg1_FrequencyStartCFRA_r16), 0, 274);
    }
    if (value.has_msg1_SubcarrierSpacing_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msg1_SubcarrierSpacing_r16), 0, 7);
    }
    if (value.has_msg1_SubcarrierSpacingCFRA_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msg1_SubcarrierSpacingCFRA_r16), 0, 7);
    }
    if (value.has_msg1_FDM_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msg1_FDM_r16), 0, 3);
    }
    if (value.has_msg1_FDMCFRA_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msg1_FDMCFRA_r16), 0, 3);
    }
    Encode_PerRAInfoList_r16(enc, value.perRAInfoList_r16);
    if (any_extension) {
        enc.WriteNormallySmallLength(5u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        enc.WriteBit(value.has_extGroup4);
        enc.WriteBit(value.has_extGroup5);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_RA_InformationCommon_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_RA_InformationCommon_r16_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_RA_InformationCommon_r16_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_RA_InformationCommon_r16_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup5) {
    Encoder sub;
    Encode_RA_InformationCommon_r16_ExtGroup5(sub, value.extGroup5);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_RA_InformationCommon_r16(Decoder& dec, RA_InformationCommon_r16& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.absoluteFrequencyPointA_r16 = (ARFCN_ValueNR)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 37949, tmp_value)) { goto fail; }
        value.locationAndBandwidth_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.subcarrierSpacing_r16 = (SubcarrierSpacing)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 274, tmp_value)) { goto fail; }
        value.msg1_FrequencyStart_r16 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 274, tmp_value)) { goto fail; }
        value.msg1_FrequencyStartCFRA_r16 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.msg1_SubcarrierSpacing_r16 = (SubcarrierSpacing)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.msg1_SubcarrierSpacingCFRA_r16 = (SubcarrierSpacing)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.msg1_FDM_r16 = (RA_InformationCommon_r16_Msg1_FDM_r16)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.msg1_FDMCFRA_r16 = (RA_InformationCommon_r16_Msg1_FDMCFRA_r16)tmp_value;
    }
    {
        if (Decode_PerRAInfoList_r16(dec, value.perRAInfoList_r16) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_RA_InformationCommon_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_RA_InformationCommon_r16_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_RA_InformationCommon_r16_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_RA_InformationCommon_r16_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    if (Decode_RA_InformationCommon_r16_ExtGroup5(sub, value.extGroup5) != ErrorCode_Ok) {
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
    Free_RA_InformationCommon_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RA_InformationCommon_r16(RA_InformationCommon_r16& value)
{
    if (value.has_msg1_FrequencyStart_r16) {
    }
    if (value.has_msg1_FrequencyStartCFRA_r16) {
    }
    if (value.has_msg1_SubcarrierSpacing_r16) {
    }
    if (value.has_msg1_SubcarrierSpacingCFRA_r16) {
    }
    if (value.has_msg1_FDM_r16) {
    }
    if (value.has_msg1_FDMCFRA_r16) {
    }
    Free_PerRAInfoList_r16(value.perRAInfoList_r16);
    if (value.has_extGroup1) {
        Free_RA_InformationCommon_r16_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_RA_InformationCommon_r16_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_RA_InformationCommon_r16_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_RA_InformationCommon_r16_ExtGroup4(value.extGroup4);
    }
    if (value.has_extGroup5) {
        Free_RA_InformationCommon_r16_ExtGroup5(value.extGroup5);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SPR_Cause_r18：ASN.1 SPR-Cause-r18；源文件第 3166 行；SEQUENCE。
// Encode_SPR_Cause_r18 只读不分配；Decode_SPR_Cause_r18 可能 malloc（失败时内部已释放并清零）；Free_SPR_Cause_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SPR_Cause_r18(Encoder& enc, const SPR_Cause_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_t304_cause_r18);
    enc.WriteBit(value.has_t310_cause_r18);
    enc.WriteBit(value.has_t312_cause_r18);
    if (value.has_t304_cause_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.t304_cause_r18), 0, 0);
    }
    if (value.has_t310_cause_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.t310_cause_r18), 0, 0);
    }
    if (value.has_t312_cause_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.t312_cause_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SPR_Cause_r18(Decoder& dec, SPR_Cause_r18& value)
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
        value.t304_cause_r18 = (SPR_Cause_r18_T304_cause_r18)0;
    }
    if (present_1) {
        value.t310_cause_r18 = (SPR_Cause_r18_T310_cause_r18)0;
    }
    if (present_2) {
        value.t312_cause_r18 = (SPR_Cause_r18_T312_cause_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SPR_Cause_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SPR_Cause_r18(SPR_Cause_r18& value)
{
    if (value.has_t304_cause_r18) {
    }
    if (value.has_t310_cause_r18) {
    }
    if (value.has_t312_cause_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CGI_Info_Logging_r16：ASN.1 CGI-Info-Logging-r16；源文件第 5138 行；SEQUENCE。
// Encode_CGI_Info_Logging_r16 只读不分配；Decode_CGI_Info_Logging_r16 可能 malloc（失败时内部已释放并清零）；Free_CGI_Info_Logging_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CGI_Info_Logging_r16(Encoder& enc, const CGI_Info_Logging_r16& value)
{
    enc.WriteBit(value.has_trackingAreaCode_r16);
    Encode_PLMN_Identity(enc, value.plmn_Identity_r16);
    enc.WriteFixedBitString(value.cellIdentity_r16.bytes, value.cellIdentity_r16.bitLength, 36, 36);
    if (value.has_trackingAreaCode_r16) {
        enc.WriteFixedBitString(value.trackingAreaCode_r16.bytes, value.trackingAreaCode_r16.bitLength, 24, 24);
    }
    return enc.Error();
}

ErrorCode Decode_CGI_Info_Logging_r16(Decoder& dec, CGI_Info_Logging_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_PLMN_Identity(dec, value.plmn_Identity_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 36)) { goto fail; }
        string_length = 36;
        value.cellIdentity_r16.bytes = string_bytes;
        value.cellIdentity_r16.bitLength = string_length;
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.trackingAreaCode_r16.bytes = string_bytes;
        value.trackingAreaCode_r16.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CGI_Info_Logging_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CGI_Info_Logging_r16(CGI_Info_Logging_r16& value)
{
    Free_PLMN_Identity(value.plmn_Identity_r16);
    std::free(value.cellIdentity_r16.bytes);
    value.cellIdentity_r16.bytes = nullptr;
    value.cellIdentity_r16.bitLength = 0;
    if (value.has_trackingAreaCode_r16) {
        std::free(value.trackingAreaCode_r16.bytes);
        value.trackingAreaCode_r16.bytes = nullptr;
        value.trackingAreaCode_r16.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasQuantityResults：ASN.1 MeasQuantityResults；源文件第 8059 行；SEQUENCE。
// Encode_MeasQuantityResults 只读不分配；Decode_MeasQuantityResults 可能 malloc（失败时内部已释放并清零）；Free_MeasQuantityResults 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasQuantityResults(Encoder& enc, const MeasQuantityResults& value)
{
    enc.WriteBit(value.has_rsrp);
    enc.WriteBit(value.has_rsrq);
    enc.WriteBit(value.has_sinr);
    if (value.has_rsrp) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrp), 0, 127);
    }
    if (value.has_rsrq) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrq), 0, 127);
    }
    if (value.has_sinr) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sinr), 0, 127);
    }
    return enc.Error();
}

ErrorCode Decode_MeasQuantityResults(Decoder& dec, MeasQuantityResults& value)
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
        value.rsrp = (RSRP_Range)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.rsrq = (RSRQ_Range)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.sinr = (SINR_Range)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasQuantityResults(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasQuantityResults(MeasQuantityResults& value)
{
    if (value.has_rsrp) {
    }
    if (value.has_rsrq) {
    }
    if (value.has_sinr) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultSuccessHONR_r17_MeasResult_r17_CellResults_r17：ASN.1 measResult-r17/cellResults-r17；源文件第 3140 行；SEQUENCE。
// Encode_MeasResultSuccessHONR_r17_MeasResult_r17_CellResults_r17 只读不分配；Decode_MeasResultSuccessHONR_r17_MeasResult_r17_CellResults_r17 可能 malloc（失败时内部已释放并清零）；Free_MeasResultSuccessHONR_r17_MeasResult_r17_CellResults_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultSuccessHONR_r17_MeasResult_r17_CellResults_r17(Encoder& enc, const MeasResultSuccessHONR_r17_MeasResult_r17_CellResults_r17& value)
{
    enc.WriteBit(value.has_resultsSSB_Cell_r17);
    enc.WriteBit(value.has_resultsCSI_RS_Cell_r17);
    if (value.has_resultsSSB_Cell_r17) {
        Encode_MeasQuantityResults(enc, value.resultsSSB_Cell_r17);
    }
    if (value.has_resultsCSI_RS_Cell_r17) {
        Encode_MeasQuantityResults(enc, value.resultsCSI_RS_Cell_r17);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultSuccessHONR_r17_MeasResult_r17_CellResults_r17(Decoder& dec, MeasResultSuccessHONR_r17_MeasResult_r17_CellResults_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MeasQuantityResults(dec, value.resultsSSB_Cell_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MeasQuantityResults(dec, value.resultsCSI_RS_Cell_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultSuccessHONR_r17_MeasResult_r17_CellResults_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultSuccessHONR_r17_MeasResult_r17_CellResults_r17(MeasResultSuccessHONR_r17_MeasResult_r17_CellResults_r17& value)
{
    if (value.has_resultsSSB_Cell_r17) {
        Free_MeasQuantityResults(value.resultsSSB_Cell_r17);
    }
    if (value.has_resultsCSI_RS_Cell_r17) {
        Free_MeasQuantityResults(value.resultsCSI_RS_Cell_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ResultsPerSSB_IndexList：ASN.1 ResultsPerSSB-IndexList；源文件第 8071 行；SEQUENCE OF。
// Encode_ResultsPerSSB_IndexList 只读不分配；Decode_ResultsPerSSB_IndexList 可能 malloc（失败时内部已释放并清零）；Free_ResultsPerSSB_IndexList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ResultsPerSSB_IndexList(Encoder& enc, const ResultsPerSSB_IndexList& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 64u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_ResultsPerSSB_Index(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_ResultsPerSSB_IndexList(Decoder& dec, ResultsPerSSB_IndexList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 64u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 64u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (ResultsPerSSB_Index*)std::malloc((std::size_t)value.count * sizeof(ResultsPerSSB_Index));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(ResultsPerSSB_Index));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_ResultsPerSSB_Index(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_ResultsPerSSB_IndexList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ResultsPerSSB_IndexList(ResultsPerSSB_IndexList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_ResultsPerSSB_Index(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
