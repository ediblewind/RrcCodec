/* ============================================================================
 * src/generated/codec_part006.cpp — 生成的编解码函数
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
// PUCCH_TPC_CommandConfig：ASN.1 PUCCH-TPC-CommandConfig；源文件第 10257 行；SEQUENCE。
// Encode_PUCCH_TPC_CommandConfig 只读不分配；Decode_PUCCH_TPC_CommandConfig 可能 malloc（失败时内部已释放并清零）；Free_PUCCH_TPC_CommandConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PUCCH_TPC_CommandConfig(Encoder& enc, const PUCCH_TPC_CommandConfig& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_tpc_IndexPCell);
    enc.WriteBit(value.has_tpc_IndexPUCCH_SCell);
    if (value.has_tpc_IndexPCell) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tpc_IndexPCell), 1, 15);
    }
    if (value.has_tpc_IndexPUCCH_SCell) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tpc_IndexPUCCH_SCell), 1, 15);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_PUCCH_TPC_CommandConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PUCCH_TPC_CommandConfig(Decoder& dec, PUCCH_TPC_CommandConfig& value)
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
        if (!dec.ReadConstrainedInteger(1, 15, tmp_value)) { goto fail; }
        value.tpc_IndexPCell = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 15, tmp_value)) { goto fail; }
        value.tpc_IndexPUCCH_SCell = (int64_t)tmp_value;
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
    if (Decode_PUCCH_TPC_CommandConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_PUCCH_TPC_CommandConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_TPC_CommandConfig(PUCCH_TPC_CommandConfig& value)
{
    if (value.has_tpc_IndexPCell) {
    }
    if (value.has_tpc_IndexPUCCH_SCell) {
    }
    if (value.has_extGroup1) {
        Free_PUCCH_TPC_CommandConfig_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PUCCH_TPC_CommandConfig：ASN.1 SetupRelease<PUCCH-TPC-CommandConfig>；源文件第 9151 行；CHOICE。
// Encode_SetupRelease_PUCCH_TPC_CommandConfig 只读不分配；Decode_SetupRelease_PUCCH_TPC_CommandConfig 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PUCCH_TPC_CommandConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PUCCH_TPC_CommandConfig(Encoder& enc, const SetupRelease_PUCCH_TPC_CommandConfig& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PUCCH_TPC_CommandConfig_Tag_release:
        (void)0;
        break;
    case SetupRelease_PUCCH_TPC_CommandConfig_Tag_setup:
        Encode_PUCCH_TPC_CommandConfig(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PUCCH_TPC_CommandConfig(Decoder& dec, SetupRelease_PUCCH_TPC_CommandConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PUCCH_TPC_CommandConfig_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PUCCH_TPC_CommandConfig_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PUCCH_TPC_CommandConfig_Tag_setup: {
        if (Decode_PUCCH_TPC_CommandConfig(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PUCCH_TPC_CommandConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PUCCH_TPC_CommandConfig(SetupRelease_PUCCH_TPC_CommandConfig& value)
{
    switch (value.tag) {
    case SetupRelease_PUCCH_TPC_CommandConfig_Tag_release:
        break;
    case SetupRelease_PUCCH_TPC_CommandConfig_Tag_setup:
        Free_PUCCH_TPC_CommandConfig(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_TPC_CommandConfig_ExtGroup1：ASN.1 SRS_TPC_CommandConfig_ExtGroup1；源文件第 13524 行；扩展添加组 [[ ]]。
// Encode_SRS_TPC_CommandConfig_ExtGroup1 只读不分配；Decode_SRS_TPC_CommandConfig_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SRS_TPC_CommandConfig_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_TPC_CommandConfig_ExtGroup1(Encoder& enc, const SRS_TPC_CommandConfig_ExtGroup1& value)
{
    enc.WriteBit(value.has_startingBitOfFormat2_3SUL);
    if (value.has_startingBitOfFormat2_3SUL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.startingBitOfFormat2_3SUL), 1, 31);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_TPC_CommandConfig_ExtGroup1(Decoder& dec, SRS_TPC_CommandConfig_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 31, tmp_value)) { goto fail; }
        value.startingBitOfFormat2_3SUL = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_TPC_CommandConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_TPC_CommandConfig_ExtGroup1(SRS_TPC_CommandConfig_ExtGroup1& value)
{
    if (value.has_startingBitOfFormat2_3SUL) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_TPC_CommandConfig：ASN.1 SRS-TPC-CommandConfig；源文件第 13520 行；SEQUENCE。
// Encode_SRS_TPC_CommandConfig 只读不分配；Decode_SRS_TPC_CommandConfig 可能 malloc（失败时内部已释放并清零）；Free_SRS_TPC_CommandConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_TPC_CommandConfig(Encoder& enc, const SRS_TPC_CommandConfig& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_startingBitOfFormat2_3);
    enc.WriteBit(value.has_fieldTypeFormat2_3);
    if (value.has_startingBitOfFormat2_3) {
        enc.WriteConstrainedInteger((std::int64_t)(value.startingBitOfFormat2_3), 1, 31);
    }
    if (value.has_fieldTypeFormat2_3) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fieldTypeFormat2_3), 0, 1);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SRS_TPC_CommandConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SRS_TPC_CommandConfig(Decoder& dec, SRS_TPC_CommandConfig& value)
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
        if (!dec.ReadConstrainedInteger(1, 31, tmp_value)) { goto fail; }
        value.startingBitOfFormat2_3 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.fieldTypeFormat2_3 = (int64_t)tmp_value;
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
    if (Decode_SRS_TPC_CommandConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_SRS_TPC_CommandConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_TPC_CommandConfig(SRS_TPC_CommandConfig& value)
{
    if (value.has_startingBitOfFormat2_3) {
    }
    if (value.has_fieldTypeFormat2_3) {
    }
    if (value.has_extGroup1) {
        Free_SRS_TPC_CommandConfig_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SRS_TPC_CommandConfig：ASN.1 SetupRelease<SRS-TPC-CommandConfig>；源文件第 9152 行；CHOICE。
// Encode_SetupRelease_SRS_TPC_CommandConfig 只读不分配；Decode_SetupRelease_SRS_TPC_CommandConfig 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SRS_TPC_CommandConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SRS_TPC_CommandConfig(Encoder& enc, const SetupRelease_SRS_TPC_CommandConfig& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SRS_TPC_CommandConfig_Tag_release:
        (void)0;
        break;
    case SetupRelease_SRS_TPC_CommandConfig_Tag_setup:
        Encode_SRS_TPC_CommandConfig(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SRS_TPC_CommandConfig(Decoder& dec, SetupRelease_SRS_TPC_CommandConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SRS_TPC_CommandConfig_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SRS_TPC_CommandConfig_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SRS_TPC_CommandConfig_Tag_setup: {
        if (Decode_SRS_TPC_CommandConfig(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SRS_TPC_CommandConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SRS_TPC_CommandConfig(SetupRelease_SRS_TPC_CommandConfig& value)
{
    switch (value.tag) {
    case SetupRelease_SRS_TPC_CommandConfig_Tag_release:
        break;
    case SetupRelease_SRS_TPC_CommandConfig_Tag_setup:
        Free_SRS_TPC_CommandConfig(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_Config：ASN.1 PDCCH-Config；源文件第 9144 行；SEQUENCE。
// Encode_PDCCH_Config 只读不分配；Decode_PDCCH_Config 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_Config 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_Config(Encoder& enc, const PDCCH_Config& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_controlResourceSetToAddModList);
    enc.WriteBit(value.has_controlResourceSetToReleaseList);
    enc.WriteBit(value.has_searchSpacesToAddModList);
    enc.WriteBit(value.has_searchSpacesToReleaseList);
    enc.WriteBit(value.has_downlinkPreemption);
    enc.WriteBit(value.has_tpc_PUSCH);
    enc.WriteBit(value.has_tpc_PUCCH);
    enc.WriteBit(value.has_tpc_SRS);
    if (value.has_controlResourceSetToAddModList) {
enc.WriteConstrainedLength(value.controlResourceSetToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.controlResourceSetToAddModList_count; ++i) {
    Encode_ControlResourceSet(enc, value.controlResourceSetToAddModList_items[i]);
}
    }
    if (value.has_controlResourceSetToReleaseList) {
enc.WriteConstrainedLength(value.controlResourceSetToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.controlResourceSetToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.controlResourceSetToReleaseList_items[i]), 0, 11);
}
    }
    if (value.has_searchSpacesToAddModList) {
enc.WriteConstrainedLength(value.searchSpacesToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.searchSpacesToAddModList_count; ++i) {
    Encode_SearchSpace(enc, value.searchSpacesToAddModList_items[i]);
}
    }
    if (value.has_searchSpacesToReleaseList) {
enc.WriteConstrainedLength(value.searchSpacesToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.searchSpacesToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.searchSpacesToReleaseList_items[i]), 0, 39);
}
    }
    if (value.has_downlinkPreemption) {
        Encode_SetupRelease_DownlinkPreemption(enc, value.downlinkPreemption);
    }
    if (value.has_tpc_PUSCH) {
        Encode_SetupRelease_PUSCH_TPC_CommandConfig(enc, value.tpc_PUSCH);
    }
    if (value.has_tpc_PUCCH) {
        Encode_SetupRelease_PUCCH_TPC_CommandConfig(enc, value.tpc_PUCCH);
    }
    if (value.has_tpc_SRS) {
        Encode_SetupRelease_SRS_TPC_CommandConfig(enc, value.tpc_SRS);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_PDCCH_Config_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_PDCCH_Config_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_PDCCH_Config_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_Config(Decoder& dec, PDCCH_Config& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.controlResourceSetToAddModList_count)) { goto fail; }
if (value.controlResourceSetToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.controlResourceSetToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.controlResourceSetToAddModList_count > 0u) {
    value.controlResourceSetToAddModList_items = (ControlResourceSet*)std::malloc((std::size_t)value.controlResourceSetToAddModList_count * sizeof(ControlResourceSet));
    if (value.controlResourceSetToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.controlResourceSetToAddModList_items, 0, (std::size_t)value.controlResourceSetToAddModList_count * sizeof(ControlResourceSet));
}
for (std::uint32_t i = 0; i < value.controlResourceSetToAddModList_count; ++i) {
    if (Decode_ControlResourceSet(dec, value.controlResourceSetToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.controlResourceSetToReleaseList_count)) { goto fail; }
if (value.controlResourceSetToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.controlResourceSetToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.controlResourceSetToReleaseList_count > 0u) {
    value.controlResourceSetToReleaseList_items = (ControlResourceSetId*)std::malloc((std::size_t)value.controlResourceSetToReleaseList_count * sizeof(ControlResourceSetId));
    if (value.controlResourceSetToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.controlResourceSetToReleaseList_items, 0, (std::size_t)value.controlResourceSetToReleaseList_count * sizeof(ControlResourceSetId));
}
for (std::uint32_t i = 0; i < value.controlResourceSetToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 11, tmp_value)) { goto fail; }
    value.controlResourceSetToReleaseList_items[i] = (ControlResourceSetId)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.searchSpacesToAddModList_count)) { goto fail; }
if (value.searchSpacesToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.searchSpacesToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.searchSpacesToAddModList_count > 0u) {
    value.searchSpacesToAddModList_items = (SearchSpace*)std::malloc((std::size_t)value.searchSpacesToAddModList_count * sizeof(SearchSpace));
    if (value.searchSpacesToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.searchSpacesToAddModList_items, 0, (std::size_t)value.searchSpacesToAddModList_count * sizeof(SearchSpace));
}
for (std::uint32_t i = 0; i < value.searchSpacesToAddModList_count; ++i) {
    if (Decode_SearchSpace(dec, value.searchSpacesToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.searchSpacesToReleaseList_count)) { goto fail; }
if (value.searchSpacesToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.searchSpacesToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.searchSpacesToReleaseList_count > 0u) {
    value.searchSpacesToReleaseList_items = (SearchSpaceId*)std::malloc((std::size_t)value.searchSpacesToReleaseList_count * sizeof(SearchSpaceId));
    if (value.searchSpacesToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.searchSpacesToReleaseList_items, 0, (std::size_t)value.searchSpacesToReleaseList_count * sizeof(SearchSpaceId));
}
for (std::uint32_t i = 0; i < value.searchSpacesToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
    value.searchSpacesToReleaseList_items[i] = (SearchSpaceId)tmp_value;
}
    }
    if (present_4) {
        if (Decode_SetupRelease_DownlinkPreemption(dec, value.downlinkPreemption) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_SetupRelease_PUSCH_TPC_CommandConfig(dec, value.tpc_PUSCH) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_SetupRelease_PUCCH_TPC_CommandConfig(dec, value.tpc_PUCCH) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        if (Decode_SetupRelease_SRS_TPC_CommandConfig(dec, value.tpc_SRS) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_PDCCH_Config_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_PDCCH_Config_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_PDCCH_Config_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    Free_PDCCH_Config(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_Config(PDCCH_Config& value)
{
    if (value.has_controlResourceSetToAddModList) {
        if (value.controlResourceSetToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.controlResourceSetToAddModList_count; ++i) {
                Free_ControlResourceSet(value.controlResourceSetToAddModList_items[i]);
            }
            std::free(value.controlResourceSetToAddModList_items);
            value.controlResourceSetToAddModList_items = nullptr;
        }
        value.controlResourceSetToAddModList_count = 0;
    }
    if (value.has_controlResourceSetToReleaseList) {
        if (value.controlResourceSetToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.controlResourceSetToReleaseList_count; ++i) {
            }
            std::free(value.controlResourceSetToReleaseList_items);
            value.controlResourceSetToReleaseList_items = nullptr;
        }
        value.controlResourceSetToReleaseList_count = 0;
    }
    if (value.has_searchSpacesToAddModList) {
        if (value.searchSpacesToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.searchSpacesToAddModList_count; ++i) {
                Free_SearchSpace(value.searchSpacesToAddModList_items[i]);
            }
            std::free(value.searchSpacesToAddModList_items);
            value.searchSpacesToAddModList_items = nullptr;
        }
        value.searchSpacesToAddModList_count = 0;
    }
    if (value.has_searchSpacesToReleaseList) {
        if (value.searchSpacesToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.searchSpacesToReleaseList_count; ++i) {
            }
            std::free(value.searchSpacesToReleaseList_items);
            value.searchSpacesToReleaseList_items = nullptr;
        }
        value.searchSpacesToReleaseList_count = 0;
    }
    if (value.has_downlinkPreemption) {
        Free_SetupRelease_DownlinkPreemption(value.downlinkPreemption);
    }
    if (value.has_tpc_PUSCH) {
        Free_SetupRelease_PUSCH_TPC_CommandConfig(value.tpc_PUSCH);
    }
    if (value.has_tpc_PUCCH) {
        Free_SetupRelease_PUCCH_TPC_CommandConfig(value.tpc_PUCCH);
    }
    if (value.has_tpc_SRS) {
        Free_SetupRelease_SRS_TPC_CommandConfig(value.tpc_SRS);
    }
    if (value.has_extGroup1) {
        Free_PDCCH_Config_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_PDCCH_Config_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_PDCCH_Config_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PDCCH_Config：ASN.1 SetupRelease<PDCCH-Config>；源文件第 1327 行；CHOICE。
// Encode_SetupRelease_PDCCH_Config 只读不分配；Decode_SetupRelease_PDCCH_Config 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PDCCH_Config 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PDCCH_Config(Encoder& enc, const SetupRelease_PDCCH_Config& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PDCCH_Config_Tag_release:
        (void)0;
        break;
    case SetupRelease_PDCCH_Config_Tag_setup:
        Encode_PDCCH_Config(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PDCCH_Config(Decoder& dec, SetupRelease_PDCCH_Config& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PDCCH_Config_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PDCCH_Config_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PDCCH_Config_Tag_setup: {
        if (Decode_PDCCH_Config(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PDCCH_Config(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PDCCH_Config(SetupRelease_PDCCH_Config& value)
{
    switch (value.tag) {
    case SetupRelease_PDCCH_Config_Tag_release:
        break;
    case SetupRelease_PDCCH_Config_Tag_setup:
        Free_PDCCH_Config(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RateMatchPatternGroup：ASN.1 RateMatchPatternGroup；源文件第 9526 行；SEQUENCE OF。
// Encode_RateMatchPatternGroup 只读不分配；Decode_RateMatchPatternGroup 可能 malloc（失败时内部已释放并清零）；Free_RateMatchPatternGroup 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RateMatchPatternGroup(Encoder& enc, const RateMatchPatternGroup& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_RateMatchPatternGroup_Item(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_RateMatchPatternGroup(Decoder& dec, RateMatchPatternGroup& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (RateMatchPatternGroup_Item*)std::malloc((std::size_t)value.count * sizeof(RateMatchPatternGroup_Item));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(RateMatchPatternGroup_Item));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_RateMatchPatternGroup_Item(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_RateMatchPatternGroup(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RateMatchPatternGroup(RateMatchPatternGroup& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_RateMatchPatternGroup_Item(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DMRS_DownlinkConfig_ExtGroup1：ASN.1 DMRS_DownlinkConfig_ExtGroup1；源文件第 6475 行；扩展添加组 [[ ]]。
// Encode_DMRS_DownlinkConfig_ExtGroup1 只读不分配；Decode_DMRS_DownlinkConfig_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_DMRS_DownlinkConfig_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DMRS_DownlinkConfig_ExtGroup1(Encoder& enc, const DMRS_DownlinkConfig_ExtGroup1& value)
{
    enc.WriteBit(value.has_dmrs_Downlink_r16);
    if (value.has_dmrs_Downlink_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_Downlink_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_DMRS_DownlinkConfig_ExtGroup1(Decoder& dec, DMRS_DownlinkConfig_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.dmrs_Downlink_r16 = (DMRS_DownlinkConfig_ExtGroup1_Dmrs_Downlink_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DMRS_DownlinkConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DMRS_DownlinkConfig_ExtGroup1(DMRS_DownlinkConfig_ExtGroup1& value)
{
    if (value.has_dmrs_Downlink_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DMRS_DownlinkConfig_ExtGroup2：ASN.1 DMRS_DownlinkConfig_ExtGroup2；源文件第 6478 行；扩展添加组 [[ ]]。
// Encode_DMRS_DownlinkConfig_ExtGroup2 只读不分配；Decode_DMRS_DownlinkConfig_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_DMRS_DownlinkConfig_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DMRS_DownlinkConfig_ExtGroup2(Encoder& enc, const DMRS_DownlinkConfig_ExtGroup2& value)
{
    enc.WriteBit(value.has_dmrs_TypeEnh_r18);
    if (value.has_dmrs_TypeEnh_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_TypeEnh_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_DMRS_DownlinkConfig_ExtGroup2(Decoder& dec, DMRS_DownlinkConfig_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.dmrs_TypeEnh_r18 = (DMRS_DownlinkConfig_ExtGroup2_Dmrs_TypeEnh_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DMRS_DownlinkConfig_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DMRS_DownlinkConfig_ExtGroup2(DMRS_DownlinkConfig_ExtGroup2& value)
{
    if (value.has_dmrs_TypeEnh_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PTRS_DownlinkConfig_ExtGroup1：ASN.1 PTRS_DownlinkConfig_ExtGroup1；源文件第 9895 行；扩展添加组 [[ ]]。
// Encode_PTRS_DownlinkConfig_ExtGroup1 只读不分配；Decode_PTRS_DownlinkConfig_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_PTRS_DownlinkConfig_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PTRS_DownlinkConfig_ExtGroup1(Encoder& enc, const PTRS_DownlinkConfig_ExtGroup1& value)
{
    enc.WriteBit(value.has_maxNrofPorts_r16);
    if (value.has_maxNrofPorts_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNrofPorts_r16), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_PTRS_DownlinkConfig_ExtGroup1(Decoder& dec, PTRS_DownlinkConfig_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.maxNrofPorts_r16 = (PTRS_DownlinkConfig_ExtGroup1_MaxNrofPorts_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PTRS_DownlinkConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PTRS_DownlinkConfig_ExtGroup1(PTRS_DownlinkConfig_ExtGroup1& value)
{
    if (value.has_maxNrofPorts_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PTRS_DownlinkConfig：ASN.1 PTRS-DownlinkConfig；源文件第 9889 行；SEQUENCE。
// Encode_PTRS_DownlinkConfig 只读不分配；Decode_PTRS_DownlinkConfig 可能 malloc（失败时内部已释放并清零）；Free_PTRS_DownlinkConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PTRS_DownlinkConfig(Encoder& enc, const PTRS_DownlinkConfig& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_frequencyDensity);
    enc.WriteBit(value.has_timeDensity);
    enc.WriteBit(value.has_epre_Ratio);
    enc.WriteBit(value.has_resourceElementOffset);
    if (value.has_frequencyDensity) {
enc.WriteConstrainedLength(value.frequencyDensity_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.frequencyDensity_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.frequencyDensity_items[i]), 1, 276);
}
    }
    if (value.has_timeDensity) {
enc.WriteConstrainedLength(value.timeDensity_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.timeDensity_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.timeDensity_items[i]), 0, 29);
}
    }
    if (value.has_epre_Ratio) {
        enc.WriteConstrainedInteger((std::int64_t)(value.epre_Ratio), 0, 3);
    }
    if (value.has_resourceElementOffset) {
        enc.WriteConstrainedInteger((std::int64_t)(value.resourceElementOffset), 0, 2);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_PTRS_DownlinkConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PTRS_DownlinkConfig(Decoder& dec, PTRS_DownlinkConfig& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.frequencyDensity_count)) { goto fail; }
if (value.frequencyDensity_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.frequencyDensity_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.frequencyDensity_count > 0u) {
    value.frequencyDensity_items = (int64_t*)std::malloc((std::size_t)value.frequencyDensity_count * sizeof(int64_t));
    if (value.frequencyDensity_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.frequencyDensity_items, 0, (std::size_t)value.frequencyDensity_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.frequencyDensity_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 276, tmp_value)) { goto fail; }
    value.frequencyDensity_items[i] = (int64_t)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.timeDensity_count)) { goto fail; }
if (value.timeDensity_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.timeDensity_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.timeDensity_count > 0u) {
    value.timeDensity_items = (int64_t*)std::malloc((std::size_t)value.timeDensity_count * sizeof(int64_t));
    if (value.timeDensity_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.timeDensity_items, 0, (std::size_t)value.timeDensity_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.timeDensity_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 29, tmp_value)) { goto fail; }
    value.timeDensity_items[i] = (int64_t)tmp_value;
}
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.epre_Ratio = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.resourceElementOffset = (PTRS_DownlinkConfig_ResourceElementOffset)tmp_value;
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
    if (Decode_PTRS_DownlinkConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_PTRS_DownlinkConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PTRS_DownlinkConfig(PTRS_DownlinkConfig& value)
{
    if (value.has_frequencyDensity) {
        if (value.frequencyDensity_items != nullptr) {
            for (std::uint32_t i = 0; i < value.frequencyDensity_count; ++i) {
            }
            std::free(value.frequencyDensity_items);
            value.frequencyDensity_items = nullptr;
        }
        value.frequencyDensity_count = 0;
    }
    if (value.has_timeDensity) {
        if (value.timeDensity_items != nullptr) {
            for (std::uint32_t i = 0; i < value.timeDensity_count; ++i) {
            }
            std::free(value.timeDensity_items);
            value.timeDensity_items = nullptr;
        }
        value.timeDensity_count = 0;
    }
    if (value.has_epre_Ratio) {
    }
    if (value.has_resourceElementOffset) {
    }
    if (value.has_extGroup1) {
        Free_PTRS_DownlinkConfig_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PTRS_DownlinkConfig：ASN.1 SetupRelease<PTRS-DownlinkConfig>；源文件第 6473 行；CHOICE。
// Encode_SetupRelease_PTRS_DownlinkConfig 只读不分配；Decode_SetupRelease_PTRS_DownlinkConfig 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PTRS_DownlinkConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PTRS_DownlinkConfig(Encoder& enc, const SetupRelease_PTRS_DownlinkConfig& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PTRS_DownlinkConfig_Tag_release:
        (void)0;
        break;
    case SetupRelease_PTRS_DownlinkConfig_Tag_setup:
        Encode_PTRS_DownlinkConfig(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PTRS_DownlinkConfig(Decoder& dec, SetupRelease_PTRS_DownlinkConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PTRS_DownlinkConfig_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PTRS_DownlinkConfig_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PTRS_DownlinkConfig_Tag_setup: {
        if (Decode_PTRS_DownlinkConfig(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PTRS_DownlinkConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PTRS_DownlinkConfig(SetupRelease_PTRS_DownlinkConfig& value)
{
    switch (value.tag) {
    case SetupRelease_PTRS_DownlinkConfig_Tag_release:
        break;
    case SetupRelease_PTRS_DownlinkConfig_Tag_setup:
        Free_PTRS_DownlinkConfig(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DMRS_DownlinkConfig：ASN.1 DMRS-DownlinkConfig；源文件第 6467 行；SEQUENCE。
// Encode_DMRS_DownlinkConfig 只读不分配；Decode_DMRS_DownlinkConfig 可能 malloc（失败时内部已释放并清零）；Free_DMRS_DownlinkConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DMRS_DownlinkConfig(Encoder& enc, const DMRS_DownlinkConfig& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_dmrs_Type);
    enc.WriteBit(value.has_dmrs_AdditionalPosition);
    enc.WriteBit(value.has_maxLength);
    enc.WriteBit(value.has_scramblingID0);
    enc.WriteBit(value.has_scramblingID1);
    enc.WriteBit(value.has_phaseTrackingRS);
    if (value.has_dmrs_Type) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_Type), 0, 0);
    }
    if (value.has_dmrs_AdditionalPosition) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_AdditionalPosition), 0, 2);
    }
    if (value.has_maxLength) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxLength), 0, 0);
    }
    if (value.has_scramblingID0) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scramblingID0), 0, 65535);
    }
    if (value.has_scramblingID1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scramblingID1), 0, 65535);
    }
    if (value.has_phaseTrackingRS) {
        Encode_SetupRelease_PTRS_DownlinkConfig(enc, value.phaseTrackingRS);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_DMRS_DownlinkConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_DMRS_DownlinkConfig_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_DMRS_DownlinkConfig(Decoder& dec, DMRS_DownlinkConfig& value)
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
        value.dmrs_Type = (DMRS_DownlinkConfig_Dmrs_Type)0;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.dmrs_AdditionalPosition = (DMRS_DownlinkConfig_Dmrs_AdditionalPosition)tmp_value;
    }
    if (present_2) {
        value.maxLength = (DMRS_DownlinkConfig_MaxLength)0;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.scramblingID0 = (int64_t)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.scramblingID1 = (int64_t)tmp_value;
    }
    if (present_5) {
        if (Decode_SetupRelease_PTRS_DownlinkConfig(dec, value.phaseTrackingRS) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_DMRS_DownlinkConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_DMRS_DownlinkConfig_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_DMRS_DownlinkConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DMRS_DownlinkConfig(DMRS_DownlinkConfig& value)
{
    if (value.has_dmrs_Type) {
    }
    if (value.has_dmrs_AdditionalPosition) {
    }
    if (value.has_maxLength) {
    }
    if (value.has_scramblingID0) {
    }
    if (value.has_scramblingID1) {
    }
    if (value.has_phaseTrackingRS) {
        Free_SetupRelease_PTRS_DownlinkConfig(value.phaseTrackingRS);
    }
    if (value.has_extGroup1) {
        Free_DMRS_DownlinkConfig_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_DMRS_DownlinkConfig_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_DMRS_DownlinkConfig：ASN.1 SetupRelease<DMRS-DownlinkConfig>；源文件第 9402 行；CHOICE。
// Encode_SetupRelease_DMRS_DownlinkConfig 只读不分配；Decode_SetupRelease_DMRS_DownlinkConfig 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_DMRS_DownlinkConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_DMRS_DownlinkConfig(Encoder& enc, const SetupRelease_DMRS_DownlinkConfig& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DMRS_DownlinkConfig_Tag_release:
        (void)0;
        break;
    case SetupRelease_DMRS_DownlinkConfig_Tag_setup:
        Encode_DMRS_DownlinkConfig(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DMRS_DownlinkConfig(Decoder& dec, SetupRelease_DMRS_DownlinkConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DMRS_DownlinkConfig_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DMRS_DownlinkConfig_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DMRS_DownlinkConfig_Tag_setup: {
        if (Decode_DMRS_DownlinkConfig(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DMRS_DownlinkConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DMRS_DownlinkConfig(SetupRelease_DMRS_DownlinkConfig& value)
{
    switch (value.tag) {
    case SetupRelease_DMRS_DownlinkConfig_Tag_release:
        break;
    case SetupRelease_DMRS_DownlinkConfig_Tag_setup:
        Free_DMRS_DownlinkConfig(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_MaxMIMO_LayersDL_r16：ASN.1 SetupRelease<MaxMIMO-LayersDL-r16>；源文件第 9445 行；CHOICE。
// Encode_SetupRelease_MaxMIMO_LayersDL_r16 只读不分配；Decode_SetupRelease_MaxMIMO_LayersDL_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_MaxMIMO_LayersDL_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_MaxMIMO_LayersDL_r16(Encoder& enc, const SetupRelease_MaxMIMO_LayersDL_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_MaxMIMO_LayersDL_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_MaxMIMO_LayersDL_r16_Tag_setup:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.setup), 1, 8);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_MaxMIMO_LayersDL_r16(Decoder& dec, SetupRelease_MaxMIMO_LayersDL_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_MaxMIMO_LayersDL_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_MaxMIMO_LayersDL_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_MaxMIMO_LayersDL_r16_Tag_setup: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.u.setup = (MaxMIMO_LayersDL_r16)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_MaxMIMO_LayersDL_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_MaxMIMO_LayersDL_r16(SetupRelease_MaxMIMO_LayersDL_r16& value)
{
    switch (value.tag) {
    case SetupRelease_MaxMIMO_LayersDL_r16_Tag_release:
        break;
    case SetupRelease_MaxMIMO_LayersDL_r16_Tag_setup:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MinSchedulingOffsetK0_Values_r16：ASN.1 MinSchedulingOffsetK0-Values-r16；源文件第 9531 行；SEQUENCE OF。
// Encode_MinSchedulingOffsetK0_Values_r16 只读不分配；Decode_MinSchedulingOffsetK0_Values_r16 可能 malloc（失败时内部已释放并清零）；Free_MinSchedulingOffsetK0_Values_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MinSchedulingOffsetK0_Values_r16(Encoder& enc, const MinSchedulingOffsetK0_Values_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 2u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 16);
    }
    return enc.Error();
}

ErrorCode Decode_MinSchedulingOffsetK0_Values_r16(Decoder& dec, MinSchedulingOffsetK0_Values_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 2u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 2u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 16, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_MinSchedulingOffsetK0_Values_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MinSchedulingOffsetK0_Values_r16(MinSchedulingOffsetK0_Values_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_MinSchedulingOffsetK0_Values_r16：ASN.1 SetupRelease<MinSchedulingOffsetK0-Values-r16>；源文件第 9446 行；CHOICE。
// Encode_SetupRelease_MinSchedulingOffsetK0_Values_r16 只读不分配；Decode_SetupRelease_MinSchedulingOffsetK0_Values_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_MinSchedulingOffsetK0_Values_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_MinSchedulingOffsetK0_Values_r16(Encoder& enc, const SetupRelease_MinSchedulingOffsetK0_Values_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_MinSchedulingOffsetK0_Values_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_MinSchedulingOffsetK0_Values_r16_Tag_setup:
        Encode_MinSchedulingOffsetK0_Values_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_MinSchedulingOffsetK0_Values_r16(Decoder& dec, SetupRelease_MinSchedulingOffsetK0_Values_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_MinSchedulingOffsetK0_Values_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_MinSchedulingOffsetK0_Values_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_MinSchedulingOffsetK0_Values_r16_Tag_setup: {
        if (Decode_MinSchedulingOffsetK0_Values_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_MinSchedulingOffsetK0_Values_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_MinSchedulingOffsetK0_Values_r16(SetupRelease_MinSchedulingOffsetK0_Values_r16& value)
{
    switch (value.tag) {
    case SetupRelease_MinSchedulingOffsetK0_Values_r16_Tag_release:
        break;
    case SetupRelease_MinSchedulingOffsetK0_Values_r16_Tag_setup:
        Free_MinSchedulingOffsetK0_Values_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16：ASN.1 SetupRelease<PDSCH-TimeDomainResourceAllocationList-r16>；源文件第 9460 行；CHOICE。
// Encode_SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16 只读不分配；Decode_SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16(Encoder& enc, const SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16_Tag_setup:
        Encode_PDSCH_TimeDomainResourceAllocationList_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16(Decoder& dec, SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16_Tag_setup: {
        if (Decode_PDSCH_TimeDomainResourceAllocationList_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16(SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16& value)
{
    switch (value.tag) {
    case SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16_Tag_release:
        break;
    case SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16_Tag_setup:
        Free_PDSCH_TimeDomainResourceAllocationList_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_StaticBundling_r16：ASN.1 prb-BundlingTypeDCI-1-2-r16/staticBundling-r16；源文件第 9463 行；SEQUENCE。
// Encode_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_StaticBundling_r16 只读不分配；Decode_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_StaticBundling_r16 可能 malloc（失败时内部已释放并清零）；Free_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_StaticBundling_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_StaticBundling_r16(Encoder& enc, const PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_StaticBundling_r16& value)
{
    enc.WriteBit(value.has_bundleSize_r16);
    if (value.has_bundleSize_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.bundleSize_r16), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_StaticBundling_r16(Decoder& dec, PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_StaticBundling_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.bundleSize_r16 = (PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_StaticBundling_r16_BundleSize_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_StaticBundling_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_StaticBundling_r16(PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_StaticBundling_r16& value)
{
    if (value.has_bundleSize_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16：ASN.1 prb-BundlingTypeDCI-1-2-r16/dynamicBundling-r16；源文件第 9466 行；SEQUENCE。
// Encode_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16 只读不分配；Decode_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16 可能 malloc（失败时内部已释放并清零）；Free_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16(Encoder& enc, const PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16& value)
{
    enc.WriteBit(value.has_bundleSizeSet1_r16);
    enc.WriteBit(value.has_bundleSizeSet2_r16);
    if (value.has_bundleSizeSet1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.bundleSizeSet1_r16), 0, 3);
    }
    if (value.has_bundleSizeSet2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.bundleSizeSet2_r16), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16(Decoder& dec, PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16& value)
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
        value.bundleSizeSet1_r16 = (PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16_BundleSizeSet1_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.bundleSizeSet2_r16 = (PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16_BundleSizeSet2_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16(PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16& value)
{
    if (value.has_bundleSizeSet1_r16) {
    }
    if (value.has_bundleSizeSet2_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16：ASN.1 prb-BundlingTypeDCI-1-2-r16；源文件第 9462 行；CHOICE。
// Encode_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16 只读不分配；Decode_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16 可能 malloc（失败时内部已释放并清零）；Free_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16(Encoder& enc, const PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_Tag_staticBundling_r16:
        Encode_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_StaticBundling_r16(enc, value.u.staticBundling_r16);
        break;
    case PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_Tag_dynamicBundling_r16:
        Encode_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16(enc, value.u.dynamicBundling_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16(Decoder& dec, PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_Tag)root_index;
    switch (value.tag) {
    case PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_Tag_staticBundling_r16: {
        if (Decode_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_StaticBundling_r16(dec, value.u.staticBundling_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_Tag_dynamicBundling_r16: {
        if (Decode_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16(dec, value.u.dynamicBundling_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16(PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16& value)
{
    switch (value.tag) {
    case PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_Tag_staticBundling_r16:
        Free_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_StaticBundling_r16(value.u.staticBundling_r16);
        break;
    case PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_Tag_dynamicBundling_r16:
        Free_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16(value.u.dynamicBundling_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FDM_TDM_r16：ASN.1 FDM-TDM-r16；源文件第 11211 行；SEQUENCE。
// Encode_FDM_TDM_r16 只读不分配；Decode_FDM_TDM_r16 可能 malloc（失败时内部已释放并清零）；Free_FDM_TDM_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FDM_TDM_r16(Encoder& enc, const FDM_TDM_r16& value)
{
    enc.WriteBit(value.has_startingSymbolOffsetK_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.repetitionScheme_r16), 0, 2);
    if (value.has_startingSymbolOffsetK_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.startingSymbolOffsetK_r16), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_FDM_TDM_r16(Decoder& dec, FDM_TDM_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.repetitionScheme_r16 = (FDM_TDM_r16_RepetitionScheme_r16)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.startingSymbolOffsetK_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FDM_TDM_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FDM_TDM_r16(FDM_TDM_r16& value)
{
    if (value.has_startingSymbolOffsetK_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_FDM_TDM_r16：ASN.1 SetupRelease<FDM-TDM-r16>；源文件第 11203 行；CHOICE。
// Encode_SetupRelease_FDM_TDM_r16 只读不分配；Decode_SetupRelease_FDM_TDM_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_FDM_TDM_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_FDM_TDM_r16(Encoder& enc, const SetupRelease_FDM_TDM_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_FDM_TDM_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_FDM_TDM_r16_Tag_setup:
        Encode_FDM_TDM_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_FDM_TDM_r16(Decoder& dec, SetupRelease_FDM_TDM_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_FDM_TDM_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_FDM_TDM_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_FDM_TDM_r16_Tag_setup: {
        if (Decode_FDM_TDM_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_FDM_TDM_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_FDM_TDM_r16(SetupRelease_FDM_TDM_r16& value)
{
    switch (value.tag) {
    case SetupRelease_FDM_TDM_r16_Tag_release:
        break;
    case SetupRelease_FDM_TDM_r16_Tag_setup:
        Free_FDM_TDM_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SlotBased_r16：ASN.1 SlotBased-r16；源文件第 11216 行；SEQUENCE。
// Encode_SlotBased_r16 只读不分配；Decode_SlotBased_r16 可能 malloc（失败时内部已释放并清零）；Free_SlotBased_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SlotBased_r16(Encoder& enc, const SlotBased_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tciMapping_r16), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.sequenceOffsetForRV_r16), 1, 3);
    return enc.Error();
}

ErrorCode Decode_SlotBased_r16(Decoder& dec, SlotBased_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.tciMapping_r16 = (SlotBased_r16_TciMapping_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 3, tmp_value)) { goto fail; }
        value.sequenceOffsetForRV_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SlotBased_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SlotBased_r16(SlotBased_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SlotBased_r16：ASN.1 SetupRelease<SlotBased-r16>；源文件第 11204 行；CHOICE。
// Encode_SetupRelease_SlotBased_r16 只读不分配；Decode_SetupRelease_SlotBased_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SlotBased_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SlotBased_r16(Encoder& enc, const SetupRelease_SlotBased_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SlotBased_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_SlotBased_r16_Tag_setup:
        Encode_SlotBased_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SlotBased_r16(Decoder& dec, SetupRelease_SlotBased_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SlotBased_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SlotBased_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SlotBased_r16_Tag_setup: {
        if (Decode_SlotBased_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SlotBased_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SlotBased_r16(SetupRelease_SlotBased_r16& value)
{
    switch (value.tag) {
    case SetupRelease_SlotBased_r16_Tag_release:
        break;
    case SetupRelease_SlotBased_r16_Tag_setup:
        Free_SlotBased_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RepetitionSchemeConfig_r16：ASN.1 RepetitionSchemeConfig-r16；源文件第 11202 行；CHOICE。
// Encode_RepetitionSchemeConfig_r16 只读不分配；Decode_RepetitionSchemeConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_RepetitionSchemeConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RepetitionSchemeConfig_r16(Encoder& enc, const RepetitionSchemeConfig_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RepetitionSchemeConfig_r16_Tag_fdm_TDM_r16:
        Encode_SetupRelease_FDM_TDM_r16(enc, value.u.fdm_TDM_r16);
        break;
    case RepetitionSchemeConfig_r16_Tag_slotBased_r16:
        Encode_SetupRelease_SlotBased_r16(enc, value.u.slotBased_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RepetitionSchemeConfig_r16(Decoder& dec, RepetitionSchemeConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RepetitionSchemeConfig_r16_Tag)root_index;
    switch (value.tag) {
    case RepetitionSchemeConfig_r16_Tag_fdm_TDM_r16: {
        if (Decode_SetupRelease_FDM_TDM_r16(dec, value.u.fdm_TDM_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RepetitionSchemeConfig_r16_Tag_slotBased_r16: {
        if (Decode_SetupRelease_SlotBased_r16(dec, value.u.slotBased_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RepetitionSchemeConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RepetitionSchemeConfig_r16(RepetitionSchemeConfig_r16& value)
{
    switch (value.tag) {
    case RepetitionSchemeConfig_r16_Tag_fdm_TDM_r16:
        Free_SetupRelease_FDM_TDM_r16(value.u.fdm_TDM_r16);
        break;
    case RepetitionSchemeConfig_r16_Tag_slotBased_r16:
        Free_SetupRelease_SlotBased_r16(value.u.slotBased_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_RepetitionSchemeConfig_r16：ASN.1 SetupRelease<RepetitionSchemeConfig-r16>；源文件第 9484 行；CHOICE。
// Encode_SetupRelease_RepetitionSchemeConfig_r16 只读不分配；Decode_SetupRelease_RepetitionSchemeConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_RepetitionSchemeConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_RepetitionSchemeConfig_r16(Encoder& enc, const SetupRelease_RepetitionSchemeConfig_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_RepetitionSchemeConfig_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_RepetitionSchemeConfig_r16_Tag_setup:
        Encode_RepetitionSchemeConfig_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_RepetitionSchemeConfig_r16(Decoder& dec, SetupRelease_RepetitionSchemeConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_RepetitionSchemeConfig_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_RepetitionSchemeConfig_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_RepetitionSchemeConfig_r16_Tag_setup: {
        if (Decode_RepetitionSchemeConfig_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_RepetitionSchemeConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_RepetitionSchemeConfig_r16(SetupRelease_RepetitionSchemeConfig_r16& value)
{
    switch (value.tag) {
    case SetupRelease_RepetitionSchemeConfig_r16_Tag_release:
        break;
    case SetupRelease_RepetitionSchemeConfig_r16_Tag_setup:
        Free_RepetitionSchemeConfig_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDSCH_Config_ExtGroup1：ASN.1 PDSCH_Config_ExtGroup1；源文件第 9444 行；扩展添加组 [[ ]]。
// Encode_PDSCH_Config_ExtGroup1 只读不分配；Decode_PDSCH_Config_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_PDSCH_Config_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDSCH_Config_ExtGroup1(Encoder& enc, const PDSCH_Config_ExtGroup1& value)
{
    enc.WriteBit(value.has_maxMIMO_Layers_r16);
    enc.WriteBit(value.has_minimumSchedulingOffsetK0_r16);
    enc.WriteBit(value.has_antennaPortsFieldPresenceDCI_1_2_r16);
    enc.WriteBit(value.has_aperiodicZP_CSI_RS_ResourceSetsToAddModListDCI_1_2_r16);
    enc.WriteBit(value.has_aperiodicZP_CSI_RS_ResourceSetsToReleaseListDCI_1_2_r16);
    enc.WriteBit(value.has_dmrs_DownlinkForPDSCH_MappingTypeA_DCI_1_2_r16);
    enc.WriteBit(value.has_dmrs_DownlinkForPDSCH_MappingTypeB_DCI_1_2_r16);
    enc.WriteBit(value.has_dmrs_SequenceInitializationDCI_1_2_r16);
    enc.WriteBit(value.has_harq_ProcessNumberSizeDCI_1_2_r16);
    enc.WriteBit(value.has_mcs_TableDCI_1_2_r16);
    enc.WriteBit(value.has_numberOfBitsForRV_DCI_1_2_r16);
    enc.WriteBit(value.has_pdsch_TimeDomainAllocationListDCI_1_2_r16);
    enc.WriteBit(value.has_prb_BundlingTypeDCI_1_2_r16);
    enc.WriteBit(value.has_priorityIndicatorDCI_1_2_r16);
    enc.WriteBit(value.has_rateMatchPatternGroup1DCI_1_2_r16);
    enc.WriteBit(value.has_rateMatchPatternGroup2DCI_1_2_r16);
    enc.WriteBit(value.has_resourceAllocationType1GranularityDCI_1_2_r16);
    enc.WriteBit(value.has_vrb_ToPRB_InterleaverDCI_1_2_r16);
    enc.WriteBit(value.has_referenceOfSLIVDCI_1_2_r16);
    enc.WriteBit(value.has_resourceAllocationDCI_1_2_r16);
    enc.WriteBit(value.has_priorityIndicatorDCI_1_1_r16);
    enc.WriteBit(value.has_dataScramblingIdentityPDSCH2_r16);
    enc.WriteBit(value.has_pdsch_TimeDomainAllocationList_r16);
    enc.WriteBit(value.has_repetitionSchemeConfig_r16);
    if (value.has_maxMIMO_Layers_r16) {
        Encode_SetupRelease_MaxMIMO_LayersDL_r16(enc, value.maxMIMO_Layers_r16);
    }
    if (value.has_minimumSchedulingOffsetK0_r16) {
        Encode_SetupRelease_MinSchedulingOffsetK0_Values_r16(enc, value.minimumSchedulingOffsetK0_r16);
    }
    if (value.has_antennaPortsFieldPresenceDCI_1_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.antennaPortsFieldPresenceDCI_1_2_r16), 0, 0);
    }
    if (value.has_aperiodicZP_CSI_RS_ResourceSetsToAddModListDCI_1_2_r16) {
enc.WriteConstrainedLength(value.aperiodicZP_CSI_RS_ResourceSetsToAddModListDCI_1_2_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.aperiodicZP_CSI_RS_ResourceSetsToAddModListDCI_1_2_r16_count; ++i) {
    Encode_ZP_CSI_RS_ResourceSet(enc, value.aperiodicZP_CSI_RS_ResourceSetsToAddModListDCI_1_2_r16_items[i]);
}
    }
    if (value.has_aperiodicZP_CSI_RS_ResourceSetsToReleaseListDCI_1_2_r16) {
enc.WriteConstrainedLength(value.aperiodicZP_CSI_RS_ResourceSetsToReleaseListDCI_1_2_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.aperiodicZP_CSI_RS_ResourceSetsToReleaseListDCI_1_2_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.aperiodicZP_CSI_RS_ResourceSetsToReleaseListDCI_1_2_r16_items[i]), 0, 15);
}
    }
    if (value.has_dmrs_DownlinkForPDSCH_MappingTypeA_DCI_1_2_r16) {
        Encode_SetupRelease_DMRS_DownlinkConfig(enc, value.dmrs_DownlinkForPDSCH_MappingTypeA_DCI_1_2_r16);
    }
    if (value.has_dmrs_DownlinkForPDSCH_MappingTypeB_DCI_1_2_r16) {
        Encode_SetupRelease_DMRS_DownlinkConfig(enc, value.dmrs_DownlinkForPDSCH_MappingTypeB_DCI_1_2_r16);
    }
    if (value.has_dmrs_SequenceInitializationDCI_1_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_SequenceInitializationDCI_1_2_r16), 0, 0);
    }
    if (value.has_harq_ProcessNumberSizeDCI_1_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.harq_ProcessNumberSizeDCI_1_2_r16), 0, 4);
    }
    if (value.has_mcs_TableDCI_1_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mcs_TableDCI_1_2_r16), 0, 1);
    }
    if (value.has_numberOfBitsForRV_DCI_1_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.numberOfBitsForRV_DCI_1_2_r16), 0, 2);
    }
    if (value.has_pdsch_TimeDomainAllocationListDCI_1_2_r16) {
        Encode_SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16(enc, value.pdsch_TimeDomainAllocationListDCI_1_2_r16);
    }
    if (value.has_prb_BundlingTypeDCI_1_2_r16) {
        Encode_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16(enc, value.prb_BundlingTypeDCI_1_2_r16);
    }
    if (value.has_priorityIndicatorDCI_1_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.priorityIndicatorDCI_1_2_r16), 0, 0);
    }
    if (value.has_rateMatchPatternGroup1DCI_1_2_r16) {
        Encode_RateMatchPatternGroup(enc, value.rateMatchPatternGroup1DCI_1_2_r16);
    }
    if (value.has_rateMatchPatternGroup2DCI_1_2_r16) {
        Encode_RateMatchPatternGroup(enc, value.rateMatchPatternGroup2DCI_1_2_r16);
    }
    if (value.has_resourceAllocationType1GranularityDCI_1_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.resourceAllocationType1GranularityDCI_1_2_r16), 0, 3);
    }
    if (value.has_vrb_ToPRB_InterleaverDCI_1_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.vrb_ToPRB_InterleaverDCI_1_2_r16), 0, 1);
    }
    if (value.has_referenceOfSLIVDCI_1_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.referenceOfSLIVDCI_1_2_r16), 0, 0);
    }
    if (value.has_resourceAllocationDCI_1_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.resourceAllocationDCI_1_2_r16), 0, 2);
    }
    if (value.has_priorityIndicatorDCI_1_1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.priorityIndicatorDCI_1_1_r16), 0, 0);
    }
    if (value.has_dataScramblingIdentityPDSCH2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dataScramblingIdentityPDSCH2_r16), 0, 1023);
    }
    if (value.has_pdsch_TimeDomainAllocationList_r16) {
        Encode_SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16(enc, value.pdsch_TimeDomainAllocationList_r16);
    }
    if (value.has_repetitionSchemeConfig_r16) {
        Encode_SetupRelease_RepetitionSchemeConfig_r16(enc, value.repetitionSchemeConfig_r16);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_Config_ExtGroup1(Decoder& dec, PDSCH_Config_ExtGroup1& value)
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
    if (present_0) {
        if (Decode_SetupRelease_MaxMIMO_LayersDL_r16(dec, value.maxMIMO_Layers_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_MinSchedulingOffsetK0_Values_r16(dec, value.minimumSchedulingOffsetK0_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        value.antennaPortsFieldPresenceDCI_1_2_r16 = (PDSCH_Config_ExtGroup1_AntennaPortsFieldPresenceDCI_1_2_r16)0;
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.aperiodicZP_CSI_RS_ResourceSetsToAddModListDCI_1_2_r16_count)) { goto fail; }
if (value.aperiodicZP_CSI_RS_ResourceSetsToAddModListDCI_1_2_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.aperiodicZP_CSI_RS_ResourceSetsToAddModListDCI_1_2_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.aperiodicZP_CSI_RS_ResourceSetsToAddModListDCI_1_2_r16_count > 0u) {
    value.aperiodicZP_CSI_RS_ResourceSetsToAddModListDCI_1_2_r16_items = (ZP_CSI_RS_ResourceSet*)std::malloc((std::size_t)value.aperiodicZP_CSI_RS_ResourceSetsToAddModListDCI_1_2_r16_count * sizeof(ZP_CSI_RS_ResourceSet));
    if (value.aperiodicZP_CSI_RS_ResourceSetsToAddModListDCI_1_2_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.aperiodicZP_CSI_RS_ResourceSetsToAddModListDCI_1_2_r16_items, 0, (std::size_t)value.aperiodicZP_CSI_RS_ResourceSetsToAddModListDCI_1_2_r16_count * sizeof(ZP_CSI_RS_ResourceSet));
}
for (std::uint32_t i = 0; i < value.aperiodicZP_CSI_RS_ResourceSetsToAddModListDCI_1_2_r16_count; ++i) {
    if (Decode_ZP_CSI_RS_ResourceSet(dec, value.aperiodicZP_CSI_RS_ResourceSetsToAddModListDCI_1_2_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.aperiodicZP_CSI_RS_ResourceSetsToReleaseListDCI_1_2_r16_count)) { goto fail; }
if (value.aperiodicZP_CSI_RS_ResourceSetsToReleaseListDCI_1_2_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.aperiodicZP_CSI_RS_ResourceSetsToReleaseListDCI_1_2_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.aperiodicZP_CSI_RS_ResourceSetsToReleaseListDCI_1_2_r16_count > 0u) {
    value.aperiodicZP_CSI_RS_ResourceSetsToReleaseListDCI_1_2_r16_items = (ZP_CSI_RS_ResourceSetId*)std::malloc((std::size_t)value.aperiodicZP_CSI_RS_ResourceSetsToReleaseListDCI_1_2_r16_count * sizeof(ZP_CSI_RS_ResourceSetId));
    if (value.aperiodicZP_CSI_RS_ResourceSetsToReleaseListDCI_1_2_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.aperiodicZP_CSI_RS_ResourceSetsToReleaseListDCI_1_2_r16_items, 0, (std::size_t)value.aperiodicZP_CSI_RS_ResourceSetsToReleaseListDCI_1_2_r16_count * sizeof(ZP_CSI_RS_ResourceSetId));
}
for (std::uint32_t i = 0; i < value.aperiodicZP_CSI_RS_ResourceSetsToReleaseListDCI_1_2_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
    value.aperiodicZP_CSI_RS_ResourceSetsToReleaseListDCI_1_2_r16_items[i] = (ZP_CSI_RS_ResourceSetId)tmp_value;
}
    }
    if (present_5) {
        if (Decode_SetupRelease_DMRS_DownlinkConfig(dec, value.dmrs_DownlinkForPDSCH_MappingTypeA_DCI_1_2_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_SetupRelease_DMRS_DownlinkConfig(dec, value.dmrs_DownlinkForPDSCH_MappingTypeB_DCI_1_2_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        value.dmrs_SequenceInitializationDCI_1_2_r16 = (PDSCH_Config_ExtGroup1_Dmrs_SequenceInitializationDCI_1_2_r16)0;
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.harq_ProcessNumberSizeDCI_1_2_r16 = (int64_t)tmp_value;
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.mcs_TableDCI_1_2_r16 = (PDSCH_Config_ExtGroup1_Mcs_TableDCI_1_2_r16)tmp_value;
    }
    if (present_10) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.numberOfBitsForRV_DCI_1_2_r16 = (int64_t)tmp_value;
    }
    if (present_11) {
        if (Decode_SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16(dec, value.pdsch_TimeDomainAllocationListDCI_1_2_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_12) {
        if (Decode_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16(dec, value.prb_BundlingTypeDCI_1_2_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_13) {
        value.priorityIndicatorDCI_1_2_r16 = (PDSCH_Config_ExtGroup1_PriorityIndicatorDCI_1_2_r16)0;
    }
    if (present_14) {
        if (Decode_RateMatchPatternGroup(dec, value.rateMatchPatternGroup1DCI_1_2_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_15) {
        if (Decode_RateMatchPatternGroup(dec, value.rateMatchPatternGroup2DCI_1_2_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_16) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.resourceAllocationType1GranularityDCI_1_2_r16 = (PDSCH_Config_ExtGroup1_ResourceAllocationType1GranularityDCI_1_2_r16)tmp_value;
    }
    if (present_17) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.vrb_ToPRB_InterleaverDCI_1_2_r16 = (PDSCH_Config_ExtGroup1_Vrb_ToPRB_InterleaverDCI_1_2_r16)tmp_value;
    }
    if (present_18) {
        value.referenceOfSLIVDCI_1_2_r16 = (PDSCH_Config_ExtGroup1_ReferenceOfSLIVDCI_1_2_r16)0;
    }
    if (present_19) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.resourceAllocationDCI_1_2_r16 = (PDSCH_Config_ExtGroup1_ResourceAllocationDCI_1_2_r16)tmp_value;
    }
    if (present_20) {
        value.priorityIndicatorDCI_1_1_r16 = (PDSCH_Config_ExtGroup1_PriorityIndicatorDCI_1_1_r16)0;
    }
    if (present_21) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.dataScramblingIdentityPDSCH2_r16 = (int64_t)tmp_value;
    }
    if (present_22) {
        if (Decode_SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16(dec, value.pdsch_TimeDomainAllocationList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_23) {
        if (Decode_SetupRelease_RepetitionSchemeConfig_r16(dec, value.repetitionSchemeConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_Config_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_Config_ExtGroup1(PDSCH_Config_ExtGroup1& value)
{
    if (value.has_maxMIMO_Layers_r16) {
        Free_SetupRelease_MaxMIMO_LayersDL_r16(value.maxMIMO_Layers_r16);
    }
    if (value.has_minimumSchedulingOffsetK0_r16) {
        Free_SetupRelease_MinSchedulingOffsetK0_Values_r16(value.minimumSchedulingOffsetK0_r16);
    }
    if (value.has_antennaPortsFieldPresenceDCI_1_2_r16) {
    }
    if (value.has_aperiodicZP_CSI_RS_ResourceSetsToAddModListDCI_1_2_r16) {
        if (value.aperiodicZP_CSI_RS_ResourceSetsToAddModListDCI_1_2_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.aperiodicZP_CSI_RS_ResourceSetsToAddModListDCI_1_2_r16_count; ++i) {
                Free_ZP_CSI_RS_ResourceSet(value.aperiodicZP_CSI_RS_ResourceSetsToAddModListDCI_1_2_r16_items[i]);
            }
            std::free(value.aperiodicZP_CSI_RS_ResourceSetsToAddModListDCI_1_2_r16_items);
            value.aperiodicZP_CSI_RS_ResourceSetsToAddModListDCI_1_2_r16_items = nullptr;
        }
        value.aperiodicZP_CSI_RS_ResourceSetsToAddModListDCI_1_2_r16_count = 0;
    }
    if (value.has_aperiodicZP_CSI_RS_ResourceSetsToReleaseListDCI_1_2_r16) {
        if (value.aperiodicZP_CSI_RS_ResourceSetsToReleaseListDCI_1_2_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.aperiodicZP_CSI_RS_ResourceSetsToReleaseListDCI_1_2_r16_count; ++i) {
            }
            std::free(value.aperiodicZP_CSI_RS_ResourceSetsToReleaseListDCI_1_2_r16_items);
            value.aperiodicZP_CSI_RS_ResourceSetsToReleaseListDCI_1_2_r16_items = nullptr;
        }
        value.aperiodicZP_CSI_RS_ResourceSetsToReleaseListDCI_1_2_r16_count = 0;
    }
    if (value.has_dmrs_DownlinkForPDSCH_MappingTypeA_DCI_1_2_r16) {
        Free_SetupRelease_DMRS_DownlinkConfig(value.dmrs_DownlinkForPDSCH_MappingTypeA_DCI_1_2_r16);
    }
    if (value.has_dmrs_DownlinkForPDSCH_MappingTypeB_DCI_1_2_r16) {
        Free_SetupRelease_DMRS_DownlinkConfig(value.dmrs_DownlinkForPDSCH_MappingTypeB_DCI_1_2_r16);
    }
    if (value.has_dmrs_SequenceInitializationDCI_1_2_r16) {
    }
    if (value.has_harq_ProcessNumberSizeDCI_1_2_r16) {
    }
    if (value.has_mcs_TableDCI_1_2_r16) {
    }
    if (value.has_numberOfBitsForRV_DCI_1_2_r16) {
    }
    if (value.has_pdsch_TimeDomainAllocationListDCI_1_2_r16) {
        Free_SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16(value.pdsch_TimeDomainAllocationListDCI_1_2_r16);
    }
    if (value.has_prb_BundlingTypeDCI_1_2_r16) {
        Free_PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16(value.prb_BundlingTypeDCI_1_2_r16);
    }
    if (value.has_priorityIndicatorDCI_1_2_r16) {
    }
    if (value.has_rateMatchPatternGroup1DCI_1_2_r16) {
        Free_RateMatchPatternGroup(value.rateMatchPatternGroup1DCI_1_2_r16);
    }
    if (value.has_rateMatchPatternGroup2DCI_1_2_r16) {
        Free_RateMatchPatternGroup(value.rateMatchPatternGroup2DCI_1_2_r16);
    }
    if (value.has_resourceAllocationType1GranularityDCI_1_2_r16) {
    }
    if (value.has_vrb_ToPRB_InterleaverDCI_1_2_r16) {
    }
    if (value.has_referenceOfSLIVDCI_1_2_r16) {
    }
    if (value.has_resourceAllocationDCI_1_2_r16) {
    }
    if (value.has_priorityIndicatorDCI_1_1_r16) {
    }
    if (value.has_dataScramblingIdentityPDSCH2_r16) {
    }
    if (value.has_pdsch_TimeDomainAllocationList_r16) {
        Free_SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16(value.pdsch_TimeDomainAllocationList_r16);
    }
    if (value.has_repetitionSchemeConfig_r16) {
        Free_SetupRelease_RepetitionSchemeConfig_r16(value.repetitionSchemeConfig_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SlotBased_v1630：ASN.1 SlotBased-v1630；源文件第 11221 行；SEQUENCE。
// Encode_SlotBased_v1630 只读不分配；Decode_SlotBased_v1630 可能 malloc（失败时内部已释放并清零）；Free_SlotBased_v1630 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SlotBased_v1630(Encoder& enc, const SlotBased_v1630& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tciMapping_r16), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.sequenceOffsetForRV_r16), 0, 0);
    return enc.Error();
}

ErrorCode Decode_SlotBased_v1630(Decoder& dec, SlotBased_v1630& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.tciMapping_r16 = (SlotBased_v1630_TciMapping_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 0, tmp_value)) { goto fail; }
        value.sequenceOffsetForRV_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SlotBased_v1630(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SlotBased_v1630(SlotBased_v1630& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SlotBased_v1630：ASN.1 SetupRelease<SlotBased-v1630>；源文件第 11208 行；CHOICE。
// Encode_SetupRelease_SlotBased_v1630 只读不分配；Decode_SetupRelease_SlotBased_v1630 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SlotBased_v1630 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SlotBased_v1630(Encoder& enc, const SetupRelease_SlotBased_v1630& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SlotBased_v1630_Tag_release:
        (void)0;
        break;
    case SetupRelease_SlotBased_v1630_Tag_setup:
        Encode_SlotBased_v1630(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SlotBased_v1630(Decoder& dec, SetupRelease_SlotBased_v1630& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SlotBased_v1630_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SlotBased_v1630_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SlotBased_v1630_Tag_setup: {
        if (Decode_SlotBased_v1630(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SlotBased_v1630(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SlotBased_v1630(SetupRelease_SlotBased_v1630& value)
{
    switch (value.tag) {
    case SetupRelease_SlotBased_v1630_Tag_release:
        break;
    case SetupRelease_SlotBased_v1630_Tag_setup:
        Free_SlotBased_v1630(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RepetitionSchemeConfig_v1630：ASN.1 RepetitionSchemeConfig-v1630；源文件第 11207 行；SEQUENCE。
// Encode_RepetitionSchemeConfig_v1630 只读不分配；Decode_RepetitionSchemeConfig_v1630 可能 malloc（失败时内部已释放并清零）；Free_RepetitionSchemeConfig_v1630 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RepetitionSchemeConfig_v1630(Encoder& enc, const RepetitionSchemeConfig_v1630& value)
{
    Encode_SetupRelease_SlotBased_v1630(enc, value.slotBased_v1630);
    return enc.Error();
}

ErrorCode Decode_RepetitionSchemeConfig_v1630(Decoder& dec, RepetitionSchemeConfig_v1630& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_SetupRelease_SlotBased_v1630(dec, value.slotBased_v1630) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RepetitionSchemeConfig_v1630(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RepetitionSchemeConfig_v1630(RepetitionSchemeConfig_v1630& value)
{
    Free_SetupRelease_SlotBased_v1630(value.slotBased_v1630);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_RepetitionSchemeConfig_v1630：ASN.1 SetupRelease<RepetitionSchemeConfig-v1630>；源文件第 9487 行；CHOICE。
// Encode_SetupRelease_RepetitionSchemeConfig_v1630 只读不分配；Decode_SetupRelease_RepetitionSchemeConfig_v1630 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_RepetitionSchemeConfig_v1630 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_RepetitionSchemeConfig_v1630(Encoder& enc, const SetupRelease_RepetitionSchemeConfig_v1630& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_RepetitionSchemeConfig_v1630_Tag_release:
        (void)0;
        break;
    case SetupRelease_RepetitionSchemeConfig_v1630_Tag_setup:
        Encode_RepetitionSchemeConfig_v1630(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_RepetitionSchemeConfig_v1630(Decoder& dec, SetupRelease_RepetitionSchemeConfig_v1630& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_RepetitionSchemeConfig_v1630_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_RepetitionSchemeConfig_v1630_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_RepetitionSchemeConfig_v1630_Tag_setup: {
        if (Decode_RepetitionSchemeConfig_v1630(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_RepetitionSchemeConfig_v1630(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_RepetitionSchemeConfig_v1630(SetupRelease_RepetitionSchemeConfig_v1630& value)
{
    switch (value.tag) {
    case SetupRelease_RepetitionSchemeConfig_v1630_Tag_release:
        break;
    case SetupRelease_RepetitionSchemeConfig_v1630_Tag_setup:
        Free_RepetitionSchemeConfig_v1630(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDSCH_Config_ExtGroup2：ASN.1 PDSCH_Config_ExtGroup2；源文件第 9486 行；扩展添加组 [[ ]]。
// Encode_PDSCH_Config_ExtGroup2 只读不分配；Decode_PDSCH_Config_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_PDSCH_Config_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDSCH_Config_ExtGroup2(Encoder& enc, const PDSCH_Config_ExtGroup2& value)
{
    enc.WriteBit(value.has_repetitionSchemeConfig_v1630);
    if (value.has_repetitionSchemeConfig_v1630) {
        Encode_SetupRelease_RepetitionSchemeConfig_v1630(enc, value.repetitionSchemeConfig_v1630);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_Config_ExtGroup2(Decoder& dec, PDSCH_Config_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_RepetitionSchemeConfig_v1630(dec, value.repetitionSchemeConfig_v1630) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_Config_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_Config_ExtGroup2(PDSCH_Config_ExtGroup2& value)
{
    if (value.has_repetitionSchemeConfig_v1630) {
        Free_SetupRelease_RepetitionSchemeConfig_v1630(value.repetitionSchemeConfig_v1630);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ServingCellAndBWP_Id_r17：ASN.1 ServingCellAndBWP-Id-r17；源文件第 12398 行；SEQUENCE。
// Encode_ServingCellAndBWP_Id_r17 只读不分配；Decode_ServingCellAndBWP_Id_r17 可能 malloc（失败时内部已释放并清零）；Free_ServingCellAndBWP_Id_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ServingCellAndBWP_Id_r17(Encoder& enc, const ServingCellAndBWP_Id_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.servingcell_r17), 0, 31);
    enc.WriteConstrainedInteger((std::int64_t)(value.bwp_r17), 0, 4);
    return enc.Error();
}

ErrorCode Decode_ServingCellAndBWP_Id_r17(Decoder& dec, ServingCellAndBWP_Id_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.servingcell_r17 = (ServCellIndex)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.bwp_r17 = (BWP_Id)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellAndBWP_Id_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellAndBWP_Id_r17(ServingCellAndBWP_Id_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Explicitlist：ASN.1 dl-OrJointTCI-StateList-r17/explicitlist；源文件第 9496 行；SEQUENCE。
// Encode_PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Explicitlist 只读不分配；Decode_PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Explicitlist 可能 malloc（失败时内部已释放并清零）；Free_PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Explicitlist 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Explicitlist(Encoder& enc, const PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Explicitlist& value)
{
    enc.WriteBit(value.has_dl_OrJointTCI_StateToAddModList_r17);
    enc.WriteBit(value.has_dl_OrJointTCI_StateToReleaseList_r17);
    if (value.has_dl_OrJointTCI_StateToAddModList_r17) {
enc.WriteConstrainedLength(value.dl_OrJointTCI_StateToAddModList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.dl_OrJointTCI_StateToAddModList_r17_count; ++i) {
    Encode_TCI_State(enc, value.dl_OrJointTCI_StateToAddModList_r17_items[i]);
}
    }
    if (value.has_dl_OrJointTCI_StateToReleaseList_r17) {
enc.WriteConstrainedLength(value.dl_OrJointTCI_StateToReleaseList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.dl_OrJointTCI_StateToReleaseList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.dl_OrJointTCI_StateToReleaseList_r17_items[i]), 0, 127);
}
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Explicitlist(Decoder& dec, PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Explicitlist& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.dl_OrJointTCI_StateToAddModList_r17_count)) { goto fail; }
if (value.dl_OrJointTCI_StateToAddModList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.dl_OrJointTCI_StateToAddModList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.dl_OrJointTCI_StateToAddModList_r17_count > 0u) {
    value.dl_OrJointTCI_StateToAddModList_r17_items = (TCI_State*)std::malloc((std::size_t)value.dl_OrJointTCI_StateToAddModList_r17_count * sizeof(TCI_State));
    if (value.dl_OrJointTCI_StateToAddModList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.dl_OrJointTCI_StateToAddModList_r17_items, 0, (std::size_t)value.dl_OrJointTCI_StateToAddModList_r17_count * sizeof(TCI_State));
}
for (std::uint32_t i = 0; i < value.dl_OrJointTCI_StateToAddModList_r17_count; ++i) {
    if (Decode_TCI_State(dec, value.dl_OrJointTCI_StateToAddModList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.dl_OrJointTCI_StateToReleaseList_r17_count)) { goto fail; }
if (value.dl_OrJointTCI_StateToReleaseList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.dl_OrJointTCI_StateToReleaseList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.dl_OrJointTCI_StateToReleaseList_r17_count > 0u) {
    value.dl_OrJointTCI_StateToReleaseList_r17_items = (TCI_StateId*)std::malloc((std::size_t)value.dl_OrJointTCI_StateToReleaseList_r17_count * sizeof(TCI_StateId));
    if (value.dl_OrJointTCI_StateToReleaseList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.dl_OrJointTCI_StateToReleaseList_r17_items, 0, (std::size_t)value.dl_OrJointTCI_StateToReleaseList_r17_count * sizeof(TCI_StateId));
}
for (std::uint32_t i = 0; i < value.dl_OrJointTCI_StateToReleaseList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
    value.dl_OrJointTCI_StateToReleaseList_r17_items[i] = (TCI_StateId)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Explicitlist(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Explicitlist(PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Explicitlist& value)
{
    if (value.has_dl_OrJointTCI_StateToAddModList_r17) {
        if (value.dl_OrJointTCI_StateToAddModList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.dl_OrJointTCI_StateToAddModList_r17_count; ++i) {
                Free_TCI_State(value.dl_OrJointTCI_StateToAddModList_r17_items[i]);
            }
            std::free(value.dl_OrJointTCI_StateToAddModList_r17_items);
            value.dl_OrJointTCI_StateToAddModList_r17_items = nullptr;
        }
        value.dl_OrJointTCI_StateToAddModList_r17_count = 0;
    }
    if (value.has_dl_OrJointTCI_StateToReleaseList_r17) {
        if (value.dl_OrJointTCI_StateToReleaseList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.dl_OrJointTCI_StateToReleaseList_r17_count; ++i) {
            }
            std::free(value.dl_OrJointTCI_StateToReleaseList_r17_items);
            value.dl_OrJointTCI_StateToReleaseList_r17_items = nullptr;
        }
        value.dl_OrJointTCI_StateToReleaseList_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17：ASN.1 dl-OrJointTCI-StateList-r17；源文件第 9495 行；CHOICE。
// Encode_PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17 只读不分配；Decode_PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17 可能 malloc（失败时内部已释放并清零）；Free_PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17(Encoder& enc, const PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Tag_explicitlist:
        Encode_PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Explicitlist(enc, value.u.explicitlist);
        break;
    case PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Tag_unifiedTCI_StateRef_r17:
        Encode_ServingCellAndBWP_Id_r17(enc, value.u.unifiedTCI_StateRef_r17);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17(Decoder& dec, PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Tag)root_index;
    switch (value.tag) {
    case PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Tag_explicitlist: {
        if (Decode_PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Explicitlist(dec, value.u.explicitlist) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Tag_unifiedTCI_StateRef_r17: {
        if (Decode_ServingCellAndBWP_Id_r17(dec, value.u.unifiedTCI_StateRef_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17(PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17& value)
{
    switch (value.tag) {
    case PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Tag_explicitlist:
        Free_PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Explicitlist(value.u.explicitlist);
        break;
    case PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Tag_unifiedTCI_StateRef_r17:
        Free_ServingCellAndBWP_Id_r17(value.u.unifiedTCI_StateRef_r17);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// Dummy_TDRA_List：ASN.1 Dummy-TDRA-List；源文件第 9614 行；SEQUENCE OF。
// Encode_Dummy_TDRA_List 只读不分配；Decode_Dummy_TDRA_List 可能 malloc（失败时内部已释放并清零）；Free_Dummy_TDRA_List 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_Dummy_TDRA_List(Encoder& enc, const Dummy_TDRA_List& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MultiPDSCH_TDRA_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_Dummy_TDRA_List(Decoder& dec, Dummy_TDRA_List& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MultiPDSCH_TDRA_r17*)std::malloc((std::size_t)value.count * sizeof(MultiPDSCH_TDRA_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MultiPDSCH_TDRA_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MultiPDSCH_TDRA_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_Dummy_TDRA_List(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Dummy_TDRA_List(Dummy_TDRA_List& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MultiPDSCH_TDRA_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_Dummy_TDRA_List：ASN.1 SetupRelease<Dummy-TDRA-List>；源文件第 9506 行；CHOICE。
// Encode_SetupRelease_Dummy_TDRA_List 只读不分配；Decode_SetupRelease_Dummy_TDRA_List 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_Dummy_TDRA_List 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_Dummy_TDRA_List(Encoder& enc, const SetupRelease_Dummy_TDRA_List& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_Dummy_TDRA_List_Tag_release:
        (void)0;
        break;
    case SetupRelease_Dummy_TDRA_List_Tag_setup:
        Encode_Dummy_TDRA_List(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_Dummy_TDRA_List(Decoder& dec, SetupRelease_Dummy_TDRA_List& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_Dummy_TDRA_List_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_Dummy_TDRA_List_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_Dummy_TDRA_List_Tag_setup: {
        if (Decode_Dummy_TDRA_List(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_Dummy_TDRA_List(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_Dummy_TDRA_List(SetupRelease_Dummy_TDRA_List& value)
{
    switch (value.tag) {
    case SetupRelease_Dummy_TDRA_List_Tag_release:
        break;
    case SetupRelease_Dummy_TDRA_List_Tag_setup:
        Free_Dummy_TDRA_List(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MinSchedulingOffsetK0_Values_r17：ASN.1 MinSchedulingOffsetK0-Values-r17；源文件第 9533 行；SEQUENCE OF。
// Encode_MinSchedulingOffsetK0_Values_r17 只读不分配；Decode_MinSchedulingOffsetK0_Values_r17 可能 malloc（失败时内部已释放并清零）；Free_MinSchedulingOffsetK0_Values_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MinSchedulingOffsetK0_Values_r17(Encoder& enc, const MinSchedulingOffsetK0_Values_r17& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 2u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 64);
    }
    return enc.Error();
}

ErrorCode Decode_MinSchedulingOffsetK0_Values_r17(Decoder& dec, MinSchedulingOffsetK0_Values_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 2u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 2u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 64, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_MinSchedulingOffsetK0_Values_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MinSchedulingOffsetK0_Values_r17(MinSchedulingOffsetK0_Values_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_MinSchedulingOffsetK0_Values_r17：ASN.1 SetupRelease<MinSchedulingOffsetK0-Values-r17>；源文件第 9508 行；CHOICE。
// Encode_SetupRelease_MinSchedulingOffsetK0_Values_r17 只读不分配；Decode_SetupRelease_MinSchedulingOffsetK0_Values_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_MinSchedulingOffsetK0_Values_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_MinSchedulingOffsetK0_Values_r17(Encoder& enc, const SetupRelease_MinSchedulingOffsetK0_Values_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_MinSchedulingOffsetK0_Values_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_MinSchedulingOffsetK0_Values_r17_Tag_setup:
        Encode_MinSchedulingOffsetK0_Values_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_MinSchedulingOffsetK0_Values_r17(Decoder& dec, SetupRelease_MinSchedulingOffsetK0_Values_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_MinSchedulingOffsetK0_Values_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_MinSchedulingOffsetK0_Values_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_MinSchedulingOffsetK0_Values_r17_Tag_setup: {
        if (Decode_MinSchedulingOffsetK0_Values_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_MinSchedulingOffsetK0_Values_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_MinSchedulingOffsetK0_Values_r17(SetupRelease_MinSchedulingOffsetK0_Values_r17& value)
{
    switch (value.tag) {
    case SetupRelease_MinSchedulingOffsetK0_Values_r17_Tag_release:
        break;
    case SetupRelease_MinSchedulingOffsetK0_Values_r17_Tag_setup:
        Free_MinSchedulingOffsetK0_Values_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDSCH_Config_ExtGroup3：ASN.1 PDSCH_Config_ExtGroup3；源文件第 9489 行；扩展添加组 [[ ]]。
// Encode_PDSCH_Config_ExtGroup3 只读不分配；Decode_PDSCH_Config_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_PDSCH_Config_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDSCH_Config_ExtGroup3(Encoder& enc, const PDSCH_Config_ExtGroup3& value)
{
    enc.WriteBit(value.has_pdsch_HARQ_ACK_OneShotFeedbackDCI_1_2_r17);
    enc.WriteBit(value.has_pdsch_HARQ_ACK_EnhType3DCI_1_2_r17);
    enc.WriteBit(value.has_pdsch_HARQ_ACK_EnhType3DCI_Field_1_2_r17);
    enc.WriteBit(value.has_pdsch_HARQ_ACK_RetxDCI_1_2_r17);
    enc.WriteBit(value.has_pucch_sSCellDynDCI_1_2_r17);
    enc.WriteBit(value.has_dl_OrJointTCI_StateList_r17);
    enc.WriteBit(value.has_beamAppTime_r17);
    enc.WriteBit(value.has_dummy);
    enc.WriteBit(value.has_dmrs_FD_OCC_DisabledForRank1_PDSCH_r17);
    enc.WriteBit(value.has_minimumSchedulingOffsetK0_r17);
    enc.WriteBit(value.has_harq_ProcessNumberSizeDCI_1_2_v1700);
    enc.WriteBit(value.has_harq_ProcessNumberSizeDCI_1_1_r17);
    enc.WriteBit(value.has_mcs_Table_r17);
    enc.WriteBit(value.has_mcs_TableDCI_1_2_r17);
    enc.WriteBit(value.has_xOverheadMulticast_r17);
    enc.WriteBit(value.has_priorityIndicatorDCI_4_2_r17);
    enc.WriteBit(value.has_sizeDCI_4_2_r17);
    if (value.has_pdsch_HARQ_ACK_OneShotFeedbackDCI_1_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_HARQ_ACK_OneShotFeedbackDCI_1_2_r17), 0, 0);
    }
    if (value.has_pdsch_HARQ_ACK_EnhType3DCI_1_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_HARQ_ACK_EnhType3DCI_1_2_r17), 0, 0);
    }
    if (value.has_pdsch_HARQ_ACK_EnhType3DCI_Field_1_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_HARQ_ACK_EnhType3DCI_Field_1_2_r17), 0, 0);
    }
    if (value.has_pdsch_HARQ_ACK_RetxDCI_1_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_HARQ_ACK_RetxDCI_1_2_r17), 0, 0);
    }
    if (value.has_pucch_sSCellDynDCI_1_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_sSCellDynDCI_1_2_r17), 0, 0);
    }
    if (value.has_dl_OrJointTCI_StateList_r17) {
        Encode_PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17(enc, value.dl_OrJointTCI_StateList_r17);
    }
    if (value.has_beamAppTime_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.beamAppTime_r17), 0, 15);
    }
    if (value.has_dummy) {
        Encode_SetupRelease_Dummy_TDRA_List(enc, value.dummy);
    }
    if (value.has_dmrs_FD_OCC_DisabledForRank1_PDSCH_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_FD_OCC_DisabledForRank1_PDSCH_r17), 0, 0);
    }
    if (value.has_minimumSchedulingOffsetK0_r17) {
        Encode_SetupRelease_MinSchedulingOffsetK0_Values_r17(enc, value.minimumSchedulingOffsetK0_r17);
    }
    if (value.has_harq_ProcessNumberSizeDCI_1_2_v1700) {
        enc.WriteConstrainedInteger((std::int64_t)(value.harq_ProcessNumberSizeDCI_1_2_v1700), 0, 5);
    }
    if (value.has_harq_ProcessNumberSizeDCI_1_1_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.harq_ProcessNumberSizeDCI_1_1_r17), 5, 5);
    }
    if (value.has_mcs_Table_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mcs_Table_r17), 0, 0);
    }
    if (value.has_mcs_TableDCI_1_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mcs_TableDCI_1_2_r17), 0, 0);
    }
    if (value.has_xOverheadMulticast_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.xOverheadMulticast_r17), 0, 2);
    }
    if (value.has_priorityIndicatorDCI_4_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.priorityIndicatorDCI_4_2_r17), 0, 0);
    }
    if (value.has_sizeDCI_4_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sizeDCI_4_2_r17), 20, 140);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_Config_ExtGroup3(Decoder& dec, PDSCH_Config_ExtGroup3& value)
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
        value.pdsch_HARQ_ACK_OneShotFeedbackDCI_1_2_r17 = (PDSCH_Config_ExtGroup3_Pdsch_HARQ_ACK_OneShotFeedbackDCI_1_2_r17)0;
    }
    if (present_1) {
        value.pdsch_HARQ_ACK_EnhType3DCI_1_2_r17 = (PDSCH_Config_ExtGroup3_Pdsch_HARQ_ACK_EnhType3DCI_1_2_r17)0;
    }
    if (present_2) {
        value.pdsch_HARQ_ACK_EnhType3DCI_Field_1_2_r17 = (PDSCH_Config_ExtGroup3_Pdsch_HARQ_ACK_EnhType3DCI_Field_1_2_r17)0;
    }
    if (present_3) {
        value.pdsch_HARQ_ACK_RetxDCI_1_2_r17 = (PDSCH_Config_ExtGroup3_Pdsch_HARQ_ACK_RetxDCI_1_2_r17)0;
    }
    if (present_4) {
        value.pucch_sSCellDynDCI_1_2_r17 = (PDSCH_Config_ExtGroup3_Pucch_sSCellDynDCI_1_2_r17)0;
    }
    if (present_5) {
        if (Decode_PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17(dec, value.dl_OrJointTCI_StateList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.beamAppTime_r17 = (PDSCH_Config_ExtGroup3_BeamAppTime_r17)tmp_value;
    }
    if (present_7) {
        if (Decode_SetupRelease_Dummy_TDRA_List(dec, value.dummy) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        value.dmrs_FD_OCC_DisabledForRank1_PDSCH_r17 = (PDSCH_Config_ExtGroup3_Dmrs_FD_OCC_DisabledForRank1_PDSCH_r17)0;
    }
    if (present_9) {
        if (Decode_SetupRelease_MinSchedulingOffsetK0_Values_r17(dec, value.minimumSchedulingOffsetK0_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_10) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.harq_ProcessNumberSizeDCI_1_2_v1700 = (int64_t)tmp_value;
    }
    if (present_11) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(5, 5, tmp_value)) { goto fail; }
        value.harq_ProcessNumberSizeDCI_1_1_r17 = (int64_t)tmp_value;
    }
    if (present_12) {
        value.mcs_Table_r17 = (PDSCH_Config_ExtGroup3_Mcs_Table_r17)0;
    }
    if (present_13) {
        value.mcs_TableDCI_1_2_r17 = (PDSCH_Config_ExtGroup3_Mcs_TableDCI_1_2_r17)0;
    }
    if (present_14) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.xOverheadMulticast_r17 = (PDSCH_Config_ExtGroup3_XOverheadMulticast_r17)tmp_value;
    }
    if (present_15) {
        value.priorityIndicatorDCI_4_2_r17 = (PDSCH_Config_ExtGroup3_PriorityIndicatorDCI_4_2_r17)0;
    }
    if (present_16) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(20, 140, tmp_value)) { goto fail; }
        value.sizeDCI_4_2_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_Config_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_Config_ExtGroup3(PDSCH_Config_ExtGroup3& value)
{
    if (value.has_pdsch_HARQ_ACK_OneShotFeedbackDCI_1_2_r17) {
    }
    if (value.has_pdsch_HARQ_ACK_EnhType3DCI_1_2_r17) {
    }
    if (value.has_pdsch_HARQ_ACK_EnhType3DCI_Field_1_2_r17) {
    }
    if (value.has_pdsch_HARQ_ACK_RetxDCI_1_2_r17) {
    }
    if (value.has_pucch_sSCellDynDCI_1_2_r17) {
    }
    if (value.has_dl_OrJointTCI_StateList_r17) {
        Free_PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17(value.dl_OrJointTCI_StateList_r17);
    }
    if (value.has_beamAppTime_r17) {
    }
    if (value.has_dummy) {
        Free_SetupRelease_Dummy_TDRA_List(value.dummy);
    }
    if (value.has_dmrs_FD_OCC_DisabledForRank1_PDSCH_r17) {
    }
    if (value.has_minimumSchedulingOffsetK0_r17) {
        Free_SetupRelease_MinSchedulingOffsetK0_Values_r17(value.minimumSchedulingOffsetK0_r17);
    }
    if (value.has_harq_ProcessNumberSizeDCI_1_2_v1700) {
    }
    if (value.has_harq_ProcessNumberSizeDCI_1_1_r17) {
    }
    if (value.has_mcs_Table_r17) {
    }
    if (value.has_mcs_TableDCI_1_2_r17) {
    }
    if (value.has_xOverheadMulticast_r17) {
    }
    if (value.has_priorityIndicatorDCI_4_2_r17) {
    }
    if (value.has_sizeDCI_4_2_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MultiPDSCH_TDRA_List_r17：ASN.1 MultiPDSCH-TDRA-List-r17；源文件第 9616 行；SEQUENCE OF。
// Encode_MultiPDSCH_TDRA_List_r17 只读不分配；Decode_MultiPDSCH_TDRA_List_r17 可能 malloc（失败时内部已释放并清零）；Free_MultiPDSCH_TDRA_List_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MultiPDSCH_TDRA_List_r17(Encoder& enc, const MultiPDSCH_TDRA_List_r17& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 64u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MultiPDSCH_TDRA_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MultiPDSCH_TDRA_List_r17(Decoder& dec, MultiPDSCH_TDRA_List_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 64u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 64u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MultiPDSCH_TDRA_r17*)std::malloc((std::size_t)value.count * sizeof(MultiPDSCH_TDRA_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MultiPDSCH_TDRA_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MultiPDSCH_TDRA_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MultiPDSCH_TDRA_List_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MultiPDSCH_TDRA_List_r17(MultiPDSCH_TDRA_List_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MultiPDSCH_TDRA_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_MultiPDSCH_TDRA_List_r17：ASN.1 SetupRelease<MultiPDSCH-TDRA-List-r17>；源文件第 9518 行；CHOICE。
// Encode_SetupRelease_MultiPDSCH_TDRA_List_r17 只读不分配；Decode_SetupRelease_MultiPDSCH_TDRA_List_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_MultiPDSCH_TDRA_List_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_MultiPDSCH_TDRA_List_r17(Encoder& enc, const SetupRelease_MultiPDSCH_TDRA_List_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_MultiPDSCH_TDRA_List_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_MultiPDSCH_TDRA_List_r17_Tag_setup:
        Encode_MultiPDSCH_TDRA_List_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_MultiPDSCH_TDRA_List_r17(Decoder& dec, SetupRelease_MultiPDSCH_TDRA_List_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_MultiPDSCH_TDRA_List_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_MultiPDSCH_TDRA_List_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_MultiPDSCH_TDRA_List_r17_Tag_setup: {
        if (Decode_MultiPDSCH_TDRA_List_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_MultiPDSCH_TDRA_List_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_MultiPDSCH_TDRA_List_r17(SetupRelease_MultiPDSCH_TDRA_List_r17& value)
{
    switch (value.tag) {
    case SetupRelease_MultiPDSCH_TDRA_List_r17_Tag_release:
        break;
    case SetupRelease_MultiPDSCH_TDRA_List_r17_Tag_setup:
        Free_MultiPDSCH_TDRA_List_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDSCH_Config_ExtGroup4：ASN.1 PDSCH_Config_ExtGroup4；源文件第 9517 行；扩展添加组 [[ ]]。
// Encode_PDSCH_Config_ExtGroup4 只读不分配；Decode_PDSCH_Config_ExtGroup4 可能 malloc（失败时内部已释放并清零）；Free_PDSCH_Config_ExtGroup4 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDSCH_Config_ExtGroup4(Encoder& enc, const PDSCH_Config_ExtGroup4& value)
{
    enc.WriteBit(value.has_pdsch_TimeDomainAllocationListForMultiPDSCH_r17);
    if (value.has_pdsch_TimeDomainAllocationListForMultiPDSCH_r17) {
        Encode_SetupRelease_MultiPDSCH_TDRA_List_r17(enc, value.pdsch_TimeDomainAllocationListForMultiPDSCH_r17);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_Config_ExtGroup4(Decoder& dec, PDSCH_Config_ExtGroup4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_MultiPDSCH_TDRA_List_r17(dec, value.pdsch_TimeDomainAllocationListForMultiPDSCH_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_Config_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_Config_ExtGroup4(PDSCH_Config_ExtGroup4& value)
{
    if (value.has_pdsch_TimeDomainAllocationListForMultiPDSCH_r17) {
        Free_SetupRelease_MultiPDSCH_TDRA_List_r17(value.pdsch_TimeDomainAllocationListForMultiPDSCH_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// AdvancedReceiver_MU_MIMO_r18：ASN.1 AdvancedReceiver-MU-MIMO-r18；源文件第 4263 行；SEQUENCE。
// Encode_AdvancedReceiver_MU_MIMO_r18 只读不分配；Decode_AdvancedReceiver_MU_MIMO_r18 可能 malloc（失败时内部已释放并清零）；Free_AdvancedReceiver_MU_MIMO_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_AdvancedReceiver_MU_MIMO_r18(Encoder& enc, const AdvancedReceiver_MU_MIMO_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_precodingAndResourceAllocation_r18);
    enc.WriteBit(value.has_dmrsPowerBoosting_r18);
    enc.WriteBit(value.has_pdsch_TimeDomainAllocation_r18);
    enc.WriteBit(value.has_mcs_Table_r18);
    enc.WriteBit(value.has_advReceiver_MU_MIMO_DCI_1_1_r18);
    if (value.has_precodingAndResourceAllocation_r18) {
        enc.WriteBool(value.precodingAndResourceAllocation_r18);
    }
    if (value.has_dmrsPowerBoosting_r18) {
        enc.WriteBool(value.dmrsPowerBoosting_r18);
    }
    if (value.has_pdsch_TimeDomainAllocation_r18) {
        enc.WriteBool(value.pdsch_TimeDomainAllocation_r18);
    }
    if (value.has_mcs_Table_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mcs_Table_r18), 0, 3);
    }
    if (value.has_advReceiver_MU_MIMO_DCI_1_1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.advReceiver_MU_MIMO_DCI_1_1_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_AdvancedReceiver_MU_MIMO_r18(Decoder& dec, AdvancedReceiver_MU_MIMO_r18& value)
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
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.precodingAndResourceAllocation_r18 = tmp_value;
    }
    if (present_1) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.dmrsPowerBoosting_r18 = tmp_value;
    }
    if (present_2) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.pdsch_TimeDomainAllocation_r18 = tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.mcs_Table_r18 = (AdvancedReceiver_MU_MIMO_r18_Mcs_Table_r18)tmp_value;
    }
    if (present_4) {
        value.advReceiver_MU_MIMO_DCI_1_1_r18 = (AdvancedReceiver_MU_MIMO_r18_AdvReceiver_MU_MIMO_DCI_1_1_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_AdvancedReceiver_MU_MIMO_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AdvancedReceiver_MU_MIMO_r18(AdvancedReceiver_MU_MIMO_r18& value)
{
    if (value.has_precodingAndResourceAllocation_r18) {
    }
    if (value.has_dmrsPowerBoosting_r18) {
    }
    if (value.has_pdsch_TimeDomainAllocation_r18) {
    }
    if (value.has_mcs_Table_r18) {
    }
    if (value.has_advReceiver_MU_MIMO_DCI_1_1_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_AdvancedReceiver_MU_MIMO_r18：ASN.1 SetupRelease<AdvancedReceiver-MU-MIMO-r18>；源文件第 9521 行；CHOICE。
// Encode_SetupRelease_AdvancedReceiver_MU_MIMO_r18 只读不分配；Decode_SetupRelease_AdvancedReceiver_MU_MIMO_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_AdvancedReceiver_MU_MIMO_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_AdvancedReceiver_MU_MIMO_r18(Encoder& enc, const SetupRelease_AdvancedReceiver_MU_MIMO_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_AdvancedReceiver_MU_MIMO_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_AdvancedReceiver_MU_MIMO_r18_Tag_setup:
        Encode_AdvancedReceiver_MU_MIMO_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_AdvancedReceiver_MU_MIMO_r18(Decoder& dec, SetupRelease_AdvancedReceiver_MU_MIMO_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_AdvancedReceiver_MU_MIMO_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_AdvancedReceiver_MU_MIMO_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_AdvancedReceiver_MU_MIMO_r18_Tag_setup: {
        if (Decode_AdvancedReceiver_MU_MIMO_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_AdvancedReceiver_MU_MIMO_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_AdvancedReceiver_MU_MIMO_r18(SetupRelease_AdvancedReceiver_MU_MIMO_r18& value)
{
    switch (value.tag) {
    case SetupRelease_AdvancedReceiver_MU_MIMO_r18_Tag_release:
        break;
    case SetupRelease_AdvancedReceiver_MU_MIMO_r18_Tag_setup:
        Free_AdvancedReceiver_MU_MIMO_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDSCH_ConfigDCI_1_3_r18：ASN.1 PDSCH-ConfigDCI-1-3-r18；源文件第 9537 行；SEQUENCE。
// Encode_PDSCH_ConfigDCI_1_3_r18 只读不分配；Decode_PDSCH_ConfigDCI_1_3_r18 可能 malloc（失败时内部已释放并清零）；Free_PDSCH_ConfigDCI_1_3_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDSCH_ConfigDCI_1_3_r18(Encoder& enc, const PDSCH_ConfigDCI_1_3_r18& value)
{
    enc.WriteBit(value.has_resourceAllocationDCI_1_3_r18);
    enc.WriteBit(value.has_rbg_SizeDCI_1_3_r18);
    enc.WriteBit(value.has_resourceAllocationType1GranularityDCI_1_3_r18);
    enc.WriteBit(value.has_numberOfBitsForRV_DCI_1_3_r18);
    enc.WriteBit(value.has_harq_ProcessNumberSizeDCI_1_3_r18);
    if (value.has_resourceAllocationDCI_1_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.resourceAllocationDCI_1_3_r18), 0, 2);
    }
    if (value.has_rbg_SizeDCI_1_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rbg_SizeDCI_1_3_r18), 0, 3);
    }
    if (value.has_resourceAllocationType1GranularityDCI_1_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.resourceAllocationType1GranularityDCI_1_3_r18), 0, 3);
    }
    if (value.has_numberOfBitsForRV_DCI_1_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.numberOfBitsForRV_DCI_1_3_r18), 0, 2);
    }
    if (value.has_harq_ProcessNumberSizeDCI_1_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.harq_ProcessNumberSizeDCI_1_3_r18), 0, 5);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_ConfigDCI_1_3_r18(Decoder& dec, PDSCH_ConfigDCI_1_3_r18& value)
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
        value.resourceAllocationDCI_1_3_r18 = (PDSCH_ConfigDCI_1_3_r18_ResourceAllocationDCI_1_3_r18)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.rbg_SizeDCI_1_3_r18 = (PDSCH_ConfigDCI_1_3_r18_Rbg_SizeDCI_1_3_r18)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.resourceAllocationType1GranularityDCI_1_3_r18 = (PDSCH_ConfigDCI_1_3_r18_ResourceAllocationType1GranularityDCI_1_3_r18)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.numberOfBitsForRV_DCI_1_3_r18 = (int64_t)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.harq_ProcessNumberSizeDCI_1_3_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_ConfigDCI_1_3_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_ConfigDCI_1_3_r18(PDSCH_ConfigDCI_1_3_r18& value)
{
    if (value.has_resourceAllocationDCI_1_3_r18) {
    }
    if (value.has_rbg_SizeDCI_1_3_r18) {
    }
    if (value.has_resourceAllocationType1GranularityDCI_1_3_r18) {
    }
    if (value.has_numberOfBitsForRV_DCI_1_3_r18) {
    }
    if (value.has_harq_ProcessNumberSizeDCI_1_3_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PDSCH_ConfigDCI_1_3_r18：ASN.1 SetupRelease<PDSCH-ConfigDCI-1-3-r18>；源文件第 9522 行；CHOICE。
// Encode_SetupRelease_PDSCH_ConfigDCI_1_3_r18 只读不分配；Decode_SetupRelease_PDSCH_ConfigDCI_1_3_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PDSCH_ConfigDCI_1_3_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PDSCH_ConfigDCI_1_3_r18(Encoder& enc, const SetupRelease_PDSCH_ConfigDCI_1_3_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PDSCH_ConfigDCI_1_3_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_PDSCH_ConfigDCI_1_3_r18_Tag_setup:
        Encode_PDSCH_ConfigDCI_1_3_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PDSCH_ConfigDCI_1_3_r18(Decoder& dec, SetupRelease_PDSCH_ConfigDCI_1_3_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PDSCH_ConfigDCI_1_3_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PDSCH_ConfigDCI_1_3_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PDSCH_ConfigDCI_1_3_r18_Tag_setup: {
        if (Decode_PDSCH_ConfigDCI_1_3_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PDSCH_ConfigDCI_1_3_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PDSCH_ConfigDCI_1_3_r18(SetupRelease_PDSCH_ConfigDCI_1_3_r18& value)
{
    switch (value.tag) {
    case SetupRelease_PDSCH_ConfigDCI_1_3_r18_Tag_release:
        break;
    case SetupRelease_PDSCH_ConfigDCI_1_3_r18_Tag_setup:
        Free_PDSCH_ConfigDCI_1_3_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDSCH_Config_ExtGroup5：ASN.1 PDSCH_Config_ExtGroup5；源文件第 9520 行；扩展添加组 [[ ]]。
// Encode_PDSCH_Config_ExtGroup5 只读不分配；Decode_PDSCH_Config_ExtGroup5 可能 malloc（失败时内部已释放并清零）；Free_PDSCH_Config_ExtGroup5 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDSCH_Config_ExtGroup5(Encoder& enc, const PDSCH_Config_ExtGroup5& value)
{
    enc.WriteBit(value.has_advancedReceiver_MU_MIMO_r18);
    enc.WriteBit(value.has_pdsch_ConfigDCI_1_3_r18);
    if (value.has_advancedReceiver_MU_MIMO_r18) {
        Encode_SetupRelease_AdvancedReceiver_MU_MIMO_r18(enc, value.advancedReceiver_MU_MIMO_r18);
    }
    if (value.has_pdsch_ConfigDCI_1_3_r18) {
        Encode_SetupRelease_PDSCH_ConfigDCI_1_3_r18(enc, value.pdsch_ConfigDCI_1_3_r18);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_Config_ExtGroup5(Decoder& dec, PDSCH_Config_ExtGroup5& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_AdvancedReceiver_MU_MIMO_r18(dec, value.advancedReceiver_MU_MIMO_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_PDSCH_ConfigDCI_1_3_r18(dec, value.pdsch_ConfigDCI_1_3_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_Config_ExtGroup5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_Config_ExtGroup5(PDSCH_Config_ExtGroup5& value)
{
    if (value.has_advancedReceiver_MU_MIMO_r18) {
        Free_SetupRelease_AdvancedReceiver_MU_MIMO_r18(value.advancedReceiver_MU_MIMO_r18);
    }
    if (value.has_pdsch_ConfigDCI_1_3_r18) {
        Free_SetupRelease_PDSCH_ConfigDCI_1_3_r18(value.pdsch_ConfigDCI_1_3_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDSCH_TimeDomainResourceAllocationList：ASN.1 PDSCH-TimeDomainResourceAllocationList；源文件第 9590 行；SEQUENCE OF。
// Encode_PDSCH_TimeDomainResourceAllocationList 只读不分配；Decode_PDSCH_TimeDomainResourceAllocationList 可能 malloc（失败时内部已释放并清零）；Free_PDSCH_TimeDomainResourceAllocationList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDSCH_TimeDomainResourceAllocationList(Encoder& enc, const PDSCH_TimeDomainResourceAllocationList& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PDSCH_TimeDomainResourceAllocation(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_TimeDomainResourceAllocationList(Decoder& dec, PDSCH_TimeDomainResourceAllocationList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PDSCH_TimeDomainResourceAllocation*)std::malloc((std::size_t)value.count * sizeof(PDSCH_TimeDomainResourceAllocation));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PDSCH_TimeDomainResourceAllocation));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PDSCH_TimeDomainResourceAllocation(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_TimeDomainResourceAllocationList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_TimeDomainResourceAllocationList(PDSCH_TimeDomainResourceAllocationList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PDSCH_TimeDomainResourceAllocation(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PDSCH_TimeDomainResourceAllocationList：ASN.1 SetupRelease<PDSCH-TimeDomainResourceAllocationList>；源文件第 9409 行；CHOICE。
// Encode_SetupRelease_PDSCH_TimeDomainResourceAllocationList 只读不分配；Decode_SetupRelease_PDSCH_TimeDomainResourceAllocationList 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PDSCH_TimeDomainResourceAllocationList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PDSCH_TimeDomainResourceAllocationList(Encoder& enc, const SetupRelease_PDSCH_TimeDomainResourceAllocationList& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PDSCH_TimeDomainResourceAllocationList_Tag_release:
        (void)0;
        break;
    case SetupRelease_PDSCH_TimeDomainResourceAllocationList_Tag_setup:
        Encode_PDSCH_TimeDomainResourceAllocationList(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PDSCH_TimeDomainResourceAllocationList(Decoder& dec, SetupRelease_PDSCH_TimeDomainResourceAllocationList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PDSCH_TimeDomainResourceAllocationList_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PDSCH_TimeDomainResourceAllocationList_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PDSCH_TimeDomainResourceAllocationList_Tag_setup: {
        if (Decode_PDSCH_TimeDomainResourceAllocationList(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PDSCH_TimeDomainResourceAllocationList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PDSCH_TimeDomainResourceAllocationList(SetupRelease_PDSCH_TimeDomainResourceAllocationList& value)
{
    switch (value.tag) {
    case SetupRelease_PDSCH_TimeDomainResourceAllocationList_Tag_release:
        break;
    case SetupRelease_PDSCH_TimeDomainResourceAllocationList_Tag_setup:
        Free_PDSCH_TimeDomainResourceAllocationList(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDSCH_Config_Prb_BundlingType_StaticBundling：ASN.1 prb-BundlingType/staticBundling；源文件第 9421 行；SEQUENCE。
// Encode_PDSCH_Config_Prb_BundlingType_StaticBundling 只读不分配；Decode_PDSCH_Config_Prb_BundlingType_StaticBundling 可能 malloc（失败时内部已释放并清零）；Free_PDSCH_Config_Prb_BundlingType_StaticBundling 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDSCH_Config_Prb_BundlingType_StaticBundling(Encoder& enc, const PDSCH_Config_Prb_BundlingType_StaticBundling& value)
{
    enc.WriteBit(value.has_bundleSize);
    if (value.has_bundleSize) {
        enc.WriteConstrainedInteger((std::int64_t)(value.bundleSize), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_Config_Prb_BundlingType_StaticBundling(Decoder& dec, PDSCH_Config_Prb_BundlingType_StaticBundling& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.bundleSize = (PDSCH_Config_Prb_BundlingType_StaticBundling_BundleSize)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_Config_Prb_BundlingType_StaticBundling(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_Config_Prb_BundlingType_StaticBundling(PDSCH_Config_Prb_BundlingType_StaticBundling& value)
{
    if (value.has_bundleSize) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDSCH_Config_Prb_BundlingType_DynamicBundling：ASN.1 prb-BundlingType/dynamicBundling；源文件第 9424 行；SEQUENCE。
// Encode_PDSCH_Config_Prb_BundlingType_DynamicBundling 只读不分配；Decode_PDSCH_Config_Prb_BundlingType_DynamicBundling 可能 malloc（失败时内部已释放并清零）；Free_PDSCH_Config_Prb_BundlingType_DynamicBundling 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDSCH_Config_Prb_BundlingType_DynamicBundling(Encoder& enc, const PDSCH_Config_Prb_BundlingType_DynamicBundling& value)
{
    enc.WriteBit(value.has_bundleSizeSet1);
    enc.WriteBit(value.has_bundleSizeSet2);
    if (value.has_bundleSizeSet1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.bundleSizeSet1), 0, 3);
    }
    if (value.has_bundleSizeSet2) {
        enc.WriteConstrainedInteger((std::int64_t)(value.bundleSizeSet2), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_Config_Prb_BundlingType_DynamicBundling(Decoder& dec, PDSCH_Config_Prb_BundlingType_DynamicBundling& value)
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
        value.bundleSizeSet1 = (PDSCH_Config_Prb_BundlingType_DynamicBundling_BundleSizeSet1)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.bundleSizeSet2 = (PDSCH_Config_Prb_BundlingType_DynamicBundling_BundleSizeSet2)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_Config_Prb_BundlingType_DynamicBundling(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_Config_Prb_BundlingType_DynamicBundling(PDSCH_Config_Prb_BundlingType_DynamicBundling& value)
{
    if (value.has_bundleSizeSet1) {
    }
    if (value.has_bundleSizeSet2) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDSCH_Config_Prb_BundlingType：ASN.1 prb-BundlingType；源文件第 9420 行；CHOICE。
// Encode_PDSCH_Config_Prb_BundlingType 只读不分配；Decode_PDSCH_Config_Prb_BundlingType 可能 malloc（失败时内部已释放并清零）；Free_PDSCH_Config_Prb_BundlingType 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDSCH_Config_Prb_BundlingType(Encoder& enc, const PDSCH_Config_Prb_BundlingType& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case PDSCH_Config_Prb_BundlingType_Tag_staticBundling:
        Encode_PDSCH_Config_Prb_BundlingType_StaticBundling(enc, value.u.staticBundling);
        break;
    case PDSCH_Config_Prb_BundlingType_Tag_dynamicBundling:
        Encode_PDSCH_Config_Prb_BundlingType_DynamicBundling(enc, value.u.dynamicBundling);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_Config_Prb_BundlingType(Decoder& dec, PDSCH_Config_Prb_BundlingType& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (PDSCH_Config_Prb_BundlingType_Tag)root_index;
    switch (value.tag) {
    case PDSCH_Config_Prb_BundlingType_Tag_staticBundling: {
        if (Decode_PDSCH_Config_Prb_BundlingType_StaticBundling(dec, value.u.staticBundling) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PDSCH_Config_Prb_BundlingType_Tag_dynamicBundling: {
        if (Decode_PDSCH_Config_Prb_BundlingType_DynamicBundling(dec, value.u.dynamicBundling) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_Config_Prb_BundlingType(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_Config_Prb_BundlingType(PDSCH_Config_Prb_BundlingType& value)
{
    switch (value.tag) {
    case PDSCH_Config_Prb_BundlingType_Tag_staticBundling:
        Free_PDSCH_Config_Prb_BundlingType_StaticBundling(value.u.staticBundling);
        break;
    case PDSCH_Config_Prb_BundlingType_Tag_dynamicBundling:
        Free_PDSCH_Config_Prb_BundlingType_DynamicBundling(value.u.dynamicBundling);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ZP_CSI_RS_ResourceSet：ASN.1 ZP-CSI-RS-ResourceSet；源文件第 14100 行；SEQUENCE。
// Encode_ZP_CSI_RS_ResourceSet 只读不分配；Decode_ZP_CSI_RS_ResourceSet 可能 malloc（失败时内部已释放并清零）；Free_ZP_CSI_RS_ResourceSet 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ZP_CSI_RS_ResourceSet(Encoder& enc, const ZP_CSI_RS_ResourceSet& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.zp_CSI_RS_ResourceSetId), 0, 15);
enc.WriteConstrainedLength(value.zp_CSI_RS_ResourceIdList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.zp_CSI_RS_ResourceIdList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.zp_CSI_RS_ResourceIdList_items[i]), 0, 31);
}
    return enc.Error();
}

ErrorCode Decode_ZP_CSI_RS_ResourceSet(Decoder& dec, ZP_CSI_RS_ResourceSet& value)
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
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.zp_CSI_RS_ResourceSetId = (ZP_CSI_RS_ResourceSetId)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.zp_CSI_RS_ResourceIdList_count)) { goto fail; }
if (value.zp_CSI_RS_ResourceIdList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.zp_CSI_RS_ResourceIdList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.zp_CSI_RS_ResourceIdList_count > 0u) {
    value.zp_CSI_RS_ResourceIdList_items = (ZP_CSI_RS_ResourceId*)std::malloc((std::size_t)value.zp_CSI_RS_ResourceIdList_count * sizeof(ZP_CSI_RS_ResourceId));
    if (value.zp_CSI_RS_ResourceIdList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.zp_CSI_RS_ResourceIdList_items, 0, (std::size_t)value.zp_CSI_RS_ResourceIdList_count * sizeof(ZP_CSI_RS_ResourceId));
}
for (std::uint32_t i = 0; i < value.zp_CSI_RS_ResourceIdList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.zp_CSI_RS_ResourceIdList_items[i] = (ZP_CSI_RS_ResourceId)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_ZP_CSI_RS_ResourceSet(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ZP_CSI_RS_ResourceSet(ZP_CSI_RS_ResourceSet& value)
{
    if (value.zp_CSI_RS_ResourceIdList_items != nullptr) {
        for (std::uint32_t i = 0; i < value.zp_CSI_RS_ResourceIdList_count; ++i) {
        }
        std::free(value.zp_CSI_RS_ResourceIdList_items);
        value.zp_CSI_RS_ResourceIdList_items = nullptr;
    }
    value.zp_CSI_RS_ResourceIdList_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_ZP_CSI_RS_ResourceSet：ASN.1 SetupRelease<ZP-CSI-RS-ResourceSet>；源文件第 9441 行；CHOICE。
// Encode_SetupRelease_ZP_CSI_RS_ResourceSet 只读不分配；Decode_SetupRelease_ZP_CSI_RS_ResourceSet 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_ZP_CSI_RS_ResourceSet 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_ZP_CSI_RS_ResourceSet(Encoder& enc, const SetupRelease_ZP_CSI_RS_ResourceSet& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_ZP_CSI_RS_ResourceSet_Tag_release:
        (void)0;
        break;
    case SetupRelease_ZP_CSI_RS_ResourceSet_Tag_setup:
        Encode_ZP_CSI_RS_ResourceSet(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_ZP_CSI_RS_ResourceSet(Decoder& dec, SetupRelease_ZP_CSI_RS_ResourceSet& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_ZP_CSI_RS_ResourceSet_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_ZP_CSI_RS_ResourceSet_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_ZP_CSI_RS_ResourceSet_Tag_setup: {
        if (Decode_ZP_CSI_RS_ResourceSet(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_ZP_CSI_RS_ResourceSet(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_ZP_CSI_RS_ResourceSet(SetupRelease_ZP_CSI_RS_ResourceSet& value)
{
    switch (value.tag) {
    case SetupRelease_ZP_CSI_RS_ResourceSet_Tag_release:
        break;
    case SetupRelease_ZP_CSI_RS_ResourceSet_Tag_setup:
        Free_ZP_CSI_RS_ResourceSet(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDSCH_Config：ASN.1 PDSCH-Config；源文件第 9400 行；SEQUENCE。
// Encode_PDSCH_Config 只读不分配；Decode_PDSCH_Config 可能 malloc（失败时内部已释放并清零）；Free_PDSCH_Config 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDSCH_Config(Encoder& enc, const PDSCH_Config& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4 || value.has_extGroup5;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_dataScramblingIdentityPDSCH);
    enc.WriteBit(value.has_dmrs_DownlinkForPDSCH_MappingTypeA);
    enc.WriteBit(value.has_dmrs_DownlinkForPDSCH_MappingTypeB);
    enc.WriteBit(value.has_tci_StatesToAddModList);
    enc.WriteBit(value.has_tci_StatesToReleaseList);
    enc.WriteBit(value.has_vrb_ToPRB_Interleaver);
    enc.WriteBit(value.has_pdsch_TimeDomainAllocationList);
    enc.WriteBit(value.has_pdsch_AggregationFactor);
    enc.WriteBit(value.has_rateMatchPatternToAddModList);
    enc.WriteBit(value.has_rateMatchPatternToReleaseList);
    enc.WriteBit(value.has_rateMatchPatternGroup1);
    enc.WriteBit(value.has_rateMatchPatternGroup2);
    enc.WriteBit(value.has_mcs_Table);
    enc.WriteBit(value.has_maxNrofCodeWordsScheduledByDCI);
    enc.WriteBit(value.has_zp_CSI_RS_ResourceToAddModList);
    enc.WriteBit(value.has_zp_CSI_RS_ResourceToReleaseList);
    enc.WriteBit(value.has_aperiodic_ZP_CSI_RS_ResourceSetsToAddModList);
    enc.WriteBit(value.has_aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList);
    enc.WriteBit(value.has_sp_ZP_CSI_RS_ResourceSetsToAddModList);
    enc.WriteBit(value.has_sp_ZP_CSI_RS_ResourceSetsToReleaseList);
    enc.WriteBit(value.has_p_ZP_CSI_RS_ResourceSet);
    if (value.has_dataScramblingIdentityPDSCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dataScramblingIdentityPDSCH), 0, 1023);
    }
    if (value.has_dmrs_DownlinkForPDSCH_MappingTypeA) {
        Encode_SetupRelease_DMRS_DownlinkConfig(enc, value.dmrs_DownlinkForPDSCH_MappingTypeA);
    }
    if (value.has_dmrs_DownlinkForPDSCH_MappingTypeB) {
        Encode_SetupRelease_DMRS_DownlinkConfig(enc, value.dmrs_DownlinkForPDSCH_MappingTypeB);
    }
    if (value.has_tci_StatesToAddModList) {
enc.WriteConstrainedLength(value.tci_StatesToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.tci_StatesToAddModList_count; ++i) {
    Encode_TCI_State(enc, value.tci_StatesToAddModList_items[i]);
}
    }
    if (value.has_tci_StatesToReleaseList) {
enc.WriteConstrainedLength(value.tci_StatesToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.tci_StatesToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.tci_StatesToReleaseList_items[i]), 0, 127);
}
    }
    if (value.has_vrb_ToPRB_Interleaver) {
        enc.WriteConstrainedInteger((std::int64_t)(value.vrb_ToPRB_Interleaver), 0, 1);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.resourceAllocation), 0, 2);
    if (value.has_pdsch_TimeDomainAllocationList) {
        Encode_SetupRelease_PDSCH_TimeDomainResourceAllocationList(enc, value.pdsch_TimeDomainAllocationList);
    }
    if (value.has_pdsch_AggregationFactor) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_AggregationFactor), 0, 2);
    }
    if (value.has_rateMatchPatternToAddModList) {
enc.WriteConstrainedLength(value.rateMatchPatternToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.rateMatchPatternToAddModList_count; ++i) {
    Encode_RateMatchPattern(enc, value.rateMatchPatternToAddModList_items[i]);
}
    }
    if (value.has_rateMatchPatternToReleaseList) {
enc.WriteConstrainedLength(value.rateMatchPatternToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.rateMatchPatternToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.rateMatchPatternToReleaseList_items[i]), 0, 3);
}
    }
    if (value.has_rateMatchPatternGroup1) {
        Encode_RateMatchPatternGroup(enc, value.rateMatchPatternGroup1);
    }
    if (value.has_rateMatchPatternGroup2) {
        Encode_RateMatchPatternGroup(enc, value.rateMatchPatternGroup2);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.rbg_Size), 0, 1);
    if (value.has_mcs_Table) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mcs_Table), 0, 1);
    }
    if (value.has_maxNrofCodeWordsScheduledByDCI) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNrofCodeWordsScheduledByDCI), 0, 1);
    }
    Encode_PDSCH_Config_Prb_BundlingType(enc, value.prb_BundlingType);
    if (value.has_zp_CSI_RS_ResourceToAddModList) {
enc.WriteConstrainedLength(value.zp_CSI_RS_ResourceToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.zp_CSI_RS_ResourceToAddModList_count; ++i) {
    Encode_ZP_CSI_RS_Resource(enc, value.zp_CSI_RS_ResourceToAddModList_items[i]);
}
    }
    if (value.has_zp_CSI_RS_ResourceToReleaseList) {
enc.WriteConstrainedLength(value.zp_CSI_RS_ResourceToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.zp_CSI_RS_ResourceToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.zp_CSI_RS_ResourceToReleaseList_items[i]), 0, 31);
}
    }
    if (value.has_aperiodic_ZP_CSI_RS_ResourceSetsToAddModList) {
enc.WriteConstrainedLength(value.aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_count; ++i) {
    Encode_ZP_CSI_RS_ResourceSet(enc, value.aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_items[i]);
}
    }
    if (value.has_aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList) {
enc.WriteConstrainedLength(value.aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_items[i]), 0, 15);
}
    }
    if (value.has_sp_ZP_CSI_RS_ResourceSetsToAddModList) {
enc.WriteConstrainedLength(value.sp_ZP_CSI_RS_ResourceSetsToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sp_ZP_CSI_RS_ResourceSetsToAddModList_count; ++i) {
    Encode_ZP_CSI_RS_ResourceSet(enc, value.sp_ZP_CSI_RS_ResourceSetsToAddModList_items[i]);
}
    }
    if (value.has_sp_ZP_CSI_RS_ResourceSetsToReleaseList) {
enc.WriteConstrainedLength(value.sp_ZP_CSI_RS_ResourceSetsToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sp_ZP_CSI_RS_ResourceSetsToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sp_ZP_CSI_RS_ResourceSetsToReleaseList_items[i]), 0, 15);
}
    }
    if (value.has_p_ZP_CSI_RS_ResourceSet) {
        Encode_SetupRelease_ZP_CSI_RS_ResourceSet(enc, value.p_ZP_CSI_RS_ResourceSet);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(5u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        enc.WriteBit(value.has_extGroup4);
        enc.WriteBit(value.has_extGroup5);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_PDSCH_Config_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_PDSCH_Config_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_PDSCH_Config_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_PDSCH_Config_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup5) {
    Encoder sub;
    Encode_PDSCH_Config_ExtGroup5(sub, value.extGroup5);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_Config(Decoder& dec, PDSCH_Config& value)
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
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.dataScramblingIdentityPDSCH = (int64_t)tmp_value;
    }
    if (present_1) {
        if (Decode_SetupRelease_DMRS_DownlinkConfig(dec, value.dmrs_DownlinkForPDSCH_MappingTypeA) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SetupRelease_DMRS_DownlinkConfig(dec, value.dmrs_DownlinkForPDSCH_MappingTypeB) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.tci_StatesToAddModList_count)) { goto fail; }
if (value.tci_StatesToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.tci_StatesToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.tci_StatesToAddModList_count > 0u) {
    value.tci_StatesToAddModList_items = (TCI_State*)std::malloc((std::size_t)value.tci_StatesToAddModList_count * sizeof(TCI_State));
    if (value.tci_StatesToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.tci_StatesToAddModList_items, 0, (std::size_t)value.tci_StatesToAddModList_count * sizeof(TCI_State));
}
for (std::uint32_t i = 0; i < value.tci_StatesToAddModList_count; ++i) {
    if (Decode_TCI_State(dec, value.tci_StatesToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.tci_StatesToReleaseList_count)) { goto fail; }
if (value.tci_StatesToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.tci_StatesToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.tci_StatesToReleaseList_count > 0u) {
    value.tci_StatesToReleaseList_items = (TCI_StateId*)std::malloc((std::size_t)value.tci_StatesToReleaseList_count * sizeof(TCI_StateId));
    if (value.tci_StatesToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.tci_StatesToReleaseList_items, 0, (std::size_t)value.tci_StatesToReleaseList_count * sizeof(TCI_StateId));
}
for (std::uint32_t i = 0; i < value.tci_StatesToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
    value.tci_StatesToReleaseList_items[i] = (TCI_StateId)tmp_value;
}
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.vrb_ToPRB_Interleaver = (PDSCH_Config_Vrb_ToPRB_Interleaver)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.resourceAllocation = (PDSCH_Config_ResourceAllocation)tmp_value;
    }
    if (present_6) {
        if (Decode_SetupRelease_PDSCH_TimeDomainResourceAllocationList(dec, value.pdsch_TimeDomainAllocationList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.pdsch_AggregationFactor = (PDSCH_Config_Pdsch_AggregationFactor)tmp_value;
    }
    if (present_8) {
if (!dec.ReadConstrainedLength(0u, 0u, value.rateMatchPatternToAddModList_count)) { goto fail; }
if (value.rateMatchPatternToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.rateMatchPatternToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.rateMatchPatternToAddModList_count > 0u) {
    value.rateMatchPatternToAddModList_items = (RateMatchPattern*)std::malloc((std::size_t)value.rateMatchPatternToAddModList_count * sizeof(RateMatchPattern));
    if (value.rateMatchPatternToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.rateMatchPatternToAddModList_items, 0, (std::size_t)value.rateMatchPatternToAddModList_count * sizeof(RateMatchPattern));
}
for (std::uint32_t i = 0; i < value.rateMatchPatternToAddModList_count; ++i) {
    if (Decode_RateMatchPattern(dec, value.rateMatchPatternToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_9) {
if (!dec.ReadConstrainedLength(0u, 0u, value.rateMatchPatternToReleaseList_count)) { goto fail; }
if (value.rateMatchPatternToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.rateMatchPatternToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.rateMatchPatternToReleaseList_count > 0u) {
    value.rateMatchPatternToReleaseList_items = (RateMatchPatternId*)std::malloc((std::size_t)value.rateMatchPatternToReleaseList_count * sizeof(RateMatchPatternId));
    if (value.rateMatchPatternToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.rateMatchPatternToReleaseList_items, 0, (std::size_t)value.rateMatchPatternToReleaseList_count * sizeof(RateMatchPatternId));
}
for (std::uint32_t i = 0; i < value.rateMatchPatternToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
    value.rateMatchPatternToReleaseList_items[i] = (RateMatchPatternId)tmp_value;
}
    }
    if (present_10) {
        if (Decode_RateMatchPatternGroup(dec, value.rateMatchPatternGroup1) != ErrorCode_Ok) { goto fail; }
    }
    if (present_11) {
        if (Decode_RateMatchPatternGroup(dec, value.rateMatchPatternGroup2) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.rbg_Size = (PDSCH_Config_Rbg_Size)tmp_value;
    }
    if (present_12) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.mcs_Table = (PDSCH_Config_Mcs_Table)tmp_value;
    }
    if (present_13) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.maxNrofCodeWordsScheduledByDCI = (PDSCH_Config_MaxNrofCodeWordsScheduledByDCI)tmp_value;
    }
    {
        if (Decode_PDSCH_Config_Prb_BundlingType(dec, value.prb_BundlingType) != ErrorCode_Ok) { goto fail; }
    }
    if (present_14) {
if (!dec.ReadConstrainedLength(0u, 0u, value.zp_CSI_RS_ResourceToAddModList_count)) { goto fail; }
if (value.zp_CSI_RS_ResourceToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.zp_CSI_RS_ResourceToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.zp_CSI_RS_ResourceToAddModList_count > 0u) {
    value.zp_CSI_RS_ResourceToAddModList_items = (ZP_CSI_RS_Resource*)std::malloc((std::size_t)value.zp_CSI_RS_ResourceToAddModList_count * sizeof(ZP_CSI_RS_Resource));
    if (value.zp_CSI_RS_ResourceToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.zp_CSI_RS_ResourceToAddModList_items, 0, (std::size_t)value.zp_CSI_RS_ResourceToAddModList_count * sizeof(ZP_CSI_RS_Resource));
}
for (std::uint32_t i = 0; i < value.zp_CSI_RS_ResourceToAddModList_count; ++i) {
    if (Decode_ZP_CSI_RS_Resource(dec, value.zp_CSI_RS_ResourceToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_15) {
if (!dec.ReadConstrainedLength(0u, 0u, value.zp_CSI_RS_ResourceToReleaseList_count)) { goto fail; }
if (value.zp_CSI_RS_ResourceToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.zp_CSI_RS_ResourceToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.zp_CSI_RS_ResourceToReleaseList_count > 0u) {
    value.zp_CSI_RS_ResourceToReleaseList_items = (ZP_CSI_RS_ResourceId*)std::malloc((std::size_t)value.zp_CSI_RS_ResourceToReleaseList_count * sizeof(ZP_CSI_RS_ResourceId));
    if (value.zp_CSI_RS_ResourceToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.zp_CSI_RS_ResourceToReleaseList_items, 0, (std::size_t)value.zp_CSI_RS_ResourceToReleaseList_count * sizeof(ZP_CSI_RS_ResourceId));
}
for (std::uint32_t i = 0; i < value.zp_CSI_RS_ResourceToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.zp_CSI_RS_ResourceToReleaseList_items[i] = (ZP_CSI_RS_ResourceId)tmp_value;
}
    }
    if (present_16) {
if (!dec.ReadConstrainedLength(0u, 0u, value.aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_count)) { goto fail; }
if (value.aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_count > 0u) {
    value.aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_items = (ZP_CSI_RS_ResourceSet*)std::malloc((std::size_t)value.aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_count * sizeof(ZP_CSI_RS_ResourceSet));
    if (value.aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_items, 0, (std::size_t)value.aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_count * sizeof(ZP_CSI_RS_ResourceSet));
}
for (std::uint32_t i = 0; i < value.aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_count; ++i) {
    if (Decode_ZP_CSI_RS_ResourceSet(dec, value.aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_17) {
if (!dec.ReadConstrainedLength(0u, 0u, value.aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_count)) { goto fail; }
if (value.aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_count > 0u) {
    value.aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_items = (ZP_CSI_RS_ResourceSetId*)std::malloc((std::size_t)value.aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_count * sizeof(ZP_CSI_RS_ResourceSetId));
    if (value.aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_items, 0, (std::size_t)value.aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_count * sizeof(ZP_CSI_RS_ResourceSetId));
}
for (std::uint32_t i = 0; i < value.aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
    value.aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_items[i] = (ZP_CSI_RS_ResourceSetId)tmp_value;
}
    }
    if (present_18) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sp_ZP_CSI_RS_ResourceSetsToAddModList_count)) { goto fail; }
if (value.sp_ZP_CSI_RS_ResourceSetsToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sp_ZP_CSI_RS_ResourceSetsToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sp_ZP_CSI_RS_ResourceSetsToAddModList_count > 0u) {
    value.sp_ZP_CSI_RS_ResourceSetsToAddModList_items = (ZP_CSI_RS_ResourceSet*)std::malloc((std::size_t)value.sp_ZP_CSI_RS_ResourceSetsToAddModList_count * sizeof(ZP_CSI_RS_ResourceSet));
    if (value.sp_ZP_CSI_RS_ResourceSetsToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sp_ZP_CSI_RS_ResourceSetsToAddModList_items, 0, (std::size_t)value.sp_ZP_CSI_RS_ResourceSetsToAddModList_count * sizeof(ZP_CSI_RS_ResourceSet));
}
for (std::uint32_t i = 0; i < value.sp_ZP_CSI_RS_ResourceSetsToAddModList_count; ++i) {
    if (Decode_ZP_CSI_RS_ResourceSet(dec, value.sp_ZP_CSI_RS_ResourceSetsToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_19) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sp_ZP_CSI_RS_ResourceSetsToReleaseList_count)) { goto fail; }
if (value.sp_ZP_CSI_RS_ResourceSetsToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sp_ZP_CSI_RS_ResourceSetsToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sp_ZP_CSI_RS_ResourceSetsToReleaseList_count > 0u) {
    value.sp_ZP_CSI_RS_ResourceSetsToReleaseList_items = (ZP_CSI_RS_ResourceSetId*)std::malloc((std::size_t)value.sp_ZP_CSI_RS_ResourceSetsToReleaseList_count * sizeof(ZP_CSI_RS_ResourceSetId));
    if (value.sp_ZP_CSI_RS_ResourceSetsToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sp_ZP_CSI_RS_ResourceSetsToReleaseList_items, 0, (std::size_t)value.sp_ZP_CSI_RS_ResourceSetsToReleaseList_count * sizeof(ZP_CSI_RS_ResourceSetId));
}
for (std::uint32_t i = 0; i < value.sp_ZP_CSI_RS_ResourceSetsToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
    value.sp_ZP_CSI_RS_ResourceSetsToReleaseList_items[i] = (ZP_CSI_RS_ResourceSetId)tmp_value;
}
    }
    if (present_20) {
        if (Decode_SetupRelease_ZP_CSI_RS_ResourceSet(dec, value.p_ZP_CSI_RS_ResourceSet) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_PDSCH_Config_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_PDSCH_Config_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_PDSCH_Config_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_PDSCH_Config_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    if (Decode_PDSCH_Config_ExtGroup5(sub, value.extGroup5) != ErrorCode_Ok) {
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
    Free_PDSCH_Config(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_Config(PDSCH_Config& value)
{
    if (value.has_dataScramblingIdentityPDSCH) {
    }
    if (value.has_dmrs_DownlinkForPDSCH_MappingTypeA) {
        Free_SetupRelease_DMRS_DownlinkConfig(value.dmrs_DownlinkForPDSCH_MappingTypeA);
    }
    if (value.has_dmrs_DownlinkForPDSCH_MappingTypeB) {
        Free_SetupRelease_DMRS_DownlinkConfig(value.dmrs_DownlinkForPDSCH_MappingTypeB);
    }
    if (value.has_tci_StatesToAddModList) {
        if (value.tci_StatesToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.tci_StatesToAddModList_count; ++i) {
                Free_TCI_State(value.tci_StatesToAddModList_items[i]);
            }
            std::free(value.tci_StatesToAddModList_items);
            value.tci_StatesToAddModList_items = nullptr;
        }
        value.tci_StatesToAddModList_count = 0;
    }
    if (value.has_tci_StatesToReleaseList) {
        if (value.tci_StatesToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.tci_StatesToReleaseList_count; ++i) {
            }
            std::free(value.tci_StatesToReleaseList_items);
            value.tci_StatesToReleaseList_items = nullptr;
        }
        value.tci_StatesToReleaseList_count = 0;
    }
    if (value.has_vrb_ToPRB_Interleaver) {
    }
    if (value.has_pdsch_TimeDomainAllocationList) {
        Free_SetupRelease_PDSCH_TimeDomainResourceAllocationList(value.pdsch_TimeDomainAllocationList);
    }
    if (value.has_pdsch_AggregationFactor) {
    }
    if (value.has_rateMatchPatternToAddModList) {
        if (value.rateMatchPatternToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.rateMatchPatternToAddModList_count; ++i) {
                Free_RateMatchPattern(value.rateMatchPatternToAddModList_items[i]);
            }
            std::free(value.rateMatchPatternToAddModList_items);
            value.rateMatchPatternToAddModList_items = nullptr;
        }
        value.rateMatchPatternToAddModList_count = 0;
    }
    if (value.has_rateMatchPatternToReleaseList) {
        if (value.rateMatchPatternToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.rateMatchPatternToReleaseList_count; ++i) {
            }
            std::free(value.rateMatchPatternToReleaseList_items);
            value.rateMatchPatternToReleaseList_items = nullptr;
        }
        value.rateMatchPatternToReleaseList_count = 0;
    }
    if (value.has_rateMatchPatternGroup1) {
        Free_RateMatchPatternGroup(value.rateMatchPatternGroup1);
    }
    if (value.has_rateMatchPatternGroup2) {
        Free_RateMatchPatternGroup(value.rateMatchPatternGroup2);
    }
    if (value.has_mcs_Table) {
    }
    if (value.has_maxNrofCodeWordsScheduledByDCI) {
    }
    Free_PDSCH_Config_Prb_BundlingType(value.prb_BundlingType);
    if (value.has_zp_CSI_RS_ResourceToAddModList) {
        if (value.zp_CSI_RS_ResourceToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.zp_CSI_RS_ResourceToAddModList_count; ++i) {
                Free_ZP_CSI_RS_Resource(value.zp_CSI_RS_ResourceToAddModList_items[i]);
            }
            std::free(value.zp_CSI_RS_ResourceToAddModList_items);
            value.zp_CSI_RS_ResourceToAddModList_items = nullptr;
        }
        value.zp_CSI_RS_ResourceToAddModList_count = 0;
    }
    if (value.has_zp_CSI_RS_ResourceToReleaseList) {
        if (value.zp_CSI_RS_ResourceToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.zp_CSI_RS_ResourceToReleaseList_count; ++i) {
            }
            std::free(value.zp_CSI_RS_ResourceToReleaseList_items);
            value.zp_CSI_RS_ResourceToReleaseList_items = nullptr;
        }
        value.zp_CSI_RS_ResourceToReleaseList_count = 0;
    }
    if (value.has_aperiodic_ZP_CSI_RS_ResourceSetsToAddModList) {
        if (value.aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_count; ++i) {
                Free_ZP_CSI_RS_ResourceSet(value.aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_items[i]);
            }
            std::free(value.aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_items);
            value.aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_items = nullptr;
        }
        value.aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_count = 0;
    }
    if (value.has_aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList) {
        if (value.aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_count; ++i) {
            }
            std::free(value.aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_items);
            value.aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_items = nullptr;
        }
        value.aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_count = 0;
    }
    if (value.has_sp_ZP_CSI_RS_ResourceSetsToAddModList) {
        if (value.sp_ZP_CSI_RS_ResourceSetsToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sp_ZP_CSI_RS_ResourceSetsToAddModList_count; ++i) {
                Free_ZP_CSI_RS_ResourceSet(value.sp_ZP_CSI_RS_ResourceSetsToAddModList_items[i]);
            }
            std::free(value.sp_ZP_CSI_RS_ResourceSetsToAddModList_items);
            value.sp_ZP_CSI_RS_ResourceSetsToAddModList_items = nullptr;
        }
        value.sp_ZP_CSI_RS_ResourceSetsToAddModList_count = 0;
    }
    if (value.has_sp_ZP_CSI_RS_ResourceSetsToReleaseList) {
        if (value.sp_ZP_CSI_RS_ResourceSetsToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sp_ZP_CSI_RS_ResourceSetsToReleaseList_count; ++i) {
            }
            std::free(value.sp_ZP_CSI_RS_ResourceSetsToReleaseList_items);
            value.sp_ZP_CSI_RS_ResourceSetsToReleaseList_items = nullptr;
        }
        value.sp_ZP_CSI_RS_ResourceSetsToReleaseList_count = 0;
    }
    if (value.has_p_ZP_CSI_RS_ResourceSet) {
        Free_SetupRelease_ZP_CSI_RS_ResourceSet(value.p_ZP_CSI_RS_ResourceSet);
    }
    if (value.has_extGroup1) {
        Free_PDSCH_Config_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_PDSCH_Config_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_PDSCH_Config_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_PDSCH_Config_ExtGroup4(value.extGroup4);
    }
    if (value.has_extGroup5) {
        Free_PDSCH_Config_ExtGroup5(value.extGroup5);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PDSCH_Config：ASN.1 SetupRelease<PDSCH-Config>；源文件第 1328 行；CHOICE。
// Encode_SetupRelease_PDSCH_Config 只读不分配；Decode_SetupRelease_PDSCH_Config 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PDSCH_Config 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PDSCH_Config(Encoder& enc, const SetupRelease_PDSCH_Config& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PDSCH_Config_Tag_release:
        (void)0;
        break;
    case SetupRelease_PDSCH_Config_Tag_setup:
        Encode_PDSCH_Config(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PDSCH_Config(Decoder& dec, SetupRelease_PDSCH_Config& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PDSCH_Config_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PDSCH_Config_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PDSCH_Config_Tag_setup: {
        if (Decode_PDSCH_Config(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PDSCH_Config(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PDSCH_Config(SetupRelease_PDSCH_Config& value)
{
    switch (value.tag) {
    case SetupRelease_PDSCH_Config_Tag_release:
        break;
    case SetupRelease_PDSCH_Config_Tag_setup:
        Free_PDSCH_Config(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BWP_DownlinkDedicatedSDT_r17：ASN.1 BWP-DownlinkDedicatedSDT-r17；源文件第 1326 行；SEQUENCE。
// Encode_BWP_DownlinkDedicatedSDT_r17 只读不分配；Decode_BWP_DownlinkDedicatedSDT_r17 可能 malloc（失败时内部已释放并清零）；Free_BWP_DownlinkDedicatedSDT_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BWP_DownlinkDedicatedSDT_r17(Encoder& enc, const BWP_DownlinkDedicatedSDT_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_pdcch_Config_r17);
    enc.WriteBit(value.has_pdsch_Config_r17);
    if (value.has_pdcch_Config_r17) {
        Encode_SetupRelease_PDCCH_Config(enc, value.pdcch_Config_r17);
    }
    if (value.has_pdsch_Config_r17) {
        Encode_SetupRelease_PDSCH_Config(enc, value.pdsch_Config_r17);
    }
    return enc.Error();
}

ErrorCode Decode_BWP_DownlinkDedicatedSDT_r17(Decoder& dec, BWP_DownlinkDedicatedSDT_r17& value)
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
        if (Decode_SetupRelease_PDCCH_Config(dec, value.pdcch_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_PDSCH_Config(dec, value.pdsch_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BWP_DownlinkDedicatedSDT_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BWP_DownlinkDedicatedSDT_r17(BWP_DownlinkDedicatedSDT_r17& value)
{
    if (value.has_pdcch_Config_r17) {
        Free_SetupRelease_PDCCH_Config(value.pdcch_Config_r17);
    }
    if (value.has_pdsch_Config_r17) {
        Free_SetupRelease_PDSCH_Config(value.pdsch_Config_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ConfiguredGrantConfigToAddModList_r16：ASN.1 ConfiguredGrantConfigToAddModList-r16；源文件第 4685 行；SEQUENCE OF。
// Encode_ConfiguredGrantConfigToAddModList_r16 只读不分配；Decode_ConfiguredGrantConfigToAddModList_r16 可能 malloc（失败时内部已释放并清零）；Free_ConfiguredGrantConfigToAddModList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ConfiguredGrantConfigToAddModList_r16(Encoder& enc, const ConfiguredGrantConfigToAddModList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 12u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_ConfiguredGrantConfig(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_ConfiguredGrantConfigToAddModList_r16(Decoder& dec, ConfiguredGrantConfigToAddModList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 12u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 12u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (ConfiguredGrantConfig*)std::malloc((std::size_t)value.count * sizeof(ConfiguredGrantConfig));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(ConfiguredGrantConfig));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_ConfiguredGrantConfig(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_ConfiguredGrantConfigToAddModList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ConfiguredGrantConfigToAddModList_r16(ConfiguredGrantConfigToAddModList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_ConfiguredGrantConfig(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ConfiguredGrantConfigToReleaseList_r16：ASN.1 ConfiguredGrantConfigToReleaseList-r16；源文件第 4687 行；SEQUENCE OF。
// Encode_ConfiguredGrantConfigToReleaseList_r16 只读不分配；Decode_ConfiguredGrantConfigToReleaseList_r16 可能 malloc（失败时内部已释放并清零）；Free_ConfiguredGrantConfigToReleaseList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ConfiguredGrantConfigToReleaseList_r16(Encoder& enc, const ConfiguredGrantConfigToReleaseList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 12u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 11);
    }
    return enc.Error();
}

ErrorCode Decode_ConfiguredGrantConfigToReleaseList_r16(Decoder& dec, ConfiguredGrantConfigToReleaseList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 12u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 12u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (ConfiguredGrantConfigIndex_r16*)std::malloc((std::size_t)value.count * sizeof(ConfiguredGrantConfigIndex_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(ConfiguredGrantConfigIndex_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 11, tmp_value)) { goto fail; }
    value.items[i] = (ConfiguredGrantConfigIndex_r16)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_ConfiguredGrantConfigToReleaseList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ConfiguredGrantConfigToReleaseList_r16(ConfiguredGrantConfigToReleaseList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SDM_Scheme_r18：ASN.1 SDM-Scheme-r18；源文件第 10430 行；SEQUENCE。
// Encode_SDM_Scheme_r18 只读不分配；Decode_SDM_Scheme_r18 可能 malloc（失败时内部已释放并清零）；Free_SDM_Scheme_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SDM_Scheme_r18(Encoder& enc, const SDM_Scheme_r18& value)
{
    enc.WriteBit(value.has_maxRankSDM_r18);
    enc.WriteBit(value.has_maxRankSDM_DCI_0_2_r18);
    if (value.has_maxRankSDM_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxRankSDM_r18), 1, 2);
    }
    if (value.has_maxRankSDM_DCI_0_2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxRankSDM_DCI_0_2_r18), 1, 2);
    }
    return enc.Error();
}

ErrorCode Decode_SDM_Scheme_r18(Decoder& dec, SDM_Scheme_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.maxRankSDM_r18 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.maxRankSDM_DCI_0_2_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SDM_Scheme_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SDM_Scheme_r18(SDM_Scheme_r18& value)
{
    if (value.has_maxRankSDM_r18) {
    }
    if (value.has_maxRankSDM_DCI_0_2_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SFN_Scheme_r18：ASN.1 SFN-Scheme-r18；源文件第 10436 行；SEQUENCE。
// Encode_SFN_Scheme_r18 只读不分配；Decode_SFN_Scheme_r18 可能 malloc（失败时内部已释放并清零）；Free_SFN_Scheme_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SFN_Scheme_r18(Encoder& enc, const SFN_Scheme_r18& value)
{
    enc.WriteBit(value.has_maxRankSFN_r18);
    enc.WriteBit(value.has_maxRankSFN_DCI_0_2_r18);
    if (value.has_maxRankSFN_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxRankSFN_r18), 1, 2);
    }
    if (value.has_maxRankSFN_DCI_0_2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxRankSFN_DCI_0_2_r18), 1, 2);
    }
    return enc.Error();
}

ErrorCode Decode_SFN_Scheme_r18(Decoder& dec, SFN_Scheme_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.maxRankSFN_r18 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.maxRankSFN_DCI_0_2_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SFN_Scheme_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SFN_Scheme_r18(SFN_Scheme_r18& value)
{
    if (value.has_maxRankSFN_r18) {
    }
    if (value.has_maxRankSFN_DCI_0_2_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookTypeUL_r18：ASN.1 CodebookTypeUL-r18；源文件第 10442 行；CHOICE。
// Encode_CodebookTypeUL_r18 只读不分配；Decode_CodebookTypeUL_r18 可能 malloc（失败时内部已释放并清零）；Free_CodebookTypeUL_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookTypeUL_r18(Encoder& enc, const CodebookTypeUL_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 3);
    switch (value.tag) {
    case CodebookTypeUL_r18_Tag_codebook1_r18:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.codebook1_r18), 0, 1);
        break;
    case CodebookTypeUL_r18_Tag_codebook2_r18:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.codebook2_r18), 0, 0);
        break;
    case CodebookTypeUL_r18_Tag_codebook3_r18:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.codebook3_r18), 0, 0);
        break;
    case CodebookTypeUL_r18_Tag_codebook4_r18:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.codebook4_r18), 0, 0);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookTypeUL_r18(Decoder& dec, CodebookTypeUL_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 3, root_index)) {
        goto fail;
    }
    value.tag = (CodebookTypeUL_r18_Tag)root_index;
    switch (value.tag) {
    case CodebookTypeUL_r18_Tag_codebook1_r18: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.u.codebook1_r18 = (CodebookTypeUL_r18_Codebook1_r18)tmp_value;
        break;
    }
    case CodebookTypeUL_r18_Tag_codebook2_r18: {
        value.u.codebook2_r18 = (CodebookTypeUL_r18_Codebook2_r18)0;
        break;
    }
    case CodebookTypeUL_r18_Tag_codebook3_r18: {
        value.u.codebook3_r18 = (CodebookTypeUL_r18_Codebook3_r18)0;
        break;
    }
    case CodebookTypeUL_r18_Tag_codebook4_r18: {
        value.u.codebook4_r18 = (CodebookTypeUL_r18_Codebook4_r18)0;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookTypeUL_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookTypeUL_r18(CodebookTypeUL_r18& value)
{
    switch (value.tag) {
    case CodebookTypeUL_r18_Tag_codebook1_r18:
        break;
    case CodebookTypeUL_r18_Tag_codebook2_r18:
        break;
    case CodebookTypeUL_r18_Tag_codebook3_r18:
        break;
    case CodebookTypeUL_r18_Tag_codebook4_r18:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_CodebookTypeUL_r18：ASN.1 SetupRelease<CodebookTypeUL-r18>；源文件第 10362 行；CHOICE。
// Encode_SetupRelease_CodebookTypeUL_r18 只读不分配；Decode_SetupRelease_CodebookTypeUL_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_CodebookTypeUL_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_CodebookTypeUL_r18(Encoder& enc, const SetupRelease_CodebookTypeUL_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_CodebookTypeUL_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_CodebookTypeUL_r18_Tag_setup:
        Encode_CodebookTypeUL_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_CodebookTypeUL_r18(Decoder& dec, SetupRelease_CodebookTypeUL_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_CodebookTypeUL_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_CodebookTypeUL_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_CodebookTypeUL_r18_Tag_setup: {
        if (Decode_CodebookTypeUL_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_CodebookTypeUL_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_CodebookTypeUL_r18(SetupRelease_CodebookTypeUL_r18& value)
{
    switch (value.tag) {
    case SetupRelease_CodebookTypeUL_r18_Tag_release:
        break;
    case SetupRelease_CodebookTypeUL_r18_Tag_setup:
        Free_CodebookTypeUL_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UCI_OnPUSCH_ListDCI_0_1_r16：ASN.1 UCI-OnPUSCH-ListDCI-0-1-r16；源文件第 10397 行；SEQUENCE OF。
// Encode_UCI_OnPUSCH_ListDCI_0_1_r16 只读不分配；Decode_UCI_OnPUSCH_ListDCI_0_1_r16 可能 malloc（失败时内部已释放并清零）；Free_UCI_OnPUSCH_ListDCI_0_1_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UCI_OnPUSCH_ListDCI_0_1_r16(Encoder& enc, const UCI_OnPUSCH_ListDCI_0_1_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 2u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_UCI_OnPUSCH(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_UCI_OnPUSCH_ListDCI_0_1_r16(Decoder& dec, UCI_OnPUSCH_ListDCI_0_1_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 2u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 2u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (UCI_OnPUSCH*)std::malloc((std::size_t)value.count * sizeof(UCI_OnPUSCH));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(UCI_OnPUSCH));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_UCI_OnPUSCH(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_UCI_OnPUSCH_ListDCI_0_1_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UCI_OnPUSCH_ListDCI_0_1_r16(UCI_OnPUSCH_ListDCI_0_1_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_UCI_OnPUSCH(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16：ASN.1 SetupRelease<UCI-OnPUSCH-ListDCI-0-1-r16>；源文件第 10329 行；CHOICE。
// Encode_SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16 只读不分配；Decode_SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16(Encoder& enc, const SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16_Tag_setup:
        Encode_UCI_OnPUSCH_ListDCI_0_1_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16(Decoder& dec, SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16_Tag_setup: {
        if (Decode_UCI_OnPUSCH_ListDCI_0_1_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16(SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16& value)
{
    switch (value.tag) {
    case SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16_Tag_release:
        break;
    case SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16_Tag_setup:
        Free_UCI_OnPUSCH_ListDCI_0_1_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PUSCH_ConfigDCI_0_3_r18：ASN.1 PUSCH-ConfigDCI-0-3-r18；源文件第 10449 行；SEQUENCE。
// Encode_PUSCH_ConfigDCI_0_3_r18 只读不分配；Decode_PUSCH_ConfigDCI_0_3_r18 可能 malloc（失败时内部已释放并清零）；Free_PUSCH_ConfigDCI_0_3_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PUSCH_ConfigDCI_0_3_r18(Encoder& enc, const PUSCH_ConfigDCI_0_3_r18& value)
{
    enc.WriteBit(value.has_resourceAllocationDCI_0_3_r18);
    enc.WriteBit(value.has_rbg_SizeDCI_0_3_r18);
    enc.WriteBit(value.has_resourceAllocationType1GranularityDCI_0_3_r18);
    enc.WriteBit(value.has_numberOfBitsForRV_DCI_0_3_r18);
    enc.WriteBit(value.has_harq_ProcessNumberSizeDCI_0_3_r18);
    enc.WriteBit(value.has_uci_OnPUSCH_ListDCI_0_3_r18);
    if (value.has_resourceAllocationDCI_0_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.resourceAllocationDCI_0_3_r18), 0, 2);
    }
    if (value.has_rbg_SizeDCI_0_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rbg_SizeDCI_0_3_r18), 0, 1);
    }
    if (value.has_resourceAllocationType1GranularityDCI_0_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.resourceAllocationType1GranularityDCI_0_3_r18), 0, 3);
    }
    if (value.has_numberOfBitsForRV_DCI_0_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.numberOfBitsForRV_DCI_0_3_r18), 0, 2);
    }
    if (value.has_harq_ProcessNumberSizeDCI_0_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.harq_ProcessNumberSizeDCI_0_3_r18), 0, 5);
    }
    if (value.has_uci_OnPUSCH_ListDCI_0_3_r18) {
        Encode_SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16(enc, value.uci_OnPUSCH_ListDCI_0_3_r18);
    }
    return enc.Error();
}

ErrorCode Decode_PUSCH_ConfigDCI_0_3_r18(Decoder& dec, PUSCH_ConfigDCI_0_3_r18& value)
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
        value.resourceAllocationDCI_0_3_r18 = (PUSCH_ConfigDCI_0_3_r18_ResourceAllocationDCI_0_3_r18)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.rbg_SizeDCI_0_3_r18 = (PUSCH_ConfigDCI_0_3_r18_Rbg_SizeDCI_0_3_r18)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.resourceAllocationType1GranularityDCI_0_3_r18 = (PUSCH_ConfigDCI_0_3_r18_ResourceAllocationType1GranularityDCI_0_3_r18)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.numberOfBitsForRV_DCI_0_3_r18 = (int64_t)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.harq_ProcessNumberSizeDCI_0_3_r18 = (int64_t)tmp_value;
    }
    if (present_5) {
        if (Decode_SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16(dec, value.uci_OnPUSCH_ListDCI_0_3_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUSCH_ConfigDCI_0_3_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_ConfigDCI_0_3_r18(PUSCH_ConfigDCI_0_3_r18& value)
{
    if (value.has_resourceAllocationDCI_0_3_r18) {
    }
    if (value.has_rbg_SizeDCI_0_3_r18) {
    }
    if (value.has_resourceAllocationType1GranularityDCI_0_3_r18) {
    }
    if (value.has_numberOfBitsForRV_DCI_0_3_r18) {
    }
    if (value.has_harq_ProcessNumberSizeDCI_0_3_r18) {
    }
    if (value.has_uci_OnPUSCH_ListDCI_0_3_r18) {
        Free_SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16(value.uci_OnPUSCH_ListDCI_0_3_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PUSCH_ConfigDCI_0_3_r18：ASN.1 SetupRelease<PUSCH-ConfigDCI-0-3-r18>；源文件第 10366 行；CHOICE。
// Encode_SetupRelease_PUSCH_ConfigDCI_0_3_r18 只读不分配；Decode_SetupRelease_PUSCH_ConfigDCI_0_3_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PUSCH_ConfigDCI_0_3_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PUSCH_ConfigDCI_0_3_r18(Encoder& enc, const SetupRelease_PUSCH_ConfigDCI_0_3_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PUSCH_ConfigDCI_0_3_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_PUSCH_ConfigDCI_0_3_r18_Tag_setup:
        Encode_PUSCH_ConfigDCI_0_3_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PUSCH_ConfigDCI_0_3_r18(Decoder& dec, SetupRelease_PUSCH_ConfigDCI_0_3_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PUSCH_ConfigDCI_0_3_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PUSCH_ConfigDCI_0_3_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PUSCH_ConfigDCI_0_3_r18_Tag_setup: {
        if (Decode_PUSCH_ConfigDCI_0_3_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PUSCH_ConfigDCI_0_3_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PUSCH_ConfigDCI_0_3_r18(SetupRelease_PUSCH_ConfigDCI_0_3_r18& value)
{
    switch (value.tag) {
    case SetupRelease_PUSCH_ConfigDCI_0_3_r18_Tag_release:
        break;
    case SetupRelease_PUSCH_ConfigDCI_0_3_r18_Tag_setup:
        Free_PUSCH_ConfigDCI_0_3_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PUSCH_Config_ExtGroup3：ASN.1 PUSCH_Config_ExtGroup3；源文件第 10357 行；扩展添加组 [[ ]]。
// Encode_PUSCH_Config_ExtGroup3 只读不分配；Decode_PUSCH_Config_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_PUSCH_Config_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PUSCH_Config_ExtGroup3(Encoder& enc, const PUSCH_Config_ExtGroup3& value)
{
    enc.WriteBit(value.has_maxRank_v1810);
    enc.WriteBit(value.has_sTx_2Panel_r18);
    enc.WriteBit(value.has_multipanelSchemeSDM_r18);
    enc.WriteBit(value.has_multipanelSchemeSFN_r18);
    enc.WriteBit(value.has_codebookTypeUL_r18);
    enc.WriteBit(value.has_applyIndicatedTCI_State_r18);
    enc.WriteBit(value.has_dynamicTransformPrecoderFieldPresenceDCI_0_1_r18);
    enc.WriteBit(value.has_dynamicTransformPrecoderFieldPresenceDCI_0_2_r18);
    enc.WriteBit(value.has_pusch_ConfigDCI_0_3_r18);
    if (value.has_maxRank_v1810) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxRank_v1810), 5, 8);
    }
    if (value.has_sTx_2Panel_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sTx_2Panel_r18), 0, 0);
    }
    if (value.has_multipanelSchemeSDM_r18) {
        Encode_SDM_Scheme_r18(enc, value.multipanelSchemeSDM_r18);
    }
    if (value.has_multipanelSchemeSFN_r18) {
        Encode_SFN_Scheme_r18(enc, value.multipanelSchemeSFN_r18);
    }
    if (value.has_codebookTypeUL_r18) {
        Encode_SetupRelease_CodebookTypeUL_r18(enc, value.codebookTypeUL_r18);
    }
    if (value.has_applyIndicatedTCI_State_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.applyIndicatedTCI_State_r18), 0, 1);
    }
    if (value.has_dynamicTransformPrecoderFieldPresenceDCI_0_1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dynamicTransformPrecoderFieldPresenceDCI_0_1_r18), 0, 0);
    }
    if (value.has_dynamicTransformPrecoderFieldPresenceDCI_0_2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dynamicTransformPrecoderFieldPresenceDCI_0_2_r18), 0, 0);
    }
    if (value.has_pusch_ConfigDCI_0_3_r18) {
        Encode_SetupRelease_PUSCH_ConfigDCI_0_3_r18(enc, value.pusch_ConfigDCI_0_3_r18);
    }
    return enc.Error();
}

ErrorCode Decode_PUSCH_Config_ExtGroup3(Decoder& dec, PUSCH_Config_ExtGroup3& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(5, 8, tmp_value)) { goto fail; }
        value.maxRank_v1810 = (int64_t)tmp_value;
    }
    if (present_1) {
        value.sTx_2Panel_r18 = (PUSCH_Config_ExtGroup3_STx_2Panel_r18)0;
    }
    if (present_2) {
        if (Decode_SDM_Scheme_r18(dec, value.multipanelSchemeSDM_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SFN_Scheme_r18(dec, value.multipanelSchemeSFN_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SetupRelease_CodebookTypeUL_r18(dec, value.codebookTypeUL_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.applyIndicatedTCI_State_r18 = (PUSCH_Config_ExtGroup3_ApplyIndicatedTCI_State_r18)tmp_value;
    }
    if (present_6) {
        value.dynamicTransformPrecoderFieldPresenceDCI_0_1_r18 = (PUSCH_Config_ExtGroup3_DynamicTransformPrecoderFieldPresenceDCI_0_1_r18)0;
    }
    if (present_7) {
        value.dynamicTransformPrecoderFieldPresenceDCI_0_2_r18 = (PUSCH_Config_ExtGroup3_DynamicTransformPrecoderFieldPresenceDCI_0_2_r18)0;
    }
    if (present_8) {
        if (Decode_SetupRelease_PUSCH_ConfigDCI_0_3_r18(dec, value.pusch_ConfigDCI_0_3_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUSCH_Config_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_Config_ExtGroup3(PUSCH_Config_ExtGroup3& value)
{
    if (value.has_maxRank_v1810) {
    }
    if (value.has_sTx_2Panel_r18) {
    }
    if (value.has_multipanelSchemeSDM_r18) {
        Free_SDM_Scheme_r18(value.multipanelSchemeSDM_r18);
    }
    if (value.has_multipanelSchemeSFN_r18) {
        Free_SFN_Scheme_r18(value.multipanelSchemeSFN_r18);
    }
    if (value.has_codebookTypeUL_r18) {
        Free_SetupRelease_CodebookTypeUL_r18(value.codebookTypeUL_r18);
    }
    if (value.has_applyIndicatedTCI_State_r18) {
    }
    if (value.has_dynamicTransformPrecoderFieldPresenceDCI_0_1_r18) {
    }
    if (value.has_dynamicTransformPrecoderFieldPresenceDCI_0_2_r18) {
    }
    if (value.has_pusch_ConfigDCI_0_3_r18) {
        Free_SetupRelease_PUSCH_ConfigDCI_0_3_r18(value.pusch_ConfigDCI_0_3_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InvalidSymbolPattern_r16_Symbols_r16：ASN.1 symbols-r16；源文件第 7027 行；CHOICE。
// Encode_InvalidSymbolPattern_r16_Symbols_r16 只读不分配；Decode_InvalidSymbolPattern_r16_Symbols_r16 可能 malloc（失败时内部已释放并清零）；Free_InvalidSymbolPattern_r16_Symbols_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InvalidSymbolPattern_r16_Symbols_r16(Encoder& enc, const InvalidSymbolPattern_r16_Symbols_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case InvalidSymbolPattern_r16_Symbols_r16_Tag_oneSlot:
        enc.WriteFixedBitString(value.u.oneSlot.bytes, value.u.oneSlot.bitLength, 14, 14);
        break;
    case InvalidSymbolPattern_r16_Symbols_r16_Tag_twoSlots:
        enc.WriteFixedBitString(value.u.twoSlots.bytes, value.u.twoSlots.bitLength, 28, 28);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_InvalidSymbolPattern_r16_Symbols_r16(Decoder& dec, InvalidSymbolPattern_r16_Symbols_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (InvalidSymbolPattern_r16_Symbols_r16_Tag)root_index;
    switch (value.tag) {
    case InvalidSymbolPattern_r16_Symbols_r16_Tag_oneSlot: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 14)) { goto fail; }
        string_length = 14;
        value.u.oneSlot.bytes = string_bytes;
        value.u.oneSlot.bitLength = string_length;
        break;
    }
    case InvalidSymbolPattern_r16_Symbols_r16_Tag_twoSlots: {
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
    Free_InvalidSymbolPattern_r16_Symbols_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InvalidSymbolPattern_r16_Symbols_r16(InvalidSymbolPattern_r16_Symbols_r16& value)
{
    switch (value.tag) {
    case InvalidSymbolPattern_r16_Symbols_r16_Tag_oneSlot:
        std::free(value.u.oneSlot.bytes);
        break;
    case InvalidSymbolPattern_r16_Symbols_r16_Tag_twoSlots:
        std::free(value.u.twoSlots.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InvalidSymbolPattern_r16_PeriodicityAndPattern_r16：ASN.1 periodicityAndPattern-r16；源文件第 7031 行；CHOICE。
// Encode_InvalidSymbolPattern_r16_PeriodicityAndPattern_r16 只读不分配；Decode_InvalidSymbolPattern_r16_PeriodicityAndPattern_r16 可能 malloc（失败时内部已释放并清零）；Free_InvalidSymbolPattern_r16_PeriodicityAndPattern_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InvalidSymbolPattern_r16_PeriodicityAndPattern_r16(Encoder& enc, const InvalidSymbolPattern_r16_PeriodicityAndPattern_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 6);
    switch (value.tag) {
    case InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n2:
        enc.WriteFixedBitString(value.u.n2.bytes, value.u.n2.bitLength, 2, 2);
        break;
    case InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n4:
        enc.WriteFixedBitString(value.u.n4.bytes, value.u.n4.bitLength, 4, 4);
        break;
    case InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n5:
        enc.WriteFixedBitString(value.u.n5.bytes, value.u.n5.bitLength, 5, 5);
        break;
    case InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n8:
        enc.WriteFixedBitString(value.u.n8.bytes, value.u.n8.bitLength, 8, 8);
        break;
    case InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n10:
        enc.WriteFixedBitString(value.u.n10.bytes, value.u.n10.bitLength, 10, 10);
        break;
    case InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n20:
        enc.WriteFixedBitString(value.u.n20.bytes, value.u.n20.bitLength, 20, 20);
        break;
    case InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n40:
        enc.WriteFixedBitString(value.u.n40.bytes, value.u.n40.bitLength, 40, 40);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_InvalidSymbolPattern_r16_PeriodicityAndPattern_r16(Decoder& dec, InvalidSymbolPattern_r16_PeriodicityAndPattern_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 6, root_index)) {
        goto fail;
    }
    value.tag = (InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag)root_index;
    switch (value.tag) {
    case InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n2: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 2)) { goto fail; }
        string_length = 2;
        value.u.n2.bytes = string_bytes;
        value.u.n2.bitLength = string_length;
        break;
    }
    case InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n4: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 4)) { goto fail; }
        string_length = 4;
        value.u.n4.bytes = string_bytes;
        value.u.n4.bitLength = string_length;
        break;
    }
    case InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n5: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 5)) { goto fail; }
        string_length = 5;
        value.u.n5.bytes = string_bytes;
        value.u.n5.bitLength = string_length;
        break;
    }
    case InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n8: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.u.n8.bytes = string_bytes;
        value.u.n8.bitLength = string_length;
        break;
    }
    case InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n10: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 10)) { goto fail; }
        string_length = 10;
        value.u.n10.bytes = string_bytes;
        value.u.n10.bitLength = string_length;
        break;
    }
    case InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n20: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 20)) { goto fail; }
        string_length = 20;
        value.u.n20.bytes = string_bytes;
        value.u.n20.bitLength = string_length;
        break;
    }
    case InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n40: {
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
    Free_InvalidSymbolPattern_r16_PeriodicityAndPattern_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InvalidSymbolPattern_r16_PeriodicityAndPattern_r16(InvalidSymbolPattern_r16_PeriodicityAndPattern_r16& value)
{
    switch (value.tag) {
    case InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n2:
        std::free(value.u.n2.bytes);
        break;
    case InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n4:
        std::free(value.u.n4.bytes);
        break;
    case InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n5:
        std::free(value.u.n5.bytes);
        break;
    case InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n8:
        std::free(value.u.n8.bytes);
        break;
    case InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n10:
        std::free(value.u.n10.bytes);
        break;
    case InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n20:
        std::free(value.u.n20.bytes);
        break;
    case InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n40:
        std::free(value.u.n40.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InvalidSymbolPattern_r16：ASN.1 InvalidSymbolPattern-r16；源文件第 7026 行；SEQUENCE。
// Encode_InvalidSymbolPattern_r16 只读不分配；Decode_InvalidSymbolPattern_r16 可能 malloc（失败时内部已释放并清零）；Free_InvalidSymbolPattern_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InvalidSymbolPattern_r16(Encoder& enc, const InvalidSymbolPattern_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_periodicityAndPattern_r16);
    Encode_InvalidSymbolPattern_r16_Symbols_r16(enc, value.symbols_r16);
    if (value.has_periodicityAndPattern_r16) {
        Encode_InvalidSymbolPattern_r16_PeriodicityAndPattern_r16(enc, value.periodicityAndPattern_r16);
    }
    return enc.Error();
}

ErrorCode Decode_InvalidSymbolPattern_r16(Decoder& dec, InvalidSymbolPattern_r16& value)
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
        if (Decode_InvalidSymbolPattern_r16_Symbols_r16(dec, value.symbols_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_InvalidSymbolPattern_r16_PeriodicityAndPattern_r16(dec, value.periodicityAndPattern_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_InvalidSymbolPattern_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InvalidSymbolPattern_r16(InvalidSymbolPattern_r16& value)
{
    Free_InvalidSymbolPattern_r16_Symbols_r16(value.symbols_r16);
    if (value.has_periodicityAndPattern_r16) {
        Free_InvalidSymbolPattern_r16_PeriodicityAndPattern_r16(value.periodicityAndPattern_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DMRS_UplinkConfig_ExtGroup1：ASN.1 DMRS_UplinkConfig_ExtGroup1；源文件第 6509 行；扩展添加组 [[ ]]。
// Encode_DMRS_UplinkConfig_ExtGroup1 只读不分配；Decode_DMRS_UplinkConfig_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_DMRS_UplinkConfig_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DMRS_UplinkConfig_ExtGroup1(Encoder& enc, const DMRS_UplinkConfig_ExtGroup1& value)
{
    enc.WriteBit(value.has_dmrs_TypeEnh_r18);
    if (value.has_dmrs_TypeEnh_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_TypeEnh_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_DMRS_UplinkConfig_ExtGroup1(Decoder& dec, DMRS_UplinkConfig_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.dmrs_TypeEnh_r18 = (DMRS_UplinkConfig_ExtGroup1_Dmrs_TypeEnh_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DMRS_UplinkConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DMRS_UplinkConfig_ExtGroup1(DMRS_UplinkConfig_ExtGroup1& value)
{
    if (value.has_dmrs_TypeEnh_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PTRS_UplinkConfig_ExtGroup1：ASN.1 PTRS_UplinkConfig_ExtGroup1；源文件第 9917 行；扩展添加组 [[ ]]。
// Encode_PTRS_UplinkConfig_ExtGroup1 只读不分配；Decode_PTRS_UplinkConfig_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_PTRS_UplinkConfig_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PTRS_UplinkConfig_ExtGroup1(Encoder& enc, const PTRS_UplinkConfig_ExtGroup1& value)
{
    enc.WriteBit(value.has_maxNrofPorts_SDM_r18);
    if (value.has_maxNrofPorts_SDM_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNrofPorts_SDM_r18), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_PTRS_UplinkConfig_ExtGroup1(Decoder& dec, PTRS_UplinkConfig_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.maxNrofPorts_SDM_r18 = (PTRS_UplinkConfig_ExtGroup1_MaxNrofPorts_SDM_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PTRS_UplinkConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PTRS_UplinkConfig_ExtGroup1(PTRS_UplinkConfig_ExtGroup1& value)
{
    if (value.has_maxNrofPorts_SDM_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PTRS_UplinkConfig_TransformPrecoderDisabled：ASN.1 transformPrecoderDisabled；源文件第 9905 行；SEQUENCE。
// Encode_PTRS_UplinkConfig_TransformPrecoderDisabled 只读不分配；Decode_PTRS_UplinkConfig_TransformPrecoderDisabled 可能 malloc（失败时内部已释放并清零）；Free_PTRS_UplinkConfig_TransformPrecoderDisabled 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PTRS_UplinkConfig_TransformPrecoderDisabled(Encoder& enc, const PTRS_UplinkConfig_TransformPrecoderDisabled& value)
{
    enc.WriteBit(value.has_frequencyDensity);
    enc.WriteBit(value.has_timeDensity);
    enc.WriteBit(value.has_resourceElementOffset);
    if (value.has_frequencyDensity) {
enc.WriteConstrainedLength(value.frequencyDensity_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.frequencyDensity_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.frequencyDensity_items[i]), 1, 276);
}
    }
    if (value.has_timeDensity) {
enc.WriteConstrainedLength(value.timeDensity_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.timeDensity_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.timeDensity_items[i]), 0, 29);
}
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNrofPorts), 0, 1);
    if (value.has_resourceElementOffset) {
        enc.WriteConstrainedInteger((std::int64_t)(value.resourceElementOffset), 0, 2);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.ptrs_Power), 0, 3);
    return enc.Error();
}

ErrorCode Decode_PTRS_UplinkConfig_TransformPrecoderDisabled(Decoder& dec, PTRS_UplinkConfig_TransformPrecoderDisabled& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.frequencyDensity_count)) { goto fail; }
if (value.frequencyDensity_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.frequencyDensity_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.frequencyDensity_count > 0u) {
    value.frequencyDensity_items = (int64_t*)std::malloc((std::size_t)value.frequencyDensity_count * sizeof(int64_t));
    if (value.frequencyDensity_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.frequencyDensity_items, 0, (std::size_t)value.frequencyDensity_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.frequencyDensity_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 276, tmp_value)) { goto fail; }
    value.frequencyDensity_items[i] = (int64_t)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.timeDensity_count)) { goto fail; }
if (value.timeDensity_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.timeDensity_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.timeDensity_count > 0u) {
    value.timeDensity_items = (int64_t*)std::malloc((std::size_t)value.timeDensity_count * sizeof(int64_t));
    if (value.timeDensity_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.timeDensity_items, 0, (std::size_t)value.timeDensity_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.timeDensity_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 29, tmp_value)) { goto fail; }
    value.timeDensity_items[i] = (int64_t)tmp_value;
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.maxNrofPorts = (PTRS_UplinkConfig_TransformPrecoderDisabled_MaxNrofPorts)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.resourceElementOffset = (PTRS_UplinkConfig_TransformPrecoderDisabled_ResourceElementOffset)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.ptrs_Power = (PTRS_UplinkConfig_TransformPrecoderDisabled_Ptrs_Power)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PTRS_UplinkConfig_TransformPrecoderDisabled(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PTRS_UplinkConfig_TransformPrecoderDisabled(PTRS_UplinkConfig_TransformPrecoderDisabled& value)
{
    if (value.has_frequencyDensity) {
        if (value.frequencyDensity_items != nullptr) {
            for (std::uint32_t i = 0; i < value.frequencyDensity_count; ++i) {
            }
            std::free(value.frequencyDensity_items);
            value.frequencyDensity_items = nullptr;
        }
        value.frequencyDensity_count = 0;
    }
    if (value.has_timeDensity) {
        if (value.timeDensity_items != nullptr) {
            for (std::uint32_t i = 0; i < value.timeDensity_count; ++i) {
            }
            std::free(value.timeDensity_items);
            value.timeDensity_items = nullptr;
        }
        value.timeDensity_count = 0;
    }
    if (value.has_resourceElementOffset) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PTRS_UplinkConfig_TransformPrecoderEnabled：ASN.1 transformPrecoderEnabled；源文件第 9912 行；SEQUENCE。
// Encode_PTRS_UplinkConfig_TransformPrecoderEnabled 只读不分配；Decode_PTRS_UplinkConfig_TransformPrecoderEnabled 可能 malloc（失败时内部已释放并清零）；Free_PTRS_UplinkConfig_TransformPrecoderEnabled 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PTRS_UplinkConfig_TransformPrecoderEnabled(Encoder& enc, const PTRS_UplinkConfig_TransformPrecoderEnabled& value)
{
    enc.WriteBit(value.has_timeDensityTransformPrecoding);
enc.WriteConstrainedLength(value.sampleDensity_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sampleDensity_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sampleDensity_items[i]), 1, 276);
}
    if (value.has_timeDensityTransformPrecoding) {
        enc.WriteConstrainedInteger((std::int64_t)(value.timeDensityTransformPrecoding), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PTRS_UplinkConfig_TransformPrecoderEnabled(Decoder& dec, PTRS_UplinkConfig_TransformPrecoderEnabled& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.sampleDensity_count)) { goto fail; }
if (value.sampleDensity_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sampleDensity_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sampleDensity_count > 0u) {
    value.sampleDensity_items = (int64_t*)std::malloc((std::size_t)value.sampleDensity_count * sizeof(int64_t));
    if (value.sampleDensity_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sampleDensity_items, 0, (std::size_t)value.sampleDensity_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.sampleDensity_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 276, tmp_value)) { goto fail; }
    value.sampleDensity_items[i] = (int64_t)tmp_value;
}
    }
    if (present_0) {
        value.timeDensityTransformPrecoding = (PTRS_UplinkConfig_TransformPrecoderEnabled_TimeDensityTransformPrecoding)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PTRS_UplinkConfig_TransformPrecoderEnabled(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PTRS_UplinkConfig_TransformPrecoderEnabled(PTRS_UplinkConfig_TransformPrecoderEnabled& value)
{
    if (value.sampleDensity_items != nullptr) {
        for (std::uint32_t i = 0; i < value.sampleDensity_count; ++i) {
        }
        std::free(value.sampleDensity_items);
        value.sampleDensity_items = nullptr;
    }
    value.sampleDensity_count = 0;
    if (value.has_timeDensityTransformPrecoding) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PTRS_UplinkConfig：ASN.1 PTRS-UplinkConfig；源文件第 9904 行；SEQUENCE。
// Encode_PTRS_UplinkConfig 只读不分配；Decode_PTRS_UplinkConfig 可能 malloc（失败时内部已释放并清零）；Free_PTRS_UplinkConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PTRS_UplinkConfig(Encoder& enc, const PTRS_UplinkConfig& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_transformPrecoderDisabled);
    enc.WriteBit(value.has_transformPrecoderEnabled);
    if (value.has_transformPrecoderDisabled) {
        Encode_PTRS_UplinkConfig_TransformPrecoderDisabled(enc, value.transformPrecoderDisabled);
    }
    if (value.has_transformPrecoderEnabled) {
        Encode_PTRS_UplinkConfig_TransformPrecoderEnabled(enc, value.transformPrecoderEnabled);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_PTRS_UplinkConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PTRS_UplinkConfig(Decoder& dec, PTRS_UplinkConfig& value)
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
        if (Decode_PTRS_UplinkConfig_TransformPrecoderDisabled(dec, value.transformPrecoderDisabled) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_PTRS_UplinkConfig_TransformPrecoderEnabled(dec, value.transformPrecoderEnabled) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_PTRS_UplinkConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_PTRS_UplinkConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PTRS_UplinkConfig(PTRS_UplinkConfig& value)
{
    if (value.has_transformPrecoderDisabled) {
        Free_PTRS_UplinkConfig_TransformPrecoderDisabled(value.transformPrecoderDisabled);
    }
    if (value.has_transformPrecoderEnabled) {
        Free_PTRS_UplinkConfig_TransformPrecoderEnabled(value.transformPrecoderEnabled);
    }
    if (value.has_extGroup1) {
        Free_PTRS_UplinkConfig_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PTRS_UplinkConfig：ASN.1 SetupRelease<PTRS-UplinkConfig>；源文件第 6489 行；CHOICE。
// Encode_SetupRelease_PTRS_UplinkConfig 只读不分配；Decode_SetupRelease_PTRS_UplinkConfig 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PTRS_UplinkConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PTRS_UplinkConfig(Encoder& enc, const SetupRelease_PTRS_UplinkConfig& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PTRS_UplinkConfig_Tag_release:
        (void)0;
        break;
    case SetupRelease_PTRS_UplinkConfig_Tag_setup:
        Encode_PTRS_UplinkConfig(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PTRS_UplinkConfig(Decoder& dec, SetupRelease_PTRS_UplinkConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PTRS_UplinkConfig_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PTRS_UplinkConfig_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PTRS_UplinkConfig_Tag_setup: {
        if (Decode_PTRS_UplinkConfig(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PTRS_UplinkConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PTRS_UplinkConfig(SetupRelease_PTRS_UplinkConfig& value)
{
    switch (value.tag) {
    case SetupRelease_PTRS_UplinkConfig_Tag_release:
        break;
    case SetupRelease_PTRS_UplinkConfig_Tag_setup:
        Free_PTRS_UplinkConfig(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DMRS_UplinkConfig_TransformPrecodingDisabled_ExtGroup1：ASN.1 DMRS_UplinkConfig_TransformPrecodingDisabled_ExtGroup1；源文件第 6495 行；扩展添加组 [[ ]]。
// Encode_DMRS_UplinkConfig_TransformPrecodingDisabled_ExtGroup1 只读不分配；Decode_DMRS_UplinkConfig_TransformPrecodingDisabled_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_DMRS_UplinkConfig_TransformPrecodingDisabled_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DMRS_UplinkConfig_TransformPrecodingDisabled_ExtGroup1(Encoder& enc, const DMRS_UplinkConfig_TransformPrecodingDisabled_ExtGroup1& value)
{
    enc.WriteBit(value.has_dmrs_Uplink_r16);
    if (value.has_dmrs_Uplink_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_Uplink_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_DMRS_UplinkConfig_TransformPrecodingDisabled_ExtGroup1(Decoder& dec, DMRS_UplinkConfig_TransformPrecodingDisabled_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.dmrs_Uplink_r16 = (DMRS_UplinkConfig_TransformPrecodingDisabled_ExtGroup1_Dmrs_Uplink_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DMRS_UplinkConfig_TransformPrecodingDisabled_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DMRS_UplinkConfig_TransformPrecodingDisabled_ExtGroup1(DMRS_UplinkConfig_TransformPrecodingDisabled_ExtGroup1& value)
{
    if (value.has_dmrs_Uplink_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DMRS_UplinkConfig_TransformPrecodingDisabled：ASN.1 transformPrecodingDisabled；源文件第 6491 行；SEQUENCE。
// Encode_DMRS_UplinkConfig_TransformPrecodingDisabled 只读不分配；Decode_DMRS_UplinkConfig_TransformPrecodingDisabled 可能 malloc（失败时内部已释放并清零）；Free_DMRS_UplinkConfig_TransformPrecodingDisabled 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DMRS_UplinkConfig_TransformPrecodingDisabled(Encoder& enc, const DMRS_UplinkConfig_TransformPrecodingDisabled& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_scramblingID0);
    enc.WriteBit(value.has_scramblingID1);
    if (value.has_scramblingID0) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scramblingID0), 0, 65535);
    }
    if (value.has_scramblingID1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scramblingID1), 0, 65535);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_DMRS_UplinkConfig_TransformPrecodingDisabled_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_DMRS_UplinkConfig_TransformPrecodingDisabled(Decoder& dec, DMRS_UplinkConfig_TransformPrecodingDisabled& value)
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
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.scramblingID0 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.scramblingID1 = (int64_t)tmp_value;
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
    if (Decode_DMRS_UplinkConfig_TransformPrecodingDisabled_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_DMRS_UplinkConfig_TransformPrecodingDisabled(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DMRS_UplinkConfig_TransformPrecodingDisabled(DMRS_UplinkConfig_TransformPrecodingDisabled& value)
{
    if (value.has_scramblingID0) {
    }
    if (value.has_scramblingID1) {
    }
    if (value.has_extGroup1) {
        Free_DMRS_UplinkConfig_TransformPrecodingDisabled_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DMRS_UplinkTransformPrecoding_r16：ASN.1 DMRS-UplinkTransformPrecoding-r16；源文件第 6514 行；SEQUENCE。
// Encode_DMRS_UplinkTransformPrecoding_r16 只读不分配；Decode_DMRS_UplinkTransformPrecoding_r16 可能 malloc（失败时内部已释放并清零）；Free_DMRS_UplinkTransformPrecoding_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DMRS_UplinkTransformPrecoding_r16(Encoder& enc, const DMRS_UplinkTransformPrecoding_r16& value)
{
    enc.WriteBit(value.has_pi2BPSK_ScramblingID0);
    enc.WriteBit(value.has_pi2BPSK_ScramblingID1);
    if (value.has_pi2BPSK_ScramblingID0) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pi2BPSK_ScramblingID0), 0, 65535);
    }
    if (value.has_pi2BPSK_ScramblingID1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pi2BPSK_ScramblingID1), 0, 65535);
    }
    return enc.Error();
}

ErrorCode Decode_DMRS_UplinkTransformPrecoding_r16(Decoder& dec, DMRS_UplinkTransformPrecoding_r16& value)
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
        value.pi2BPSK_ScramblingID0 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.pi2BPSK_ScramblingID1 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DMRS_UplinkTransformPrecoding_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DMRS_UplinkTransformPrecoding_r16(DMRS_UplinkTransformPrecoding_r16& value)
{
    if (value.has_pi2BPSK_ScramblingID0) {
    }
    if (value.has_pi2BPSK_ScramblingID1) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_DMRS_UplinkTransformPrecoding_r16：ASN.1 SetupRelease<DMRS-UplinkTransformPrecoding-r16>；源文件第 6505 行；CHOICE。
// Encode_SetupRelease_DMRS_UplinkTransformPrecoding_r16 只读不分配；Decode_SetupRelease_DMRS_UplinkTransformPrecoding_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_DMRS_UplinkTransformPrecoding_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_DMRS_UplinkTransformPrecoding_r16(Encoder& enc, const SetupRelease_DMRS_UplinkTransformPrecoding_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DMRS_UplinkTransformPrecoding_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_DMRS_UplinkTransformPrecoding_r16_Tag_setup:
        Encode_DMRS_UplinkTransformPrecoding_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DMRS_UplinkTransformPrecoding_r16(Decoder& dec, SetupRelease_DMRS_UplinkTransformPrecoding_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DMRS_UplinkTransformPrecoding_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DMRS_UplinkTransformPrecoding_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DMRS_UplinkTransformPrecoding_r16_Tag_setup: {
        if (Decode_DMRS_UplinkTransformPrecoding_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DMRS_UplinkTransformPrecoding_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DMRS_UplinkTransformPrecoding_r16(SetupRelease_DMRS_UplinkTransformPrecoding_r16& value)
{
    switch (value.tag) {
    case SetupRelease_DMRS_UplinkTransformPrecoding_r16_Tag_release:
        break;
    case SetupRelease_DMRS_UplinkTransformPrecoding_r16_Tag_setup:
        Free_DMRS_UplinkTransformPrecoding_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DMRS_UplinkConfig_TransformPrecodingEnabled_ExtGroup1：ASN.1 DMRS_UplinkConfig_TransformPrecodingEnabled_ExtGroup1；源文件第 6504 行；扩展添加组 [[ ]]。
// Encode_DMRS_UplinkConfig_TransformPrecodingEnabled_ExtGroup1 只读不分配；Decode_DMRS_UplinkConfig_TransformPrecodingEnabled_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_DMRS_UplinkConfig_TransformPrecodingEnabled_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DMRS_UplinkConfig_TransformPrecodingEnabled_ExtGroup1(Encoder& enc, const DMRS_UplinkConfig_TransformPrecodingEnabled_ExtGroup1& value)
{
    enc.WriteBit(value.has_dmrs_UplinkTransformPrecoding_r16);
    if (value.has_dmrs_UplinkTransformPrecoding_r16) {
        Encode_SetupRelease_DMRS_UplinkTransformPrecoding_r16(enc, value.dmrs_UplinkTransformPrecoding_r16);
    }
    return enc.Error();
}

ErrorCode Decode_DMRS_UplinkConfig_TransformPrecodingEnabled_ExtGroup1(Decoder& dec, DMRS_UplinkConfig_TransformPrecodingEnabled_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_DMRS_UplinkTransformPrecoding_r16(dec, value.dmrs_UplinkTransformPrecoding_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_DMRS_UplinkConfig_TransformPrecodingEnabled_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DMRS_UplinkConfig_TransformPrecodingEnabled_ExtGroup1(DMRS_UplinkConfig_TransformPrecodingEnabled_ExtGroup1& value)
{
    if (value.has_dmrs_UplinkTransformPrecoding_r16) {
        Free_SetupRelease_DMRS_UplinkTransformPrecoding_r16(value.dmrs_UplinkTransformPrecoding_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DMRS_UplinkConfig_TransformPrecodingEnabled：ASN.1 transformPrecodingEnabled；源文件第 6499 行；SEQUENCE。
// Encode_DMRS_UplinkConfig_TransformPrecodingEnabled 只读不分配；Decode_DMRS_UplinkConfig_TransformPrecodingEnabled 可能 malloc（失败时内部已释放并清零）；Free_DMRS_UplinkConfig_TransformPrecodingEnabled 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DMRS_UplinkConfig_TransformPrecodingEnabled(Encoder& enc, const DMRS_UplinkConfig_TransformPrecodingEnabled& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_nPUSCH_Identity);
    enc.WriteBit(value.has_sequenceGroupHopping);
    enc.WriteBit(value.has_sequenceHopping);
    if (value.has_nPUSCH_Identity) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nPUSCH_Identity), 0, 1007);
    }
    if (value.has_sequenceGroupHopping) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sequenceGroupHopping), 0, 0);
    }
    if (value.has_sequenceHopping) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sequenceHopping), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_DMRS_UplinkConfig_TransformPrecodingEnabled_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_DMRS_UplinkConfig_TransformPrecodingEnabled(Decoder& dec, DMRS_UplinkConfig_TransformPrecodingEnabled& value)
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
        if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
        value.nPUSCH_Identity = (int64_t)tmp_value;
    }
    if (present_1) {
        value.sequenceGroupHopping = (DMRS_UplinkConfig_TransformPrecodingEnabled_SequenceGroupHopping)0;
    }
    if (present_2) {
        value.sequenceHopping = (DMRS_UplinkConfig_TransformPrecodingEnabled_SequenceHopping)0;
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
    if (Decode_DMRS_UplinkConfig_TransformPrecodingEnabled_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_DMRS_UplinkConfig_TransformPrecodingEnabled(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DMRS_UplinkConfig_TransformPrecodingEnabled(DMRS_UplinkConfig_TransformPrecodingEnabled& value)
{
    if (value.has_nPUSCH_Identity) {
    }
    if (value.has_sequenceGroupHopping) {
    }
    if (value.has_sequenceHopping) {
    }
    if (value.has_extGroup1) {
        Free_DMRS_UplinkConfig_TransformPrecodingEnabled_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DMRS_UplinkConfig：ASN.1 DMRS-UplinkConfig；源文件第 6486 行；SEQUENCE。
// Encode_DMRS_UplinkConfig 只读不分配；Decode_DMRS_UplinkConfig 可能 malloc（失败时内部已释放并清零）；Free_DMRS_UplinkConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DMRS_UplinkConfig(Encoder& enc, const DMRS_UplinkConfig& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_dmrs_Type);
    enc.WriteBit(value.has_dmrs_AdditionalPosition);
    enc.WriteBit(value.has_phaseTrackingRS);
    enc.WriteBit(value.has_maxLength);
    enc.WriteBit(value.has_transformPrecodingDisabled);
    enc.WriteBit(value.has_transformPrecodingEnabled);
    if (value.has_dmrs_Type) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_Type), 0, 0);
    }
    if (value.has_dmrs_AdditionalPosition) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_AdditionalPosition), 0, 2);
    }
    if (value.has_phaseTrackingRS) {
        Encode_SetupRelease_PTRS_UplinkConfig(enc, value.phaseTrackingRS);
    }
    if (value.has_maxLength) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxLength), 0, 0);
    }
    if (value.has_transformPrecodingDisabled) {
        Encode_DMRS_UplinkConfig_TransformPrecodingDisabled(enc, value.transformPrecodingDisabled);
    }
    if (value.has_transformPrecodingEnabled) {
        Encode_DMRS_UplinkConfig_TransformPrecodingEnabled(enc, value.transformPrecodingEnabled);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_DMRS_UplinkConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_DMRS_UplinkConfig(Decoder& dec, DMRS_UplinkConfig& value)
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
        value.dmrs_Type = (DMRS_UplinkConfig_Dmrs_Type)0;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.dmrs_AdditionalPosition = (DMRS_UplinkConfig_Dmrs_AdditionalPosition)tmp_value;
    }
    if (present_2) {
        if (Decode_SetupRelease_PTRS_UplinkConfig(dec, value.phaseTrackingRS) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        value.maxLength = (DMRS_UplinkConfig_MaxLength)0;
    }
    if (present_4) {
        if (Decode_DMRS_UplinkConfig_TransformPrecodingDisabled(dec, value.transformPrecodingDisabled) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_DMRS_UplinkConfig_TransformPrecodingEnabled(dec, value.transformPrecodingEnabled) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_DMRS_UplinkConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_DMRS_UplinkConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DMRS_UplinkConfig(DMRS_UplinkConfig& value)
{
    if (value.has_dmrs_Type) {
    }
    if (value.has_dmrs_AdditionalPosition) {
    }
    if (value.has_phaseTrackingRS) {
        Free_SetupRelease_PTRS_UplinkConfig(value.phaseTrackingRS);
    }
    if (value.has_maxLength) {
    }
    if (value.has_transformPrecodingDisabled) {
        Free_DMRS_UplinkConfig_TransformPrecodingDisabled(value.transformPrecodingDisabled);
    }
    if (value.has_transformPrecodingEnabled) {
        Free_DMRS_UplinkConfig_TransformPrecodingEnabled(value.transformPrecodingEnabled);
    }
    if (value.has_extGroup1) {
        Free_DMRS_UplinkConfig_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_DMRS_UplinkConfig：ASN.1 SetupRelease<DMRS-UplinkConfig>；源文件第 10273 行；CHOICE。
// Encode_SetupRelease_DMRS_UplinkConfig 只读不分配；Decode_SetupRelease_DMRS_UplinkConfig 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_DMRS_UplinkConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_DMRS_UplinkConfig(Encoder& enc, const SetupRelease_DMRS_UplinkConfig& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DMRS_UplinkConfig_Tag_release:
        (void)0;
        break;
    case SetupRelease_DMRS_UplinkConfig_Tag_setup:
        Encode_DMRS_UplinkConfig(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DMRS_UplinkConfig(Decoder& dec, SetupRelease_DMRS_UplinkConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DMRS_UplinkConfig_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DMRS_UplinkConfig_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DMRS_UplinkConfig_Tag_setup: {
        if (Decode_DMRS_UplinkConfig(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DMRS_UplinkConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DMRS_UplinkConfig(SetupRelease_DMRS_UplinkConfig& value)
{
    switch (value.tag) {
    case SetupRelease_DMRS_UplinkConfig_Tag_release:
        break;
    case SetupRelease_DMRS_UplinkConfig_Tag_setup:
        Free_DMRS_UplinkConfig(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MinSchedulingOffsetK2_Values_r16：ASN.1 MinSchedulingOffsetK2-Values-r16；源文件第 10378 行；SEQUENCE OF。
// Encode_MinSchedulingOffsetK2_Values_r16 只读不分配；Decode_MinSchedulingOffsetK2_Values_r16 可能 malloc（失败时内部已释放并清零）；Free_MinSchedulingOffsetK2_Values_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MinSchedulingOffsetK2_Values_r16(Encoder& enc, const MinSchedulingOffsetK2_Values_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 2u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 16);
    }
    return enc.Error();
}

ErrorCode Decode_MinSchedulingOffsetK2_Values_r16(Decoder& dec, MinSchedulingOffsetK2_Values_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 2u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 2u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 16, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_MinSchedulingOffsetK2_Values_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MinSchedulingOffsetK2_Values_r16(MinSchedulingOffsetK2_Values_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_MinSchedulingOffsetK2_Values_r16：ASN.1 SetupRelease<MinSchedulingOffsetK2-Values-r16>；源文件第 10293 行；CHOICE。
// Encode_SetupRelease_MinSchedulingOffsetK2_Values_r16 只读不分配；Decode_SetupRelease_MinSchedulingOffsetK2_Values_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_MinSchedulingOffsetK2_Values_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_MinSchedulingOffsetK2_Values_r16(Encoder& enc, const SetupRelease_MinSchedulingOffsetK2_Values_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_MinSchedulingOffsetK2_Values_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_MinSchedulingOffsetK2_Values_r16_Tag_setup:
        Encode_MinSchedulingOffsetK2_Values_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_MinSchedulingOffsetK2_Values_r16(Decoder& dec, SetupRelease_MinSchedulingOffsetK2_Values_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_MinSchedulingOffsetK2_Values_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_MinSchedulingOffsetK2_Values_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_MinSchedulingOffsetK2_Values_r16_Tag_setup: {
        if (Decode_MinSchedulingOffsetK2_Values_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_MinSchedulingOffsetK2_Values_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_MinSchedulingOffsetK2_Values_r16(SetupRelease_MinSchedulingOffsetK2_Values_r16& value)
{
    switch (value.tag) {
    case SetupRelease_MinSchedulingOffsetK2_Values_r16_Tag_release:
        break;
    case SetupRelease_MinSchedulingOffsetK2_Values_r16_Tag_setup:
        Free_MinSchedulingOffsetK2_Values_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UL_AccessConfigListDCI_0_1_r16：ASN.1 UL-AccessConfigListDCI-0-1-r16；源文件第 10399 行；SEQUENCE OF。
// Encode_UL_AccessConfigListDCI_0_1_r16 只读不分配；Decode_UL_AccessConfigListDCI_0_1_r16 可能 malloc（失败时内部已释放并清零）；Free_UL_AccessConfigListDCI_0_1_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UL_AccessConfigListDCI_0_1_r16(Encoder& enc, const UL_AccessConfigListDCI_0_1_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 64u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 63);
    }
    return enc.Error();
}

ErrorCode Decode_UL_AccessConfigListDCI_0_1_r16(Decoder& dec, UL_AccessConfigListDCI_0_1_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 64u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 64u) {
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
    Free_UL_AccessConfigListDCI_0_1_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UL_AccessConfigListDCI_0_1_r16(UL_AccessConfigListDCI_0_1_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_UL_AccessConfigListDCI_0_1_r16：ASN.1 SetupRelease<UL-AccessConfigListDCI-0-1-r16>；源文件第 10294 行；CHOICE。
// Encode_SetupRelease_UL_AccessConfigListDCI_0_1_r16 只读不分配；Decode_SetupRelease_UL_AccessConfigListDCI_0_1_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_UL_AccessConfigListDCI_0_1_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_UL_AccessConfigListDCI_0_1_r16(Encoder& enc, const SetupRelease_UL_AccessConfigListDCI_0_1_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_UL_AccessConfigListDCI_0_1_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_UL_AccessConfigListDCI_0_1_r16_Tag_setup:
        Encode_UL_AccessConfigListDCI_0_1_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_UL_AccessConfigListDCI_0_1_r16(Decoder& dec, SetupRelease_UL_AccessConfigListDCI_0_1_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_UL_AccessConfigListDCI_0_1_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_UL_AccessConfigListDCI_0_1_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_UL_AccessConfigListDCI_0_1_r16_Tag_setup: {
        if (Decode_UL_AccessConfigListDCI_0_1_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_UL_AccessConfigListDCI_0_1_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_UL_AccessConfigListDCI_0_1_r16(SetupRelease_UL_AccessConfigListDCI_0_1_r16& value)
{
    switch (value.tag) {
    case SetupRelease_UL_AccessConfigListDCI_0_1_r16_Tag_release:
        break;
    case SetupRelease_UL_AccessConfigListDCI_0_1_r16_Tag_setup:
        Free_UL_AccessConfigListDCI_0_1_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16：ASN.1 frequencyHoppingDCI-0-2-r16；源文件第 10302 行；CHOICE。
// Encode_PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16 只读不分配；Decode_PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16 可能 malloc（失败时内部已释放并清零）；Free_PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16(Encoder& enc, const PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Tag_pusch_RepTypeA:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.pusch_RepTypeA), 0, 1);
        break;
    case PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Tag_pusch_RepTypeB:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.pusch_RepTypeB), 0, 1);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16(Decoder& dec, PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Tag)root_index;
    switch (value.tag) {
    case PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Tag_pusch_RepTypeA: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.u.pusch_RepTypeA = (PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Pusch_RepTypeA)tmp_value;
        break;
    }
    case PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Tag_pusch_RepTypeB: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.u.pusch_RepTypeB = (PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Pusch_RepTypeB)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16(PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16& value)
{
    switch (value.tag) {
    case PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Tag_pusch_RepTypeA:
        break;
    case PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Tag_pusch_RepTypeB:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FrequencyHoppingOffsetListsDCI_0_2_r16：ASN.1 FrequencyHoppingOffsetListsDCI-0-2-r16；源文件第 10393 行；SEQUENCE OF。
// Encode_FrequencyHoppingOffsetListsDCI_0_2_r16 只读不分配；Decode_FrequencyHoppingOffsetListsDCI_0_2_r16 可能 malloc（失败时内部已释放并清零）；Free_FrequencyHoppingOffsetListsDCI_0_2_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FrequencyHoppingOffsetListsDCI_0_2_r16(Encoder& enc, const FrequencyHoppingOffsetListsDCI_0_2_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 1, 274);
    }
    return enc.Error();
}

ErrorCode Decode_FrequencyHoppingOffsetListsDCI_0_2_r16(Decoder& dec, FrequencyHoppingOffsetListsDCI_0_2_r16& value)
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
    if (!dec.ReadConstrainedInteger(1, 274, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_FrequencyHoppingOffsetListsDCI_0_2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FrequencyHoppingOffsetListsDCI_0_2_r16(FrequencyHoppingOffsetListsDCI_0_2_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16：ASN.1 SetupRelease<FrequencyHoppingOffsetListsDCI-0-2-r16>；源文件第 10306 行；CHOICE。
// Encode_SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16 只读不分配；Decode_SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16(Encoder& enc, const SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16_Tag_setup:
        Encode_FrequencyHoppingOffsetListsDCI_0_2_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16(Decoder& dec, SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16_Tag_setup: {
        if (Decode_FrequencyHoppingOffsetListsDCI_0_2_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16(SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16& value)
{
    switch (value.tag) {
    case SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16_Tag_release:
        break;
    case SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16_Tag_setup:
        Free_FrequencyHoppingOffsetListsDCI_0_2_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UCI_OnPUSCH_ListDCI_0_2_r16：ASN.1 UCI-OnPUSCH-ListDCI-0-2-r16；源文件第 10395 行；SEQUENCE OF。
// Encode_UCI_OnPUSCH_ListDCI_0_2_r16 只读不分配；Decode_UCI_OnPUSCH_ListDCI_0_2_r16 可能 malloc（失败时内部已释放并清零）；Free_UCI_OnPUSCH_ListDCI_0_2_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UCI_OnPUSCH_ListDCI_0_2_r16(Encoder& enc, const UCI_OnPUSCH_ListDCI_0_2_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 2u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_UCI_OnPUSCH_DCI_0_2_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_UCI_OnPUSCH_ListDCI_0_2_r16(Decoder& dec, UCI_OnPUSCH_ListDCI_0_2_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 2u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 2u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (UCI_OnPUSCH_DCI_0_2_r16*)std::malloc((std::size_t)value.count * sizeof(UCI_OnPUSCH_DCI_0_2_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(UCI_OnPUSCH_DCI_0_2_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_UCI_OnPUSCH_DCI_0_2_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_UCI_OnPUSCH_ListDCI_0_2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UCI_OnPUSCH_ListDCI_0_2_r16(UCI_OnPUSCH_ListDCI_0_2_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_UCI_OnPUSCH_DCI_0_2_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16：ASN.1 SetupRelease<UCI-OnPUSCH-ListDCI-0-2-r16>；源文件第 10318 行；CHOICE。
// Encode_SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16 只读不分配；Decode_SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16(Encoder& enc, const SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16_Tag_setup:
        Encode_UCI_OnPUSCH_ListDCI_0_2_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16(Decoder& dec, SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16_Tag_setup: {
        if (Decode_UCI_OnPUSCH_ListDCI_0_2_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16(SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16& value)
{
    switch (value.tag) {
    case SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16_Tag_release:
        break;
    case SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16_Tag_setup:
        Free_UCI_OnPUSCH_ListDCI_0_2_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PUSCH_TimeDomainResourceAllocationList_r16：ASN.1 PUSCH-TimeDomainResourceAllocationList-r16；源文件第 10612 行；SEQUENCE OF。
// Encode_PUSCH_TimeDomainResourceAllocationList_r16 只读不分配；Decode_PUSCH_TimeDomainResourceAllocationList_r16 可能 malloc（失败时内部已释放并清零）；Free_PUSCH_TimeDomainResourceAllocationList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PUSCH_TimeDomainResourceAllocationList_r16(Encoder& enc, const PUSCH_TimeDomainResourceAllocationList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 64u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PUSCH_TimeDomainResourceAllocation_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_PUSCH_TimeDomainResourceAllocationList_r16(Decoder& dec, PUSCH_TimeDomainResourceAllocationList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 64u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 64u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PUSCH_TimeDomainResourceAllocation_r16*)std::malloc((std::size_t)value.count * sizeof(PUSCH_TimeDomainResourceAllocation_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PUSCH_TimeDomainResourceAllocation_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PUSCH_TimeDomainResourceAllocation_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_PUSCH_TimeDomainResourceAllocationList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_TimeDomainResourceAllocationList_r16(PUSCH_TimeDomainResourceAllocationList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PUSCH_TimeDomainResourceAllocation_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16：ASN.1 SetupRelease<PUSCH-TimeDomainResourceAllocationList-r16>；源文件第 10319 行；CHOICE。
// Encode_SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16 只读不分配；Decode_SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16(Encoder& enc, const SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16_Tag_setup:
        Encode_PUSCH_TimeDomainResourceAllocationList_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16(Decoder& dec, SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16_Tag_setup: {
        if (Decode_PUSCH_TimeDomainResourceAllocationList_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16(SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16& value)
{
    switch (value.tag) {
    case SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16_Tag_release:
        break;
    case SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16_Tag_setup:
        Free_PUSCH_TimeDomainResourceAllocationList_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PUSCH_PowerControl_v1610_ExtGroup1：ASN.1 PUSCH_PowerControl_v1610_ExtGroup1；源文件第 10545 行；扩展添加组 [[ ]]。
// Encode_PUSCH_PowerControl_v1610_ExtGroup1 只读不分配；Decode_PUSCH_PowerControl_v1610_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_PUSCH_PowerControl_v1610_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PUSCH_PowerControl_v1610_ExtGroup1(Encoder& enc, const PUSCH_PowerControl_v1610_ExtGroup1& value)
{
    enc.WriteBit(value.has_sri_PUSCH_MappingToAddModList2_r17);
    enc.WriteBit(value.has_sri_PUSCH_MappingToReleaseList2_r17);
    enc.WriteBit(value.has_p0_PUSCH_SetList2_r17);
    enc.WriteBit(value.has_dummy);
    if (value.has_sri_PUSCH_MappingToAddModList2_r17) {
enc.WriteConstrainedLength(value.sri_PUSCH_MappingToAddModList2_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sri_PUSCH_MappingToAddModList2_r17_count; ++i) {
    Encode_SRI_PUSCH_PowerControl(enc, value.sri_PUSCH_MappingToAddModList2_r17_items[i]);
}
    }
    if (value.has_sri_PUSCH_MappingToReleaseList2_r17) {
enc.WriteConstrainedLength(value.sri_PUSCH_MappingToReleaseList2_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sri_PUSCH_MappingToReleaseList2_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sri_PUSCH_MappingToReleaseList2_r17_items[i]), 0, 15);
}
    }
    if (value.has_p0_PUSCH_SetList2_r17) {
enc.WriteConstrainedLength(value.p0_PUSCH_SetList2_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.p0_PUSCH_SetList2_r17_count; ++i) {
    Encode_P0_PUSCH_Set_r16(enc, value.p0_PUSCH_SetList2_r17_items[i]);
}
    }
    if (value.has_dummy) {
enc.WriteConstrainedLength(value.dummy_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.dummy_count; ++i) {
    Encode_DummyPathlossReferenceRS_v1710(enc, value.dummy_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_PUSCH_PowerControl_v1610_ExtGroup1(Decoder& dec, PUSCH_PowerControl_v1610_ExtGroup1& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.sri_PUSCH_MappingToAddModList2_r17_count)) { goto fail; }
if (value.sri_PUSCH_MappingToAddModList2_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sri_PUSCH_MappingToAddModList2_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sri_PUSCH_MappingToAddModList2_r17_count > 0u) {
    value.sri_PUSCH_MappingToAddModList2_r17_items = (SRI_PUSCH_PowerControl*)std::malloc((std::size_t)value.sri_PUSCH_MappingToAddModList2_r17_count * sizeof(SRI_PUSCH_PowerControl));
    if (value.sri_PUSCH_MappingToAddModList2_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sri_PUSCH_MappingToAddModList2_r17_items, 0, (std::size_t)value.sri_PUSCH_MappingToAddModList2_r17_count * sizeof(SRI_PUSCH_PowerControl));
}
for (std::uint32_t i = 0; i < value.sri_PUSCH_MappingToAddModList2_r17_count; ++i) {
    if (Decode_SRI_PUSCH_PowerControl(dec, value.sri_PUSCH_MappingToAddModList2_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sri_PUSCH_MappingToReleaseList2_r17_count)) { goto fail; }
if (value.sri_PUSCH_MappingToReleaseList2_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sri_PUSCH_MappingToReleaseList2_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sri_PUSCH_MappingToReleaseList2_r17_count > 0u) {
    value.sri_PUSCH_MappingToReleaseList2_r17_items = (SRI_PUSCH_PowerControlId*)std::malloc((std::size_t)value.sri_PUSCH_MappingToReleaseList2_r17_count * sizeof(SRI_PUSCH_PowerControlId));
    if (value.sri_PUSCH_MappingToReleaseList2_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sri_PUSCH_MappingToReleaseList2_r17_items, 0, (std::size_t)value.sri_PUSCH_MappingToReleaseList2_r17_count * sizeof(SRI_PUSCH_PowerControlId));
}
for (std::uint32_t i = 0; i < value.sri_PUSCH_MappingToReleaseList2_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
    value.sri_PUSCH_MappingToReleaseList2_r17_items[i] = (SRI_PUSCH_PowerControlId)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.p0_PUSCH_SetList2_r17_count)) { goto fail; }
if (value.p0_PUSCH_SetList2_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.p0_PUSCH_SetList2_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.p0_PUSCH_SetList2_r17_count > 0u) {
    value.p0_PUSCH_SetList2_r17_items = (P0_PUSCH_Set_r16*)std::malloc((std::size_t)value.p0_PUSCH_SetList2_r17_count * sizeof(P0_PUSCH_Set_r16));
    if (value.p0_PUSCH_SetList2_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.p0_PUSCH_SetList2_r17_items, 0, (std::size_t)value.p0_PUSCH_SetList2_r17_count * sizeof(P0_PUSCH_Set_r16));
}
for (std::uint32_t i = 0; i < value.p0_PUSCH_SetList2_r17_count; ++i) {
    if (Decode_P0_PUSCH_Set_r16(dec, value.p0_PUSCH_SetList2_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.dummy_count)) { goto fail; }
if (value.dummy_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.dummy_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.dummy_count > 0u) {
    value.dummy_items = (DummyPathlossReferenceRS_v1710*)std::malloc((std::size_t)value.dummy_count * sizeof(DummyPathlossReferenceRS_v1710));
    if (value.dummy_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.dummy_items, 0, (std::size_t)value.dummy_count * sizeof(DummyPathlossReferenceRS_v1710));
}
for (std::uint32_t i = 0; i < value.dummy_count; ++i) {
    if (Decode_DummyPathlossReferenceRS_v1710(dec, value.dummy_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUSCH_PowerControl_v1610_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_PowerControl_v1610_ExtGroup1(PUSCH_PowerControl_v1610_ExtGroup1& value)
{
    if (value.has_sri_PUSCH_MappingToAddModList2_r17) {
        if (value.sri_PUSCH_MappingToAddModList2_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sri_PUSCH_MappingToAddModList2_r17_count; ++i) {
                Free_SRI_PUSCH_PowerControl(value.sri_PUSCH_MappingToAddModList2_r17_items[i]);
            }
            std::free(value.sri_PUSCH_MappingToAddModList2_r17_items);
            value.sri_PUSCH_MappingToAddModList2_r17_items = nullptr;
        }
        value.sri_PUSCH_MappingToAddModList2_r17_count = 0;
    }
    if (value.has_sri_PUSCH_MappingToReleaseList2_r17) {
        if (value.sri_PUSCH_MappingToReleaseList2_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sri_PUSCH_MappingToReleaseList2_r17_count; ++i) {
            }
            std::free(value.sri_PUSCH_MappingToReleaseList2_r17_items);
            value.sri_PUSCH_MappingToReleaseList2_r17_items = nullptr;
        }
        value.sri_PUSCH_MappingToReleaseList2_r17_count = 0;
    }
    if (value.has_p0_PUSCH_SetList2_r17) {
        if (value.p0_PUSCH_SetList2_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.p0_PUSCH_SetList2_r17_count; ++i) {
                Free_P0_PUSCH_Set_r16(value.p0_PUSCH_SetList2_r17_items[i]);
            }
            std::free(value.p0_PUSCH_SetList2_r17_items);
            value.p0_PUSCH_SetList2_r17_items = nullptr;
        }
        value.p0_PUSCH_SetList2_r17_count = 0;
    }
    if (value.has_dummy) {
        if (value.dummy_items != nullptr) {
            for (std::uint32_t i = 0; i < value.dummy_count; ++i) {
                Free_DummyPathlossReferenceRS_v1710(value.dummy_items[i]);
            }
            std::free(value.dummy_items);
            value.dummy_items = nullptr;
        }
        value.dummy_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PUSCH_PowerControl_v1610_Olpc_ParameterSet：ASN.1 olpc-ParameterSet；源文件第 10540 行；SEQUENCE。
// Encode_PUSCH_PowerControl_v1610_Olpc_ParameterSet 只读不分配；Decode_PUSCH_PowerControl_v1610_Olpc_ParameterSet 可能 malloc（失败时内部已释放并清零）；Free_PUSCH_PowerControl_v1610_Olpc_ParameterSet 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PUSCH_PowerControl_v1610_Olpc_ParameterSet(Encoder& enc, const PUSCH_PowerControl_v1610_Olpc_ParameterSet& value)
{
    enc.WriteBit(value.has_olpc_ParameterSetDCI_0_1_r16);
    enc.WriteBit(value.has_olpc_ParameterSetDCI_0_2_r16);
    if (value.has_olpc_ParameterSetDCI_0_1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.olpc_ParameterSetDCI_0_1_r16), 1, 2);
    }
    if (value.has_olpc_ParameterSetDCI_0_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.olpc_ParameterSetDCI_0_2_r16), 1, 2);
    }
    return enc.Error();
}

ErrorCode Decode_PUSCH_PowerControl_v1610_Olpc_ParameterSet(Decoder& dec, PUSCH_PowerControl_v1610_Olpc_ParameterSet& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.olpc_ParameterSetDCI_0_1_r16 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.olpc_ParameterSetDCI_0_2_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUSCH_PowerControl_v1610_Olpc_ParameterSet(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_PowerControl_v1610_Olpc_ParameterSet(PUSCH_PowerControl_v1610_Olpc_ParameterSet& value)
{
    if (value.has_olpc_ParameterSetDCI_0_1_r16) {
    }
    if (value.has_olpc_ParameterSetDCI_0_2_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PUSCH_PowerControl_v1610：ASN.1 PUSCH-PowerControl-v1610；源文件第 10534 行；SEQUENCE。
// Encode_PUSCH_PowerControl_v1610 只读不分配；Decode_PUSCH_PowerControl_v1610 可能 malloc（失败时内部已释放并清零）；Free_PUSCH_PowerControl_v1610 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PUSCH_PowerControl_v1610(Encoder& enc, const PUSCH_PowerControl_v1610& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_pathlossReferenceRSToAddModListSizeExt_v1610);
    enc.WriteBit(value.has_pathlossReferenceRSToReleaseListSizeExt_v1610);
    enc.WriteBit(value.has_p0_PUSCH_SetList_r16);
    enc.WriteBit(value.has_olpc_ParameterSet);
    if (value.has_pathlossReferenceRSToAddModListSizeExt_v1610) {
enc.WriteConstrainedLength(value.pathlossReferenceRSToAddModListSizeExt_v1610_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pathlossReferenceRSToAddModListSizeExt_v1610_count; ++i) {
    Encode_PUSCH_PathlossReferenceRS_r16(enc, value.pathlossReferenceRSToAddModListSizeExt_v1610_items[i]);
}
    }
    if (value.has_pathlossReferenceRSToReleaseListSizeExt_v1610) {
enc.WriteConstrainedLength(value.pathlossReferenceRSToReleaseListSizeExt_v1610_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pathlossReferenceRSToReleaseListSizeExt_v1610_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.pathlossReferenceRSToReleaseListSizeExt_v1610_items[i]), 4, 63);
}
    }
    if (value.has_p0_PUSCH_SetList_r16) {
enc.WriteConstrainedLength(value.p0_PUSCH_SetList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.p0_PUSCH_SetList_r16_count; ++i) {
    Encode_P0_PUSCH_Set_r16(enc, value.p0_PUSCH_SetList_r16_items[i]);
}
    }
    if (value.has_olpc_ParameterSet) {
        Encode_PUSCH_PowerControl_v1610_Olpc_ParameterSet(enc, value.olpc_ParameterSet);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_PUSCH_PowerControl_v1610_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PUSCH_PowerControl_v1610(Decoder& dec, PUSCH_PowerControl_v1610& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.pathlossReferenceRSToAddModListSizeExt_v1610_count)) { goto fail; }
if (value.pathlossReferenceRSToAddModListSizeExt_v1610_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pathlossReferenceRSToAddModListSizeExt_v1610_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pathlossReferenceRSToAddModListSizeExt_v1610_count > 0u) {
    value.pathlossReferenceRSToAddModListSizeExt_v1610_items = (PUSCH_PathlossReferenceRS_r16*)std::malloc((std::size_t)value.pathlossReferenceRSToAddModListSizeExt_v1610_count * sizeof(PUSCH_PathlossReferenceRS_r16));
    if (value.pathlossReferenceRSToAddModListSizeExt_v1610_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pathlossReferenceRSToAddModListSizeExt_v1610_items, 0, (std::size_t)value.pathlossReferenceRSToAddModListSizeExt_v1610_count * sizeof(PUSCH_PathlossReferenceRS_r16));
}
for (std::uint32_t i = 0; i < value.pathlossReferenceRSToAddModListSizeExt_v1610_count; ++i) {
    if (Decode_PUSCH_PathlossReferenceRS_r16(dec, value.pathlossReferenceRSToAddModListSizeExt_v1610_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.pathlossReferenceRSToReleaseListSizeExt_v1610_count)) { goto fail; }
if (value.pathlossReferenceRSToReleaseListSizeExt_v1610_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pathlossReferenceRSToReleaseListSizeExt_v1610_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pathlossReferenceRSToReleaseListSizeExt_v1610_count > 0u) {
    value.pathlossReferenceRSToReleaseListSizeExt_v1610_items = (PUSCH_PathlossReferenceRS_Id_v1610*)std::malloc((std::size_t)value.pathlossReferenceRSToReleaseListSizeExt_v1610_count * sizeof(PUSCH_PathlossReferenceRS_Id_v1610));
    if (value.pathlossReferenceRSToReleaseListSizeExt_v1610_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pathlossReferenceRSToReleaseListSizeExt_v1610_items, 0, (std::size_t)value.pathlossReferenceRSToReleaseListSizeExt_v1610_count * sizeof(PUSCH_PathlossReferenceRS_Id_v1610));
}
for (std::uint32_t i = 0; i < value.pathlossReferenceRSToReleaseListSizeExt_v1610_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(4, 63, tmp_value)) { goto fail; }
    value.pathlossReferenceRSToReleaseListSizeExt_v1610_items[i] = (PUSCH_PathlossReferenceRS_Id_v1610)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.p0_PUSCH_SetList_r16_count)) { goto fail; }
if (value.p0_PUSCH_SetList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.p0_PUSCH_SetList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.p0_PUSCH_SetList_r16_count > 0u) {
    value.p0_PUSCH_SetList_r16_items = (P0_PUSCH_Set_r16*)std::malloc((std::size_t)value.p0_PUSCH_SetList_r16_count * sizeof(P0_PUSCH_Set_r16));
    if (value.p0_PUSCH_SetList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.p0_PUSCH_SetList_r16_items, 0, (std::size_t)value.p0_PUSCH_SetList_r16_count * sizeof(P0_PUSCH_Set_r16));
}
for (std::uint32_t i = 0; i < value.p0_PUSCH_SetList_r16_count; ++i) {
    if (Decode_P0_PUSCH_Set_r16(dec, value.p0_PUSCH_SetList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_3) {
        if (Decode_PUSCH_PowerControl_v1610_Olpc_ParameterSet(dec, value.olpc_ParameterSet) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_PUSCH_PowerControl_v1610_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_PUSCH_PowerControl_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_PowerControl_v1610(PUSCH_PowerControl_v1610& value)
{
    if (value.has_pathlossReferenceRSToAddModListSizeExt_v1610) {
        if (value.pathlossReferenceRSToAddModListSizeExt_v1610_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pathlossReferenceRSToAddModListSizeExt_v1610_count; ++i) {
                Free_PUSCH_PathlossReferenceRS_r16(value.pathlossReferenceRSToAddModListSizeExt_v1610_items[i]);
            }
            std::free(value.pathlossReferenceRSToAddModListSizeExt_v1610_items);
            value.pathlossReferenceRSToAddModListSizeExt_v1610_items = nullptr;
        }
        value.pathlossReferenceRSToAddModListSizeExt_v1610_count = 0;
    }
    if (value.has_pathlossReferenceRSToReleaseListSizeExt_v1610) {
        if (value.pathlossReferenceRSToReleaseListSizeExt_v1610_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pathlossReferenceRSToReleaseListSizeExt_v1610_count; ++i) {
            }
            std::free(value.pathlossReferenceRSToReleaseListSizeExt_v1610_items);
            value.pathlossReferenceRSToReleaseListSizeExt_v1610_items = nullptr;
        }
        value.pathlossReferenceRSToReleaseListSizeExt_v1610_count = 0;
    }
    if (value.has_p0_PUSCH_SetList_r16) {
        if (value.p0_PUSCH_SetList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.p0_PUSCH_SetList_r16_count; ++i) {
                Free_P0_PUSCH_Set_r16(value.p0_PUSCH_SetList_r16_items[i]);
            }
            std::free(value.p0_PUSCH_SetList_r16_items);
            value.p0_PUSCH_SetList_r16_items = nullptr;
        }
        value.p0_PUSCH_SetList_r16_count = 0;
    }
    if (value.has_olpc_ParameterSet) {
        Free_PUSCH_PowerControl_v1610_Olpc_ParameterSet(value.olpc_ParameterSet);
    }
    if (value.has_extGroup1) {
        Free_PUSCH_PowerControl_v1610_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PUSCH_PowerControl_v1610：ASN.1 SetupRelease<PUSCH-PowerControl-v1610>；源文件第 10332 行；CHOICE。
// Encode_SetupRelease_PUSCH_PowerControl_v1610 只读不分配；Decode_SetupRelease_PUSCH_PowerControl_v1610 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PUSCH_PowerControl_v1610 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PUSCH_PowerControl_v1610(Encoder& enc, const SetupRelease_PUSCH_PowerControl_v1610& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PUSCH_PowerControl_v1610_Tag_release:
        (void)0;
        break;
    case SetupRelease_PUSCH_PowerControl_v1610_Tag_setup:
        Encode_PUSCH_PowerControl_v1610(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PUSCH_PowerControl_v1610(Decoder& dec, SetupRelease_PUSCH_PowerControl_v1610& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PUSCH_PowerControl_v1610_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PUSCH_PowerControl_v1610_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PUSCH_PowerControl_v1610_Tag_setup: {
        if (Decode_PUSCH_PowerControl_v1610(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PUSCH_PowerControl_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PUSCH_PowerControl_v1610(SetupRelease_PUSCH_PowerControl_v1610& value)
{
    switch (value.tag) {
    case SetupRelease_PUSCH_PowerControl_v1610_Tag_release:
        break;
    case SetupRelease_PUSCH_PowerControl_v1610_Tag_setup:
        Free_PUSCH_PowerControl_v1610(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PUSCH_Config_ExtGroup1：ASN.1 PUSCH_Config_ExtGroup1；源文件第 10292 行；扩展添加组 [[ ]]。
// Encode_PUSCH_Config_ExtGroup1 只读不分配；Decode_PUSCH_Config_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_PUSCH_Config_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PUSCH_Config_ExtGroup1(Encoder& enc, const PUSCH_Config_ExtGroup1& value)
{
    enc.WriteBit(value.has_minimumSchedulingOffsetK2_r16);
    enc.WriteBit(value.has_ul_AccessConfigListDCI_0_1_r16);
    enc.WriteBit(value.has_harq_ProcessNumberSizeDCI_0_2_r16);
    enc.WriteBit(value.has_dmrs_SequenceInitializationDCI_0_2_r16);
    enc.WriteBit(value.has_numberOfBitsForRV_DCI_0_2_r16);
    enc.WriteBit(value.has_antennaPortsFieldPresenceDCI_0_2_r16);
    enc.WriteBit(value.has_dmrs_UplinkForPUSCH_MappingTypeA_DCI_0_2_r16);
    enc.WriteBit(value.has_dmrs_UplinkForPUSCH_MappingTypeB_DCI_0_2_r16);
    enc.WriteBit(value.has_frequencyHoppingDCI_0_2_r16);
    enc.WriteBit(value.has_frequencyHoppingOffsetListsDCI_0_2_r16);
    enc.WriteBit(value.has_codebookSubsetDCI_0_2_r16);
    enc.WriteBit(value.has_invalidSymbolPatternIndicatorDCI_0_2_r16);
    enc.WriteBit(value.has_maxRankDCI_0_2_r16);
    enc.WriteBit(value.has_mcs_TableDCI_0_2_r16);
    enc.WriteBit(value.has_mcs_TableTransformPrecoderDCI_0_2_r16);
    enc.WriteBit(value.has_priorityIndicatorDCI_0_2_r16);
    enc.WriteBit(value.has_pusch_RepTypeIndicatorDCI_0_2_r16);
    enc.WriteBit(value.has_resourceAllocationDCI_0_2_r16);
    enc.WriteBit(value.has_resourceAllocationType1GranularityDCI_0_2_r16);
    enc.WriteBit(value.has_uci_OnPUSCH_ListDCI_0_2_r16);
    enc.WriteBit(value.has_pusch_TimeDomainAllocationListDCI_0_2_r16);
    enc.WriteBit(value.has_pusch_TimeDomainAllocationListDCI_0_1_r16);
    enc.WriteBit(value.has_invalidSymbolPatternIndicatorDCI_0_1_r16);
    enc.WriteBit(value.has_priorityIndicatorDCI_0_1_r16);
    enc.WriteBit(value.has_pusch_RepTypeIndicatorDCI_0_1_r16);
    enc.WriteBit(value.has_frequencyHoppingDCI_0_1_r16);
    enc.WriteBit(value.has_uci_OnPUSCH_ListDCI_0_1_r16);
    enc.WriteBit(value.has_invalidSymbolPattern_r16);
    enc.WriteBit(value.has_pusch_PowerControl_v1610);
    enc.WriteBit(value.has_ul_FullPowerTransmission_r16);
    enc.WriteBit(value.has_pusch_TimeDomainAllocationListForMultiPUSCH_r16);
    enc.WriteBit(value.has_numberOfInvalidSymbolsForDL_UL_Switching_r16);
    if (value.has_minimumSchedulingOffsetK2_r16) {
        Encode_SetupRelease_MinSchedulingOffsetK2_Values_r16(enc, value.minimumSchedulingOffsetK2_r16);
    }
    if (value.has_ul_AccessConfigListDCI_0_1_r16) {
        Encode_SetupRelease_UL_AccessConfigListDCI_0_1_r16(enc, value.ul_AccessConfigListDCI_0_1_r16);
    }
    if (value.has_harq_ProcessNumberSizeDCI_0_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.harq_ProcessNumberSizeDCI_0_2_r16), 0, 4);
    }
    if (value.has_dmrs_SequenceInitializationDCI_0_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_SequenceInitializationDCI_0_2_r16), 0, 0);
    }
    if (value.has_numberOfBitsForRV_DCI_0_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.numberOfBitsForRV_DCI_0_2_r16), 0, 2);
    }
    if (value.has_antennaPortsFieldPresenceDCI_0_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.antennaPortsFieldPresenceDCI_0_2_r16), 0, 0);
    }
    if (value.has_dmrs_UplinkForPUSCH_MappingTypeA_DCI_0_2_r16) {
        Encode_SetupRelease_DMRS_UplinkConfig(enc, value.dmrs_UplinkForPUSCH_MappingTypeA_DCI_0_2_r16);
    }
    if (value.has_dmrs_UplinkForPUSCH_MappingTypeB_DCI_0_2_r16) {
        Encode_SetupRelease_DMRS_UplinkConfig(enc, value.dmrs_UplinkForPUSCH_MappingTypeB_DCI_0_2_r16);
    }
    if (value.has_frequencyHoppingDCI_0_2_r16) {
        Encode_PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16(enc, value.frequencyHoppingDCI_0_2_r16);
    }
    if (value.has_frequencyHoppingOffsetListsDCI_0_2_r16) {
        Encode_SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16(enc, value.frequencyHoppingOffsetListsDCI_0_2_r16);
    }
    if (value.has_codebookSubsetDCI_0_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.codebookSubsetDCI_0_2_r16), 0, 2);
    }
    if (value.has_invalidSymbolPatternIndicatorDCI_0_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.invalidSymbolPatternIndicatorDCI_0_2_r16), 0, 0);
    }
    if (value.has_maxRankDCI_0_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxRankDCI_0_2_r16), 1, 4);
    }
    if (value.has_mcs_TableDCI_0_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mcs_TableDCI_0_2_r16), 0, 1);
    }
    if (value.has_mcs_TableTransformPrecoderDCI_0_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mcs_TableTransformPrecoderDCI_0_2_r16), 0, 1);
    }
    if (value.has_priorityIndicatorDCI_0_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.priorityIndicatorDCI_0_2_r16), 0, 0);
    }
    if (value.has_pusch_RepTypeIndicatorDCI_0_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_RepTypeIndicatorDCI_0_2_r16), 0, 1);
    }
    if (value.has_resourceAllocationDCI_0_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.resourceAllocationDCI_0_2_r16), 0, 2);
    }
    if (value.has_resourceAllocationType1GranularityDCI_0_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.resourceAllocationType1GranularityDCI_0_2_r16), 0, 3);
    }
    if (value.has_uci_OnPUSCH_ListDCI_0_2_r16) {
        Encode_SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16(enc, value.uci_OnPUSCH_ListDCI_0_2_r16);
    }
    if (value.has_pusch_TimeDomainAllocationListDCI_0_2_r16) {
        Encode_SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16(enc, value.pusch_TimeDomainAllocationListDCI_0_2_r16);
    }
    if (value.has_pusch_TimeDomainAllocationListDCI_0_1_r16) {
        Encode_SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16(enc, value.pusch_TimeDomainAllocationListDCI_0_1_r16);
    }
    if (value.has_invalidSymbolPatternIndicatorDCI_0_1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.invalidSymbolPatternIndicatorDCI_0_1_r16), 0, 0);
    }
    if (value.has_priorityIndicatorDCI_0_1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.priorityIndicatorDCI_0_1_r16), 0, 0);
    }
    if (value.has_pusch_RepTypeIndicatorDCI_0_1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_RepTypeIndicatorDCI_0_1_r16), 0, 1);
    }
    if (value.has_frequencyHoppingDCI_0_1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.frequencyHoppingDCI_0_1_r16), 0, 1);
    }
    if (value.has_uci_OnPUSCH_ListDCI_0_1_r16) {
        Encode_SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16(enc, value.uci_OnPUSCH_ListDCI_0_1_r16);
    }
    if (value.has_invalidSymbolPattern_r16) {
        Encode_InvalidSymbolPattern_r16(enc, value.invalidSymbolPattern_r16);
    }
    if (value.has_pusch_PowerControl_v1610) {
        Encode_SetupRelease_PUSCH_PowerControl_v1610(enc, value.pusch_PowerControl_v1610);
    }
    if (value.has_ul_FullPowerTransmission_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_FullPowerTransmission_r16), 0, 2);
    }
    if (value.has_pusch_TimeDomainAllocationListForMultiPUSCH_r16) {
        Encode_SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16(enc, value.pusch_TimeDomainAllocationListForMultiPUSCH_r16);
    }
    if (value.has_numberOfInvalidSymbolsForDL_UL_Switching_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.numberOfInvalidSymbolsForDL_UL_Switching_r16), 1, 4);
    }
    return enc.Error();
}

ErrorCode Decode_PUSCH_Config_ExtGroup1(Decoder& dec, PUSCH_Config_ExtGroup1& value)
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
    if (present_0) {
        if (Decode_SetupRelease_MinSchedulingOffsetK2_Values_r16(dec, value.minimumSchedulingOffsetK2_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_UL_AccessConfigListDCI_0_1_r16(dec, value.ul_AccessConfigListDCI_0_1_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.harq_ProcessNumberSizeDCI_0_2_r16 = (int64_t)tmp_value;
    }
    if (present_3) {
        value.dmrs_SequenceInitializationDCI_0_2_r16 = (PUSCH_Config_ExtGroup1_Dmrs_SequenceInitializationDCI_0_2_r16)0;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.numberOfBitsForRV_DCI_0_2_r16 = (int64_t)tmp_value;
    }
    if (present_5) {
        value.antennaPortsFieldPresenceDCI_0_2_r16 = (PUSCH_Config_ExtGroup1_AntennaPortsFieldPresenceDCI_0_2_r16)0;
    }
    if (present_6) {
        if (Decode_SetupRelease_DMRS_UplinkConfig(dec, value.dmrs_UplinkForPUSCH_MappingTypeA_DCI_0_2_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        if (Decode_SetupRelease_DMRS_UplinkConfig(dec, value.dmrs_UplinkForPUSCH_MappingTypeB_DCI_0_2_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        if (Decode_PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16(dec, value.frequencyHoppingDCI_0_2_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_9) {
        if (Decode_SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16(dec, value.frequencyHoppingOffsetListsDCI_0_2_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_10) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.codebookSubsetDCI_0_2_r16 = (PUSCH_Config_ExtGroup1_CodebookSubsetDCI_0_2_r16)tmp_value;
    }
    if (present_11) {
        value.invalidSymbolPatternIndicatorDCI_0_2_r16 = (PUSCH_Config_ExtGroup1_InvalidSymbolPatternIndicatorDCI_0_2_r16)0;
    }
    if (present_12) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.maxRankDCI_0_2_r16 = (int64_t)tmp_value;
    }
    if (present_13) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.mcs_TableDCI_0_2_r16 = (PUSCH_Config_ExtGroup1_Mcs_TableDCI_0_2_r16)tmp_value;
    }
    if (present_14) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.mcs_TableTransformPrecoderDCI_0_2_r16 = (PUSCH_Config_ExtGroup1_Mcs_TableTransformPrecoderDCI_0_2_r16)tmp_value;
    }
    if (present_15) {
        value.priorityIndicatorDCI_0_2_r16 = (PUSCH_Config_ExtGroup1_PriorityIndicatorDCI_0_2_r16)0;
    }
    if (present_16) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.pusch_RepTypeIndicatorDCI_0_2_r16 = (PUSCH_Config_ExtGroup1_Pusch_RepTypeIndicatorDCI_0_2_r16)tmp_value;
    }
    if (present_17) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.resourceAllocationDCI_0_2_r16 = (PUSCH_Config_ExtGroup1_ResourceAllocationDCI_0_2_r16)tmp_value;
    }
    if (present_18) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.resourceAllocationType1GranularityDCI_0_2_r16 = (PUSCH_Config_ExtGroup1_ResourceAllocationType1GranularityDCI_0_2_r16)tmp_value;
    }
    if (present_19) {
        if (Decode_SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16(dec, value.uci_OnPUSCH_ListDCI_0_2_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_20) {
        if (Decode_SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16(dec, value.pusch_TimeDomainAllocationListDCI_0_2_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_21) {
        if (Decode_SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16(dec, value.pusch_TimeDomainAllocationListDCI_0_1_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_22) {
        value.invalidSymbolPatternIndicatorDCI_0_1_r16 = (PUSCH_Config_ExtGroup1_InvalidSymbolPatternIndicatorDCI_0_1_r16)0;
    }
    if (present_23) {
        value.priorityIndicatorDCI_0_1_r16 = (PUSCH_Config_ExtGroup1_PriorityIndicatorDCI_0_1_r16)0;
    }
    if (present_24) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.pusch_RepTypeIndicatorDCI_0_1_r16 = (PUSCH_Config_ExtGroup1_Pusch_RepTypeIndicatorDCI_0_1_r16)tmp_value;
    }
    if (present_25) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.frequencyHoppingDCI_0_1_r16 = (PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_1_r16)tmp_value;
    }
    if (present_26) {
        if (Decode_SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16(dec, value.uci_OnPUSCH_ListDCI_0_1_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_27) {
        if (Decode_InvalidSymbolPattern_r16(dec, value.invalidSymbolPattern_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_28) {
        if (Decode_SetupRelease_PUSCH_PowerControl_v1610(dec, value.pusch_PowerControl_v1610) != ErrorCode_Ok) { goto fail; }
    }
    if (present_29) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.ul_FullPowerTransmission_r16 = (PUSCH_Config_ExtGroup1_Ul_FullPowerTransmission_r16)tmp_value;
    }
    if (present_30) {
        if (Decode_SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16(dec, value.pusch_TimeDomainAllocationListForMultiPUSCH_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_31) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.numberOfInvalidSymbolsForDL_UL_Switching_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUSCH_Config_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_Config_ExtGroup1(PUSCH_Config_ExtGroup1& value)
{
    if (value.has_minimumSchedulingOffsetK2_r16) {
        Free_SetupRelease_MinSchedulingOffsetK2_Values_r16(value.minimumSchedulingOffsetK2_r16);
    }
    if (value.has_ul_AccessConfigListDCI_0_1_r16) {
        Free_SetupRelease_UL_AccessConfigListDCI_0_1_r16(value.ul_AccessConfigListDCI_0_1_r16);
    }
    if (value.has_harq_ProcessNumberSizeDCI_0_2_r16) {
    }
    if (value.has_dmrs_SequenceInitializationDCI_0_2_r16) {
    }
    if (value.has_numberOfBitsForRV_DCI_0_2_r16) {
    }
    if (value.has_antennaPortsFieldPresenceDCI_0_2_r16) {
    }
    if (value.has_dmrs_UplinkForPUSCH_MappingTypeA_DCI_0_2_r16) {
        Free_SetupRelease_DMRS_UplinkConfig(value.dmrs_UplinkForPUSCH_MappingTypeA_DCI_0_2_r16);
    }
    if (value.has_dmrs_UplinkForPUSCH_MappingTypeB_DCI_0_2_r16) {
        Free_SetupRelease_DMRS_UplinkConfig(value.dmrs_UplinkForPUSCH_MappingTypeB_DCI_0_2_r16);
    }
    if (value.has_frequencyHoppingDCI_0_2_r16) {
        Free_PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16(value.frequencyHoppingDCI_0_2_r16);
    }
    if (value.has_frequencyHoppingOffsetListsDCI_0_2_r16) {
        Free_SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16(value.frequencyHoppingOffsetListsDCI_0_2_r16);
    }
    if (value.has_codebookSubsetDCI_0_2_r16) {
    }
    if (value.has_invalidSymbolPatternIndicatorDCI_0_2_r16) {
    }
    if (value.has_maxRankDCI_0_2_r16) {
    }
    if (value.has_mcs_TableDCI_0_2_r16) {
    }
    if (value.has_mcs_TableTransformPrecoderDCI_0_2_r16) {
    }
    if (value.has_priorityIndicatorDCI_0_2_r16) {
    }
    if (value.has_pusch_RepTypeIndicatorDCI_0_2_r16) {
    }
    if (value.has_resourceAllocationDCI_0_2_r16) {
    }
    if (value.has_resourceAllocationType1GranularityDCI_0_2_r16) {
    }
    if (value.has_uci_OnPUSCH_ListDCI_0_2_r16) {
        Free_SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16(value.uci_OnPUSCH_ListDCI_0_2_r16);
    }
    if (value.has_pusch_TimeDomainAllocationListDCI_0_2_r16) {
        Free_SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16(value.pusch_TimeDomainAllocationListDCI_0_2_r16);
    }
    if (value.has_pusch_TimeDomainAllocationListDCI_0_1_r16) {
        Free_SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16(value.pusch_TimeDomainAllocationListDCI_0_1_r16);
    }
    if (value.has_invalidSymbolPatternIndicatorDCI_0_1_r16) {
    }
    if (value.has_priorityIndicatorDCI_0_1_r16) {
    }
    if (value.has_pusch_RepTypeIndicatorDCI_0_1_r16) {
    }
    if (value.has_frequencyHoppingDCI_0_1_r16) {
    }
    if (value.has_uci_OnPUSCH_ListDCI_0_1_r16) {
        Free_SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16(value.uci_OnPUSCH_ListDCI_0_1_r16);
    }
    if (value.has_invalidSymbolPattern_r16) {
        Free_InvalidSymbolPattern_r16(value.invalidSymbolPattern_r16);
    }
    if (value.has_pusch_PowerControl_v1610) {
        Free_SetupRelease_PUSCH_PowerControl_v1610(value.pusch_PowerControl_v1610);
    }
    if (value.has_ul_FullPowerTransmission_r16) {
    }
    if (value.has_pusch_TimeDomainAllocationListForMultiPUSCH_r16) {
        Free_SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16(value.pusch_TimeDomainAllocationListForMultiPUSCH_r16);
    }
    if (value.has_numberOfInvalidSymbolsForDL_UL_Switching_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UL_AccessConfigListDCI_0_2_r17：ASN.1 UL-AccessConfigListDCI-0-2-r17；源文件第 10403 行；SEQUENCE OF。
// Encode_UL_AccessConfigListDCI_0_2_r17 只读不分配；Decode_UL_AccessConfigListDCI_0_2_r17 可能 malloc（失败时内部已释放并清零）；Free_UL_AccessConfigListDCI_0_2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UL_AccessConfigListDCI_0_2_r17(Encoder& enc, const UL_AccessConfigListDCI_0_2_r17& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 64u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 63);
    }
    return enc.Error();
}

ErrorCode Decode_UL_AccessConfigListDCI_0_2_r17(Decoder& dec, UL_AccessConfigListDCI_0_2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 64u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 64u) {
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
    Free_UL_AccessConfigListDCI_0_2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UL_AccessConfigListDCI_0_2_r17(UL_AccessConfigListDCI_0_2_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_UL_AccessConfigListDCI_0_2_r17：ASN.1 SetupRelease<UL-AccessConfigListDCI-0-2-r17>；源文件第 10339 行；CHOICE。
// Encode_SetupRelease_UL_AccessConfigListDCI_0_2_r17 只读不分配；Decode_SetupRelease_UL_AccessConfigListDCI_0_2_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_UL_AccessConfigListDCI_0_2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_UL_AccessConfigListDCI_0_2_r17(Encoder& enc, const SetupRelease_UL_AccessConfigListDCI_0_2_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_UL_AccessConfigListDCI_0_2_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_UL_AccessConfigListDCI_0_2_r17_Tag_setup:
        Encode_UL_AccessConfigListDCI_0_2_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_UL_AccessConfigListDCI_0_2_r17(Decoder& dec, SetupRelease_UL_AccessConfigListDCI_0_2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_UL_AccessConfigListDCI_0_2_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_UL_AccessConfigListDCI_0_2_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_UL_AccessConfigListDCI_0_2_r17_Tag_setup: {
        if (Decode_UL_AccessConfigListDCI_0_2_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_UL_AccessConfigListDCI_0_2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_UL_AccessConfigListDCI_0_2_r17(SetupRelease_UL_AccessConfigListDCI_0_2_r17& value)
{
    switch (value.tag) {
    case SetupRelease_UL_AccessConfigListDCI_0_2_r17_Tag_release:
        break;
    case SetupRelease_UL_AccessConfigListDCI_0_2_r17_Tag_setup:
        Free_UL_AccessConfigListDCI_0_2_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BetaOffsetsCrossPri_r17：ASN.1 BetaOffsetsCrossPri-r17；源文件第 4460 行；SEQUENCE OF。
// Encode_BetaOffsetsCrossPri_r17 只读不分配；Decode_BetaOffsetsCrossPri_r17 可能 malloc（失败时内部已释放并清零）；Free_BetaOffsetsCrossPri_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BetaOffsetsCrossPri_r17(Encoder& enc, const BetaOffsetsCrossPri_r17& value)
{
    if (value.count != 3u) {
        enc.Fail(ErrorCode_ValueOutOfRange);
    } else {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 31);
        }
    }
    return enc.Error();
}

ErrorCode Decode_BetaOffsetsCrossPri_r17(Decoder& dec, BetaOffsetsCrossPri_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
value.count = 3u;
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_BetaOffsetsCrossPri_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BetaOffsetsCrossPri_r17(BetaOffsetsCrossPri_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BetaOffsetsCrossPriSel_r17_Dynamic_r17：ASN.1 dynamic-r17；源文件第 10406 行；SEQUENCE OF。
// Encode_BetaOffsetsCrossPriSel_r17_Dynamic_r17 只读不分配；Decode_BetaOffsetsCrossPriSel_r17_Dynamic_r17 可能 malloc（失败时内部已释放并清零）；Free_BetaOffsetsCrossPriSel_r17_Dynamic_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BetaOffsetsCrossPriSel_r17_Dynamic_r17(Encoder& enc, const BetaOffsetsCrossPriSel_r17_Dynamic_r17& value)
{
    if (value.count != 4u) {
        enc.Fail(ErrorCode_ValueOutOfRange);
    } else {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Encode_BetaOffsetsCrossPri_r17(enc, value.items[i]);
        }
    }
    return enc.Error();
}

ErrorCode Decode_BetaOffsetsCrossPriSel_r17_Dynamic_r17(Decoder& dec, BetaOffsetsCrossPriSel_r17_Dynamic_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
value.count = 4u;
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (BetaOffsetsCrossPri_r17*)std::malloc((std::size_t)value.count * sizeof(BetaOffsetsCrossPri_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(BetaOffsetsCrossPri_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_BetaOffsetsCrossPri_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_BetaOffsetsCrossPriSel_r17_Dynamic_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BetaOffsetsCrossPriSel_r17_Dynamic_r17(BetaOffsetsCrossPriSel_r17_Dynamic_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BetaOffsetsCrossPri_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BetaOffsetsCrossPriSel_r17：ASN.1 BetaOffsetsCrossPriSel-r17；源文件第 10405 行；CHOICE。
// Encode_BetaOffsetsCrossPriSel_r17 只读不分配；Decode_BetaOffsetsCrossPriSel_r17 可能 malloc（失败时内部已释放并清零）；Free_BetaOffsetsCrossPriSel_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BetaOffsetsCrossPriSel_r17(Encoder& enc, const BetaOffsetsCrossPriSel_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case BetaOffsetsCrossPriSel_r17_Tag_dynamic_r17:
        Encode_BetaOffsetsCrossPriSel_r17_Dynamic_r17(enc, value.u.dynamic_r17);
        break;
    case BetaOffsetsCrossPriSel_r17_Tag_semiStatic_r17:
        Encode_BetaOffsetsCrossPri_r17(enc, value.u.semiStatic_r17);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_BetaOffsetsCrossPriSel_r17(Decoder& dec, BetaOffsetsCrossPriSel_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (BetaOffsetsCrossPriSel_r17_Tag)root_index;
    switch (value.tag) {
    case BetaOffsetsCrossPriSel_r17_Tag_dynamic_r17: {
        if (Decode_BetaOffsetsCrossPriSel_r17_Dynamic_r17(dec, value.u.dynamic_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case BetaOffsetsCrossPriSel_r17_Tag_semiStatic_r17: {
        if (Decode_BetaOffsetsCrossPri_r17(dec, value.u.semiStatic_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BetaOffsetsCrossPriSel_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BetaOffsetsCrossPriSel_r17(BetaOffsetsCrossPriSel_r17& value)
{
    switch (value.tag) {
    case BetaOffsetsCrossPriSel_r17_Tag_dynamic_r17:
        Free_BetaOffsetsCrossPriSel_r17_Dynamic_r17(value.u.dynamic_r17);
        break;
    case BetaOffsetsCrossPriSel_r17_Tag_semiStatic_r17:
        Free_BetaOffsetsCrossPri_r17(value.u.semiStatic_r17);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_BetaOffsetsCrossPriSel_r17：ASN.1 SetupRelease<BetaOffsetsCrossPriSel-r17>；源文件第 10340 行；CHOICE。
// Encode_SetupRelease_BetaOffsetsCrossPriSel_r17 只读不分配；Decode_SetupRelease_BetaOffsetsCrossPriSel_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_BetaOffsetsCrossPriSel_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_BetaOffsetsCrossPriSel_r17(Encoder& enc, const SetupRelease_BetaOffsetsCrossPriSel_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_BetaOffsetsCrossPriSel_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_BetaOffsetsCrossPriSel_r17_Tag_setup:
        Encode_BetaOffsetsCrossPriSel_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_BetaOffsetsCrossPriSel_r17(Decoder& dec, SetupRelease_BetaOffsetsCrossPriSel_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_BetaOffsetsCrossPriSel_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_BetaOffsetsCrossPriSel_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_BetaOffsetsCrossPriSel_r17_Tag_setup: {
        if (Decode_BetaOffsetsCrossPriSel_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_BetaOffsetsCrossPriSel_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_BetaOffsetsCrossPriSel_r17(SetupRelease_BetaOffsetsCrossPriSel_r17& value)
{
    switch (value.tag) {
    case SetupRelease_BetaOffsetsCrossPriSel_r17_Tag_release:
        break;
    case SetupRelease_BetaOffsetsCrossPriSel_r17_Tag_setup:
        Free_BetaOffsetsCrossPriSel_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_OneBit_r17：ASN.1 dynamicDCI-0-2-r17/oneBit-r17；源文件第 10412 行；SEQUENCE OF。
// Encode_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_OneBit_r17 只读不分配；Decode_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_OneBit_r17 可能 malloc（失败时内部已释放并清零）；Free_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_OneBit_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_OneBit_r17(Encoder& enc, const BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_OneBit_r17& value)
{
    if (value.count != 2u) {
        enc.Fail(ErrorCode_ValueOutOfRange);
    } else {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Encode_BetaOffsetsCrossPri_r17(enc, value.items[i]);
        }
    }
    return enc.Error();
}

ErrorCode Decode_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_OneBit_r17(Decoder& dec, BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_OneBit_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
value.count = 2u;
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (BetaOffsetsCrossPri_r17*)std::malloc((std::size_t)value.count * sizeof(BetaOffsetsCrossPri_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(BetaOffsetsCrossPri_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_BetaOffsetsCrossPri_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_OneBit_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_OneBit_r17(BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_OneBit_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BetaOffsetsCrossPri_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_TwoBits_r17：ASN.1 dynamicDCI-0-2-r17/twoBits-r17；源文件第 10413 行；SEQUENCE OF。
// Encode_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_TwoBits_r17 只读不分配；Decode_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_TwoBits_r17 可能 malloc（失败时内部已释放并清零）；Free_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_TwoBits_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_TwoBits_r17(Encoder& enc, const BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_TwoBits_r17& value)
{
    if (value.count != 4u) {
        enc.Fail(ErrorCode_ValueOutOfRange);
    } else {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Encode_BetaOffsetsCrossPri_r17(enc, value.items[i]);
        }
    }
    return enc.Error();
}

ErrorCode Decode_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_TwoBits_r17(Decoder& dec, BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_TwoBits_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
value.count = 4u;
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (BetaOffsetsCrossPri_r17*)std::malloc((std::size_t)value.count * sizeof(BetaOffsetsCrossPri_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(BetaOffsetsCrossPri_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_BetaOffsetsCrossPri_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_TwoBits_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_TwoBits_r17(BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_TwoBits_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BetaOffsetsCrossPri_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17：ASN.1 dynamicDCI-0-2-r17；源文件第 10411 行；CHOICE。
// Encode_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17 只读不分配；Decode_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17 可能 malloc（失败时内部已释放并清零）；Free_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17(Encoder& enc, const BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_Tag_oneBit_r17:
        Encode_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_OneBit_r17(enc, value.u.oneBit_r17);
        break;
    case BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_Tag_twoBits_r17:
        Encode_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_TwoBits_r17(enc, value.u.twoBits_r17);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17(Decoder& dec, BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_Tag)root_index;
    switch (value.tag) {
    case BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_Tag_oneBit_r17: {
        if (Decode_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_OneBit_r17(dec, value.u.oneBit_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_Tag_twoBits_r17: {
        if (Decode_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_TwoBits_r17(dec, value.u.twoBits_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17(BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17& value)
{
    switch (value.tag) {
    case BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_Tag_oneBit_r17:
        Free_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_OneBit_r17(value.u.oneBit_r17);
        break;
    case BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_Tag_twoBits_r17:
        Free_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_TwoBits_r17(value.u.twoBits_r17);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BetaOffsetsCrossPriSelDCI_0_2_r17：ASN.1 BetaOffsetsCrossPriSelDCI-0-2-r17；源文件第 10410 行；CHOICE。
// Encode_BetaOffsetsCrossPriSelDCI_0_2_r17 只读不分配；Decode_BetaOffsetsCrossPriSelDCI_0_2_r17 可能 malloc（失败时内部已释放并清零）；Free_BetaOffsetsCrossPriSelDCI_0_2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BetaOffsetsCrossPriSelDCI_0_2_r17(Encoder& enc, const BetaOffsetsCrossPriSelDCI_0_2_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case BetaOffsetsCrossPriSelDCI_0_2_r17_Tag_dynamicDCI_0_2_r17:
        Encode_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17(enc, value.u.dynamicDCI_0_2_r17);
        break;
    case BetaOffsetsCrossPriSelDCI_0_2_r17_Tag_semiStaticDCI_0_2_r17:
        Encode_BetaOffsetsCrossPri_r17(enc, value.u.semiStaticDCI_0_2_r17);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_BetaOffsetsCrossPriSelDCI_0_2_r17(Decoder& dec, BetaOffsetsCrossPriSelDCI_0_2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (BetaOffsetsCrossPriSelDCI_0_2_r17_Tag)root_index;
    switch (value.tag) {
    case BetaOffsetsCrossPriSelDCI_0_2_r17_Tag_dynamicDCI_0_2_r17: {
        if (Decode_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17(dec, value.u.dynamicDCI_0_2_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case BetaOffsetsCrossPriSelDCI_0_2_r17_Tag_semiStaticDCI_0_2_r17: {
        if (Decode_BetaOffsetsCrossPri_r17(dec, value.u.semiStaticDCI_0_2_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BetaOffsetsCrossPriSelDCI_0_2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BetaOffsetsCrossPriSelDCI_0_2_r17(BetaOffsetsCrossPriSelDCI_0_2_r17& value)
{
    switch (value.tag) {
    case BetaOffsetsCrossPriSelDCI_0_2_r17_Tag_dynamicDCI_0_2_r17:
        Free_BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17(value.u.dynamicDCI_0_2_r17);
        break;
    case BetaOffsetsCrossPriSelDCI_0_2_r17_Tag_semiStaticDCI_0_2_r17:
        Free_BetaOffsetsCrossPri_r17(value.u.semiStaticDCI_0_2_r17);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17：ASN.1 SetupRelease<BetaOffsetsCrossPriSelDCI-0-2-r17>；源文件第 10342 行；CHOICE。
// Encode_SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17 只读不分配；Decode_SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17(Encoder& enc, const SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17_Tag_setup:
        Encode_BetaOffsetsCrossPriSelDCI_0_2_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17(Decoder& dec, SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17_Tag_setup: {
        if (Decode_BetaOffsetsCrossPriSelDCI_0_2_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17(SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17& value)
{
    switch (value.tag) {
    case SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17_Tag_release:
        break;
    case SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17_Tag_setup:
        Free_BetaOffsetsCrossPriSelDCI_0_2_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UL_AccessConfigListDCI_0_1_r17：ASN.1 UL-AccessConfigListDCI-0-1-r17；源文件第 10401 行；SEQUENCE OF。
// Encode_UL_AccessConfigListDCI_0_1_r17 只读不分配；Decode_UL_AccessConfigListDCI_0_1_r17 可能 malloc（失败时内部已释放并清零）；Free_UL_AccessConfigListDCI_0_1_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UL_AccessConfigListDCI_0_1_r17(Encoder& enc, const UL_AccessConfigListDCI_0_1_r17& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 3u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_UL_AccessConfigListDCI_0_1_r17(Decoder& dec, UL_AccessConfigListDCI_0_1_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 3u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 3u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_UL_AccessConfigListDCI_0_1_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UL_AccessConfigListDCI_0_1_r17(UL_AccessConfigListDCI_0_1_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_UL_AccessConfigListDCI_0_1_r17：ASN.1 SetupRelease<UL-AccessConfigListDCI-0-1-r17>；源文件第 10348 行；CHOICE。
// Encode_SetupRelease_UL_AccessConfigListDCI_0_1_r17 只读不分配；Decode_SetupRelease_UL_AccessConfigListDCI_0_1_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_UL_AccessConfigListDCI_0_1_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_UL_AccessConfigListDCI_0_1_r17(Encoder& enc, const SetupRelease_UL_AccessConfigListDCI_0_1_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_UL_AccessConfigListDCI_0_1_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_UL_AccessConfigListDCI_0_1_r17_Tag_setup:
        Encode_UL_AccessConfigListDCI_0_1_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_UL_AccessConfigListDCI_0_1_r17(Decoder& dec, SetupRelease_UL_AccessConfigListDCI_0_1_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_UL_AccessConfigListDCI_0_1_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_UL_AccessConfigListDCI_0_1_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_UL_AccessConfigListDCI_0_1_r17_Tag_setup: {
        if (Decode_UL_AccessConfigListDCI_0_1_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_UL_AccessConfigListDCI_0_1_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_UL_AccessConfigListDCI_0_1_r17(SetupRelease_UL_AccessConfigListDCI_0_1_r17& value)
{
    switch (value.tag) {
    case SetupRelease_UL_AccessConfigListDCI_0_1_r17_Tag_release:
        break;
    case SetupRelease_UL_AccessConfigListDCI_0_1_r17_Tag_setup:
        Free_UL_AccessConfigListDCI_0_1_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MinSchedulingOffsetK2_Values_r17：ASN.1 MinSchedulingOffsetK2-Values-r17；源文件第 10380 行；SEQUENCE OF。
// Encode_MinSchedulingOffsetK2_Values_r17 只读不分配；Decode_MinSchedulingOffsetK2_Values_r17 可能 malloc（失败时内部已释放并清零）；Free_MinSchedulingOffsetK2_Values_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MinSchedulingOffsetK2_Values_r17(Encoder& enc, const MinSchedulingOffsetK2_Values_r17& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 2u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 64);
    }
    return enc.Error();
}

ErrorCode Decode_MinSchedulingOffsetK2_Values_r17(Decoder& dec, MinSchedulingOffsetK2_Values_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 2u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 2u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 64, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_MinSchedulingOffsetK2_Values_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MinSchedulingOffsetK2_Values_r17(MinSchedulingOffsetK2_Values_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_MinSchedulingOffsetK2_Values_r17：ASN.1 SetupRelease<MinSchedulingOffsetK2-Values-r17>；源文件第 10349 行；CHOICE。
// Encode_SetupRelease_MinSchedulingOffsetK2_Values_r17 只读不分配；Decode_SetupRelease_MinSchedulingOffsetK2_Values_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_MinSchedulingOffsetK2_Values_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_MinSchedulingOffsetK2_Values_r17(Encoder& enc, const SetupRelease_MinSchedulingOffsetK2_Values_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_MinSchedulingOffsetK2_Values_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_MinSchedulingOffsetK2_Values_r17_Tag_setup:
        Encode_MinSchedulingOffsetK2_Values_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_MinSchedulingOffsetK2_Values_r17(Decoder& dec, SetupRelease_MinSchedulingOffsetK2_Values_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_MinSchedulingOffsetK2_Values_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_MinSchedulingOffsetK2_Values_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_MinSchedulingOffsetK2_Values_r17_Tag_setup: {
        if (Decode_MinSchedulingOffsetK2_Values_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_MinSchedulingOffsetK2_Values_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_MinSchedulingOffsetK2_Values_r17(SetupRelease_MinSchedulingOffsetK2_Values_r17& value)
{
    switch (value.tag) {
    case SetupRelease_MinSchedulingOffsetK2_Values_r17_Tag_release:
        break;
    case SetupRelease_MinSchedulingOffsetK2_Values_r17_Tag_setup:
        Free_MinSchedulingOffsetK2_Values_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DMRS_BundlingPUSCH_Config_r17：ASN.1 DMRS-BundlingPUSCH-Config-r17；源文件第 6456 行；SEQUENCE。
// Encode_DMRS_BundlingPUSCH_Config_r17 只读不分配；Decode_DMRS_BundlingPUSCH_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_DMRS_BundlingPUSCH_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DMRS_BundlingPUSCH_Config_r17(Encoder& enc, const DMRS_BundlingPUSCH_Config_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_pusch_DMRS_Bundling_r17);
    enc.WriteBit(value.has_pusch_TimeDomainWindowLength_r17);
    enc.WriteBit(value.has_pusch_WindowRestart_r17);
    enc.WriteBit(value.has_pusch_FrequencyHoppingInterval_r17);
    if (value.has_pusch_DMRS_Bundling_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_DMRS_Bundling_r17), 0, 0);
    }
    if (value.has_pusch_TimeDomainWindowLength_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_TimeDomainWindowLength_r17), 2, 32);
    }
    if (value.has_pusch_WindowRestart_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_WindowRestart_r17), 0, 0);
    }
    if (value.has_pusch_FrequencyHoppingInterval_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_FrequencyHoppingInterval_r17), 0, 9);
    }
    return enc.Error();
}

ErrorCode Decode_DMRS_BundlingPUSCH_Config_r17(Decoder& dec, DMRS_BundlingPUSCH_Config_r17& value)
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
        value.pusch_DMRS_Bundling_r17 = (DMRS_BundlingPUSCH_Config_r17_Pusch_DMRS_Bundling_r17)0;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 32, tmp_value)) { goto fail; }
        value.pusch_TimeDomainWindowLength_r17 = (int64_t)tmp_value;
    }
    if (present_2) {
        value.pusch_WindowRestart_r17 = (DMRS_BundlingPUSCH_Config_r17_Pusch_WindowRestart_r17)0;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.pusch_FrequencyHoppingInterval_r17 = (DMRS_BundlingPUSCH_Config_r17_Pusch_FrequencyHoppingInterval_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DMRS_BundlingPUSCH_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DMRS_BundlingPUSCH_Config_r17(DMRS_BundlingPUSCH_Config_r17& value)
{
    if (value.has_pusch_DMRS_Bundling_r17) {
    }
    if (value.has_pusch_TimeDomainWindowLength_r17) {
    }
    if (value.has_pusch_WindowRestart_r17) {
    }
    if (value.has_pusch_FrequencyHoppingInterval_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
