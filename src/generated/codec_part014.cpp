/* ============================================================================
 * src/generated/codec_part014.cpp — 生成的编解码函数
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
// SPS_ConfigDeactivationState_r16：ASN.1 SPS-ConfigDeactivationState-r16；源文件第 4569 行；SEQUENCE OF。
// Encode_SPS_ConfigDeactivationState_r16 只读不分配；Decode_SPS_ConfigDeactivationState_r16 可能 malloc（失败时内部已释放并清零）；Free_SPS_ConfigDeactivationState_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SPS_ConfigDeactivationState_r16(Encoder& enc, const SPS_ConfigDeactivationState_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_SPS_ConfigDeactivationState_r16(Decoder& dec, SPS_ConfigDeactivationState_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SPS_ConfigIndex_r16*)std::malloc((std::size_t)value.count * sizeof(SPS_ConfigIndex_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SPS_ConfigIndex_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.items[i] = (SPS_ConfigIndex_r16)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_SPS_ConfigDeactivationState_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SPS_ConfigDeactivationState_r16(SPS_ConfigDeactivationState_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ConfiguredGrantConfigType2DeactivationStateList_r16：ASN.1 ConfiguredGrantConfigType2DeactivationStateList-r16；源文件第 4691 行；SEQUENCE OF。
// Encode_ConfiguredGrantConfigType2DeactivationStateList_r16 只读不分配；Decode_ConfiguredGrantConfigType2DeactivationStateList_r16 可能 malloc（失败时内部已释放并清零）；Free_ConfiguredGrantConfigType2DeactivationStateList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ConfiguredGrantConfigType2DeactivationStateList_r16(Encoder& enc, const ConfiguredGrantConfigType2DeactivationStateList_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_ConfiguredGrantConfigType2DeactivationState_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_ConfiguredGrantConfigType2DeactivationStateList_r16(Decoder& dec, ConfiguredGrantConfigType2DeactivationStateList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (ConfiguredGrantConfigType2DeactivationState_r16*)std::malloc((std::size_t)value.count * sizeof(ConfiguredGrantConfigType2DeactivationState_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(ConfiguredGrantConfigType2DeactivationState_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_ConfiguredGrantConfigType2DeactivationState_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_ConfiguredGrantConfigType2DeactivationStateList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ConfiguredGrantConfigType2DeactivationStateList_r16(ConfiguredGrantConfigType2DeactivationStateList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_ConfiguredGrantConfigType2DeactivationState_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DL_DataToUL_ACK_r16：ASN.1 DL-DataToUL-ACK-r16；源文件第 10107 行；SEQUENCE OF。
// Encode_DL_DataToUL_ACK_r16 只读不分配；Decode_DL_DataToUL_ACK_r16 可能 malloc（失败时内部已释放并清零）；Free_DL_DataToUL_ACK_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DL_DataToUL_ACK_r16(Encoder& enc, const DL_DataToUL_ACK_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), -1, 15);
    }
    return enc.Error();
}

ErrorCode Decode_DL_DataToUL_ACK_r16(Decoder& dec, DL_DataToUL_ACK_r16& value)
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
    if (!dec.ReadConstrainedInteger(-1, 15, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_DL_DataToUL_ACK_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DL_DataToUL_ACK_r16(DL_DataToUL_ACK_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_DL_DataToUL_ACK_r16：ASN.1 SetupRelease<DL-DataToUL-ACK-r16>；源文件第 9948 行；CHOICE。
// Encode_SetupRelease_DL_DataToUL_ACK_r16 只读不分配；Decode_SetupRelease_DL_DataToUL_ACK_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_DL_DataToUL_ACK_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_DL_DataToUL_ACK_r16(Encoder& enc, const SetupRelease_DL_DataToUL_ACK_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DL_DataToUL_ACK_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_DL_DataToUL_ACK_r16_Tag_setup:
        Encode_DL_DataToUL_ACK_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DL_DataToUL_ACK_r16(Decoder& dec, SetupRelease_DL_DataToUL_ACK_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DL_DataToUL_ACK_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DL_DataToUL_ACK_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DL_DataToUL_ACK_r16_Tag_setup: {
        if (Decode_DL_DataToUL_ACK_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DL_DataToUL_ACK_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DL_DataToUL_ACK_r16(SetupRelease_DL_DataToUL_ACK_r16& value)
{
    switch (value.tag) {
    case SetupRelease_DL_DataToUL_ACK_r16_Tag_release:
        break;
    case SetupRelease_DL_DataToUL_ACK_r16_Tag_setup:
        Free_DL_DataToUL_ACK_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UL_AccessConfigListDCI_1_1_r16：ASN.1 UL-AccessConfigListDCI-1-1-r16；源文件第 10117 行；SEQUENCE OF。
// Encode_UL_AccessConfigListDCI_1_1_r16 只读不分配；Decode_UL_AccessConfigListDCI_1_1_r16 可能 malloc（失败时内部已释放并清零）；Free_UL_AccessConfigListDCI_1_1_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UL_AccessConfigListDCI_1_1_r16(Encoder& enc, const UL_AccessConfigListDCI_1_1_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 15);
    }
    return enc.Error();
}

ErrorCode Decode_UL_AccessConfigListDCI_1_1_r16(Decoder& dec, UL_AccessConfigListDCI_1_1_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
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
    Free_UL_AccessConfigListDCI_1_1_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UL_AccessConfigListDCI_1_1_r16(UL_AccessConfigListDCI_1_1_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_UL_AccessConfigListDCI_1_1_r16：ASN.1 SetupRelease<UL-AccessConfigListDCI-1-1-r16>；源文件第 9949 行；CHOICE。
// Encode_SetupRelease_UL_AccessConfigListDCI_1_1_r16 只读不分配；Decode_SetupRelease_UL_AccessConfigListDCI_1_1_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_UL_AccessConfigListDCI_1_1_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_UL_AccessConfigListDCI_1_1_r16(Encoder& enc, const SetupRelease_UL_AccessConfigListDCI_1_1_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_UL_AccessConfigListDCI_1_1_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_UL_AccessConfigListDCI_1_1_r16_Tag_setup:
        Encode_UL_AccessConfigListDCI_1_1_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_UL_AccessConfigListDCI_1_1_r16(Decoder& dec, SetupRelease_UL_AccessConfigListDCI_1_1_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_UL_AccessConfigListDCI_1_1_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_UL_AccessConfigListDCI_1_1_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_UL_AccessConfigListDCI_1_1_r16_Tag_setup: {
        if (Decode_UL_AccessConfigListDCI_1_1_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_UL_AccessConfigListDCI_1_1_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_UL_AccessConfigListDCI_1_1_r16(SetupRelease_UL_AccessConfigListDCI_1_1_r16& value)
{
    switch (value.tag) {
    case SetupRelease_UL_AccessConfigListDCI_1_1_r16_Tag_release:
        break;
    case SetupRelease_UL_AccessConfigListDCI_1_1_r16_Tag_setup:
        Free_UL_AccessConfigListDCI_1_1_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16：ASN.1 subslotLengthForPUCCH-r16；源文件第 9950 行；CHOICE。
// Encode_PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16 只读不分配；Decode_PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16 可能 malloc（失败时内部已释放并清零）；Free_PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16(Encoder& enc, const PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_Tag_normalCP_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.normalCP_r16), 0, 1);
        break;
    case PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_Tag_extendedCP_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.extendedCP_r16), 0, 1);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16(Decoder& dec, PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_Tag)root_index;
    switch (value.tag) {
    case PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_Tag_normalCP_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.u.normalCP_r16 = (PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_NormalCP_r16)tmp_value;
        break;
    }
    case PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_Tag_extendedCP_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.u.extendedCP_r16 = (PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_ExtendedCP_r16)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16(PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16& value)
{
    switch (value.tag) {
    case PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_Tag_normalCP_r16:
        break;
    case PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_Tag_extendedCP_r16:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DL_DataToUL_ACK_DCI_1_2_r16：ASN.1 DL-DataToUL-ACK-DCI-1-2-r16；源文件第 10113 行；SEQUENCE OF。
// Encode_DL_DataToUL_ACK_DCI_1_2_r16 只读不分配；Decode_DL_DataToUL_ACK_DCI_1_2_r16 可能 malloc（失败时内部已释放并清零）；Free_DL_DataToUL_ACK_DCI_1_2_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DL_DataToUL_ACK_DCI_1_2_r16(Encoder& enc, const DL_DataToUL_ACK_DCI_1_2_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 15);
    }
    return enc.Error();
}

ErrorCode Decode_DL_DataToUL_ACK_DCI_1_2_r16(Decoder& dec, DL_DataToUL_ACK_DCI_1_2_r16& value)
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
    if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_DL_DataToUL_ACK_DCI_1_2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DL_DataToUL_ACK_DCI_1_2_r16(DL_DataToUL_ACK_DCI_1_2_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16：ASN.1 SetupRelease<DL-DataToUL-ACK-DCI-1-2-r16>；源文件第 9954 行；CHOICE。
// Encode_SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16 只读不分配；Decode_SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16(Encoder& enc, const SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16_Tag_setup:
        Encode_DL_DataToUL_ACK_DCI_1_2_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16(Decoder& dec, SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16_Tag_setup: {
        if (Decode_DL_DataToUL_ACK_DCI_1_2_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16(SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16& value)
{
    switch (value.tag) {
    case SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16_Tag_release:
        break;
    case SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16_Tag_setup:
        Free_DL_DataToUL_ACK_DCI_1_2_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SPS_PUCCH_AN_List_r16：ASN.1 SPS-PUCCH-AN-List-r16；源文件第 13019 行；SEQUENCE OF。
// Encode_SPS_PUCCH_AN_List_r16 只读不分配；Decode_SPS_PUCCH_AN_List_r16 可能 malloc（失败时内部已释放并清零）；Free_SPS_PUCCH_AN_List_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SPS_PUCCH_AN_List_r16(Encoder& enc, const SPS_PUCCH_AN_List_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SPS_PUCCH_AN_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SPS_PUCCH_AN_List_r16(Decoder& dec, SPS_PUCCH_AN_List_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SPS_PUCCH_AN_r16*)std::malloc((std::size_t)value.count * sizeof(SPS_PUCCH_AN_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SPS_PUCCH_AN_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SPS_PUCCH_AN_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SPS_PUCCH_AN_List_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SPS_PUCCH_AN_List_r16(SPS_PUCCH_AN_List_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SPS_PUCCH_AN_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SPS_PUCCH_AN_List_r16：ASN.1 SetupRelease<SPS-PUCCH-AN-List-r16>；源文件第 9969 行；CHOICE。
// Encode_SetupRelease_SPS_PUCCH_AN_List_r16 只读不分配；Decode_SetupRelease_SPS_PUCCH_AN_List_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SPS_PUCCH_AN_List_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SPS_PUCCH_AN_List_r16(Encoder& enc, const SetupRelease_SPS_PUCCH_AN_List_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SPS_PUCCH_AN_List_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_SPS_PUCCH_AN_List_r16_Tag_setup:
        Encode_SPS_PUCCH_AN_List_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SPS_PUCCH_AN_List_r16(Decoder& dec, SetupRelease_SPS_PUCCH_AN_List_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SPS_PUCCH_AN_List_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SPS_PUCCH_AN_List_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SPS_PUCCH_AN_List_r16_Tag_setup: {
        if (Decode_SPS_PUCCH_AN_List_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SPS_PUCCH_AN_List_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SPS_PUCCH_AN_List_r16(SetupRelease_SPS_PUCCH_AN_List_r16& value)
{
    switch (value.tag) {
    case SetupRelease_SPS_PUCCH_AN_List_r16_Tag_release:
        break;
    case SetupRelease_SPS_PUCCH_AN_List_r16_Tag_setup:
        Free_SPS_PUCCH_AN_List_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PUCCH_Config_ExtGroup1：ASN.1 PUCCH_Config_ExtGroup1；源文件第 9946 行；扩展添加组 [[ ]]。
// Encode_PUCCH_Config_ExtGroup1 只读不分配；Decode_PUCCH_Config_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_PUCCH_Config_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PUCCH_Config_ExtGroup1(Encoder& enc, const PUCCH_Config_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_resourceToAddModListExt_v1610);
    enc.WriteBit(value.has_dl_DataToUL_ACK_r16);
    enc.WriteBit(value.has_ul_AccessConfigListDCI_1_1_r16);
    enc.WriteBit(value.has_subslotLengthForPUCCH_r16);
    enc.WriteBit(value.has_dl_DataToUL_ACK_DCI_1_2_r16);
    enc.WriteBit(value.has_numberOfBitsForPUCCH_ResourceIndicatorDCI_1_2_r16);
    enc.WriteBit(value.has_dmrs_UplinkTransformPrecodingPUCCH_r16);
    enc.WriteBit(value.has_spatialRelationInfoToAddModListSizeExt_v1610);
    enc.WriteBit(value.has_spatialRelationInfoToReleaseListSizeExt_v1610);
    enc.WriteBit(value.has_spatialRelationInfoToAddModListExt_v1610);
    enc.WriteBit(value.has_spatialRelationInfoToReleaseListExt_v1610);
    enc.WriteBit(value.has_resourceGroupToAddModList_r16);
    enc.WriteBit(value.has_resourceGroupToReleaseList_r16);
    enc.WriteBit(value.has_sps_PUCCH_AN_List_r16);
    enc.WriteBit(value.has_schedulingRequestResourceToAddModListExt_v1610);
    if (value.has_resourceToAddModListExt_v1610) {
enc.WriteConstrainedLength(value.resourceToAddModListExt_v1610_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.resourceToAddModListExt_v1610_count; ++i) {
    Encode_PUCCH_ResourceExt_v1610(enc, value.resourceToAddModListExt_v1610_items[i]);
}
    }
    if (value.has_dl_DataToUL_ACK_r16) {
        Encode_SetupRelease_DL_DataToUL_ACK_r16(enc, value.dl_DataToUL_ACK_r16);
    }
    if (value.has_ul_AccessConfigListDCI_1_1_r16) {
        Encode_SetupRelease_UL_AccessConfigListDCI_1_1_r16(enc, value.ul_AccessConfigListDCI_1_1_r16);
    }
    if (value.has_subslotLengthForPUCCH_r16) {
        Encode_PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16(enc, value.subslotLengthForPUCCH_r16);
    }
    if (value.has_dl_DataToUL_ACK_DCI_1_2_r16) {
        Encode_SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16(enc, value.dl_DataToUL_ACK_DCI_1_2_r16);
    }
    if (value.has_numberOfBitsForPUCCH_ResourceIndicatorDCI_1_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.numberOfBitsForPUCCH_ResourceIndicatorDCI_1_2_r16), 0, 3);
    }
    if (value.has_dmrs_UplinkTransformPrecodingPUCCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_UplinkTransformPrecodingPUCCH_r16), 0, 0);
    }
    if (value.has_spatialRelationInfoToAddModListSizeExt_v1610) {
enc.WriteConstrainedLength(value.spatialRelationInfoToAddModListSizeExt_v1610_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.spatialRelationInfoToAddModListSizeExt_v1610_count; ++i) {
    Encode_PUCCH_SpatialRelationInfo(enc, value.spatialRelationInfoToAddModListSizeExt_v1610_items[i]);
}
    }
    if (value.has_spatialRelationInfoToReleaseListSizeExt_v1610) {
enc.WriteConstrainedLength(value.spatialRelationInfoToReleaseListSizeExt_v1610_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.spatialRelationInfoToReleaseListSizeExt_v1610_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.spatialRelationInfoToReleaseListSizeExt_v1610_items[i]), 1, 8);
}
    }
    if (value.has_spatialRelationInfoToAddModListExt_v1610) {
enc.WriteConstrainedLength(value.spatialRelationInfoToAddModListExt_v1610_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.spatialRelationInfoToAddModListExt_v1610_count; ++i) {
    Encode_PUCCH_SpatialRelationInfoExt_r16(enc, value.spatialRelationInfoToAddModListExt_v1610_items[i]);
}
    }
    if (value.has_spatialRelationInfoToReleaseListExt_v1610) {
enc.WriteConstrainedLength(value.spatialRelationInfoToReleaseListExt_v1610_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.spatialRelationInfoToReleaseListExt_v1610_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.spatialRelationInfoToReleaseListExt_v1610_items[i]), 1, 64);
}
    }
    if (value.has_resourceGroupToAddModList_r16) {
enc.WriteConstrainedLength(value.resourceGroupToAddModList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.resourceGroupToAddModList_r16_count; ++i) {
    Encode_PUCCH_ResourceGroup_r16(enc, value.resourceGroupToAddModList_r16_items[i]);
}
    }
    if (value.has_resourceGroupToReleaseList_r16) {
enc.WriteConstrainedLength(value.resourceGroupToReleaseList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.resourceGroupToReleaseList_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.resourceGroupToReleaseList_r16_items[i]), 0, 3);
}
    }
    if (value.has_sps_PUCCH_AN_List_r16) {
        Encode_SetupRelease_SPS_PUCCH_AN_List_r16(enc, value.sps_PUCCH_AN_List_r16);
    }
    if (value.has_schedulingRequestResourceToAddModListExt_v1610) {
enc.WriteConstrainedLength(value.schedulingRequestResourceToAddModListExt_v1610_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.schedulingRequestResourceToAddModListExt_v1610_count; ++i) {
    Encode_SchedulingRequestResourceConfigExt_v1610(enc, value.schedulingRequestResourceToAddModListExt_v1610_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_PUCCH_Config_ExtGroup1(Decoder& dec, PUCCH_Config_ExtGroup1& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.resourceToAddModListExt_v1610_count)) { goto fail; }
if (value.resourceToAddModListExt_v1610_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.resourceToAddModListExt_v1610_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.resourceToAddModListExt_v1610_count > 0u) {
    value.resourceToAddModListExt_v1610_items = (PUCCH_ResourceExt_v1610*)std::malloc((std::size_t)value.resourceToAddModListExt_v1610_count * sizeof(PUCCH_ResourceExt_v1610));
    if (value.resourceToAddModListExt_v1610_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.resourceToAddModListExt_v1610_items, 0, (std::size_t)value.resourceToAddModListExt_v1610_count * sizeof(PUCCH_ResourceExt_v1610));
}
for (std::uint32_t i = 0; i < value.resourceToAddModListExt_v1610_count; ++i) {
    if (Decode_PUCCH_ResourceExt_v1610(dec, value.resourceToAddModListExt_v1610_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
        if (Decode_SetupRelease_DL_DataToUL_ACK_r16(dec, value.dl_DataToUL_ACK_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SetupRelease_UL_AccessConfigListDCI_1_1_r16(dec, value.ul_AccessConfigListDCI_1_1_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16(dec, value.subslotLengthForPUCCH_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16(dec, value.dl_DataToUL_ACK_DCI_1_2_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.numberOfBitsForPUCCH_ResourceIndicatorDCI_1_2_r16 = (int64_t)tmp_value;
    }
    if (present_6) {
        value.dmrs_UplinkTransformPrecodingPUCCH_r16 = (PUCCH_Config_ExtGroup1_Dmrs_UplinkTransformPrecodingPUCCH_r16)0;
    }
    if (present_7) {
if (!dec.ReadConstrainedLength(0u, 0u, value.spatialRelationInfoToAddModListSizeExt_v1610_count)) { goto fail; }
if (value.spatialRelationInfoToAddModListSizeExt_v1610_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.spatialRelationInfoToAddModListSizeExt_v1610_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.spatialRelationInfoToAddModListSizeExt_v1610_count > 0u) {
    value.spatialRelationInfoToAddModListSizeExt_v1610_items = (PUCCH_SpatialRelationInfo*)std::malloc((std::size_t)value.spatialRelationInfoToAddModListSizeExt_v1610_count * sizeof(PUCCH_SpatialRelationInfo));
    if (value.spatialRelationInfoToAddModListSizeExt_v1610_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.spatialRelationInfoToAddModListSizeExt_v1610_items, 0, (std::size_t)value.spatialRelationInfoToAddModListSizeExt_v1610_count * sizeof(PUCCH_SpatialRelationInfo));
}
for (std::uint32_t i = 0; i < value.spatialRelationInfoToAddModListSizeExt_v1610_count; ++i) {
    if (Decode_PUCCH_SpatialRelationInfo(dec, value.spatialRelationInfoToAddModListSizeExt_v1610_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_8) {
if (!dec.ReadConstrainedLength(0u, 0u, value.spatialRelationInfoToReleaseListSizeExt_v1610_count)) { goto fail; }
if (value.spatialRelationInfoToReleaseListSizeExt_v1610_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.spatialRelationInfoToReleaseListSizeExt_v1610_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.spatialRelationInfoToReleaseListSizeExt_v1610_count > 0u) {
    value.spatialRelationInfoToReleaseListSizeExt_v1610_items = (PUCCH_SpatialRelationInfoId*)std::malloc((std::size_t)value.spatialRelationInfoToReleaseListSizeExt_v1610_count * sizeof(PUCCH_SpatialRelationInfoId));
    if (value.spatialRelationInfoToReleaseListSizeExt_v1610_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.spatialRelationInfoToReleaseListSizeExt_v1610_items, 0, (std::size_t)value.spatialRelationInfoToReleaseListSizeExt_v1610_count * sizeof(PUCCH_SpatialRelationInfoId));
}
for (std::uint32_t i = 0; i < value.spatialRelationInfoToReleaseListSizeExt_v1610_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
    value.spatialRelationInfoToReleaseListSizeExt_v1610_items[i] = (PUCCH_SpatialRelationInfoId)tmp_value;
}
    }
    if (present_9) {
if (!dec.ReadConstrainedLength(0u, 0u, value.spatialRelationInfoToAddModListExt_v1610_count)) { goto fail; }
if (value.spatialRelationInfoToAddModListExt_v1610_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.spatialRelationInfoToAddModListExt_v1610_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.spatialRelationInfoToAddModListExt_v1610_count > 0u) {
    value.spatialRelationInfoToAddModListExt_v1610_items = (PUCCH_SpatialRelationInfoExt_r16*)std::malloc((std::size_t)value.spatialRelationInfoToAddModListExt_v1610_count * sizeof(PUCCH_SpatialRelationInfoExt_r16));
    if (value.spatialRelationInfoToAddModListExt_v1610_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.spatialRelationInfoToAddModListExt_v1610_items, 0, (std::size_t)value.spatialRelationInfoToAddModListExt_v1610_count * sizeof(PUCCH_SpatialRelationInfoExt_r16));
}
for (std::uint32_t i = 0; i < value.spatialRelationInfoToAddModListExt_v1610_count; ++i) {
    if (Decode_PUCCH_SpatialRelationInfoExt_r16(dec, value.spatialRelationInfoToAddModListExt_v1610_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_10) {
if (!dec.ReadConstrainedLength(0u, 0u, value.spatialRelationInfoToReleaseListExt_v1610_count)) { goto fail; }
if (value.spatialRelationInfoToReleaseListExt_v1610_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.spatialRelationInfoToReleaseListExt_v1610_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.spatialRelationInfoToReleaseListExt_v1610_count > 0u) {
    value.spatialRelationInfoToReleaseListExt_v1610_items = (PUCCH_SpatialRelationInfoId_r16*)std::malloc((std::size_t)value.spatialRelationInfoToReleaseListExt_v1610_count * sizeof(PUCCH_SpatialRelationInfoId_r16));
    if (value.spatialRelationInfoToReleaseListExt_v1610_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.spatialRelationInfoToReleaseListExt_v1610_items, 0, (std::size_t)value.spatialRelationInfoToReleaseListExt_v1610_count * sizeof(PUCCH_SpatialRelationInfoId_r16));
}
for (std::uint32_t i = 0; i < value.spatialRelationInfoToReleaseListExt_v1610_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
    value.spatialRelationInfoToReleaseListExt_v1610_items[i] = (PUCCH_SpatialRelationInfoId_r16)tmp_value;
}
    }
    if (present_11) {
if (!dec.ReadConstrainedLength(0u, 0u, value.resourceGroupToAddModList_r16_count)) { goto fail; }
if (value.resourceGroupToAddModList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.resourceGroupToAddModList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.resourceGroupToAddModList_r16_count > 0u) {
    value.resourceGroupToAddModList_r16_items = (PUCCH_ResourceGroup_r16*)std::malloc((std::size_t)value.resourceGroupToAddModList_r16_count * sizeof(PUCCH_ResourceGroup_r16));
    if (value.resourceGroupToAddModList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.resourceGroupToAddModList_r16_items, 0, (std::size_t)value.resourceGroupToAddModList_r16_count * sizeof(PUCCH_ResourceGroup_r16));
}
for (std::uint32_t i = 0; i < value.resourceGroupToAddModList_r16_count; ++i) {
    if (Decode_PUCCH_ResourceGroup_r16(dec, value.resourceGroupToAddModList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_12) {
if (!dec.ReadConstrainedLength(0u, 0u, value.resourceGroupToReleaseList_r16_count)) { goto fail; }
if (value.resourceGroupToReleaseList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.resourceGroupToReleaseList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.resourceGroupToReleaseList_r16_count > 0u) {
    value.resourceGroupToReleaseList_r16_items = (PUCCH_ResourceGroupId_r16*)std::malloc((std::size_t)value.resourceGroupToReleaseList_r16_count * sizeof(PUCCH_ResourceGroupId_r16));
    if (value.resourceGroupToReleaseList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.resourceGroupToReleaseList_r16_items, 0, (std::size_t)value.resourceGroupToReleaseList_r16_count * sizeof(PUCCH_ResourceGroupId_r16));
}
for (std::uint32_t i = 0; i < value.resourceGroupToReleaseList_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
    value.resourceGroupToReleaseList_r16_items[i] = (PUCCH_ResourceGroupId_r16)tmp_value;
}
    }
    if (present_13) {
        if (Decode_SetupRelease_SPS_PUCCH_AN_List_r16(dec, value.sps_PUCCH_AN_List_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_14) {
if (!dec.ReadConstrainedLength(0u, 0u, value.schedulingRequestResourceToAddModListExt_v1610_count)) { goto fail; }
if (value.schedulingRequestResourceToAddModListExt_v1610_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.schedulingRequestResourceToAddModListExt_v1610_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.schedulingRequestResourceToAddModListExt_v1610_count > 0u) {
    value.schedulingRequestResourceToAddModListExt_v1610_items = (SchedulingRequestResourceConfigExt_v1610*)std::malloc((std::size_t)value.schedulingRequestResourceToAddModListExt_v1610_count * sizeof(SchedulingRequestResourceConfigExt_v1610));
    if (value.schedulingRequestResourceToAddModListExt_v1610_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.schedulingRequestResourceToAddModListExt_v1610_items, 0, (std::size_t)value.schedulingRequestResourceToAddModListExt_v1610_count * sizeof(SchedulingRequestResourceConfigExt_v1610));
}
for (std::uint32_t i = 0; i < value.schedulingRequestResourceToAddModListExt_v1610_count; ++i) {
    if (Decode_SchedulingRequestResourceConfigExt_v1610(dec, value.schedulingRequestResourceToAddModListExt_v1610_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_Config_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_Config_ExtGroup1(PUCCH_Config_ExtGroup1& value)
{
    if (value.has_resourceToAddModListExt_v1610) {
        if (value.resourceToAddModListExt_v1610_items != nullptr) {
            for (std::uint32_t i = 0; i < value.resourceToAddModListExt_v1610_count; ++i) {
                Free_PUCCH_ResourceExt_v1610(value.resourceToAddModListExt_v1610_items[i]);
            }
            std::free(value.resourceToAddModListExt_v1610_items);
            value.resourceToAddModListExt_v1610_items = nullptr;
        }
        value.resourceToAddModListExt_v1610_count = 0;
    }
    if (value.has_dl_DataToUL_ACK_r16) {
        Free_SetupRelease_DL_DataToUL_ACK_r16(value.dl_DataToUL_ACK_r16);
    }
    if (value.has_ul_AccessConfigListDCI_1_1_r16) {
        Free_SetupRelease_UL_AccessConfigListDCI_1_1_r16(value.ul_AccessConfigListDCI_1_1_r16);
    }
    if (value.has_subslotLengthForPUCCH_r16) {
        Free_PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16(value.subslotLengthForPUCCH_r16);
    }
    if (value.has_dl_DataToUL_ACK_DCI_1_2_r16) {
        Free_SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16(value.dl_DataToUL_ACK_DCI_1_2_r16);
    }
    if (value.has_numberOfBitsForPUCCH_ResourceIndicatorDCI_1_2_r16) {
    }
    if (value.has_dmrs_UplinkTransformPrecodingPUCCH_r16) {
    }
    if (value.has_spatialRelationInfoToAddModListSizeExt_v1610) {
        if (value.spatialRelationInfoToAddModListSizeExt_v1610_items != nullptr) {
            for (std::uint32_t i = 0; i < value.spatialRelationInfoToAddModListSizeExt_v1610_count; ++i) {
                Free_PUCCH_SpatialRelationInfo(value.spatialRelationInfoToAddModListSizeExt_v1610_items[i]);
            }
            std::free(value.spatialRelationInfoToAddModListSizeExt_v1610_items);
            value.spatialRelationInfoToAddModListSizeExt_v1610_items = nullptr;
        }
        value.spatialRelationInfoToAddModListSizeExt_v1610_count = 0;
    }
    if (value.has_spatialRelationInfoToReleaseListSizeExt_v1610) {
        if (value.spatialRelationInfoToReleaseListSizeExt_v1610_items != nullptr) {
            for (std::uint32_t i = 0; i < value.spatialRelationInfoToReleaseListSizeExt_v1610_count; ++i) {
            }
            std::free(value.spatialRelationInfoToReleaseListSizeExt_v1610_items);
            value.spatialRelationInfoToReleaseListSizeExt_v1610_items = nullptr;
        }
        value.spatialRelationInfoToReleaseListSizeExt_v1610_count = 0;
    }
    if (value.has_spatialRelationInfoToAddModListExt_v1610) {
        if (value.spatialRelationInfoToAddModListExt_v1610_items != nullptr) {
            for (std::uint32_t i = 0; i < value.spatialRelationInfoToAddModListExt_v1610_count; ++i) {
                Free_PUCCH_SpatialRelationInfoExt_r16(value.spatialRelationInfoToAddModListExt_v1610_items[i]);
            }
            std::free(value.spatialRelationInfoToAddModListExt_v1610_items);
            value.spatialRelationInfoToAddModListExt_v1610_items = nullptr;
        }
        value.spatialRelationInfoToAddModListExt_v1610_count = 0;
    }
    if (value.has_spatialRelationInfoToReleaseListExt_v1610) {
        if (value.spatialRelationInfoToReleaseListExt_v1610_items != nullptr) {
            for (std::uint32_t i = 0; i < value.spatialRelationInfoToReleaseListExt_v1610_count; ++i) {
            }
            std::free(value.spatialRelationInfoToReleaseListExt_v1610_items);
            value.spatialRelationInfoToReleaseListExt_v1610_items = nullptr;
        }
        value.spatialRelationInfoToReleaseListExt_v1610_count = 0;
    }
    if (value.has_resourceGroupToAddModList_r16) {
        if (value.resourceGroupToAddModList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.resourceGroupToAddModList_r16_count; ++i) {
                Free_PUCCH_ResourceGroup_r16(value.resourceGroupToAddModList_r16_items[i]);
            }
            std::free(value.resourceGroupToAddModList_r16_items);
            value.resourceGroupToAddModList_r16_items = nullptr;
        }
        value.resourceGroupToAddModList_r16_count = 0;
    }
    if (value.has_resourceGroupToReleaseList_r16) {
        if (value.resourceGroupToReleaseList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.resourceGroupToReleaseList_r16_count; ++i) {
            }
            std::free(value.resourceGroupToReleaseList_r16_items);
            value.resourceGroupToReleaseList_r16_items = nullptr;
        }
        value.resourceGroupToReleaseList_r16_count = 0;
    }
    if (value.has_sps_PUCCH_AN_List_r16) {
        Free_SetupRelease_SPS_PUCCH_AN_List_r16(value.sps_PUCCH_AN_List_r16);
    }
    if (value.has_schedulingRequestResourceToAddModListExt_v1610) {
        if (value.schedulingRequestResourceToAddModListExt_v1610_items != nullptr) {
            for (std::uint32_t i = 0; i < value.schedulingRequestResourceToAddModListExt_v1610_count; ++i) {
                Free_SchedulingRequestResourceConfigExt_v1610(value.schedulingRequestResourceToAddModListExt_v1610_items[i]);
            }
            std::free(value.schedulingRequestResourceToAddModListExt_v1610_items);
            value.schedulingRequestResourceToAddModListExt_v1610_items = nullptr;
        }
        value.schedulingRequestResourceToAddModListExt_v1610_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PUCCH_FormatConfig：ASN.1 PUCCH-FormatConfig；源文件第 9998 行；SEQUENCE。
// Encode_PUCCH_FormatConfig 只读不分配；Decode_PUCCH_FormatConfig 可能 malloc（失败时内部已释放并清零）；Free_PUCCH_FormatConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PUCCH_FormatConfig(Encoder& enc, const PUCCH_FormatConfig& value)
{
    (void)value;
    enc.WriteBit(value.has_interslotFrequencyHopping);
    enc.WriteBit(value.has_additionalDMRS);
    enc.WriteBit(value.has_maxCodeRate);
    enc.WriteBit(value.has_nrofSlots);
    enc.WriteBit(value.has_pi2BPSK);
    enc.WriteBit(value.has_simultaneousHARQ_ACK_CSI);
    if (value.has_interslotFrequencyHopping) {
        enc.WriteConstrainedInteger((std::int64_t)(value.interslotFrequencyHopping), 0, 0);
    }
    if (value.has_additionalDMRS) {
        enc.WriteConstrainedInteger((std::int64_t)(value.additionalDMRS), 0, 0);
    }
    if (value.has_maxCodeRate) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxCodeRate), 0, 6);
    }
    if (value.has_nrofSlots) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrofSlots), 0, 2);
    }
    if (value.has_pi2BPSK) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pi2BPSK), 0, 0);
    }
    if (value.has_simultaneousHARQ_ACK_CSI) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousHARQ_ACK_CSI), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PUCCH_FormatConfig(Decoder& dec, PUCCH_FormatConfig& value)
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
        value.interslotFrequencyHopping = (PUCCH_FormatConfig_InterslotFrequencyHopping)0;
    }
    if (present_1) {
        value.additionalDMRS = (PUCCH_FormatConfig_AdditionalDMRS)0;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maxCodeRate = (PUCCH_MaxCodeRate)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.nrofSlots = (PUCCH_FormatConfig_NrofSlots)tmp_value;
    }
    if (present_4) {
        value.pi2BPSK = (PUCCH_FormatConfig_Pi2BPSK)0;
    }
    if (present_5) {
        value.simultaneousHARQ_ACK_CSI = (PUCCH_FormatConfig_SimultaneousHARQ_ACK_CSI)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_FormatConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_FormatConfig(PUCCH_FormatConfig& value)
{
    if (value.has_interslotFrequencyHopping) {
    }
    if (value.has_additionalDMRS) {
    }
    if (value.has_maxCodeRate) {
    }
    if (value.has_nrofSlots) {
    }
    if (value.has_pi2BPSK) {
    }
    if (value.has_simultaneousHARQ_ACK_CSI) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PUCCH_FormatConfig：ASN.1 SetupRelease<PUCCH-FormatConfig>；源文件第 9930 行；CHOICE。
// Encode_SetupRelease_PUCCH_FormatConfig 只读不分配；Decode_SetupRelease_PUCCH_FormatConfig 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PUCCH_FormatConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PUCCH_FormatConfig(Encoder& enc, const SetupRelease_PUCCH_FormatConfig& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PUCCH_FormatConfig_Tag_release:
        (void)0;
        break;
    case SetupRelease_PUCCH_FormatConfig_Tag_setup:
        Encode_PUCCH_FormatConfig(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PUCCH_FormatConfig(Decoder& dec, SetupRelease_PUCCH_FormatConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PUCCH_FormatConfig_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PUCCH_FormatConfig_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PUCCH_FormatConfig_Tag_setup: {
        if (Decode_PUCCH_FormatConfig(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PUCCH_FormatConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PUCCH_FormatConfig(SetupRelease_PUCCH_FormatConfig& value)
{
    switch (value.tag) {
    case SetupRelease_PUCCH_FormatConfig_Tag_release:
        break;
    case SetupRelease_PUCCH_FormatConfig_Tag_setup:
        Free_PUCCH_FormatConfig(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PUCCH_FormatConfigExt_r17：ASN.1 PUCCH-FormatConfigExt-r17；源文件第 10007 行；SEQUENCE。
// Encode_PUCCH_FormatConfigExt_r17 只读不分配；Decode_PUCCH_FormatConfigExt_r17 可能 malloc（失败时内部已释放并清零）；Free_PUCCH_FormatConfigExt_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PUCCH_FormatConfigExt_r17(Encoder& enc, const PUCCH_FormatConfigExt_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_maxCodeRateLP_r17);
    if (value.has_maxCodeRateLP_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxCodeRateLP_r17), 0, 6);
    }
    return enc.Error();
}

ErrorCode Decode_PUCCH_FormatConfigExt_r17(Decoder& dec, PUCCH_FormatConfigExt_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maxCodeRateLP_r17 = (PUCCH_MaxCodeRate)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_FormatConfigExt_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_FormatConfigExt_r17(PUCCH_FormatConfigExt_r17& value)
{
    if (value.has_maxCodeRateLP_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PUCCH_FormatConfigExt_r17：ASN.1 SetupRelease<PUCCH-FormatConfigExt-r17>；源文件第 9975 行；CHOICE。
// Encode_SetupRelease_PUCCH_FormatConfigExt_r17 只读不分配；Decode_SetupRelease_PUCCH_FormatConfigExt_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PUCCH_FormatConfigExt_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PUCCH_FormatConfigExt_r17(Encoder& enc, const SetupRelease_PUCCH_FormatConfigExt_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PUCCH_FormatConfigExt_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_PUCCH_FormatConfigExt_r17_Tag_setup:
        Encode_PUCCH_FormatConfigExt_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PUCCH_FormatConfigExt_r17(Decoder& dec, SetupRelease_PUCCH_FormatConfigExt_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PUCCH_FormatConfigExt_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PUCCH_FormatConfigExt_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PUCCH_FormatConfigExt_r17_Tag_setup: {
        if (Decode_PUCCH_FormatConfigExt_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PUCCH_FormatConfigExt_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PUCCH_FormatConfigExt_r17(SetupRelease_PUCCH_FormatConfigExt_r17& value)
{
    switch (value.tag) {
    case SetupRelease_PUCCH_FormatConfigExt_r17_Tag_release:
        break;
    case SetupRelease_PUCCH_FormatConfigExt_r17_Tag_setup:
        Free_PUCCH_FormatConfigExt_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UL_AccessConfigListDCI_1_2_r17：ASN.1 UL-AccessConfigListDCI-1-2-r17；源文件第 10119 行；SEQUENCE OF。
// Encode_UL_AccessConfigListDCI_1_2_r17 只读不分配；Decode_UL_AccessConfigListDCI_1_2_r17 可能 malloc（失败时内部已释放并清零）；Free_UL_AccessConfigListDCI_1_2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UL_AccessConfigListDCI_1_2_r17(Encoder& enc, const UL_AccessConfigListDCI_1_2_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 15);
    }
    return enc.Error();
}

ErrorCode Decode_UL_AccessConfigListDCI_1_2_r17(Decoder& dec, UL_AccessConfigListDCI_1_2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
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
    Free_UL_AccessConfigListDCI_1_2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UL_AccessConfigListDCI_1_2_r17(UL_AccessConfigListDCI_1_2_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_UL_AccessConfigListDCI_1_2_r17：ASN.1 SetupRelease<UL-AccessConfigListDCI-1-2-r17>；源文件第 9978 行；CHOICE。
// Encode_SetupRelease_UL_AccessConfigListDCI_1_2_r17 只读不分配；Decode_SetupRelease_UL_AccessConfigListDCI_1_2_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_UL_AccessConfigListDCI_1_2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_UL_AccessConfigListDCI_1_2_r17(Encoder& enc, const SetupRelease_UL_AccessConfigListDCI_1_2_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_UL_AccessConfigListDCI_1_2_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_UL_AccessConfigListDCI_1_2_r17_Tag_setup:
        Encode_UL_AccessConfigListDCI_1_2_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_UL_AccessConfigListDCI_1_2_r17(Decoder& dec, SetupRelease_UL_AccessConfigListDCI_1_2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_UL_AccessConfigListDCI_1_2_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_UL_AccessConfigListDCI_1_2_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_UL_AccessConfigListDCI_1_2_r17_Tag_setup: {
        if (Decode_UL_AccessConfigListDCI_1_2_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_UL_AccessConfigListDCI_1_2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_UL_AccessConfigListDCI_1_2_r17(SetupRelease_UL_AccessConfigListDCI_1_2_r17& value)
{
    switch (value.tag) {
    case SetupRelease_UL_AccessConfigListDCI_1_2_r17_Tag_release:
        break;
    case SetupRelease_UL_AccessConfigListDCI_1_2_r17_Tag_setup:
        Free_UL_AccessConfigListDCI_1_2_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DL_DataToUL_ACK_r17：ASN.1 DL-DataToUL-ACK-r17；源文件第 10109 行；SEQUENCE OF。
// Encode_DL_DataToUL_ACK_r17 只读不分配；Decode_DL_DataToUL_ACK_r17 可能 malloc（失败时内部已释放并清零）；Free_DL_DataToUL_ACK_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DL_DataToUL_ACK_r17(Encoder& enc, const DL_DataToUL_ACK_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), -1, 127);
    }
    return enc.Error();
}

ErrorCode Decode_DL_DataToUL_ACK_r17(Decoder& dec, DL_DataToUL_ACK_r17& value)
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
    if (!dec.ReadConstrainedInteger(-1, 127, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_DL_DataToUL_ACK_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DL_DataToUL_ACK_r17(DL_DataToUL_ACK_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_DL_DataToUL_ACK_r17：ASN.1 SetupRelease<DL-DataToUL-ACK-r17>；源文件第 9986 行；CHOICE。
// Encode_SetupRelease_DL_DataToUL_ACK_r17 只读不分配；Decode_SetupRelease_DL_DataToUL_ACK_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_DL_DataToUL_ACK_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_DL_DataToUL_ACK_r17(Encoder& enc, const SetupRelease_DL_DataToUL_ACK_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DL_DataToUL_ACK_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_DL_DataToUL_ACK_r17_Tag_setup:
        Encode_DL_DataToUL_ACK_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DL_DataToUL_ACK_r17(Decoder& dec, SetupRelease_DL_DataToUL_ACK_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DL_DataToUL_ACK_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DL_DataToUL_ACK_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DL_DataToUL_ACK_r17_Tag_setup: {
        if (Decode_DL_DataToUL_ACK_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DL_DataToUL_ACK_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DL_DataToUL_ACK_r17(SetupRelease_DL_DataToUL_ACK_r17& value)
{
    switch (value.tag) {
    case SetupRelease_DL_DataToUL_ACK_r17_Tag_release:
        break;
    case SetupRelease_DL_DataToUL_ACK_r17_Tag_setup:
        Free_DL_DataToUL_ACK_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DL_DataToUL_ACK_DCI_1_2_r17：ASN.1 DL-DataToUL-ACK-DCI-1-2-r17；源文件第 10115 行；SEQUENCE OF。
// Encode_DL_DataToUL_ACK_DCI_1_2_r17 只读不分配；Decode_DL_DataToUL_ACK_DCI_1_2_r17 可能 malloc（失败时内部已释放并清零）；Free_DL_DataToUL_ACK_DCI_1_2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DL_DataToUL_ACK_DCI_1_2_r17(Encoder& enc, const DL_DataToUL_ACK_DCI_1_2_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 127);
    }
    return enc.Error();
}

ErrorCode Decode_DL_DataToUL_ACK_DCI_1_2_r17(Decoder& dec, DL_DataToUL_ACK_DCI_1_2_r17& value)
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
    if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_DL_DataToUL_ACK_DCI_1_2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DL_DataToUL_ACK_DCI_1_2_r17(DL_DataToUL_ACK_DCI_1_2_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17：ASN.1 SetupRelease<DL-DataToUL-ACK-DCI-1-2-r17>；源文件第 9987 行；CHOICE。
// Encode_SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17 只读不分配；Decode_SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17(Encoder& enc, const SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17_Tag_setup:
        Encode_DL_DataToUL_ACK_DCI_1_2_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17(Decoder& dec, SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17_Tag_setup: {
        if (Decode_DL_DataToUL_ACK_DCI_1_2_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17(SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17& value)
{
    switch (value.tag) {
    case SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17_Tag_release:
        break;
    case SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17_Tag_setup:
        Free_DL_DataToUL_ACK_DCI_1_2_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UL_AccessConfigListDCI_1_1_r17：ASN.1 UL-AccessConfigListDCI-1-1-r17；源文件第 10121 行；SEQUENCE OF。
// Encode_UL_AccessConfigListDCI_1_1_r17 只读不分配；Decode_UL_AccessConfigListDCI_1_1_r17 可能 malloc（失败时内部已释放并清零）；Free_UL_AccessConfigListDCI_1_1_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UL_AccessConfigListDCI_1_1_r17(Encoder& enc, const UL_AccessConfigListDCI_1_1_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 3u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_UL_AccessConfigListDCI_1_1_r17(Decoder& dec, UL_AccessConfigListDCI_1_1_r17& value)
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
    Free_UL_AccessConfigListDCI_1_1_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UL_AccessConfigListDCI_1_1_r17(UL_AccessConfigListDCI_1_1_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_UL_AccessConfigListDCI_1_1_r17：ASN.1 SetupRelease<UL-AccessConfigListDCI-1-1-r17>；源文件第 9988 行；CHOICE。
// Encode_SetupRelease_UL_AccessConfigListDCI_1_1_r17 只读不分配；Decode_SetupRelease_UL_AccessConfigListDCI_1_1_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_UL_AccessConfigListDCI_1_1_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_UL_AccessConfigListDCI_1_1_r17(Encoder& enc, const SetupRelease_UL_AccessConfigListDCI_1_1_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_UL_AccessConfigListDCI_1_1_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_UL_AccessConfigListDCI_1_1_r17_Tag_setup:
        Encode_UL_AccessConfigListDCI_1_1_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_UL_AccessConfigListDCI_1_1_r17(Decoder& dec, SetupRelease_UL_AccessConfigListDCI_1_1_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_UL_AccessConfigListDCI_1_1_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_UL_AccessConfigListDCI_1_1_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_UL_AccessConfigListDCI_1_1_r17_Tag_setup: {
        if (Decode_UL_AccessConfigListDCI_1_1_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_UL_AccessConfigListDCI_1_1_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_UL_AccessConfigListDCI_1_1_r17(SetupRelease_UL_AccessConfigListDCI_1_1_r17& value)
{
    switch (value.tag) {
    case SetupRelease_UL_AccessConfigListDCI_1_1_r17_Tag_release:
        break;
    case SetupRelease_UL_AccessConfigListDCI_1_1_r17_Tag_setup:
        Free_UL_AccessConfigListDCI_1_1_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DMRS_BundlingPUCCH_Config_r17：ASN.1 DMRS-BundlingPUCCH-Config-r17；源文件第 6445 行；SEQUENCE。
// Encode_DMRS_BundlingPUCCH_Config_r17 只读不分配；Decode_DMRS_BundlingPUCCH_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_DMRS_BundlingPUCCH_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DMRS_BundlingPUCCH_Config_r17(Encoder& enc, const DMRS_BundlingPUCCH_Config_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_pucch_DMRS_Bundling_r17);
    enc.WriteBit(value.has_pucch_TimeDomainWindowLength_r17);
    enc.WriteBit(value.has_pucch_WindowRestart_r17);
    enc.WriteBit(value.has_pucch_FrequencyHoppingInterval_r17);
    if (value.has_pucch_DMRS_Bundling_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_DMRS_Bundling_r17), 0, 0);
    }
    if (value.has_pucch_TimeDomainWindowLength_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_TimeDomainWindowLength_r17), 2, 8);
    }
    if (value.has_pucch_WindowRestart_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_WindowRestart_r17), 0, 0);
    }
    if (value.has_pucch_FrequencyHoppingInterval_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_FrequencyHoppingInterval_r17), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_DMRS_BundlingPUCCH_Config_r17(Decoder& dec, DMRS_BundlingPUCCH_Config_r17& value)
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
        value.pucch_DMRS_Bundling_r17 = (DMRS_BundlingPUCCH_Config_r17_Pucch_DMRS_Bundling_r17)0;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 8, tmp_value)) { goto fail; }
        value.pucch_TimeDomainWindowLength_r17 = (int64_t)tmp_value;
    }
    if (present_2) {
        value.pucch_WindowRestart_r17 = (DMRS_BundlingPUCCH_Config_r17_Pucch_WindowRestart_r17)0;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.pucch_FrequencyHoppingInterval_r17 = (DMRS_BundlingPUCCH_Config_r17_Pucch_FrequencyHoppingInterval_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DMRS_BundlingPUCCH_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DMRS_BundlingPUCCH_Config_r17(DMRS_BundlingPUCCH_Config_r17& value)
{
    if (value.has_pucch_DMRS_Bundling_r17) {
    }
    if (value.has_pucch_TimeDomainWindowLength_r17) {
    }
    if (value.has_pucch_WindowRestart_r17) {
    }
    if (value.has_pucch_FrequencyHoppingInterval_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_DMRS_BundlingPUCCH_Config_r17：ASN.1 SetupRelease<DMRS-BundlingPUCCH-Config-r17>；源文件第 9991 行；CHOICE。
// Encode_SetupRelease_DMRS_BundlingPUCCH_Config_r17 只读不分配；Decode_SetupRelease_DMRS_BundlingPUCCH_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_DMRS_BundlingPUCCH_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_DMRS_BundlingPUCCH_Config_r17(Encoder& enc, const SetupRelease_DMRS_BundlingPUCCH_Config_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DMRS_BundlingPUCCH_Config_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_DMRS_BundlingPUCCH_Config_r17_Tag_setup:
        Encode_DMRS_BundlingPUCCH_Config_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DMRS_BundlingPUCCH_Config_r17(Decoder& dec, SetupRelease_DMRS_BundlingPUCCH_Config_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DMRS_BundlingPUCCH_Config_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DMRS_BundlingPUCCH_Config_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DMRS_BundlingPUCCH_Config_r17_Tag_setup: {
        if (Decode_DMRS_BundlingPUCCH_Config_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DMRS_BundlingPUCCH_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DMRS_BundlingPUCCH_Config_r17(SetupRelease_DMRS_BundlingPUCCH_Config_r17& value)
{
    switch (value.tag) {
    case SetupRelease_DMRS_BundlingPUCCH_Config_r17_Tag_release:
        break;
    case SetupRelease_DMRS_BundlingPUCCH_Config_r17_Tag_setup:
        Free_DMRS_BundlingPUCCH_Config_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DL_DataToUL_ACK_v1700：ASN.1 DL-DataToUL-ACK-v1700；源文件第 10111 行；SEQUENCE OF。
// Encode_DL_DataToUL_ACK_v1700 只读不分配；Decode_DL_DataToUL_ACK_v1700 可能 malloc（失败时内部已释放并清零）；Free_DL_DataToUL_ACK_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DL_DataToUL_ACK_v1700(Encoder& enc, const DL_DataToUL_ACK_v1700& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 16, 31);
    }
    return enc.Error();
}

ErrorCode Decode_DL_DataToUL_ACK_v1700(Decoder& dec, DL_DataToUL_ACK_v1700& value)
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
    if (!dec.ReadConstrainedInteger(16, 31, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_DL_DataToUL_ACK_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DL_DataToUL_ACK_v1700(DL_DataToUL_ACK_v1700& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_DL_DataToUL_ACK_v1700：ASN.1 SetupRelease<DL-DataToUL-ACK-v1700>；源文件第 9992 行；CHOICE。
// Encode_SetupRelease_DL_DataToUL_ACK_v1700 只读不分配；Decode_SetupRelease_DL_DataToUL_ACK_v1700 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_DL_DataToUL_ACK_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_DL_DataToUL_ACK_v1700(Encoder& enc, const SetupRelease_DL_DataToUL_ACK_v1700& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DL_DataToUL_ACK_v1700_Tag_release:
        (void)0;
        break;
    case SetupRelease_DL_DataToUL_ACK_v1700_Tag_setup:
        Encode_DL_DataToUL_ACK_v1700(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DL_DataToUL_ACK_v1700(Decoder& dec, SetupRelease_DL_DataToUL_ACK_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DL_DataToUL_ACK_v1700_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DL_DataToUL_ACK_v1700_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DL_DataToUL_ACK_v1700_Tag_setup: {
        if (Decode_DL_DataToUL_ACK_v1700(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DL_DataToUL_ACK_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DL_DataToUL_ACK_v1700(SetupRelease_DL_DataToUL_ACK_v1700& value)
{
    switch (value.tag) {
    case SetupRelease_DL_DataToUL_ACK_v1700_Tag_release:
        break;
    case SetupRelease_DL_DataToUL_ACK_v1700_Tag_setup:
        Free_DL_DataToUL_ACK_v1700(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DL_DataToUL_ACK_MulticastDCI_Format4_1_r17：ASN.1 DL-DataToUL-ACK-MulticastDCI-Format4-1-r17；源文件第 10123 行；SEQUENCE OF。
// Encode_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17 只读不分配；Decode_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17 可能 malloc（失败时内部已释放并清零）；Free_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17(Encoder& enc, const DL_DataToUL_ACK_MulticastDCI_Format4_1_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 15);
    }
    return enc.Error();
}

ErrorCode Decode_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17(Decoder& dec, DL_DataToUL_ACK_MulticastDCI_Format4_1_r17& value)
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
    if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17(DL_DataToUL_ACK_MulticastDCI_Format4_1_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17：ASN.1 SetupRelease<DL-DataToUL-ACK-MulticastDCI-Format4-1-r17>；源文件第 9993 行；CHOICE。
// Encode_SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17 只读不分配；Decode_SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17(Encoder& enc, const SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17_Tag_setup:
        Encode_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17(Decoder& dec, SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17_Tag_setup: {
        if (Decode_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17(SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17& value)
{
    switch (value.tag) {
    case SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17_Tag_release:
        break;
    case SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17_Tag_setup:
        Free_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PUCCH_Config_ExtGroup2：ASN.1 PUCCH_Config_ExtGroup2；源文件第 9973 行；扩展添加组 [[ ]]。
// Encode_PUCCH_Config_ExtGroup2 只读不分配；Decode_PUCCH_Config_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_PUCCH_Config_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PUCCH_Config_ExtGroup2(Encoder& enc, const PUCCH_Config_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_format0_r17);
    enc.WriteBit(value.has_format2Ext_r17);
    enc.WriteBit(value.has_format3Ext_r17);
    enc.WriteBit(value.has_format4Ext_r17);
    enc.WriteBit(value.has_ul_AccessConfigListDCI_1_2_r17);
    enc.WriteBit(value.has_mappingPattern_r17);
    enc.WriteBit(value.has_powerControlSetInfoToAddModList_r17);
    enc.WriteBit(value.has_powerControlSetInfoToReleaseList_r17);
    enc.WriteBit(value.has_secondTPCFieldDCI_1_1_r17);
    enc.WriteBit(value.has_secondTPCFieldDCI_1_2_r17);
    enc.WriteBit(value.has_dl_DataToUL_ACK_r17);
    enc.WriteBit(value.has_dl_DataToUL_ACK_DCI_1_2_r17);
    enc.WriteBit(value.has_ul_AccessConfigListDCI_1_1_r17);
    enc.WriteBit(value.has_schedulingRequestResourceToAddModListExt_v1700);
    enc.WriteBit(value.has_dmrs_BundlingPUCCH_Config_r17);
    enc.WriteBit(value.has_dl_DataToUL_ACK_v1700);
    enc.WriteBit(value.has_dl_DataToUL_ACK_MulticastDCI_Format4_1_r17);
    enc.WriteBit(value.has_sps_PUCCH_AN_ListMulticast_r17);
    if (value.has_format0_r17) {
        Encode_SetupRelease_PUCCH_FormatConfig(enc, value.format0_r17);
    }
    if (value.has_format2Ext_r17) {
        Encode_SetupRelease_PUCCH_FormatConfigExt_r17(enc, value.format2Ext_r17);
    }
    if (value.has_format3Ext_r17) {
        Encode_SetupRelease_PUCCH_FormatConfigExt_r17(enc, value.format3Ext_r17);
    }
    if (value.has_format4Ext_r17) {
        Encode_SetupRelease_PUCCH_FormatConfigExt_r17(enc, value.format4Ext_r17);
    }
    if (value.has_ul_AccessConfigListDCI_1_2_r17) {
        Encode_SetupRelease_UL_AccessConfigListDCI_1_2_r17(enc, value.ul_AccessConfigListDCI_1_2_r17);
    }
    if (value.has_mappingPattern_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mappingPattern_r17), 0, 1);
    }
    if (value.has_powerControlSetInfoToAddModList_r17) {
enc.WriteConstrainedLength(value.powerControlSetInfoToAddModList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.powerControlSetInfoToAddModList_r17_count; ++i) {
    Encode_PUCCH_PowerControlSetInfo_r17(enc, value.powerControlSetInfoToAddModList_r17_items[i]);
}
    }
    if (value.has_powerControlSetInfoToReleaseList_r17) {
enc.WriteConstrainedLength(value.powerControlSetInfoToReleaseList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.powerControlSetInfoToReleaseList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.powerControlSetInfoToReleaseList_r17_items[i]), 1, 8);
}
    }
    if (value.has_secondTPCFieldDCI_1_1_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.secondTPCFieldDCI_1_1_r17), 0, 0);
    }
    if (value.has_secondTPCFieldDCI_1_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.secondTPCFieldDCI_1_2_r17), 0, 0);
    }
    if (value.has_dl_DataToUL_ACK_r17) {
        Encode_SetupRelease_DL_DataToUL_ACK_r17(enc, value.dl_DataToUL_ACK_r17);
    }
    if (value.has_dl_DataToUL_ACK_DCI_1_2_r17) {
        Encode_SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17(enc, value.dl_DataToUL_ACK_DCI_1_2_r17);
    }
    if (value.has_ul_AccessConfigListDCI_1_1_r17) {
        Encode_SetupRelease_UL_AccessConfigListDCI_1_1_r17(enc, value.ul_AccessConfigListDCI_1_1_r17);
    }
    if (value.has_schedulingRequestResourceToAddModListExt_v1700) {
enc.WriteConstrainedLength(value.schedulingRequestResourceToAddModListExt_v1700_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.schedulingRequestResourceToAddModListExt_v1700_count; ++i) {
    Encode_SchedulingRequestResourceConfigExt_v1700(enc, value.schedulingRequestResourceToAddModListExt_v1700_items[i]);
}
    }
    if (value.has_dmrs_BundlingPUCCH_Config_r17) {
        Encode_SetupRelease_DMRS_BundlingPUCCH_Config_r17(enc, value.dmrs_BundlingPUCCH_Config_r17);
    }
    if (value.has_dl_DataToUL_ACK_v1700) {
        Encode_SetupRelease_DL_DataToUL_ACK_v1700(enc, value.dl_DataToUL_ACK_v1700);
    }
    if (value.has_dl_DataToUL_ACK_MulticastDCI_Format4_1_r17) {
        Encode_SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17(enc, value.dl_DataToUL_ACK_MulticastDCI_Format4_1_r17);
    }
    if (value.has_sps_PUCCH_AN_ListMulticast_r17) {
        Encode_SetupRelease_SPS_PUCCH_AN_List_r16(enc, value.sps_PUCCH_AN_ListMulticast_r17);
    }
    return enc.Error();
}

ErrorCode Decode_PUCCH_Config_ExtGroup2(Decoder& dec, PUCCH_Config_ExtGroup2& value)
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
    if (present_0) {
        if (Decode_SetupRelease_PUCCH_FormatConfig(dec, value.format0_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_PUCCH_FormatConfigExt_r17(dec, value.format2Ext_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SetupRelease_PUCCH_FormatConfigExt_r17(dec, value.format3Ext_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SetupRelease_PUCCH_FormatConfigExt_r17(dec, value.format4Ext_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SetupRelease_UL_AccessConfigListDCI_1_2_r17(dec, value.ul_AccessConfigListDCI_1_2_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.mappingPattern_r17 = (PUCCH_Config_ExtGroup2_MappingPattern_r17)tmp_value;
    }
    if (present_6) {
if (!dec.ReadConstrainedLength(0u, 0u, value.powerControlSetInfoToAddModList_r17_count)) { goto fail; }
if (value.powerControlSetInfoToAddModList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.powerControlSetInfoToAddModList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.powerControlSetInfoToAddModList_r17_count > 0u) {
    value.powerControlSetInfoToAddModList_r17_items = (PUCCH_PowerControlSetInfo_r17*)std::malloc((std::size_t)value.powerControlSetInfoToAddModList_r17_count * sizeof(PUCCH_PowerControlSetInfo_r17));
    if (value.powerControlSetInfoToAddModList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.powerControlSetInfoToAddModList_r17_items, 0, (std::size_t)value.powerControlSetInfoToAddModList_r17_count * sizeof(PUCCH_PowerControlSetInfo_r17));
}
for (std::uint32_t i = 0; i < value.powerControlSetInfoToAddModList_r17_count; ++i) {
    if (Decode_PUCCH_PowerControlSetInfo_r17(dec, value.powerControlSetInfoToAddModList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_7) {
if (!dec.ReadConstrainedLength(0u, 0u, value.powerControlSetInfoToReleaseList_r17_count)) { goto fail; }
if (value.powerControlSetInfoToReleaseList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.powerControlSetInfoToReleaseList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.powerControlSetInfoToReleaseList_r17_count > 0u) {
    value.powerControlSetInfoToReleaseList_r17_items = (PUCCH_PowerControlSetInfoId_r17*)std::malloc((std::size_t)value.powerControlSetInfoToReleaseList_r17_count * sizeof(PUCCH_PowerControlSetInfoId_r17));
    if (value.powerControlSetInfoToReleaseList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.powerControlSetInfoToReleaseList_r17_items, 0, (std::size_t)value.powerControlSetInfoToReleaseList_r17_count * sizeof(PUCCH_PowerControlSetInfoId_r17));
}
for (std::uint32_t i = 0; i < value.powerControlSetInfoToReleaseList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
    value.powerControlSetInfoToReleaseList_r17_items[i] = (PUCCH_PowerControlSetInfoId_r17)tmp_value;
}
    }
    if (present_8) {
        value.secondTPCFieldDCI_1_1_r17 = (PUCCH_Config_ExtGroup2_SecondTPCFieldDCI_1_1_r17)0;
    }
    if (present_9) {
        value.secondTPCFieldDCI_1_2_r17 = (PUCCH_Config_ExtGroup2_SecondTPCFieldDCI_1_2_r17)0;
    }
    if (present_10) {
        if (Decode_SetupRelease_DL_DataToUL_ACK_r17(dec, value.dl_DataToUL_ACK_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_11) {
        if (Decode_SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17(dec, value.dl_DataToUL_ACK_DCI_1_2_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_12) {
        if (Decode_SetupRelease_UL_AccessConfigListDCI_1_1_r17(dec, value.ul_AccessConfigListDCI_1_1_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_13) {
if (!dec.ReadConstrainedLength(0u, 0u, value.schedulingRequestResourceToAddModListExt_v1700_count)) { goto fail; }
if (value.schedulingRequestResourceToAddModListExt_v1700_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.schedulingRequestResourceToAddModListExt_v1700_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.schedulingRequestResourceToAddModListExt_v1700_count > 0u) {
    value.schedulingRequestResourceToAddModListExt_v1700_items = (SchedulingRequestResourceConfigExt_v1700*)std::malloc((std::size_t)value.schedulingRequestResourceToAddModListExt_v1700_count * sizeof(SchedulingRequestResourceConfigExt_v1700));
    if (value.schedulingRequestResourceToAddModListExt_v1700_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.schedulingRequestResourceToAddModListExt_v1700_items, 0, (std::size_t)value.schedulingRequestResourceToAddModListExt_v1700_count * sizeof(SchedulingRequestResourceConfigExt_v1700));
}
for (std::uint32_t i = 0; i < value.schedulingRequestResourceToAddModListExt_v1700_count; ++i) {
    if (Decode_SchedulingRequestResourceConfigExt_v1700(dec, value.schedulingRequestResourceToAddModListExt_v1700_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_14) {
        if (Decode_SetupRelease_DMRS_BundlingPUCCH_Config_r17(dec, value.dmrs_BundlingPUCCH_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_15) {
        if (Decode_SetupRelease_DL_DataToUL_ACK_v1700(dec, value.dl_DataToUL_ACK_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_16) {
        if (Decode_SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17(dec, value.dl_DataToUL_ACK_MulticastDCI_Format4_1_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_17) {
        if (Decode_SetupRelease_SPS_PUCCH_AN_List_r16(dec, value.sps_PUCCH_AN_ListMulticast_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_Config_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_Config_ExtGroup2(PUCCH_Config_ExtGroup2& value)
{
    if (value.has_format0_r17) {
        Free_SetupRelease_PUCCH_FormatConfig(value.format0_r17);
    }
    if (value.has_format2Ext_r17) {
        Free_SetupRelease_PUCCH_FormatConfigExt_r17(value.format2Ext_r17);
    }
    if (value.has_format3Ext_r17) {
        Free_SetupRelease_PUCCH_FormatConfigExt_r17(value.format3Ext_r17);
    }
    if (value.has_format4Ext_r17) {
        Free_SetupRelease_PUCCH_FormatConfigExt_r17(value.format4Ext_r17);
    }
    if (value.has_ul_AccessConfigListDCI_1_2_r17) {
        Free_SetupRelease_UL_AccessConfigListDCI_1_2_r17(value.ul_AccessConfigListDCI_1_2_r17);
    }
    if (value.has_mappingPattern_r17) {
    }
    if (value.has_powerControlSetInfoToAddModList_r17) {
        if (value.powerControlSetInfoToAddModList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.powerControlSetInfoToAddModList_r17_count; ++i) {
                Free_PUCCH_PowerControlSetInfo_r17(value.powerControlSetInfoToAddModList_r17_items[i]);
            }
            std::free(value.powerControlSetInfoToAddModList_r17_items);
            value.powerControlSetInfoToAddModList_r17_items = nullptr;
        }
        value.powerControlSetInfoToAddModList_r17_count = 0;
    }
    if (value.has_powerControlSetInfoToReleaseList_r17) {
        if (value.powerControlSetInfoToReleaseList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.powerControlSetInfoToReleaseList_r17_count; ++i) {
            }
            std::free(value.powerControlSetInfoToReleaseList_r17_items);
            value.powerControlSetInfoToReleaseList_r17_items = nullptr;
        }
        value.powerControlSetInfoToReleaseList_r17_count = 0;
    }
    if (value.has_secondTPCFieldDCI_1_1_r17) {
    }
    if (value.has_secondTPCFieldDCI_1_2_r17) {
    }
    if (value.has_dl_DataToUL_ACK_r17) {
        Free_SetupRelease_DL_DataToUL_ACK_r17(value.dl_DataToUL_ACK_r17);
    }
    if (value.has_dl_DataToUL_ACK_DCI_1_2_r17) {
        Free_SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17(value.dl_DataToUL_ACK_DCI_1_2_r17);
    }
    if (value.has_ul_AccessConfigListDCI_1_1_r17) {
        Free_SetupRelease_UL_AccessConfigListDCI_1_1_r17(value.ul_AccessConfigListDCI_1_1_r17);
    }
    if (value.has_schedulingRequestResourceToAddModListExt_v1700) {
        if (value.schedulingRequestResourceToAddModListExt_v1700_items != nullptr) {
            for (std::uint32_t i = 0; i < value.schedulingRequestResourceToAddModListExt_v1700_count; ++i) {
                Free_SchedulingRequestResourceConfigExt_v1700(value.schedulingRequestResourceToAddModListExt_v1700_items[i]);
            }
            std::free(value.schedulingRequestResourceToAddModListExt_v1700_items);
            value.schedulingRequestResourceToAddModListExt_v1700_items = nullptr;
        }
        value.schedulingRequestResourceToAddModListExt_v1700_count = 0;
    }
    if (value.has_dmrs_BundlingPUCCH_Config_r17) {
        Free_SetupRelease_DMRS_BundlingPUCCH_Config_r17(value.dmrs_BundlingPUCCH_Config_r17);
    }
    if (value.has_dl_DataToUL_ACK_v1700) {
        Free_SetupRelease_DL_DataToUL_ACK_v1700(value.dl_DataToUL_ACK_v1700);
    }
    if (value.has_dl_DataToUL_ACK_MulticastDCI_Format4_1_r17) {
        Free_SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17(value.dl_DataToUL_ACK_MulticastDCI_Format4_1_r17);
    }
    if (value.has_sps_PUCCH_AN_ListMulticast_r17) {
        Free_SetupRelease_SPS_PUCCH_AN_List_r16(value.sps_PUCCH_AN_ListMulticast_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PathlossReferenceRSs_v1610：ASN.1 PathlossReferenceRSs-v1610；源文件第 10190 行；SEQUENCE OF。
// Encode_PathlossReferenceRSs_v1610 只读不分配；Decode_PathlossReferenceRSs_v1610 可能 malloc（失败时内部已释放并清零）；Free_PathlossReferenceRSs_v1610 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PathlossReferenceRSs_v1610(Encoder& enc, const PathlossReferenceRSs_v1610& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 60u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PUCCH_PathlossReferenceRS_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_PathlossReferenceRSs_v1610(Decoder& dec, PathlossReferenceRSs_v1610& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 60u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 60u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PUCCH_PathlossReferenceRS_r16*)std::malloc((std::size_t)value.count * sizeof(PUCCH_PathlossReferenceRS_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PUCCH_PathlossReferenceRS_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PUCCH_PathlossReferenceRS_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_PathlossReferenceRSs_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PathlossReferenceRSs_v1610(PathlossReferenceRSs_v1610& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PUCCH_PathlossReferenceRS_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PathlossReferenceRSs_v1610：ASN.1 SetupRelease<PathlossReferenceRSs-v1610>；源文件第 10179 行；CHOICE。
// Encode_SetupRelease_PathlossReferenceRSs_v1610 只读不分配；Decode_SetupRelease_PathlossReferenceRSs_v1610 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PathlossReferenceRSs_v1610 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PathlossReferenceRSs_v1610(Encoder& enc, const SetupRelease_PathlossReferenceRSs_v1610& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PathlossReferenceRSs_v1610_Tag_release:
        (void)0;
        break;
    case SetupRelease_PathlossReferenceRSs_v1610_Tag_setup:
        Encode_PathlossReferenceRSs_v1610(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PathlossReferenceRSs_v1610(Decoder& dec, SetupRelease_PathlossReferenceRSs_v1610& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PathlossReferenceRSs_v1610_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PathlossReferenceRSs_v1610_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PathlossReferenceRSs_v1610_Tag_setup: {
        if (Decode_PathlossReferenceRSs_v1610(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PathlossReferenceRSs_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PathlossReferenceRSs_v1610(SetupRelease_PathlossReferenceRSs_v1610& value)
{
    switch (value.tag) {
    case SetupRelease_PathlossReferenceRSs_v1610_Tag_release:
        break;
    case SetupRelease_PathlossReferenceRSs_v1610_Tag_setup:
        Free_PathlossReferenceRSs_v1610(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PUCCH_PowerControl_ExtGroup1：ASN.1 PUCCH_PowerControl_ExtGroup1；源文件第 10178 行；扩展添加组 [[ ]]。
// Encode_PUCCH_PowerControl_ExtGroup1 只读不分配；Decode_PUCCH_PowerControl_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_PUCCH_PowerControl_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PUCCH_PowerControl_ExtGroup1(Encoder& enc, const PUCCH_PowerControl_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_pathlossReferenceRSs_v1610);
    if (value.has_pathlossReferenceRSs_v1610) {
        Encode_SetupRelease_PathlossReferenceRSs_v1610(enc, value.pathlossReferenceRSs_v1610);
    }
    return enc.Error();
}

ErrorCode Decode_PUCCH_PowerControl_ExtGroup1(Decoder& dec, PUCCH_PowerControl_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_PathlossReferenceRSs_v1610(dec, value.pathlossReferenceRSs_v1610) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_PowerControl_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_PowerControl_ExtGroup1(PUCCH_PowerControl_ExtGroup1& value)
{
    if (value.has_pathlossReferenceRSs_v1610) {
        Free_SetupRelease_PathlossReferenceRSs_v1610(value.pathlossReferenceRSs_v1610);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PUCCH_PowerControl：ASN.1 PUCCH-PowerControl；源文件第 10167 行；SEQUENCE。
// Encode_PUCCH_PowerControl 只读不分配；Decode_PUCCH_PowerControl 可能 malloc（失败时内部已释放并清零）；Free_PUCCH_PowerControl 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PUCCH_PowerControl(Encoder& enc, const PUCCH_PowerControl& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_deltaF_PUCCH_f0);
    enc.WriteBit(value.has_deltaF_PUCCH_f1);
    enc.WriteBit(value.has_deltaF_PUCCH_f2);
    enc.WriteBit(value.has_deltaF_PUCCH_f3);
    enc.WriteBit(value.has_deltaF_PUCCH_f4);
    enc.WriteBit(value.has_p0_Set);
    enc.WriteBit(value.has_pathlossReferenceRSs);
    enc.WriteBit(value.has_twoPUCCH_PC_AdjustmentStates);
    if (value.has_deltaF_PUCCH_f0) {
        enc.WriteConstrainedInteger((std::int64_t)(value.deltaF_PUCCH_f0), -16, 15);
    }
    if (value.has_deltaF_PUCCH_f1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.deltaF_PUCCH_f1), -16, 15);
    }
    if (value.has_deltaF_PUCCH_f2) {
        enc.WriteConstrainedInteger((std::int64_t)(value.deltaF_PUCCH_f2), -16, 15);
    }
    if (value.has_deltaF_PUCCH_f3) {
        enc.WriteConstrainedInteger((std::int64_t)(value.deltaF_PUCCH_f3), -16, 15);
    }
    if (value.has_deltaF_PUCCH_f4) {
        enc.WriteConstrainedInteger((std::int64_t)(value.deltaF_PUCCH_f4), -16, 15);
    }
    if (value.has_p0_Set) {
enc.WriteConstrainedLength(value.p0_Set_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.p0_Set_count; ++i) {
    Encode_P0_PUCCH(enc, value.p0_Set_items[i]);
}
    }
    if (value.has_pathlossReferenceRSs) {
enc.WriteConstrainedLength(value.pathlossReferenceRSs_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pathlossReferenceRSs_count; ++i) {
    Encode_PUCCH_PathlossReferenceRS(enc, value.pathlossReferenceRSs_items[i]);
}
    }
    if (value.has_twoPUCCH_PC_AdjustmentStates) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUCCH_PC_AdjustmentStates), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_PUCCH_PowerControl_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PUCCH_PowerControl(Decoder& dec, PUCCH_PowerControl& value)
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
        if (!dec.ReadConstrainedInteger(-16, 15, tmp_value)) { goto fail; }
        value.deltaF_PUCCH_f0 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-16, 15, tmp_value)) { goto fail; }
        value.deltaF_PUCCH_f1 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-16, 15, tmp_value)) { goto fail; }
        value.deltaF_PUCCH_f2 = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-16, 15, tmp_value)) { goto fail; }
        value.deltaF_PUCCH_f3 = (int64_t)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-16, 15, tmp_value)) { goto fail; }
        value.deltaF_PUCCH_f4 = (int64_t)tmp_value;
    }
    if (present_5) {
if (!dec.ReadConstrainedLength(0u, 0u, value.p0_Set_count)) { goto fail; }
if (value.p0_Set_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.p0_Set_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.p0_Set_count > 0u) {
    value.p0_Set_items = (P0_PUCCH*)std::malloc((std::size_t)value.p0_Set_count * sizeof(P0_PUCCH));
    if (value.p0_Set_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.p0_Set_items, 0, (std::size_t)value.p0_Set_count * sizeof(P0_PUCCH));
}
for (std::uint32_t i = 0; i < value.p0_Set_count; ++i) {
    if (Decode_P0_PUCCH(dec, value.p0_Set_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_6) {
if (!dec.ReadConstrainedLength(0u, 0u, value.pathlossReferenceRSs_count)) { goto fail; }
if (value.pathlossReferenceRSs_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pathlossReferenceRSs_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pathlossReferenceRSs_count > 0u) {
    value.pathlossReferenceRSs_items = (PUCCH_PathlossReferenceRS*)std::malloc((std::size_t)value.pathlossReferenceRSs_count * sizeof(PUCCH_PathlossReferenceRS));
    if (value.pathlossReferenceRSs_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pathlossReferenceRSs_items, 0, (std::size_t)value.pathlossReferenceRSs_count * sizeof(PUCCH_PathlossReferenceRS));
}
for (std::uint32_t i = 0; i < value.pathlossReferenceRSs_count; ++i) {
    if (Decode_PUCCH_PathlossReferenceRS(dec, value.pathlossReferenceRSs_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_7) {
        value.twoPUCCH_PC_AdjustmentStates = (PUCCH_PowerControl_TwoPUCCH_PC_AdjustmentStates)0;
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
    if (Decode_PUCCH_PowerControl_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_PUCCH_PowerControl(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_PowerControl(PUCCH_PowerControl& value)
{
    if (value.has_deltaF_PUCCH_f0) {
    }
    if (value.has_deltaF_PUCCH_f1) {
    }
    if (value.has_deltaF_PUCCH_f2) {
    }
    if (value.has_deltaF_PUCCH_f3) {
    }
    if (value.has_deltaF_PUCCH_f4) {
    }
    if (value.has_p0_Set) {
        if (value.p0_Set_items != nullptr) {
            for (std::uint32_t i = 0; i < value.p0_Set_count; ++i) {
                Free_P0_PUCCH(value.p0_Set_items[i]);
            }
            std::free(value.p0_Set_items);
            value.p0_Set_items = nullptr;
        }
        value.p0_Set_count = 0;
    }
    if (value.has_pathlossReferenceRSs) {
        if (value.pathlossReferenceRSs_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pathlossReferenceRSs_count; ++i) {
                Free_PUCCH_PathlossReferenceRS(value.pathlossReferenceRSs_items[i]);
            }
            std::free(value.pathlossReferenceRSs_items);
            value.pathlossReferenceRSs_items = nullptr;
        }
        value.pathlossReferenceRSs_count = 0;
    }
    if (value.has_twoPUCCH_PC_AdjustmentStates) {
    }
    if (value.has_extGroup1) {
        Free_PUCCH_PowerControl_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PUCCH_Config：ASN.1 PUCCH-Config；源文件第 9925 行；SEQUENCE。
// Encode_PUCCH_Config 只读不分配；Decode_PUCCH_Config 可能 malloc（失败时内部已释放并清零）；Free_PUCCH_Config 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PUCCH_Config(Encoder& enc, const PUCCH_Config& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_resourceSetToAddModList);
    enc.WriteBit(value.has_resourceSetToReleaseList);
    enc.WriteBit(value.has_resourceToAddModList);
    enc.WriteBit(value.has_resourceToReleaseList);
    enc.WriteBit(value.has_format1);
    enc.WriteBit(value.has_format2);
    enc.WriteBit(value.has_format3);
    enc.WriteBit(value.has_format4);
    enc.WriteBit(value.has_schedulingRequestResourceToAddModList);
    enc.WriteBit(value.has_schedulingRequestResourceToReleaseList);
    enc.WriteBit(value.has_multi_CSI_PUCCH_ResourceList);
    enc.WriteBit(value.has_dl_DataToUL_ACK);
    enc.WriteBit(value.has_spatialRelationInfoToAddModList);
    enc.WriteBit(value.has_spatialRelationInfoToReleaseList);
    enc.WriteBit(value.has_pucch_PowerControl);
    if (value.has_resourceSetToAddModList) {
enc.WriteConstrainedLength(value.resourceSetToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.resourceSetToAddModList_count; ++i) {
    Encode_PUCCH_ResourceSet(enc, value.resourceSetToAddModList_items[i]);
}
    }
    if (value.has_resourceSetToReleaseList) {
enc.WriteConstrainedLength(value.resourceSetToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.resourceSetToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.resourceSetToReleaseList_items[i]), 0, 3);
}
    }
    if (value.has_resourceToAddModList) {
enc.WriteConstrainedLength(value.resourceToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.resourceToAddModList_count; ++i) {
    Encode_PUCCH_Resource(enc, value.resourceToAddModList_items[i]);
}
    }
    if (value.has_resourceToReleaseList) {
enc.WriteConstrainedLength(value.resourceToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.resourceToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.resourceToReleaseList_items[i]), 0, 127);
}
    }
    if (value.has_format1) {
        Encode_SetupRelease_PUCCH_FormatConfig(enc, value.format1);
    }
    if (value.has_format2) {
        Encode_SetupRelease_PUCCH_FormatConfig(enc, value.format2);
    }
    if (value.has_format3) {
        Encode_SetupRelease_PUCCH_FormatConfig(enc, value.format3);
    }
    if (value.has_format4) {
        Encode_SetupRelease_PUCCH_FormatConfig(enc, value.format4);
    }
    if (value.has_schedulingRequestResourceToAddModList) {
enc.WriteConstrainedLength(value.schedulingRequestResourceToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.schedulingRequestResourceToAddModList_count; ++i) {
    Encode_SchedulingRequestResourceConfig(enc, value.schedulingRequestResourceToAddModList_items[i]);
}
    }
    if (value.has_schedulingRequestResourceToReleaseList) {
enc.WriteConstrainedLength(value.schedulingRequestResourceToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.schedulingRequestResourceToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.schedulingRequestResourceToReleaseList_items[i]), 1, 8);
}
    }
    if (value.has_multi_CSI_PUCCH_ResourceList) {
enc.WriteConstrainedLength(value.multi_CSI_PUCCH_ResourceList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.multi_CSI_PUCCH_ResourceList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.multi_CSI_PUCCH_ResourceList_items[i]), 0, 127);
}
    }
    if (value.has_dl_DataToUL_ACK) {
enc.WriteConstrainedLength(value.dl_DataToUL_ACK_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.dl_DataToUL_ACK_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.dl_DataToUL_ACK_items[i]), 0, 15);
}
    }
    if (value.has_spatialRelationInfoToAddModList) {
enc.WriteConstrainedLength(value.spatialRelationInfoToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.spatialRelationInfoToAddModList_count; ++i) {
    Encode_PUCCH_SpatialRelationInfo(enc, value.spatialRelationInfoToAddModList_items[i]);
}
    }
    if (value.has_spatialRelationInfoToReleaseList) {
enc.WriteConstrainedLength(value.spatialRelationInfoToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.spatialRelationInfoToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.spatialRelationInfoToReleaseList_items[i]), 1, 8);
}
    }
    if (value.has_pucch_PowerControl) {
        Encode_PUCCH_PowerControl(enc, value.pucch_PowerControl);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_PUCCH_Config_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_PUCCH_Config_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PUCCH_Config(Decoder& dec, PUCCH_Config& value)
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
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.resourceSetToAddModList_count)) { goto fail; }
if (value.resourceSetToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.resourceSetToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.resourceSetToAddModList_count > 0u) {
    value.resourceSetToAddModList_items = (PUCCH_ResourceSet*)std::malloc((std::size_t)value.resourceSetToAddModList_count * sizeof(PUCCH_ResourceSet));
    if (value.resourceSetToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.resourceSetToAddModList_items, 0, (std::size_t)value.resourceSetToAddModList_count * sizeof(PUCCH_ResourceSet));
}
for (std::uint32_t i = 0; i < value.resourceSetToAddModList_count; ++i) {
    if (Decode_PUCCH_ResourceSet(dec, value.resourceSetToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.resourceSetToReleaseList_count)) { goto fail; }
if (value.resourceSetToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.resourceSetToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.resourceSetToReleaseList_count > 0u) {
    value.resourceSetToReleaseList_items = (PUCCH_ResourceSetId*)std::malloc((std::size_t)value.resourceSetToReleaseList_count * sizeof(PUCCH_ResourceSetId));
    if (value.resourceSetToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.resourceSetToReleaseList_items, 0, (std::size_t)value.resourceSetToReleaseList_count * sizeof(PUCCH_ResourceSetId));
}
for (std::uint32_t i = 0; i < value.resourceSetToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
    value.resourceSetToReleaseList_items[i] = (PUCCH_ResourceSetId)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.resourceToAddModList_count)) { goto fail; }
if (value.resourceToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.resourceToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.resourceToAddModList_count > 0u) {
    value.resourceToAddModList_items = (PUCCH_Resource*)std::malloc((std::size_t)value.resourceToAddModList_count * sizeof(PUCCH_Resource));
    if (value.resourceToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.resourceToAddModList_items, 0, (std::size_t)value.resourceToAddModList_count * sizeof(PUCCH_Resource));
}
for (std::uint32_t i = 0; i < value.resourceToAddModList_count; ++i) {
    if (Decode_PUCCH_Resource(dec, value.resourceToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.resourceToReleaseList_count)) { goto fail; }
if (value.resourceToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.resourceToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.resourceToReleaseList_count > 0u) {
    value.resourceToReleaseList_items = (PUCCH_ResourceId*)std::malloc((std::size_t)value.resourceToReleaseList_count * sizeof(PUCCH_ResourceId));
    if (value.resourceToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.resourceToReleaseList_items, 0, (std::size_t)value.resourceToReleaseList_count * sizeof(PUCCH_ResourceId));
}
for (std::uint32_t i = 0; i < value.resourceToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
    value.resourceToReleaseList_items[i] = (PUCCH_ResourceId)tmp_value;
}
    }
    if (present_4) {
        if (Decode_SetupRelease_PUCCH_FormatConfig(dec, value.format1) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_SetupRelease_PUCCH_FormatConfig(dec, value.format2) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_SetupRelease_PUCCH_FormatConfig(dec, value.format3) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        if (Decode_SetupRelease_PUCCH_FormatConfig(dec, value.format4) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
if (!dec.ReadConstrainedLength(0u, 0u, value.schedulingRequestResourceToAddModList_count)) { goto fail; }
if (value.schedulingRequestResourceToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.schedulingRequestResourceToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.schedulingRequestResourceToAddModList_count > 0u) {
    value.schedulingRequestResourceToAddModList_items = (SchedulingRequestResourceConfig*)std::malloc((std::size_t)value.schedulingRequestResourceToAddModList_count * sizeof(SchedulingRequestResourceConfig));
    if (value.schedulingRequestResourceToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.schedulingRequestResourceToAddModList_items, 0, (std::size_t)value.schedulingRequestResourceToAddModList_count * sizeof(SchedulingRequestResourceConfig));
}
for (std::uint32_t i = 0; i < value.schedulingRequestResourceToAddModList_count; ++i) {
    if (Decode_SchedulingRequestResourceConfig(dec, value.schedulingRequestResourceToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_9) {
if (!dec.ReadConstrainedLength(0u, 0u, value.schedulingRequestResourceToReleaseList_count)) { goto fail; }
if (value.schedulingRequestResourceToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.schedulingRequestResourceToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.schedulingRequestResourceToReleaseList_count > 0u) {
    value.schedulingRequestResourceToReleaseList_items = (SchedulingRequestResourceId*)std::malloc((std::size_t)value.schedulingRequestResourceToReleaseList_count * sizeof(SchedulingRequestResourceId));
    if (value.schedulingRequestResourceToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.schedulingRequestResourceToReleaseList_items, 0, (std::size_t)value.schedulingRequestResourceToReleaseList_count * sizeof(SchedulingRequestResourceId));
}
for (std::uint32_t i = 0; i < value.schedulingRequestResourceToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
    value.schedulingRequestResourceToReleaseList_items[i] = (SchedulingRequestResourceId)tmp_value;
}
    }
    if (present_10) {
if (!dec.ReadConstrainedLength(0u, 0u, value.multi_CSI_PUCCH_ResourceList_count)) { goto fail; }
if (value.multi_CSI_PUCCH_ResourceList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.multi_CSI_PUCCH_ResourceList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.multi_CSI_PUCCH_ResourceList_count > 0u) {
    value.multi_CSI_PUCCH_ResourceList_items = (PUCCH_ResourceId*)std::malloc((std::size_t)value.multi_CSI_PUCCH_ResourceList_count * sizeof(PUCCH_ResourceId));
    if (value.multi_CSI_PUCCH_ResourceList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.multi_CSI_PUCCH_ResourceList_items, 0, (std::size_t)value.multi_CSI_PUCCH_ResourceList_count * sizeof(PUCCH_ResourceId));
}
for (std::uint32_t i = 0; i < value.multi_CSI_PUCCH_ResourceList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
    value.multi_CSI_PUCCH_ResourceList_items[i] = (PUCCH_ResourceId)tmp_value;
}
    }
    if (present_11) {
if (!dec.ReadConstrainedLength(0u, 0u, value.dl_DataToUL_ACK_count)) { goto fail; }
if (value.dl_DataToUL_ACK_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.dl_DataToUL_ACK_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.dl_DataToUL_ACK_count > 0u) {
    value.dl_DataToUL_ACK_items = (int64_t*)std::malloc((std::size_t)value.dl_DataToUL_ACK_count * sizeof(int64_t));
    if (value.dl_DataToUL_ACK_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.dl_DataToUL_ACK_items, 0, (std::size_t)value.dl_DataToUL_ACK_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.dl_DataToUL_ACK_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
    value.dl_DataToUL_ACK_items[i] = (int64_t)tmp_value;
}
    }
    if (present_12) {
if (!dec.ReadConstrainedLength(0u, 0u, value.spatialRelationInfoToAddModList_count)) { goto fail; }
if (value.spatialRelationInfoToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.spatialRelationInfoToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.spatialRelationInfoToAddModList_count > 0u) {
    value.spatialRelationInfoToAddModList_items = (PUCCH_SpatialRelationInfo*)std::malloc((std::size_t)value.spatialRelationInfoToAddModList_count * sizeof(PUCCH_SpatialRelationInfo));
    if (value.spatialRelationInfoToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.spatialRelationInfoToAddModList_items, 0, (std::size_t)value.spatialRelationInfoToAddModList_count * sizeof(PUCCH_SpatialRelationInfo));
}
for (std::uint32_t i = 0; i < value.spatialRelationInfoToAddModList_count; ++i) {
    if (Decode_PUCCH_SpatialRelationInfo(dec, value.spatialRelationInfoToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_13) {
if (!dec.ReadConstrainedLength(0u, 0u, value.spatialRelationInfoToReleaseList_count)) { goto fail; }
if (value.spatialRelationInfoToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.spatialRelationInfoToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.spatialRelationInfoToReleaseList_count > 0u) {
    value.spatialRelationInfoToReleaseList_items = (PUCCH_SpatialRelationInfoId*)std::malloc((std::size_t)value.spatialRelationInfoToReleaseList_count * sizeof(PUCCH_SpatialRelationInfoId));
    if (value.spatialRelationInfoToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.spatialRelationInfoToReleaseList_items, 0, (std::size_t)value.spatialRelationInfoToReleaseList_count * sizeof(PUCCH_SpatialRelationInfoId));
}
for (std::uint32_t i = 0; i < value.spatialRelationInfoToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
    value.spatialRelationInfoToReleaseList_items[i] = (PUCCH_SpatialRelationInfoId)tmp_value;
}
    }
    if (present_14) {
        if (Decode_PUCCH_PowerControl(dec, value.pucch_PowerControl) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_PUCCH_Config_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_PUCCH_Config_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_PUCCH_Config(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_Config(PUCCH_Config& value)
{
    if (value.has_resourceSetToAddModList) {
        if (value.resourceSetToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.resourceSetToAddModList_count; ++i) {
                Free_PUCCH_ResourceSet(value.resourceSetToAddModList_items[i]);
            }
            std::free(value.resourceSetToAddModList_items);
            value.resourceSetToAddModList_items = nullptr;
        }
        value.resourceSetToAddModList_count = 0;
    }
    if (value.has_resourceSetToReleaseList) {
        if (value.resourceSetToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.resourceSetToReleaseList_count; ++i) {
            }
            std::free(value.resourceSetToReleaseList_items);
            value.resourceSetToReleaseList_items = nullptr;
        }
        value.resourceSetToReleaseList_count = 0;
    }
    if (value.has_resourceToAddModList) {
        if (value.resourceToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.resourceToAddModList_count; ++i) {
                Free_PUCCH_Resource(value.resourceToAddModList_items[i]);
            }
            std::free(value.resourceToAddModList_items);
            value.resourceToAddModList_items = nullptr;
        }
        value.resourceToAddModList_count = 0;
    }
    if (value.has_resourceToReleaseList) {
        if (value.resourceToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.resourceToReleaseList_count; ++i) {
            }
            std::free(value.resourceToReleaseList_items);
            value.resourceToReleaseList_items = nullptr;
        }
        value.resourceToReleaseList_count = 0;
    }
    if (value.has_format1) {
        Free_SetupRelease_PUCCH_FormatConfig(value.format1);
    }
    if (value.has_format2) {
        Free_SetupRelease_PUCCH_FormatConfig(value.format2);
    }
    if (value.has_format3) {
        Free_SetupRelease_PUCCH_FormatConfig(value.format3);
    }
    if (value.has_format4) {
        Free_SetupRelease_PUCCH_FormatConfig(value.format4);
    }
    if (value.has_schedulingRequestResourceToAddModList) {
        if (value.schedulingRequestResourceToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.schedulingRequestResourceToAddModList_count; ++i) {
                Free_SchedulingRequestResourceConfig(value.schedulingRequestResourceToAddModList_items[i]);
            }
            std::free(value.schedulingRequestResourceToAddModList_items);
            value.schedulingRequestResourceToAddModList_items = nullptr;
        }
        value.schedulingRequestResourceToAddModList_count = 0;
    }
    if (value.has_schedulingRequestResourceToReleaseList) {
        if (value.schedulingRequestResourceToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.schedulingRequestResourceToReleaseList_count; ++i) {
            }
            std::free(value.schedulingRequestResourceToReleaseList_items);
            value.schedulingRequestResourceToReleaseList_items = nullptr;
        }
        value.schedulingRequestResourceToReleaseList_count = 0;
    }
    if (value.has_multi_CSI_PUCCH_ResourceList) {
        if (value.multi_CSI_PUCCH_ResourceList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.multi_CSI_PUCCH_ResourceList_count; ++i) {
            }
            std::free(value.multi_CSI_PUCCH_ResourceList_items);
            value.multi_CSI_PUCCH_ResourceList_items = nullptr;
        }
        value.multi_CSI_PUCCH_ResourceList_count = 0;
    }
    if (value.has_dl_DataToUL_ACK) {
        if (value.dl_DataToUL_ACK_items != nullptr) {
            for (std::uint32_t i = 0; i < value.dl_DataToUL_ACK_count; ++i) {
            }
            std::free(value.dl_DataToUL_ACK_items);
            value.dl_DataToUL_ACK_items = nullptr;
        }
        value.dl_DataToUL_ACK_count = 0;
    }
    if (value.has_spatialRelationInfoToAddModList) {
        if (value.spatialRelationInfoToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.spatialRelationInfoToAddModList_count; ++i) {
                Free_PUCCH_SpatialRelationInfo(value.spatialRelationInfoToAddModList_items[i]);
            }
            std::free(value.spatialRelationInfoToAddModList_items);
            value.spatialRelationInfoToAddModList_items = nullptr;
        }
        value.spatialRelationInfoToAddModList_count = 0;
    }
    if (value.has_spatialRelationInfoToReleaseList) {
        if (value.spatialRelationInfoToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.spatialRelationInfoToReleaseList_count; ++i) {
            }
            std::free(value.spatialRelationInfoToReleaseList_items);
            value.spatialRelationInfoToReleaseList_items = nullptr;
        }
        value.spatialRelationInfoToReleaseList_count = 0;
    }
    if (value.has_pucch_PowerControl) {
        Free_PUCCH_PowerControl(value.pucch_PowerControl);
    }
    if (value.has_extGroup1) {
        Free_PUCCH_Config_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_PUCCH_Config_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PUCCH_Config：ASN.1 SetupRelease<PUCCH-Config>；源文件第 4644 行；CHOICE。
// Encode_SetupRelease_PUCCH_Config 只读不分配；Decode_SetupRelease_PUCCH_Config 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PUCCH_Config 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PUCCH_Config(Encoder& enc, const SetupRelease_PUCCH_Config& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PUCCH_Config_Tag_release:
        (void)0;
        break;
    case SetupRelease_PUCCH_Config_Tag_setup:
        Encode_PUCCH_Config(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PUCCH_Config(Decoder& dec, SetupRelease_PUCCH_Config& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PUCCH_Config_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PUCCH_Config_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PUCCH_Config_Tag_setup: {
        if (Decode_PUCCH_Config(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PUCCH_Config(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PUCCH_Config(SetupRelease_PUCCH_Config& value)
{
    switch (value.tag) {
    case SetupRelease_PUCCH_Config_Tag_release:
        break;
    case SetupRelease_PUCCH_Config_Tag_setup:
        Free_PUCCH_Config(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PUCCH_ConfigurationList_r16：ASN.1 PUCCH-ConfigurationList-r16；源文件第 10146 行；SEQUENCE OF。
// Encode_PUCCH_ConfigurationList_r16 只读不分配；Decode_PUCCH_ConfigurationList_r16 可能 malloc（失败时内部已释放并清零）；Free_PUCCH_ConfigurationList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PUCCH_ConfigurationList_r16(Encoder& enc, const PUCCH_ConfigurationList_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 2u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PUCCH_Config(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_PUCCH_ConfigurationList_r16(Decoder& dec, PUCCH_ConfigurationList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 2u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 2u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PUCCH_Config*)std::malloc((std::size_t)value.count * sizeof(PUCCH_Config));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PUCCH_Config));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PUCCH_Config(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_ConfigurationList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_ConfigurationList_r16(PUCCH_ConfigurationList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PUCCH_Config(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PUCCH_ConfigurationList_r16：ASN.1 SetupRelease<PUCCH-ConfigurationList-r16>；源文件第 4655 行；CHOICE。
// Encode_SetupRelease_PUCCH_ConfigurationList_r16 只读不分配；Decode_SetupRelease_PUCCH_ConfigurationList_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PUCCH_ConfigurationList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PUCCH_ConfigurationList_r16(Encoder& enc, const SetupRelease_PUCCH_ConfigurationList_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PUCCH_ConfigurationList_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_PUCCH_ConfigurationList_r16_Tag_setup:
        Encode_PUCCH_ConfigurationList_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PUCCH_ConfigurationList_r16(Decoder& dec, SetupRelease_PUCCH_ConfigurationList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PUCCH_ConfigurationList_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PUCCH_ConfigurationList_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PUCCH_ConfigurationList_r16_Tag_setup: {
        if (Decode_PUCCH_ConfigurationList_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PUCCH_ConfigurationList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PUCCH_ConfigurationList_r16(SetupRelease_PUCCH_ConfigurationList_r16& value)
{
    switch (value.tag) {
    case SetupRelease_PUCCH_ConfigurationList_r16_Tag_release:
        break;
    case SetupRelease_PUCCH_ConfigurationList_r16_Tag_setup:
        Free_PUCCH_ConfigurationList_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LBT_FailureRecoveryConfig_r16：ASN.1 LBT-FailureRecoveryConfig-r16；源文件第 7051 行；SEQUENCE。
// Encode_LBT_FailureRecoveryConfig_r16 只读不分配；Decode_LBT_FailureRecoveryConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_LBT_FailureRecoveryConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LBT_FailureRecoveryConfig_r16(Encoder& enc, const LBT_FailureRecoveryConfig_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.lbt_FailureInstanceMaxCount_r16), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.lbt_FailureDetectionTimer_r16), 0, 5);
    return enc.Error();
}

ErrorCode Decode_LBT_FailureRecoveryConfig_r16(Decoder& dec, LBT_FailureRecoveryConfig_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.lbt_FailureInstanceMaxCount_r16 = (LBT_FailureRecoveryConfig_r16_Lbt_FailureInstanceMaxCount_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.lbt_FailureDetectionTimer_r16 = (LBT_FailureRecoveryConfig_r16_Lbt_FailureDetectionTimer_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_LBT_FailureRecoveryConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LBT_FailureRecoveryConfig_r16(LBT_FailureRecoveryConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_LBT_FailureRecoveryConfig_r16：ASN.1 SetupRelease<LBT-FailureRecoveryConfig-r16>；源文件第 4656 行；CHOICE。
// Encode_SetupRelease_LBT_FailureRecoveryConfig_r16 只读不分配；Decode_SetupRelease_LBT_FailureRecoveryConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_LBT_FailureRecoveryConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_LBT_FailureRecoveryConfig_r16(Encoder& enc, const SetupRelease_LBT_FailureRecoveryConfig_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_LBT_FailureRecoveryConfig_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_LBT_FailureRecoveryConfig_r16_Tag_setup:
        Encode_LBT_FailureRecoveryConfig_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_LBT_FailureRecoveryConfig_r16(Decoder& dec, SetupRelease_LBT_FailureRecoveryConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_LBT_FailureRecoveryConfig_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_LBT_FailureRecoveryConfig_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_LBT_FailureRecoveryConfig_r16_Tag_setup: {
        if (Decode_LBT_FailureRecoveryConfig_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_LBT_FailureRecoveryConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_LBT_FailureRecoveryConfig_r16(SetupRelease_LBT_FailureRecoveryConfig_r16& value)
{
    switch (value.tag) {
    case SetupRelease_LBT_FailureRecoveryConfig_r16_Tag_release:
        break;
    case SetupRelease_LBT_FailureRecoveryConfig_r16_Tag_setup:
        Free_LBT_FailureRecoveryConfig_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BWP_UplinkDedicated_ExtGroup1：ASN.1 BWP_UplinkDedicated_ExtGroup1；源文件第 4650 行；扩展添加组 [[ ]]。
// Encode_BWP_UplinkDedicated_ExtGroup1 只读不分配；Decode_BWP_UplinkDedicated_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_BWP_UplinkDedicated_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BWP_UplinkDedicated_ExtGroup1(Encoder& enc, const BWP_UplinkDedicated_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_PUCCH_Config_r16);
    enc.WriteBit(value.has_cp_ExtensionC2_r16);
    enc.WriteBit(value.has_cp_ExtensionC3_r16);
    enc.WriteBit(value.has_useInterlacePUCCH_PUSCH_r16);
    enc.WriteBit(value.has_pucch_ConfigurationList_r16);
    enc.WriteBit(value.has_lbt_FailureRecoveryConfig_r16);
    enc.WriteBit(value.has_configuredGrantConfigToAddModList_r16);
    enc.WriteBit(value.has_configuredGrantConfigToReleaseList_r16);
    enc.WriteBit(value.has_configuredGrantConfigType2DeactivationStateList_r16);
    if (value.has_sl_PUCCH_Config_r16) {
        Encode_SetupRelease_PUCCH_Config(enc, value.sl_PUCCH_Config_r16);
    }
    if (value.has_cp_ExtensionC2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cp_ExtensionC2_r16), 1, 28);
    }
    if (value.has_cp_ExtensionC3_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cp_ExtensionC3_r16), 1, 28);
    }
    if (value.has_useInterlacePUCCH_PUSCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.useInterlacePUCCH_PUSCH_r16), 0, 0);
    }
    if (value.has_pucch_ConfigurationList_r16) {
        Encode_SetupRelease_PUCCH_ConfigurationList_r16(enc, value.pucch_ConfigurationList_r16);
    }
    if (value.has_lbt_FailureRecoveryConfig_r16) {
        Encode_SetupRelease_LBT_FailureRecoveryConfig_r16(enc, value.lbt_FailureRecoveryConfig_r16);
    }
    if (value.has_configuredGrantConfigToAddModList_r16) {
        Encode_ConfiguredGrantConfigToAddModList_r16(enc, value.configuredGrantConfigToAddModList_r16);
    }
    if (value.has_configuredGrantConfigToReleaseList_r16) {
        Encode_ConfiguredGrantConfigToReleaseList_r16(enc, value.configuredGrantConfigToReleaseList_r16);
    }
    if (value.has_configuredGrantConfigType2DeactivationStateList_r16) {
        Encode_ConfiguredGrantConfigType2DeactivationStateList_r16(enc, value.configuredGrantConfigType2DeactivationStateList_r16);
    }
    return enc.Error();
}

ErrorCode Decode_BWP_UplinkDedicated_ExtGroup1(Decoder& dec, BWP_UplinkDedicated_ExtGroup1& value)
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
        if (Decode_SetupRelease_PUCCH_Config(dec, value.sl_PUCCH_Config_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 28, tmp_value)) { goto fail; }
        value.cp_ExtensionC2_r16 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 28, tmp_value)) { goto fail; }
        value.cp_ExtensionC3_r16 = (int64_t)tmp_value;
    }
    if (present_3) {
        value.useInterlacePUCCH_PUSCH_r16 = (BWP_UplinkDedicated_ExtGroup1_UseInterlacePUCCH_PUSCH_r16)0;
    }
    if (present_4) {
        if (Decode_SetupRelease_PUCCH_ConfigurationList_r16(dec, value.pucch_ConfigurationList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_SetupRelease_LBT_FailureRecoveryConfig_r16(dec, value.lbt_FailureRecoveryConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_ConfiguredGrantConfigToAddModList_r16(dec, value.configuredGrantConfigToAddModList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        if (Decode_ConfiguredGrantConfigToReleaseList_r16(dec, value.configuredGrantConfigToReleaseList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        if (Decode_ConfiguredGrantConfigType2DeactivationStateList_r16(dec, value.configuredGrantConfigType2DeactivationStateList_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BWP_UplinkDedicated_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BWP_UplinkDedicated_ExtGroup1(BWP_UplinkDedicated_ExtGroup1& value)
{
    if (value.has_sl_PUCCH_Config_r16) {
        Free_SetupRelease_PUCCH_Config(value.sl_PUCCH_Config_r16);
    }
    if (value.has_cp_ExtensionC2_r16) {
    }
    if (value.has_cp_ExtensionC3_r16) {
    }
    if (value.has_useInterlacePUCCH_PUSCH_r16) {
    }
    if (value.has_pucch_ConfigurationList_r16) {
        Free_SetupRelease_PUCCH_ConfigurationList_r16(value.pucch_ConfigurationList_r16);
    }
    if (value.has_lbt_FailureRecoveryConfig_r16) {
        Free_SetupRelease_LBT_FailureRecoveryConfig_r16(value.lbt_FailureRecoveryConfig_r16);
    }
    if (value.has_configuredGrantConfigToAddModList_r16) {
        Free_ConfiguredGrantConfigToAddModList_r16(value.configuredGrantConfigToAddModList_r16);
    }
    if (value.has_configuredGrantConfigToReleaseList_r16) {
        Free_ConfiguredGrantConfigToReleaseList_r16(value.configuredGrantConfigToReleaseList_r16);
    }
    if (value.has_configuredGrantConfigType2DeactivationStateList_r16) {
        Free_ConfiguredGrantConfigType2DeactivationStateList_r16(value.configuredGrantConfigType2DeactivationStateList_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Explicitlist：ASN.1 ul-TCI-StateList-r17/explicitlist；源文件第 4663 行；SEQUENCE。
// Encode_BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Explicitlist 只读不分配；Decode_BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Explicitlist 可能 malloc（失败时内部已释放并清零）；Free_BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Explicitlist 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Explicitlist(Encoder& enc, const BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Explicitlist& value)
{
    (void)value;
    enc.WriteBit(value.has_ul_TCI_ToAddModList_r17);
    enc.WriteBit(value.has_ul_TCI_ToReleaseList_r17);
    if (value.has_ul_TCI_ToAddModList_r17) {
enc.WriteConstrainedLength(value.ul_TCI_ToAddModList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.ul_TCI_ToAddModList_r17_count; ++i) {
    Encode_TCI_UL_State_r17(enc, value.ul_TCI_ToAddModList_r17_items[i]);
}
    }
    if (value.has_ul_TCI_ToReleaseList_r17) {
enc.WriteConstrainedLength(value.ul_TCI_ToReleaseList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.ul_TCI_ToReleaseList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.ul_TCI_ToReleaseList_r17_items[i]), 0, 63);
}
    }
    return enc.Error();
}

ErrorCode Decode_BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Explicitlist(Decoder& dec, BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Explicitlist& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.ul_TCI_ToAddModList_r17_count)) { goto fail; }
if (value.ul_TCI_ToAddModList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.ul_TCI_ToAddModList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.ul_TCI_ToAddModList_r17_count > 0u) {
    value.ul_TCI_ToAddModList_r17_items = (TCI_UL_State_r17*)std::malloc((std::size_t)value.ul_TCI_ToAddModList_r17_count * sizeof(TCI_UL_State_r17));
    if (value.ul_TCI_ToAddModList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.ul_TCI_ToAddModList_r17_items, 0, (std::size_t)value.ul_TCI_ToAddModList_r17_count * sizeof(TCI_UL_State_r17));
}
for (std::uint32_t i = 0; i < value.ul_TCI_ToAddModList_r17_count; ++i) {
    if (Decode_TCI_UL_State_r17(dec, value.ul_TCI_ToAddModList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.ul_TCI_ToReleaseList_r17_count)) { goto fail; }
if (value.ul_TCI_ToReleaseList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.ul_TCI_ToReleaseList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.ul_TCI_ToReleaseList_r17_count > 0u) {
    value.ul_TCI_ToReleaseList_r17_items = (TCI_UL_StateId_r17*)std::malloc((std::size_t)value.ul_TCI_ToReleaseList_r17_count * sizeof(TCI_UL_StateId_r17));
    if (value.ul_TCI_ToReleaseList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.ul_TCI_ToReleaseList_r17_items, 0, (std::size_t)value.ul_TCI_ToReleaseList_r17_count * sizeof(TCI_UL_StateId_r17));
}
for (std::uint32_t i = 0; i < value.ul_TCI_ToReleaseList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.ul_TCI_ToReleaseList_r17_items[i] = (TCI_UL_StateId_r17)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Explicitlist(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Explicitlist(BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Explicitlist& value)
{
    if (value.has_ul_TCI_ToAddModList_r17) {
        if (value.ul_TCI_ToAddModList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.ul_TCI_ToAddModList_r17_count; ++i) {
                Free_TCI_UL_State_r17(value.ul_TCI_ToAddModList_r17_items[i]);
            }
            std::free(value.ul_TCI_ToAddModList_r17_items);
            value.ul_TCI_ToAddModList_r17_items = nullptr;
        }
        value.ul_TCI_ToAddModList_r17_count = 0;
    }
    if (value.has_ul_TCI_ToReleaseList_r17) {
        if (value.ul_TCI_ToReleaseList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.ul_TCI_ToReleaseList_r17_count; ++i) {
            }
            std::free(value.ul_TCI_ToReleaseList_r17_items);
            value.ul_TCI_ToReleaseList_r17_items = nullptr;
        }
        value.ul_TCI_ToReleaseList_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17：ASN.1 ul-TCI-StateList-r17；源文件第 4662 行；CHOICE。
// Encode_BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17 只读不分配；Decode_BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17 可能 malloc（失败时内部已释放并清零）；Free_BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17(Encoder& enc, const BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Tag_explicitlist:
        Encode_BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Explicitlist(enc, value.u.explicitlist);
        break;
    case BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Tag_unifiedTCI_StateRef_r17:
        Encode_ServingCellAndBWP_Id_r17(enc, value.u.unifiedTCI_StateRef_r17);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17(Decoder& dec, BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Tag)root_index;
    switch (value.tag) {
    case BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Tag_explicitlist: {
        if (Decode_BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Explicitlist(dec, value.u.explicitlist) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Tag_unifiedTCI_StateRef_r17: {
        if (Decode_ServingCellAndBWP_Id_r17(dec, value.u.unifiedTCI_StateRef_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17(BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17& value)
{
    switch (value.tag) {
    case BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Tag_explicitlist:
        Free_BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Explicitlist(value.u.explicitlist);
        break;
    case BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Tag_unifiedTCI_StateRef_r17:
        Free_ServingCellAndBWP_Id_r17(value.u.unifiedTCI_StateRef_r17);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BWP_UplinkDedicated_ExtGroup2：ASN.1 BWP_UplinkDedicated_ExtGroup2；源文件第 4661 行；扩展添加组 [[ ]]。
// Encode_BWP_UplinkDedicated_ExtGroup2 只读不分配；Decode_BWP_UplinkDedicated_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_BWP_UplinkDedicated_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BWP_UplinkDedicated_ExtGroup2(Encoder& enc, const BWP_UplinkDedicated_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_ul_TCI_StateList_r17);
    enc.WriteBit(value.has_ul_powerControl_r17);
    enc.WriteBit(value.has_pucch_ConfigurationListMulticast1_r17);
    enc.WriteBit(value.has_pucch_ConfigurationListMulticast2_r17);
    if (value.has_ul_TCI_StateList_r17) {
        Encode_BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17(enc, value.ul_TCI_StateList_r17);
    }
    if (value.has_ul_powerControl_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_powerControl_r17), 1, 64);
    }
    if (value.has_pucch_ConfigurationListMulticast1_r17) {
        Encode_SetupRelease_PUCCH_ConfigurationList_r16(enc, value.pucch_ConfigurationListMulticast1_r17);
    }
    if (value.has_pucch_ConfigurationListMulticast2_r17) {
        Encode_SetupRelease_PUCCH_ConfigurationList_r16(enc, value.pucch_ConfigurationListMulticast2_r17);
    }
    return enc.Error();
}

ErrorCode Decode_BWP_UplinkDedicated_ExtGroup2(Decoder& dec, BWP_UplinkDedicated_ExtGroup2& value)
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
        if (Decode_BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17(dec, value.ul_TCI_StateList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.ul_powerControl_r17 = (Uplink_powerControlId_r17)tmp_value;
    }
    if (present_2) {
        if (Decode_SetupRelease_PUCCH_ConfigurationList_r16(dec, value.pucch_ConfigurationListMulticast1_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SetupRelease_PUCCH_ConfigurationList_r16(dec, value.pucch_ConfigurationListMulticast2_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BWP_UplinkDedicated_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BWP_UplinkDedicated_ExtGroup2(BWP_UplinkDedicated_ExtGroup2& value)
{
    if (value.has_ul_TCI_StateList_r17) {
        Free_BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17(value.ul_TCI_StateList_r17);
    }
    if (value.has_ul_powerControl_r17) {
    }
    if (value.has_pucch_ConfigurationListMulticast1_r17) {
        Free_SetupRelease_PUCCH_ConfigurationList_r16(value.pucch_ConfigurationListMulticast1_r17);
    }
    if (value.has_pucch_ConfigurationListMulticast2_r17) {
        Free_SetupRelease_PUCCH_ConfigurationList_r16(value.pucch_ConfigurationListMulticast2_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BWP_UplinkDedicated_ExtGroup3：ASN.1 BWP_UplinkDedicated_ExtGroup3；源文件第 4673 行；扩展添加组 [[ ]]。
// Encode_BWP_UplinkDedicated_ExtGroup3 只读不分配；Decode_BWP_UplinkDedicated_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_BWP_UplinkDedicated_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BWP_UplinkDedicated_ExtGroup3(Encoder& enc, const BWP_UplinkDedicated_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_pucch_ConfigMulticast1_r17);
    enc.WriteBit(value.has_pucch_ConfigMulticast2_r17);
    if (value.has_pucch_ConfigMulticast1_r17) {
        Encode_SetupRelease_PUCCH_Config(enc, value.pucch_ConfigMulticast1_r17);
    }
    if (value.has_pucch_ConfigMulticast2_r17) {
        Encode_SetupRelease_PUCCH_Config(enc, value.pucch_ConfigMulticast2_r17);
    }
    return enc.Error();
}

ErrorCode Decode_BWP_UplinkDedicated_ExtGroup3(Decoder& dec, BWP_UplinkDedicated_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_PUCCH_Config(dec, value.pucch_ConfigMulticast1_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_PUCCH_Config(dec, value.pucch_ConfigMulticast2_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BWP_UplinkDedicated_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BWP_UplinkDedicated_ExtGroup3(BWP_UplinkDedicated_ExtGroup3& value)
{
    if (value.has_pucch_ConfigMulticast1_r17) {
        Free_SetupRelease_PUCCH_Config(value.pucch_ConfigMulticast1_r17);
    }
    if (value.has_pucch_ConfigMulticast2_r17) {
        Free_SetupRelease_PUCCH_Config(value.pucch_ConfigMulticast2_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BWP_UplinkDedicated_ExtGroup4：ASN.1 BWP_UplinkDedicated_ExtGroup4；源文件第 4677 行；扩展添加组 [[ ]]。
// Encode_BWP_UplinkDedicated_ExtGroup4 只读不分配；Decode_BWP_UplinkDedicated_ExtGroup4 可能 malloc（失败时内部已释放并清零）；Free_BWP_UplinkDedicated_ExtGroup4 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BWP_UplinkDedicated_ExtGroup4(Encoder& enc, const BWP_UplinkDedicated_ExtGroup4& value)
{
    (void)value;
    enc.WriteBit(value.has_pathlossReferenceRSToAddModList_r17);
    enc.WriteBit(value.has_pathlossReferenceRSToReleaseList_r17);
    if (value.has_pathlossReferenceRSToAddModList_r17) {
enc.WriteConstrainedLength(value.pathlossReferenceRSToAddModList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pathlossReferenceRSToAddModList_r17_count; ++i) {
    Encode_PathlossReferenceRS_r17(enc, value.pathlossReferenceRSToAddModList_r17_items[i]);
}
    }
    if (value.has_pathlossReferenceRSToReleaseList_r17) {
enc.WriteConstrainedLength(value.pathlossReferenceRSToReleaseList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pathlossReferenceRSToReleaseList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.pathlossReferenceRSToReleaseList_r17_items[i]), 0, 63);
}
    }
    return enc.Error();
}

ErrorCode Decode_BWP_UplinkDedicated_ExtGroup4(Decoder& dec, BWP_UplinkDedicated_ExtGroup4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.pathlossReferenceRSToAddModList_r17_count)) { goto fail; }
if (value.pathlossReferenceRSToAddModList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pathlossReferenceRSToAddModList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pathlossReferenceRSToAddModList_r17_count > 0u) {
    value.pathlossReferenceRSToAddModList_r17_items = (PathlossReferenceRS_r17*)std::malloc((std::size_t)value.pathlossReferenceRSToAddModList_r17_count * sizeof(PathlossReferenceRS_r17));
    if (value.pathlossReferenceRSToAddModList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pathlossReferenceRSToAddModList_r17_items, 0, (std::size_t)value.pathlossReferenceRSToAddModList_r17_count * sizeof(PathlossReferenceRS_r17));
}
for (std::uint32_t i = 0; i < value.pathlossReferenceRSToAddModList_r17_count; ++i) {
    if (Decode_PathlossReferenceRS_r17(dec, value.pathlossReferenceRSToAddModList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.pathlossReferenceRSToReleaseList_r17_count)) { goto fail; }
if (value.pathlossReferenceRSToReleaseList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pathlossReferenceRSToReleaseList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pathlossReferenceRSToReleaseList_r17_count > 0u) {
    value.pathlossReferenceRSToReleaseList_r17_items = (PathlossReferenceRS_Id_r17*)std::malloc((std::size_t)value.pathlossReferenceRSToReleaseList_r17_count * sizeof(PathlossReferenceRS_Id_r17));
    if (value.pathlossReferenceRSToReleaseList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pathlossReferenceRSToReleaseList_r17_items, 0, (std::size_t)value.pathlossReferenceRSToReleaseList_r17_count * sizeof(PathlossReferenceRS_Id_r17));
}
for (std::uint32_t i = 0; i < value.pathlossReferenceRSToReleaseList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.pathlossReferenceRSToReleaseList_r17_items[i] = (PathlossReferenceRS_Id_r17)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_BWP_UplinkDedicated_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BWP_UplinkDedicated_ExtGroup4(BWP_UplinkDedicated_ExtGroup4& value)
{
    if (value.has_pathlossReferenceRSToAddModList_r17) {
        if (value.pathlossReferenceRSToAddModList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pathlossReferenceRSToAddModList_r17_count; ++i) {
                Free_PathlossReferenceRS_r17(value.pathlossReferenceRSToAddModList_r17_items[i]);
            }
            std::free(value.pathlossReferenceRSToAddModList_r17_items);
            value.pathlossReferenceRSToAddModList_r17_items = nullptr;
        }
        value.pathlossReferenceRSToAddModList_r17_count = 0;
    }
    if (value.has_pathlossReferenceRSToReleaseList_r17) {
        if (value.pathlossReferenceRSToReleaseList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pathlossReferenceRSToReleaseList_r17_count; ++i) {
            }
            std::free(value.pathlossReferenceRSToReleaseList_r17_items);
            value.pathlossReferenceRSToReleaseList_r17_items = nullptr;
        }
        value.pathlossReferenceRSToReleaseList_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CG_StartingOffsets_r16：ASN.1 CG-StartingOffsets-r16；源文件第 5656 行；SEQUENCE。
// Encode_CG_StartingOffsets_r16 只读不分配；Decode_CG_StartingOffsets_r16 可能 malloc（失败时内部已释放并清零）；Free_CG_StartingOffsets_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CG_StartingOffsets_r16(Encoder& enc, const CG_StartingOffsets_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_cg_StartingFullBW_InsideCOT_r16);
    enc.WriteBit(value.has_cg_StartingFullBW_OutsideCOT_r16);
    enc.WriteBit(value.has_cg_StartingPartialBW_InsideCOT_r16);
    enc.WriteBit(value.has_cg_StartingPartialBW_OutsideCOT_r16);
    if (value.has_cg_StartingFullBW_InsideCOT_r16) {
enc.WriteConstrainedLength(value.cg_StartingFullBW_InsideCOT_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cg_StartingFullBW_InsideCOT_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.cg_StartingFullBW_InsideCOT_r16_items[i]), 0, 6);
}
    }
    if (value.has_cg_StartingFullBW_OutsideCOT_r16) {
enc.WriteConstrainedLength(value.cg_StartingFullBW_OutsideCOT_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cg_StartingFullBW_OutsideCOT_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.cg_StartingFullBW_OutsideCOT_r16_items[i]), 0, 6);
}
    }
    if (value.has_cg_StartingPartialBW_InsideCOT_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cg_StartingPartialBW_InsideCOT_r16), 0, 6);
    }
    if (value.has_cg_StartingPartialBW_OutsideCOT_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cg_StartingPartialBW_OutsideCOT_r16), 0, 6);
    }
    return enc.Error();
}

ErrorCode Decode_CG_StartingOffsets_r16(Decoder& dec, CG_StartingOffsets_r16& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.cg_StartingFullBW_InsideCOT_r16_count)) { goto fail; }
if (value.cg_StartingFullBW_InsideCOT_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cg_StartingFullBW_InsideCOT_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cg_StartingFullBW_InsideCOT_r16_count > 0u) {
    value.cg_StartingFullBW_InsideCOT_r16_items = (int64_t*)std::malloc((std::size_t)value.cg_StartingFullBW_InsideCOT_r16_count * sizeof(int64_t));
    if (value.cg_StartingFullBW_InsideCOT_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cg_StartingFullBW_InsideCOT_r16_items, 0, (std::size_t)value.cg_StartingFullBW_InsideCOT_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.cg_StartingFullBW_InsideCOT_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
    value.cg_StartingFullBW_InsideCOT_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.cg_StartingFullBW_OutsideCOT_r16_count)) { goto fail; }
if (value.cg_StartingFullBW_OutsideCOT_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cg_StartingFullBW_OutsideCOT_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cg_StartingFullBW_OutsideCOT_r16_count > 0u) {
    value.cg_StartingFullBW_OutsideCOT_r16_items = (int64_t*)std::malloc((std::size_t)value.cg_StartingFullBW_OutsideCOT_r16_count * sizeof(int64_t));
    if (value.cg_StartingFullBW_OutsideCOT_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cg_StartingFullBW_OutsideCOT_r16_items, 0, (std::size_t)value.cg_StartingFullBW_OutsideCOT_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.cg_StartingFullBW_OutsideCOT_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
    value.cg_StartingFullBW_OutsideCOT_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.cg_StartingPartialBW_InsideCOT_r16 = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.cg_StartingPartialBW_OutsideCOT_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CG_StartingOffsets_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CG_StartingOffsets_r16(CG_StartingOffsets_r16& value)
{
    if (value.has_cg_StartingFullBW_InsideCOT_r16) {
        if (value.cg_StartingFullBW_InsideCOT_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.cg_StartingFullBW_InsideCOT_r16_count; ++i) {
            }
            std::free(value.cg_StartingFullBW_InsideCOT_r16_items);
            value.cg_StartingFullBW_InsideCOT_r16_items = nullptr;
        }
        value.cg_StartingFullBW_InsideCOT_r16_count = 0;
    }
    if (value.has_cg_StartingFullBW_OutsideCOT_r16) {
        if (value.cg_StartingFullBW_OutsideCOT_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.cg_StartingFullBW_OutsideCOT_r16_count; ++i) {
            }
            std::free(value.cg_StartingFullBW_OutsideCOT_r16_items);
            value.cg_StartingFullBW_OutsideCOT_r16_items = nullptr;
        }
        value.cg_StartingFullBW_OutsideCOT_r16_count = 0;
    }
    if (value.has_cg_StartingPartialBW_InsideCOT_r16) {
    }
    if (value.has_cg_StartingPartialBW_OutsideCOT_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ConfiguredGrantConfig_ExtGroup1：ASN.1 ConfiguredGrantConfig_ExtGroup1；源文件第 5582 行；扩展添加组 [[ ]]。
// Encode_ConfiguredGrantConfig_ExtGroup1 只读不分配；Decode_ConfiguredGrantConfig_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_ConfiguredGrantConfig_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ConfiguredGrantConfig_ExtGroup1(Encoder& enc, const ConfiguredGrantConfig_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_cg_RetransmissionTimer_r16);
    enc.WriteBit(value.has_cg_minDFI_Delay_r16);
    enc.WriteBit(value.has_cg_nrofPUSCH_InSlot_r16);
    enc.WriteBit(value.has_cg_nrofSlots_r16);
    enc.WriteBit(value.has_cg_StartingOffsets_r16);
    enc.WriteBit(value.has_cg_UCI_Multiplexing_r16);
    enc.WriteBit(value.has_cg_COT_SharingOffset_r16);
    enc.WriteBit(value.has_betaOffsetCG_UCI_r16);
    enc.WriteBit(value.has_cg_COT_SharingList_r16);
    enc.WriteBit(value.has_harq_ProcID_Offset_r16);
    enc.WriteBit(value.has_harq_ProcID_Offset2_r16);
    enc.WriteBit(value.has_configuredGrantConfigIndex_r16);
    enc.WriteBit(value.has_configuredGrantConfigIndexMAC_r16);
    enc.WriteBit(value.has_periodicityExt_r16);
    enc.WriteBit(value.has_startingFromRV0_r16);
    enc.WriteBit(value.has_phy_PriorityIndex_r16);
    enc.WriteBit(value.has_autonomousTx_r16);
    if (value.has_cg_RetransmissionTimer_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cg_RetransmissionTimer_r16), 1, 64);
    }
    if (value.has_cg_minDFI_Delay_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cg_minDFI_Delay_r16), 0, 16);
    }
    if (value.has_cg_nrofPUSCH_InSlot_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cg_nrofPUSCH_InSlot_r16), 1, 7);
    }
    if (value.has_cg_nrofSlots_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cg_nrofSlots_r16), 1, 40);
    }
    if (value.has_cg_StartingOffsets_r16) {
        Encode_CG_StartingOffsets_r16(enc, value.cg_StartingOffsets_r16);
    }
    if (value.has_cg_UCI_Multiplexing_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cg_UCI_Multiplexing_r16), 0, 0);
    }
    if (value.has_cg_COT_SharingOffset_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cg_COT_SharingOffset_r16), 1, 39);
    }
    if (value.has_betaOffsetCG_UCI_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.betaOffsetCG_UCI_r16), 0, 31);
    }
    if (value.has_cg_COT_SharingList_r16) {
enc.WriteConstrainedLength(value.cg_COT_SharingList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cg_COT_SharingList_r16_count; ++i) {
    Encode_CG_COT_Sharing_r16(enc, value.cg_COT_SharingList_r16_items[i]);
}
    }
    if (value.has_harq_ProcID_Offset_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.harq_ProcID_Offset_r16), 0, 15);
    }
    if (value.has_harq_ProcID_Offset2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.harq_ProcID_Offset2_r16), 0, 15);
    }
    if (value.has_configuredGrantConfigIndex_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.configuredGrantConfigIndex_r16), 0, 11);
    }
    if (value.has_configuredGrantConfigIndexMAC_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.configuredGrantConfigIndexMAC_r16), 0, 31);
    }
    if (value.has_periodicityExt_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.periodicityExt_r16), 1, 5120);
    }
    if (value.has_startingFromRV0_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.startingFromRV0_r16), 0, 1);
    }
    if (value.has_phy_PriorityIndex_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.phy_PriorityIndex_r16), 0, 1);
    }
    if (value.has_autonomousTx_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.autonomousTx_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_ConfiguredGrantConfig_ExtGroup1(Decoder& dec, ConfiguredGrantConfig_ExtGroup1& value)
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
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.cg_RetransmissionTimer_r16 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 16, tmp_value)) { goto fail; }
        value.cg_minDFI_Delay_r16 = (ConfiguredGrantConfig_ExtGroup1_Cg_minDFI_Delay_r16)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 7, tmp_value)) { goto fail; }
        value.cg_nrofPUSCH_InSlot_r16 = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 40, tmp_value)) { goto fail; }
        value.cg_nrofSlots_r16 = (int64_t)tmp_value;
    }
    if (present_4) {
        if (Decode_CG_StartingOffsets_r16(dec, value.cg_StartingOffsets_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        value.cg_UCI_Multiplexing_r16 = (ConfiguredGrantConfig_ExtGroup1_Cg_UCI_Multiplexing_r16)0;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 39, tmp_value)) { goto fail; }
        value.cg_COT_SharingOffset_r16 = (int64_t)tmp_value;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.betaOffsetCG_UCI_r16 = (int64_t)tmp_value;
    }
    if (present_8) {
if (!dec.ReadConstrainedLength(0u, 0u, value.cg_COT_SharingList_r16_count)) { goto fail; }
if (value.cg_COT_SharingList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cg_COT_SharingList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cg_COT_SharingList_r16_count > 0u) {
    value.cg_COT_SharingList_r16_items = (CG_COT_Sharing_r16*)std::malloc((std::size_t)value.cg_COT_SharingList_r16_count * sizeof(CG_COT_Sharing_r16));
    if (value.cg_COT_SharingList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cg_COT_SharingList_r16_items, 0, (std::size_t)value.cg_COT_SharingList_r16_count * sizeof(CG_COT_Sharing_r16));
}
for (std::uint32_t i = 0; i < value.cg_COT_SharingList_r16_count; ++i) {
    if (Decode_CG_COT_Sharing_r16(dec, value.cg_COT_SharingList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.harq_ProcID_Offset_r16 = (int64_t)tmp_value;
    }
    if (present_10) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.harq_ProcID_Offset2_r16 = (int64_t)tmp_value;
    }
    if (present_11) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 11, tmp_value)) { goto fail; }
        value.configuredGrantConfigIndex_r16 = (ConfiguredGrantConfigIndex_r16)tmp_value;
    }
    if (present_12) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.configuredGrantConfigIndexMAC_r16 = (ConfiguredGrantConfigIndexMAC_r16)tmp_value;
    }
    if (present_13) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 5120, tmp_value)) { goto fail; }
        value.periodicityExt_r16 = (int64_t)tmp_value;
    }
    if (present_14) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.startingFromRV0_r16 = (ConfiguredGrantConfig_ExtGroup1_StartingFromRV0_r16)tmp_value;
    }
    if (present_15) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.phy_PriorityIndex_r16 = (ConfiguredGrantConfig_ExtGroup1_Phy_PriorityIndex_r16)tmp_value;
    }
    if (present_16) {
        value.autonomousTx_r16 = (ConfiguredGrantConfig_ExtGroup1_AutonomousTx_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ConfiguredGrantConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ConfiguredGrantConfig_ExtGroup1(ConfiguredGrantConfig_ExtGroup1& value)
{
    if (value.has_cg_RetransmissionTimer_r16) {
    }
    if (value.has_cg_minDFI_Delay_r16) {
    }
    if (value.has_cg_nrofPUSCH_InSlot_r16) {
    }
    if (value.has_cg_nrofSlots_r16) {
    }
    if (value.has_cg_StartingOffsets_r16) {
        Free_CG_StartingOffsets_r16(value.cg_StartingOffsets_r16);
    }
    if (value.has_cg_UCI_Multiplexing_r16) {
    }
    if (value.has_cg_COT_SharingOffset_r16) {
    }
    if (value.has_betaOffsetCG_UCI_r16) {
    }
    if (value.has_cg_COT_SharingList_r16) {
        if (value.cg_COT_SharingList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.cg_COT_SharingList_r16_count; ++i) {
                Free_CG_COT_Sharing_r16(value.cg_COT_SharingList_r16_items[i]);
            }
            std::free(value.cg_COT_SharingList_r16_items);
            value.cg_COT_SharingList_r16_items = nullptr;
        }
        value.cg_COT_SharingList_r16_count = 0;
    }
    if (value.has_harq_ProcID_Offset_r16) {
    }
    if (value.has_harq_ProcID_Offset2_r16) {
    }
    if (value.has_configuredGrantConfigIndex_r16) {
    }
    if (value.has_configuredGrantConfigIndexMAC_r16) {
    }
    if (value.has_periodicityExt_r16) {
    }
    if (value.has_startingFromRV0_r16) {
    }
    if (value.has_phy_PriorityIndex_r16) {
    }
    if (value.has_autonomousTx_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BetaOffsetsCrossPriSelCG_r17_Dynamic_r17：ASN.1 dynamic-r17；源文件第 5664 行；SEQUENCE OF。
// Encode_BetaOffsetsCrossPriSelCG_r17_Dynamic_r17 只读不分配；Decode_BetaOffsetsCrossPriSelCG_r17_Dynamic_r17 可能 malloc（失败时内部已释放并清零）；Free_BetaOffsetsCrossPriSelCG_r17_Dynamic_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BetaOffsetsCrossPriSelCG_r17_Dynamic_r17(Encoder& enc, const BetaOffsetsCrossPriSelCG_r17_Dynamic_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_BetaOffsetsCrossPri_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_BetaOffsetsCrossPriSelCG_r17_Dynamic_r17(Decoder& dec, BetaOffsetsCrossPriSelCG_r17_Dynamic_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
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
    Free_BetaOffsetsCrossPriSelCG_r17_Dynamic_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BetaOffsetsCrossPriSelCG_r17_Dynamic_r17(BetaOffsetsCrossPriSelCG_r17_Dynamic_r17& value)
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
// BetaOffsetsCrossPriSelCG_r17：ASN.1 BetaOffsetsCrossPriSelCG-r17；源文件第 5663 行；CHOICE。
// Encode_BetaOffsetsCrossPriSelCG_r17 只读不分配；Decode_BetaOffsetsCrossPriSelCG_r17 可能 malloc（失败时内部已释放并清零）；Free_BetaOffsetsCrossPriSelCG_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BetaOffsetsCrossPriSelCG_r17(Encoder& enc, const BetaOffsetsCrossPriSelCG_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case BetaOffsetsCrossPriSelCG_r17_Tag_dynamic_r17:
        Encode_BetaOffsetsCrossPriSelCG_r17_Dynamic_r17(enc, value.u.dynamic_r17);
        break;
    case BetaOffsetsCrossPriSelCG_r17_Tag_semiStatic_r17:
        Encode_BetaOffsetsCrossPri_r17(enc, value.u.semiStatic_r17);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_BetaOffsetsCrossPriSelCG_r17(Decoder& dec, BetaOffsetsCrossPriSelCG_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (BetaOffsetsCrossPriSelCG_r17_Tag)root_index;
    switch (value.tag) {
    case BetaOffsetsCrossPriSelCG_r17_Tag_dynamic_r17: {
        if (Decode_BetaOffsetsCrossPriSelCG_r17_Dynamic_r17(dec, value.u.dynamic_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case BetaOffsetsCrossPriSelCG_r17_Tag_semiStatic_r17: {
        if (Decode_BetaOffsetsCrossPri_r17(dec, value.u.semiStatic_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BetaOffsetsCrossPriSelCG_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BetaOffsetsCrossPriSelCG_r17(BetaOffsetsCrossPriSelCG_r17& value)
{
    switch (value.tag) {
    case BetaOffsetsCrossPriSelCG_r17_Tag_dynamic_r17:
        Free_BetaOffsetsCrossPriSelCG_r17_Dynamic_r17(value.u.dynamic_r17);
        break;
    case BetaOffsetsCrossPriSelCG_r17_Tag_semiStatic_r17:
        Free_BetaOffsetsCrossPri_r17(value.u.semiStatic_r17);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_BetaOffsetsCrossPriSelCG_r17：ASN.1 SetupRelease<BetaOffsetsCrossPriSelCG-r17>；源文件第 5605 行；CHOICE。
// Encode_SetupRelease_BetaOffsetsCrossPriSelCG_r17 只读不分配；Decode_SetupRelease_BetaOffsetsCrossPriSelCG_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_BetaOffsetsCrossPriSelCG_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_BetaOffsetsCrossPriSelCG_r17(Encoder& enc, const SetupRelease_BetaOffsetsCrossPriSelCG_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_BetaOffsetsCrossPriSelCG_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_BetaOffsetsCrossPriSelCG_r17_Tag_setup:
        Encode_BetaOffsetsCrossPriSelCG_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_BetaOffsetsCrossPriSelCG_r17(Decoder& dec, SetupRelease_BetaOffsetsCrossPriSelCG_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_BetaOffsetsCrossPriSelCG_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_BetaOffsetsCrossPriSelCG_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_BetaOffsetsCrossPriSelCG_r17_Tag_setup: {
        if (Decode_BetaOffsetsCrossPriSelCG_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_BetaOffsetsCrossPriSelCG_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_BetaOffsetsCrossPriSelCG_r17(SetupRelease_BetaOffsetsCrossPriSelCG_r17& value)
{
    switch (value.tag) {
    case SetupRelease_BetaOffsetsCrossPriSelCG_r17_Tag_release:
        break;
    case SetupRelease_BetaOffsetsCrossPriSelCG_r17_Tag_setup:
        Free_BetaOffsetsCrossPriSelCG_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ConfiguredGrantConfig_ExtGroup2：ASN.1 ConfiguredGrantConfig_ExtGroup2；源文件第 5604 行；扩展添加组 [[ ]]。
// Encode_ConfiguredGrantConfig_ExtGroup2 只读不分配；Decode_ConfiguredGrantConfig_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_ConfiguredGrantConfig_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ConfiguredGrantConfig_ExtGroup2(Encoder& enc, const ConfiguredGrantConfig_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_cg_betaOffsetsCrossPri0_r17);
    enc.WriteBit(value.has_cg_betaOffsetsCrossPri1_r17);
    enc.WriteBit(value.has_mappingPattern_r17);
    enc.WriteBit(value.has_sequenceOffsetForRV_r17);
    enc.WriteBit(value.has_p0_PUSCH_Alpha2_r17);
    enc.WriteBit(value.has_powerControlLoopToUse2_r17);
    enc.WriteBit(value.has_cg_COT_SharingList_r17);
    enc.WriteBit(value.has_periodicityExt_r17);
    enc.WriteBit(value.has_repK_v1710);
    enc.WriteBit(value.has_nrofHARQ_Processes_v1700);
    enc.WriteBit(value.has_harq_ProcID_Offset2_v1700);
    enc.WriteBit(value.has_configuredGrantTimer_v1700);
    enc.WriteBit(value.has_cg_minDFI_Delay_v1710);
    if (value.has_cg_betaOffsetsCrossPri0_r17) {
        Encode_SetupRelease_BetaOffsetsCrossPriSelCG_r17(enc, value.cg_betaOffsetsCrossPri0_r17);
    }
    if (value.has_cg_betaOffsetsCrossPri1_r17) {
        Encode_SetupRelease_BetaOffsetsCrossPriSelCG_r17(enc, value.cg_betaOffsetsCrossPri1_r17);
    }
    if (value.has_mappingPattern_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mappingPattern_r17), 0, 1);
    }
    if (value.has_sequenceOffsetForRV_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sequenceOffsetForRV_r17), 0, 3);
    }
    if (value.has_p0_PUSCH_Alpha2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.p0_PUSCH_Alpha2_r17), 0, 29);
    }
    if (value.has_powerControlLoopToUse2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.powerControlLoopToUse2_r17), 0, 1);
    }
    if (value.has_cg_COT_SharingList_r17) {
enc.WriteConstrainedLength(value.cg_COT_SharingList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cg_COT_SharingList_r17_count; ++i) {
    Encode_CG_COT_Sharing_r17(enc, value.cg_COT_SharingList_r17_items[i]);
}
    }
    if (value.has_periodicityExt_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.periodicityExt_r17), 1, 40960);
    }
    if (value.has_repK_v1710) {
        enc.WriteConstrainedInteger((std::int64_t)(value.repK_v1710), 0, 3);
    }
    if (value.has_nrofHARQ_Processes_v1700) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrofHARQ_Processes_v1700), 17, 32);
    }
    if (value.has_harq_ProcID_Offset2_v1700) {
        enc.WriteConstrainedInteger((std::int64_t)(value.harq_ProcID_Offset2_v1700), 16, 31);
    }
    if (value.has_configuredGrantTimer_v1700) {
        enc.WriteConstrainedInteger((std::int64_t)(value.configuredGrantTimer_v1700), 33, 288);
    }
    if (value.has_cg_minDFI_Delay_v1710) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cg_minDFI_Delay_v1710), 238, 3584);
    }
    return enc.Error();
}

ErrorCode Decode_ConfiguredGrantConfig_ExtGroup2(Decoder& dec, ConfiguredGrantConfig_ExtGroup2& value)
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
        if (Decode_SetupRelease_BetaOffsetsCrossPriSelCG_r17(dec, value.cg_betaOffsetsCrossPri0_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_BetaOffsetsCrossPriSelCG_r17(dec, value.cg_betaOffsetsCrossPri1_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.mappingPattern_r17 = (ConfiguredGrantConfig_ExtGroup2_MappingPattern_r17)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.sequenceOffsetForRV_r17 = (int64_t)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 29, tmp_value)) { goto fail; }
        value.p0_PUSCH_Alpha2_r17 = (P0_PUSCH_AlphaSetId)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.powerControlLoopToUse2_r17 = (ConfiguredGrantConfig_ExtGroup2_PowerControlLoopToUse2_r17)tmp_value;
    }
    if (present_6) {
if (!dec.ReadConstrainedLength(0u, 0u, value.cg_COT_SharingList_r17_count)) { goto fail; }
if (value.cg_COT_SharingList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cg_COT_SharingList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cg_COT_SharingList_r17_count > 0u) {
    value.cg_COT_SharingList_r17_items = (CG_COT_Sharing_r17*)std::malloc((std::size_t)value.cg_COT_SharingList_r17_count * sizeof(CG_COT_Sharing_r17));
    if (value.cg_COT_SharingList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cg_COT_SharingList_r17_items, 0, (std::size_t)value.cg_COT_SharingList_r17_count * sizeof(CG_COT_Sharing_r17));
}
for (std::uint32_t i = 0; i < value.cg_COT_SharingList_r17_count; ++i) {
    if (Decode_CG_COT_Sharing_r17(dec, value.cg_COT_SharingList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 40960, tmp_value)) { goto fail; }
        value.periodicityExt_r17 = (int64_t)tmp_value;
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.repK_v1710 = (ConfiguredGrantConfig_ExtGroup2_RepK_v1710)tmp_value;
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(17, 32, tmp_value)) { goto fail; }
        value.nrofHARQ_Processes_v1700 = (int64_t)tmp_value;
    }
    if (present_10) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(16, 31, tmp_value)) { goto fail; }
        value.harq_ProcID_Offset2_v1700 = (int64_t)tmp_value;
    }
    if (present_11) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(33, 288, tmp_value)) { goto fail; }
        value.configuredGrantTimer_v1700 = (int64_t)tmp_value;
    }
    if (present_12) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(238, 3584, tmp_value)) { goto fail; }
        value.cg_minDFI_Delay_v1710 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ConfiguredGrantConfig_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ConfiguredGrantConfig_ExtGroup2(ConfiguredGrantConfig_ExtGroup2& value)
{
    if (value.has_cg_betaOffsetsCrossPri0_r17) {
        Free_SetupRelease_BetaOffsetsCrossPriSelCG_r17(value.cg_betaOffsetsCrossPri0_r17);
    }
    if (value.has_cg_betaOffsetsCrossPri1_r17) {
        Free_SetupRelease_BetaOffsetsCrossPriSelCG_r17(value.cg_betaOffsetsCrossPri1_r17);
    }
    if (value.has_mappingPattern_r17) {
    }
    if (value.has_sequenceOffsetForRV_r17) {
    }
    if (value.has_p0_PUSCH_Alpha2_r17) {
    }
    if (value.has_powerControlLoopToUse2_r17) {
    }
    if (value.has_cg_COT_SharingList_r17) {
        if (value.cg_COT_SharingList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.cg_COT_SharingList_r17_count; ++i) {
                Free_CG_COT_Sharing_r17(value.cg_COT_SharingList_r17_items[i]);
            }
            std::free(value.cg_COT_SharingList_r17_items);
            value.cg_COT_SharingList_r17_items = nullptr;
        }
        value.cg_COT_SharingList_r17_count = 0;
    }
    if (value.has_periodicityExt_r17) {
    }
    if (value.has_repK_v1710) {
    }
    if (value.has_nrofHARQ_Processes_v1700) {
    }
    if (value.has_harq_ProcID_Offset2_v1700) {
    }
    if (value.has_configuredGrantTimer_v1700) {
    }
    if (value.has_cg_minDFI_Delay_v1710) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ConfiguredGrantConfig_ExtGroup3：ASN.1 ConfiguredGrantConfig_ExtGroup3；源文件第 5619 行；扩展添加组 [[ ]]。
// Encode_ConfiguredGrantConfig_ExtGroup3 只读不分配；Decode_ConfiguredGrantConfig_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_ConfiguredGrantConfig_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ConfiguredGrantConfig_ExtGroup3(Encoder& enc, const ConfiguredGrantConfig_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_harq_ProcID_Offset_v1730);
    enc.WriteBit(value.has_cg_nrofSlots_r17);
    if (value.has_harq_ProcID_Offset_v1730) {
        enc.WriteConstrainedInteger((std::int64_t)(value.harq_ProcID_Offset_v1730), 16, 31);
    }
    if (value.has_cg_nrofSlots_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cg_nrofSlots_r17), 1, 320);
    }
    return enc.Error();
}

ErrorCode Decode_ConfiguredGrantConfig_ExtGroup3(Decoder& dec, ConfiguredGrantConfig_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(16, 31, tmp_value)) { goto fail; }
        value.harq_ProcID_Offset_v1730 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 320, tmp_value)) { goto fail; }
        value.cg_nrofSlots_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ConfiguredGrantConfig_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ConfiguredGrantConfig_ExtGroup3(ConfiguredGrantConfig_ExtGroup3& value)
{
    if (value.has_harq_ProcID_Offset_v1730) {
    }
    if (value.has_cg_nrofSlots_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ConfiguredGrantConfig_ExtGroup4_Uto_UCI_Config_r18：ASN.1 uto-UCI-Config-r18；源文件第 5626 行；SEQUENCE。
// Encode_ConfiguredGrantConfig_ExtGroup4_Uto_UCI_Config_r18 只读不分配；Decode_ConfiguredGrantConfig_ExtGroup4_Uto_UCI_Config_r18 可能 malloc（失败时内部已释放并清零）；Free_ConfiguredGrantConfig_ExtGroup4_Uto_UCI_Config_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ConfiguredGrantConfig_ExtGroup4_Uto_UCI_Config_r18(Encoder& enc, const ConfiguredGrantConfig_ExtGroup4_Uto_UCI_Config_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofBitsInUTO_UCI_r18), 3, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.betaOffsetUTO_UCI_r18), 0, 31);
    return enc.Error();
}

ErrorCode Decode_ConfiguredGrantConfig_ExtGroup4_Uto_UCI_Config_r18(Decoder& dec, ConfiguredGrantConfig_ExtGroup4_Uto_UCI_Config_r18& value)
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
        if (!dec.ReadConstrainedInteger(3, 8, tmp_value)) { goto fail; }
        value.nrofBitsInUTO_UCI_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.betaOffsetUTO_UCI_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ConfiguredGrantConfig_ExtGroup4_Uto_UCI_Config_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ConfiguredGrantConfig_ExtGroup4_Uto_UCI_Config_r18(ConfiguredGrantConfig_ExtGroup4_Uto_UCI_Config_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ConfiguredGrantConfig_ExtGroup4：ASN.1 ConfiguredGrantConfig_ExtGroup4；源文件第 5623 行；扩展添加组 [[ ]]。
// Encode_ConfiguredGrantConfig_ExtGroup4 只读不分配；Decode_ConfiguredGrantConfig_ExtGroup4 可能 malloc（失败时内部已释放并清零）；Free_ConfiguredGrantConfig_ExtGroup4 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ConfiguredGrantConfig_ExtGroup4(Encoder& enc, const ConfiguredGrantConfig_ExtGroup4& value)
{
    (void)value;
    enc.WriteBit(value.has_disableCG_RetransmissionMonitoring_r18);
    enc.WriteBit(value.has_nrofSlotsInCG_Period_r18);
    enc.WriteBit(value.has_uto_UCI_Config_r18);
    if (value.has_disableCG_RetransmissionMonitoring_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.disableCG_RetransmissionMonitoring_r18), 0, 0);
    }
    if (value.has_nrofSlotsInCG_Period_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrofSlotsInCG_Period_r18), 2, 32);
    }
    if (value.has_uto_UCI_Config_r18) {
        Encode_ConfiguredGrantConfig_ExtGroup4_Uto_UCI_Config_r18(enc, value.uto_UCI_Config_r18);
    }
    return enc.Error();
}

ErrorCode Decode_ConfiguredGrantConfig_ExtGroup4(Decoder& dec, ConfiguredGrantConfig_ExtGroup4& value)
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
        value.disableCG_RetransmissionMonitoring_r18 = (ConfiguredGrantConfig_ExtGroup4_DisableCG_RetransmissionMonitoring_r18)0;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 32, tmp_value)) { goto fail; }
        value.nrofSlotsInCG_Period_r18 = (int64_t)tmp_value;
    }
    if (present_2) {
        if (Decode_ConfiguredGrantConfig_ExtGroup4_Uto_UCI_Config_r18(dec, value.uto_UCI_Config_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ConfiguredGrantConfig_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ConfiguredGrantConfig_ExtGroup4(ConfiguredGrantConfig_ExtGroup4& value)
{
    if (value.has_disableCG_RetransmissionMonitoring_r18) {
    }
    if (value.has_nrofSlotsInCG_Period_r18) {
    }
    if (value.has_uto_UCI_Config_r18) {
        Free_ConfiguredGrantConfig_ExtGroup4_Uto_UCI_Config_r18(value.uto_UCI_Config_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CG_UCI_OnPUSCH_Dynamic：ASN.1 dynamic；源文件第 5635 行；SEQUENCE OF。
// Encode_CG_UCI_OnPUSCH_Dynamic 只读不分配；Decode_CG_UCI_OnPUSCH_Dynamic 可能 malloc（失败时内部已释放并清零）；Free_CG_UCI_OnPUSCH_Dynamic 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CG_UCI_OnPUSCH_Dynamic(Encoder& enc, const CG_UCI_OnPUSCH_Dynamic& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_BetaOffsets(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_CG_UCI_OnPUSCH_Dynamic(Decoder& dec, CG_UCI_OnPUSCH_Dynamic& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
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
    Free_CG_UCI_OnPUSCH_Dynamic(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CG_UCI_OnPUSCH_Dynamic(CG_UCI_OnPUSCH_Dynamic& value)
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
// CG_UCI_OnPUSCH：ASN.1 CG-UCI-OnPUSCH；源文件第 5634 行；CHOICE。
// Encode_CG_UCI_OnPUSCH 只读不分配；Decode_CG_UCI_OnPUSCH 可能 malloc（失败时内部已释放并清零）；Free_CG_UCI_OnPUSCH 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CG_UCI_OnPUSCH(Encoder& enc, const CG_UCI_OnPUSCH& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CG_UCI_OnPUSCH_Tag_dynamic:
        Encode_CG_UCI_OnPUSCH_Dynamic(enc, value.u.dynamic);
        break;
    case CG_UCI_OnPUSCH_Tag_semiStatic:
        Encode_BetaOffsets(enc, value.u.semiStatic);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CG_UCI_OnPUSCH(Decoder& dec, CG_UCI_OnPUSCH& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CG_UCI_OnPUSCH_Tag)root_index;
    switch (value.tag) {
    case CG_UCI_OnPUSCH_Tag_dynamic: {
        if (Decode_CG_UCI_OnPUSCH_Dynamic(dec, value.u.dynamic) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case CG_UCI_OnPUSCH_Tag_semiStatic: {
        if (Decode_BetaOffsets(dec, value.u.semiStatic) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CG_UCI_OnPUSCH(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CG_UCI_OnPUSCH(CG_UCI_OnPUSCH& value)
{
    switch (value.tag) {
    case CG_UCI_OnPUSCH_Tag_dynamic:
        Free_CG_UCI_OnPUSCH_Dynamic(value.u.dynamic);
        break;
    case CG_UCI_OnPUSCH_Tag_semiStatic:
        Free_BetaOffsets(value.u.semiStatic);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_CG_UCI_OnPUSCH：ASN.1 SetupRelease<CG-UCI-OnPUSCH>；源文件第 5515 行；CHOICE。
// Encode_SetupRelease_CG_UCI_OnPUSCH 只读不分配；Decode_SetupRelease_CG_UCI_OnPUSCH 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_CG_UCI_OnPUSCH 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_CG_UCI_OnPUSCH(Encoder& enc, const SetupRelease_CG_UCI_OnPUSCH& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_CG_UCI_OnPUSCH_Tag_release:
        (void)0;
        break;
    case SetupRelease_CG_UCI_OnPUSCH_Tag_setup:
        Encode_CG_UCI_OnPUSCH(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_CG_UCI_OnPUSCH(Decoder& dec, SetupRelease_CG_UCI_OnPUSCH& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_CG_UCI_OnPUSCH_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_CG_UCI_OnPUSCH_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_CG_UCI_OnPUSCH_Tag_setup: {
        if (Decode_CG_UCI_OnPUSCH(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_CG_UCI_OnPUSCH(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_CG_UCI_OnPUSCH(SetupRelease_CG_UCI_OnPUSCH& value)
{
    switch (value.tag) {
    case SetupRelease_CG_UCI_OnPUSCH_Tag_release:
        break;
    case SetupRelease_CG_UCI_OnPUSCH_Tag_setup:
        Free_CG_UCI_OnPUSCH(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1：ASN.1 ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1；源文件第 5545 行；扩展添加组 [[ ]]。
// Encode_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1 只读不分配；Decode_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1(Encoder& enc, const ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_pusch_RepTypeIndicator_r16);
    enc.WriteBit(value.has_frequencyHoppingPUSCH_RepTypeB_r16);
    enc.WriteBit(value.has_timeReferenceSFN_r16);
    if (value.has_pusch_RepTypeIndicator_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_RepTypeIndicator_r16), 0, 1);
    }
    if (value.has_frequencyHoppingPUSCH_RepTypeB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.frequencyHoppingPUSCH_RepTypeB_r16), 0, 1);
    }
    if (value.has_timeReferenceSFN_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.timeReferenceSFN_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1(Decoder& dec, ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1& value)
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
        value.pusch_RepTypeIndicator_r16 = (ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1_Pusch_RepTypeIndicator_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.frequencyHoppingPUSCH_RepTypeB_r16 = (ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1_FrequencyHoppingPUSCH_RepTypeB_r16)tmp_value;
    }
    if (present_2) {
        value.timeReferenceSFN_r16 = (ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1_TimeReferenceSFN_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1(ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1& value)
{
    if (value.has_pusch_RepTypeIndicator_r16) {
    }
    if (value.has_frequencyHoppingPUSCH_RepTypeB_r16) {
    }
    if (value.has_timeReferenceSFN_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17：ASN.1 sdt-SSB-Subset-r17；源文件第 5670 行；CHOICE。
// Encode_CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17 只读不分配；Decode_CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17 可能 malloc（失败时内部已释放并清零）；Free_CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17(Encoder& enc, const CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17_Tag_shortBitmap_r17:
        enc.WriteFixedBitString(value.u.shortBitmap_r17.bytes, value.u.shortBitmap_r17.bitLength, 4, 4);
        break;
    case CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17_Tag_mediumBitmap_r17:
        enc.WriteFixedBitString(value.u.mediumBitmap_r17.bytes, value.u.mediumBitmap_r17.bitLength, 8, 8);
        break;
    case CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17_Tag_longBitmap_r17:
        enc.WriteFixedBitString(value.u.longBitmap_r17.bytes, value.u.longBitmap_r17.bitLength, 64, 64);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17(Decoder& dec, CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17_Tag)root_index;
    switch (value.tag) {
    case CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17_Tag_shortBitmap_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 4)) { goto fail; }
        string_length = 4;
        value.u.shortBitmap_r17.bytes = string_bytes;
        value.u.shortBitmap_r17.bitLength = string_length;
        break;
    }
    case CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17_Tag_mediumBitmap_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.u.mediumBitmap_r17.bytes = string_bytes;
        value.u.mediumBitmap_r17.bitLength = string_length;
        break;
    }
    case CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17_Tag_longBitmap_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 64)) { goto fail; }
        string_length = 64;
        value.u.longBitmap_r17.bytes = string_bytes;
        value.u.longBitmap_r17.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17(CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17& value)
{
    switch (value.tag) {
    case CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17_Tag_shortBitmap_r17:
        std::free(value.u.shortBitmap_r17.bytes);
        break;
    case CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17_Tag_mediumBitmap_r17:
        std::free(value.u.mediumBitmap_r17.bytes);
        break;
    case CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17_Tag_longBitmap_r17:
        std::free(value.u.longBitmap_r17.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17：ASN.1 sdt-DMRS-Ports-r17；源文件第 5678 行；CHOICE。
// Encode_CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17 只读不分配；Decode_CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17 可能 malloc（失败时内部已释放并清零）；Free_CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17(Encoder& enc, const CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17_Tag_dmrsType1_r17:
        enc.WriteFixedBitString(value.u.dmrsType1_r17.bytes, value.u.dmrsType1_r17.bitLength, 8, 8);
        break;
    case CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17_Tag_dmrsType2_r17:
        enc.WriteFixedBitString(value.u.dmrsType2_r17.bytes, value.u.dmrsType2_r17.bitLength, 12, 12);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17(Decoder& dec, CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17_Tag)root_index;
    switch (value.tag) {
    case CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17_Tag_dmrsType1_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.u.dmrsType1_r17.bytes = string_bytes;
        value.u.dmrsType1_r17.bitLength = string_length;
        break;
    }
    case CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17_Tag_dmrsType2_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 12)) { goto fail; }
        string_length = 12;
        value.u.dmrsType2_r17.bytes = string_bytes;
        value.u.dmrsType2_r17.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17(CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17& value)
{
    switch (value.tag) {
    case CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17_Tag_dmrsType1_r17:
        std::free(value.u.dmrsType1_r17.bytes);
        break;
    case CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17_Tag_dmrsType2_r17:
        std::free(value.u.dmrsType2_r17.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CG_SDT_Configuration_r17：ASN.1 CG-SDT-Configuration-r17；源文件第 5668 行；SEQUENCE。
// Encode_CG_SDT_Configuration_r17 只读不分配；Decode_CG_SDT_Configuration_r17 可能 malloc（失败时内部已释放并清零）；Free_CG_SDT_Configuration_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CG_SDT_Configuration_r17(Encoder& enc, const CG_SDT_Configuration_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_cg_SDT_RetransmissionTimer);
    enc.WriteBit(value.has_sdt_SSB_Subset_r17);
    enc.WriteBit(value.has_sdt_SSB_PerCG_PUSCH_r17);
    enc.WriteBit(value.has_sdt_P0_PUSCH_r17);
    enc.WriteBit(value.has_sdt_Alpha_r17);
    enc.WriteBit(value.has_sdt_DMRS_Ports_r17);
    enc.WriteBit(value.has_sdt_NrofDMRS_Sequences_r17);
    if (value.has_cg_SDT_RetransmissionTimer) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cg_SDT_RetransmissionTimer), 1, 64);
    }
    if (value.has_sdt_SSB_Subset_r17) {
        Encode_CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17(enc, value.sdt_SSB_Subset_r17);
    }
    if (value.has_sdt_SSB_PerCG_PUSCH_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sdt_SSB_PerCG_PUSCH_r17), 0, 7);
    }
    if (value.has_sdt_P0_PUSCH_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sdt_P0_PUSCH_r17), -16, 15);
    }
    if (value.has_sdt_Alpha_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sdt_Alpha_r17), 0, 7);
    }
    if (value.has_sdt_DMRS_Ports_r17) {
        Encode_CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17(enc, value.sdt_DMRS_Ports_r17);
    }
    if (value.has_sdt_NrofDMRS_Sequences_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sdt_NrofDMRS_Sequences_r17), 1, 2);
    }
    return enc.Error();
}

ErrorCode Decode_CG_SDT_Configuration_r17(Decoder& dec, CG_SDT_Configuration_r17& value)
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
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.cg_SDT_RetransmissionTimer = (int64_t)tmp_value;
    }
    if (present_1) {
        if (Decode_CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17(dec, value.sdt_SSB_Subset_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sdt_SSB_PerCG_PUSCH_r17 = (CG_SDT_Configuration_r17_Sdt_SSB_PerCG_PUSCH_r17)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-16, 15, tmp_value)) { goto fail; }
        value.sdt_P0_PUSCH_r17 = (int64_t)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sdt_Alpha_r17 = (CG_SDT_Configuration_r17_Sdt_Alpha_r17)tmp_value;
    }
    if (present_5) {
        if (Decode_CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17(dec, value.sdt_DMRS_Ports_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.sdt_NrofDMRS_Sequences_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CG_SDT_Configuration_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CG_SDT_Configuration_r17(CG_SDT_Configuration_r17& value)
{
    if (value.has_cg_SDT_RetransmissionTimer) {
    }
    if (value.has_sdt_SSB_Subset_r17) {
        Free_CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17(value.sdt_SSB_Subset_r17);
    }
    if (value.has_sdt_SSB_PerCG_PUSCH_r17) {
    }
    if (value.has_sdt_P0_PUSCH_r17) {
    }
    if (value.has_sdt_Alpha_r17) {
    }
    if (value.has_sdt_DMRS_Ports_r17) {
        Free_CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17(value.sdt_DMRS_Ports_r17);
    }
    if (value.has_sdt_NrofDMRS_Sequences_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup2：ASN.1 ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup2；源文件第 5550 行；扩展添加组 [[ ]]。
// Encode_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup2 只读不分配；Decode_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup2(Encoder& enc, const ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_pathlossReferenceIndex2_r17);
    enc.WriteBit(value.has_srs_ResourceIndicator2_r17);
    enc.WriteBit(value.has_precodingAndNumberOfLayers2_r17);
    enc.WriteBit(value.has_timeDomainAllocation_v1710);
    enc.WriteBit(value.has_timeDomainOffset_r17);
    enc.WriteBit(value.has_cg_SDT_Configuration_r17);
    if (value.has_pathlossReferenceIndex2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pathlossReferenceIndex2_r17), 0, 3);
    }
    if (value.has_srs_ResourceIndicator2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_ResourceIndicator2_r17), 0, 15);
    }
    if (value.has_precodingAndNumberOfLayers2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.precodingAndNumberOfLayers2_r17), 0, 63);
    }
    if (value.has_timeDomainAllocation_v1710) {
        enc.WriteConstrainedInteger((std::int64_t)(value.timeDomainAllocation_v1710), 16, 63);
    }
    if (value.has_timeDomainOffset_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.timeDomainOffset_r17), 0, 40959);
    }
    if (value.has_cg_SDT_Configuration_r17) {
        Encode_CG_SDT_Configuration_r17(enc, value.cg_SDT_Configuration_r17);
    }
    return enc.Error();
}

ErrorCode Decode_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup2(Decoder& dec, ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup2& value)
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
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.pathlossReferenceIndex2_r17 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.srs_ResourceIndicator2_r17 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.precodingAndNumberOfLayers2_r17 = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(16, 63, tmp_value)) { goto fail; }
        value.timeDomainAllocation_v1710 = (int64_t)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 40959, tmp_value)) { goto fail; }
        value.timeDomainOffset_r17 = (int64_t)tmp_value;
    }
    if (present_5) {
        if (Decode_CG_SDT_Configuration_r17(dec, value.cg_SDT_Configuration_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup2(ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup2& value)
{
    if (value.has_pathlossReferenceIndex2_r17) {
    }
    if (value.has_srs_ResourceIndicator2_r17) {
    }
    if (value.has_precodingAndNumberOfLayers2_r17) {
    }
    if (value.has_timeDomainAllocation_v1710) {
    }
    if (value.has_timeDomainOffset_r17) {
    }
    if (value.has_cg_SDT_Configuration_r17) {
        Free_CG_SDT_Configuration_r17(value.cg_SDT_Configuration_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18：ASN.1 rrc-SSB-Subset-r18；源文件第 5688 行；CHOICE。
// Encode_CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18 只读不分配；Decode_CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18 可能 malloc（失败时内部已释放并清零）；Free_CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18(Encoder& enc, const CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18_Tag_shortBitmap_r18:
        enc.WriteFixedBitString(value.u.shortBitmap_r18.bytes, value.u.shortBitmap_r18.bitLength, 4, 4);
        break;
    case CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18_Tag_mediumBitmap_r18:
        enc.WriteFixedBitString(value.u.mediumBitmap_r18.bytes, value.u.mediumBitmap_r18.bitLength, 8, 8);
        break;
    case CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18_Tag_longBitmap_r18:
        enc.WriteFixedBitString(value.u.longBitmap_r18.bytes, value.u.longBitmap_r18.bitLength, 64, 64);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18(Decoder& dec, CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18_Tag)root_index;
    switch (value.tag) {
    case CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18_Tag_shortBitmap_r18: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 4)) { goto fail; }
        string_length = 4;
        value.u.shortBitmap_r18.bytes = string_bytes;
        value.u.shortBitmap_r18.bitLength = string_length;
        break;
    }
    case CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18_Tag_mediumBitmap_r18: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.u.mediumBitmap_r18.bytes = string_bytes;
        value.u.mediumBitmap_r18.bitLength = string_length;
        break;
    }
    case CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18_Tag_longBitmap_r18: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 64)) { goto fail; }
        string_length = 64;
        value.u.longBitmap_r18.bytes = string_bytes;
        value.u.longBitmap_r18.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18(CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18& value)
{
    switch (value.tag) {
    case CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18_Tag_shortBitmap_r18:
        std::free(value.u.shortBitmap_r18.bytes);
        break;
    case CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18_Tag_mediumBitmap_r18:
        std::free(value.u.mediumBitmap_r18.bytes);
        break;
    case CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18_Tag_longBitmap_r18:
        std::free(value.u.longBitmap_r18.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18：ASN.1 rrc-DMRS-Ports-r18；源文件第 5696 行；CHOICE。
// Encode_CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18 只读不分配；Decode_CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18 可能 malloc（失败时内部已释放并清零）；Free_CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18(Encoder& enc, const CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18_Tag_dmrsType1_r18:
        enc.WriteFixedBitString(value.u.dmrsType1_r18.bytes, value.u.dmrsType1_r18.bitLength, 8, 8);
        break;
    case CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18_Tag_dmrsType2_r18:
        enc.WriteFixedBitString(value.u.dmrsType2_r18.bytes, value.u.dmrsType2_r18.bitLength, 12, 12);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18(Decoder& dec, CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18_Tag)root_index;
    switch (value.tag) {
    case CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18_Tag_dmrsType1_r18: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.u.dmrsType1_r18.bytes = string_bytes;
        value.u.dmrsType1_r18.bitLength = string_length;
        break;
    }
    case CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18_Tag_dmrsType2_r18: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 12)) { goto fail; }
        string_length = 12;
        value.u.dmrsType2_r18.bytes = string_bytes;
        value.u.dmrsType2_r18.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18(CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18& value)
{
    switch (value.tag) {
    case CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18_Tag_dmrsType1_r18:
        std::free(value.u.dmrsType1_r18.bytes);
        break;
    case CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18_Tag_dmrsType2_r18:
        std::free(value.u.dmrsType2_r18.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CG_RRC_Configuration_r18：ASN.1 CG-RRC-Configuration-r18；源文件第 5685 行；SEQUENCE。
// Encode_CG_RRC_Configuration_r18 只读不分配；Decode_CG_RRC_Configuration_r18 可能 malloc（失败时内部已释放并清零）；Free_CG_RRC_Configuration_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CG_RRC_Configuration_r18(Encoder& enc, const CG_RRC_Configuration_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_cg_RRC_RetransmissionTimer_r18);
    enc.WriteBit(value.has_cg_RRC_RSRP_ThresholdSSB_r18);
    enc.WriteBit(value.has_rrc_SSB_Subset_r18);
    enc.WriteBit(value.has_rrc_SSB_PerCG_PUSCH_r18);
    enc.WriteBit(value.has_rrc_P0_PUSCH_r18);
    enc.WriteBit(value.has_rrc_Alpha_r18);
    enc.WriteBit(value.has_rrc_DMRS_Ports_r18);
    enc.WriteBit(value.has_rrc_NrofDMRS_Sequences_r18);
    if (value.has_cg_RRC_RetransmissionTimer_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cg_RRC_RetransmissionTimer_r18), 1, 64);
    }
    if (value.has_cg_RRC_RSRP_ThresholdSSB_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cg_RRC_RSRP_ThresholdSSB_r18), 0, 127);
    }
    if (value.has_rrc_SSB_Subset_r18) {
        Encode_CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18(enc, value.rrc_SSB_Subset_r18);
    }
    if (value.has_rrc_SSB_PerCG_PUSCH_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rrc_SSB_PerCG_PUSCH_r18), 0, 7);
    }
    if (value.has_rrc_P0_PUSCH_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rrc_P0_PUSCH_r18), -16, 15);
    }
    if (value.has_rrc_Alpha_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rrc_Alpha_r18), 0, 7);
    }
    if (value.has_rrc_DMRS_Ports_r18) {
        Encode_CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18(enc, value.rrc_DMRS_Ports_r18);
    }
    if (value.has_rrc_NrofDMRS_Sequences_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rrc_NrofDMRS_Sequences_r18), 1, 2);
    }
    return enc.Error();
}

ErrorCode Decode_CG_RRC_Configuration_r18(Decoder& dec, CG_RRC_Configuration_r18& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.cg_RRC_RetransmissionTimer_r18 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.cg_RRC_RSRP_ThresholdSSB_r18 = (RSRP_Range)tmp_value;
    }
    if (present_2) {
        if (Decode_CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18(dec, value.rrc_SSB_Subset_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.rrc_SSB_PerCG_PUSCH_r18 = (CG_RRC_Configuration_r18_Rrc_SSB_PerCG_PUSCH_r18)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-16, 15, tmp_value)) { goto fail; }
        value.rrc_P0_PUSCH_r18 = (int64_t)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.rrc_Alpha_r18 = (CG_RRC_Configuration_r18_Rrc_Alpha_r18)tmp_value;
    }
    if (present_6) {
        if (Decode_CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18(dec, value.rrc_DMRS_Ports_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.rrc_NrofDMRS_Sequences_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CG_RRC_Configuration_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CG_RRC_Configuration_r18(CG_RRC_Configuration_r18& value)
{
    if (value.has_cg_RRC_RetransmissionTimer_r18) {
    }
    if (value.has_cg_RRC_RSRP_ThresholdSSB_r18) {
    }
    if (value.has_rrc_SSB_Subset_r18) {
        Free_CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18(value.rrc_SSB_Subset_r18);
    }
    if (value.has_rrc_SSB_PerCG_PUSCH_r18) {
    }
    if (value.has_rrc_P0_PUSCH_r18) {
    }
    if (value.has_rrc_Alpha_r18) {
    }
    if (value.has_rrc_DMRS_Ports_r18) {
        Free_CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18(value.rrc_DMRS_Ports_r18);
    }
    if (value.has_rrc_NrofDMRS_Sequences_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3：ASN.1 ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3；源文件第 5558 行；扩展添加组 [[ ]]。
// Encode_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3 只读不分配；Decode_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3(Encoder& enc, const ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_srs_ResourceSetId_r18);
    enc.WriteBit(value.has_cg_LTM_Configuration_r18);
    enc.WriteBit(value.has_cg_SDT_PeriodicityExt_r18);
    enc.WriteBit(value.has_timeReferenceHyperSFN_r18);
    enc.WriteBit(value.has_cg_RRC_Configuration_r18);
    enc.WriteBit(value.has_applyIndicatedTCI_State_r18);
    if (value.has_srs_ResourceSetId_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_ResourceSetId_r18), 0, 15);
    }
    if (value.has_cg_LTM_Configuration_r18) {
        Encode_CG_RRC_Configuration_r18(enc, value.cg_LTM_Configuration_r18);
    }
    if (value.has_cg_SDT_PeriodicityExt_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cg_SDT_PeriodicityExt_r18), 0, 63);
    }
    if (value.has_timeReferenceHyperSFN_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.timeReferenceHyperSFN_r18), 0, 1023);
    }
    if (value.has_cg_RRC_Configuration_r18) {
        Encode_CG_RRC_Configuration_r18(enc, value.cg_RRC_Configuration_r18);
    }
    if (value.has_applyIndicatedTCI_State_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.applyIndicatedTCI_State_r18), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3(Decoder& dec, ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3& value)
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
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.srs_ResourceSetId_r18 = (SRS_ResourceSetId)tmp_value;
    }
    if (present_1) {
        if (Decode_CG_RRC_Configuration_r18(dec, value.cg_LTM_Configuration_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.cg_SDT_PeriodicityExt_r18 = (ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.timeReferenceHyperSFN_r18 = (int64_t)tmp_value;
    }
    if (present_4) {
        if (Decode_CG_RRC_Configuration_r18(dec, value.cg_RRC_Configuration_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.applyIndicatedTCI_State_r18 = (ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_ApplyIndicatedTCI_State_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3(ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3& value)
{
    if (value.has_srs_ResourceSetId_r18) {
    }
    if (value.has_cg_LTM_Configuration_r18) {
        Free_CG_RRC_Configuration_r18(value.cg_LTM_Configuration_r18);
    }
    if (value.has_cg_SDT_PeriodicityExt_r18) {
    }
    if (value.has_timeReferenceHyperSFN_r18) {
    }
    if (value.has_cg_RRC_Configuration_r18) {
        Free_CG_RRC_Configuration_r18(value.cg_RRC_Configuration_r18);
    }
    if (value.has_applyIndicatedTCI_State_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant：ASN.1 rrc-ConfiguredUplinkGrant；源文件第 5533 行；SEQUENCE。
// Encode_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant 只读不分配；Decode_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant 可能 malloc（失败时内部已释放并清零）；Free_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant(Encoder& enc, const ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_dmrs_SeqInitialization);
    enc.WriteBit(value.has_srs_ResourceIndicator);
    enc.WriteBit(value.has_frequencyHoppingOffset);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeDomainOffset), 0, 5119);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeDomainAllocation), 0, 15);
    enc.WriteFixedBitString(value.frequencyDomainAllocation.bytes, value.frequencyDomainAllocation.bitLength, 18, 18);
    enc.WriteConstrainedInteger((std::int64_t)(value.antennaPort), 0, 31);
    if (value.has_dmrs_SeqInitialization) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_SeqInitialization), 0, 1);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.precodingAndNumberOfLayers), 0, 63);
    if (value.has_srs_ResourceIndicator) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_ResourceIndicator), 0, 15);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.mcsAndTBS), 0, 31);
    if (value.has_frequencyHoppingOffset) {
        enc.WriteConstrainedInteger((std::int64_t)(value.frequencyHoppingOffset), 1, 274);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.pathlossReferenceIndex), 0, 3);
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant(Decoder& dec, ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant& value)
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
        if (!dec.ReadConstrainedInteger(0, 5119, tmp_value)) { goto fail; }
        value.timeDomainOffset = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeDomainAllocation = (int64_t)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 18)) { goto fail; }
        string_length = 18;
        value.frequencyDomainAllocation.bytes = string_bytes;
        value.frequencyDomainAllocation.bitLength = string_length;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.antennaPort = (int64_t)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.dmrs_SeqInitialization = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.precodingAndNumberOfLayers = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.srs_ResourceIndicator = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.mcsAndTBS = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 274, tmp_value)) { goto fail; }
        value.frequencyHoppingOffset = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.pathlossReferenceIndex = (int64_t)tmp_value;
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
    if (Decode_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    Free_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant(ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant& value)
{
    std::free(value.frequencyDomainAllocation.bytes);
    value.frequencyDomainAllocation.bytes = nullptr;
    value.frequencyDomainAllocation.bitLength = 0;
    if (value.has_dmrs_SeqInitialization) {
    }
    if (value.has_srs_ResourceIndicator) {
    }
    if (value.has_frequencyHoppingOffset) {
    }
    if (value.has_extGroup1) {
        Free_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ConfiguredGrantConfig：ASN.1 ConfiguredGrantConfig；源文件第 5510 行；SEQUENCE。
// Encode_ConfiguredGrantConfig 只读不分配；Decode_ConfiguredGrantConfig 可能 malloc（失败时内部已释放并清零）；Free_ConfiguredGrantConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ConfiguredGrantConfig(Encoder& enc, const ConfiguredGrantConfig& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_frequencyHopping);
    enc.WriteBit(value.has_mcs_Table);
    enc.WriteBit(value.has_mcs_TableTransformPrecoder);
    enc.WriteBit(value.has_uci_OnPUSCH);
    enc.WriteBit(value.has_rbg_Size);
    enc.WriteBit(value.has_transformPrecoder);
    enc.WriteBit(value.has_repK_RV);
    enc.WriteBit(value.has_configuredGrantTimer);
    enc.WriteBit(value.has_rrc_ConfiguredUplinkGrant);
    if (value.has_frequencyHopping) {
        enc.WriteConstrainedInteger((std::int64_t)(value.frequencyHopping), 0, 1);
    }
    Encode_DMRS_UplinkConfig(enc, value.cg_DMRS_Configuration);
    if (value.has_mcs_Table) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mcs_Table), 0, 1);
    }
    if (value.has_mcs_TableTransformPrecoder) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mcs_TableTransformPrecoder), 0, 1);
    }
    if (value.has_uci_OnPUSCH) {
        Encode_SetupRelease_CG_UCI_OnPUSCH(enc, value.uci_OnPUSCH);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.resourceAllocation), 0, 2);
    if (value.has_rbg_Size) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rbg_Size), 0, 0);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.powerControlLoopToUse), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.p0_PUSCH_Alpha), 0, 29);
    if (value.has_transformPrecoder) {
        enc.WriteConstrainedInteger((std::int64_t)(value.transformPrecoder), 0, 1);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofHARQ_Processes), 1, 16);
    enc.WriteConstrainedInteger((std::int64_t)(value.repK), 0, 3);
    if (value.has_repK_RV) {
        enc.WriteConstrainedInteger((std::int64_t)(value.repK_RV), 0, 2);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.periodicity), 0, 44);
    if (value.has_configuredGrantTimer) {
        enc.WriteConstrainedInteger((std::int64_t)(value.configuredGrantTimer), 1, 64);
    }
    if (value.has_rrc_ConfiguredUplinkGrant) {
        Encode_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant(enc, value.rrc_ConfiguredUplinkGrant);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(4u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        enc.WriteBit(value.has_extGroup4);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_ConfiguredGrantConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_ConfiguredGrantConfig_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_ConfiguredGrantConfig_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_ConfiguredGrantConfig_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_ConfiguredGrantConfig(Decoder& dec, ConfiguredGrantConfig& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.frequencyHopping = (ConfiguredGrantConfig_FrequencyHopping)tmp_value;
    }
    {
        if (Decode_DMRS_UplinkConfig(dec, value.cg_DMRS_Configuration) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.mcs_Table = (ConfiguredGrantConfig_Mcs_Table)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.mcs_TableTransformPrecoder = (ConfiguredGrantConfig_Mcs_TableTransformPrecoder)tmp_value;
    }
    if (present_3) {
        if (Decode_SetupRelease_CG_UCI_OnPUSCH(dec, value.uci_OnPUSCH) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.resourceAllocation = (ConfiguredGrantConfig_ResourceAllocation)tmp_value;
    }
    if (present_4) {
        value.rbg_Size = (ConfiguredGrantConfig_Rbg_Size)0;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.powerControlLoopToUse = (ConfiguredGrantConfig_PowerControlLoopToUse)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 29, tmp_value)) { goto fail; }
        value.p0_PUSCH_Alpha = (P0_PUSCH_AlphaSetId)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.transformPrecoder = (ConfiguredGrantConfig_TransformPrecoder)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.nrofHARQ_Processes = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.repK = (ConfiguredGrantConfig_RepK)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.repK_RV = (ConfiguredGrantConfig_RepK_RV)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 44, tmp_value)) { goto fail; }
        value.periodicity = (ConfiguredGrantConfig_Periodicity)tmp_value;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.configuredGrantTimer = (int64_t)tmp_value;
    }
    if (present_8) {
        if (Decode_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant(dec, value.rrc_ConfiguredUplinkGrant) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_ConfiguredGrantConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_ConfiguredGrantConfig_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_ConfiguredGrantConfig_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_ConfiguredGrantConfig_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    Free_ConfiguredGrantConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ConfiguredGrantConfig(ConfiguredGrantConfig& value)
{
    if (value.has_frequencyHopping) {
    }
    Free_DMRS_UplinkConfig(value.cg_DMRS_Configuration);
    if (value.has_mcs_Table) {
    }
    if (value.has_mcs_TableTransformPrecoder) {
    }
    if (value.has_uci_OnPUSCH) {
        Free_SetupRelease_CG_UCI_OnPUSCH(value.uci_OnPUSCH);
    }
    if (value.has_rbg_Size) {
    }
    if (value.has_transformPrecoder) {
    }
    if (value.has_repK_RV) {
    }
    if (value.has_configuredGrantTimer) {
    }
    if (value.has_rrc_ConfiguredUplinkGrant) {
        Free_ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant(value.rrc_ConfiguredUplinkGrant);
    }
    if (value.has_extGroup1) {
        Free_ConfiguredGrantConfig_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_ConfiguredGrantConfig_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_ConfiguredGrantConfig_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_ConfiguredGrantConfig_ExtGroup4(value.extGroup4);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_ConfiguredGrantConfig：ASN.1 SetupRelease<ConfiguredGrantConfig>；源文件第 4646 行；CHOICE。
// Encode_SetupRelease_ConfiguredGrantConfig 只读不分配；Decode_SetupRelease_ConfiguredGrantConfig 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_ConfiguredGrantConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_ConfiguredGrantConfig(Encoder& enc, const SetupRelease_ConfiguredGrantConfig& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_ConfiguredGrantConfig_Tag_release:
        (void)0;
        break;
    case SetupRelease_ConfiguredGrantConfig_Tag_setup:
        Encode_ConfiguredGrantConfig(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_ConfiguredGrantConfig(Decoder& dec, SetupRelease_ConfiguredGrantConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_ConfiguredGrantConfig_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_ConfiguredGrantConfig_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_ConfiguredGrantConfig_Tag_setup: {
        if (Decode_ConfiguredGrantConfig(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_ConfiguredGrantConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_ConfiguredGrantConfig(SetupRelease_ConfiguredGrantConfig& value)
{
    switch (value.tag) {
    case SetupRelease_ConfiguredGrantConfig_Tag_release:
        break;
    case SetupRelease_ConfiguredGrantConfig_Tag_setup:
        Free_ConfiguredGrantConfig(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_Config_ExtGroup1：ASN.1 SRS_Config_ExtGroup1；源文件第 13064 行；扩展添加组 [[ ]]。
// Encode_SRS_Config_ExtGroup1 只读不分配；Decode_SRS_Config_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SRS_Config_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_Config_ExtGroup1(Encoder& enc, const SRS_Config_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_srs_RequestDCI_1_2_r16);
    enc.WriteBit(value.has_srs_RequestDCI_0_2_r16);
    enc.WriteBit(value.has_srs_ResourceSetToAddModListDCI_0_2_r16);
    enc.WriteBit(value.has_srs_ResourceSetToReleaseListDCI_0_2_r16);
    enc.WriteBit(value.has_srs_PosResourceSetToReleaseList_r16);
    enc.WriteBit(value.has_srs_PosResourceSetToAddModList_r16);
    enc.WriteBit(value.has_srs_PosResourceToReleaseList_r16);
    enc.WriteBit(value.has_srs_PosResourceToAddModList_r16);
    if (value.has_srs_RequestDCI_1_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_RequestDCI_1_2_r16), 1, 2);
    }
    if (value.has_srs_RequestDCI_0_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_RequestDCI_0_2_r16), 1, 2);
    }
    if (value.has_srs_ResourceSetToAddModListDCI_0_2_r16) {
enc.WriteConstrainedLength(value.srs_ResourceSetToAddModListDCI_0_2_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.srs_ResourceSetToAddModListDCI_0_2_r16_count; ++i) {
    Encode_SRS_ResourceSet(enc, value.srs_ResourceSetToAddModListDCI_0_2_r16_items[i]);
}
    }
    if (value.has_srs_ResourceSetToReleaseListDCI_0_2_r16) {
enc.WriteConstrainedLength(value.srs_ResourceSetToReleaseListDCI_0_2_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.srs_ResourceSetToReleaseListDCI_0_2_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.srs_ResourceSetToReleaseListDCI_0_2_r16_items[i]), 0, 15);
}
    }
    if (value.has_srs_PosResourceSetToReleaseList_r16) {
enc.WriteConstrainedLength(value.srs_PosResourceSetToReleaseList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.srs_PosResourceSetToReleaseList_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.srs_PosResourceSetToReleaseList_r16_items[i]), 0, 15);
}
    }
    if (value.has_srs_PosResourceSetToAddModList_r16) {
enc.WriteConstrainedLength(value.srs_PosResourceSetToAddModList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.srs_PosResourceSetToAddModList_r16_count; ++i) {
    Encode_SRS_PosResourceSet_r16(enc, value.srs_PosResourceSetToAddModList_r16_items[i]);
}
    }
    if (value.has_srs_PosResourceToReleaseList_r16) {
enc.WriteConstrainedLength(value.srs_PosResourceToReleaseList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.srs_PosResourceToReleaseList_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.srs_PosResourceToReleaseList_r16_items[i]), 0, 63);
}
    }
    if (value.has_srs_PosResourceToAddModList_r16) {
enc.WriteConstrainedLength(value.srs_PosResourceToAddModList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.srs_PosResourceToAddModList_r16_count; ++i) {
    Encode_SRS_PosResource_r16(enc, value.srs_PosResourceToAddModList_r16_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_SRS_Config_ExtGroup1(Decoder& dec, SRS_Config_ExtGroup1& value)
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
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.srs_RequestDCI_1_2_r16 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.srs_RequestDCI_0_2_r16 = (int64_t)tmp_value;
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.srs_ResourceSetToAddModListDCI_0_2_r16_count)) { goto fail; }
if (value.srs_ResourceSetToAddModListDCI_0_2_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.srs_ResourceSetToAddModListDCI_0_2_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.srs_ResourceSetToAddModListDCI_0_2_r16_count > 0u) {
    value.srs_ResourceSetToAddModListDCI_0_2_r16_items = (SRS_ResourceSet*)std::malloc((std::size_t)value.srs_ResourceSetToAddModListDCI_0_2_r16_count * sizeof(SRS_ResourceSet));
    if (value.srs_ResourceSetToAddModListDCI_0_2_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.srs_ResourceSetToAddModListDCI_0_2_r16_items, 0, (std::size_t)value.srs_ResourceSetToAddModListDCI_0_2_r16_count * sizeof(SRS_ResourceSet));
}
for (std::uint32_t i = 0; i < value.srs_ResourceSetToAddModListDCI_0_2_r16_count; ++i) {
    if (Decode_SRS_ResourceSet(dec, value.srs_ResourceSetToAddModListDCI_0_2_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.srs_ResourceSetToReleaseListDCI_0_2_r16_count)) { goto fail; }
if (value.srs_ResourceSetToReleaseListDCI_0_2_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.srs_ResourceSetToReleaseListDCI_0_2_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.srs_ResourceSetToReleaseListDCI_0_2_r16_count > 0u) {
    value.srs_ResourceSetToReleaseListDCI_0_2_r16_items = (SRS_ResourceSetId*)std::malloc((std::size_t)value.srs_ResourceSetToReleaseListDCI_0_2_r16_count * sizeof(SRS_ResourceSetId));
    if (value.srs_ResourceSetToReleaseListDCI_0_2_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.srs_ResourceSetToReleaseListDCI_0_2_r16_items, 0, (std::size_t)value.srs_ResourceSetToReleaseListDCI_0_2_r16_count * sizeof(SRS_ResourceSetId));
}
for (std::uint32_t i = 0; i < value.srs_ResourceSetToReleaseListDCI_0_2_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
    value.srs_ResourceSetToReleaseListDCI_0_2_r16_items[i] = (SRS_ResourceSetId)tmp_value;
}
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.srs_PosResourceSetToReleaseList_r16_count)) { goto fail; }
if (value.srs_PosResourceSetToReleaseList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.srs_PosResourceSetToReleaseList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.srs_PosResourceSetToReleaseList_r16_count > 0u) {
    value.srs_PosResourceSetToReleaseList_r16_items = (SRS_PosResourceSetId_r16*)std::malloc((std::size_t)value.srs_PosResourceSetToReleaseList_r16_count * sizeof(SRS_PosResourceSetId_r16));
    if (value.srs_PosResourceSetToReleaseList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.srs_PosResourceSetToReleaseList_r16_items, 0, (std::size_t)value.srs_PosResourceSetToReleaseList_r16_count * sizeof(SRS_PosResourceSetId_r16));
}
for (std::uint32_t i = 0; i < value.srs_PosResourceSetToReleaseList_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
    value.srs_PosResourceSetToReleaseList_r16_items[i] = (SRS_PosResourceSetId_r16)tmp_value;
}
    }
    if (present_5) {
if (!dec.ReadConstrainedLength(0u, 0u, value.srs_PosResourceSetToAddModList_r16_count)) { goto fail; }
if (value.srs_PosResourceSetToAddModList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.srs_PosResourceSetToAddModList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.srs_PosResourceSetToAddModList_r16_count > 0u) {
    value.srs_PosResourceSetToAddModList_r16_items = (SRS_PosResourceSet_r16*)std::malloc((std::size_t)value.srs_PosResourceSetToAddModList_r16_count * sizeof(SRS_PosResourceSet_r16));
    if (value.srs_PosResourceSetToAddModList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.srs_PosResourceSetToAddModList_r16_items, 0, (std::size_t)value.srs_PosResourceSetToAddModList_r16_count * sizeof(SRS_PosResourceSet_r16));
}
for (std::uint32_t i = 0; i < value.srs_PosResourceSetToAddModList_r16_count; ++i) {
    if (Decode_SRS_PosResourceSet_r16(dec, value.srs_PosResourceSetToAddModList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_6) {
if (!dec.ReadConstrainedLength(0u, 0u, value.srs_PosResourceToReleaseList_r16_count)) { goto fail; }
if (value.srs_PosResourceToReleaseList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.srs_PosResourceToReleaseList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.srs_PosResourceToReleaseList_r16_count > 0u) {
    value.srs_PosResourceToReleaseList_r16_items = (SRS_PosResourceId_r16*)std::malloc((std::size_t)value.srs_PosResourceToReleaseList_r16_count * sizeof(SRS_PosResourceId_r16));
    if (value.srs_PosResourceToReleaseList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.srs_PosResourceToReleaseList_r16_items, 0, (std::size_t)value.srs_PosResourceToReleaseList_r16_count * sizeof(SRS_PosResourceId_r16));
}
for (std::uint32_t i = 0; i < value.srs_PosResourceToReleaseList_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.srs_PosResourceToReleaseList_r16_items[i] = (SRS_PosResourceId_r16)tmp_value;
}
    }
    if (present_7) {
if (!dec.ReadConstrainedLength(0u, 0u, value.srs_PosResourceToAddModList_r16_count)) { goto fail; }
if (value.srs_PosResourceToAddModList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.srs_PosResourceToAddModList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.srs_PosResourceToAddModList_r16_count > 0u) {
    value.srs_PosResourceToAddModList_r16_items = (SRS_PosResource_r16*)std::malloc((std::size_t)value.srs_PosResourceToAddModList_r16_count * sizeof(SRS_PosResource_r16));
    if (value.srs_PosResourceToAddModList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.srs_PosResourceToAddModList_r16_items, 0, (std::size_t)value.srs_PosResourceToAddModList_r16_count * sizeof(SRS_PosResource_r16));
}
for (std::uint32_t i = 0; i < value.srs_PosResourceToAddModList_r16_count; ++i) {
    if (Decode_SRS_PosResource_r16(dec, value.srs_PosResourceToAddModList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_Config_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_Config_ExtGroup1(SRS_Config_ExtGroup1& value)
{
    if (value.has_srs_RequestDCI_1_2_r16) {
    }
    if (value.has_srs_RequestDCI_0_2_r16) {
    }
    if (value.has_srs_ResourceSetToAddModListDCI_0_2_r16) {
        if (value.srs_ResourceSetToAddModListDCI_0_2_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.srs_ResourceSetToAddModListDCI_0_2_r16_count; ++i) {
                Free_SRS_ResourceSet(value.srs_ResourceSetToAddModListDCI_0_2_r16_items[i]);
            }
            std::free(value.srs_ResourceSetToAddModListDCI_0_2_r16_items);
            value.srs_ResourceSetToAddModListDCI_0_2_r16_items = nullptr;
        }
        value.srs_ResourceSetToAddModListDCI_0_2_r16_count = 0;
    }
    if (value.has_srs_ResourceSetToReleaseListDCI_0_2_r16) {
        if (value.srs_ResourceSetToReleaseListDCI_0_2_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.srs_ResourceSetToReleaseListDCI_0_2_r16_count; ++i) {
            }
            std::free(value.srs_ResourceSetToReleaseListDCI_0_2_r16_items);
            value.srs_ResourceSetToReleaseListDCI_0_2_r16_items = nullptr;
        }
        value.srs_ResourceSetToReleaseListDCI_0_2_r16_count = 0;
    }
    if (value.has_srs_PosResourceSetToReleaseList_r16) {
        if (value.srs_PosResourceSetToReleaseList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.srs_PosResourceSetToReleaseList_r16_count; ++i) {
            }
            std::free(value.srs_PosResourceSetToReleaseList_r16_items);
            value.srs_PosResourceSetToReleaseList_r16_items = nullptr;
        }
        value.srs_PosResourceSetToReleaseList_r16_count = 0;
    }
    if (value.has_srs_PosResourceSetToAddModList_r16) {
        if (value.srs_PosResourceSetToAddModList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.srs_PosResourceSetToAddModList_r16_count; ++i) {
                Free_SRS_PosResourceSet_r16(value.srs_PosResourceSetToAddModList_r16_items[i]);
            }
            std::free(value.srs_PosResourceSetToAddModList_r16_items);
            value.srs_PosResourceSetToAddModList_r16_items = nullptr;
        }
        value.srs_PosResourceSetToAddModList_r16_count = 0;
    }
    if (value.has_srs_PosResourceToReleaseList_r16) {
        if (value.srs_PosResourceToReleaseList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.srs_PosResourceToReleaseList_r16_count; ++i) {
            }
            std::free(value.srs_PosResourceToReleaseList_r16_items);
            value.srs_PosResourceToReleaseList_r16_items = nullptr;
        }
        value.srs_PosResourceToReleaseList_r16_count = 0;
    }
    if (value.has_srs_PosResourceToAddModList_r16) {
        if (value.srs_PosResourceToAddModList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.srs_PosResourceToAddModList_r16_count; ++i) {
                Free_SRS_PosResource_r16(value.srs_PosResourceToAddModList_r16_items[i]);
            }
            std::free(value.srs_PosResourceToAddModList_r16_items);
            value.srs_PosResourceToAddModList_r16_items = nullptr;
        }
        value.srs_PosResourceToAddModList_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_Config_ExtGroup2：ASN.1 SRS_Config_ExtGroup2；源文件第 13075 行；扩展添加组 [[ ]]。
// Encode_SRS_Config_ExtGroup2 只读不分配；Decode_SRS_Config_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_SRS_Config_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_Config_ExtGroup2(Encoder& enc, const SRS_Config_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_dci_TriggeringPosResourceSetLink_r18);
    if (value.has_dci_TriggeringPosResourceSetLink_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dci_TriggeringPosResourceSetLink_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_Config_ExtGroup2(Decoder& dec, SRS_Config_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.dci_TriggeringPosResourceSetLink_r18 = (SRS_Config_ExtGroup2_Dci_TriggeringPosResourceSetLink_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_Config_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_Config_ExtGroup2(SRS_Config_ExtGroup2& value)
{
    if (value.has_dci_TriggeringPosResourceSetLink_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_Config：ASN.1 SRS-Config；源文件第 13057 行；SEQUENCE。
// Encode_SRS_Config 只读不分配；Decode_SRS_Config 可能 malloc（失败时内部已释放并清零）；Free_SRS_Config 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_Config(Encoder& enc, const SRS_Config& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_srs_ResourceSetToReleaseList);
    enc.WriteBit(value.has_srs_ResourceSetToAddModList);
    enc.WriteBit(value.has_srs_ResourceToReleaseList);
    enc.WriteBit(value.has_srs_ResourceToAddModList);
    enc.WriteBit(value.has_tpc_Accumulation);
    if (value.has_srs_ResourceSetToReleaseList) {
enc.WriteConstrainedLength(value.srs_ResourceSetToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.srs_ResourceSetToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.srs_ResourceSetToReleaseList_items[i]), 0, 15);
}
    }
    if (value.has_srs_ResourceSetToAddModList) {
enc.WriteConstrainedLength(value.srs_ResourceSetToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.srs_ResourceSetToAddModList_count; ++i) {
    Encode_SRS_ResourceSet(enc, value.srs_ResourceSetToAddModList_items[i]);
}
    }
    if (value.has_srs_ResourceToReleaseList) {
enc.WriteConstrainedLength(value.srs_ResourceToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.srs_ResourceToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.srs_ResourceToReleaseList_items[i]), 0, 63);
}
    }
    if (value.has_srs_ResourceToAddModList) {
enc.WriteConstrainedLength(value.srs_ResourceToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.srs_ResourceToAddModList_count; ++i) {
    Encode_SRS_Resource(enc, value.srs_ResourceToAddModList_items[i]);
}
    }
    if (value.has_tpc_Accumulation) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tpc_Accumulation), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SRS_Config_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SRS_Config_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SRS_Config(Decoder& dec, SRS_Config& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.srs_ResourceSetToReleaseList_count)) { goto fail; }
if (value.srs_ResourceSetToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.srs_ResourceSetToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.srs_ResourceSetToReleaseList_count > 0u) {
    value.srs_ResourceSetToReleaseList_items = (SRS_ResourceSetId*)std::malloc((std::size_t)value.srs_ResourceSetToReleaseList_count * sizeof(SRS_ResourceSetId));
    if (value.srs_ResourceSetToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.srs_ResourceSetToReleaseList_items, 0, (std::size_t)value.srs_ResourceSetToReleaseList_count * sizeof(SRS_ResourceSetId));
}
for (std::uint32_t i = 0; i < value.srs_ResourceSetToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
    value.srs_ResourceSetToReleaseList_items[i] = (SRS_ResourceSetId)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.srs_ResourceSetToAddModList_count)) { goto fail; }
if (value.srs_ResourceSetToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.srs_ResourceSetToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.srs_ResourceSetToAddModList_count > 0u) {
    value.srs_ResourceSetToAddModList_items = (SRS_ResourceSet*)std::malloc((std::size_t)value.srs_ResourceSetToAddModList_count * sizeof(SRS_ResourceSet));
    if (value.srs_ResourceSetToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.srs_ResourceSetToAddModList_items, 0, (std::size_t)value.srs_ResourceSetToAddModList_count * sizeof(SRS_ResourceSet));
}
for (std::uint32_t i = 0; i < value.srs_ResourceSetToAddModList_count; ++i) {
    if (Decode_SRS_ResourceSet(dec, value.srs_ResourceSetToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.srs_ResourceToReleaseList_count)) { goto fail; }
if (value.srs_ResourceToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.srs_ResourceToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.srs_ResourceToReleaseList_count > 0u) {
    value.srs_ResourceToReleaseList_items = (SRS_ResourceId*)std::malloc((std::size_t)value.srs_ResourceToReleaseList_count * sizeof(SRS_ResourceId));
    if (value.srs_ResourceToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.srs_ResourceToReleaseList_items, 0, (std::size_t)value.srs_ResourceToReleaseList_count * sizeof(SRS_ResourceId));
}
for (std::uint32_t i = 0; i < value.srs_ResourceToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.srs_ResourceToReleaseList_items[i] = (SRS_ResourceId)tmp_value;
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.srs_ResourceToAddModList_count)) { goto fail; }
if (value.srs_ResourceToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.srs_ResourceToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.srs_ResourceToAddModList_count > 0u) {
    value.srs_ResourceToAddModList_items = (SRS_Resource*)std::malloc((std::size_t)value.srs_ResourceToAddModList_count * sizeof(SRS_Resource));
    if (value.srs_ResourceToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.srs_ResourceToAddModList_items, 0, (std::size_t)value.srs_ResourceToAddModList_count * sizeof(SRS_Resource));
}
for (std::uint32_t i = 0; i < value.srs_ResourceToAddModList_count; ++i) {
    if (Decode_SRS_Resource(dec, value.srs_ResourceToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_4) {
        value.tpc_Accumulation = (SRS_Config_Tpc_Accumulation)0;
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
    if (Decode_SRS_Config_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_SRS_Config_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_SRS_Config(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_Config(SRS_Config& value)
{
    if (value.has_srs_ResourceSetToReleaseList) {
        if (value.srs_ResourceSetToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.srs_ResourceSetToReleaseList_count; ++i) {
            }
            std::free(value.srs_ResourceSetToReleaseList_items);
            value.srs_ResourceSetToReleaseList_items = nullptr;
        }
        value.srs_ResourceSetToReleaseList_count = 0;
    }
    if (value.has_srs_ResourceSetToAddModList) {
        if (value.srs_ResourceSetToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.srs_ResourceSetToAddModList_count; ++i) {
                Free_SRS_ResourceSet(value.srs_ResourceSetToAddModList_items[i]);
            }
            std::free(value.srs_ResourceSetToAddModList_items);
            value.srs_ResourceSetToAddModList_items = nullptr;
        }
        value.srs_ResourceSetToAddModList_count = 0;
    }
    if (value.has_srs_ResourceToReleaseList) {
        if (value.srs_ResourceToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.srs_ResourceToReleaseList_count; ++i) {
            }
            std::free(value.srs_ResourceToReleaseList_items);
            value.srs_ResourceToReleaseList_items = nullptr;
        }
        value.srs_ResourceToReleaseList_count = 0;
    }
    if (value.has_srs_ResourceToAddModList) {
        if (value.srs_ResourceToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.srs_ResourceToAddModList_count; ++i) {
                Free_SRS_Resource(value.srs_ResourceToAddModList_items[i]);
            }
            std::free(value.srs_ResourceToAddModList_items);
            value.srs_ResourceToAddModList_items = nullptr;
        }
        value.srs_ResourceToAddModList_count = 0;
    }
    if (value.has_tpc_Accumulation) {
    }
    if (value.has_extGroup1) {
        Free_SRS_Config_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SRS_Config_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SRS_Config：ASN.1 SetupRelease<SRS-Config>；源文件第 4647 行；CHOICE。
// Encode_SetupRelease_SRS_Config 只读不分配；Decode_SetupRelease_SRS_Config 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SRS_Config 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SRS_Config(Encoder& enc, const SetupRelease_SRS_Config& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SRS_Config_Tag_release:
        (void)0;
        break;
    case SetupRelease_SRS_Config_Tag_setup:
        Encode_SRS_Config(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SRS_Config(Decoder& dec, SetupRelease_SRS_Config& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SRS_Config_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SRS_Config_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SRS_Config_Tag_setup: {
        if (Decode_SRS_Config(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SRS_Config(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SRS_Config(SetupRelease_SRS_Config& value)
{
    switch (value.tag) {
    case SetupRelease_SRS_Config_Tag_release:
        break;
    case SetupRelease_SRS_Config_Tag_setup:
        Free_SRS_Config(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_BeamFailureRecoveryConfig：ASN.1 SetupRelease<BeamFailureRecoveryConfig>；源文件第 4648 行；CHOICE。
// Encode_SetupRelease_BeamFailureRecoveryConfig 只读不分配；Decode_SetupRelease_BeamFailureRecoveryConfig 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_BeamFailureRecoveryConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_BeamFailureRecoveryConfig(Encoder& enc, const SetupRelease_BeamFailureRecoveryConfig& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_BeamFailureRecoveryConfig_Tag_release:
        (void)0;
        break;
    case SetupRelease_BeamFailureRecoveryConfig_Tag_setup:
        Encode_BeamFailureRecoveryConfig(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_BeamFailureRecoveryConfig(Decoder& dec, SetupRelease_BeamFailureRecoveryConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_BeamFailureRecoveryConfig_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_BeamFailureRecoveryConfig_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_BeamFailureRecoveryConfig_Tag_setup: {
        if (Decode_BeamFailureRecoveryConfig(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_BeamFailureRecoveryConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_BeamFailureRecoveryConfig(SetupRelease_BeamFailureRecoveryConfig& value)
{
    switch (value.tag) {
    case SetupRelease_BeamFailureRecoveryConfig_Tag_release:
        break;
    case SetupRelease_BeamFailureRecoveryConfig_Tag_setup:
        Free_BeamFailureRecoveryConfig(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BWP_UplinkDedicated：ASN.1 BWP-UplinkDedicated；源文件第 4643 行；SEQUENCE。
// Encode_BWP_UplinkDedicated 只读不分配；Decode_BWP_UplinkDedicated 可能 malloc（失败时内部已释放并清零）；Free_BWP_UplinkDedicated 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BWP_UplinkDedicated(Encoder& enc, const BWP_UplinkDedicated& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_pucch_Config);
    enc.WriteBit(value.has_pusch_Config);
    enc.WriteBit(value.has_configuredGrantConfig);
    enc.WriteBit(value.has_srs_Config);
    enc.WriteBit(value.has_beamFailureRecoveryConfig);
    if (value.has_pucch_Config) {
        Encode_SetupRelease_PUCCH_Config(enc, value.pucch_Config);
    }
    if (value.has_pusch_Config) {
        Encode_SetupRelease_PUSCH_Config(enc, value.pusch_Config);
    }
    if (value.has_configuredGrantConfig) {
        Encode_SetupRelease_ConfiguredGrantConfig(enc, value.configuredGrantConfig);
    }
    if (value.has_srs_Config) {
        Encode_SetupRelease_SRS_Config(enc, value.srs_Config);
    }
    if (value.has_beamFailureRecoveryConfig) {
        Encode_SetupRelease_BeamFailureRecoveryConfig(enc, value.beamFailureRecoveryConfig);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(4u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        enc.WriteBit(value.has_extGroup4);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_BWP_UplinkDedicated_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_BWP_UplinkDedicated_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_BWP_UplinkDedicated_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_BWP_UplinkDedicated_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_BWP_UplinkDedicated(Decoder& dec, BWP_UplinkDedicated& value)
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
        if (Decode_SetupRelease_PUCCH_Config(dec, value.pucch_Config) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_PUSCH_Config(dec, value.pusch_Config) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SetupRelease_ConfiguredGrantConfig(dec, value.configuredGrantConfig) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SetupRelease_SRS_Config(dec, value.srs_Config) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SetupRelease_BeamFailureRecoveryConfig(dec, value.beamFailureRecoveryConfig) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_BWP_UplinkDedicated_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_BWP_UplinkDedicated_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_BWP_UplinkDedicated_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_BWP_UplinkDedicated_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    Free_BWP_UplinkDedicated(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BWP_UplinkDedicated(BWP_UplinkDedicated& value)
{
    if (value.has_pucch_Config) {
        Free_SetupRelease_PUCCH_Config(value.pucch_Config);
    }
    if (value.has_pusch_Config) {
        Free_SetupRelease_PUSCH_Config(value.pusch_Config);
    }
    if (value.has_configuredGrantConfig) {
        Free_SetupRelease_ConfiguredGrantConfig(value.configuredGrantConfig);
    }
    if (value.has_srs_Config) {
        Free_SetupRelease_SRS_Config(value.srs_Config);
    }
    if (value.has_beamFailureRecoveryConfig) {
        Free_SetupRelease_BeamFailureRecoveryConfig(value.beamFailureRecoveryConfig);
    }
    if (value.has_extGroup1) {
        Free_BWP_UplinkDedicated_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_BWP_UplinkDedicated_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_BWP_UplinkDedicated_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_BWP_UplinkDedicated_ExtGroup4(value.extGroup4);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BWP_Uplink：ASN.1 BWP-Uplink；源文件第 4590 行；SEQUENCE。
// Encode_BWP_Uplink 只读不分配；Decode_BWP_Uplink 可能 malloc（失败时内部已释放并清零）；Free_BWP_Uplink 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BWP_Uplink(Encoder& enc, const BWP_Uplink& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_bwp_Common);
    enc.WriteBit(value.has_bwp_Dedicated);
    enc.WriteConstrainedInteger((std::int64_t)(value.bwp_Id), 0, 4);
    if (value.has_bwp_Common) {
        Encode_BWP_UplinkCommon(enc, value.bwp_Common);
    }
    if (value.has_bwp_Dedicated) {
        Encode_BWP_UplinkDedicated(enc, value.bwp_Dedicated);
    }
    return enc.Error();
}

ErrorCode Decode_BWP_Uplink(Decoder& dec, BWP_Uplink& value)
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
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.bwp_Id = (BWP_Id)tmp_value;
    }
    if (present_0) {
        if (Decode_BWP_UplinkCommon(dec, value.bwp_Common) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BWP_UplinkDedicated(dec, value.bwp_Dedicated) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BWP_Uplink(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BWP_Uplink(BWP_Uplink& value)
{
    if (value.has_bwp_Common) {
        Free_BWP_UplinkCommon(value.bwp_Common);
    }
    if (value.has_bwp_Dedicated) {
        Free_BWP_UplinkDedicated(value.bwp_Dedicated);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// AdditionalRACH_Config_r17：ASN.1 AdditionalRACH-Config-r17；源文件第 4632 行；SEQUENCE。
// Encode_AdditionalRACH_Config_r17 只读不分配；Decode_AdditionalRACH_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_AdditionalRACH_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_AdditionalRACH_Config_r17(Encoder& enc, const AdditionalRACH_Config_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_rach_ConfigCommon_r17);
    enc.WriteBit(value.has_msgA_ConfigCommon_r17);
    if (value.has_rach_ConfigCommon_r17) {
        Encode_RACH_ConfigCommon(enc, value.rach_ConfigCommon_r17);
    }
    if (value.has_msgA_ConfigCommon_r17) {
        Encode_MsgA_ConfigCommon_r16(enc, value.msgA_ConfigCommon_r17);
    }
    return enc.Error();
}

ErrorCode Decode_AdditionalRACH_Config_r17(Decoder& dec, AdditionalRACH_Config_r17& value)
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
        if (Decode_RACH_ConfigCommon(dec, value.rach_ConfigCommon_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MsgA_ConfigCommon_r16(dec, value.msgA_ConfigCommon_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_AdditionalRACH_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AdditionalRACH_Config_r17(AdditionalRACH_Config_r17& value)
{
    if (value.has_rach_ConfigCommon_r17) {
        Free_RACH_ConfigCommon(value.rach_ConfigCommon_r17);
    }
    if (value.has_msgA_ConfigCommon_r17) {
        Free_MsgA_ConfigCommon_r16(value.msgA_ConfigCommon_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ConfiguredGrantConfigType2DeactivationState_r16：ASN.1 ConfiguredGrantConfigType2DeactivationState-r16；源文件第 4689 行；SEQUENCE OF。
// Encode_ConfiguredGrantConfigType2DeactivationState_r16 只读不分配；Decode_ConfiguredGrantConfigType2DeactivationState_r16 可能 malloc（失败时内部已释放并清零）；Free_ConfiguredGrantConfigType2DeactivationState_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ConfiguredGrantConfigType2DeactivationState_r16(Encoder& enc, const ConfiguredGrantConfigType2DeactivationState_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 12u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 11);
    }
    return enc.Error();
}

ErrorCode Decode_ConfiguredGrantConfigType2DeactivationState_r16(Decoder& dec, ConfiguredGrantConfigType2DeactivationState_r16& value)
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
    Free_ConfiguredGrantConfigType2DeactivationState_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ConfiguredGrantConfigType2DeactivationState_r16(ConfiguredGrantConfigType2DeactivationState_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CandidateBeamRS_r16_CandidateBeamConfig_r16：ASN.1 candidateBeamConfig-r16；源文件第 4699 行；CHOICE。
// Encode_CandidateBeamRS_r16_CandidateBeamConfig_r16 只读不分配；Decode_CandidateBeamRS_r16_CandidateBeamConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_CandidateBeamRS_r16_CandidateBeamConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CandidateBeamRS_r16_CandidateBeamConfig_r16(Encoder& enc, const CandidateBeamRS_r16_CandidateBeamConfig_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CandidateBeamRS_r16_CandidateBeamConfig_r16_Tag_ssb_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ssb_r16), 0, 63);
        break;
    case CandidateBeamRS_r16_CandidateBeamConfig_r16_Tag_csi_RS_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.csi_RS_r16), 0, 191);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CandidateBeamRS_r16_CandidateBeamConfig_r16(Decoder& dec, CandidateBeamRS_r16_CandidateBeamConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CandidateBeamRS_r16_CandidateBeamConfig_r16_Tag)root_index;
    switch (value.tag) {
    case CandidateBeamRS_r16_CandidateBeamConfig_r16_Tag_ssb_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.ssb_r16 = (SSB_Index)tmp_value;
        break;
    }
    case CandidateBeamRS_r16_CandidateBeamConfig_r16_Tag_csi_RS_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 191, tmp_value)) { goto fail; }
        value.u.csi_RS_r16 = (NZP_CSI_RS_ResourceId)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CandidateBeamRS_r16_CandidateBeamConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CandidateBeamRS_r16_CandidateBeamConfig_r16(CandidateBeamRS_r16_CandidateBeamConfig_r16& value)
{
    switch (value.tag) {
    case CandidateBeamRS_r16_CandidateBeamConfig_r16_Tag_ssb_r16:
        break;
    case CandidateBeamRS_r16_CandidateBeamConfig_r16_Tag_csi_RS_r16:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CandidateBeamRS_r16：ASN.1 CandidateBeamRS-r16；源文件第 4698 行；SEQUENCE。
// Encode_CandidateBeamRS_r16 只读不分配；Decode_CandidateBeamRS_r16 可能 malloc（失败时内部已释放并清零）；Free_CandidateBeamRS_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CandidateBeamRS_r16(Encoder& enc, const CandidateBeamRS_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_servingCellId);
    Encode_CandidateBeamRS_r16_CandidateBeamConfig_r16(enc, value.candidateBeamConfig_r16);
    if (value.has_servingCellId) {
        enc.WriteConstrainedInteger((std::int64_t)(value.servingCellId), 0, 31);
    }
    return enc.Error();
}

ErrorCode Decode_CandidateBeamRS_r16(Decoder& dec, CandidateBeamRS_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_CandidateBeamRS_r16_CandidateBeamConfig_r16(dec, value.candidateBeamConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.servingCellId = (ServCellIndex)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CandidateBeamRS_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CandidateBeamRS_r16(CandidateBeamRS_r16& value)
{
    Free_CandidateBeamRS_r16_CandidateBeamConfig_r16(value.candidateBeamConfig_r16);
    if (value.has_servingCellId) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LTM_QCL_Info_r18_ReferenceSignal_r18：ASN.1 referenceSignal-r18；源文件第 4718 行；CHOICE。
// Encode_LTM_QCL_Info_r18_ReferenceSignal_r18 只读不分配；Decode_LTM_QCL_Info_r18_ReferenceSignal_r18 可能 malloc（失败时内部已释放并清零）；Free_LTM_QCL_Info_r18_ReferenceSignal_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LTM_QCL_Info_r18_ReferenceSignal_r18(Encoder& enc, const LTM_QCL_Info_r18_ReferenceSignal_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case LTM_QCL_Info_r18_ReferenceSignal_r18_Tag_ssb_Index:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ssb_Index), 0, 63);
        break;
    case LTM_QCL_Info_r18_ReferenceSignal_r18_Tag_csi_RS_Index:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.csi_RS_Index), 0, 191);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_LTM_QCL_Info_r18_ReferenceSignal_r18(Decoder& dec, LTM_QCL_Info_r18_ReferenceSignal_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (LTM_QCL_Info_r18_ReferenceSignal_r18_Tag)root_index;
    switch (value.tag) {
    case LTM_QCL_Info_r18_ReferenceSignal_r18_Tag_ssb_Index: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.ssb_Index = (SSB_Index)tmp_value;
        break;
    }
    case LTM_QCL_Info_r18_ReferenceSignal_r18_Tag_csi_RS_Index: {
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
    Free_LTM_QCL_Info_r18_ReferenceSignal_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LTM_QCL_Info_r18_ReferenceSignal_r18(LTM_QCL_Info_r18_ReferenceSignal_r18& value)
{
    switch (value.tag) {
    case LTM_QCL_Info_r18_ReferenceSignal_r18_Tag_ssb_Index:
        break;
    case LTM_QCL_Info_r18_ReferenceSignal_r18_Tag_csi_RS_Index:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LTM_QCL_Info_r18：ASN.1 LTM-QCL-Info-r18；源文件第 4717 行；SEQUENCE。
// Encode_LTM_QCL_Info_r18 只读不分配；Decode_LTM_QCL_Info_r18 可能 malloc（失败时内部已释放并清零）；Free_LTM_QCL_Info_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LTM_QCL_Info_r18(Encoder& enc, const LTM_QCL_Info_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_LTM_QCL_Info_r18_ReferenceSignal_r18(enc, value.referenceSignal_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.qcl_Type_r18), 0, 3);
    return enc.Error();
}

ErrorCode Decode_LTM_QCL_Info_r18(Decoder& dec, LTM_QCL_Info_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_LTM_QCL_Info_r18_ReferenceSignal_r18(dec, value.referenceSignal_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.qcl_Type_r18 = (LTM_QCL_Info_r18_Qcl_Type_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_LTM_QCL_Info_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LTM_QCL_Info_r18(LTM_QCL_Info_r18& value)
{
    Free_LTM_QCL_Info_r18_ReferenceSignal_r18(value.referenceSignal_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CandidateTCI_State_r18：ASN.1 CandidateTCI-State-r18；源文件第 4709 行；SEQUENCE。
// Encode_CandidateTCI_State_r18 只读不分配；Decode_CandidateTCI_State_r18 可能 malloc（失败时内部已释放并清零）；Free_CandidateTCI_State_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CandidateTCI_State_r18(Encoder& enc, const CandidateTCI_State_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_qcl_Type2_r18);
    enc.WriteBit(value.has_pathlossReferenceRS_Id_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.tci_StateId_r18), 0, 127);
    Encode_LTM_QCL_Info_r18(enc, value.qcl_Type1_r18);
    if (value.has_qcl_Type2_r18) {
        Encode_LTM_QCL_Info_r18(enc, value.qcl_Type2_r18);
    }
    if (value.has_pathlossReferenceRS_Id_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pathlossReferenceRS_Id_r18), 0, 63);
    }
    return enc.Error();
}

ErrorCode Decode_CandidateTCI_State_r18(Decoder& dec, CandidateTCI_State_r18& value)
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
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.tci_StateId_r18 = (TCI_StateId)tmp_value;
    }
    {
        if (Decode_LTM_QCL_Info_r18(dec, value.qcl_Type1_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_LTM_QCL_Info_r18(dec, value.qcl_Type2_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.pathlossReferenceRS_Id_r18 = (PathlossReferenceRS_Id_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CandidateTCI_State_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CandidateTCI_State_r18(CandidateTCI_State_r18& value)
{
    Free_LTM_QCL_Info_r18(value.qcl_Type1_r18);
    if (value.has_qcl_Type2_r18) {
        Free_LTM_QCL_Info_r18(value.qcl_Type2_r18);
    }
    if (value.has_pathlossReferenceRS_Id_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CandidateTCI_UL_State_r18_ReferenceSignal_r18：ASN.1 referenceSignal-r18；源文件第 4731 行；CHOICE。
// Encode_CandidateTCI_UL_State_r18_ReferenceSignal_r18 只读不分配；Decode_CandidateTCI_UL_State_r18_ReferenceSignal_r18 可能 malloc（失败时内部已释放并清零）；Free_CandidateTCI_UL_State_r18_ReferenceSignal_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CandidateTCI_UL_State_r18_ReferenceSignal_r18(Encoder& enc, const CandidateTCI_UL_State_r18_ReferenceSignal_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CandidateTCI_UL_State_r18_ReferenceSignal_r18_Tag_ssb_Index:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ssb_Index), 0, 63);
        break;
    case CandidateTCI_UL_State_r18_ReferenceSignal_r18_Tag_csi_RS_Index:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.csi_RS_Index), 0, 191);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CandidateTCI_UL_State_r18_ReferenceSignal_r18(Decoder& dec, CandidateTCI_UL_State_r18_ReferenceSignal_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CandidateTCI_UL_State_r18_ReferenceSignal_r18_Tag)root_index;
    switch (value.tag) {
    case CandidateTCI_UL_State_r18_ReferenceSignal_r18_Tag_ssb_Index: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.ssb_Index = (SSB_Index)tmp_value;
        break;
    }
    case CandidateTCI_UL_State_r18_ReferenceSignal_r18_Tag_csi_RS_Index: {
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
    Free_CandidateTCI_UL_State_r18_ReferenceSignal_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CandidateTCI_UL_State_r18_ReferenceSignal_r18(CandidateTCI_UL_State_r18_ReferenceSignal_r18& value)
{
    switch (value.tag) {
    case CandidateTCI_UL_State_r18_ReferenceSignal_r18_Tag_ssb_Index:
        break;
    case CandidateTCI_UL_State_r18_ReferenceSignal_r18_Tag_csi_RS_Index:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CandidateTCI_UL_State_r18：ASN.1 CandidateTCI-UL-State-r18；源文件第 4729 行；SEQUENCE。
// Encode_CandidateTCI_UL_State_r18 只读不分配；Decode_CandidateTCI_UL_State_r18 可能 malloc（失败时内部已释放并清零）；Free_CandidateTCI_UL_State_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CandidateTCI_UL_State_r18(Encoder& enc, const CandidateTCI_UL_State_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_pathlossReferenceRS_Id_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.tci_UL_StateId_r18), 0, 63);
    Encode_CandidateTCI_UL_State_r18_ReferenceSignal_r18(enc, value.referenceSignal_r18);
    if (value.has_pathlossReferenceRS_Id_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pathlossReferenceRS_Id_r18), 0, 63);
    }
    return enc.Error();
}

ErrorCode Decode_CandidateTCI_UL_State_r18(Decoder& dec, CandidateTCI_UL_State_r18& value)
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
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.tci_UL_StateId_r18 = (TCI_UL_StateId_r17)tmp_value;
    }
    {
        if (Decode_CandidateTCI_UL_State_r18_ReferenceSignal_r18(dec, value.referenceSignal_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.pathlossReferenceRS_Id_r18 = (PathlossReferenceRS_Id_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CandidateTCI_UL_State_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CandidateTCI_UL_State_r18(CandidateTCI_UL_State_r18& value)
{
    Free_CandidateTCI_UL_State_r18_ReferenceSignal_r18(value.referenceSignal_r18);
    if (value.has_pathlossReferenceRS_Id_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SNPN_AccessInfo_r17：ASN.1 SNPN-AccessInfo-r17；源文件第 4755 行；SEQUENCE。
// Encode_SNPN_AccessInfo_r17 只读不分配；Decode_SNPN_AccessInfo_r17 可能 malloc（失败时内部已释放并清零）；Free_SNPN_AccessInfo_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SNPN_AccessInfo_r17(Encoder& enc, const SNPN_AccessInfo_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_extCH_Supported_r17);
    enc.WriteBit(value.has_extCH_WithoutConfigAllowed_r17);
    enc.WriteBit(value.has_onboardingEnabled_r17);
    enc.WriteBit(value.has_imsEmergencySupportForSNPN_r17);
    if (value.has_extCH_Supported_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.extCH_Supported_r17), 0, 0);
    }
    if (value.has_extCH_WithoutConfigAllowed_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.extCH_WithoutConfigAllowed_r17), 0, 0);
    }
    if (value.has_onboardingEnabled_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.onboardingEnabled_r17), 0, 0);
    }
    if (value.has_imsEmergencySupportForSNPN_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.imsEmergencySupportForSNPN_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SNPN_AccessInfo_r17(Decoder& dec, SNPN_AccessInfo_r17& value)
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
        value.extCH_Supported_r17 = (SNPN_AccessInfo_r17_ExtCH_Supported_r17)0;
    }
    if (present_1) {
        value.extCH_WithoutConfigAllowed_r17 = (SNPN_AccessInfo_r17_ExtCH_WithoutConfigAllowed_r17)0;
    }
    if (present_2) {
        value.onboardingEnabled_r17 = (SNPN_AccessInfo_r17_OnboardingEnabled_r17)0;
    }
    if (present_3) {
        value.imsEmergencySupportForSNPN_r17 = (SNPN_AccessInfo_r17_ImsEmergencySupportForSNPN_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SNPN_AccessInfo_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SNPN_AccessInfo_r17(SNPN_AccessInfo_r17& value)
{
    if (value.has_extCH_Supported_r17) {
    }
    if (value.has_extCH_WithoutConfigAllowed_r17) {
    }
    if (value.has_onboardingEnabled_r17) {
    }
    if (value.has_imsEmergencySupportForSNPN_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PLMN_IdentityList_EUTRA_5GC：ASN.1 PLMN-IdentityList-EUTRA-5GC；源文件第 4772 行；SEQUENCE OF。
// Encode_PLMN_IdentityList_EUTRA_5GC 只读不分配；Decode_PLMN_IdentityList_EUTRA_5GC 可能 malloc（失败时内部已释放并清零）；Free_PLMN_IdentityList_EUTRA_5GC 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PLMN_IdentityList_EUTRA_5GC(Encoder& enc, const PLMN_IdentityList_EUTRA_5GC& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 12u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PLMN_Identity_EUTRA_5GC(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_PLMN_IdentityList_EUTRA_5GC(Decoder& dec, PLMN_IdentityList_EUTRA_5GC& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 12u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 12u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PLMN_Identity_EUTRA_5GC*)std::malloc((std::size_t)value.count * sizeof(PLMN_Identity_EUTRA_5GC));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PLMN_Identity_EUTRA_5GC));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PLMN_Identity_EUTRA_5GC(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_PLMN_IdentityList_EUTRA_5GC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PLMN_IdentityList_EUTRA_5GC(PLMN_IdentityList_EUTRA_5GC& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PLMN_Identity_EUTRA_5GC(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellIdentity_EUTRA_5GC：ASN.1 CellIdentity-EUTRA-5GC；源文件第 4779 行；CHOICE。
// Encode_CellIdentity_EUTRA_5GC 只读不分配；Decode_CellIdentity_EUTRA_5GC 可能 malloc（失败时内部已释放并清零）；Free_CellIdentity_EUTRA_5GC 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellIdentity_EUTRA_5GC(Encoder& enc, const CellIdentity_EUTRA_5GC& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CellIdentity_EUTRA_5GC_Tag_cellIdentity_EUTRA:
        enc.WriteFixedBitString(value.u.cellIdentity_EUTRA.bytes, value.u.cellIdentity_EUTRA.bitLength, 28, 28);
        break;
    case CellIdentity_EUTRA_5GC_Tag_cellId_index:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.cellId_index), 1, 12);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CellIdentity_EUTRA_5GC(Decoder& dec, CellIdentity_EUTRA_5GC& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CellIdentity_EUTRA_5GC_Tag)root_index;
    switch (value.tag) {
    case CellIdentity_EUTRA_5GC_Tag_cellIdentity_EUTRA: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 28)) { goto fail; }
        string_length = 28;
        value.u.cellIdentity_EUTRA.bytes = string_bytes;
        value.u.cellIdentity_EUTRA.bitLength = string_length;
        break;
    }
    case CellIdentity_EUTRA_5GC_Tag_cellId_index: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 12, tmp_value)) { goto fail; }
        value.u.cellId_index = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CellIdentity_EUTRA_5GC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellIdentity_EUTRA_5GC(CellIdentity_EUTRA_5GC& value)
{
    switch (value.tag) {
    case CellIdentity_EUTRA_5GC_Tag_cellIdentity_EUTRA:
        std::free(value.u.cellIdentity_EUTRA.bytes);
        break;
    case CellIdentity_EUTRA_5GC_Tag_cellId_index:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellAccessRelatedInfo_EUTRA_5GC：ASN.1 CellAccessRelatedInfo-EUTRA-5GC；源文件第 4765 行；SEQUENCE。
// Encode_CellAccessRelatedInfo_EUTRA_5GC 只读不分配；Decode_CellAccessRelatedInfo_EUTRA_5GC 可能 malloc（失败时内部已释放并清零）；Free_CellAccessRelatedInfo_EUTRA_5GC 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellAccessRelatedInfo_EUTRA_5GC(Encoder& enc, const CellAccessRelatedInfo_EUTRA_5GC& value)
{
    (void)value;
    enc.WriteBit(value.has_ranac_5gc);
    Encode_PLMN_IdentityList_EUTRA_5GC(enc, value.plmn_IdentityList_eutra_5gc);
    enc.WriteFixedBitString(value.trackingAreaCode_eutra_5gc.bytes, value.trackingAreaCode_eutra_5gc.bitLength, 24, 24);
    if (value.has_ranac_5gc) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ranac_5gc), 0, 255);
    }
    Encode_CellIdentity_EUTRA_5GC(enc, value.cellIdentity_eutra_5gc);
    return enc.Error();
}

ErrorCode Decode_CellAccessRelatedInfo_EUTRA_5GC(Decoder& dec, CellAccessRelatedInfo_EUTRA_5GC& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_PLMN_IdentityList_EUTRA_5GC(dec, value.plmn_IdentityList_eutra_5gc) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.trackingAreaCode_eutra_5gc.bytes = string_bytes;
        value.trackingAreaCode_eutra_5gc.bitLength = string_length;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
        value.ranac_5gc = (RAN_AreaCode)tmp_value;
    }
    {
        if (Decode_CellIdentity_EUTRA_5GC(dec, value.cellIdentity_eutra_5gc) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CellAccessRelatedInfo_EUTRA_5GC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellAccessRelatedInfo_EUTRA_5GC(CellAccessRelatedInfo_EUTRA_5GC& value)
{
    Free_PLMN_IdentityList_EUTRA_5GC(value.plmn_IdentityList_eutra_5gc);
    std::free(value.trackingAreaCode_eutra_5gc.bytes);
    value.trackingAreaCode_eutra_5gc.bytes = nullptr;
    value.trackingAreaCode_eutra_5gc.bitLength = 0;
    if (value.has_ranac_5gc) {
    }
    Free_CellIdentity_EUTRA_5GC(value.cellIdentity_eutra_5gc);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PLMN_Identity_EUTRA_5GC：ASN.1 PLMN-Identity-EUTRA-5GC；源文件第 4774 行；CHOICE。
// Encode_PLMN_Identity_EUTRA_5GC 只读不分配；Decode_PLMN_Identity_EUTRA_5GC 可能 malloc（失败时内部已释放并清零）；Free_PLMN_Identity_EUTRA_5GC 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PLMN_Identity_EUTRA_5GC(Encoder& enc, const PLMN_Identity_EUTRA_5GC& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case PLMN_Identity_EUTRA_5GC_Tag_plmn_Identity_EUTRA_5GC:
        Encode_PLMN_Identity(enc, value.u.plmn_Identity_EUTRA_5GC);
        break;
    case PLMN_Identity_EUTRA_5GC_Tag_plmn_index:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.plmn_index), 1, 12);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PLMN_Identity_EUTRA_5GC(Decoder& dec, PLMN_Identity_EUTRA_5GC& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (PLMN_Identity_EUTRA_5GC_Tag)root_index;
    switch (value.tag) {
    case PLMN_Identity_EUTRA_5GC_Tag_plmn_Identity_EUTRA_5GC: {
        if (Decode_PLMN_Identity(dec, value.u.plmn_Identity_EUTRA_5GC) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PLMN_Identity_EUTRA_5GC_Tag_plmn_index: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 12, tmp_value)) { goto fail; }
        value.u.plmn_index = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PLMN_Identity_EUTRA_5GC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PLMN_Identity_EUTRA_5GC(PLMN_Identity_EUTRA_5GC& value)
{
    switch (value.tag) {
    case PLMN_Identity_EUTRA_5GC_Tag_plmn_Identity_EUTRA_5GC:
        Free_PLMN_Identity(value.u.plmn_Identity_EUTRA_5GC);
        break;
    case PLMN_Identity_EUTRA_5GC_Tag_plmn_index:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PLMN_IdentityList_EUTRA_EPC：ASN.1 PLMN-IdentityList-EUTRA-EPC；源文件第 4793 行；SEQUENCE OF。
// Encode_PLMN_IdentityList_EUTRA_EPC 只读不分配；Decode_PLMN_IdentityList_EUTRA_EPC 可能 malloc（失败时内部已释放并清零）；Free_PLMN_IdentityList_EUTRA_EPC 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PLMN_IdentityList_EUTRA_EPC(Encoder& enc, const PLMN_IdentityList_EUTRA_EPC& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 12u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PLMN_Identity(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_PLMN_IdentityList_EUTRA_EPC(Decoder& dec, PLMN_IdentityList_EUTRA_EPC& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 12u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 12u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PLMN_Identity*)std::malloc((std::size_t)value.count * sizeof(PLMN_Identity));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PLMN_Identity));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PLMN_Identity(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_PLMN_IdentityList_EUTRA_EPC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PLMN_IdentityList_EUTRA_EPC(PLMN_IdentityList_EUTRA_EPC& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PLMN_Identity(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellAccessRelatedInfo_EUTRA_EPC：ASN.1 CellAccessRelatedInfo-EUTRA-EPC；源文件第 4787 行；SEQUENCE。
// Encode_CellAccessRelatedInfo_EUTRA_EPC 只读不分配；Decode_CellAccessRelatedInfo_EUTRA_EPC 可能 malloc（失败时内部已释放并清零）；Free_CellAccessRelatedInfo_EUTRA_EPC 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellAccessRelatedInfo_EUTRA_EPC(Encoder& enc, const CellAccessRelatedInfo_EUTRA_EPC& value)
{
    (void)value;
    Encode_PLMN_IdentityList_EUTRA_EPC(enc, value.plmn_IdentityList_eutra_epc);
    enc.WriteFixedBitString(value.trackingAreaCode_eutra_epc.bytes, value.trackingAreaCode_eutra_epc.bitLength, 16, 16);
    enc.WriteFixedBitString(value.cellIdentity_eutra_epc.bytes, value.cellIdentity_eutra_epc.bitLength, 28, 28);
    return enc.Error();
}

ErrorCode Decode_CellAccessRelatedInfo_EUTRA_EPC(Decoder& dec, CellAccessRelatedInfo_EUTRA_EPC& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_PLMN_IdentityList_EUTRA_EPC(dec, value.plmn_IdentityList_eutra_epc) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.trackingAreaCode_eutra_epc.bytes = string_bytes;
        value.trackingAreaCode_eutra_epc.bitLength = string_length;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 28)) { goto fail; }
        string_length = 28;
        value.cellIdentity_eutra_epc.bytes = string_bytes;
        value.cellIdentity_eutra_epc.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CellAccessRelatedInfo_EUTRA_EPC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellAccessRelatedInfo_EUTRA_EPC(CellAccessRelatedInfo_EUTRA_EPC& value)
{
    Free_PLMN_IdentityList_EUTRA_EPC(value.plmn_IdentityList_eutra_epc);
    std::free(value.trackingAreaCode_eutra_epc.bytes);
    value.trackingAreaCode_eutra_epc.bytes = nullptr;
    value.trackingAreaCode_eutra_epc.bitLength = 0;
    std::free(value.cellIdentity_eutra_epc.bytes);
    value.cellIdentity_eutra_epc.bytes = nullptr;
    value.cellIdentity_eutra_epc.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18：ASN.1 cellDTXDRX-onDurationTimer-r18；源文件第 4799 行；CHOICE。
// Encode_CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18 只读不分配；Decode_CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18 可能 malloc（失败时内部已释放并清零）；Free_CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18(Encoder& enc, const CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_Tag_subMilliSeconds:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.subMilliSeconds), 1, 31);
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_Tag_milliSeconds:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.milliSeconds), 0, 31);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18(Decoder& dec, CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_Tag)root_index;
    switch (value.tag) {
    case CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_Tag_subMilliSeconds: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 31, tmp_value)) { goto fail; }
        value.u.subMilliSeconds = (int64_t)tmp_value;
        break;
    }
    case CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_Tag_milliSeconds: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.milliSeconds = (CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18(CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18& value)
{
    switch (value.tag) {
    case CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_Tag_subMilliSeconds:
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_Tag_milliSeconds:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18：ASN.1 cellDTXDRX-CycleStartOffset-r18；源文件第 4806 行；CHOICE。
// Encode_CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18 只读不分配；Decode_CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18 可能 malloc（失败时内部已释放并清零）；Free_CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18(Encoder& enc, const CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 19);
    switch (value.tag) {
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms10:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms10), 0, 9);
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms20:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms20), 0, 19);
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms32:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms32), 0, 31);
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms40:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms40), 0, 39);
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms60:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms60), 0, 59);
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms64:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms64), 0, 63);
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms70:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms70), 0, 69);
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms80:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms80), 0, 79);
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms128:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms128), 0, 127);
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms160:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms160), 0, 159);
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms256:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms256), 0, 255);
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms320:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms320), 0, 319);
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms512:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms512), 0, 511);
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms640:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms640), 0, 639);
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms1024:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms1024), 0, 1023);
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms1280:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms1280), 0, 1279);
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms2048:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms2048), 0, 2047);
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms2560:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms2560), 0, 2559);
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms5120:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms5120), 0, 5119);
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms10240:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms10240), 0, 10239);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18(Decoder& dec, CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 19, root_index)) {
        goto fail;
    }
    value.tag = (CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag)root_index;
    switch (value.tag) {
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms10: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.u.ms10 = (int64_t)tmp_value;
        break;
    }
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms20: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 19, tmp_value)) { goto fail; }
        value.u.ms20 = (int64_t)tmp_value;
        break;
    }
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms32: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.ms32 = (int64_t)tmp_value;
        break;
    }
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms40: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.ms40 = (int64_t)tmp_value;
        break;
    }
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms60: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 59, tmp_value)) { goto fail; }
        value.u.ms60 = (int64_t)tmp_value;
        break;
    }
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms64: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.ms64 = (int64_t)tmp_value;
        break;
    }
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms70: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 69, tmp_value)) { goto fail; }
        value.u.ms70 = (int64_t)tmp_value;
        break;
    }
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms80: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.ms80 = (int64_t)tmp_value;
        break;
    }
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms128: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.u.ms128 = (int64_t)tmp_value;
        break;
    }
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms160: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.u.ms160 = (int64_t)tmp_value;
        break;
    }
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms256: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
        value.u.ms256 = (int64_t)tmp_value;
        break;
    }
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms320: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.u.ms320 = (int64_t)tmp_value;
        break;
    }
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms512: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
        value.u.ms512 = (int64_t)tmp_value;
        break;
    }
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms640: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.u.ms640 = (int64_t)tmp_value;
        break;
    }
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms1024: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.u.ms1024 = (int64_t)tmp_value;
        break;
    }
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms1280: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1279, tmp_value)) { goto fail; }
        value.u.ms1280 = (int64_t)tmp_value;
        break;
    }
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms2048: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2047, tmp_value)) { goto fail; }
        value.u.ms2048 = (int64_t)tmp_value;
        break;
    }
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms2560: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2559, tmp_value)) { goto fail; }
        value.u.ms2560 = (int64_t)tmp_value;
        break;
    }
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms5120: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5119, tmp_value)) { goto fail; }
        value.u.ms5120 = (int64_t)tmp_value;
        break;
    }
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms10240: {
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
    Free_CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18(CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18& value)
{
    switch (value.tag) {
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms10:
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms20:
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms32:
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms40:
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms60:
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms64:
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms70:
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms80:
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms128:
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms160:
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms256:
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms320:
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms512:
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms640:
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms1024:
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms1280:
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms2048:
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms2560:
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms5120:
        break;
    case CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms10240:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellDTXDRX_Config_r18：ASN.1 CellDTXDRX-Config-r18；源文件第 4798 行；SEQUENCE。
// Encode_CellDTXDRX_Config_r18 只读不分配；Decode_CellDTXDRX_Config_r18 可能 malloc（失败时内部已释放并清零）；Free_CellDTXDRX_Config_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellDTXDRX_Config_r18(Encoder& enc, const CellDTXDRX_Config_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_cellDTXDRXactivationStatus_r18);
    Encode_CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18(enc, value.cellDTXDRX_onDurationTimer_r18);
    Encode_CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18(enc, value.cellDTXDRX_CycleStartOffset_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.cellDTXDRX_SlotOffset_r18), 0, 31);
    enc.WriteConstrainedInteger((std::int64_t)(value.cellDTXDRXconfigType_r18), 0, 2);
    if (value.has_cellDTXDRXactivationStatus_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cellDTXDRXactivationStatus_r18), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_CellDTXDRX_Config_r18(Decoder& dec, CellDTXDRX_Config_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18(dec, value.cellDTXDRX_onDurationTimer_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18(dec, value.cellDTXDRX_CycleStartOffset_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.cellDTXDRX_SlotOffset_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.cellDTXDRXconfigType_r18 = (CellDTXDRX_Config_r18_CellDTXDRXconfigType_r18)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.cellDTXDRXactivationStatus_r18 = (CellDTXDRX_Config_r18_CellDTXDRXactivationStatus_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CellDTXDRX_Config_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellDTXDRX_Config_r18(CellDTXDRX_Config_r18& value)
{
    Free_CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18(value.cellDTXDRX_onDurationTimer_r18);
    Free_CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18(value.cellDTXDRX_CycleStartOffset_r18);
    if (value.has_cellDTXDRXactivationStatus_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellGroupConfig_ExtGroup1：ASN.1 CellGroupConfig_ExtGroup1；源文件第 4847 行；扩展添加组 [[ ]]。
// Encode_CellGroupConfig_ExtGroup1 只读不分配；Decode_CellGroupConfig_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_CellGroupConfig_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellGroupConfig_ExtGroup1(Encoder& enc, const CellGroupConfig_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_reportUplinkTxDirectCurrent);
    if (value.has_reportUplinkTxDirectCurrent) {
        enc.WriteConstrainedInteger((std::int64_t)(value.reportUplinkTxDirectCurrent), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CellGroupConfig_ExtGroup1(Decoder& dec, CellGroupConfig_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.reportUplinkTxDirectCurrent = (CellGroupConfig_ExtGroup1_ReportUplinkTxDirectCurrent)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CellGroupConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellGroupConfig_ExtGroup1(CellGroupConfig_ExtGroup1& value)
{
    if (value.has_reportUplinkTxDirectCurrent) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellGroupConfig_ExtGroup2：ASN.1 CellGroupConfig_ExtGroup2；源文件第 4850 行；扩展添加组 [[ ]]。
// Encode_CellGroupConfig_ExtGroup2 只读不分配；Decode_CellGroupConfig_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_CellGroupConfig_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellGroupConfig_ExtGroup2(Encoder& enc, const CellGroupConfig_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_bap_Address_r16);
    enc.WriteBit(value.has_bh_RLC_ChannelToAddModList_r16);
    enc.WriteBit(value.has_bh_RLC_ChannelToReleaseList_r16);
    enc.WriteBit(value.has_f1c_TransferPath_r16);
    enc.WriteBit(value.has_simultaneousTCI_UpdateList1_r16);
    enc.WriteBit(value.has_simultaneousTCI_UpdateList2_r16);
    enc.WriteBit(value.has_simultaneousSpatial_UpdatedList1_r16);
    enc.WriteBit(value.has_simultaneousSpatial_UpdatedList2_r16);
    enc.WriteBit(value.has_uplinkTxSwitchingOption_r16);
    enc.WriteBit(value.has_uplinkTxSwitchingPowerBoosting_r16);
    if (value.has_bap_Address_r16) {
        enc.WriteFixedBitString(value.bap_Address_r16.bytes, value.bap_Address_r16.bitLength, 10, 10);
    }
    if (value.has_bh_RLC_ChannelToAddModList_r16) {
enc.WriteConstrainedLength(value.bh_RLC_ChannelToAddModList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.bh_RLC_ChannelToAddModList_r16_count; ++i) {
    Encode_BH_RLC_ChannelConfig_r16(enc, value.bh_RLC_ChannelToAddModList_r16_items[i]);
}
    }
    if (value.has_bh_RLC_ChannelToReleaseList_r16) {
enc.WriteConstrainedLength(value.bh_RLC_ChannelToReleaseList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.bh_RLC_ChannelToReleaseList_r16_count; ++i) {
    enc.WriteFixedBitString(value.bh_RLC_ChannelToReleaseList_r16_items[i].bytes, value.bh_RLC_ChannelToReleaseList_r16_items[i].bitLength, 16, 16);
}
    }
    if (value.has_f1c_TransferPath_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.f1c_TransferPath_r16), 0, 2);
    }
    if (value.has_simultaneousTCI_UpdateList1_r16) {
enc.WriteConstrainedLength(value.simultaneousTCI_UpdateList1_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.simultaneousTCI_UpdateList1_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousTCI_UpdateList1_r16_items[i]), 0, 31);
}
    }
    if (value.has_simultaneousTCI_UpdateList2_r16) {
enc.WriteConstrainedLength(value.simultaneousTCI_UpdateList2_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.simultaneousTCI_UpdateList2_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousTCI_UpdateList2_r16_items[i]), 0, 31);
}
    }
    if (value.has_simultaneousSpatial_UpdatedList1_r16) {
enc.WriteConstrainedLength(value.simultaneousSpatial_UpdatedList1_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.simultaneousSpatial_UpdatedList1_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousSpatial_UpdatedList1_r16_items[i]), 0, 31);
}
    }
    if (value.has_simultaneousSpatial_UpdatedList2_r16) {
enc.WriteConstrainedLength(value.simultaneousSpatial_UpdatedList2_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.simultaneousSpatial_UpdatedList2_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousSpatial_UpdatedList2_r16_items[i]), 0, 31);
}
    }
    if (value.has_uplinkTxSwitchingOption_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uplinkTxSwitchingOption_r16), 0, 1);
    }
    if (value.has_uplinkTxSwitchingPowerBoosting_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uplinkTxSwitchingPowerBoosting_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CellGroupConfig_ExtGroup2(Decoder& dec, CellGroupConfig_ExtGroup2& value)
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
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 10)) { goto fail; }
        string_length = 10;
        value.bap_Address_r16.bytes = string_bytes;
        value.bap_Address_r16.bitLength = string_length;
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.bh_RLC_ChannelToAddModList_r16_count)) { goto fail; }
if (value.bh_RLC_ChannelToAddModList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.bh_RLC_ChannelToAddModList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.bh_RLC_ChannelToAddModList_r16_count > 0u) {
    value.bh_RLC_ChannelToAddModList_r16_items = (BH_RLC_ChannelConfig_r16*)std::malloc((std::size_t)value.bh_RLC_ChannelToAddModList_r16_count * sizeof(BH_RLC_ChannelConfig_r16));
    if (value.bh_RLC_ChannelToAddModList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.bh_RLC_ChannelToAddModList_r16_items, 0, (std::size_t)value.bh_RLC_ChannelToAddModList_r16_count * sizeof(BH_RLC_ChannelConfig_r16));
}
for (std::uint32_t i = 0; i < value.bh_RLC_ChannelToAddModList_r16_count; ++i) {
    if (Decode_BH_RLC_ChannelConfig_r16(dec, value.bh_RLC_ChannelToAddModList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.bh_RLC_ChannelToReleaseList_r16_count)) { goto fail; }
if (value.bh_RLC_ChannelToReleaseList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.bh_RLC_ChannelToReleaseList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.bh_RLC_ChannelToReleaseList_r16_count > 0u) {
    value.bh_RLC_ChannelToReleaseList_r16_items = (BH_RLC_ChannelID_r16*)std::malloc((std::size_t)value.bh_RLC_ChannelToReleaseList_r16_count * sizeof(BH_RLC_ChannelID_r16));
    if (value.bh_RLC_ChannelToReleaseList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.bh_RLC_ChannelToReleaseList_r16_items, 0, (std::size_t)value.bh_RLC_ChannelToReleaseList_r16_count * sizeof(BH_RLC_ChannelID_r16));
}
for (std::uint32_t i = 0; i < value.bh_RLC_ChannelToReleaseList_r16_count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
    string_length = 16;
    value.bh_RLC_ChannelToReleaseList_r16_items[i].bytes = string_bytes;
    value.bh_RLC_ChannelToReleaseList_r16_items[i].bitLength = string_length;
}
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.f1c_TransferPath_r16 = (CellGroupConfig_ExtGroup2_F1c_TransferPath_r16)tmp_value;
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.simultaneousTCI_UpdateList1_r16_count)) { goto fail; }
if (value.simultaneousTCI_UpdateList1_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.simultaneousTCI_UpdateList1_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.simultaneousTCI_UpdateList1_r16_count > 0u) {
    value.simultaneousTCI_UpdateList1_r16_items = (ServCellIndex*)std::malloc((std::size_t)value.simultaneousTCI_UpdateList1_r16_count * sizeof(ServCellIndex));
    if (value.simultaneousTCI_UpdateList1_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.simultaneousTCI_UpdateList1_r16_items, 0, (std::size_t)value.simultaneousTCI_UpdateList1_r16_count * sizeof(ServCellIndex));
}
for (std::uint32_t i = 0; i < value.simultaneousTCI_UpdateList1_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.simultaneousTCI_UpdateList1_r16_items[i] = (ServCellIndex)tmp_value;
}
    }
    if (present_5) {
if (!dec.ReadConstrainedLength(0u, 0u, value.simultaneousTCI_UpdateList2_r16_count)) { goto fail; }
if (value.simultaneousTCI_UpdateList2_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.simultaneousTCI_UpdateList2_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.simultaneousTCI_UpdateList2_r16_count > 0u) {
    value.simultaneousTCI_UpdateList2_r16_items = (ServCellIndex*)std::malloc((std::size_t)value.simultaneousTCI_UpdateList2_r16_count * sizeof(ServCellIndex));
    if (value.simultaneousTCI_UpdateList2_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.simultaneousTCI_UpdateList2_r16_items, 0, (std::size_t)value.simultaneousTCI_UpdateList2_r16_count * sizeof(ServCellIndex));
}
for (std::uint32_t i = 0; i < value.simultaneousTCI_UpdateList2_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.simultaneousTCI_UpdateList2_r16_items[i] = (ServCellIndex)tmp_value;
}
    }
    if (present_6) {
if (!dec.ReadConstrainedLength(0u, 0u, value.simultaneousSpatial_UpdatedList1_r16_count)) { goto fail; }
if (value.simultaneousSpatial_UpdatedList1_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.simultaneousSpatial_UpdatedList1_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.simultaneousSpatial_UpdatedList1_r16_count > 0u) {
    value.simultaneousSpatial_UpdatedList1_r16_items = (ServCellIndex*)std::malloc((std::size_t)value.simultaneousSpatial_UpdatedList1_r16_count * sizeof(ServCellIndex));
    if (value.simultaneousSpatial_UpdatedList1_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.simultaneousSpatial_UpdatedList1_r16_items, 0, (std::size_t)value.simultaneousSpatial_UpdatedList1_r16_count * sizeof(ServCellIndex));
}
for (std::uint32_t i = 0; i < value.simultaneousSpatial_UpdatedList1_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.simultaneousSpatial_UpdatedList1_r16_items[i] = (ServCellIndex)tmp_value;
}
    }
    if (present_7) {
if (!dec.ReadConstrainedLength(0u, 0u, value.simultaneousSpatial_UpdatedList2_r16_count)) { goto fail; }
if (value.simultaneousSpatial_UpdatedList2_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.simultaneousSpatial_UpdatedList2_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.simultaneousSpatial_UpdatedList2_r16_count > 0u) {
    value.simultaneousSpatial_UpdatedList2_r16_items = (ServCellIndex*)std::malloc((std::size_t)value.simultaneousSpatial_UpdatedList2_r16_count * sizeof(ServCellIndex));
    if (value.simultaneousSpatial_UpdatedList2_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.simultaneousSpatial_UpdatedList2_r16_items, 0, (std::size_t)value.simultaneousSpatial_UpdatedList2_r16_count * sizeof(ServCellIndex));
}
for (std::uint32_t i = 0; i < value.simultaneousSpatial_UpdatedList2_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.simultaneousSpatial_UpdatedList2_r16_items[i] = (ServCellIndex)tmp_value;
}
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.uplinkTxSwitchingOption_r16 = (CellGroupConfig_ExtGroup2_UplinkTxSwitchingOption_r16)tmp_value;
    }
    if (present_9) {
        value.uplinkTxSwitchingPowerBoosting_r16 = (CellGroupConfig_ExtGroup2_UplinkTxSwitchingPowerBoosting_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CellGroupConfig_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellGroupConfig_ExtGroup2(CellGroupConfig_ExtGroup2& value)
{
    if (value.has_bap_Address_r16) {
        std::free(value.bap_Address_r16.bytes);
        value.bap_Address_r16.bytes = nullptr;
        value.bap_Address_r16.bitLength = 0;
    }
    if (value.has_bh_RLC_ChannelToAddModList_r16) {
        if (value.bh_RLC_ChannelToAddModList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.bh_RLC_ChannelToAddModList_r16_count; ++i) {
                Free_BH_RLC_ChannelConfig_r16(value.bh_RLC_ChannelToAddModList_r16_items[i]);
            }
            std::free(value.bh_RLC_ChannelToAddModList_r16_items);
            value.bh_RLC_ChannelToAddModList_r16_items = nullptr;
        }
        value.bh_RLC_ChannelToAddModList_r16_count = 0;
    }
    if (value.has_bh_RLC_ChannelToReleaseList_r16) {
        if (value.bh_RLC_ChannelToReleaseList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.bh_RLC_ChannelToReleaseList_r16_count; ++i) {
                std::free(value.bh_RLC_ChannelToReleaseList_r16_items[i].bytes);
                value.bh_RLC_ChannelToReleaseList_r16_items[i].bytes = nullptr;
                value.bh_RLC_ChannelToReleaseList_r16_items[i].bitLength = 0;
            }
            std::free(value.bh_RLC_ChannelToReleaseList_r16_items);
            value.bh_RLC_ChannelToReleaseList_r16_items = nullptr;
        }
        value.bh_RLC_ChannelToReleaseList_r16_count = 0;
    }
    if (value.has_f1c_TransferPath_r16) {
    }
    if (value.has_simultaneousTCI_UpdateList1_r16) {
        if (value.simultaneousTCI_UpdateList1_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.simultaneousTCI_UpdateList1_r16_count; ++i) {
            }
            std::free(value.simultaneousTCI_UpdateList1_r16_items);
            value.simultaneousTCI_UpdateList1_r16_items = nullptr;
        }
        value.simultaneousTCI_UpdateList1_r16_count = 0;
    }
    if (value.has_simultaneousTCI_UpdateList2_r16) {
        if (value.simultaneousTCI_UpdateList2_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.simultaneousTCI_UpdateList2_r16_count; ++i) {
            }
            std::free(value.simultaneousTCI_UpdateList2_r16_items);
            value.simultaneousTCI_UpdateList2_r16_items = nullptr;
        }
        value.simultaneousTCI_UpdateList2_r16_count = 0;
    }
    if (value.has_simultaneousSpatial_UpdatedList1_r16) {
        if (value.simultaneousSpatial_UpdatedList1_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.simultaneousSpatial_UpdatedList1_r16_count; ++i) {
            }
            std::free(value.simultaneousSpatial_UpdatedList1_r16_items);
            value.simultaneousSpatial_UpdatedList1_r16_items = nullptr;
        }
        value.simultaneousSpatial_UpdatedList1_r16_count = 0;
    }
    if (value.has_simultaneousSpatial_UpdatedList2_r16) {
        if (value.simultaneousSpatial_UpdatedList2_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.simultaneousSpatial_UpdatedList2_r16_count; ++i) {
            }
            std::free(value.simultaneousSpatial_UpdatedList2_r16_items);
            value.simultaneousSpatial_UpdatedList2_r16_items = nullptr;
        }
        value.simultaneousSpatial_UpdatedList2_r16_count = 0;
    }
    if (value.has_uplinkTxSwitchingOption_r16) {
    }
    if (value.has_uplinkTxSwitchingPowerBoosting_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellGroupConfig_ExtGroup3：ASN.1 CellGroupConfig_ExtGroup3；源文件第 4862 行；扩展添加组 [[ ]]。
// Encode_CellGroupConfig_ExtGroup3 只读不分配；Decode_CellGroupConfig_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_CellGroupConfig_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellGroupConfig_ExtGroup3(Encoder& enc, const CellGroupConfig_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_reportUplinkTxDirectCurrentTwoCarrier_r16);
    if (value.has_reportUplinkTxDirectCurrentTwoCarrier_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.reportUplinkTxDirectCurrentTwoCarrier_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CellGroupConfig_ExtGroup3(Decoder& dec, CellGroupConfig_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.reportUplinkTxDirectCurrentTwoCarrier_r16 = (CellGroupConfig_ExtGroup3_ReportUplinkTxDirectCurrentTwoCarrier_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CellGroupConfig_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellGroupConfig_ExtGroup3(CellGroupConfig_ExtGroup3& value)
{
    if (value.has_reportUplinkTxDirectCurrentTwoCarrier_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellGroupConfig_ExtGroup4：ASN.1 CellGroupConfig_ExtGroup4；源文件第 4865 行；扩展添加组 [[ ]]。
// Encode_CellGroupConfig_ExtGroup4 只读不分配；Decode_CellGroupConfig_ExtGroup4 可能 malloc（失败时内部已释放并清零）；Free_CellGroupConfig_ExtGroup4 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellGroupConfig_ExtGroup4(Encoder& enc, const CellGroupConfig_ExtGroup4& value)
{
    (void)value;
    enc.WriteBit(value.has_f1c_TransferPathNRDC_r17);
    enc.WriteBit(value.has_uplinkTxSwitching_2T_Mode_r17);
    enc.WriteBit(value.has_uplinkTxSwitching_DualUL_TxState_r17);
    enc.WriteBit(value.has_uu_RelayRLC_ChannelToAddModList_r17);
    enc.WriteBit(value.has_uu_RelayRLC_ChannelToReleaseList_r17);
    enc.WriteBit(value.has_simultaneousU_TCI_UpdateList1_r17);
    enc.WriteBit(value.has_simultaneousU_TCI_UpdateList2_r17);
    enc.WriteBit(value.has_simultaneousU_TCI_UpdateList3_r17);
    enc.WriteBit(value.has_simultaneousU_TCI_UpdateList4_r17);
    enc.WriteBit(value.has_rlc_BearerToReleaseListExt_r17);
    enc.WriteBit(value.has_iab_ResourceConfigToAddModList_r17);
    enc.WriteBit(value.has_iab_ResourceConfigToReleaseList_r17);
    if (value.has_f1c_TransferPathNRDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.f1c_TransferPathNRDC_r17), 0, 2);
    }
    if (value.has_uplinkTxSwitching_2T_Mode_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uplinkTxSwitching_2T_Mode_r17), 0, 0);
    }
    if (value.has_uplinkTxSwitching_DualUL_TxState_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uplinkTxSwitching_DualUL_TxState_r17), 0, 1);
    }
    if (value.has_uu_RelayRLC_ChannelToAddModList_r17) {
enc.WriteConstrainedLength(value.uu_RelayRLC_ChannelToAddModList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.uu_RelayRLC_ChannelToAddModList_r17_count; ++i) {
    Encode_Uu_RelayRLC_ChannelConfig_r17(enc, value.uu_RelayRLC_ChannelToAddModList_r17_items[i]);
}
    }
    if (value.has_uu_RelayRLC_ChannelToReleaseList_r17) {
enc.WriteConstrainedLength(value.uu_RelayRLC_ChannelToReleaseList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.uu_RelayRLC_ChannelToReleaseList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.uu_RelayRLC_ChannelToReleaseList_r17_items[i]), 1, 32);
}
    }
    if (value.has_simultaneousU_TCI_UpdateList1_r17) {
enc.WriteConstrainedLength(value.simultaneousU_TCI_UpdateList1_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.simultaneousU_TCI_UpdateList1_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousU_TCI_UpdateList1_r17_items[i]), 0, 31);
}
    }
    if (value.has_simultaneousU_TCI_UpdateList2_r17) {
enc.WriteConstrainedLength(value.simultaneousU_TCI_UpdateList2_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.simultaneousU_TCI_UpdateList2_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousU_TCI_UpdateList2_r17_items[i]), 0, 31);
}
    }
    if (value.has_simultaneousU_TCI_UpdateList3_r17) {
enc.WriteConstrainedLength(value.simultaneousU_TCI_UpdateList3_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.simultaneousU_TCI_UpdateList3_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousU_TCI_UpdateList3_r17_items[i]), 0, 31);
}
    }
    if (value.has_simultaneousU_TCI_UpdateList4_r17) {
enc.WriteConstrainedLength(value.simultaneousU_TCI_UpdateList4_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.simultaneousU_TCI_UpdateList4_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousU_TCI_UpdateList4_r17_items[i]), 0, 31);
}
    }
    if (value.has_rlc_BearerToReleaseListExt_r17) {
enc.WriteConstrainedLength(value.rlc_BearerToReleaseListExt_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.rlc_BearerToReleaseListExt_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.rlc_BearerToReleaseListExt_r17_items[i]), 320, 65855);
}
    }
    if (value.has_iab_ResourceConfigToAddModList_r17) {
enc.WriteConstrainedLength(value.iab_ResourceConfigToAddModList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.iab_ResourceConfigToAddModList_r17_count; ++i) {
    Encode_IAB_ResourceConfig_r17(enc, value.iab_ResourceConfigToAddModList_r17_items[i]);
}
    }
    if (value.has_iab_ResourceConfigToReleaseList_r17) {
enc.WriteConstrainedLength(value.iab_ResourceConfigToReleaseList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.iab_ResourceConfigToReleaseList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.iab_ResourceConfigToReleaseList_r17_items[i]), 0, 65535);
}
    }
    return enc.Error();
}

ErrorCode Decode_CellGroupConfig_ExtGroup4(Decoder& dec, CellGroupConfig_ExtGroup4& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.f1c_TransferPathNRDC_r17 = (CellGroupConfig_ExtGroup4_F1c_TransferPathNRDC_r17)tmp_value;
    }
    if (present_1) {
        value.uplinkTxSwitching_2T_Mode_r17 = (CellGroupConfig_ExtGroup4_UplinkTxSwitching_2T_Mode_r17)0;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.uplinkTxSwitching_DualUL_TxState_r17 = (CellGroupConfig_ExtGroup4_UplinkTxSwitching_DualUL_TxState_r17)tmp_value;
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.uu_RelayRLC_ChannelToAddModList_r17_count)) { goto fail; }
if (value.uu_RelayRLC_ChannelToAddModList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.uu_RelayRLC_ChannelToAddModList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.uu_RelayRLC_ChannelToAddModList_r17_count > 0u) {
    value.uu_RelayRLC_ChannelToAddModList_r17_items = (Uu_RelayRLC_ChannelConfig_r17*)std::malloc((std::size_t)value.uu_RelayRLC_ChannelToAddModList_r17_count * sizeof(Uu_RelayRLC_ChannelConfig_r17));
    if (value.uu_RelayRLC_ChannelToAddModList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.uu_RelayRLC_ChannelToAddModList_r17_items, 0, (std::size_t)value.uu_RelayRLC_ChannelToAddModList_r17_count * sizeof(Uu_RelayRLC_ChannelConfig_r17));
}
for (std::uint32_t i = 0; i < value.uu_RelayRLC_ChannelToAddModList_r17_count; ++i) {
    if (Decode_Uu_RelayRLC_ChannelConfig_r17(dec, value.uu_RelayRLC_ChannelToAddModList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.uu_RelayRLC_ChannelToReleaseList_r17_count)) { goto fail; }
if (value.uu_RelayRLC_ChannelToReleaseList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.uu_RelayRLC_ChannelToReleaseList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.uu_RelayRLC_ChannelToReleaseList_r17_count > 0u) {
    value.uu_RelayRLC_ChannelToReleaseList_r17_items = (Uu_RelayRLC_ChannelID_r17*)std::malloc((std::size_t)value.uu_RelayRLC_ChannelToReleaseList_r17_count * sizeof(Uu_RelayRLC_ChannelID_r17));
    if (value.uu_RelayRLC_ChannelToReleaseList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.uu_RelayRLC_ChannelToReleaseList_r17_items, 0, (std::size_t)value.uu_RelayRLC_ChannelToReleaseList_r17_count * sizeof(Uu_RelayRLC_ChannelID_r17));
}
for (std::uint32_t i = 0; i < value.uu_RelayRLC_ChannelToReleaseList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
    value.uu_RelayRLC_ChannelToReleaseList_r17_items[i] = (Uu_RelayRLC_ChannelID_r17)tmp_value;
}
    }
    if (present_5) {
if (!dec.ReadConstrainedLength(0u, 0u, value.simultaneousU_TCI_UpdateList1_r17_count)) { goto fail; }
if (value.simultaneousU_TCI_UpdateList1_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.simultaneousU_TCI_UpdateList1_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.simultaneousU_TCI_UpdateList1_r17_count > 0u) {
    value.simultaneousU_TCI_UpdateList1_r17_items = (ServCellIndex*)std::malloc((std::size_t)value.simultaneousU_TCI_UpdateList1_r17_count * sizeof(ServCellIndex));
    if (value.simultaneousU_TCI_UpdateList1_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.simultaneousU_TCI_UpdateList1_r17_items, 0, (std::size_t)value.simultaneousU_TCI_UpdateList1_r17_count * sizeof(ServCellIndex));
}
for (std::uint32_t i = 0; i < value.simultaneousU_TCI_UpdateList1_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.simultaneousU_TCI_UpdateList1_r17_items[i] = (ServCellIndex)tmp_value;
}
    }
    if (present_6) {
if (!dec.ReadConstrainedLength(0u, 0u, value.simultaneousU_TCI_UpdateList2_r17_count)) { goto fail; }
if (value.simultaneousU_TCI_UpdateList2_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.simultaneousU_TCI_UpdateList2_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.simultaneousU_TCI_UpdateList2_r17_count > 0u) {
    value.simultaneousU_TCI_UpdateList2_r17_items = (ServCellIndex*)std::malloc((std::size_t)value.simultaneousU_TCI_UpdateList2_r17_count * sizeof(ServCellIndex));
    if (value.simultaneousU_TCI_UpdateList2_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.simultaneousU_TCI_UpdateList2_r17_items, 0, (std::size_t)value.simultaneousU_TCI_UpdateList2_r17_count * sizeof(ServCellIndex));
}
for (std::uint32_t i = 0; i < value.simultaneousU_TCI_UpdateList2_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.simultaneousU_TCI_UpdateList2_r17_items[i] = (ServCellIndex)tmp_value;
}
    }
    if (present_7) {
if (!dec.ReadConstrainedLength(0u, 0u, value.simultaneousU_TCI_UpdateList3_r17_count)) { goto fail; }
if (value.simultaneousU_TCI_UpdateList3_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.simultaneousU_TCI_UpdateList3_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.simultaneousU_TCI_UpdateList3_r17_count > 0u) {
    value.simultaneousU_TCI_UpdateList3_r17_items = (ServCellIndex*)std::malloc((std::size_t)value.simultaneousU_TCI_UpdateList3_r17_count * sizeof(ServCellIndex));
    if (value.simultaneousU_TCI_UpdateList3_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.simultaneousU_TCI_UpdateList3_r17_items, 0, (std::size_t)value.simultaneousU_TCI_UpdateList3_r17_count * sizeof(ServCellIndex));
}
for (std::uint32_t i = 0; i < value.simultaneousU_TCI_UpdateList3_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.simultaneousU_TCI_UpdateList3_r17_items[i] = (ServCellIndex)tmp_value;
}
    }
    if (present_8) {
if (!dec.ReadConstrainedLength(0u, 0u, value.simultaneousU_TCI_UpdateList4_r17_count)) { goto fail; }
if (value.simultaneousU_TCI_UpdateList4_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.simultaneousU_TCI_UpdateList4_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.simultaneousU_TCI_UpdateList4_r17_count > 0u) {
    value.simultaneousU_TCI_UpdateList4_r17_items = (ServCellIndex*)std::malloc((std::size_t)value.simultaneousU_TCI_UpdateList4_r17_count * sizeof(ServCellIndex));
    if (value.simultaneousU_TCI_UpdateList4_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.simultaneousU_TCI_UpdateList4_r17_items, 0, (std::size_t)value.simultaneousU_TCI_UpdateList4_r17_count * sizeof(ServCellIndex));
}
for (std::uint32_t i = 0; i < value.simultaneousU_TCI_UpdateList4_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.simultaneousU_TCI_UpdateList4_r17_items[i] = (ServCellIndex)tmp_value;
}
    }
    if (present_9) {
if (!dec.ReadConstrainedLength(0u, 0u, value.rlc_BearerToReleaseListExt_r17_count)) { goto fail; }
if (value.rlc_BearerToReleaseListExt_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.rlc_BearerToReleaseListExt_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.rlc_BearerToReleaseListExt_r17_count > 0u) {
    value.rlc_BearerToReleaseListExt_r17_items = (LogicalChannelIdentityExt_r17*)std::malloc((std::size_t)value.rlc_BearerToReleaseListExt_r17_count * sizeof(LogicalChannelIdentityExt_r17));
    if (value.rlc_BearerToReleaseListExt_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.rlc_BearerToReleaseListExt_r17_items, 0, (std::size_t)value.rlc_BearerToReleaseListExt_r17_count * sizeof(LogicalChannelIdentityExt_r17));
}
for (std::uint32_t i = 0; i < value.rlc_BearerToReleaseListExt_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(320, 65855, tmp_value)) { goto fail; }
    value.rlc_BearerToReleaseListExt_r17_items[i] = (LogicalChannelIdentityExt_r17)tmp_value;
}
    }
    if (present_10) {
if (!dec.ReadConstrainedLength(0u, 0u, value.iab_ResourceConfigToAddModList_r17_count)) { goto fail; }
if (value.iab_ResourceConfigToAddModList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.iab_ResourceConfigToAddModList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.iab_ResourceConfigToAddModList_r17_count > 0u) {
    value.iab_ResourceConfigToAddModList_r17_items = (IAB_ResourceConfig_r17*)std::malloc((std::size_t)value.iab_ResourceConfigToAddModList_r17_count * sizeof(IAB_ResourceConfig_r17));
    if (value.iab_ResourceConfigToAddModList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.iab_ResourceConfigToAddModList_r17_items, 0, (std::size_t)value.iab_ResourceConfigToAddModList_r17_count * sizeof(IAB_ResourceConfig_r17));
}
for (std::uint32_t i = 0; i < value.iab_ResourceConfigToAddModList_r17_count; ++i) {
    if (Decode_IAB_ResourceConfig_r17(dec, value.iab_ResourceConfigToAddModList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_11) {
if (!dec.ReadConstrainedLength(0u, 0u, value.iab_ResourceConfigToReleaseList_r17_count)) { goto fail; }
if (value.iab_ResourceConfigToReleaseList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.iab_ResourceConfigToReleaseList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.iab_ResourceConfigToReleaseList_r17_count > 0u) {
    value.iab_ResourceConfigToReleaseList_r17_items = (IAB_ResourceConfigID_r17*)std::malloc((std::size_t)value.iab_ResourceConfigToReleaseList_r17_count * sizeof(IAB_ResourceConfigID_r17));
    if (value.iab_ResourceConfigToReleaseList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.iab_ResourceConfigToReleaseList_r17_items, 0, (std::size_t)value.iab_ResourceConfigToReleaseList_r17_count * sizeof(IAB_ResourceConfigID_r17));
}
for (std::uint32_t i = 0; i < value.iab_ResourceConfigToReleaseList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
    value.iab_ResourceConfigToReleaseList_r17_items[i] = (IAB_ResourceConfigID_r17)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CellGroupConfig_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellGroupConfig_ExtGroup4(CellGroupConfig_ExtGroup4& value)
{
    if (value.has_f1c_TransferPathNRDC_r17) {
    }
    if (value.has_uplinkTxSwitching_2T_Mode_r17) {
    }
    if (value.has_uplinkTxSwitching_DualUL_TxState_r17) {
    }
    if (value.has_uu_RelayRLC_ChannelToAddModList_r17) {
        if (value.uu_RelayRLC_ChannelToAddModList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.uu_RelayRLC_ChannelToAddModList_r17_count; ++i) {
                Free_Uu_RelayRLC_ChannelConfig_r17(value.uu_RelayRLC_ChannelToAddModList_r17_items[i]);
            }
            std::free(value.uu_RelayRLC_ChannelToAddModList_r17_items);
            value.uu_RelayRLC_ChannelToAddModList_r17_items = nullptr;
        }
        value.uu_RelayRLC_ChannelToAddModList_r17_count = 0;
    }
    if (value.has_uu_RelayRLC_ChannelToReleaseList_r17) {
        if (value.uu_RelayRLC_ChannelToReleaseList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.uu_RelayRLC_ChannelToReleaseList_r17_count; ++i) {
            }
            std::free(value.uu_RelayRLC_ChannelToReleaseList_r17_items);
            value.uu_RelayRLC_ChannelToReleaseList_r17_items = nullptr;
        }
        value.uu_RelayRLC_ChannelToReleaseList_r17_count = 0;
    }
    if (value.has_simultaneousU_TCI_UpdateList1_r17) {
        if (value.simultaneousU_TCI_UpdateList1_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.simultaneousU_TCI_UpdateList1_r17_count; ++i) {
            }
            std::free(value.simultaneousU_TCI_UpdateList1_r17_items);
            value.simultaneousU_TCI_UpdateList1_r17_items = nullptr;
        }
        value.simultaneousU_TCI_UpdateList1_r17_count = 0;
    }
    if (value.has_simultaneousU_TCI_UpdateList2_r17) {
        if (value.simultaneousU_TCI_UpdateList2_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.simultaneousU_TCI_UpdateList2_r17_count; ++i) {
            }
            std::free(value.simultaneousU_TCI_UpdateList2_r17_items);
            value.simultaneousU_TCI_UpdateList2_r17_items = nullptr;
        }
        value.simultaneousU_TCI_UpdateList2_r17_count = 0;
    }
    if (value.has_simultaneousU_TCI_UpdateList3_r17) {
        if (value.simultaneousU_TCI_UpdateList3_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.simultaneousU_TCI_UpdateList3_r17_count; ++i) {
            }
            std::free(value.simultaneousU_TCI_UpdateList3_r17_items);
            value.simultaneousU_TCI_UpdateList3_r17_items = nullptr;
        }
        value.simultaneousU_TCI_UpdateList3_r17_count = 0;
    }
    if (value.has_simultaneousU_TCI_UpdateList4_r17) {
        if (value.simultaneousU_TCI_UpdateList4_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.simultaneousU_TCI_UpdateList4_r17_count; ++i) {
            }
            std::free(value.simultaneousU_TCI_UpdateList4_r17_items);
            value.simultaneousU_TCI_UpdateList4_r17_items = nullptr;
        }
        value.simultaneousU_TCI_UpdateList4_r17_count = 0;
    }
    if (value.has_rlc_BearerToReleaseListExt_r17) {
        if (value.rlc_BearerToReleaseListExt_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.rlc_BearerToReleaseListExt_r17_count; ++i) {
            }
            std::free(value.rlc_BearerToReleaseListExt_r17_items);
            value.rlc_BearerToReleaseListExt_r17_items = nullptr;
        }
        value.rlc_BearerToReleaseListExt_r17_count = 0;
    }
    if (value.has_iab_ResourceConfigToAddModList_r17) {
        if (value.iab_ResourceConfigToAddModList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.iab_ResourceConfigToAddModList_r17_count; ++i) {
                Free_IAB_ResourceConfig_r17(value.iab_ResourceConfigToAddModList_r17_items[i]);
            }
            std::free(value.iab_ResourceConfigToAddModList_r17_items);
            value.iab_ResourceConfigToAddModList_r17_items = nullptr;
        }
        value.iab_ResourceConfigToAddModList_r17_count = 0;
    }
    if (value.has_iab_ResourceConfigToReleaseList_r17) {
        if (value.iab_ResourceConfigToReleaseList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.iab_ResourceConfigToReleaseList_r17_count; ++i) {
            }
            std::free(value.iab_ResourceConfigToReleaseList_r17_items);
            value.iab_ResourceConfigToReleaseList_r17_items = nullptr;
        }
        value.iab_ResourceConfigToReleaseList_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ReportUplinkTxDirectCurrentMoreCarrier_r17：ASN.1 ReportUplinkTxDirectCurrentMoreCarrier-r17；源文件第 4995 行；SEQUENCE OF。
// Encode_ReportUplinkTxDirectCurrentMoreCarrier_r17 只读不分配；Decode_ReportUplinkTxDirectCurrentMoreCarrier_r17 可能 malloc（失败时内部已释放并清零）；Free_ReportUplinkTxDirectCurrentMoreCarrier_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ReportUplinkTxDirectCurrentMoreCarrier_r17(Encoder& enc, const ReportUplinkTxDirectCurrentMoreCarrier_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_IntraBandCC_CombinationReqList_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_ReportUplinkTxDirectCurrentMoreCarrier_r17(Decoder& dec, ReportUplinkTxDirectCurrentMoreCarrier_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (IntraBandCC_CombinationReqList_r17*)std::malloc((std::size_t)value.count * sizeof(IntraBandCC_CombinationReqList_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(IntraBandCC_CombinationReqList_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_IntraBandCC_CombinationReqList_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_ReportUplinkTxDirectCurrentMoreCarrier_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReportUplinkTxDirectCurrentMoreCarrier_r17(ReportUplinkTxDirectCurrentMoreCarrier_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_IntraBandCC_CombinationReqList_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellGroupConfig_ExtGroup5：ASN.1 CellGroupConfig_ExtGroup5；源文件第 4881 行；扩展添加组 [[ ]]。
// Encode_CellGroupConfig_ExtGroup5 只读不分配；Decode_CellGroupConfig_ExtGroup5 可能 malloc（失败时内部已释放并清零）；Free_CellGroupConfig_ExtGroup5 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellGroupConfig_ExtGroup5(Encoder& enc, const CellGroupConfig_ExtGroup5& value)
{
    (void)value;
    enc.WriteBit(value.has_reportUplinkTxDirectCurrentMoreCarrier_r17);
    if (value.has_reportUplinkTxDirectCurrentMoreCarrier_r17) {
        Encode_ReportUplinkTxDirectCurrentMoreCarrier_r17(enc, value.reportUplinkTxDirectCurrentMoreCarrier_r17);
    }
    return enc.Error();
}

ErrorCode Decode_CellGroupConfig_ExtGroup5(Decoder& dec, CellGroupConfig_ExtGroup5& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_ReportUplinkTxDirectCurrentMoreCarrier_r17(dec, value.reportUplinkTxDirectCurrentMoreCarrier_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CellGroupConfig_ExtGroup5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellGroupConfig_ExtGroup5(CellGroupConfig_ExtGroup5& value)
{
    if (value.has_reportUplinkTxDirectCurrentMoreCarrier_r17) {
        Free_ReportUplinkTxDirectCurrentMoreCarrier_r17(value.reportUplinkTxDirectCurrentMoreCarrier_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellGroupConfig_ExtGroup6：ASN.1 CellGroupConfig_ExtGroup6；源文件第 4884 行；扩展添加组 [[ ]]。
// Encode_CellGroupConfig_ExtGroup6 只读不分配；Decode_CellGroupConfig_ExtGroup6 可能 malloc（失败时内部已释放并清零）；Free_CellGroupConfig_ExtGroup6 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellGroupConfig_ExtGroup6(Encoder& enc, const CellGroupConfig_ExtGroup6& value)
{
    (void)value;
    enc.WriteBit(value.has_prioSCellPRACH_OverSP_PeriodicSRS_r17);
    if (value.has_prioSCellPRACH_OverSP_PeriodicSRS_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.prioSCellPRACH_OverSP_PeriodicSRS_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CellGroupConfig_ExtGroup6(Decoder& dec, CellGroupConfig_ExtGroup6& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.prioSCellPRACH_OverSP_PeriodicSRS_r17 = (CellGroupConfig_ExtGroup6_PrioSCellPRACH_OverSP_PeriodicSRS_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CellGroupConfig_ExtGroup6(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellGroupConfig_ExtGroup6(CellGroupConfig_ExtGroup6& value)
{
    if (value.has_prioSCellPRACH_OverSP_PeriodicSRS_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NCR_AperiodicFwdConfig_r18：ASN.1 NCR-AperiodicFwdConfig-r18；源文件第 8486 行；SEQUENCE。
// Encode_NCR_AperiodicFwdConfig_r18 只读不分配；Decode_NCR_AperiodicFwdConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_NCR_AperiodicFwdConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NCR_AperiodicFwdConfig_r18(Encoder& enc, const NCR_AperiodicFwdConfig_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_aperiodicFwdTimeRsrcToAddModList_r18);
    enc.WriteBit(value.has_aperiodicFwdTimeRsrcToReleaseList_r18);
    enc.WriteBit(value.has_referenceSCS_r18);
    enc.WriteBit(value.has_aperiodicBeamFieldWidth_r18);
    enc.WriteBit(value.has_numberOfFields_r18);
    if (value.has_aperiodicFwdTimeRsrcToAddModList_r18) {
enc.WriteConstrainedLength(value.aperiodicFwdTimeRsrcToAddModList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.aperiodicFwdTimeRsrcToAddModList_r18_count; ++i) {
    Encode_NCR_AperiodicFwdTimeResource_r18(enc, value.aperiodicFwdTimeRsrcToAddModList_r18_items[i]);
}
    }
    if (value.has_aperiodicFwdTimeRsrcToReleaseList_r18) {
enc.WriteConstrainedLength(value.aperiodicFwdTimeRsrcToReleaseList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.aperiodicFwdTimeRsrcToReleaseList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.aperiodicFwdTimeRsrcToReleaseList_r18_items[i]), 0, 111);
}
    }
    if (value.has_referenceSCS_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.referenceSCS_r18), 0, 7);
    }
    if (value.has_aperiodicBeamFieldWidth_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aperiodicBeamFieldWidth_r18), 1, 6);
    }
    if (value.has_numberOfFields_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.numberOfFields_r18), 1, 32);
    }
    return enc.Error();
}

ErrorCode Decode_NCR_AperiodicFwdConfig_r18(Decoder& dec, NCR_AperiodicFwdConfig_r18& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.aperiodicFwdTimeRsrcToAddModList_r18_count)) { goto fail; }
if (value.aperiodicFwdTimeRsrcToAddModList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.aperiodicFwdTimeRsrcToAddModList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.aperiodicFwdTimeRsrcToAddModList_r18_count > 0u) {
    value.aperiodicFwdTimeRsrcToAddModList_r18_items = (NCR_AperiodicFwdTimeResource_r18*)std::malloc((std::size_t)value.aperiodicFwdTimeRsrcToAddModList_r18_count * sizeof(NCR_AperiodicFwdTimeResource_r18));
    if (value.aperiodicFwdTimeRsrcToAddModList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.aperiodicFwdTimeRsrcToAddModList_r18_items, 0, (std::size_t)value.aperiodicFwdTimeRsrcToAddModList_r18_count * sizeof(NCR_AperiodicFwdTimeResource_r18));
}
for (std::uint32_t i = 0; i < value.aperiodicFwdTimeRsrcToAddModList_r18_count; ++i) {
    if (Decode_NCR_AperiodicFwdTimeResource_r18(dec, value.aperiodicFwdTimeRsrcToAddModList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.aperiodicFwdTimeRsrcToReleaseList_r18_count)) { goto fail; }
if (value.aperiodicFwdTimeRsrcToReleaseList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.aperiodicFwdTimeRsrcToReleaseList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.aperiodicFwdTimeRsrcToReleaseList_r18_count > 0u) {
    value.aperiodicFwdTimeRsrcToReleaseList_r18_items = (NCR_AperiodicFwdTimeResourceId_r18*)std::malloc((std::size_t)value.aperiodicFwdTimeRsrcToReleaseList_r18_count * sizeof(NCR_AperiodicFwdTimeResourceId_r18));
    if (value.aperiodicFwdTimeRsrcToReleaseList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.aperiodicFwdTimeRsrcToReleaseList_r18_items, 0, (std::size_t)value.aperiodicFwdTimeRsrcToReleaseList_r18_count * sizeof(NCR_AperiodicFwdTimeResourceId_r18));
}
for (std::uint32_t i = 0; i < value.aperiodicFwdTimeRsrcToReleaseList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 111, tmp_value)) { goto fail; }
    value.aperiodicFwdTimeRsrcToReleaseList_r18_items[i] = (NCR_AperiodicFwdTimeResourceId_r18)tmp_value;
}
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.referenceSCS_r18 = (SubcarrierSpacing)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 6, tmp_value)) { goto fail; }
        value.aperiodicBeamFieldWidth_r18 = (int64_t)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.numberOfFields_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NCR_AperiodicFwdConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NCR_AperiodicFwdConfig_r18(NCR_AperiodicFwdConfig_r18& value)
{
    if (value.has_aperiodicFwdTimeRsrcToAddModList_r18) {
        if (value.aperiodicFwdTimeRsrcToAddModList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.aperiodicFwdTimeRsrcToAddModList_r18_count; ++i) {
                Free_NCR_AperiodicFwdTimeResource_r18(value.aperiodicFwdTimeRsrcToAddModList_r18_items[i]);
            }
            std::free(value.aperiodicFwdTimeRsrcToAddModList_r18_items);
            value.aperiodicFwdTimeRsrcToAddModList_r18_items = nullptr;
        }
        value.aperiodicFwdTimeRsrcToAddModList_r18_count = 0;
    }
    if (value.has_aperiodicFwdTimeRsrcToReleaseList_r18) {
        if (value.aperiodicFwdTimeRsrcToReleaseList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.aperiodicFwdTimeRsrcToReleaseList_r18_count; ++i) {
            }
            std::free(value.aperiodicFwdTimeRsrcToReleaseList_r18_items);
            value.aperiodicFwdTimeRsrcToReleaseList_r18_items = nullptr;
        }
        value.aperiodicFwdTimeRsrcToReleaseList_r18_count = 0;
    }
    if (value.has_referenceSCS_r18) {
    }
    if (value.has_aperiodicBeamFieldWidth_r18) {
    }
    if (value.has_numberOfFields_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_NCR_AperiodicFwdConfig_r18：ASN.1 SetupRelease<NCR-AperiodicFwdConfig-r18>；源文件第 8515 行；CHOICE。
// Encode_SetupRelease_NCR_AperiodicFwdConfig_r18 只读不分配；Decode_SetupRelease_NCR_AperiodicFwdConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_NCR_AperiodicFwdConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_NCR_AperiodicFwdConfig_r18(Encoder& enc, const SetupRelease_NCR_AperiodicFwdConfig_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_NCR_AperiodicFwdConfig_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_NCR_AperiodicFwdConfig_r18_Tag_setup:
        Encode_NCR_AperiodicFwdConfig_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_NCR_AperiodicFwdConfig_r18(Decoder& dec, SetupRelease_NCR_AperiodicFwdConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_NCR_AperiodicFwdConfig_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_NCR_AperiodicFwdConfig_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_NCR_AperiodicFwdConfig_r18_Tag_setup: {
        if (Decode_NCR_AperiodicFwdConfig_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_NCR_AperiodicFwdConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_NCR_AperiodicFwdConfig_r18(SetupRelease_NCR_AperiodicFwdConfig_r18& value)
{
    switch (value.tag) {
    case SetupRelease_NCR_AperiodicFwdConfig_r18_Tag_release:
        break;
    case SetupRelease_NCR_AperiodicFwdConfig_r18_Tag_setup:
        Free_NCR_AperiodicFwdConfig_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NCR_FwdConfig_r18：ASN.1 NCR-FwdConfig-r18；源文件第 8510 行；SEQUENCE。
// Encode_NCR_FwdConfig_r18 只读不分配；Decode_NCR_FwdConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_NCR_FwdConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NCR_FwdConfig_r18(Encoder& enc, const NCR_FwdConfig_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_periodicFwdRsrcSetToAddModList_r18);
    enc.WriteBit(value.has_periodicFwdRsrcSetToReleaseList_r18);
    enc.WriteBit(value.has_aperiodicFwdConfig_r18);
    enc.WriteBit(value.has_semiPersistentFwdRsrcSetToAddModList_r18);
    enc.WriteBit(value.has_semiPersistentFwdRsrcSetToReleaseList_r18);
    if (value.has_periodicFwdRsrcSetToAddModList_r18) {
enc.WriteConstrainedLength(value.periodicFwdRsrcSetToAddModList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.periodicFwdRsrcSetToAddModList_r18_count; ++i) {
    Encode_NCR_PeriodicFwdResourceSet_r18(enc, value.periodicFwdRsrcSetToAddModList_r18_items[i]);
}
    }
    if (value.has_periodicFwdRsrcSetToReleaseList_r18) {
enc.WriteConstrainedLength(value.periodicFwdRsrcSetToReleaseList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.periodicFwdRsrcSetToReleaseList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.periodicFwdRsrcSetToReleaseList_r18_items[i]), 0, 31);
}
    }
    if (value.has_aperiodicFwdConfig_r18) {
        Encode_SetupRelease_NCR_AperiodicFwdConfig_r18(enc, value.aperiodicFwdConfig_r18);
    }
    if (value.has_semiPersistentFwdRsrcSetToAddModList_r18) {
enc.WriteConstrainedLength(value.semiPersistentFwdRsrcSetToAddModList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.semiPersistentFwdRsrcSetToAddModList_r18_count; ++i) {
    Encode_NCR_SemiPersistentFwdResourceSet_r18(enc, value.semiPersistentFwdRsrcSetToAddModList_r18_items[i]);
}
    }
    if (value.has_semiPersistentFwdRsrcSetToReleaseList_r18) {
enc.WriteConstrainedLength(value.semiPersistentFwdRsrcSetToReleaseList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.semiPersistentFwdRsrcSetToReleaseList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.semiPersistentFwdRsrcSetToReleaseList_r18_items[i]), 0, 31);
}
    }
    return enc.Error();
}

ErrorCode Decode_NCR_FwdConfig_r18(Decoder& dec, NCR_FwdConfig_r18& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.periodicFwdRsrcSetToAddModList_r18_count)) { goto fail; }
if (value.periodicFwdRsrcSetToAddModList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.periodicFwdRsrcSetToAddModList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.periodicFwdRsrcSetToAddModList_r18_count > 0u) {
    value.periodicFwdRsrcSetToAddModList_r18_items = (NCR_PeriodicFwdResourceSet_r18*)std::malloc((std::size_t)value.periodicFwdRsrcSetToAddModList_r18_count * sizeof(NCR_PeriodicFwdResourceSet_r18));
    if (value.periodicFwdRsrcSetToAddModList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.periodicFwdRsrcSetToAddModList_r18_items, 0, (std::size_t)value.periodicFwdRsrcSetToAddModList_r18_count * sizeof(NCR_PeriodicFwdResourceSet_r18));
}
for (std::uint32_t i = 0; i < value.periodicFwdRsrcSetToAddModList_r18_count; ++i) {
    if (Decode_NCR_PeriodicFwdResourceSet_r18(dec, value.periodicFwdRsrcSetToAddModList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.periodicFwdRsrcSetToReleaseList_r18_count)) { goto fail; }
if (value.periodicFwdRsrcSetToReleaseList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.periodicFwdRsrcSetToReleaseList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.periodicFwdRsrcSetToReleaseList_r18_count > 0u) {
    value.periodicFwdRsrcSetToReleaseList_r18_items = (NCR_PeriodicFwdResourceSetId_r18*)std::malloc((std::size_t)value.periodicFwdRsrcSetToReleaseList_r18_count * sizeof(NCR_PeriodicFwdResourceSetId_r18));
    if (value.periodicFwdRsrcSetToReleaseList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.periodicFwdRsrcSetToReleaseList_r18_items, 0, (std::size_t)value.periodicFwdRsrcSetToReleaseList_r18_count * sizeof(NCR_PeriodicFwdResourceSetId_r18));
}
for (std::uint32_t i = 0; i < value.periodicFwdRsrcSetToReleaseList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.periodicFwdRsrcSetToReleaseList_r18_items[i] = (NCR_PeriodicFwdResourceSetId_r18)tmp_value;
}
    }
    if (present_2) {
        if (Decode_SetupRelease_NCR_AperiodicFwdConfig_r18(dec, value.aperiodicFwdConfig_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.semiPersistentFwdRsrcSetToAddModList_r18_count)) { goto fail; }
if (value.semiPersistentFwdRsrcSetToAddModList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.semiPersistentFwdRsrcSetToAddModList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.semiPersistentFwdRsrcSetToAddModList_r18_count > 0u) {
    value.semiPersistentFwdRsrcSetToAddModList_r18_items = (NCR_SemiPersistentFwdResourceSet_r18*)std::malloc((std::size_t)value.semiPersistentFwdRsrcSetToAddModList_r18_count * sizeof(NCR_SemiPersistentFwdResourceSet_r18));
    if (value.semiPersistentFwdRsrcSetToAddModList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.semiPersistentFwdRsrcSetToAddModList_r18_items, 0, (std::size_t)value.semiPersistentFwdRsrcSetToAddModList_r18_count * sizeof(NCR_SemiPersistentFwdResourceSet_r18));
}
for (std::uint32_t i = 0; i < value.semiPersistentFwdRsrcSetToAddModList_r18_count; ++i) {
    if (Decode_NCR_SemiPersistentFwdResourceSet_r18(dec, value.semiPersistentFwdRsrcSetToAddModList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.semiPersistentFwdRsrcSetToReleaseList_r18_count)) { goto fail; }
if (value.semiPersistentFwdRsrcSetToReleaseList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.semiPersistentFwdRsrcSetToReleaseList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.semiPersistentFwdRsrcSetToReleaseList_r18_count > 0u) {
    value.semiPersistentFwdRsrcSetToReleaseList_r18_items = (NCR_SemiPersistentFwdResourceSetId_r18*)std::malloc((std::size_t)value.semiPersistentFwdRsrcSetToReleaseList_r18_count * sizeof(NCR_SemiPersistentFwdResourceSetId_r18));
    if (value.semiPersistentFwdRsrcSetToReleaseList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.semiPersistentFwdRsrcSetToReleaseList_r18_items, 0, (std::size_t)value.semiPersistentFwdRsrcSetToReleaseList_r18_count * sizeof(NCR_SemiPersistentFwdResourceSetId_r18));
}
for (std::uint32_t i = 0; i < value.semiPersistentFwdRsrcSetToReleaseList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.semiPersistentFwdRsrcSetToReleaseList_r18_items[i] = (NCR_SemiPersistentFwdResourceSetId_r18)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_NCR_FwdConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NCR_FwdConfig_r18(NCR_FwdConfig_r18& value)
{
    if (value.has_periodicFwdRsrcSetToAddModList_r18) {
        if (value.periodicFwdRsrcSetToAddModList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.periodicFwdRsrcSetToAddModList_r18_count; ++i) {
                Free_NCR_PeriodicFwdResourceSet_r18(value.periodicFwdRsrcSetToAddModList_r18_items[i]);
            }
            std::free(value.periodicFwdRsrcSetToAddModList_r18_items);
            value.periodicFwdRsrcSetToAddModList_r18_items = nullptr;
        }
        value.periodicFwdRsrcSetToAddModList_r18_count = 0;
    }
    if (value.has_periodicFwdRsrcSetToReleaseList_r18) {
        if (value.periodicFwdRsrcSetToReleaseList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.periodicFwdRsrcSetToReleaseList_r18_count; ++i) {
            }
            std::free(value.periodicFwdRsrcSetToReleaseList_r18_items);
            value.periodicFwdRsrcSetToReleaseList_r18_items = nullptr;
        }
        value.periodicFwdRsrcSetToReleaseList_r18_count = 0;
    }
    if (value.has_aperiodicFwdConfig_r18) {
        Free_SetupRelease_NCR_AperiodicFwdConfig_r18(value.aperiodicFwdConfig_r18);
    }
    if (value.has_semiPersistentFwdRsrcSetToAddModList_r18) {
        if (value.semiPersistentFwdRsrcSetToAddModList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.semiPersistentFwdRsrcSetToAddModList_r18_count; ++i) {
                Free_NCR_SemiPersistentFwdResourceSet_r18(value.semiPersistentFwdRsrcSetToAddModList_r18_items[i]);
            }
            std::free(value.semiPersistentFwdRsrcSetToAddModList_r18_items);
            value.semiPersistentFwdRsrcSetToAddModList_r18_items = nullptr;
        }
        value.semiPersistentFwdRsrcSetToAddModList_r18_count = 0;
    }
    if (value.has_semiPersistentFwdRsrcSetToReleaseList_r18) {
        if (value.semiPersistentFwdRsrcSetToReleaseList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.semiPersistentFwdRsrcSetToReleaseList_r18_count; ++i) {
            }
            std::free(value.semiPersistentFwdRsrcSetToReleaseList_r18_items);
            value.semiPersistentFwdRsrcSetToReleaseList_r18_items = nullptr;
        }
        value.semiPersistentFwdRsrcSetToReleaseList_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_NCR_FwdConfig_r18：ASN.1 SetupRelease<NCR-FwdConfig-r18>；源文件第 4888 行；CHOICE。
// Encode_SetupRelease_NCR_FwdConfig_r18 只读不分配；Decode_SetupRelease_NCR_FwdConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_NCR_FwdConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_NCR_FwdConfig_r18(Encoder& enc, const SetupRelease_NCR_FwdConfig_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_NCR_FwdConfig_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_NCR_FwdConfig_r18_Tag_setup:
        Encode_NCR_FwdConfig_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_NCR_FwdConfig_r18(Decoder& dec, SetupRelease_NCR_FwdConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_NCR_FwdConfig_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_NCR_FwdConfig_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_NCR_FwdConfig_r18_Tag_setup: {
        if (Decode_NCR_FwdConfig_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_NCR_FwdConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_NCR_FwdConfig_r18(SetupRelease_NCR_FwdConfig_r18& value)
{
    switch (value.tag) {
    case SetupRelease_NCR_FwdConfig_r18_Tag_release:
        break;
    case SetupRelease_NCR_FwdConfig_r18_Tag_setup:
        Free_NCR_FwdConfig_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// AutonomousDenialParameters_r18：ASN.1 AutonomousDenialParameters-r18；源文件第 5014 行；SEQUENCE。
// Encode_AutonomousDenialParameters_r18 只读不分配；Decode_AutonomousDenialParameters_r18 可能 malloc（失败时内部已释放并清零）；Free_AutonomousDenialParameters_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_AutonomousDenialParameters_r18(Encoder& enc, const AutonomousDenialParameters_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.autonomousDenialSlots_r18), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.autonomousDenialValidity_r18), 0, 3);
    return enc.Error();
}

ErrorCode Decode_AutonomousDenialParameters_r18(Decoder& dec, AutonomousDenialParameters_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.autonomousDenialSlots_r18 = (AutonomousDenialParameters_r18_AutonomousDenialSlots_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.autonomousDenialValidity_r18 = (AutonomousDenialParameters_r18_AutonomousDenialValidity_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_AutonomousDenialParameters_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AutonomousDenialParameters_r18(AutonomousDenialParameters_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_AutonomousDenialParameters_r18：ASN.1 SetupRelease<AutonomousDenialParameters-r18>；源文件第 4889 行；CHOICE。
// Encode_SetupRelease_AutonomousDenialParameters_r18 只读不分配；Decode_SetupRelease_AutonomousDenialParameters_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_AutonomousDenialParameters_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_AutonomousDenialParameters_r18(Encoder& enc, const SetupRelease_AutonomousDenialParameters_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_AutonomousDenialParameters_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_AutonomousDenialParameters_r18_Tag_setup:
        Encode_AutonomousDenialParameters_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_AutonomousDenialParameters_r18(Decoder& dec, SetupRelease_AutonomousDenialParameters_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_AutonomousDenialParameters_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_AutonomousDenialParameters_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_AutonomousDenialParameters_r18_Tag_setup: {
        if (Decode_AutonomousDenialParameters_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_AutonomousDenialParameters_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_AutonomousDenialParameters_r18(SetupRelease_AutonomousDenialParameters_r18& value)
{
    switch (value.tag) {
    case SetupRelease_AutonomousDenialParameters_r18_Tag_release:
        break;
    case SetupRelease_AutonomousDenialParameters_r18_Tag_setup:
        Free_AutonomousDenialParameters_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UplinkTxSwitchingBandPairList_r18：ASN.1 UplinkTxSwitchingBandPairList-r18；源文件第 5035 行；SEQUENCE OF。
// Encode_UplinkTxSwitchingBandPairList_r18 只读不分配；Decode_UplinkTxSwitchingBandPairList_r18 可能 malloc（失败时内部已释放并清零）；Free_UplinkTxSwitchingBandPairList_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UplinkTxSwitchingBandPairList_r18(Encoder& enc, const UplinkTxSwitchingBandPairList_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_UplinkTxSwitchingBandPairConfig_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_UplinkTxSwitchingBandPairList_r18(Decoder& dec, UplinkTxSwitchingBandPairList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (UplinkTxSwitchingBandPairConfig_r18*)std::malloc((std::size_t)value.count * sizeof(UplinkTxSwitchingBandPairConfig_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(UplinkTxSwitchingBandPairConfig_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_UplinkTxSwitchingBandPairConfig_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_UplinkTxSwitchingBandPairList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkTxSwitchingBandPairList_r18(UplinkTxSwitchingBandPairList_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_UplinkTxSwitchingBandPairConfig_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UplinkTxSwitchingAssociatedBandDualUL_List_r18：ASN.1 UplinkTxSwitchingAssociatedBandDualUL-List-r18；源文件第 5046 行；SEQUENCE OF。
// Encode_UplinkTxSwitchingAssociatedBandDualUL_List_r18 只读不分配；Decode_UplinkTxSwitchingAssociatedBandDualUL_List_r18 可能 malloc（失败时内部已释放并清零）；Free_UplinkTxSwitchingAssociatedBandDualUL_List_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UplinkTxSwitchingAssociatedBandDualUL_List_r18(Encoder& enc, const UplinkTxSwitchingAssociatedBandDualUL_List_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 0u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_UplinkTxSwitchingAssociatedBandDualUL_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_UplinkTxSwitchingAssociatedBandDualUL_List_r18(Decoder& dec, UplinkTxSwitchingAssociatedBandDualUL_List_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(0u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (UplinkTxSwitchingAssociatedBandDualUL_r18*)std::malloc((std::size_t)value.count * sizeof(UplinkTxSwitchingAssociatedBandDualUL_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(UplinkTxSwitchingAssociatedBandDualUL_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_UplinkTxSwitchingAssociatedBandDualUL_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_UplinkTxSwitchingAssociatedBandDualUL_List_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkTxSwitchingAssociatedBandDualUL_List_r18(UplinkTxSwitchingAssociatedBandDualUL_List_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_UplinkTxSwitchingAssociatedBandDualUL_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UplinkTxSwitchingMoreBands_r18：ASN.1 UplinkTxSwitchingMoreBands-r18；源文件第 5028 行；SEQUENCE。
// Encode_UplinkTxSwitchingMoreBands_r18 只读不分配；Decode_UplinkTxSwitchingMoreBands_r18 可能 malloc（失败时内部已释放并清零）；Free_UplinkTxSwitchingMoreBands_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UplinkTxSwitchingMoreBands_r18(Encoder& enc, const UplinkTxSwitchingMoreBands_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_uplinkTxSwitchingBandList_r18);
    enc.WriteBit(value.has_uplinkTxSwitchingBandPairList_r18);
    enc.WriteBit(value.has_uplinkTxSwitchingAssociatedBandDualUL_List_r18);
    if (value.has_uplinkTxSwitchingBandList_r18) {
enc.WriteConstrainedLength(value.uplinkTxSwitchingBandList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.uplinkTxSwitchingBandList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.uplinkTxSwitchingBandList_r18_items[i]), 1, 1024);
}
    }
    if (value.has_uplinkTxSwitchingBandPairList_r18) {
        Encode_UplinkTxSwitchingBandPairList_r18(enc, value.uplinkTxSwitchingBandPairList_r18);
    }
    if (value.has_uplinkTxSwitchingAssociatedBandDualUL_List_r18) {
        Encode_UplinkTxSwitchingAssociatedBandDualUL_List_r18(enc, value.uplinkTxSwitchingAssociatedBandDualUL_List_r18);
    }
    return enc.Error();
}

ErrorCode Decode_UplinkTxSwitchingMoreBands_r18(Decoder& dec, UplinkTxSwitchingMoreBands_r18& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.uplinkTxSwitchingBandList_r18_count)) { goto fail; }
if (value.uplinkTxSwitchingBandList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.uplinkTxSwitchingBandList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.uplinkTxSwitchingBandList_r18_count > 0u) {
    value.uplinkTxSwitchingBandList_r18_items = (FreqBandIndicatorNR*)std::malloc((std::size_t)value.uplinkTxSwitchingBandList_r18_count * sizeof(FreqBandIndicatorNR));
    if (value.uplinkTxSwitchingBandList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.uplinkTxSwitchingBandList_r18_items, 0, (std::size_t)value.uplinkTxSwitchingBandList_r18_count * sizeof(FreqBandIndicatorNR));
}
for (std::uint32_t i = 0; i < value.uplinkTxSwitchingBandList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 1024, tmp_value)) { goto fail; }
    value.uplinkTxSwitchingBandList_r18_items[i] = (FreqBandIndicatorNR)tmp_value;
}
    }
    if (present_1) {
        if (Decode_UplinkTxSwitchingBandPairList_r18(dec, value.uplinkTxSwitchingBandPairList_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_UplinkTxSwitchingAssociatedBandDualUL_List_r18(dec, value.uplinkTxSwitchingAssociatedBandDualUL_List_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UplinkTxSwitchingMoreBands_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkTxSwitchingMoreBands_r18(UplinkTxSwitchingMoreBands_r18& value)
{
    if (value.has_uplinkTxSwitchingBandList_r18) {
        if (value.uplinkTxSwitchingBandList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.uplinkTxSwitchingBandList_r18_count; ++i) {
            }
            std::free(value.uplinkTxSwitchingBandList_r18_items);
            value.uplinkTxSwitchingBandList_r18_items = nullptr;
        }
        value.uplinkTxSwitchingBandList_r18_count = 0;
    }
    if (value.has_uplinkTxSwitchingBandPairList_r18) {
        Free_UplinkTxSwitchingBandPairList_r18(value.uplinkTxSwitchingBandPairList_r18);
    }
    if (value.has_uplinkTxSwitchingAssociatedBandDualUL_List_r18) {
        Free_UplinkTxSwitchingAssociatedBandDualUL_List_r18(value.uplinkTxSwitchingAssociatedBandDualUL_List_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_UplinkTxSwitchingMoreBands_r18：ASN.1 SetupRelease<UplinkTxSwitchingMoreBands-r18>；源文件第 4892 行；CHOICE。
// Encode_SetupRelease_UplinkTxSwitchingMoreBands_r18 只读不分配；Decode_SetupRelease_UplinkTxSwitchingMoreBands_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_UplinkTxSwitchingMoreBands_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_UplinkTxSwitchingMoreBands_r18(Encoder& enc, const SetupRelease_UplinkTxSwitchingMoreBands_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_UplinkTxSwitchingMoreBands_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_UplinkTxSwitchingMoreBands_r18_Tag_setup:
        Encode_UplinkTxSwitchingMoreBands_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_UplinkTxSwitchingMoreBands_r18(Decoder& dec, SetupRelease_UplinkTxSwitchingMoreBands_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_UplinkTxSwitchingMoreBands_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_UplinkTxSwitchingMoreBands_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_UplinkTxSwitchingMoreBands_r18_Tag_setup: {
        if (Decode_UplinkTxSwitchingMoreBands_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_UplinkTxSwitchingMoreBands_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_UplinkTxSwitchingMoreBands_r18(SetupRelease_UplinkTxSwitchingMoreBands_r18& value)
{
    switch (value.tag) {
    case SetupRelease_UplinkTxSwitchingMoreBands_r18_Tag_release:
        break;
    case SetupRelease_UplinkTxSwitchingMoreBands_r18_Tag_setup:
        Free_UplinkTxSwitchingMoreBands_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellGroupConfig_ExtGroup7：ASN.1 CellGroupConfig_ExtGroup7；源文件第 4887 行；扩展添加组 [[ ]]。
// Encode_CellGroupConfig_ExtGroup7 只读不分配；Decode_CellGroupConfig_ExtGroup7 可能 malloc（失败时内部已释放并清零）；Free_CellGroupConfig_ExtGroup7 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellGroupConfig_ExtGroup7(Encoder& enc, const CellGroupConfig_ExtGroup7& value)
{
    (void)value;
    enc.WriteBit(value.has_ncr_FwdConfig_r18);
    enc.WriteBit(value.has_autonomousDenialParameters_r18);
    enc.WriteBit(value.has_nonCollocatedTypeMRDC_r18);
    enc.WriteBit(value.has_nonCollocatedTypeNR_CA_r18);
    enc.WriteBit(value.has_uplinkTxSwitchingMoreBands_r18);
    if (value.has_ncr_FwdConfig_r18) {
        Encode_SetupRelease_NCR_FwdConfig_r18(enc, value.ncr_FwdConfig_r18);
    }
    if (value.has_autonomousDenialParameters_r18) {
        Encode_SetupRelease_AutonomousDenialParameters_r18(enc, value.autonomousDenialParameters_r18);
    }
    if (value.has_nonCollocatedTypeMRDC_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nonCollocatedTypeMRDC_r18), 0, 0);
    }
    if (value.has_nonCollocatedTypeNR_CA_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nonCollocatedTypeNR_CA_r18), 0, 0);
    }
    if (value.has_uplinkTxSwitchingMoreBands_r18) {
        Encode_SetupRelease_UplinkTxSwitchingMoreBands_r18(enc, value.uplinkTxSwitchingMoreBands_r18);
    }
    return enc.Error();
}

ErrorCode Decode_CellGroupConfig_ExtGroup7(Decoder& dec, CellGroupConfig_ExtGroup7& value)
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
        if (Decode_SetupRelease_NCR_FwdConfig_r18(dec, value.ncr_FwdConfig_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_AutonomousDenialParameters_r18(dec, value.autonomousDenialParameters_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        value.nonCollocatedTypeMRDC_r18 = (CellGroupConfig_ExtGroup7_NonCollocatedTypeMRDC_r18)0;
    }
    if (present_3) {
        value.nonCollocatedTypeNR_CA_r18 = (CellGroupConfig_ExtGroup7_NonCollocatedTypeNR_CA_r18)0;
    }
    if (present_4) {
        if (Decode_SetupRelease_UplinkTxSwitchingMoreBands_r18(dec, value.uplinkTxSwitchingMoreBands_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CellGroupConfig_ExtGroup7(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellGroupConfig_ExtGroup7(CellGroupConfig_ExtGroup7& value)
{
    if (value.has_ncr_FwdConfig_r18) {
        Free_SetupRelease_NCR_FwdConfig_r18(value.ncr_FwdConfig_r18);
    }
    if (value.has_autonomousDenialParameters_r18) {
        Free_SetupRelease_AutonomousDenialParameters_r18(value.autonomousDenialParameters_r18);
    }
    if (value.has_nonCollocatedTypeMRDC_r18) {
    }
    if (value.has_nonCollocatedTypeNR_CA_r18) {
    }
    if (value.has_uplinkTxSwitchingMoreBands_r18) {
        Free_SetupRelease_UplinkTxSwitchingMoreBands_r18(value.uplinkTxSwitchingMoreBands_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// GoodServingCellEvaluation_r17：ASN.1 GoodServingCellEvaluation-r17；源文件第 4976 行；SEQUENCE。
// Encode_GoodServingCellEvaluation_r17 只读不分配；Decode_GoodServingCellEvaluation_r17 可能 malloc（失败时内部已释放并清零）；Free_GoodServingCellEvaluation_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_GoodServingCellEvaluation_r17(Encoder& enc, const GoodServingCellEvaluation_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_offset_r17);
    if (value.has_offset_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.offset_r17), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_GoodServingCellEvaluation_r17(Decoder& dec, GoodServingCellEvaluation_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.offset_r17 = (GoodServingCellEvaluation_r17_Offset_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_GoodServingCellEvaluation_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_GoodServingCellEvaluation_r17(GoodServingCellEvaluation_r17& value)
{
    if (value.has_offset_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17：ASN.1 lowMobilityEvaluationConnected-r17；源文件第 4905 行；SEQUENCE。
// Encode_SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17 只读不分配；Decode_SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17 可能 malloc（失败时内部已释放并清零）；Free_SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17(Encoder& enc, const SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.s_SearchDeltaP_Connected_r17), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.t_SearchDeltaP_Connected_r17), 0, 15);
    return enc.Error();
}

ErrorCode Decode_SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17(Decoder& dec, SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.s_SearchDeltaP_Connected_r17 = (SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_S_SearchDeltaP_Connected_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.t_SearchDeltaP_Connected_r17 = (SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_T_SearchDeltaP_Connected_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17(SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DeactivatedSCG_Config_r17：ASN.1 DeactivatedSCG-Config-r17；源文件第 4971 行；SEQUENCE。
// Encode_DeactivatedSCG_Config_r17 只读不分配；Decode_DeactivatedSCG_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_DeactivatedSCG_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DeactivatedSCG_Config_r17(Encoder& enc, const DeactivatedSCG_Config_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBool(value.bfd_and_RLM_r17);
    return enc.Error();
}

ErrorCode Decode_DeactivatedSCG_Config_r17(Decoder& dec, DeactivatedSCG_Config_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.bfd_and_RLM_r17 = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DeactivatedSCG_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DeactivatedSCG_Config_r17(DeactivatedSCG_Config_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_DeactivatedSCG_Config_r17：ASN.1 SetupRelease<DeactivatedSCG-Config-r17>；源文件第 4912 行；CHOICE。
// Encode_SetupRelease_DeactivatedSCG_Config_r17 只读不分配；Decode_SetupRelease_DeactivatedSCG_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_DeactivatedSCG_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_DeactivatedSCG_Config_r17(Encoder& enc, const SetupRelease_DeactivatedSCG_Config_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DeactivatedSCG_Config_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_DeactivatedSCG_Config_r17_Tag_setup:
        Encode_DeactivatedSCG_Config_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DeactivatedSCG_Config_r17(Decoder& dec, SetupRelease_DeactivatedSCG_Config_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DeactivatedSCG_Config_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DeactivatedSCG_Config_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DeactivatedSCG_Config_r17_Tag_setup: {
        if (Decode_DeactivatedSCG_Config_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DeactivatedSCG_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DeactivatedSCG_Config_r17(SetupRelease_DeactivatedSCG_Config_r17& value)
{
    switch (value.tag) {
    case SetupRelease_DeactivatedSCG_Config_r17_Tag_release:
        break;
    case SetupRelease_DeactivatedSCG_Config_r17_Tag_setup:
        Free_DeactivatedSCG_Config_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SpCellConfig_ExtGroup1：ASN.1 SpCellConfig_ExtGroup1；源文件第 4904 行；扩展添加组 [[ ]]。
// Encode_SpCellConfig_ExtGroup1 只读不分配；Decode_SpCellConfig_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SpCellConfig_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SpCellConfig_ExtGroup1(Encoder& enc, const SpCellConfig_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_lowMobilityEvaluationConnected_r17);
    enc.WriteBit(value.has_goodServingCellEvaluationRLM_r17);
    enc.WriteBit(value.has_goodServingCellEvaluationBFD_r17);
    enc.WriteBit(value.has_deactivatedSCG_Config_r17);
    if (value.has_lowMobilityEvaluationConnected_r17) {
        Encode_SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17(enc, value.lowMobilityEvaluationConnected_r17);
    }
    if (value.has_goodServingCellEvaluationRLM_r17) {
        Encode_GoodServingCellEvaluation_r17(enc, value.goodServingCellEvaluationRLM_r17);
    }
    if (value.has_goodServingCellEvaluationBFD_r17) {
        Encode_GoodServingCellEvaluation_r17(enc, value.goodServingCellEvaluationBFD_r17);
    }
    if (value.has_deactivatedSCG_Config_r17) {
        Encode_SetupRelease_DeactivatedSCG_Config_r17(enc, value.deactivatedSCG_Config_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SpCellConfig_ExtGroup1(Decoder& dec, SpCellConfig_ExtGroup1& value)
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
        if (Decode_SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17(dec, value.lowMobilityEvaluationConnected_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_GoodServingCellEvaluation_r17(dec, value.goodServingCellEvaluationRLM_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_GoodServingCellEvaluation_r17(dec, value.goodServingCellEvaluationBFD_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SetupRelease_DeactivatedSCG_Config_r17(dec, value.deactivatedSCG_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SpCellConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SpCellConfig_ExtGroup1(SpCellConfig_ExtGroup1& value)
{
    if (value.has_lowMobilityEvaluationConnected_r17) {
        Free_SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17(value.lowMobilityEvaluationConnected_r17);
    }
    if (value.has_goodServingCellEvaluationRLM_r17) {
        Free_GoodServingCellEvaluation_r17(value.goodServingCellEvaluationRLM_r17);
    }
    if (value.has_goodServingCellEvaluationBFD_r17) {
        Free_GoodServingCellEvaluation_r17(value.goodServingCellEvaluationBFD_r17);
    }
    if (value.has_deactivatedSCG_Config_r17) {
        Free_SetupRelease_DeactivatedSCG_Config_r17(value.deactivatedSCG_Config_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
