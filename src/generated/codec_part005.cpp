/* ============================================================================
 * src/generated/codec_part005.cpp — 生成的编解码函数
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
// MRB_ToReleaseList_r17：ASN.1 MRB-ToReleaseList-r17；源文件第 11047 行；SEQUENCE OF。
// Encode_MRB_ToReleaseList_r17 只读不分配；Decode_MRB_ToReleaseList_r17 可能 malloc（失败时内部已释放并清零）；Free_MRB_ToReleaseList_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MRB_ToReleaseList_r17(Encoder& enc, const MRB_ToReleaseList_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 1, 512);
    }
    return enc.Error();
}

ErrorCode Decode_MRB_ToReleaseList_r17(Decoder& dec, MRB_ToReleaseList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MRB_Identity_r17*)std::malloc((std::size_t)value.count * sizeof(MRB_Identity_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MRB_Identity_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 512, tmp_value)) { goto fail; }
    value.items[i] = (MRB_Identity_r17)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_MRB_ToReleaseList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRB_ToReleaseList_r17(MRB_ToReleaseList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RadioBearerConfig_ExtGroup1：ASN.1 RadioBearerConfig_ExtGroup1；源文件第 10979 行；扩展添加组 [[ ]]。
// Encode_RadioBearerConfig_ExtGroup1 只读不分配；Decode_RadioBearerConfig_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_RadioBearerConfig_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RadioBearerConfig_ExtGroup1(Encoder& enc, const RadioBearerConfig_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_mrb_ToAddModList_r17);
    enc.WriteBit(value.has_mrb_ToReleaseList_r17);
    enc.WriteBit(value.has_srb4_ToAddMod_r17);
    enc.WriteBit(value.has_srb4_ToRelease_r17);
    if (value.has_mrb_ToAddModList_r17) {
        Encode_MRB_ToAddModList_r17(enc, value.mrb_ToAddModList_r17);
    }
    if (value.has_mrb_ToReleaseList_r17) {
        Encode_MRB_ToReleaseList_r17(enc, value.mrb_ToReleaseList_r17);
    }
    if (value.has_srb4_ToAddMod_r17) {
        Encode_SRB_ToAddMod(enc, value.srb4_ToAddMod_r17);
    }
    if (value.has_srb4_ToRelease_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srb4_ToRelease_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_RadioBearerConfig_ExtGroup1(Decoder& dec, RadioBearerConfig_ExtGroup1& value)
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
        if (Decode_MRB_ToAddModList_r17(dec, value.mrb_ToAddModList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MRB_ToReleaseList_r17(dec, value.mrb_ToReleaseList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SRB_ToAddMod(dec, value.srb4_ToAddMod_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        value.srb4_ToRelease_r17 = (RadioBearerConfig_ExtGroup1_Srb4_ToRelease_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RadioBearerConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RadioBearerConfig_ExtGroup1(RadioBearerConfig_ExtGroup1& value)
{
    if (value.has_mrb_ToAddModList_r17) {
        Free_MRB_ToAddModList_r17(value.mrb_ToAddModList_r17);
    }
    if (value.has_mrb_ToReleaseList_r17) {
        Free_MRB_ToReleaseList_r17(value.mrb_ToReleaseList_r17);
    }
    if (value.has_srb4_ToAddMod_r17) {
        Free_SRB_ToAddMod(value.srb4_ToAddMod_r17);
    }
    if (value.has_srb4_ToRelease_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RadioBearerConfig_ExtGroup2：ASN.1 RadioBearerConfig_ExtGroup2；源文件第 10985 行；扩展添加组 [[ ]]。
// Encode_RadioBearerConfig_ExtGroup2 只读不分配；Decode_RadioBearerConfig_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_RadioBearerConfig_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RadioBearerConfig_ExtGroup2(Encoder& enc, const RadioBearerConfig_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_srb5_ToAddMod_r18);
    enc.WriteBit(value.has_srb5_ToRelease_r18);
    if (value.has_srb5_ToAddMod_r18) {
        Encode_SRB_ToAddMod(enc, value.srb5_ToAddMod_r18);
    }
    if (value.has_srb5_ToRelease_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srb5_ToRelease_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_RadioBearerConfig_ExtGroup2(Decoder& dec, RadioBearerConfig_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SRB_ToAddMod(dec, value.srb5_ToAddMod_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.srb5_ToRelease_r18 = (RadioBearerConfig_ExtGroup2_Srb5_ToRelease_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RadioBearerConfig_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RadioBearerConfig_ExtGroup2(RadioBearerConfig_ExtGroup2& value)
{
    if (value.has_srb5_ToAddMod_r18) {
        Free_SRB_ToAddMod(value.srb5_ToAddMod_r18);
    }
    if (value.has_srb5_ToRelease_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRB_ToAddModList：ASN.1 SRB-ToAddModList；源文件第 10991 行；SEQUENCE OF。
// Encode_SRB_ToAddModList 只读不分配；Decode_SRB_ToAddModList 可能 malloc（失败时内部已释放并清零）；Free_SRB_ToAddModList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRB_ToAddModList(Encoder& enc, const SRB_ToAddModList& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 2u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SRB_ToAddMod(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SRB_ToAddModList(Decoder& dec, SRB_ToAddModList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 2u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 2u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SRB_ToAddMod*)std::malloc((std::size_t)value.count * sizeof(SRB_ToAddMod));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SRB_ToAddMod));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SRB_ToAddMod(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SRB_ToAddModList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRB_ToAddModList(SRB_ToAddModList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SRB_ToAddMod(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DRB_ToAddModList：ASN.1 DRB-ToAddModList；源文件第 11008 行；SEQUENCE OF。
// Encode_DRB_ToAddModList 只读不分配；Decode_DRB_ToAddModList 可能 malloc（失败时内部已释放并清零）；Free_DRB_ToAddModList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DRB_ToAddModList(Encoder& enc, const DRB_ToAddModList& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 29u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_DRB_ToAddMod(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_DRB_ToAddModList(Decoder& dec, DRB_ToAddModList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 29u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 29u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (DRB_ToAddMod*)std::malloc((std::size_t)value.count * sizeof(DRB_ToAddMod));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(DRB_ToAddMod));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_DRB_ToAddMod(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_DRB_ToAddModList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DRB_ToAddModList(DRB_ToAddModList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_DRB_ToAddMod(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DRB_ToReleaseList：ASN.1 DRB-ToReleaseList；源文件第 11027 行；SEQUENCE OF。
// Encode_DRB_ToReleaseList 只读不分配；Decode_DRB_ToReleaseList 可能 malloc（失败时内部已释放并清零）；Free_DRB_ToReleaseList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DRB_ToReleaseList(Encoder& enc, const DRB_ToReleaseList& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 29u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 1, 32);
    }
    return enc.Error();
}

ErrorCode Decode_DRB_ToReleaseList(Decoder& dec, DRB_ToReleaseList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 29u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 29u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (DRB_Identity*)std::malloc((std::size_t)value.count * sizeof(DRB_Identity));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(DRB_Identity));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
    value.items[i] = (DRB_Identity)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_DRB_ToReleaseList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DRB_ToReleaseList(DRB_ToReleaseList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SecurityAlgorithmConfig：ASN.1 SecurityAlgorithmConfig；源文件第 12349 行；SEQUENCE。
// Encode_SecurityAlgorithmConfig 只读不分配；Decode_SecurityAlgorithmConfig 可能 malloc（失败时内部已释放并清零）；Free_SecurityAlgorithmConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SecurityAlgorithmConfig(Encoder& enc, const SecurityAlgorithmConfig& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_integrityProtAlgorithm);
    {
        const std::int64_t enum_value = (std::int64_t)(value.cipheringAlgorithm);
        if (enum_value < 0) {
            return enc.Fail(ErrorCode_InvalidEnumValue);
        }
        if (enum_value < 8) {
            enc.WriteBit(false);
            enc.WriteConstrainedInteger(enum_value, 0, 7);
        } else {
            enc.WriteBit(true);
            enc.WriteNormallySmallNonNegative((std::uint32_t)(enum_value - 8));
        }
    }
    if (value.has_integrityProtAlgorithm) {
        {
            const std::int64_t enum_value = (std::int64_t)(value.integrityProtAlgorithm);
            if (enum_value < 0) {
                return enc.Fail(ErrorCode_InvalidEnumValue);
            }
            if (enum_value < 8) {
                enc.WriteBit(false);
                enc.WriteConstrainedInteger(enum_value, 0, 7);
            } else {
                enc.WriteBit(true);
                enc.WriteNormallySmallNonNegative((std::uint32_t)(enum_value - 8));
            }
        }
    }
    return enc.Error();
}

ErrorCode Decode_SecurityAlgorithmConfig(Decoder& dec, SecurityAlgorithmConfig& value)
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
        bool enum_extension = false;
        if (!dec.ReadBit(enum_extension)) { goto fail; }
        std::int64_t enum_value = 0;
        if (!enum_extension) {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 7, root_index)) { goto fail; }
    enum_value = root_index;
        } else {
    std::uint32_t extension_index = 0;
    if (!dec.ReadNormallySmallNonNegative(extension_index)) { goto fail; }
    enum_value = (std::int64_t)8 + (std::int64_t)extension_index;
        }
        value.cipheringAlgorithm = (CipheringAlgorithm)enum_value;
    }
    if (present_0) {
        bool enum_extension = false;
        if (!dec.ReadBit(enum_extension)) { goto fail; }
        std::int64_t enum_value = 0;
        if (!enum_extension) {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 7, root_index)) { goto fail; }
    enum_value = root_index;
        } else {
    std::uint32_t extension_index = 0;
    if (!dec.ReadNormallySmallNonNegative(extension_index)) { goto fail; }
    enum_value = (std::int64_t)8 + (std::int64_t)extension_index;
        }
        value.integrityProtAlgorithm = (IntegrityProtAlgorithm)enum_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SecurityAlgorithmConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SecurityAlgorithmConfig(SecurityAlgorithmConfig& value)
{
    if (value.has_integrityProtAlgorithm) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SecurityConfig：ASN.1 SecurityConfig；源文件第 11029 行；SEQUENCE。
// Encode_SecurityConfig 只读不分配；Decode_SecurityConfig 可能 malloc（失败时内部已释放并清零）；Free_SecurityConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SecurityConfig(Encoder& enc, const SecurityConfig& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_securityAlgorithmConfig);
    enc.WriteBit(value.has_keyToUse);
    if (value.has_securityAlgorithmConfig) {
        Encode_SecurityAlgorithmConfig(enc, value.securityAlgorithmConfig);
    }
    if (value.has_keyToUse) {
        enc.WriteConstrainedInteger((std::int64_t)(value.keyToUse), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_SecurityConfig(Decoder& dec, SecurityConfig& value)
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
        if (Decode_SecurityAlgorithmConfig(dec, value.securityAlgorithmConfig) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.keyToUse = (SecurityConfig_KeyToUse)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SecurityConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SecurityConfig(SecurityConfig& value)
{
    if (value.has_securityAlgorithmConfig) {
        Free_SecurityAlgorithmConfig(value.securityAlgorithmConfig);
    }
    if (value.has_keyToUse) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RadioBearerConfig：ASN.1 RadioBearerConfig；源文件第 10972 行；SEQUENCE。
// Encode_RadioBearerConfig 只读不分配；Decode_RadioBearerConfig 可能 malloc（失败时内部已释放并清零）；Free_RadioBearerConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RadioBearerConfig(Encoder& enc, const RadioBearerConfig& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_srb_ToAddModList);
    enc.WriteBit(value.has_srb3_ToRelease);
    enc.WriteBit(value.has_drb_ToAddModList);
    enc.WriteBit(value.has_drb_ToReleaseList);
    enc.WriteBit(value.has_securityConfig);
    if (value.has_srb_ToAddModList) {
        Encode_SRB_ToAddModList(enc, value.srb_ToAddModList);
    }
    if (value.has_srb3_ToRelease) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srb3_ToRelease), 0, 0);
    }
    if (value.has_drb_ToAddModList) {
        Encode_DRB_ToAddModList(enc, value.drb_ToAddModList);
    }
    if (value.has_drb_ToReleaseList) {
        Encode_DRB_ToReleaseList(enc, value.drb_ToReleaseList);
    }
    if (value.has_securityConfig) {
        Encode_SecurityConfig(enc, value.securityConfig);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_RadioBearerConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_RadioBearerConfig_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_RadioBearerConfig(Decoder& dec, RadioBearerConfig& value)
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
        if (Decode_SRB_ToAddModList(dec, value.srb_ToAddModList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.srb3_ToRelease = (RadioBearerConfig_Srb3_ToRelease)0;
    }
    if (present_2) {
        if (Decode_DRB_ToAddModList(dec, value.drb_ToAddModList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_DRB_ToReleaseList(dec, value.drb_ToReleaseList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SecurityConfig(dec, value.securityConfig) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_RadioBearerConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_RadioBearerConfig_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_RadioBearerConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RadioBearerConfig(RadioBearerConfig& value)
{
    if (value.has_srb_ToAddModList) {
        Free_SRB_ToAddModList(value.srb_ToAddModList);
    }
    if (value.has_srb3_ToRelease) {
    }
    if (value.has_drb_ToAddModList) {
        Free_DRB_ToAddModList(value.drb_ToAddModList);
    }
    if (value.has_drb_ToReleaseList) {
        Free_DRB_ToReleaseList(value.drb_ToReleaseList);
    }
    if (value.has_securityConfig) {
        Free_SecurityConfig(value.securityConfig);
    }
    if (value.has_extGroup1) {
        Free_RadioBearerConfig_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_RadioBearerConfig_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReconfiguration_IEs：ASN.1 RRCReconfiguration-IEs；源文件第 938 行；SEQUENCE。
// Encode_RRCReconfiguration_IEs 只读不分配；Decode_RRCReconfiguration_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCReconfiguration_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReconfiguration_IEs(Encoder& enc, const RRCReconfiguration_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_radioBearerConfig);
    enc.WriteBit(value.secondaryCellGroup != nullptr);
    enc.WriteBit(value.has_measConfig);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_radioBearerConfig) {
        Encode_RadioBearerConfig(enc, value.radioBearerConfig);
    }
    if (value.secondaryCellGroup != nullptr) {
        if (value.secondaryCellGroup == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_CellGroupConfig(enc, *value.secondaryCellGroup);
        }
    }
    if (value.has_measConfig) {
        Encode_MeasConfig(enc, value.measConfig);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCReconfiguration_v1530_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCReconfiguration_IEs(Decoder& dec, RRCReconfiguration_IEs& value)
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
        value.secondaryCellGroup = containing_value;
    }
    if (present_2) {
        if (Decode_MeasConfig(dec, value.measConfig) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_4) {
        if (Decode_RRCReconfiguration_v1530_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReconfiguration_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReconfiguration_IEs(RRCReconfiguration_IEs& value)
{
    if (value.has_radioBearerConfig) {
        Free_RadioBearerConfig(value.radioBearerConfig);
    }
    if (value.secondaryCellGroup != nullptr) {
        if (value.secondaryCellGroup != nullptr) {
            Free_CellGroupConfig(*value.secondaryCellGroup);
            std::free(value.secondaryCellGroup);
            value.secondaryCellGroup = nullptr;
        }
    }
    if (value.has_measConfig) {
        Free_MeasConfig(value.measConfig);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCReconfiguration_v1530_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReconfiguration_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 934 行；空 SEQUENCE{}。
// Encode_RRCReconfiguration_CriticalExtensionsFuture 只读不分配；Decode_RRCReconfiguration_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_RRCReconfiguration_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReconfiguration_CriticalExtensionsFuture(Encoder& enc, const RRCReconfiguration_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_RRCReconfiguration_CriticalExtensionsFuture(Decoder& dec, RRCReconfiguration_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReconfiguration_CriticalExtensionsFuture(RRCReconfiguration_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReconfiguration_CriticalExtensions：ASN.1 criticalExtensions；源文件第 932 行；CHOICE。
// Encode_RRCReconfiguration_CriticalExtensions 只读不分配；Decode_RRCReconfiguration_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_RRCReconfiguration_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReconfiguration_CriticalExtensions(Encoder& enc, const RRCReconfiguration_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RRCReconfiguration_CriticalExtensions_Tag_rrcReconfiguration:
        Encode_RRCReconfiguration_IEs(enc, value.u.rrcReconfiguration);
        break;
    case RRCReconfiguration_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_RRCReconfiguration_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RRCReconfiguration_CriticalExtensions(Decoder& dec, RRCReconfiguration_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RRCReconfiguration_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case RRCReconfiguration_CriticalExtensions_Tag_rrcReconfiguration: {
        if (Decode_RRCReconfiguration_IEs(dec, value.u.rrcReconfiguration) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RRCReconfiguration_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_RRCReconfiguration_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReconfiguration_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReconfiguration_CriticalExtensions(RRCReconfiguration_CriticalExtensions& value)
{
    switch (value.tag) {
    case RRCReconfiguration_CriticalExtensions_Tag_rrcReconfiguration:
        Free_RRCReconfiguration_IEs(value.u.rrcReconfiguration);
        break;
    case RRCReconfiguration_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_RRCReconfiguration_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReconfiguration：ASN.1 RRCReconfiguration；源文件第 930 行；SEQUENCE。
// Encode_RRCReconfiguration 只读不分配；Decode_RRCReconfiguration 可能 malloc（失败时内部已释放并清零）；Free_RRCReconfiguration 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReconfiguration(Encoder& enc, const RRCReconfiguration& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.rrc_TransactionIdentifier), 0, 3);
    Encode_RRCReconfiguration_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_RRCReconfiguration(Decoder& dec, RRCReconfiguration& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.rrc_TransactionIdentifier = (RRC_TransactionIdentifier)tmp_value;
    }
    {
        if (Decode_RRCReconfiguration_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReconfiguration(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReconfiguration(RRCReconfiguration& value)
{
    Free_RRCReconfiguration_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IAB_IP_AddressConfiguration_r16：ASN.1 IAB-IP-AddressConfiguration-r16；源文件第 1046 行；SEQUENCE。
// Encode_IAB_IP_AddressConfiguration_r16 只读不分配；Decode_IAB_IP_AddressConfiguration_r16 可能 malloc（失败时内部已释放并清零）；Free_IAB_IP_AddressConfiguration_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IAB_IP_AddressConfiguration_r16(Encoder& enc, const IAB_IP_AddressConfiguration_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_iab_IP_Address_r16);
    enc.WriteBit(value.has_iab_IP_Usage_r16);
    enc.WriteBit(value.has_iab_donor_DU_BAP_Address_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.iab_IP_AddressIndex_r16), 1, 32);
    if (value.has_iab_IP_Address_r16) {
        Encode_IAB_IP_Address_r16(enc, value.iab_IP_Address_r16);
    }
    if (value.has_iab_IP_Usage_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.iab_IP_Usage_r16), 0, 3);
    }
    if (value.has_iab_donor_DU_BAP_Address_r16) {
        enc.WriteFixedBitString(value.iab_donor_DU_BAP_Address_r16.bytes, value.iab_donor_DU_BAP_Address_r16.bitLength, 10, 10);
    }
    return enc.Error();
}

ErrorCode Decode_IAB_IP_AddressConfiguration_r16(Decoder& dec, IAB_IP_AddressConfiguration_r16& value)
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
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.iab_IP_AddressIndex_r16 = (IAB_IP_AddressIndex_r16)tmp_value;
    }
    if (present_0) {
        if (Decode_IAB_IP_Address_r16(dec, value.iab_IP_Address_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.iab_IP_Usage_r16 = (IAB_IP_Usage_r16)tmp_value;
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 10)) { goto fail; }
        string_length = 10;
        value.iab_donor_DU_BAP_Address_r16.bytes = string_bytes;
        value.iab_donor_DU_BAP_Address_r16.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_IAB_IP_AddressConfiguration_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IAB_IP_AddressConfiguration_r16(IAB_IP_AddressConfiguration_r16& value)
{
    if (value.has_iab_IP_Address_r16) {
        Free_IAB_IP_Address_r16(value.iab_IP_Address_r16);
    }
    if (value.has_iab_IP_Usage_r16) {
    }
    if (value.has_iab_donor_DU_BAP_Address_r16) {
        std::free(value.iab_donor_DU_BAP_Address_r16.bytes);
        value.iab_donor_DU_BAP_Address_r16.bytes = nullptr;
        value.iab_donor_DU_BAP_Address_r16.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NeedForInterruptionIntraFreqList_r18：ASN.1 NeedForInterruptionIntraFreqList-r18；源文件第 8735 行；SEQUENCE OF。
// Encode_NeedForInterruptionIntraFreqList_r18 只读不分配；Decode_NeedForInterruptionIntraFreqList_r18 可能 malloc（失败时内部已释放并清零）；Free_NeedForInterruptionIntraFreqList_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NeedForInterruptionIntraFreqList_r18(Encoder& enc, const NeedForInterruptionIntraFreqList_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_NeedForInterruptionNR_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_NeedForInterruptionIntraFreqList_r18(Decoder& dec, NeedForInterruptionIntraFreqList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (NeedForInterruptionNR_r18*)std::malloc((std::size_t)value.count * sizeof(NeedForInterruptionNR_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(NeedForInterruptionNR_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_NeedForInterruptionNR_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_NeedForInterruptionIntraFreqList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NeedForInterruptionIntraFreqList_r18(NeedForInterruptionIntraFreqList_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_NeedForInterruptionNR_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NeedForInterruptionBandListNR_r18：ASN.1 NeedForInterruptionBandListNR-r18；源文件第 8737 行；SEQUENCE OF。
// Encode_NeedForInterruptionBandListNR_r18 只读不分配；Decode_NeedForInterruptionBandListNR_r18 可能 malloc（失败时内部已释放并清零）；Free_NeedForInterruptionBandListNR_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NeedForInterruptionBandListNR_r18(Encoder& enc, const NeedForInterruptionBandListNR_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 1024u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_NeedForInterruptionNR_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_NeedForInterruptionBandListNR_r18(Decoder& dec, NeedForInterruptionBandListNR_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 1024u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 1024u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (NeedForInterruptionNR_r18*)std::malloc((std::size_t)value.count * sizeof(NeedForInterruptionNR_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(NeedForInterruptionNR_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_NeedForInterruptionNR_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_NeedForInterruptionBandListNR_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NeedForInterruptionBandListNR_r18(NeedForInterruptionBandListNR_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_NeedForInterruptionNR_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NeedForInterruptionInfoNR_r18：ASN.1 NeedForInterruptionInfoNR-r18；源文件第 8729 行；SEQUENCE。
// Encode_NeedForInterruptionInfoNR_r18 只读不分配；Decode_NeedForInterruptionInfoNR_r18 可能 malloc（失败时内部已释放并清零）；Free_NeedForInterruptionInfoNR_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NeedForInterruptionInfoNR_r18(Encoder& enc, const NeedForInterruptionInfoNR_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_NeedForInterruptionIntraFreqList_r18(enc, value.intraFreq_needForInterruption_r18);
    Encode_NeedForInterruptionBandListNR_r18(enc, value.interFreq_needForInterruption_r18);
    return enc.Error();
}

ErrorCode Decode_NeedForInterruptionInfoNR_r18(Decoder& dec, NeedForInterruptionInfoNR_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_NeedForInterruptionIntraFreqList_r18(dec, value.intraFreq_needForInterruption_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_NeedForInterruptionBandListNR_r18(dec, value.interFreq_needForInterruption_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_NeedForInterruptionInfoNR_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NeedForInterruptionInfoNR_r18(NeedForInterruptionInfoNR_r18& value)
{
    Free_NeedForInterruptionIntraFreqList_r18(value.intraFreq_needForInterruption_r18);
    Free_NeedForInterruptionBandListNR_r18(value.interFreq_needForInterruption_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SelectedPSCellForCHO_WithSCG_r18：ASN.1 SelectedPSCellForCHO-WithSCG-r18；源文件第 12366 行；SEQUENCE。
// Encode_SelectedPSCellForCHO_WithSCG_r18 只读不分配；Decode_SelectedPSCellForCHO_WithSCG_r18 可能 malloc（失败时内部已释放并清零）；Free_SelectedPSCellForCHO_WithSCG_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SelectedPSCellForCHO_WithSCG_r18(Encoder& enc, const SelectedPSCellForCHO_WithSCG_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.ssbFrequency_r18), 0, 3279165);
    enc.WriteConstrainedInteger((std::int64_t)(value.physCellId_r18), 0, 1007);
    return enc.Error();
}

ErrorCode Decode_SelectedPSCellForCHO_WithSCG_r18(Decoder& dec, SelectedPSCellForCHO_WithSCG_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.ssbFrequency_r18 = (ARFCN_ValueNR)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
        value.physCellId_r18 = (PhysCellId)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SelectedPSCellForCHO_WithSCG_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SelectedPSCellForCHO_WithSCG_r18(SelectedPSCellForCHO_WithSCG_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReconfigurationComplete_v1800_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 1127 行；空 SEQUENCE{}。
// Encode_RRCReconfigurationComplete_v1800_IEs_NonCriticalExtension 只读不分配；Decode_RRCReconfigurationComplete_v1800_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_RRCReconfigurationComplete_v1800_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReconfigurationComplete_v1800_IEs_NonCriticalExtension(Encoder& enc, const RRCReconfigurationComplete_v1800_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_RRCReconfigurationComplete_v1800_IEs_NonCriticalExtension(Decoder& dec, RRCReconfigurationComplete_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReconfigurationComplete_v1800_IEs_NonCriticalExtension(RRCReconfigurationComplete_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReconfigurationComplete_v1800_IEs：ASN.1 RRCReconfigurationComplete-v1800-IEs；源文件第 1121 行；SEQUENCE。
// Encode_RRCReconfigurationComplete_v1800_IEs 只读不分配；Decode_RRCReconfigurationComplete_v1800_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCReconfigurationComplete_v1800_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReconfigurationComplete_v1800_IEs(Encoder& enc, const RRCReconfigurationComplete_v1800_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_needForInterruptionInfoNR_r18);
    enc.WriteBit(value.has_flightPathInfoAvailable_r18);
    enc.WriteBit(value.has_selectedPSCellForCHO_WithSCG_r18);
    enc.WriteBit(value.has_selectedSK_Counter_r18);
    enc.WriteBit(value.has_measConfigReportAppLayerAvailable_r18);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_needForInterruptionInfoNR_r18) {
        Encode_NeedForInterruptionInfoNR_r18(enc, value.needForInterruptionInfoNR_r18);
    }
    if (value.has_flightPathInfoAvailable_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.flightPathInfoAvailable_r18), 0, 0);
    }
    if (value.has_selectedPSCellForCHO_WithSCG_r18) {
        Encode_SelectedPSCellForCHO_WithSCG_r18(enc, value.selectedPSCellForCHO_WithSCG_r18);
    }
    if (value.has_selectedSK_Counter_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.selectedSK_Counter_r18), 0, 65535);
    }
    if (value.has_measConfigReportAppLayerAvailable_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.measConfigReportAppLayerAvailable_r18), 0, 0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCReconfigurationComplete_v1800_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCReconfigurationComplete_v1800_IEs(Decoder& dec, RRCReconfigurationComplete_v1800_IEs& value)
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
        if (Decode_NeedForInterruptionInfoNR_r18(dec, value.needForInterruptionInfoNR_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.flightPathInfoAvailable_r18 = (RRCReconfigurationComplete_v1800_IEs_FlightPathInfoAvailable_r18)0;
    }
    if (present_2) {
        if (Decode_SelectedPSCellForCHO_WithSCG_r18(dec, value.selectedPSCellForCHO_WithSCG_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.selectedSK_Counter_r18 = (SK_Counter)tmp_value;
    }
    if (present_4) {
        value.measConfigReportAppLayerAvailable_r18 = (RRCReconfigurationComplete_v1800_IEs_MeasConfigReportAppLayerAvailable_r18)0;
    }
    if (present_5) {
        if (Decode_RRCReconfigurationComplete_v1800_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReconfigurationComplete_v1800_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReconfigurationComplete_v1800_IEs(RRCReconfigurationComplete_v1800_IEs& value)
{
    if (value.has_needForInterruptionInfoNR_r18) {
        Free_NeedForInterruptionInfoNR_r18(value.needForInterruptionInfoNR_r18);
    }
    if (value.has_flightPathInfoAvailable_r18) {
    }
    if (value.has_selectedPSCellForCHO_WithSCG_r18) {
        Free_SelectedPSCellForCHO_WithSCG_r18(value.selectedPSCellForCHO_WithSCG_r18);
    }
    if (value.has_selectedSK_Counter_r18) {
    }
    if (value.has_measConfigReportAppLayerAvailable_r18) {
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCReconfigurationComplete_v1800_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UplinkTxDirectCurrentMoreCarrierList_r17：ASN.1 UplinkTxDirectCurrentMoreCarrierList-r17；源文件第 14033 行；SEQUENCE OF。
// Encode_UplinkTxDirectCurrentMoreCarrierList_r17 只读不分配；Decode_UplinkTxDirectCurrentMoreCarrierList_r17 可能 malloc（失败时内部已释放并清零）；Free_UplinkTxDirectCurrentMoreCarrierList_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UplinkTxDirectCurrentMoreCarrierList_r17(Encoder& enc, const UplinkTxDirectCurrentMoreCarrierList_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_CC_Group_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_UplinkTxDirectCurrentMoreCarrierList_r17(Decoder& dec, UplinkTxDirectCurrentMoreCarrierList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (CC_Group_r17*)std::malloc((std::size_t)value.count * sizeof(CC_Group_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(CC_Group_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_CC_Group_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_UplinkTxDirectCurrentMoreCarrierList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkTxDirectCurrentMoreCarrierList_r17(UplinkTxDirectCurrentMoreCarrierList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_CC_Group_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReconfigurationComplete_v1720_IEs：ASN.1 RRCReconfigurationComplete-v1720-IEs；源文件第 1116 行；SEQUENCE。
// Encode_RRCReconfigurationComplete_v1720_IEs 只读不分配；Decode_RRCReconfigurationComplete_v1720_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCReconfigurationComplete_v1720_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReconfigurationComplete_v1720_IEs(Encoder& enc, const RRCReconfigurationComplete_v1720_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_uplinkTxDirectCurrentMoreCarrierList_r17);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_uplinkTxDirectCurrentMoreCarrierList_r17) {
        Encode_UplinkTxDirectCurrentMoreCarrierList_r17(enc, value.uplinkTxDirectCurrentMoreCarrierList_r17);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCReconfigurationComplete_v1800_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCReconfigurationComplete_v1720_IEs(Decoder& dec, RRCReconfigurationComplete_v1720_IEs& value)
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
        if (Decode_RRCReconfigurationComplete_v1800_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReconfigurationComplete_v1720_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReconfigurationComplete_v1720_IEs(RRCReconfigurationComplete_v1720_IEs& value)
{
    if (value.has_uplinkTxDirectCurrentMoreCarrierList_r17) {
        Free_UplinkTxDirectCurrentMoreCarrierList_r17(value.uplinkTxDirectCurrentMoreCarrierList_r17);
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCReconfigurationComplete_v1800_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NeedForGapNCSG_InfoEUTRA_r17：ASN.1 NeedForGapNCSG-InfoEUTRA-r17；源文件第 8695 行；SEQUENCE。
// Encode_NeedForGapNCSG_InfoEUTRA_r17 只读不分配；Decode_NeedForGapNCSG_InfoEUTRA_r17 可能 malloc（失败时内部已释放并清零）；Free_NeedForGapNCSG_InfoEUTRA_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NeedForGapNCSG_InfoEUTRA_r17(Encoder& enc, const NeedForGapNCSG_InfoEUTRA_r17& value)
{
    (void)value;
enc.WriteConstrainedLength(value.needForNCSG_EUTRA_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.needForNCSG_EUTRA_r17_count; ++i) {
    Encode_NeedForNCSG_EUTRA_r17(enc, value.needForNCSG_EUTRA_r17_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_NeedForGapNCSG_InfoEUTRA_r17(Decoder& dec, NeedForGapNCSG_InfoEUTRA_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.needForNCSG_EUTRA_r17_count)) { goto fail; }
if (value.needForNCSG_EUTRA_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.needForNCSG_EUTRA_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.needForNCSG_EUTRA_r17_count > 0u) {
    value.needForNCSG_EUTRA_r17_items = (NeedForNCSG_EUTRA_r17*)std::malloc((std::size_t)value.needForNCSG_EUTRA_r17_count * sizeof(NeedForNCSG_EUTRA_r17));
    if (value.needForNCSG_EUTRA_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.needForNCSG_EUTRA_r17_items, 0, (std::size_t)value.needForNCSG_EUTRA_r17_count * sizeof(NeedForNCSG_EUTRA_r17));
}
for (std::uint32_t i = 0; i < value.needForNCSG_EUTRA_r17_count; ++i) {
    if (Decode_NeedForNCSG_EUTRA_r17(dec, value.needForNCSG_EUTRA_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_NeedForGapNCSG_InfoEUTRA_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NeedForGapNCSG_InfoEUTRA_r17(NeedForGapNCSG_InfoEUTRA_r17& value)
{
    if (value.needForNCSG_EUTRA_r17_items != nullptr) {
        for (std::uint32_t i = 0; i < value.needForNCSG_EUTRA_r17_count; ++i) {
            Free_NeedForNCSG_EUTRA_r17(value.needForNCSG_EUTRA_r17_items[i]);
        }
        std::free(value.needForNCSG_EUTRA_r17_items);
        value.needForNCSG_EUTRA_r17_items = nullptr;
    }
    value.needForNCSG_EUTRA_r17_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NeedForNCSG_IntraFreqList_r17：ASN.1 NeedForNCSG-IntraFreqList-r17；源文件第 8712 行；SEQUENCE OF。
// Encode_NeedForNCSG_IntraFreqList_r17 只读不分配；Decode_NeedForNCSG_IntraFreqList_r17 可能 malloc（失败时内部已释放并清零）；Free_NeedForNCSG_IntraFreqList_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NeedForNCSG_IntraFreqList_r17(Encoder& enc, const NeedForNCSG_IntraFreqList_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_NeedForNCSG_IntraFreq_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_NeedForNCSG_IntraFreqList_r17(Decoder& dec, NeedForNCSG_IntraFreqList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (NeedForNCSG_IntraFreq_r17*)std::malloc((std::size_t)value.count * sizeof(NeedForNCSG_IntraFreq_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(NeedForNCSG_IntraFreq_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_NeedForNCSG_IntraFreq_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_NeedForNCSG_IntraFreqList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NeedForNCSG_IntraFreqList_r17(NeedForNCSG_IntraFreqList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_NeedForNCSG_IntraFreq_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NeedForNCSG_BandListNR_r17：ASN.1 NeedForNCSG-BandListNR-r17；源文件第 8714 行；SEQUENCE OF。
// Encode_NeedForNCSG_BandListNR_r17 只读不分配；Decode_NeedForNCSG_BandListNR_r17 可能 malloc（失败时内部已释放并清零）；Free_NeedForNCSG_BandListNR_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NeedForNCSG_BandListNR_r17(Encoder& enc, const NeedForNCSG_BandListNR_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 1024u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_NeedForNCSG_NR_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_NeedForNCSG_BandListNR_r17(Decoder& dec, NeedForNCSG_BandListNR_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 1024u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 1024u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (NeedForNCSG_NR_r17*)std::malloc((std::size_t)value.count * sizeof(NeedForNCSG_NR_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(NeedForNCSG_NR_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_NeedForNCSG_NR_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_NeedForNCSG_BandListNR_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NeedForNCSG_BandListNR_r17(NeedForNCSG_BandListNR_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_NeedForNCSG_NR_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NeedForGapNCSG_InfoNR_r17：ASN.1 NeedForGapNCSG-InfoNR-r17；源文件第 8707 行；SEQUENCE。
// Encode_NeedForGapNCSG_InfoNR_r17 只读不分配；Decode_NeedForGapNCSG_InfoNR_r17 可能 malloc（失败时内部已释放并清零）；Free_NeedForGapNCSG_InfoNR_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NeedForGapNCSG_InfoNR_r17(Encoder& enc, const NeedForGapNCSG_InfoNR_r17& value)
{
    (void)value;
    Encode_NeedForNCSG_IntraFreqList_r17(enc, value.intraFreq_needForNCSG_r17);
    Encode_NeedForNCSG_BandListNR_r17(enc, value.interFreq_needForNCSG_r17);
    return enc.Error();
}

ErrorCode Decode_NeedForGapNCSG_InfoNR_r17(Decoder& dec, NeedForGapNCSG_InfoNR_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_NeedForNCSG_IntraFreqList_r17(dec, value.intraFreq_needForNCSG_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_NeedForNCSG_BandListNR_r17(dec, value.interFreq_needForNCSG_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_NeedForGapNCSG_InfoNR_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NeedForGapNCSG_InfoNR_r17(NeedForGapNCSG_InfoNR_r17& value)
{
    Free_NeedForNCSG_IntraFreqList_r17(value.intraFreq_needForNCSG_r17);
    Free_NeedForNCSG_BandListNR_r17(value.interFreq_needForNCSG_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReconfigurationComplete_v1700_IEs：ASN.1 RRCReconfigurationComplete-v1700-IEs；源文件第 1109 行；SEQUENCE。
// Encode_RRCReconfigurationComplete_v1700_IEs 只读不分配；Decode_RRCReconfigurationComplete_v1700_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCReconfigurationComplete_v1700_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReconfigurationComplete_v1700_IEs(Encoder& enc, const RRCReconfigurationComplete_v1700_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_needForGapNCSG_InfoNR_r17);
    enc.WriteBit(value.has_needForGapNCSG_InfoEUTRA_r17);
    enc.WriteBit(value.has_selectedCondRRCReconfig_r17);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_needForGapNCSG_InfoNR_r17) {
        Encode_NeedForGapNCSG_InfoNR_r17(enc, value.needForGapNCSG_InfoNR_r17);
    }
    if (value.has_needForGapNCSG_InfoEUTRA_r17) {
        Encode_NeedForGapNCSG_InfoEUTRA_r17(enc, value.needForGapNCSG_InfoEUTRA_r17);
    }
    if (value.has_selectedCondRRCReconfig_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.selectedCondRRCReconfig_r17), 1, 8);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCReconfigurationComplete_v1720_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCReconfigurationComplete_v1700_IEs(Decoder& dec, RRCReconfigurationComplete_v1700_IEs& value)
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
        if (Decode_NeedForGapNCSG_InfoNR_r17(dec, value.needForGapNCSG_InfoNR_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_NeedForGapNCSG_InfoEUTRA_r17(dec, value.needForGapNCSG_InfoEUTRA_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.selectedCondRRCReconfig_r17 = (CondReconfigId_r16)tmp_value;
    }
    if (present_3) {
        if (Decode_RRCReconfigurationComplete_v1720_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReconfigurationComplete_v1700_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReconfigurationComplete_v1700_IEs(RRCReconfigurationComplete_v1700_IEs& value)
{
    if (value.has_needForGapNCSG_InfoNR_r17) {
        Free_NeedForGapNCSG_InfoNR_r17(value.needForGapNCSG_InfoNR_r17);
    }
    if (value.has_needForGapNCSG_InfoEUTRA_r17) {
        Free_NeedForGapNCSG_InfoEUTRA_r17(value.needForGapNCSG_InfoEUTRA_r17);
    }
    if (value.has_selectedCondRRCReconfig_r17) {
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCReconfigurationComplete_v1720_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UplinkTxDirectCurrentTwoCarrierList_r16：ASN.1 UplinkTxDirectCurrentTwoCarrierList-r16；源文件第 14062 行；SEQUENCE OF。
// Encode_UplinkTxDirectCurrentTwoCarrierList_r16 只读不分配；Decode_UplinkTxDirectCurrentTwoCarrierList_r16 可能 malloc（失败时内部已释放并清零）；Free_UplinkTxDirectCurrentTwoCarrierList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UplinkTxDirectCurrentTwoCarrierList_r16(Encoder& enc, const UplinkTxDirectCurrentTwoCarrierList_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 64u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_UplinkTxDirectCurrentTwoCarrier_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_UplinkTxDirectCurrentTwoCarrierList_r16(Decoder& dec, UplinkTxDirectCurrentTwoCarrierList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 64u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 64u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (UplinkTxDirectCurrentTwoCarrier_r16*)std::malloc((std::size_t)value.count * sizeof(UplinkTxDirectCurrentTwoCarrier_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(UplinkTxDirectCurrentTwoCarrier_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_UplinkTxDirectCurrentTwoCarrier_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_UplinkTxDirectCurrentTwoCarrierList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkTxDirectCurrentTwoCarrierList_r16(UplinkTxDirectCurrentTwoCarrierList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_UplinkTxDirectCurrentTwoCarrier_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReconfigurationComplete_v1640_IEs：ASN.1 RRCReconfigurationComplete-v1640-IEs；源文件第 1104 行；SEQUENCE。
// Encode_RRCReconfigurationComplete_v1640_IEs 只读不分配；Decode_RRCReconfigurationComplete_v1640_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCReconfigurationComplete_v1640_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReconfigurationComplete_v1640_IEs(Encoder& enc, const RRCReconfigurationComplete_v1640_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_uplinkTxDirectCurrentTwoCarrierList_r16);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_uplinkTxDirectCurrentTwoCarrierList_r16) {
        Encode_UplinkTxDirectCurrentTwoCarrierList_r16(enc, value.uplinkTxDirectCurrentTwoCarrierList_r16);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCReconfigurationComplete_v1700_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCReconfigurationComplete_v1640_IEs(Decoder& dec, RRCReconfigurationComplete_v1640_IEs& value)
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
        if (Decode_RRCReconfigurationComplete_v1700_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReconfigurationComplete_v1640_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReconfigurationComplete_v1640_IEs(RRCReconfigurationComplete_v1640_IEs& value)
{
    if (value.has_uplinkTxDirectCurrentTwoCarrierList_r16) {
        Free_UplinkTxDirectCurrentTwoCarrierList_r16(value.uplinkTxDirectCurrentTwoCarrierList_r16);
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCReconfigurationComplete_v1700_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NeedForGapsIntraFreqList_r16：ASN.1 NeedForGapsIntraFreqList-r16；源文件第 8664 行；SEQUENCE OF。
// Encode_NeedForGapsIntraFreqList_r16 只读不分配；Decode_NeedForGapsIntraFreqList_r16 可能 malloc（失败时内部已释放并清零）；Free_NeedForGapsIntraFreqList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NeedForGapsIntraFreqList_r16(Encoder& enc, const NeedForGapsIntraFreqList_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_NeedForGapsIntraFreq_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_NeedForGapsIntraFreqList_r16(Decoder& dec, NeedForGapsIntraFreqList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (NeedForGapsIntraFreq_r16*)std::malloc((std::size_t)value.count * sizeof(NeedForGapsIntraFreq_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(NeedForGapsIntraFreq_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_NeedForGapsIntraFreq_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_NeedForGapsIntraFreqList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NeedForGapsIntraFreqList_r16(NeedForGapsIntraFreqList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_NeedForGapsIntraFreq_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NeedForGapsBandListNR_r16：ASN.1 NeedForGapsBandListNR-r16；源文件第 8666 行；SEQUENCE OF。
// Encode_NeedForGapsBandListNR_r16 只读不分配；Decode_NeedForGapsBandListNR_r16 可能 malloc（失败时内部已释放并清零）；Free_NeedForGapsBandListNR_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NeedForGapsBandListNR_r16(Encoder& enc, const NeedForGapsBandListNR_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 1024u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_NeedForGapsNR_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_NeedForGapsBandListNR_r16(Decoder& dec, NeedForGapsBandListNR_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 1024u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 1024u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (NeedForGapsNR_r16*)std::malloc((std::size_t)value.count * sizeof(NeedForGapsNR_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(NeedForGapsNR_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_NeedForGapsNR_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_NeedForGapsBandListNR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NeedForGapsBandListNR_r16(NeedForGapsBandListNR_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_NeedForGapsNR_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NeedForGapsInfoNR_r16：ASN.1 NeedForGapsInfoNR-r16；源文件第 8659 行；SEQUENCE。
// Encode_NeedForGapsInfoNR_r16 只读不分配；Decode_NeedForGapsInfoNR_r16 可能 malloc（失败时内部已释放并清零）；Free_NeedForGapsInfoNR_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NeedForGapsInfoNR_r16(Encoder& enc, const NeedForGapsInfoNR_r16& value)
{
    (void)value;
    Encode_NeedForGapsIntraFreqList_r16(enc, value.intraFreq_needForGap_r16);
    Encode_NeedForGapsBandListNR_r16(enc, value.interFreq_needForGap_r16);
    return enc.Error();
}

ErrorCode Decode_NeedForGapsInfoNR_r16(Decoder& dec, NeedForGapsInfoNR_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_NeedForGapsIntraFreqList_r16(dec, value.intraFreq_needForGap_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_NeedForGapsBandListNR_r16(dec, value.interFreq_needForGap_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_NeedForGapsInfoNR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NeedForGapsInfoNR_r16(NeedForGapsInfoNR_r16& value)
{
    Free_NeedForGapsIntraFreqList_r16(value.intraFreq_needForGap_r16);
    Free_NeedForGapsBandListNR_r16(value.interFreq_needForGap_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReconfigurationComplete_v1610_IEs：ASN.1 RRCReconfigurationComplete-v1610-IEs；源文件第 1098 行；SEQUENCE。
// Encode_RRCReconfigurationComplete_v1610_IEs 只读不分配；Decode_RRCReconfigurationComplete_v1610_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCReconfigurationComplete_v1610_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReconfigurationComplete_v1610_IEs(Encoder& enc, const RRCReconfigurationComplete_v1610_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_ue_MeasurementsAvailable_r16);
    enc.WriteBit(value.has_needForGapsInfoNR_r16);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_ue_MeasurementsAvailable_r16) {
        Encode_UE_MeasurementsAvailable_r16(enc, value.ue_MeasurementsAvailable_r16);
    }
    if (value.has_needForGapsInfoNR_r16) {
        Encode_NeedForGapsInfoNR_r16(enc, value.needForGapsInfoNR_r16);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCReconfigurationComplete_v1640_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCReconfigurationComplete_v1610_IEs(Decoder& dec, RRCReconfigurationComplete_v1610_IEs& value)
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
        if (Decode_UE_MeasurementsAvailable_r16(dec, value.ue_MeasurementsAvailable_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_NeedForGapsInfoNR_r16(dec, value.needForGapsInfoNR_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_RRCReconfigurationComplete_v1640_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReconfigurationComplete_v1610_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReconfigurationComplete_v1610_IEs(RRCReconfigurationComplete_v1610_IEs& value)
{
    if (value.has_ue_MeasurementsAvailable_r16) {
        Free_UE_MeasurementsAvailable_r16(value.ue_MeasurementsAvailable_r16);
    }
    if (value.has_needForGapsInfoNR_r16) {
        Free_NeedForGapsInfoNR_r16(value.needForGapsInfoNR_r16);
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCReconfigurationComplete_v1640_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReconfigurationComplete_v1560_IEs_Scg_Response：ASN.1 scg-Response；源文件第 1091 行；CHOICE。
// Encode_RRCReconfigurationComplete_v1560_IEs_Scg_Response 只读不分配；Decode_RRCReconfigurationComplete_v1560_IEs_Scg_Response 可能 malloc（失败时内部已释放并清零）；Free_RRCReconfigurationComplete_v1560_IEs_Scg_Response 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReconfigurationComplete_v1560_IEs_Scg_Response(Encoder& enc, const RRCReconfigurationComplete_v1560_IEs_Scg_Response& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RRCReconfigurationComplete_v1560_IEs_Scg_Response_Tag_nr_SCG_Response:
        if (value.u.nr_SCG_Response == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_RRCReconfigurationComplete(enc, *value.u.nr_SCG_Response);
        }
        break;
    case RRCReconfigurationComplete_v1560_IEs_Scg_Response_Tag_eutra_SCG_Response:
        enc.WriteSemiConstrainedOctetString(value.u.eutra_SCG_Response.bytes, value.u.eutra_SCG_Response.length, 0, 0xFFFFFFFFu);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RRCReconfigurationComplete_v1560_IEs_Scg_Response(Decoder& dec, RRCReconfigurationComplete_v1560_IEs_Scg_Response& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RRCReconfigurationComplete_v1560_IEs_Scg_Response_Tag)root_index;
    switch (value.tag) {
    case RRCReconfigurationComplete_v1560_IEs_Scg_Response_Tag_nr_SCG_Response: {
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
    case RRCReconfigurationComplete_v1560_IEs_Scg_Response_Tag_eutra_SCG_Response: {
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
    Free_RRCReconfigurationComplete_v1560_IEs_Scg_Response(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReconfigurationComplete_v1560_IEs_Scg_Response(RRCReconfigurationComplete_v1560_IEs_Scg_Response& value)
{
    switch (value.tag) {
    case RRCReconfigurationComplete_v1560_IEs_Scg_Response_Tag_nr_SCG_Response:
        if (value.u.nr_SCG_Response != nullptr) {
            Free_RRCReconfigurationComplete(*value.u.nr_SCG_Response);
            std::free(value.u.nr_SCG_Response);
        }
        break;
    case RRCReconfigurationComplete_v1560_IEs_Scg_Response_Tag_eutra_SCG_Response:
        std::free(value.u.eutra_SCG_Response.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReconfigurationComplete_v1560_IEs：ASN.1 RRCReconfigurationComplete-v1560-IEs；源文件第 1090 行；SEQUENCE。
// Encode_RRCReconfigurationComplete_v1560_IEs 只读不分配；Decode_RRCReconfigurationComplete_v1560_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCReconfigurationComplete_v1560_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReconfigurationComplete_v1560_IEs(Encoder& enc, const RRCReconfigurationComplete_v1560_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_scg_Response);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_scg_Response) {
        Encode_RRCReconfigurationComplete_v1560_IEs_Scg_Response(enc, value.scg_Response);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCReconfigurationComplete_v1610_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCReconfigurationComplete_v1560_IEs(Decoder& dec, RRCReconfigurationComplete_v1560_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_RRCReconfigurationComplete_v1560_IEs_Scg_Response(dec, value.scg_Response) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_RRCReconfigurationComplete_v1610_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReconfigurationComplete_v1560_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReconfigurationComplete_v1560_IEs(RRCReconfigurationComplete_v1560_IEs& value)
{
    if (value.has_scg_Response) {
        Free_RRCReconfigurationComplete_v1560_IEs_Scg_Response(value.scg_Response);
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCReconfigurationComplete_v1610_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UplinkTxDirectCurrentList：ASN.1 UplinkTxDirectCurrentList；源文件第 14013 行；SEQUENCE OF。
// Encode_UplinkTxDirectCurrentList 只读不分配；Decode_UplinkTxDirectCurrentList 可能 malloc（失败时内部已释放并清零）；Free_UplinkTxDirectCurrentList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UplinkTxDirectCurrentList(Encoder& enc, const UplinkTxDirectCurrentList& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_UplinkTxDirectCurrentCell(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_UplinkTxDirectCurrentList(Decoder& dec, UplinkTxDirectCurrentList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (UplinkTxDirectCurrentCell*)std::malloc((std::size_t)value.count * sizeof(UplinkTxDirectCurrentCell));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(UplinkTxDirectCurrentCell));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_UplinkTxDirectCurrentCell(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_UplinkTxDirectCurrentList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkTxDirectCurrentList(UplinkTxDirectCurrentList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_UplinkTxDirectCurrentCell(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReconfigurationComplete_v1530_IEs：ASN.1 RRCReconfigurationComplete-v1530-IEs；源文件第 1085 行；SEQUENCE。
// Encode_RRCReconfigurationComplete_v1530_IEs 只读不分配；Decode_RRCReconfigurationComplete_v1530_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCReconfigurationComplete_v1530_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReconfigurationComplete_v1530_IEs(Encoder& enc, const RRCReconfigurationComplete_v1530_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_uplinkTxDirectCurrentList);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_uplinkTxDirectCurrentList) {
        Encode_UplinkTxDirectCurrentList(enc, value.uplinkTxDirectCurrentList);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCReconfigurationComplete_v1560_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCReconfigurationComplete_v1530_IEs(Decoder& dec, RRCReconfigurationComplete_v1530_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_UplinkTxDirectCurrentList(dec, value.uplinkTxDirectCurrentList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_RRCReconfigurationComplete_v1560_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReconfigurationComplete_v1530_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReconfigurationComplete_v1530_IEs(RRCReconfigurationComplete_v1530_IEs& value)
{
    if (value.has_uplinkTxDirectCurrentList) {
        Free_UplinkTxDirectCurrentList(value.uplinkTxDirectCurrentList);
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCReconfigurationComplete_v1560_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReconfigurationComplete_IEs：ASN.1 RRCReconfigurationComplete-IEs；源文件第 1080 行；SEQUENCE。
// Encode_RRCReconfigurationComplete_IEs 只读不分配；Decode_RRCReconfigurationComplete_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCReconfigurationComplete_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReconfigurationComplete_IEs(Encoder& enc, const RRCReconfigurationComplete_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCReconfigurationComplete_v1530_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCReconfigurationComplete_IEs(Decoder& dec, RRCReconfigurationComplete_IEs& value)
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
        if (Decode_RRCReconfigurationComplete_v1530_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReconfigurationComplete_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReconfigurationComplete_IEs(RRCReconfigurationComplete_IEs& value)
{
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCReconfigurationComplete_v1530_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReconfigurationComplete_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 1076 行；空 SEQUENCE{}。
// Encode_RRCReconfigurationComplete_CriticalExtensionsFuture 只读不分配；Decode_RRCReconfigurationComplete_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_RRCReconfigurationComplete_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReconfigurationComplete_CriticalExtensionsFuture(Encoder& enc, const RRCReconfigurationComplete_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_RRCReconfigurationComplete_CriticalExtensionsFuture(Decoder& dec, RRCReconfigurationComplete_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReconfigurationComplete_CriticalExtensionsFuture(RRCReconfigurationComplete_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReconfigurationComplete_CriticalExtensions：ASN.1 criticalExtensions；源文件第 1074 行；CHOICE。
// Encode_RRCReconfigurationComplete_CriticalExtensions 只读不分配；Decode_RRCReconfigurationComplete_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_RRCReconfigurationComplete_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReconfigurationComplete_CriticalExtensions(Encoder& enc, const RRCReconfigurationComplete_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RRCReconfigurationComplete_CriticalExtensions_Tag_rrcReconfigurationComplete:
        Encode_RRCReconfigurationComplete_IEs(enc, value.u.rrcReconfigurationComplete);
        break;
    case RRCReconfigurationComplete_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_RRCReconfigurationComplete_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RRCReconfigurationComplete_CriticalExtensions(Decoder& dec, RRCReconfigurationComplete_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RRCReconfigurationComplete_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case RRCReconfigurationComplete_CriticalExtensions_Tag_rrcReconfigurationComplete: {
        if (Decode_RRCReconfigurationComplete_IEs(dec, value.u.rrcReconfigurationComplete) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RRCReconfigurationComplete_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_RRCReconfigurationComplete_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReconfigurationComplete_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReconfigurationComplete_CriticalExtensions(RRCReconfigurationComplete_CriticalExtensions& value)
{
    switch (value.tag) {
    case RRCReconfigurationComplete_CriticalExtensions_Tag_rrcReconfigurationComplete:
        Free_RRCReconfigurationComplete_IEs(value.u.rrcReconfigurationComplete);
        break;
    case RRCReconfigurationComplete_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_RRCReconfigurationComplete_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReconfigurationComplete：ASN.1 RRCReconfigurationComplete；源文件第 1072 行；SEQUENCE。
// Encode_RRCReconfigurationComplete 只读不分配；Decode_RRCReconfigurationComplete 可能 malloc（失败时内部已释放并清零）；Free_RRCReconfigurationComplete 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReconfigurationComplete(Encoder& enc, const RRCReconfigurationComplete& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.rrc_TransactionIdentifier), 0, 3);
    Encode_RRCReconfigurationComplete_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_RRCReconfigurationComplete(Decoder& dec, RRCReconfigurationComplete& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.rrc_TransactionIdentifier = (RRC_TransactionIdentifier)tmp_value;
    }
    {
        if (Decode_RRCReconfigurationComplete_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReconfigurationComplete(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReconfigurationComplete(RRCReconfigurationComplete& value)
{
    Free_RRCReconfigurationComplete_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReject_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 1143 行；空 SEQUENCE{}。
// Encode_RRCReject_IEs_NonCriticalExtension 只读不分配；Decode_RRCReject_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_RRCReject_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReject_IEs_NonCriticalExtension(Encoder& enc, const RRCReject_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_RRCReject_IEs_NonCriticalExtension(Decoder& dec, RRCReject_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReject_IEs_NonCriticalExtension(RRCReject_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReject_IEs：ASN.1 RRCReject-IEs；源文件第 1140 行；SEQUENCE。
// Encode_RRCReject_IEs 只读不分配；Decode_RRCReject_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCReject_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReject_IEs(Encoder& enc, const RRCReject_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_waitTime);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_waitTime) {
        enc.WriteConstrainedInteger((std::int64_t)(value.waitTime), 1, 16);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCReject_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCReject_IEs(Decoder& dec, RRCReject_IEs& value)
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
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.waitTime = (RejectWaitTime)tmp_value;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_2) {
        if (Decode_RRCReject_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReject_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReject_IEs(RRCReject_IEs& value)
{
    if (value.has_waitTime) {
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCReject_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReject_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 1136 行；空 SEQUENCE{}。
// Encode_RRCReject_CriticalExtensionsFuture 只读不分配；Decode_RRCReject_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_RRCReject_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReject_CriticalExtensionsFuture(Encoder& enc, const RRCReject_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_RRCReject_CriticalExtensionsFuture(Decoder& dec, RRCReject_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReject_CriticalExtensionsFuture(RRCReject_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReject_CriticalExtensions：ASN.1 criticalExtensions；源文件第 1134 行；CHOICE。
// Encode_RRCReject_CriticalExtensions 只读不分配；Decode_RRCReject_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_RRCReject_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReject_CriticalExtensions(Encoder& enc, const RRCReject_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RRCReject_CriticalExtensions_Tag_rrcReject:
        Encode_RRCReject_IEs(enc, value.u.rrcReject);
        break;
    case RRCReject_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_RRCReject_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RRCReject_CriticalExtensions(Decoder& dec, RRCReject_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RRCReject_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case RRCReject_CriticalExtensions_Tag_rrcReject: {
        if (Decode_RRCReject_IEs(dec, value.u.rrcReject) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RRCReject_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_RRCReject_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReject_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReject_CriticalExtensions(RRCReject_CriticalExtensions& value)
{
    switch (value.tag) {
    case RRCReject_CriticalExtensions_Tag_rrcReject:
        Free_RRCReject_IEs(value.u.rrcReject);
        break;
    case RRCReject_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_RRCReject_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReject：ASN.1 RRCReject；源文件第 1133 行；SEQUENCE。
// Encode_RRCReject 只读不分配；Decode_RRCReject 可能 malloc（失败时内部已释放并清零）；Free_RRCReject 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReject(Encoder& enc, const RRCReject& value)
{
    (void)value;
    Encode_RRCReject_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_RRCReject(Decoder& dec, RRCReject& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_RRCReject_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReject(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReject(RRCReject& value)
{
    Free_RRCReject_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCRelease_v1710_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 1187 行；空 SEQUENCE{}。
// Encode_RRCRelease_v1710_IEs_NonCriticalExtension 只读不分配；Decode_RRCRelease_v1710_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_RRCRelease_v1710_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCRelease_v1710_IEs_NonCriticalExtension(Encoder& enc, const RRCRelease_v1710_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_RRCRelease_v1710_IEs_NonCriticalExtension(Decoder& dec, RRCRelease_v1710_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCRelease_v1710_IEs_NonCriticalExtension(RRCRelease_v1710_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCRelease_v1710_IEs：ASN.1 RRCRelease-v1710-IEs；源文件第 1185 行；SEQUENCE。
// Encode_RRCRelease_v1710_IEs 只读不分配；Decode_RRCRelease_v1710_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCRelease_v1710_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCRelease_v1710_IEs(Encoder& enc, const RRCRelease_v1710_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_noLastCellUpdate_r17);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_noLastCellUpdate_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.noLastCellUpdate_r17), 0, 0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCRelease_v1710_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCRelease_v1710_IEs(Decoder& dec, RRCRelease_v1710_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.noLastCellUpdate_r17 = (RRCRelease_v1710_IEs_NoLastCellUpdate_r17)0;
    }
    if (present_1) {
        if (Decode_RRCRelease_v1710_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCRelease_v1710_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCRelease_v1710_IEs(RRCRelease_v1710_IEs& value)
{
    if (value.has_noLastCellUpdate_r17) {
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCRelease_v1710_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCRelease_v1650_IEs：ASN.1 RRCRelease-v1650-IEs；源文件第 1180 行；SEQUENCE。
// Encode_RRCRelease_v1650_IEs 只读不分配；Decode_RRCRelease_v1650_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCRelease_v1650_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCRelease_v1650_IEs(Encoder& enc, const RRCRelease_v1650_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_mpsPriorityIndication_r16);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_mpsPriorityIndication_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mpsPriorityIndication_r16), 0, 0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCRelease_v1710_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCRelease_v1650_IEs(Decoder& dec, RRCRelease_v1650_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.mpsPriorityIndication_r16 = (RRCRelease_v1650_IEs_MpsPriorityIndication_r16)0;
    }
    if (present_1) {
        if (Decode_RRCRelease_v1710_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCRelease_v1650_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCRelease_v1650_IEs(RRCRelease_v1650_IEs& value)
{
    if (value.has_mpsPriorityIndication_r16) {
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCRelease_v1710_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasIdleConfigDedicated_r16_ExtGroup1：ASN.1 MeasIdleConfigDedicated_r16_ExtGroup1；源文件第 7526 行；扩展添加组 [[ ]]。
// Encode_MeasIdleConfigDedicated_r16_ExtGroup1 只读不分配；Decode_MeasIdleConfigDedicated_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_MeasIdleConfigDedicated_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasIdleConfigDedicated_r16_ExtGroup1(Encoder& enc, const MeasIdleConfigDedicated_r16_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_measReselectionCarrierListNR_r18);
    enc.WriteBit(value.has_measIdleValidityDuration_r18);
    enc.WriteBit(value.has_measReselectionValidityDuration_r18);
    if (value.has_measReselectionCarrierListNR_r18) {
enc.WriteConstrainedLength(value.measReselectionCarrierListNR_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.measReselectionCarrierListNR_r18_count; ++i) {
    Encode_MeasReselectionCarrierNR_r18(enc, value.measReselectionCarrierListNR_r18_items[i]);
}
    }
    if (value.has_measIdleValidityDuration_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.measIdleValidityDuration_r18), 0, 7);
    }
    if (value.has_measReselectionValidityDuration_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.measReselectionValidityDuration_r18), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_MeasIdleConfigDedicated_r16_ExtGroup1(Decoder& dec, MeasIdleConfigDedicated_r16_ExtGroup1& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.measReselectionCarrierListNR_r18_count)) { goto fail; }
if (value.measReselectionCarrierListNR_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.measReselectionCarrierListNR_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.measReselectionCarrierListNR_r18_count > 0u) {
    value.measReselectionCarrierListNR_r18_items = (MeasReselectionCarrierNR_r18*)std::malloc((std::size_t)value.measReselectionCarrierListNR_r18_count * sizeof(MeasReselectionCarrierNR_r18));
    if (value.measReselectionCarrierListNR_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.measReselectionCarrierListNR_r18_items, 0, (std::size_t)value.measReselectionCarrierListNR_r18_count * sizeof(MeasReselectionCarrierNR_r18));
}
for (std::uint32_t i = 0; i < value.measReselectionCarrierListNR_r18_count; ++i) {
    if (Decode_MeasReselectionCarrierNR_r18(dec, value.measReselectionCarrierListNR_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.measIdleValidityDuration_r18 = (MeasurementValidityDuration_r18)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.measReselectionValidityDuration_r18 = (MeasurementValidityDuration_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasIdleConfigDedicated_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasIdleConfigDedicated_r16_ExtGroup1(MeasIdleConfigDedicated_r16_ExtGroup1& value)
{
    if (value.has_measReselectionCarrierListNR_r18) {
        if (value.measReselectionCarrierListNR_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.measReselectionCarrierListNR_r18_count; ++i) {
                Free_MeasReselectionCarrierNR_r18(value.measReselectionCarrierListNR_r18_items[i]);
            }
            std::free(value.measReselectionCarrierListNR_r18_items);
            value.measReselectionCarrierListNR_r18_items = nullptr;
        }
        value.measReselectionCarrierListNR_r18_count = 0;
    }
    if (value.has_measIdleValidityDuration_r18) {
    }
    if (value.has_measReselectionValidityDuration_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ValidityAreaList_r16：ASN.1 ValidityAreaList-r16；源文件第 7533 行；SEQUENCE OF。
// Encode_ValidityAreaList_r16 只读不分配；Decode_ValidityAreaList_r16 可能 malloc（失败时内部已释放并清零）；Free_ValidityAreaList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ValidityAreaList_r16(Encoder& enc, const ValidityAreaList_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_ValidityArea_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_ValidityAreaList_r16(Decoder& dec, ValidityAreaList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (ValidityArea_r16*)std::malloc((std::size_t)value.count * sizeof(ValidityArea_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(ValidityArea_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_ValidityArea_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_ValidityAreaList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ValidityAreaList_r16(ValidityAreaList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_ValidityArea_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasIdleConfigDedicated_r16：ASN.1 MeasIdleConfigDedicated-r16；源文件第 7520 行；SEQUENCE。
// Encode_MeasIdleConfigDedicated_r16 只读不分配；Decode_MeasIdleConfigDedicated_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasIdleConfigDedicated_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasIdleConfigDedicated_r16(Encoder& enc, const MeasIdleConfigDedicated_r16& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_measIdleCarrierListNR_r16);
    enc.WriteBit(value.has_measIdleCarrierListEUTRA_r16);
    enc.WriteBit(value.has_validityAreaList_r16);
    if (value.has_measIdleCarrierListNR_r16) {
enc.WriteConstrainedLength(value.measIdleCarrierListNR_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.measIdleCarrierListNR_r16_count; ++i) {
    Encode_MeasIdleCarrierNR_r16(enc, value.measIdleCarrierListNR_r16_items[i]);
}
    }
    if (value.has_measIdleCarrierListEUTRA_r16) {
enc.WriteConstrainedLength(value.measIdleCarrierListEUTRA_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.measIdleCarrierListEUTRA_r16_count; ++i) {
    Encode_MeasIdleCarrierEUTRA_r16(enc, value.measIdleCarrierListEUTRA_r16_items[i]);
}
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.measIdleDuration_r16), 0, 7);
    if (value.has_validityAreaList_r16) {
        Encode_ValidityAreaList_r16(enc, value.validityAreaList_r16);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_MeasIdleConfigDedicated_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_MeasIdleConfigDedicated_r16(Decoder& dec, MeasIdleConfigDedicated_r16& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.measIdleCarrierListNR_r16_count)) { goto fail; }
if (value.measIdleCarrierListNR_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.measIdleCarrierListNR_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.measIdleCarrierListNR_r16_count > 0u) {
    value.measIdleCarrierListNR_r16_items = (MeasIdleCarrierNR_r16*)std::malloc((std::size_t)value.measIdleCarrierListNR_r16_count * sizeof(MeasIdleCarrierNR_r16));
    if (value.measIdleCarrierListNR_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.measIdleCarrierListNR_r16_items, 0, (std::size_t)value.measIdleCarrierListNR_r16_count * sizeof(MeasIdleCarrierNR_r16));
}
for (std::uint32_t i = 0; i < value.measIdleCarrierListNR_r16_count; ++i) {
    if (Decode_MeasIdleCarrierNR_r16(dec, value.measIdleCarrierListNR_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.measIdleCarrierListEUTRA_r16_count)) { goto fail; }
if (value.measIdleCarrierListEUTRA_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.measIdleCarrierListEUTRA_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.measIdleCarrierListEUTRA_r16_count > 0u) {
    value.measIdleCarrierListEUTRA_r16_items = (MeasIdleCarrierEUTRA_r16*)std::malloc((std::size_t)value.measIdleCarrierListEUTRA_r16_count * sizeof(MeasIdleCarrierEUTRA_r16));
    if (value.measIdleCarrierListEUTRA_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.measIdleCarrierListEUTRA_r16_items, 0, (std::size_t)value.measIdleCarrierListEUTRA_r16_count * sizeof(MeasIdleCarrierEUTRA_r16));
}
for (std::uint32_t i = 0; i < value.measIdleCarrierListEUTRA_r16_count; ++i) {
    if (Decode_MeasIdleCarrierEUTRA_r16(dec, value.measIdleCarrierListEUTRA_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.measIdleDuration_r16 = (MeasIdleConfigDedicated_r16_MeasIdleDuration_r16)tmp_value;
    }
    if (present_2) {
        if (Decode_ValidityAreaList_r16(dec, value.validityAreaList_r16) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_MeasIdleConfigDedicated_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_MeasIdleConfigDedicated_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasIdleConfigDedicated_r16(MeasIdleConfigDedicated_r16& value)
{
    if (value.has_measIdleCarrierListNR_r16) {
        if (value.measIdleCarrierListNR_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.measIdleCarrierListNR_r16_count; ++i) {
                Free_MeasIdleCarrierNR_r16(value.measIdleCarrierListNR_r16_items[i]);
            }
            std::free(value.measIdleCarrierListNR_r16_items);
            value.measIdleCarrierListNR_r16_items = nullptr;
        }
        value.measIdleCarrierListNR_r16_count = 0;
    }
    if (value.has_measIdleCarrierListEUTRA_r16) {
        if (value.measIdleCarrierListEUTRA_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.measIdleCarrierListEUTRA_r16_count; ++i) {
                Free_MeasIdleCarrierEUTRA_r16(value.measIdleCarrierListEUTRA_r16_items[i]);
            }
            std::free(value.measIdleCarrierListEUTRA_r16_items);
            value.measIdleCarrierListEUTRA_r16_items = nullptr;
        }
        value.measIdleCarrierListEUTRA_r16_count = 0;
    }
    if (value.has_validityAreaList_r16) {
        Free_ValidityAreaList_r16(value.validityAreaList_r16);
    }
    if (value.has_extGroup1) {
        Free_MeasIdleConfigDedicated_r16_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_MeasIdleConfigDedicated_r16：ASN.1 SetupRelease<MeasIdleConfigDedicated-r16>；源文件第 1176 行；CHOICE。
// Encode_SetupRelease_MeasIdleConfigDedicated_r16 只读不分配；Decode_SetupRelease_MeasIdleConfigDedicated_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_MeasIdleConfigDedicated_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_MeasIdleConfigDedicated_r16(Encoder& enc, const SetupRelease_MeasIdleConfigDedicated_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_MeasIdleConfigDedicated_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_MeasIdleConfigDedicated_r16_Tag_setup:
        Encode_MeasIdleConfigDedicated_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_MeasIdleConfigDedicated_r16(Decoder& dec, SetupRelease_MeasIdleConfigDedicated_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_MeasIdleConfigDedicated_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_MeasIdleConfigDedicated_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_MeasIdleConfigDedicated_r16_Tag_setup: {
        if (Decode_MeasIdleConfigDedicated_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_MeasIdleConfigDedicated_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_MeasIdleConfigDedicated_r16(SetupRelease_MeasIdleConfigDedicated_r16& value)
{
    switch (value.tag) {
    case SetupRelease_MeasIdleConfigDedicated_r16_Tag_release:
        break;
    case SetupRelease_MeasIdleConfigDedicated_r16_Tag_setup:
        Free_MeasIdleConfigDedicated_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCRelease_v1610_IEs：ASN.1 RRCRelease-v1610-IEs；源文件第 1174 行；SEQUENCE。
// Encode_RRCRelease_v1610_IEs 只读不分配；Decode_RRCRelease_v1610_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCRelease_v1610_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCRelease_v1610_IEs(Encoder& enc, const RRCRelease_v1610_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_voiceFallbackIndication_r16);
    enc.WriteBit(value.has_measIdleConfig_r16);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_voiceFallbackIndication_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.voiceFallbackIndication_r16), 0, 0);
    }
    if (value.has_measIdleConfig_r16) {
        Encode_SetupRelease_MeasIdleConfigDedicated_r16(enc, value.measIdleConfig_r16);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCRelease_v1650_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCRelease_v1610_IEs(Decoder& dec, RRCRelease_v1610_IEs& value)
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
        value.voiceFallbackIndication_r16 = (RRCRelease_v1610_IEs_VoiceFallbackIndication_r16)0;
    }
    if (present_1) {
        if (Decode_SetupRelease_MeasIdleConfigDedicated_r16(dec, value.measIdleConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_RRCRelease_v1650_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCRelease_v1610_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCRelease_v1610_IEs(RRCRelease_v1610_IEs& value)
{
    if (value.has_voiceFallbackIndication_r16) {
    }
    if (value.has_measIdleConfig_r16) {
        Free_SetupRelease_MeasIdleConfigDedicated_r16(value.measIdleConfig_r16);
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCRelease_v1650_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCRelease_v1540_IEs：ASN.1 RRCRelease-v1540-IEs；源文件第 1169 行；SEQUENCE。
// Encode_RRCRelease_v1540_IEs 只读不分配；Decode_RRCRelease_v1540_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCRelease_v1540_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCRelease_v1540_IEs(Encoder& enc, const RRCRelease_v1540_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_waitTime);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_waitTime) {
        enc.WriteConstrainedInteger((std::int64_t)(value.waitTime), 1, 16);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCRelease_v1610_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCRelease_v1540_IEs(Decoder& dec, RRCRelease_v1540_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.waitTime = (RejectWaitTime)tmp_value;
    }
    if (present_1) {
        if (Decode_RRCRelease_v1610_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCRelease_v1540_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCRelease_v1540_IEs(RRCRelease_v1540_IEs& value)
{
    if (value.has_waitTime) {
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCRelease_v1610_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RedirectedCarrierInfo_EUTRA：ASN.1 RedirectedCarrierInfo-EUTRA；源文件第 1196 行；SEQUENCE。
// Encode_RedirectedCarrierInfo_EUTRA 只读不分配；Decode_RedirectedCarrierInfo_EUTRA 可能 malloc（失败时内部已释放并清零）；Free_RedirectedCarrierInfo_EUTRA 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RedirectedCarrierInfo_EUTRA(Encoder& enc, const RedirectedCarrierInfo_EUTRA& value)
{
    (void)value;
    enc.WriteBit(value.has_cnType);
    enc.WriteConstrainedInteger((std::int64_t)(value.eutraFrequency), 0, 262143);
    if (value.has_cnType) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cnType), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_RedirectedCarrierInfo_EUTRA(Decoder& dec, RedirectedCarrierInfo_EUTRA& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 262143, tmp_value)) { goto fail; }
        value.eutraFrequency = (ARFCN_ValueEUTRA)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.cnType = (RedirectedCarrierInfo_EUTRA_CnType)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RedirectedCarrierInfo_EUTRA(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RedirectedCarrierInfo_EUTRA(RedirectedCarrierInfo_EUTRA& value)
{
    if (value.has_cnType) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CarrierInfoNR：ASN.1 CarrierInfoNR；源文件第 1201 行；SEQUENCE。
// Encode_CarrierInfoNR 只读不分配；Decode_CarrierInfoNR 可能 malloc（失败时内部已释放并清零）；Free_CarrierInfoNR 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CarrierInfoNR(Encoder& enc, const CarrierInfoNR& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_smtc);
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierFreq), 0, 3279165);
    enc.WriteConstrainedInteger((std::int64_t)(value.ssbSubcarrierSpacing), 0, 7);
    if (value.has_smtc) {
        Encode_SSB_MTC(enc, value.smtc);
    }
    return enc.Error();
}

ErrorCode Decode_CarrierInfoNR(Decoder& dec, CarrierInfoNR& value)
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
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.carrierFreq = (ARFCN_ValueNR)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.ssbSubcarrierSpacing = (SubcarrierSpacing)tmp_value;
    }
    if (present_0) {
        if (Decode_SSB_MTC(dec, value.smtc) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CarrierInfoNR(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CarrierInfoNR(CarrierInfoNR& value)
{
    if (value.has_smtc) {
        Free_SSB_MTC(value.smtc);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RedirectedCarrierInfo：ASN.1 RedirectedCarrierInfo；源文件第 1190 行；CHOICE。
// Encode_RedirectedCarrierInfo 只读不分配；Decode_RedirectedCarrierInfo 可能 malloc（失败时内部已释放并清零）；Free_RedirectedCarrierInfo 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RedirectedCarrierInfo(Encoder& enc, const RedirectedCarrierInfo& value)
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
    case RedirectedCarrierInfo_Tag_nr:
        Encode_CarrierInfoNR(enc, value.u.nr);
        break;
    case RedirectedCarrierInfo_Tag_eutra:
        Encode_RedirectedCarrierInfo_EUTRA(enc, value.u.eutra);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RedirectedCarrierInfo(Decoder& dec, RedirectedCarrierInfo& value)
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
        value.tag = (RedirectedCarrierInfo_Tag)(2 + extension_index);
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
    value.tag = (RedirectedCarrierInfo_Tag)root_index;
    switch (value.tag) {
    case RedirectedCarrierInfo_Tag_nr: {
        if (Decode_CarrierInfoNR(dec, value.u.nr) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RedirectedCarrierInfo_Tag_eutra: {
        if (Decode_RedirectedCarrierInfo_EUTRA(dec, value.u.eutra) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RedirectedCarrierInfo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RedirectedCarrierInfo(RedirectedCarrierInfo& value)
{
    switch (value.tag) {
    case RedirectedCarrierInfo_Tag_nr:
        Free_CarrierInfoNR(value.u.nr);
        break;
    case RedirectedCarrierInfo_Tag_eutra:
        Free_RedirectedCarrierInfo_EUTRA(value.u.eutra);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SDT_CG_Config_r17：ASN.1 SetupRelease<SDT-CG-Config-r17>；源文件第 1293 行；CHOICE。
// Encode_SetupRelease_SDT_CG_Config_r17 只读不分配；Decode_SetupRelease_SDT_CG_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SDT_CG_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SDT_CG_Config_r17(Encoder& enc, const SetupRelease_SDT_CG_Config_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SDT_CG_Config_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_SDT_CG_Config_r17_Tag_setup:
        if (value.u.setup == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_SDT_MAC_PHY_CG_Config_r17(enc, *value.u.setup);
        }
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SDT_CG_Config_r17(Decoder& dec, SetupRelease_SDT_CG_Config_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SDT_CG_Config_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SDT_CG_Config_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SDT_CG_Config_r17_Tag_setup: {
        if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
            dec.Fail(ErrorCode_ContainingDepthExceeded); goto fail;
        }
        std::vector<std::uint8_t> containing_bytes;
        if (!dec.ReadOpenType(containing_bytes)) { goto fail; }
        Decoder containing_sub(containing_bytes.data(), containing_bytes.size());
        containing_sub.SetContainingDepth(dec.ContainingDepth() + 1);
        SDT_MAC_PHY_CG_Config_r17* containing_value = (SDT_MAC_PHY_CG_Config_r17*)std::malloc(sizeof(SDT_MAC_PHY_CG_Config_r17));
        if (containing_value == nullptr) {
            dec.Fail(ErrorCode_OutOfMemory); goto fail;
        }
        std::memset(containing_value, 0, sizeof(*containing_value));
        if (Decode_SDT_MAC_PHY_CG_Config_r17(containing_sub, *containing_value) != ErrorCode_Ok) {
            Free_SDT_MAC_PHY_CG_Config_r17(*containing_value);
            std::free(containing_value);
            dec.Fail(containing_sub.Error()); goto fail;
        }
        if (!containing_sub.CheckOpenTypeEnd()) {
            Free_SDT_MAC_PHY_CG_Config_r17(*containing_value);
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
    Free_SetupRelease_SDT_CG_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SDT_CG_Config_r17(SetupRelease_SDT_CG_Config_r17& value)
{
    switch (value.tag) {
    case SetupRelease_SDT_CG_Config_r17_Tag_release:
        break;
    case SetupRelease_SDT_CG_Config_r17_Tag_setup:
        if (value.u.setup != nullptr) {
            Free_SDT_MAC_PHY_CG_Config_r17(*value.u.setup);
            std::free(value.u.setup);
        }
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SDT_Config_r17：ASN.1 SDT-Config-r17；源文件第 1290 行；SEQUENCE。
// Encode_SDT_Config_r17 只读不分配；Decode_SDT_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_SDT_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SDT_Config_r17(Encoder& enc, const SDT_Config_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_sdt_DRB_List_r17);
    enc.WriteBit(value.has_sdt_SRB2_Indication_r17);
    enc.WriteBit(value.has_sdt_MAC_PHY_CG_Config_r17);
    enc.WriteBit(value.has_sdt_DRB_ContinueROHC_r17);
    if (value.has_sdt_DRB_List_r17) {
enc.WriteConstrainedLength(value.sdt_DRB_List_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sdt_DRB_List_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sdt_DRB_List_r17_items[i]), 1, 32);
}
    }
    if (value.has_sdt_SRB2_Indication_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sdt_SRB2_Indication_r17), 0, 0);
    }
    if (value.has_sdt_MAC_PHY_CG_Config_r17) {
        Encode_SetupRelease_SDT_CG_Config_r17(enc, value.sdt_MAC_PHY_CG_Config_r17);
    }
    if (value.has_sdt_DRB_ContinueROHC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sdt_DRB_ContinueROHC_r17), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_SDT_Config_r17(Decoder& dec, SDT_Config_r17& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.sdt_DRB_List_r17_count)) { goto fail; }
if (value.sdt_DRB_List_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sdt_DRB_List_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sdt_DRB_List_r17_count > 0u) {
    value.sdt_DRB_List_r17_items = (DRB_Identity*)std::malloc((std::size_t)value.sdt_DRB_List_r17_count * sizeof(DRB_Identity));
    if (value.sdt_DRB_List_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sdt_DRB_List_r17_items, 0, (std::size_t)value.sdt_DRB_List_r17_count * sizeof(DRB_Identity));
}
for (std::uint32_t i = 0; i < value.sdt_DRB_List_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
    value.sdt_DRB_List_r17_items[i] = (DRB_Identity)tmp_value;
}
    }
    if (present_1) {
        value.sdt_SRB2_Indication_r17 = (SDT_Config_r17_Sdt_SRB2_Indication_r17)0;
    }
    if (present_2) {
        if (Decode_SetupRelease_SDT_CG_Config_r17(dec, value.sdt_MAC_PHY_CG_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sdt_DRB_ContinueROHC_r17 = (SDT_Config_r17_Sdt_DRB_ContinueROHC_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SDT_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SDT_Config_r17(SDT_Config_r17& value)
{
    if (value.has_sdt_DRB_List_r17) {
        if (value.sdt_DRB_List_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sdt_DRB_List_r17_count; ++i) {
            }
            std::free(value.sdt_DRB_List_r17_items);
            value.sdt_DRB_List_r17_items = nullptr;
        }
        value.sdt_DRB_List_r17_count = 0;
    }
    if (value.has_sdt_SRB2_Indication_r17) {
    }
    if (value.has_sdt_MAC_PHY_CG_Config_r17) {
        Free_SetupRelease_SDT_CG_Config_r17(value.sdt_MAC_PHY_CG_Config_r17);
    }
    if (value.has_sdt_DRB_ContinueROHC_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SDT_Config_r17：ASN.1 SetupRelease<SDT-Config-r17>；源文件第 1218 行；CHOICE。
// Encode_SetupRelease_SDT_Config_r17 只读不分配；Decode_SetupRelease_SDT_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SDT_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SDT_Config_r17(Encoder& enc, const SetupRelease_SDT_Config_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SDT_Config_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_SDT_Config_r17_Tag_setup:
        Encode_SDT_Config_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SDT_Config_r17(Decoder& dec, SetupRelease_SDT_Config_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SDT_Config_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SDT_Config_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SDT_Config_r17_Tag_setup: {
        if (Decode_SDT_Config_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SDT_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SDT_Config_r17(SetupRelease_SDT_Config_r17& value)
{
    switch (value.tag) {
    case SetupRelease_SDT_Config_r17_Tag_release:
        break;
    case SetupRelease_SDT_Config_r17_Tag_setup:
        Free_SDT_Config_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SRS_PosRRC_Inactive_r17：ASN.1 SetupRelease<SRS-PosRRC-Inactive-r17>；源文件第 1219 行；CHOICE。
// Encode_SetupRelease_SRS_PosRRC_Inactive_r17 只读不分配；Decode_SetupRelease_SRS_PosRRC_Inactive_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SRS_PosRRC_Inactive_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SRS_PosRRC_Inactive_r17(Encoder& enc, const SetupRelease_SRS_PosRRC_Inactive_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SRS_PosRRC_Inactive_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_SRS_PosRRC_Inactive_r17_Tag_setup:
        if (value.u.setup == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_SRS_PosRRC_InactiveConfig_r17(enc, *value.u.setup);
        }
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SRS_PosRRC_Inactive_r17(Decoder& dec, SetupRelease_SRS_PosRRC_Inactive_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SRS_PosRRC_Inactive_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SRS_PosRRC_Inactive_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SRS_PosRRC_Inactive_r17_Tag_setup: {
        if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
            dec.Fail(ErrorCode_ContainingDepthExceeded); goto fail;
        }
        std::vector<std::uint8_t> containing_bytes;
        if (!dec.ReadOpenType(containing_bytes)) { goto fail; }
        Decoder containing_sub(containing_bytes.data(), containing_bytes.size());
        containing_sub.SetContainingDepth(dec.ContainingDepth() + 1);
        SRS_PosRRC_InactiveConfig_r17* containing_value = (SRS_PosRRC_InactiveConfig_r17*)std::malloc(sizeof(SRS_PosRRC_InactiveConfig_r17));
        if (containing_value == nullptr) {
            dec.Fail(ErrorCode_OutOfMemory); goto fail;
        }
        std::memset(containing_value, 0, sizeof(*containing_value));
        if (Decode_SRS_PosRRC_InactiveConfig_r17(containing_sub, *containing_value) != ErrorCode_Ok) {
            Free_SRS_PosRRC_InactiveConfig_r17(*containing_value);
            std::free(containing_value);
            dec.Fail(containing_sub.Error()); goto fail;
        }
        if (!containing_sub.CheckOpenTypeEnd()) {
            Free_SRS_PosRRC_InactiveConfig_r17(*containing_value);
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
    Free_SetupRelease_SRS_PosRRC_Inactive_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SRS_PosRRC_Inactive_r17(SetupRelease_SRS_PosRRC_Inactive_r17& value)
{
    switch (value.tag) {
    case SetupRelease_SRS_PosRRC_Inactive_r17_Tag_release:
        break;
    case SetupRelease_SRS_PosRRC_Inactive_r17_Tag_setup:
        if (value.u.setup != nullptr) {
            Free_SRS_PosRRC_InactiveConfig_r17(*value.u.setup);
            std::free(value.u.setup);
        }
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SuspendConfig_ExtGroup1：ASN.1 SuspendConfig_ExtGroup1；源文件第 1216 行；扩展添加组 [[ ]]。
// Encode_SuspendConfig_ExtGroup1 只读不分配；Decode_SuspendConfig_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SuspendConfig_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SuspendConfig_ExtGroup1(Encoder& enc, const SuspendConfig_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_UEIdentityRemote_r17);
    enc.WriteBit(value.has_sdt_Config_r17);
    enc.WriteBit(value.has_srs_PosRRC_Inactive_r17);
    enc.WriteBit(value.has_ran_ExtendedPagingCycle_r17);
    if (value.has_sl_UEIdentityRemote_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_UEIdentityRemote_r17), 0, 65535);
    }
    if (value.has_sdt_Config_r17) {
        Encode_SetupRelease_SDT_Config_r17(enc, value.sdt_Config_r17);
    }
    if (value.has_srs_PosRRC_Inactive_r17) {
        Encode_SetupRelease_SRS_PosRRC_Inactive_r17(enc, value.srs_PosRRC_Inactive_r17);
    }
    if (value.has_ran_ExtendedPagingCycle_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ran_ExtendedPagingCycle_r17), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_SuspendConfig_ExtGroup1(Decoder& dec, SuspendConfig_ExtGroup1& value)
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
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.sl_UEIdentityRemote_r17 = (RNTI_Value)tmp_value;
    }
    if (present_1) {
        if (Decode_SetupRelease_SDT_Config_r17(dec, value.sdt_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SetupRelease_SRS_PosRRC_Inactive_r17(dec, value.srs_PosRRC_Inactive_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.ran_ExtendedPagingCycle_r17 = (ExtendedPagingCycle_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SuspendConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SuspendConfig_ExtGroup1(SuspendConfig_ExtGroup1& value)
{
    if (value.has_sl_UEIdentityRemote_r17) {
    }
    if (value.has_sdt_Config_r17) {
        Free_SetupRelease_SDT_Config_r17(value.sdt_Config_r17);
    }
    if (value.has_srs_PosRRC_Inactive_r17) {
        Free_SetupRelease_SRS_PosRRC_Inactive_r17(value.srs_PosRRC_Inactive_r17);
    }
    if (value.has_ran_ExtendedPagingCycle_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NonCellDefiningSSB_r17：ASN.1 NonCellDefiningSSB-r17；源文件第 8756 行；SEQUENCE。
// Encode_NonCellDefiningSSB_r17 只读不分配；Decode_NonCellDefiningSSB_r17 可能 malloc（失败时内部已释放并清零）；Free_NonCellDefiningSSB_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NonCellDefiningSSB_r17(Encoder& enc, const NonCellDefiningSSB_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_ssb_Periodicity_r17);
    enc.WriteBit(value.has_ssb_TimeOffset_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.absoluteFrequencySSB_r17), 0, 3279165);
    if (value.has_ssb_Periodicity_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_Periodicity_r17), 0, 7);
    }
    if (value.has_ssb_TimeOffset_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_TimeOffset_r17), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_NonCellDefiningSSB_r17(Decoder& dec, NonCellDefiningSSB_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.absoluteFrequencySSB_r17 = (ARFCN_ValueNR)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.ssb_Periodicity_r17 = (NonCellDefiningSSB_r17_Ssb_Periodicity_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.ssb_TimeOffset_r17 = (NonCellDefiningSSB_r17_Ssb_TimeOffset_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NonCellDefiningSSB_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NonCellDefiningSSB_r17(NonCellDefiningSSB_r17& value)
{
    if (value.has_ssb_Periodicity_r17) {
    }
    if (value.has_ssb_TimeOffset_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_NonCellDefiningSSB_r17：ASN.1 SetupRelease<NonCellDefiningSSB-r17>；源文件第 1223 行；CHOICE。
// Encode_SetupRelease_NonCellDefiningSSB_r17 只读不分配；Decode_SetupRelease_NonCellDefiningSSB_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_NonCellDefiningSSB_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_NonCellDefiningSSB_r17(Encoder& enc, const SetupRelease_NonCellDefiningSSB_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_NonCellDefiningSSB_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_NonCellDefiningSSB_r17_Tag_setup:
        Encode_NonCellDefiningSSB_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_NonCellDefiningSSB_r17(Decoder& dec, SetupRelease_NonCellDefiningSSB_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_NonCellDefiningSSB_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_NonCellDefiningSSB_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_NonCellDefiningSSB_r17_Tag_setup: {
        if (Decode_NonCellDefiningSSB_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_NonCellDefiningSSB_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_NonCellDefiningSSB_r17(SetupRelease_NonCellDefiningSSB_r17& value)
{
    switch (value.tag) {
    case SetupRelease_NonCellDefiningSSB_r17_Tag_release:
        break;
    case SetupRelease_NonCellDefiningSSB_r17_Tag_setup:
        Free_NonCellDefiningSSB_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SuspendConfig_ExtGroup2：ASN.1 SuspendConfig_ExtGroup2；源文件第 1222 行；扩展添加组 [[ ]]。
// Encode_SuspendConfig_ExtGroup2 只读不分配；Decode_SuspendConfig_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_SuspendConfig_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SuspendConfig_ExtGroup2(Encoder& enc, const SuspendConfig_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_ncd_SSB_RedCapInitialBWP_SDT_r17);
    if (value.has_ncd_SSB_RedCapInitialBWP_SDT_r17) {
        Encode_SetupRelease_NonCellDefiningSSB_r17(enc, value.ncd_SSB_RedCapInitialBWP_SDT_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SuspendConfig_ExtGroup2(Decoder& dec, SuspendConfig_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_NonCellDefiningSSB_r17(dec, value.ncd_SSB_RedCapInitialBWP_SDT_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SuspendConfig_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SuspendConfig_ExtGroup2(SuspendConfig_ExtGroup2& value)
{
    if (value.has_ncd_SSB_RedCapInitialBWP_SDT_r17) {
        Free_SetupRelease_NonCellDefiningSSB_r17(value.ncd_SSB_RedCapInitialBWP_SDT_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ExtendedPagingCycleConfig_r18：ASN.1 ExtendedPagingCycleConfig-r18；源文件第 1401 行；SEQUENCE。
// Encode_ExtendedPagingCycleConfig_r18 只读不分配；Decode_ExtendedPagingCycleConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_ExtendedPagingCycleConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ExtendedPagingCycleConfig_r18(Encoder& enc, const ExtendedPagingCycleConfig_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.extendedPagingCycle_r18), 0, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.pagingPTWLength_r18), 0, 31);
    return enc.Error();
}

ErrorCode Decode_ExtendedPagingCycleConfig_r18(Decoder& dec, ExtendedPagingCycleConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.extendedPagingCycle_r18 = (ExtendedPagingCycleConfig_r18_ExtendedPagingCycle_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.pagingPTWLength_r18 = (ExtendedPagingCycleConfig_r18_PagingPTWLength_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ExtendedPagingCycleConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ExtendedPagingCycleConfig_r18(ExtendedPagingCycleConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosRRC_AggBW_InactiveConfigList_r18：ASN.1 SRS-PosRRC-AggBW-InactiveConfigList-r18；源文件第 1397 行；SEQUENCE OF。
// Encode_SRS_PosRRC_AggBW_InactiveConfigList_r18 只读不分配；Decode_SRS_PosRRC_AggBW_InactiveConfigList_r18 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosRRC_AggBW_InactiveConfigList_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosRRC_AggBW_InactiveConfigList_r18(Encoder& enc, const SRS_PosRRC_AggBW_InactiveConfigList_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 2u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SRS_PosResourceSetLinkedForAggBW_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_PosRRC_AggBW_InactiveConfigList_r18(Decoder& dec, SRS_PosRRC_AggBW_InactiveConfigList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 2u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 2u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SRS_PosResourceSetLinkedForAggBW_r18*)std::malloc((std::size_t)value.count * sizeof(SRS_PosResourceSetLinkedForAggBW_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SRS_PosResourceSetLinkedForAggBW_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SRS_PosResourceSetLinkedForAggBW_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosRRC_AggBW_InactiveConfigList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosRRC_AggBW_InactiveConfigList_r18(SRS_PosRRC_AggBW_InactiveConfigList_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SRS_PosResourceSetLinkedForAggBW_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18：ASN.1 SetupRelease<SRS-PosRRC-AggBW-InactiveConfigList-r18>；源文件第 1374 行；CHOICE。
// Encode_SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18 只读不分配；Decode_SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18(Encoder& enc, const SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18_Tag_setup:
        Encode_SRS_PosRRC_AggBW_InactiveConfigList_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18(Decoder& dec, SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18_Tag_setup: {
        if (Decode_SRS_PosRRC_AggBW_InactiveConfigList_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18(SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18& value)
{
    switch (value.tag) {
    case SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18_Tag_release:
        break;
    case SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18_Tag_setup:
        Free_SRS_PosRRC_AggBW_InactiveConfigList_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosConfig_r17：ASN.1 SRS-PosConfig-r17；源文件第 1366 行；SEQUENCE。
// Encode_SRS_PosConfig_r17 只读不分配；Decode_SRS_PosConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosConfig_r17(Encoder& enc, const SRS_PosConfig_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_srs_PosResourceSetToReleaseList_r17);
    enc.WriteBit(value.has_srs_PosResourceSetToAddModList_r17);
    enc.WriteBit(value.has_srs_PosResourceToReleaseList_r17);
    enc.WriteBit(value.has_srs_PosResourceToAddModList_r17);
    if (value.has_srs_PosResourceSetToReleaseList_r17) {
enc.WriteConstrainedLength(value.srs_PosResourceSetToReleaseList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.srs_PosResourceSetToReleaseList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.srs_PosResourceSetToReleaseList_r17_items[i]), 0, 15);
}
    }
    if (value.has_srs_PosResourceSetToAddModList_r17) {
enc.WriteConstrainedLength(value.srs_PosResourceSetToAddModList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.srs_PosResourceSetToAddModList_r17_count; ++i) {
    Encode_SRS_PosResourceSet_r16(enc, value.srs_PosResourceSetToAddModList_r17_items[i]);
}
    }
    if (value.has_srs_PosResourceToReleaseList_r17) {
enc.WriteConstrainedLength(value.srs_PosResourceToReleaseList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.srs_PosResourceToReleaseList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.srs_PosResourceToReleaseList_r17_items[i]), 0, 63);
}
    }
    if (value.has_srs_PosResourceToAddModList_r17) {
enc.WriteConstrainedLength(value.srs_PosResourceToAddModList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.srs_PosResourceToAddModList_r17_count; ++i) {
    Encode_SRS_PosResource_r16(enc, value.srs_PosResourceToAddModList_r17_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_SRS_PosConfig_r17(Decoder& dec, SRS_PosConfig_r17& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.srs_PosResourceSetToReleaseList_r17_count)) { goto fail; }
if (value.srs_PosResourceSetToReleaseList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.srs_PosResourceSetToReleaseList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.srs_PosResourceSetToReleaseList_r17_count > 0u) {
    value.srs_PosResourceSetToReleaseList_r17_items = (SRS_PosResourceSetId_r16*)std::malloc((std::size_t)value.srs_PosResourceSetToReleaseList_r17_count * sizeof(SRS_PosResourceSetId_r16));
    if (value.srs_PosResourceSetToReleaseList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.srs_PosResourceSetToReleaseList_r17_items, 0, (std::size_t)value.srs_PosResourceSetToReleaseList_r17_count * sizeof(SRS_PosResourceSetId_r16));
}
for (std::uint32_t i = 0; i < value.srs_PosResourceSetToReleaseList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
    value.srs_PosResourceSetToReleaseList_r17_items[i] = (SRS_PosResourceSetId_r16)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.srs_PosResourceSetToAddModList_r17_count)) { goto fail; }
if (value.srs_PosResourceSetToAddModList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.srs_PosResourceSetToAddModList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.srs_PosResourceSetToAddModList_r17_count > 0u) {
    value.srs_PosResourceSetToAddModList_r17_items = (SRS_PosResourceSet_r16*)std::malloc((std::size_t)value.srs_PosResourceSetToAddModList_r17_count * sizeof(SRS_PosResourceSet_r16));
    if (value.srs_PosResourceSetToAddModList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.srs_PosResourceSetToAddModList_r17_items, 0, (std::size_t)value.srs_PosResourceSetToAddModList_r17_count * sizeof(SRS_PosResourceSet_r16));
}
for (std::uint32_t i = 0; i < value.srs_PosResourceSetToAddModList_r17_count; ++i) {
    if (Decode_SRS_PosResourceSet_r16(dec, value.srs_PosResourceSetToAddModList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.srs_PosResourceToReleaseList_r17_count)) { goto fail; }
if (value.srs_PosResourceToReleaseList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.srs_PosResourceToReleaseList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.srs_PosResourceToReleaseList_r17_count > 0u) {
    value.srs_PosResourceToReleaseList_r17_items = (SRS_PosResourceId_r16*)std::malloc((std::size_t)value.srs_PosResourceToReleaseList_r17_count * sizeof(SRS_PosResourceId_r16));
    if (value.srs_PosResourceToReleaseList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.srs_PosResourceToReleaseList_r17_items, 0, (std::size_t)value.srs_PosResourceToReleaseList_r17_count * sizeof(SRS_PosResourceId_r16));
}
for (std::uint32_t i = 0; i < value.srs_PosResourceToReleaseList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.srs_PosResourceToReleaseList_r17_items[i] = (SRS_PosResourceId_r16)tmp_value;
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.srs_PosResourceToAddModList_r17_count)) { goto fail; }
if (value.srs_PosResourceToAddModList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.srs_PosResourceToAddModList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.srs_PosResourceToAddModList_r17_count > 0u) {
    value.srs_PosResourceToAddModList_r17_items = (SRS_PosResource_r16*)std::malloc((std::size_t)value.srs_PosResourceToAddModList_r17_count * sizeof(SRS_PosResource_r16));
    if (value.srs_PosResourceToAddModList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.srs_PosResourceToAddModList_r17_items, 0, (std::size_t)value.srs_PosResourceToAddModList_r17_count * sizeof(SRS_PosResource_r16));
}
for (std::uint32_t i = 0; i < value.srs_PosResourceToAddModList_r17_count; ++i) {
    if (Decode_SRS_PosResource_r16(dec, value.srs_PosResourceToAddModList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosConfig_r17(SRS_PosConfig_r17& value)
{
    if (value.has_srs_PosResourceSetToReleaseList_r17) {
        if (value.srs_PosResourceSetToReleaseList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.srs_PosResourceSetToReleaseList_r17_count; ++i) {
            }
            std::free(value.srs_PosResourceSetToReleaseList_r17_items);
            value.srs_PosResourceSetToReleaseList_r17_items = nullptr;
        }
        value.srs_PosResourceSetToReleaseList_r17_count = 0;
    }
    if (value.has_srs_PosResourceSetToAddModList_r17) {
        if (value.srs_PosResourceSetToAddModList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.srs_PosResourceSetToAddModList_r17_count; ++i) {
                Free_SRS_PosResourceSet_r16(value.srs_PosResourceSetToAddModList_r17_items[i]);
            }
            std::free(value.srs_PosResourceSetToAddModList_r17_items);
            value.srs_PosResourceSetToAddModList_r17_items = nullptr;
        }
        value.srs_PosResourceSetToAddModList_r17_count = 0;
    }
    if (value.has_srs_PosResourceToReleaseList_r17) {
        if (value.srs_PosResourceToReleaseList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.srs_PosResourceToReleaseList_r17_count; ++i) {
            }
            std::free(value.srs_PosResourceToReleaseList_r17_items);
            value.srs_PosResourceToReleaseList_r17_items = nullptr;
        }
        value.srs_PosResourceToReleaseList_r17_count = 0;
    }
    if (value.has_srs_PosResourceToAddModList_r17) {
        if (value.srs_PosResourceToAddModList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.srs_PosResourceToAddModList_r17_count; ++i) {
                Free_SRS_PosResource_r16(value.srs_PosResourceToAddModList_r17_items[i]);
            }
            std::free(value.srs_PosResourceToAddModList_r17_items);
            value.srs_PosResourceToAddModList_r17_items = nullptr;
        }
        value.srs_PosResourceToAddModList_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BWP：ASN.1 BWP；源文件第 4507 行；SEQUENCE。
// Encode_BWP 只读不分配；Decode_BWP 可能 malloc（失败时内部已释放并清零）；Free_BWP 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BWP(Encoder& enc, const BWP& value)
{
    (void)value;
    enc.WriteBit(value.has_cyclicPrefix);
    enc.WriteConstrainedInteger((std::int64_t)(value.locationAndBandwidth), 0, 37949);
    enc.WriteConstrainedInteger((std::int64_t)(value.subcarrierSpacing), 0, 7);
    if (value.has_cyclicPrefix) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cyclicPrefix), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BWP(Decoder& dec, BWP& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 37949, tmp_value)) { goto fail; }
        value.locationAndBandwidth = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.subcarrierSpacing = (SubcarrierSpacing)tmp_value;
    }
    if (present_0) {
        value.cyclicPrefix = (BWP_CyclicPrefix)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BWP(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BWP(BWP& value)
{
    if (value.has_cyclicPrefix) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PeriodicityAndOffset_r16：ASN.1 SRS-PeriodicityAndOffset-r16；源文件第 13406 行；CHOICE。
// Encode_SRS_PeriodicityAndOffset_r16 只读不分配；Decode_SRS_PeriodicityAndOffset_r16 可能 malloc（失败时内部已释放并清零）；Free_SRS_PeriodicityAndOffset_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PeriodicityAndOffset_r16(Encoder& enc, const SRS_PeriodicityAndOffset_r16& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 21) {
        if (choice_index >= 21) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 21));
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
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 20);
    switch (value.tag) {
    case SRS_PeriodicityAndOffset_r16_Tag_sl1:
        (void)0;
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl2:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl2), 0, 1);
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl4:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl4), 0, 3);
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl5:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl5), 0, 4);
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl8:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl8), 0, 7);
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl10:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl10), 0, 9);
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl16), 0, 15);
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl20:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl20), 0, 19);
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl32:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl32), 0, 31);
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl40:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl40), 0, 39);
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl64:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl64), 0, 63);
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl80:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl80), 0, 79);
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl160:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl160), 0, 159);
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl320:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl320), 0, 319);
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl640:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl640), 0, 639);
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl1280:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl1280), 0, 1279);
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl2560:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl2560), 0, 2559);
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl5120:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl5120), 0, 5119);
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl10240:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl10240), 0, 10239);
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl40960:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl40960), 0, 40959);
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl81920:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl81920), 0, 81919);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_PeriodicityAndOffset_r16(Decoder& dec, SRS_PeriodicityAndOffset_r16& value)
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
        value.tag = (SRS_PeriodicityAndOffset_r16_Tag)(21 + extension_index);
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
    if (!dec.ReadConstrainedInteger(0, 20, root_index)) {
        goto fail;
    }
    value.tag = (SRS_PeriodicityAndOffset_r16_Tag)root_index;
    switch (value.tag) {
    case SRS_PeriodicityAndOffset_r16_Tag_sl1: {
        (void)0;
        break;
    }
    case SRS_PeriodicityAndOffset_r16_Tag_sl2: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.u.sl2 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_r16_Tag_sl4: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.sl4 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_r16_Tag_sl5: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.u.sl5 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_r16_Tag_sl8: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.u.sl8 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_r16_Tag_sl10: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.u.sl10 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_r16_Tag_sl16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.sl16 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_r16_Tag_sl20: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 19, tmp_value)) { goto fail; }
        value.u.sl20 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_r16_Tag_sl32: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.sl32 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_r16_Tag_sl40: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.sl40 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_r16_Tag_sl64: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.sl64 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_r16_Tag_sl80: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.sl80 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_r16_Tag_sl160: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.u.sl160 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_r16_Tag_sl320: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.u.sl320 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_r16_Tag_sl640: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.u.sl640 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_r16_Tag_sl1280: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1279, tmp_value)) { goto fail; }
        value.u.sl1280 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_r16_Tag_sl2560: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2559, tmp_value)) { goto fail; }
        value.u.sl2560 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_r16_Tag_sl5120: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5119, tmp_value)) { goto fail; }
        value.u.sl5120 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_r16_Tag_sl10240: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10239, tmp_value)) { goto fail; }
        value.u.sl10240 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_r16_Tag_sl40960: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 40959, tmp_value)) { goto fail; }
        value.u.sl40960 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_r16_Tag_sl81920: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 81919, tmp_value)) { goto fail; }
        value.u.sl81920 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PeriodicityAndOffset_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PeriodicityAndOffset_r16(SRS_PeriodicityAndOffset_r16& value)
{
    switch (value.tag) {
    case SRS_PeriodicityAndOffset_r16_Tag_sl1:
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl2:
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl4:
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl5:
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl8:
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl10:
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl16:
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl20:
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl32:
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl40:
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl64:
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl80:
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl160:
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl320:
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl640:
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl1280:
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl2560:
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl5120:
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl10240:
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl40960:
        break;
    case SRS_PeriodicityAndOffset_r16_Tag_sl81920:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PeriodicityAndOffsetExt_r16：ASN.1 SRS-PeriodicityAndOffsetExt-r16；源文件第 13431 行；CHOICE。
// Encode_SRS_PeriodicityAndOffsetExt_r16 只读不分配；Decode_SRS_PeriodicityAndOffsetExt_r16 可能 malloc（失败时内部已释放并清零）；Free_SRS_PeriodicityAndOffsetExt_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PeriodicityAndOffsetExt_r16(Encoder& enc, const SRS_PeriodicityAndOffsetExt_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 3);
    switch (value.tag) {
    case SRS_PeriodicityAndOffsetExt_r16_Tag_sl128:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl128), 0, 127);
        break;
    case SRS_PeriodicityAndOffsetExt_r16_Tag_sl256:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl256), 0, 255);
        break;
    case SRS_PeriodicityAndOffsetExt_r16_Tag_sl512:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl512), 0, 511);
        break;
    case SRS_PeriodicityAndOffsetExt_r16_Tag_sl20480:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl20480), 0, 20479);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_PeriodicityAndOffsetExt_r16(Decoder& dec, SRS_PeriodicityAndOffsetExt_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 3, root_index)) {
        goto fail;
    }
    value.tag = (SRS_PeriodicityAndOffsetExt_r16_Tag)root_index;
    switch (value.tag) {
    case SRS_PeriodicityAndOffsetExt_r16_Tag_sl128: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.u.sl128 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffsetExt_r16_Tag_sl256: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
        value.u.sl256 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffsetExt_r16_Tag_sl512: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
        value.u.sl512 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffsetExt_r16_Tag_sl20480: {
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
    Free_SRS_PeriodicityAndOffsetExt_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PeriodicityAndOffsetExt_r16(SRS_PeriodicityAndOffsetExt_r16& value)
{
    switch (value.tag) {
    case SRS_PeriodicityAndOffsetExt_r16_Tag_sl128:
        break;
    case SRS_PeriodicityAndOffsetExt_r16_Tag_sl256:
        break;
    case SRS_PeriodicityAndOffsetExt_r16_Tag_sl512:
        break;
    case SRS_PeriodicityAndOffsetExt_r16_Tag_sl20480:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18：ASN.1 windowPeriodicityAndOffset-r18；源文件第 13493 行；CHOICE。
// Encode_SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18 只读不分配；Decode_SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18(Encoder& enc, const SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18_Tag_periodicityAndOffset_r18:
        Encode_SRS_PeriodicityAndOffset_r16(enc, value.u.periodicityAndOffset_r18);
        break;
    case SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18_Tag_periodicityAndOffset_Ext_r18:
        Encode_SRS_PeriodicityAndOffsetExt_r16(enc, value.u.periodicityAndOffset_Ext_r18);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18(Decoder& dec, SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18_Tag)root_index;
    switch (value.tag) {
    case SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18_Tag_periodicityAndOffset_r18: {
        if (Decode_SRS_PeriodicityAndOffset_r16(dec, value.u.periodicityAndOffset_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18_Tag_periodicityAndOffset_Ext_r18: {
        if (Decode_SRS_PeriodicityAndOffsetExt_r16(dec, value.u.periodicityAndOffset_Ext_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18(SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18& value)
{
    switch (value.tag) {
    case SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18_Tag_periodicityAndOffset_r18:
        Free_SRS_PeriodicityAndOffset_r16(value.u.periodicityAndOffset_r18);
        break;
    case SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18_Tag_periodicityAndOffset_Ext_r18:
        Free_SRS_PeriodicityAndOffsetExt_r16(value.u.periodicityAndOffset_Ext_r18);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosUplinkTransmissionWindowConfig_r18：ASN.1 SRS-PosUplinkTransmissionWindowConfig-r18；源文件第 13491 行；SEQUENCE。
// Encode_SRS_PosUplinkTransmissionWindowConfig_r18 只读不分配；Decode_SRS_PosUplinkTransmissionWindowConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosUplinkTransmissionWindowConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosUplinkTransmissionWindowConfig_r18(Encoder& enc, const SRS_PosUplinkTransmissionWindowConfig_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.startSFN_r18), 0, 1023);
    Encode_SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18(enc, value.windowPeriodicityAndOffset_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.duration_r18), 0, 3);
    return enc.Error();
}

ErrorCode Decode_SRS_PosUplinkTransmissionWindowConfig_r18(Decoder& dec, SRS_PosUplinkTransmissionWindowConfig_r18& value)
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
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.startSFN_r18 = (int64_t)tmp_value;
    }
    {
        if (Decode_SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18(dec, value.windowPeriodicityAndOffset_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.duration_r18 = (SRS_PosUplinkTransmissionWindowConfig_r18_Duration_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosUplinkTransmissionWindowConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosUplinkTransmissionWindowConfig_r18(SRS_PosUplinkTransmissionWindowConfig_r18& value)
{
    Free_SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18(value.windowPeriodicityAndOffset_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18：ASN.1 SetupRelease<SRS-PosUplinkTransmissionWindowConfig-r18>；源文件第 13488 行；CHOICE。
// Encode_SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18 只读不分配；Decode_SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18(Encoder& enc, const SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18_Tag_setup:
        Encode_SRS_PosUplinkTransmissionWindowConfig_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18(Decoder& dec, SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18_Tag_setup: {
        if (Decode_SRS_PosUplinkTransmissionWindowConfig_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18(SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18& value)
{
    switch (value.tag) {
    case SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18_Tag_release:
        break;
    case SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18_Tag_setup:
        Free_SRS_PosUplinkTransmissionWindowConfig_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosTx_Hopping_r18：ASN.1 SRS-PosTx-Hopping-r18；源文件第 13485 行；SEQUENCE。
// Encode_SRS_PosTx_Hopping_r18 只读不分配；Decode_SRS_PosTx_Hopping_r18 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosTx_Hopping_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosTx_Hopping_r18(Encoder& enc, const SRS_PosTx_Hopping_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_bwp_r18);
    enc.WriteBit(value.has_srs_PosUplinkTransmissionWindowConfig_r18);
    Encode_SRS_PosConfig_r17(enc, value.srs_PosConfig_r18);
    if (value.has_bwp_r18) {
        Encode_BWP(enc, value.bwp_r18);
    }
    if (value.has_srs_PosUplinkTransmissionWindowConfig_r18) {
        Encode_SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18(enc, value.srs_PosUplinkTransmissionWindowConfig_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_PosTx_Hopping_r18(Decoder& dec, SRS_PosTx_Hopping_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        if (Decode_SRS_PosConfig_r17(dec, value.srs_PosConfig_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_BWP(dec, value.bwp_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18(dec, value.srs_PosUplinkTransmissionWindowConfig_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosTx_Hopping_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosTx_Hopping_r18(SRS_PosTx_Hopping_r18& value)
{
    Free_SRS_PosConfig_r17(value.srs_PosConfig_r18);
    if (value.has_bwp_r18) {
        Free_BWP(value.bwp_r18);
    }
    if (value.has_srs_PosUplinkTransmissionWindowConfig_r18) {
        Free_SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18(value.srs_PosUplinkTransmissionWindowConfig_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SRS_PosTx_Hopping_r18：ASN.1 SetupRelease<SRS-PosTx-Hopping-r18>；源文件第 1375 行；CHOICE。
// Encode_SetupRelease_SRS_PosTx_Hopping_r18 只读不分配；Decode_SetupRelease_SRS_PosTx_Hopping_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SRS_PosTx_Hopping_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SRS_PosTx_Hopping_r18(Encoder& enc, const SetupRelease_SRS_PosTx_Hopping_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SRS_PosTx_Hopping_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_SRS_PosTx_Hopping_r18_Tag_setup:
        Encode_SRS_PosTx_Hopping_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SRS_PosTx_Hopping_r18(Decoder& dec, SetupRelease_SRS_PosTx_Hopping_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SRS_PosTx_Hopping_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SRS_PosTx_Hopping_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SRS_PosTx_Hopping_r18_Tag_setup: {
        if (Decode_SRS_PosTx_Hopping_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SRS_PosTx_Hopping_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SRS_PosTx_Hopping_r18(SetupRelease_SRS_PosTx_Hopping_r18& value)
{
    switch (value.tag) {
    case SetupRelease_SRS_PosTx_Hopping_r18_Tag_release:
        break;
    case SetupRelease_SRS_PosTx_Hopping_r18_Tag_setup:
        Free_SRS_PosTx_Hopping_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosRRC_Inactive_v1800：ASN.1 SRS-PosRRC-Inactive-v1800；源文件第 1373 行；SEQUENCE。
// Encode_SRS_PosRRC_Inactive_v1800 只读不分配；Decode_SRS_PosRRC_Inactive_v1800 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosRRC_Inactive_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosRRC_Inactive_v1800(Encoder& enc, const SRS_PosRRC_Inactive_v1800& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_srs_PosRRC_AggBW_InactiveConfigList_r18);
    enc.WriteBit(value.has_srs_PosTx_Hopping_r18);
    if (value.has_srs_PosRRC_AggBW_InactiveConfigList_r18) {
        Encode_SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18(enc, value.srs_PosRRC_AggBW_InactiveConfigList_r18);
    }
    if (value.has_srs_PosTx_Hopping_r18) {
        Encode_SetupRelease_SRS_PosTx_Hopping_r18(enc, value.srs_PosTx_Hopping_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_PosRRC_Inactive_v1800(Decoder& dec, SRS_PosRRC_Inactive_v1800& value)
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
        if (Decode_SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18(dec, value.srs_PosRRC_AggBW_InactiveConfigList_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_SRS_PosTx_Hopping_r18(dec, value.srs_PosTx_Hopping_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosRRC_Inactive_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosRRC_Inactive_v1800(SRS_PosRRC_Inactive_v1800& value)
{
    if (value.has_srs_PosRRC_AggBW_InactiveConfigList_r18) {
        Free_SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18(value.srs_PosRRC_AggBW_InactiveConfigList_r18);
    }
    if (value.has_srs_PosTx_Hopping_r18) {
        Free_SetupRelease_SRS_PosTx_Hopping_r18(value.srs_PosTx_Hopping_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SRS_PosRRC_Inactive_v1800：ASN.1 SetupRelease<SRS-PosRRC-Inactive-v1800>；源文件第 1227 行；CHOICE。
// Encode_SetupRelease_SRS_PosRRC_Inactive_v1800 只读不分配；Decode_SetupRelease_SRS_PosRRC_Inactive_v1800 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SRS_PosRRC_Inactive_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SRS_PosRRC_Inactive_v1800(Encoder& enc, const SetupRelease_SRS_PosRRC_Inactive_v1800& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SRS_PosRRC_Inactive_v1800_Tag_release:
        (void)0;
        break;
    case SetupRelease_SRS_PosRRC_Inactive_v1800_Tag_setup:
        Encode_SRS_PosRRC_Inactive_v1800(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SRS_PosRRC_Inactive_v1800(Decoder& dec, SetupRelease_SRS_PosRRC_Inactive_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SRS_PosRRC_Inactive_v1800_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SRS_PosRRC_Inactive_v1800_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SRS_PosRRC_Inactive_v1800_Tag_setup: {
        if (Decode_SRS_PosRRC_Inactive_v1800(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SRS_PosRRC_Inactive_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SRS_PosRRC_Inactive_v1800(SetupRelease_SRS_PosRRC_Inactive_v1800& value)
{
    switch (value.tag) {
    case SetupRelease_SRS_PosRRC_Inactive_v1800_Tag_release:
        break;
    case SetupRelease_SRS_PosRRC_Inactive_v1800_Tag_setup:
        Free_SRS_PosRRC_Inactive_v1800(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosRRC_InactiveValidityAreaPreConfigList_r18：ASN.1 SRS-PosRRC-InactiveValidityAreaPreConfigList-r18；源文件第 1379 行；SEQUENCE OF。
// Encode_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18 只读不分配；Decode_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18(Encoder& enc, const SRS_PosRRC_InactiveValidityAreaPreConfigList_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SRS_PosRRC_InactiveValidityAreaConfig_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18(Decoder& dec, SRS_PosRRC_InactiveValidityAreaPreConfigList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SRS_PosRRC_InactiveValidityAreaConfig_r18*)std::malloc((std::size_t)value.count * sizeof(SRS_PosRRC_InactiveValidityAreaConfig_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SRS_PosRRC_InactiveValidityAreaConfig_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SRS_PosRRC_InactiveValidityAreaConfig_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18(SRS_PosRRC_InactiveValidityAreaPreConfigList_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SRS_PosRRC_InactiveValidityAreaConfig_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18：ASN.1 SetupRelease<SRS-PosRRC-InactiveValidityAreaPreConfigList-r18>；源文件第 1228 行；CHOICE。
// Encode_SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18 只读不分配；Decode_SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18(Encoder& enc, const SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18_Tag_setup:
        Encode_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18(Decoder& dec, SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18_Tag_setup: {
        if (Decode_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18(SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18& value)
{
    switch (value.tag) {
    case SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18_Tag_release:
        break;
    case SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18_Tag_setup:
        Free_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// AreaValidityTA_Config_r18：ASN.1 AreaValidityTA-Config-r18；源文件第 1391 行；SEQUENCE。
// Encode_AreaValidityTA_Config_r18 只读不分配；Decode_AreaValidityTA_Config_r18 可能 malloc（失败时内部已释放并清零）；Free_AreaValidityTA_Config_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_AreaValidityTA_Config_r18(Encoder& enc, const AreaValidityTA_Config_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_inactivePosSRS_ValidityAreaRSRP_r18);
    enc.WriteBit(value.has_autonomousTA_AdjustmentEnabled_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.inactivePosSRS_ValidityAreaTAT_r18), 0, 7);
    if (value.has_inactivePosSRS_ValidityAreaRSRP_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.inactivePosSRS_ValidityAreaRSRP_r18), 0, 15);
    }
    if (value.has_autonomousTA_AdjustmentEnabled_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.autonomousTA_AdjustmentEnabled_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_AreaValidityTA_Config_r18(Decoder& dec, AreaValidityTA_Config_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.inactivePosSRS_ValidityAreaTAT_r18 = (AreaValidityTA_Config_r18_InactivePosSRS_ValidityAreaTAT_r18)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.inactivePosSRS_ValidityAreaRSRP_r18 = (RSRP_ChangeThreshold_r17)tmp_value;
    }
    if (present_1) {
        value.autonomousTA_AdjustmentEnabled_r18 = (AreaValidityTA_Config_r18_AutonomousTA_AdjustmentEnabled_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_AreaValidityTA_Config_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AreaValidityTA_Config_r18(AreaValidityTA_Config_r18& value)
{
    if (value.has_inactivePosSRS_ValidityAreaRSRP_r18) {
    }
    if (value.has_autonomousTA_AdjustmentEnabled_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosRRC_InactiveValidityAreaConfig_r18：ASN.1 SRS-PosRRC-InactiveValidityAreaConfig-r18；源文件第 1381 行；SEQUENCE。
// Encode_SRS_PosRRC_InactiveValidityAreaConfig_r18 只读不分配；Decode_SRS_PosRRC_InactiveValidityAreaConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosRRC_InactiveValidityAreaConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosRRC_InactiveValidityAreaConfig_r18(Encoder& enc, const SRS_PosRRC_InactiveValidityAreaConfig_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_srs_PosConfigNUL_r18);
    enc.WriteBit(value.has_srs_PosConfigSUL_r18);
    enc.WriteBit(value.has_bwp_NUL_r18);
    enc.WriteBit(value.has_bwp_SUL_r18);
    enc.WriteBit(value.has_areaValidityTA_Config_r18);
enc.WriteConstrainedLength(value.srs_PosConfigValidityArea_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.srs_PosConfigValidityArea_r18_count; ++i) {
    enc.WriteFixedBitString(value.srs_PosConfigValidityArea_r18_items[i].bytes, value.srs_PosConfigValidityArea_r18_items[i].bitLength, 36, 36);
}
    if (value.has_srs_PosConfigNUL_r18) {
        Encode_SRS_PosConfig_r17(enc, value.srs_PosConfigNUL_r18);
    }
    if (value.has_srs_PosConfigSUL_r18) {
        Encode_SRS_PosConfig_r17(enc, value.srs_PosConfigSUL_r18);
    }
    if (value.has_bwp_NUL_r18) {
        Encode_BWP(enc, value.bwp_NUL_r18);
    }
    if (value.has_bwp_SUL_r18) {
        Encode_BWP(enc, value.bwp_SUL_r18);
    }
    if (value.has_areaValidityTA_Config_r18) {
        Encode_AreaValidityTA_Config_r18(enc, value.areaValidityTA_Config_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_PosRRC_InactiveValidityAreaConfig_r18(Decoder& dec, SRS_PosRRC_InactiveValidityAreaConfig_r18& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.srs_PosConfigValidityArea_r18_count)) { goto fail; }
if (value.srs_PosConfigValidityArea_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.srs_PosConfigValidityArea_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.srs_PosConfigValidityArea_r18_count > 0u) {
    value.srs_PosConfigValidityArea_r18_items = (CellIdentity*)std::malloc((std::size_t)value.srs_PosConfigValidityArea_r18_count * sizeof(CellIdentity));
    if (value.srs_PosConfigValidityArea_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.srs_PosConfigValidityArea_r18_items, 0, (std::size_t)value.srs_PosConfigValidityArea_r18_count * sizeof(CellIdentity));
}
for (std::uint32_t i = 0; i < value.srs_PosConfigValidityArea_r18_count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadFixedBitString(string_bytes, 36)) { goto fail; }
    string_length = 36;
    value.srs_PosConfigValidityArea_r18_items[i].bytes = string_bytes;
    value.srs_PosConfigValidityArea_r18_items[i].bitLength = string_length;
}
    }
    if (present_0) {
        if (Decode_SRS_PosConfig_r17(dec, value.srs_PosConfigNUL_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SRS_PosConfig_r17(dec, value.srs_PosConfigSUL_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_BWP(dec, value.bwp_NUL_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_BWP(dec, value.bwp_SUL_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_AreaValidityTA_Config_r18(dec, value.areaValidityTA_Config_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosRRC_InactiveValidityAreaConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosRRC_InactiveValidityAreaConfig_r18(SRS_PosRRC_InactiveValidityAreaConfig_r18& value)
{
    if (value.srs_PosConfigValidityArea_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.srs_PosConfigValidityArea_r18_count; ++i) {
            std::free(value.srs_PosConfigValidityArea_r18_items[i].bytes);
            value.srs_PosConfigValidityArea_r18_items[i].bytes = nullptr;
            value.srs_PosConfigValidityArea_r18_items[i].bitLength = 0;
        }
        std::free(value.srs_PosConfigValidityArea_r18_items);
        value.srs_PosConfigValidityArea_r18_items = nullptr;
    }
    value.srs_PosConfigValidityArea_r18_count = 0;
    if (value.has_srs_PosConfigNUL_r18) {
        Free_SRS_PosConfig_r17(value.srs_PosConfigNUL_r18);
    }
    if (value.has_srs_PosConfigSUL_r18) {
        Free_SRS_PosConfig_r17(value.srs_PosConfigSUL_r18);
    }
    if (value.has_bwp_NUL_r18) {
        Free_BWP(value.bwp_NUL_r18);
    }
    if (value.has_bwp_SUL_r18) {
        Free_BWP(value.bwp_SUL_r18);
    }
    if (value.has_areaValidityTA_Config_r18) {
        Free_AreaValidityTA_Config_r18(value.areaValidityTA_Config_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18：ASN.1 SetupRelease<SRS-PosRRC-InactiveValidityAreaConfig-r18>；源文件第 1229 行；CHOICE。
// Encode_SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18 只读不分配；Decode_SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18(Encoder& enc, const SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18_Tag_setup:
        Encode_SRS_PosRRC_InactiveValidityAreaConfig_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18(Decoder& dec, SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18_Tag_setup: {
        if (Decode_SRS_PosRRC_InactiveValidityAreaConfig_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18(SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18& value)
{
    switch (value.tag) {
    case SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18_Tag_release:
        break;
    case SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18_Tag_setup:
        Free_SRS_PosRRC_InactiveValidityAreaConfig_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MulticastConfigInactive_r18：ASN.1 MulticastConfigInactive-r18；源文件第 1410 行；SEQUENCE。
// Encode_MulticastConfigInactive_r18 只读不分配；Decode_MulticastConfigInactive_r18 可能 malloc（失败时内部已释放并清零）；Free_MulticastConfigInactive_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MulticastConfigInactive_r18(Encoder& enc, const MulticastConfigInactive_r18& value)
{
    (void)value;
    enc.WriteBit(value.inactivePTM_Config_r18 != nullptr);
    enc.WriteBit(value.inactiveMCCH_Config_r18 != nullptr);
    if (value.inactivePTM_Config_r18 != nullptr) {
        if (value.inactivePTM_Config_r18 == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_MBSMulticastConfiguration_r18(enc, *value.inactivePTM_Config_r18);
        }
    }
    if (value.inactiveMCCH_Config_r18 != nullptr) {
        if (value.inactiveMCCH_Config_r18 == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_SystemInformation(enc, *value.inactiveMCCH_Config_r18);
        }
    }
    return enc.Error();
}

ErrorCode Decode_MulticastConfigInactive_r18(Decoder& dec, MulticastConfigInactive_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
    dec.Fail(ErrorCode_ContainingDepthExceeded); goto fail;
        }
        std::vector<std::uint8_t> containing_bytes;
        if (!dec.ReadOpenType(containing_bytes)) { goto fail; }
        Decoder containing_sub(containing_bytes.data(), containing_bytes.size());
        containing_sub.SetContainingDepth(dec.ContainingDepth() + 1);
        MBSMulticastConfiguration_r18* containing_value = (MBSMulticastConfiguration_r18*)std::malloc(sizeof(MBSMulticastConfiguration_r18));
        if (containing_value == nullptr) {
    dec.Fail(ErrorCode_OutOfMemory); goto fail;
        }
        std::memset(containing_value, 0, sizeof(*containing_value));
        if (Decode_MBSMulticastConfiguration_r18(containing_sub, *containing_value) != ErrorCode_Ok) {
    Free_MBSMulticastConfiguration_r18(*containing_value);
    std::free(containing_value);
    dec.Fail(containing_sub.Error()); goto fail;
        }
        if (!containing_sub.CheckOpenTypeEnd()) {
    Free_MBSMulticastConfiguration_r18(*containing_value);
    std::free(containing_value);
    dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
        }
        value.inactivePTM_Config_r18 = containing_value;
    }
    if (present_1) {
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
        value.inactiveMCCH_Config_r18 = containing_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MulticastConfigInactive_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MulticastConfigInactive_r18(MulticastConfigInactive_r18& value)
{
    if (value.inactivePTM_Config_r18 != nullptr) {
        if (value.inactivePTM_Config_r18 != nullptr) {
            Free_MBSMulticastConfiguration_r18(*value.inactivePTM_Config_r18);
            std::free(value.inactivePTM_Config_r18);
            value.inactivePTM_Config_r18 = nullptr;
        }
    }
    if (value.inactiveMCCH_Config_r18 != nullptr) {
        if (value.inactiveMCCH_Config_r18 != nullptr) {
            Free_SystemInformation(*value.inactiveMCCH_Config_r18);
            std::free(value.inactiveMCCH_Config_r18);
            value.inactiveMCCH_Config_r18 = nullptr;
        }
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_MulticastConfigInactive_r18：ASN.1 SetupRelease<MulticastConfigInactive-r18>；源文件第 1231 行；CHOICE。
// Encode_SetupRelease_MulticastConfigInactive_r18 只读不分配；Decode_SetupRelease_MulticastConfigInactive_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_MulticastConfigInactive_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_MulticastConfigInactive_r18(Encoder& enc, const SetupRelease_MulticastConfigInactive_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_MulticastConfigInactive_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_MulticastConfigInactive_r18_Tag_setup:
        Encode_MulticastConfigInactive_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_MulticastConfigInactive_r18(Decoder& dec, SetupRelease_MulticastConfigInactive_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_MulticastConfigInactive_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_MulticastConfigInactive_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_MulticastConfigInactive_r18_Tag_setup: {
        if (Decode_MulticastConfigInactive_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_MulticastConfigInactive_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_MulticastConfigInactive_r18(SetupRelease_MulticastConfigInactive_r18& value)
{
    switch (value.tag) {
    case SetupRelease_MulticastConfigInactive_r18_Tag_release:
        break;
    case SetupRelease_MulticastConfigInactive_r18_Tag_setup:
        Free_MulticastConfigInactive_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SuspendConfig_ExtGroup3：ASN.1 SuspendConfig_ExtGroup3；源文件第 1225 行；扩展添加组 [[ ]]。
// Encode_SuspendConfig_ExtGroup3 只读不分配；Decode_SuspendConfig_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_SuspendConfig_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SuspendConfig_ExtGroup3(Encoder& enc, const SuspendConfig_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_resumeIndication_r18);
    enc.WriteBit(value.has_srs_PosRRC_Inactive_v1800);
    enc.WriteBit(value.has_srs_PosRRC_InactiveValidityAreaPreConfigList_r18);
    enc.WriteBit(value.has_srs_PosRRC_InactiveValidityAreaNonPreConfig_r18);
    enc.WriteBit(value.has_ran_ExtendedPagingCycleConfig_r18);
    enc.WriteBit(value.has_multicastConfigInactive_r18);
    if (value.has_resumeIndication_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.resumeIndication_r18), 0, 0);
    }
    if (value.has_srs_PosRRC_Inactive_v1800) {
        Encode_SetupRelease_SRS_PosRRC_Inactive_v1800(enc, value.srs_PosRRC_Inactive_v1800);
    }
    if (value.has_srs_PosRRC_InactiveValidityAreaPreConfigList_r18) {
        Encode_SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18(enc, value.srs_PosRRC_InactiveValidityAreaPreConfigList_r18);
    }
    if (value.has_srs_PosRRC_InactiveValidityAreaNonPreConfig_r18) {
        Encode_SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18(enc, value.srs_PosRRC_InactiveValidityAreaNonPreConfig_r18);
    }
    if (value.has_ran_ExtendedPagingCycleConfig_r18) {
        Encode_ExtendedPagingCycleConfig_r18(enc, value.ran_ExtendedPagingCycleConfig_r18);
    }
    if (value.has_multicastConfigInactive_r18) {
        Encode_SetupRelease_MulticastConfigInactive_r18(enc, value.multicastConfigInactive_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SuspendConfig_ExtGroup3(Decoder& dec, SuspendConfig_ExtGroup3& value)
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
        value.resumeIndication_r18 = (SuspendConfig_ExtGroup3_ResumeIndication_r18)0;
    }
    if (present_1) {
        if (Decode_SetupRelease_SRS_PosRRC_Inactive_v1800(dec, value.srs_PosRRC_Inactive_v1800) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18(dec, value.srs_PosRRC_InactiveValidityAreaPreConfigList_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18(dec, value.srs_PosRRC_InactiveValidityAreaNonPreConfig_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_ExtendedPagingCycleConfig_r18(dec, value.ran_ExtendedPagingCycleConfig_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_SetupRelease_MulticastConfigInactive_r18(dec, value.multicastConfigInactive_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SuspendConfig_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SuspendConfig_ExtGroup3(SuspendConfig_ExtGroup3& value)
{
    if (value.has_resumeIndication_r18) {
    }
    if (value.has_srs_PosRRC_Inactive_v1800) {
        Free_SetupRelease_SRS_PosRRC_Inactive_v1800(value.srs_PosRRC_Inactive_v1800);
    }
    if (value.has_srs_PosRRC_InactiveValidityAreaPreConfigList_r18) {
        Free_SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18(value.srs_PosRRC_InactiveValidityAreaPreConfigList_r18);
    }
    if (value.has_srs_PosRRC_InactiveValidityAreaNonPreConfig_r18) {
        Free_SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18(value.srs_PosRRC_InactiveValidityAreaNonPreConfig_r18);
    }
    if (value.has_ran_ExtendedPagingCycleConfig_r18) {
        Free_ExtendedPagingCycleConfig_r18(value.ran_ExtendedPagingCycleConfig_r18);
    }
    if (value.has_multicastConfigInactive_r18) {
        Free_SetupRelease_MulticastConfigInactive_r18(value.multicastConfigInactive_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PLMN_RAN_AreaCellList：ASN.1 PLMN-RAN-AreaCellList；源文件第 1271 行；SEQUENCE OF。
// Encode_PLMN_RAN_AreaCellList 只读不分配；Decode_PLMN_RAN_AreaCellList 可能 malloc（失败时内部已释放并清零）；Free_PLMN_RAN_AreaCellList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PLMN_RAN_AreaCellList(Encoder& enc, const PLMN_RAN_AreaCellList& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PLMN_RAN_AreaCell(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_PLMN_RAN_AreaCellList(Decoder& dec, PLMN_RAN_AreaCellList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PLMN_RAN_AreaCell*)std::malloc((std::size_t)value.count * sizeof(PLMN_RAN_AreaCell));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PLMN_RAN_AreaCell));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PLMN_RAN_AreaCell(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_PLMN_RAN_AreaCellList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PLMN_RAN_AreaCellList(PLMN_RAN_AreaCellList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PLMN_RAN_AreaCell(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PLMN_RAN_AreaConfigList：ASN.1 PLMN-RAN-AreaConfigList；源文件第 1278 行；SEQUENCE OF。
// Encode_PLMN_RAN_AreaConfigList 只读不分配；Decode_PLMN_RAN_AreaConfigList 可能 malloc（失败时内部已释放并清零）；Free_PLMN_RAN_AreaConfigList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PLMN_RAN_AreaConfigList(Encoder& enc, const PLMN_RAN_AreaConfigList& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PLMN_RAN_AreaConfig(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_PLMN_RAN_AreaConfigList(Decoder& dec, PLMN_RAN_AreaConfigList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PLMN_RAN_AreaConfig*)std::malloc((std::size_t)value.count * sizeof(PLMN_RAN_AreaConfig));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PLMN_RAN_AreaConfig));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PLMN_RAN_AreaConfig(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_PLMN_RAN_AreaConfigList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PLMN_RAN_AreaConfigList(PLMN_RAN_AreaConfigList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PLMN_RAN_AreaConfig(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RAN_NotificationAreaInfo：ASN.1 RAN-NotificationAreaInfo；源文件第 1265 行；CHOICE。
// Encode_RAN_NotificationAreaInfo 只读不分配；Decode_RAN_NotificationAreaInfo 可能 malloc（失败时内部已释放并清零）；Free_RAN_NotificationAreaInfo 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RAN_NotificationAreaInfo(Encoder& enc, const RAN_NotificationAreaInfo& value)
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
    case RAN_NotificationAreaInfo_Tag_cellList:
        Encode_PLMN_RAN_AreaCellList(enc, value.u.cellList);
        break;
    case RAN_NotificationAreaInfo_Tag_ran_AreaConfigList:
        Encode_PLMN_RAN_AreaConfigList(enc, value.u.ran_AreaConfigList);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RAN_NotificationAreaInfo(Decoder& dec, RAN_NotificationAreaInfo& value)
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
        value.tag = (RAN_NotificationAreaInfo_Tag)(2 + extension_index);
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
    value.tag = (RAN_NotificationAreaInfo_Tag)root_index;
    switch (value.tag) {
    case RAN_NotificationAreaInfo_Tag_cellList: {
        if (Decode_PLMN_RAN_AreaCellList(dec, value.u.cellList) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RAN_NotificationAreaInfo_Tag_ran_AreaConfigList: {
        if (Decode_PLMN_RAN_AreaConfigList(dec, value.u.ran_AreaConfigList) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RAN_NotificationAreaInfo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RAN_NotificationAreaInfo(RAN_NotificationAreaInfo& value)
{
    switch (value.tag) {
    case RAN_NotificationAreaInfo_Tag_cellList:
        Free_PLMN_RAN_AreaCellList(value.u.cellList);
        break;
    case RAN_NotificationAreaInfo_Tag_ran_AreaConfigList:
        Free_PLMN_RAN_AreaConfigList(value.u.ran_AreaConfigList);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SuspendConfig：ASN.1 SuspendConfig；源文件第 1208 行；SEQUENCE。
// Encode_SuspendConfig 只读不分配；Decode_SuspendConfig 可能 malloc（失败时内部已释放并清零）；Free_SuspendConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SuspendConfig(Encoder& enc, const SuspendConfig& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_ran_NotificationAreaInfo);
    enc.WriteBit(value.has_t380);
    enc.WriteFixedBitString(value.fullI_RNTI.bytes, value.fullI_RNTI.bitLength, 40, 40);
    enc.WriteFixedBitString(value.shortI_RNTI.bytes, value.shortI_RNTI.bitLength, 24, 24);
    enc.WriteConstrainedInteger((std::int64_t)(value.ran_PagingCycle), 0, 3);
    if (value.has_ran_NotificationAreaInfo) {
        Encode_RAN_NotificationAreaInfo(enc, value.ran_NotificationAreaInfo);
    }
    if (value.has_t380) {
        enc.WriteConstrainedInteger((std::int64_t)(value.t380), 0, 7);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.nextHopChainingCount), 0, 7);
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SuspendConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SuspendConfig_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_SuspendConfig_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SuspendConfig(Decoder& dec, SuspendConfig& value)
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
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 40)) { goto fail; }
        string_length = 40;
        value.fullI_RNTI.bytes = string_bytes;
        value.fullI_RNTI.bitLength = string_length;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.shortI_RNTI.bytes = string_bytes;
        value.shortI_RNTI.bitLength = string_length;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.ran_PagingCycle = (PagingCycle)tmp_value;
    }
    if (present_0) {
        if (Decode_RAN_NotificationAreaInfo(dec, value.ran_NotificationAreaInfo) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.t380 = (PeriodicRNAU_TimerValue)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.nextHopChainingCount = (NextHopChainingCount)tmp_value;
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
    if (Decode_SuspendConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_SuspendConfig_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_SuspendConfig_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    Free_SuspendConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SuspendConfig(SuspendConfig& value)
{
    std::free(value.fullI_RNTI.bytes);
    value.fullI_RNTI.bytes = nullptr;
    value.fullI_RNTI.bitLength = 0;
    std::free(value.shortI_RNTI.bytes);
    value.shortI_RNTI.bytes = nullptr;
    value.shortI_RNTI.bitLength = 0;
    if (value.has_ran_NotificationAreaInfo) {
        Free_RAN_NotificationAreaInfo(value.ran_NotificationAreaInfo);
    }
    if (value.has_t380) {
    }
    if (value.has_extGroup1) {
        Free_SuspendConfig_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SuspendConfig_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_SuspendConfig_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FreqPriorityListDedicatedSlicing_r17：ASN.1 FreqPriorityListDedicatedSlicing-r17；源文件第 6872 行；SEQUENCE OF。
// Encode_FreqPriorityListDedicatedSlicing_r17 只读不分配；Decode_FreqPriorityListDedicatedSlicing_r17 可能 malloc（失败时内部已释放并清零）；Free_FreqPriorityListDedicatedSlicing_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FreqPriorityListDedicatedSlicing_r17(Encoder& enc, const FreqPriorityListDedicatedSlicing_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_FreqPriorityDedicatedSlicing_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_FreqPriorityListDedicatedSlicing_r17(Decoder& dec, FreqPriorityListDedicatedSlicing_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (FreqPriorityDedicatedSlicing_r17*)std::malloc((std::size_t)value.count * sizeof(FreqPriorityDedicatedSlicing_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(FreqPriorityDedicatedSlicing_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_FreqPriorityDedicatedSlicing_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_FreqPriorityListDedicatedSlicing_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FreqPriorityListDedicatedSlicing_r17(FreqPriorityListDedicatedSlicing_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_FreqPriorityDedicatedSlicing_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellReselectionPriorities_ExtGroup1：ASN.1 CellReselectionPriorities_ExtGroup1；源文件第 1242 行；扩展添加组 [[ ]]。
// Encode_CellReselectionPriorities_ExtGroup1 只读不分配；Decode_CellReselectionPriorities_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_CellReselectionPriorities_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellReselectionPriorities_ExtGroup1(Encoder& enc, const CellReselectionPriorities_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_freqPriorityListDedicatedSlicing_r17);
    if (value.has_freqPriorityListDedicatedSlicing_r17) {
        Encode_FreqPriorityListDedicatedSlicing_r17(enc, value.freqPriorityListDedicatedSlicing_r17);
    }
    return enc.Error();
}

ErrorCode Decode_CellReselectionPriorities_ExtGroup1(Decoder& dec, CellReselectionPriorities_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_FreqPriorityListDedicatedSlicing_r17(dec, value.freqPriorityListDedicatedSlicing_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CellReselectionPriorities_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellReselectionPriorities_ExtGroup1(CellReselectionPriorities_ExtGroup1& value)
{
    if (value.has_freqPriorityListDedicatedSlicing_r17) {
        Free_FreqPriorityListDedicatedSlicing_r17(value.freqPriorityListDedicatedSlicing_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FreqPriorityListEUTRA：ASN.1 FreqPriorityListEUTRA；源文件第 1249 行；SEQUENCE OF。
// Encode_FreqPriorityListEUTRA 只读不分配；Decode_FreqPriorityListEUTRA 可能 malloc（失败时内部已释放并清零）；Free_FreqPriorityListEUTRA 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FreqPriorityListEUTRA(Encoder& enc, const FreqPriorityListEUTRA& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_FreqPriorityEUTRA(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_FreqPriorityListEUTRA(Decoder& dec, FreqPriorityListEUTRA& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (FreqPriorityEUTRA*)std::malloc((std::size_t)value.count * sizeof(FreqPriorityEUTRA));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(FreqPriorityEUTRA));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_FreqPriorityEUTRA(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_FreqPriorityListEUTRA(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FreqPriorityListEUTRA(FreqPriorityListEUTRA& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_FreqPriorityEUTRA(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FreqPriorityListNR：ASN.1 FreqPriorityListNR；源文件第 1251 行；SEQUENCE OF。
// Encode_FreqPriorityListNR 只读不分配；Decode_FreqPriorityListNR 可能 malloc（失败时内部已释放并清零）；Free_FreqPriorityListNR 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FreqPriorityListNR(Encoder& enc, const FreqPriorityListNR& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_FreqPriorityNR(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_FreqPriorityListNR(Decoder& dec, FreqPriorityListNR& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (FreqPriorityNR*)std::malloc((std::size_t)value.count * sizeof(FreqPriorityNR));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(FreqPriorityNR));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_FreqPriorityNR(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_FreqPriorityListNR(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FreqPriorityListNR(FreqPriorityListNR& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_FreqPriorityNR(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellReselectionPriorities：ASN.1 CellReselectionPriorities；源文件第 1237 行；SEQUENCE。
// Encode_CellReselectionPriorities 只读不分配；Decode_CellReselectionPriorities 可能 malloc（失败时内部已释放并清零）；Free_CellReselectionPriorities 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellReselectionPriorities(Encoder& enc, const CellReselectionPriorities& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_freqPriorityListEUTRA);
    enc.WriteBit(value.has_freqPriorityListNR);
    enc.WriteBit(value.has_t320);
    if (value.has_freqPriorityListEUTRA) {
        Encode_FreqPriorityListEUTRA(enc, value.freqPriorityListEUTRA);
    }
    if (value.has_freqPriorityListNR) {
        Encode_FreqPriorityListNR(enc, value.freqPriorityListNR);
    }
    if (value.has_t320) {
        enc.WriteConstrainedInteger((std::int64_t)(value.t320), 0, 7);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_CellReselectionPriorities_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_CellReselectionPriorities(Decoder& dec, CellReselectionPriorities& value)
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
        if (Decode_FreqPriorityListEUTRA(dec, value.freqPriorityListEUTRA) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_FreqPriorityListNR(dec, value.freqPriorityListNR) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.t320 = (CellReselectionPriorities_T320)tmp_value;
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
    if (Decode_CellReselectionPriorities_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_CellReselectionPriorities(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellReselectionPriorities(CellReselectionPriorities& value)
{
    if (value.has_freqPriorityListEUTRA) {
        Free_FreqPriorityListEUTRA(value.freqPriorityListEUTRA);
    }
    if (value.has_freqPriorityListNR) {
        Free_FreqPriorityListNR(value.freqPriorityListNR);
    }
    if (value.has_t320) {
    }
    if (value.has_extGroup1) {
        Free_CellReselectionPriorities_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCRelease_IEs_DeprioritisationReq：ASN.1 deprioritisationReq；源文件第 1161 行；SEQUENCE。
// Encode_RRCRelease_IEs_DeprioritisationReq 只读不分配；Decode_RRCRelease_IEs_DeprioritisationReq 可能 malloc（失败时内部已释放并清零）；Free_RRCRelease_IEs_DeprioritisationReq 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCRelease_IEs_DeprioritisationReq(Encoder& enc, const RRCRelease_IEs_DeprioritisationReq& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.deprioritisationType), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.deprioritisationTimer), 0, 3);
    return enc.Error();
}

ErrorCode Decode_RRCRelease_IEs_DeprioritisationReq(Decoder& dec, RRCRelease_IEs_DeprioritisationReq& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.deprioritisationType = (RRCRelease_IEs_DeprioritisationReq_DeprioritisationType)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.deprioritisationTimer = (RRCRelease_IEs_DeprioritisationReq_DeprioritisationTimer)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCRelease_IEs_DeprioritisationReq(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCRelease_IEs_DeprioritisationReq(RRCRelease_IEs_DeprioritisationReq& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCRelease_IEs：ASN.1 RRCRelease-IEs；源文件第 1157 行；SEQUENCE。
// Encode_RRCRelease_IEs 只读不分配；Decode_RRCRelease_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCRelease_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCRelease_IEs(Encoder& enc, const RRCRelease_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_redirectedCarrierInfo);
    enc.WriteBit(value.has_cellReselectionPriorities);
    enc.WriteBit(value.has_suspendConfig);
    enc.WriteBit(value.has_deprioritisationReq);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_redirectedCarrierInfo) {
        Encode_RedirectedCarrierInfo(enc, value.redirectedCarrierInfo);
    }
    if (value.has_cellReselectionPriorities) {
        Encode_CellReselectionPriorities(enc, value.cellReselectionPriorities);
    }
    if (value.has_suspendConfig) {
        Encode_SuspendConfig(enc, value.suspendConfig);
    }
    if (value.has_deprioritisationReq) {
        Encode_RRCRelease_IEs_DeprioritisationReq(enc, value.deprioritisationReq);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCRelease_v1540_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCRelease_IEs(Decoder& dec, RRCRelease_IEs& value)
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
        if (Decode_RedirectedCarrierInfo(dec, value.redirectedCarrierInfo) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CellReselectionPriorities(dec, value.cellReselectionPriorities) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SuspendConfig(dec, value.suspendConfig) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_RRCRelease_IEs_DeprioritisationReq(dec, value.deprioritisationReq) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_5) {
        if (Decode_RRCRelease_v1540_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCRelease_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCRelease_IEs(RRCRelease_IEs& value)
{
    if (value.has_redirectedCarrierInfo) {
        Free_RedirectedCarrierInfo(value.redirectedCarrierInfo);
    }
    if (value.has_cellReselectionPriorities) {
        Free_CellReselectionPriorities(value.cellReselectionPriorities);
    }
    if (value.has_suspendConfig) {
        Free_SuspendConfig(value.suspendConfig);
    }
    if (value.has_deprioritisationReq) {
        Free_RRCRelease_IEs_DeprioritisationReq(value.deprioritisationReq);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCRelease_v1540_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCRelease_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 1153 行；空 SEQUENCE{}。
// Encode_RRCRelease_CriticalExtensionsFuture 只读不分配；Decode_RRCRelease_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_RRCRelease_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCRelease_CriticalExtensionsFuture(Encoder& enc, const RRCRelease_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_RRCRelease_CriticalExtensionsFuture(Decoder& dec, RRCRelease_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCRelease_CriticalExtensionsFuture(RRCRelease_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCRelease_CriticalExtensions：ASN.1 criticalExtensions；源文件第 1151 行；CHOICE。
// Encode_RRCRelease_CriticalExtensions 只读不分配；Decode_RRCRelease_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_RRCRelease_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCRelease_CriticalExtensions(Encoder& enc, const RRCRelease_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RRCRelease_CriticalExtensions_Tag_rrcRelease:
        Encode_RRCRelease_IEs(enc, value.u.rrcRelease);
        break;
    case RRCRelease_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_RRCRelease_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RRCRelease_CriticalExtensions(Decoder& dec, RRCRelease_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RRCRelease_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case RRCRelease_CriticalExtensions_Tag_rrcRelease: {
        if (Decode_RRCRelease_IEs(dec, value.u.rrcRelease) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RRCRelease_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_RRCRelease_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCRelease_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCRelease_CriticalExtensions(RRCRelease_CriticalExtensions& value)
{
    switch (value.tag) {
    case RRCRelease_CriticalExtensions_Tag_rrcRelease:
        Free_RRCRelease_IEs(value.u.rrcRelease);
        break;
    case RRCRelease_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_RRCRelease_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCRelease：ASN.1 RRCRelease；源文件第 1149 行；SEQUENCE。
// Encode_RRCRelease 只读不分配；Decode_RRCRelease 可能 malloc（失败时内部已释放并清零）；Free_RRCRelease 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCRelease(Encoder& enc, const RRCRelease& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.rrc_TransactionIdentifier), 0, 3);
    Encode_RRCRelease_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_RRCRelease(Decoder& dec, RRCRelease& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.rrc_TransactionIdentifier = (RRC_TransactionIdentifier)tmp_value;
    }
    {
        if (Decode_RRCRelease_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCRelease(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCRelease(RRCRelease& value)
{
    Free_RRCRelease_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FreqPriorityEUTRA：ASN.1 FreqPriorityEUTRA；源文件第 1253 行；SEQUENCE。
// Encode_FreqPriorityEUTRA 只读不分配；Decode_FreqPriorityEUTRA 可能 malloc（失败时内部已释放并清零）；Free_FreqPriorityEUTRA 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FreqPriorityEUTRA(Encoder& enc, const FreqPriorityEUTRA& value)
{
    (void)value;
    enc.WriteBit(value.has_cellReselectionSubPriority);
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierFreq), 0, 262143);
    enc.WriteConstrainedInteger((std::int64_t)(value.cellReselectionPriority), 0, 7);
    if (value.has_cellReselectionSubPriority) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cellReselectionSubPriority), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_FreqPriorityEUTRA(Decoder& dec, FreqPriorityEUTRA& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 262143, tmp_value)) { goto fail; }
        value.carrierFreq = (ARFCN_ValueEUTRA)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.cellReselectionPriority = (CellReselectionPriority)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.cellReselectionSubPriority = (CellReselectionSubPriority)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FreqPriorityEUTRA(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FreqPriorityEUTRA(FreqPriorityEUTRA& value)
{
    if (value.has_cellReselectionSubPriority) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FreqPriorityNR：ASN.1 FreqPriorityNR；源文件第 1259 行；SEQUENCE。
// Encode_FreqPriorityNR 只读不分配；Decode_FreqPriorityNR 可能 malloc（失败时内部已释放并清零）；Free_FreqPriorityNR 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FreqPriorityNR(Encoder& enc, const FreqPriorityNR& value)
{
    (void)value;
    enc.WriteBit(value.has_cellReselectionSubPriority);
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierFreq), 0, 3279165);
    enc.WriteConstrainedInteger((std::int64_t)(value.cellReselectionPriority), 0, 7);
    if (value.has_cellReselectionSubPriority) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cellReselectionSubPriority), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_FreqPriorityNR(Decoder& dec, FreqPriorityNR& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.carrierFreq = (ARFCN_ValueNR)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.cellReselectionPriority = (CellReselectionPriority)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.cellReselectionSubPriority = (CellReselectionSubPriority)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FreqPriorityNR(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FreqPriorityNR(FreqPriorityNR& value)
{
    if (value.has_cellReselectionSubPriority) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PLMN_RAN_AreaCell：ASN.1 PLMN-RAN-AreaCell；源文件第 1273 行；SEQUENCE。
// Encode_PLMN_RAN_AreaCell 只读不分配；Decode_PLMN_RAN_AreaCell 可能 malloc（失败时内部已释放并清零）；Free_PLMN_RAN_AreaCell 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PLMN_RAN_AreaCell(Encoder& enc, const PLMN_RAN_AreaCell& value)
{
    (void)value;
    enc.WriteBit(value.has_plmn_Identity);
    if (value.has_plmn_Identity) {
        Encode_PLMN_Identity(enc, value.plmn_Identity);
    }
enc.WriteConstrainedLength(value.ran_AreaCells_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.ran_AreaCells_count; ++i) {
    enc.WriteFixedBitString(value.ran_AreaCells_items[i].bytes, value.ran_AreaCells_items[i].bitLength, 36, 36);
}
    return enc.Error();
}

ErrorCode Decode_PLMN_RAN_AreaCell(Decoder& dec, PLMN_RAN_AreaCell& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_PLMN_Identity(dec, value.plmn_Identity) != ErrorCode_Ok) { goto fail; }
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.ran_AreaCells_count)) { goto fail; }
if (value.ran_AreaCells_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.ran_AreaCells_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.ran_AreaCells_count > 0u) {
    value.ran_AreaCells_items = (CellIdentity*)std::malloc((std::size_t)value.ran_AreaCells_count * sizeof(CellIdentity));
    if (value.ran_AreaCells_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.ran_AreaCells_items, 0, (std::size_t)value.ran_AreaCells_count * sizeof(CellIdentity));
}
for (std::uint32_t i = 0; i < value.ran_AreaCells_count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadFixedBitString(string_bytes, 36)) { goto fail; }
    string_length = 36;
    value.ran_AreaCells_items[i].bytes = string_bytes;
    value.ran_AreaCells_items[i].bitLength = string_length;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_PLMN_RAN_AreaCell(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PLMN_RAN_AreaCell(PLMN_RAN_AreaCell& value)
{
    if (value.has_plmn_Identity) {
        Free_PLMN_Identity(value.plmn_Identity);
    }
    if (value.ran_AreaCells_items != nullptr) {
        for (std::uint32_t i = 0; i < value.ran_AreaCells_count; ++i) {
            std::free(value.ran_AreaCells_items[i].bytes);
            value.ran_AreaCells_items[i].bytes = nullptr;
            value.ran_AreaCells_items[i].bitLength = 0;
        }
        std::free(value.ran_AreaCells_items);
        value.ran_AreaCells_items = nullptr;
    }
    value.ran_AreaCells_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PLMN_RAN_AreaConfig：ASN.1 PLMN-RAN-AreaConfig；源文件第 1280 行；SEQUENCE。
// Encode_PLMN_RAN_AreaConfig 只读不分配；Decode_PLMN_RAN_AreaConfig 可能 malloc（失败时内部已释放并清零）；Free_PLMN_RAN_AreaConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PLMN_RAN_AreaConfig(Encoder& enc, const PLMN_RAN_AreaConfig& value)
{
    (void)value;
    enc.WriteBit(value.has_plmn_Identity);
    if (value.has_plmn_Identity) {
        Encode_PLMN_Identity(enc, value.plmn_Identity);
    }
enc.WriteConstrainedLength(value.ran_Area_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.ran_Area_count; ++i) {
    Encode_RAN_AreaConfig(enc, value.ran_Area_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_PLMN_RAN_AreaConfig(Decoder& dec, PLMN_RAN_AreaConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_PLMN_Identity(dec, value.plmn_Identity) != ErrorCode_Ok) { goto fail; }
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.ran_Area_count)) { goto fail; }
if (value.ran_Area_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.ran_Area_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.ran_Area_count > 0u) {
    value.ran_Area_items = (RAN_AreaConfig*)std::malloc((std::size_t)value.ran_Area_count * sizeof(RAN_AreaConfig));
    if (value.ran_Area_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.ran_Area_items, 0, (std::size_t)value.ran_Area_count * sizeof(RAN_AreaConfig));
}
for (std::uint32_t i = 0; i < value.ran_Area_count; ++i) {
    if (Decode_RAN_AreaConfig(dec, value.ran_Area_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_PLMN_RAN_AreaConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PLMN_RAN_AreaConfig(PLMN_RAN_AreaConfig& value)
{
    if (value.has_plmn_Identity) {
        Free_PLMN_Identity(value.plmn_Identity);
    }
    if (value.ran_Area_items != nullptr) {
        for (std::uint32_t i = 0; i < value.ran_Area_count; ++i) {
            Free_RAN_AreaConfig(value.ran_Area_items[i]);
        }
        std::free(value.ran_Area_items);
        value.ran_Area_items = nullptr;
    }
    value.ran_Area_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RAN_AreaConfig：ASN.1 RAN-AreaConfig；源文件第 1285 行；SEQUENCE。
// Encode_RAN_AreaConfig 只读不分配；Decode_RAN_AreaConfig 可能 malloc（失败时内部已释放并清零）；Free_RAN_AreaConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RAN_AreaConfig(Encoder& enc, const RAN_AreaConfig& value)
{
    (void)value;
    enc.WriteBit(value.has_ran_AreaCodeList);
    enc.WriteFixedBitString(value.trackingAreaCode.bytes, value.trackingAreaCode.bitLength, 24, 24);
    if (value.has_ran_AreaCodeList) {
enc.WriteConstrainedLength(value.ran_AreaCodeList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.ran_AreaCodeList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.ran_AreaCodeList_items[i]), 0, 255);
}
    }
    return enc.Error();
}

ErrorCode Decode_RAN_AreaConfig(Decoder& dec, RAN_AreaConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.trackingAreaCode.bytes = string_bytes;
        value.trackingAreaCode.bitLength = string_length;
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.ran_AreaCodeList_count)) { goto fail; }
if (value.ran_AreaCodeList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.ran_AreaCodeList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.ran_AreaCodeList_count > 0u) {
    value.ran_AreaCodeList_items = (RAN_AreaCode*)std::malloc((std::size_t)value.ran_AreaCodeList_count * sizeof(RAN_AreaCode));
    if (value.ran_AreaCodeList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.ran_AreaCodeList_items, 0, (std::size_t)value.ran_AreaCodeList_count * sizeof(RAN_AreaCode));
}
for (std::uint32_t i = 0; i < value.ran_AreaCodeList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
    value.ran_AreaCodeList_items[i] = (RAN_AreaCode)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_RAN_AreaConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RAN_AreaConfig(RAN_AreaConfig& value)
{
    std::free(value.trackingAreaCode.bytes);
    value.trackingAreaCode.bytes = nullptr;
    value.trackingAreaCode.bitLength = 0;
    if (value.has_ran_AreaCodeList) {
        if (value.ran_AreaCodeList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.ran_AreaCodeList_count; ++i) {
            }
            std::free(value.ran_AreaCodeList_items);
            value.ran_AreaCodeList_items = nullptr;
        }
        value.ran_AreaCodeList_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SDT_MAC_PHY_CG_Config_r17_ExtGroup1：ASN.1 SDT_MAC_PHY_CG_Config_r17_ExtGroup1；源文件第 1311 行；扩展添加组 [[ ]]。
// Encode_SDT_MAC_PHY_CG_Config_r17_ExtGroup1 只读不分配；Decode_SDT_MAC_PHY_CG_Config_r17_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SDT_MAC_PHY_CG_Config_r17_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SDT_MAC_PHY_CG_Config_r17_ExtGroup1(Encoder& enc, const SDT_MAC_PHY_CG_Config_r17_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_cg_SDT_ConfigLCH_RestrictionToAddModListExt_v1800);
    enc.WriteBit(value.has_cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18);
    if (value.has_cg_SDT_ConfigLCH_RestrictionToAddModListExt_v1800) {
enc.WriteConstrainedLength(value.cg_SDT_ConfigLCH_RestrictionToAddModListExt_v1800_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cg_SDT_ConfigLCH_RestrictionToAddModListExt_v1800_count; ++i) {
    Encode_CG_SDT_ConfigLCH_Restriction_v1800(enc, value.cg_SDT_ConfigLCH_RestrictionToAddModListExt_v1800_items[i]);
}
    }
    if (value.has_cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18), 0, 15);
    }
    return enc.Error();
}

ErrorCode Decode_SDT_MAC_PHY_CG_Config_r17_ExtGroup1(Decoder& dec, SDT_MAC_PHY_CG_Config_r17_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.cg_SDT_ConfigLCH_RestrictionToAddModListExt_v1800_count)) { goto fail; }
if (value.cg_SDT_ConfigLCH_RestrictionToAddModListExt_v1800_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cg_SDT_ConfigLCH_RestrictionToAddModListExt_v1800_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cg_SDT_ConfigLCH_RestrictionToAddModListExt_v1800_count > 0u) {
    value.cg_SDT_ConfigLCH_RestrictionToAddModListExt_v1800_items = (CG_SDT_ConfigLCH_Restriction_v1800*)std::malloc((std::size_t)value.cg_SDT_ConfigLCH_RestrictionToAddModListExt_v1800_count * sizeof(CG_SDT_ConfigLCH_Restriction_v1800));
    if (value.cg_SDT_ConfigLCH_RestrictionToAddModListExt_v1800_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cg_SDT_ConfigLCH_RestrictionToAddModListExt_v1800_items, 0, (std::size_t)value.cg_SDT_ConfigLCH_RestrictionToAddModListExt_v1800_count * sizeof(CG_SDT_ConfigLCH_Restriction_v1800));
}
for (std::uint32_t i = 0; i < value.cg_SDT_ConfigLCH_RestrictionToAddModListExt_v1800_count; ++i) {
    if (Decode_CG_SDT_ConfigLCH_Restriction_v1800(dec, value.cg_SDT_ConfigLCH_RestrictionToAddModListExt_v1800_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18 = (SDT_MAC_PHY_CG_Config_r17_ExtGroup1_Cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SDT_MAC_PHY_CG_Config_r17_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SDT_MAC_PHY_CG_Config_r17_ExtGroup1(SDT_MAC_PHY_CG_Config_r17_ExtGroup1& value)
{
    if (value.has_cg_SDT_ConfigLCH_RestrictionToAddModListExt_v1800) {
        if (value.cg_SDT_ConfigLCH_RestrictionToAddModListExt_v1800_items != nullptr) {
            for (std::uint32_t i = 0; i < value.cg_SDT_ConfigLCH_RestrictionToAddModListExt_v1800_count; ++i) {
                Free_CG_SDT_ConfigLCH_Restriction_v1800(value.cg_SDT_ConfigLCH_RestrictionToAddModListExt_v1800_items[i]);
            }
            std::free(value.cg_SDT_ConfigLCH_RestrictionToAddModListExt_v1800_items);
            value.cg_SDT_ConfigLCH_RestrictionToAddModListExt_v1800_items = nullptr;
        }
        value.cg_SDT_ConfigLCH_RestrictionToAddModListExt_v1800_count = 0;
    }
    if (value.has_cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceSwitchConfig_r16：ASN.1 SearchSpaceSwitchConfig-r16；源文件第 9174 行；SEQUENCE。
// Encode_SearchSpaceSwitchConfig_r16 只读不分配；Decode_SearchSpaceSwitchConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceSwitchConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceSwitchConfig_r16(Encoder& enc, const SearchSpaceSwitchConfig_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_cellGroupsForSwitchList_r16);
    enc.WriteBit(value.has_searchSpaceSwitchDelay_r16);
    if (value.has_cellGroupsForSwitchList_r16) {
enc.WriteConstrainedLength(value.cellGroupsForSwitchList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cellGroupsForSwitchList_r16_count; ++i) {
    Encode_CellGroupForSwitch_r16(enc, value.cellGroupsForSwitchList_r16_items[i]);
}
    }
    if (value.has_searchSpaceSwitchDelay_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.searchSpaceSwitchDelay_r16), 10, 52);
    }
    return enc.Error();
}

ErrorCode Decode_SearchSpaceSwitchConfig_r16(Decoder& dec, SearchSpaceSwitchConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.cellGroupsForSwitchList_r16_count)) { goto fail; }
if (value.cellGroupsForSwitchList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cellGroupsForSwitchList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cellGroupsForSwitchList_r16_count > 0u) {
    value.cellGroupsForSwitchList_r16_items = (CellGroupForSwitch_r16*)std::malloc((std::size_t)value.cellGroupsForSwitchList_r16_count * sizeof(CellGroupForSwitch_r16));
    if (value.cellGroupsForSwitchList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cellGroupsForSwitchList_r16_items, 0, (std::size_t)value.cellGroupsForSwitchList_r16_count * sizeof(CellGroupForSwitch_r16));
}
for (std::uint32_t i = 0; i < value.cellGroupsForSwitchList_r16_count; ++i) {
    if (Decode_CellGroupForSwitch_r16(dec, value.cellGroupsForSwitchList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(10, 52, tmp_value)) { goto fail; }
        value.searchSpaceSwitchDelay_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpaceSwitchConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceSwitchConfig_r16(SearchSpaceSwitchConfig_r16& value)
{
    if (value.has_cellGroupsForSwitchList_r16) {
        if (value.cellGroupsForSwitchList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.cellGroupsForSwitchList_r16_count; ++i) {
                Free_CellGroupForSwitch_r16(value.cellGroupsForSwitchList_r16_items[i]);
            }
            std::free(value.cellGroupsForSwitchList_r16_items);
            value.cellGroupsForSwitchList_r16_items = nullptr;
        }
        value.cellGroupsForSwitchList_r16_count = 0;
    }
    if (value.has_searchSpaceSwitchDelay_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UplinkCancellation_r16：ASN.1 UplinkCancellation-r16；源文件第 13923 行；SEQUENCE。
// Encode_UplinkCancellation_r16 只读不分配；Decode_UplinkCancellation_r16 可能 malloc（失败时内部已释放并清零）；Free_UplinkCancellation_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UplinkCancellation_r16(Encoder& enc, const UplinkCancellation_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.ci_RNTI_r16), 0, 65535);
    enc.WriteConstrainedInteger((std::int64_t)(value.dci_PayloadSizeForCI_r16), 0, 126);
enc.WriteConstrainedLength(value.ci_ConfigurationPerServingCell_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.ci_ConfigurationPerServingCell_r16_count; ++i) {
    Encode_CI_ConfigurationPerServingCell_r16(enc, value.ci_ConfigurationPerServingCell_r16_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_UplinkCancellation_r16(Decoder& dec, UplinkCancellation_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.ci_RNTI_r16 = (RNTI_Value)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 126, tmp_value)) { goto fail; }
        value.dci_PayloadSizeForCI_r16 = (int64_t)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.ci_ConfigurationPerServingCell_r16_count)) { goto fail; }
if (value.ci_ConfigurationPerServingCell_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.ci_ConfigurationPerServingCell_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.ci_ConfigurationPerServingCell_r16_count > 0u) {
    value.ci_ConfigurationPerServingCell_r16_items = (CI_ConfigurationPerServingCell_r16*)std::malloc((std::size_t)value.ci_ConfigurationPerServingCell_r16_count * sizeof(CI_ConfigurationPerServingCell_r16));
    if (value.ci_ConfigurationPerServingCell_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.ci_ConfigurationPerServingCell_r16_items, 0, (std::size_t)value.ci_ConfigurationPerServingCell_r16_count * sizeof(CI_ConfigurationPerServingCell_r16));
}
for (std::uint32_t i = 0; i < value.ci_ConfigurationPerServingCell_r16_count; ++i) {
    if (Decode_CI_ConfigurationPerServingCell_r16(dec, value.ci_ConfigurationPerServingCell_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_UplinkCancellation_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkCancellation_r16(UplinkCancellation_r16& value)
{
    if (value.ci_ConfigurationPerServingCell_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.ci_ConfigurationPerServingCell_r16_count; ++i) {
            Free_CI_ConfigurationPerServingCell_r16(value.ci_ConfigurationPerServingCell_r16_items[i]);
        }
        std::free(value.ci_ConfigurationPerServingCell_r16_items);
        value.ci_ConfigurationPerServingCell_r16_items = nullptr;
    }
    value.ci_ConfigurationPerServingCell_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_UplinkCancellation_r16：ASN.1 SetupRelease<UplinkCancellation-r16>；源文件第 9158 行；CHOICE。
// Encode_SetupRelease_UplinkCancellation_r16 只读不分配；Decode_SetupRelease_UplinkCancellation_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_UplinkCancellation_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_UplinkCancellation_r16(Encoder& enc, const SetupRelease_UplinkCancellation_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_UplinkCancellation_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_UplinkCancellation_r16_Tag_setup:
        Encode_UplinkCancellation_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_UplinkCancellation_r16(Decoder& dec, SetupRelease_UplinkCancellation_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_UplinkCancellation_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_UplinkCancellation_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_UplinkCancellation_r16_Tag_setup: {
        if (Decode_UplinkCancellation_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_UplinkCancellation_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_UplinkCancellation_r16(SetupRelease_UplinkCancellation_r16& value)
{
    switch (value.tag) {
    case SetupRelease_UplinkCancellation_r16_Tag_release:
        break;
    case SetupRelease_UplinkCancellation_r16_Tag_setup:
        Free_UplinkCancellation_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_Config_ExtGroup1：ASN.1 PDCCH_Config_ExtGroup1；源文件第 9154 行；扩展添加组 [[ ]]。
// Encode_PDCCH_Config_ExtGroup1 只读不分配；Decode_PDCCH_Config_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_Config_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_Config_ExtGroup1(Encoder& enc, const PDCCH_Config_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_controlResourceSetToAddModListSizeExt_v1610);
    enc.WriteBit(value.has_controlResourceSetToReleaseListSizeExt_r16);
    enc.WriteBit(value.has_searchSpacesToAddModListExt_r16);
    enc.WriteBit(value.has_uplinkCancellation_r16);
    enc.WriteBit(value.has_monitoringCapabilityConfig_r16);
    enc.WriteBit(value.has_searchSpaceSwitchConfig_r16);
    if (value.has_controlResourceSetToAddModListSizeExt_v1610) {
enc.WriteConstrainedLength(value.controlResourceSetToAddModListSizeExt_v1610_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.controlResourceSetToAddModListSizeExt_v1610_count; ++i) {
    Encode_ControlResourceSet(enc, value.controlResourceSetToAddModListSizeExt_v1610_items[i]);
}
    }
    if (value.has_controlResourceSetToReleaseListSizeExt_r16) {
enc.WriteConstrainedLength(value.controlResourceSetToReleaseListSizeExt_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.controlResourceSetToReleaseListSizeExt_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.controlResourceSetToReleaseListSizeExt_r16_items[i]), 0, 15);
}
    }
    if (value.has_searchSpacesToAddModListExt_r16) {
enc.WriteConstrainedLength(value.searchSpacesToAddModListExt_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.searchSpacesToAddModListExt_r16_count; ++i) {
    Encode_SearchSpaceExt_r16(enc, value.searchSpacesToAddModListExt_r16_items[i]);
}
    }
    if (value.has_uplinkCancellation_r16) {
        Encode_SetupRelease_UplinkCancellation_r16(enc, value.uplinkCancellation_r16);
    }
    if (value.has_monitoringCapabilityConfig_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.monitoringCapabilityConfig_r16), 0, 1);
    }
    if (value.has_searchSpaceSwitchConfig_r16) {
        Encode_SearchSpaceSwitchConfig_r16(enc, value.searchSpaceSwitchConfig_r16);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_Config_ExtGroup1(Decoder& dec, PDCCH_Config_ExtGroup1& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.controlResourceSetToAddModListSizeExt_v1610_count)) { goto fail; }
if (value.controlResourceSetToAddModListSizeExt_v1610_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.controlResourceSetToAddModListSizeExt_v1610_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.controlResourceSetToAddModListSizeExt_v1610_count > 0u) {
    value.controlResourceSetToAddModListSizeExt_v1610_items = (ControlResourceSet*)std::malloc((std::size_t)value.controlResourceSetToAddModListSizeExt_v1610_count * sizeof(ControlResourceSet));
    if (value.controlResourceSetToAddModListSizeExt_v1610_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.controlResourceSetToAddModListSizeExt_v1610_items, 0, (std::size_t)value.controlResourceSetToAddModListSizeExt_v1610_count * sizeof(ControlResourceSet));
}
for (std::uint32_t i = 0; i < value.controlResourceSetToAddModListSizeExt_v1610_count; ++i) {
    if (Decode_ControlResourceSet(dec, value.controlResourceSetToAddModListSizeExt_v1610_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.controlResourceSetToReleaseListSizeExt_r16_count)) { goto fail; }
if (value.controlResourceSetToReleaseListSizeExt_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.controlResourceSetToReleaseListSizeExt_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.controlResourceSetToReleaseListSizeExt_r16_count > 0u) {
    value.controlResourceSetToReleaseListSizeExt_r16_items = (ControlResourceSetId_r16*)std::malloc((std::size_t)value.controlResourceSetToReleaseListSizeExt_r16_count * sizeof(ControlResourceSetId_r16));
    if (value.controlResourceSetToReleaseListSizeExt_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.controlResourceSetToReleaseListSizeExt_r16_items, 0, (std::size_t)value.controlResourceSetToReleaseListSizeExt_r16_count * sizeof(ControlResourceSetId_r16));
}
for (std::uint32_t i = 0; i < value.controlResourceSetToReleaseListSizeExt_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
    value.controlResourceSetToReleaseListSizeExt_r16_items[i] = (ControlResourceSetId_r16)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.searchSpacesToAddModListExt_r16_count)) { goto fail; }
if (value.searchSpacesToAddModListExt_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.searchSpacesToAddModListExt_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.searchSpacesToAddModListExt_r16_count > 0u) {
    value.searchSpacesToAddModListExt_r16_items = (SearchSpaceExt_r16*)std::malloc((std::size_t)value.searchSpacesToAddModListExt_r16_count * sizeof(SearchSpaceExt_r16));
    if (value.searchSpacesToAddModListExt_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.searchSpacesToAddModListExt_r16_items, 0, (std::size_t)value.searchSpacesToAddModListExt_r16_count * sizeof(SearchSpaceExt_r16));
}
for (std::uint32_t i = 0; i < value.searchSpacesToAddModListExt_r16_count; ++i) {
    if (Decode_SearchSpaceExt_r16(dec, value.searchSpacesToAddModListExt_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_3) {
        if (Decode_SetupRelease_UplinkCancellation_r16(dec, value.uplinkCancellation_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.monitoringCapabilityConfig_r16 = (PDCCH_Config_ExtGroup1_MonitoringCapabilityConfig_r16)tmp_value;
    }
    if (present_5) {
        if (Decode_SearchSpaceSwitchConfig_r16(dec, value.searchSpaceSwitchConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_Config_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_Config_ExtGroup1(PDCCH_Config_ExtGroup1& value)
{
    if (value.has_controlResourceSetToAddModListSizeExt_v1610) {
        if (value.controlResourceSetToAddModListSizeExt_v1610_items != nullptr) {
            for (std::uint32_t i = 0; i < value.controlResourceSetToAddModListSizeExt_v1610_count; ++i) {
                Free_ControlResourceSet(value.controlResourceSetToAddModListSizeExt_v1610_items[i]);
            }
            std::free(value.controlResourceSetToAddModListSizeExt_v1610_items);
            value.controlResourceSetToAddModListSizeExt_v1610_items = nullptr;
        }
        value.controlResourceSetToAddModListSizeExt_v1610_count = 0;
    }
    if (value.has_controlResourceSetToReleaseListSizeExt_r16) {
        if (value.controlResourceSetToReleaseListSizeExt_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.controlResourceSetToReleaseListSizeExt_r16_count; ++i) {
            }
            std::free(value.controlResourceSetToReleaseListSizeExt_r16_items);
            value.controlResourceSetToReleaseListSizeExt_r16_items = nullptr;
        }
        value.controlResourceSetToReleaseListSizeExt_r16_count = 0;
    }
    if (value.has_searchSpacesToAddModListExt_r16) {
        if (value.searchSpacesToAddModListExt_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.searchSpacesToAddModListExt_r16_count; ++i) {
                Free_SearchSpaceExt_r16(value.searchSpacesToAddModListExt_r16_items[i]);
            }
            std::free(value.searchSpacesToAddModListExt_r16_items);
            value.searchSpacesToAddModListExt_r16_items = nullptr;
        }
        value.searchSpacesToAddModListExt_r16_count = 0;
    }
    if (value.has_uplinkCancellation_r16) {
        Free_SetupRelease_UplinkCancellation_r16(value.uplinkCancellation_r16);
    }
    if (value.has_monitoringCapabilityConfig_r16) {
    }
    if (value.has_searchSpaceSwitchConfig_r16) {
        Free_SearchSpaceSwitchConfig_r16(value.searchSpaceSwitchConfig_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceSwitchConfig_r17：ASN.1 SearchSpaceSwitchConfig-r17；源文件第 9179 行；SEQUENCE。
// Encode_SearchSpaceSwitchConfig_r17 只读不分配；Decode_SearchSpaceSwitchConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceSwitchConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceSwitchConfig_r17(Encoder& enc, const SearchSpaceSwitchConfig_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_searchSpaceSwitchTimer_r17);
    enc.WriteBit(value.has_searchSpaceSwitchDelay_r17);
    if (value.has_searchSpaceSwitchTimer_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.searchSpaceSwitchTimer_r17), 1, 166);
    }
    if (value.has_searchSpaceSwitchDelay_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.searchSpaceSwitchDelay_r17), 10, 52);
    }
    return enc.Error();
}

ErrorCode Decode_SearchSpaceSwitchConfig_r17(Decoder& dec, SearchSpaceSwitchConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 166, tmp_value)) { goto fail; }
        value.searchSpaceSwitchTimer_r17 = (SCS_SpecificDuration_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(10, 52, tmp_value)) { goto fail; }
        value.searchSpaceSwitchDelay_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpaceSwitchConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceSwitchConfig_r17(SearchSpaceSwitchConfig_r17& value)
{
    if (value.has_searchSpaceSwitchTimer_r17) {
    }
    if (value.has_searchSpaceSwitchDelay_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_Config_ExtGroup2：ASN.1 PDCCH_Config_ExtGroup2；源文件第 9162 行；扩展添加组 [[ ]]。
// Encode_PDCCH_Config_ExtGroup2 只读不分配；Decode_PDCCH_Config_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_Config_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_Config_ExtGroup2(Encoder& enc, const PDCCH_Config_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_searchSpacesToAddModListExt_v1700);
    enc.WriteBit(value.has_monitoringCapabilityConfig_v1710);
    enc.WriteBit(value.has_searchSpaceSwitchConfig_r17);
    enc.WriteBit(value.has_pdcch_SkippingDurationList_r17);
    if (value.has_searchSpacesToAddModListExt_v1700) {
enc.WriteConstrainedLength(value.searchSpacesToAddModListExt_v1700_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.searchSpacesToAddModListExt_v1700_count; ++i) {
    Encode_SearchSpaceExt_v1700(enc, value.searchSpacesToAddModListExt_v1700_items[i]);
}
    }
    if (value.has_monitoringCapabilityConfig_v1710) {
        enc.WriteConstrainedInteger((std::int64_t)(value.monitoringCapabilityConfig_v1710), 0, 0);
    }
    if (value.has_searchSpaceSwitchConfig_r17) {
        Encode_SearchSpaceSwitchConfig_r17(enc, value.searchSpaceSwitchConfig_r17);
    }
    if (value.has_pdcch_SkippingDurationList_r17) {
enc.WriteConstrainedLength(value.pdcch_SkippingDurationList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pdcch_SkippingDurationList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_SkippingDurationList_r17_items[i]), 1, 166);
}
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_Config_ExtGroup2(Decoder& dec, PDCCH_Config_ExtGroup2& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.searchSpacesToAddModListExt_v1700_count)) { goto fail; }
if (value.searchSpacesToAddModListExt_v1700_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.searchSpacesToAddModListExt_v1700_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.searchSpacesToAddModListExt_v1700_count > 0u) {
    value.searchSpacesToAddModListExt_v1700_items = (SearchSpaceExt_v1700*)std::malloc((std::size_t)value.searchSpacesToAddModListExt_v1700_count * sizeof(SearchSpaceExt_v1700));
    if (value.searchSpacesToAddModListExt_v1700_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.searchSpacesToAddModListExt_v1700_items, 0, (std::size_t)value.searchSpacesToAddModListExt_v1700_count * sizeof(SearchSpaceExt_v1700));
}
for (std::uint32_t i = 0; i < value.searchSpacesToAddModListExt_v1700_count; ++i) {
    if (Decode_SearchSpaceExt_v1700(dec, value.searchSpacesToAddModListExt_v1700_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
        value.monitoringCapabilityConfig_v1710 = (PDCCH_Config_ExtGroup2_MonitoringCapabilityConfig_v1710)0;
    }
    if (present_2) {
        if (Decode_SearchSpaceSwitchConfig_r17(dec, value.searchSpaceSwitchConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.pdcch_SkippingDurationList_r17_count)) { goto fail; }
if (value.pdcch_SkippingDurationList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pdcch_SkippingDurationList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pdcch_SkippingDurationList_r17_count > 0u) {
    value.pdcch_SkippingDurationList_r17_items = (SCS_SpecificDuration_r17*)std::malloc((std::size_t)value.pdcch_SkippingDurationList_r17_count * sizeof(SCS_SpecificDuration_r17));
    if (value.pdcch_SkippingDurationList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pdcch_SkippingDurationList_r17_items, 0, (std::size_t)value.pdcch_SkippingDurationList_r17_count * sizeof(SCS_SpecificDuration_r17));
}
for (std::uint32_t i = 0; i < value.pdcch_SkippingDurationList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 166, tmp_value)) { goto fail; }
    value.pdcch_SkippingDurationList_r17_items[i] = (SCS_SpecificDuration_r17)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_Config_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_Config_ExtGroup2(PDCCH_Config_ExtGroup2& value)
{
    if (value.has_searchSpacesToAddModListExt_v1700) {
        if (value.searchSpacesToAddModListExt_v1700_items != nullptr) {
            for (std::uint32_t i = 0; i < value.searchSpacesToAddModListExt_v1700_count; ++i) {
                Free_SearchSpaceExt_v1700(value.searchSpacesToAddModListExt_v1700_items[i]);
            }
            std::free(value.searchSpacesToAddModListExt_v1700_items);
            value.searchSpacesToAddModListExt_v1700_items = nullptr;
        }
        value.searchSpacesToAddModListExt_v1700_count = 0;
    }
    if (value.has_monitoringCapabilityConfig_v1710) {
    }
    if (value.has_searchSpaceSwitchConfig_r17) {
        Free_SearchSpaceSwitchConfig_r17(value.searchSpaceSwitchConfig_r17);
    }
    if (value.has_pdcch_SkippingDurationList_r17) {
        if (value.pdcch_SkippingDurationList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pdcch_SkippingDurationList_r17_count; ++i) {
            }
            std::free(value.pdcch_SkippingDurationList_r17_items);
            value.pdcch_SkippingDurationList_r17_items = nullptr;
        }
        value.pdcch_SkippingDurationList_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_Config_ExtGroup3：ASN.1 PDCCH_Config_ExtGroup3；源文件第 9168 行；扩展添加组 [[ ]]。
// Encode_PDCCH_Config_ExtGroup3 只读不分配；Decode_PDCCH_Config_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_Config_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_Config_ExtGroup3(Encoder& enc, const PDCCH_Config_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_pdcch_MonitoringResumptionAfterNack_r18);
    enc.WriteBit(value.has_searchSpacesToAddModListExt_v1800);
    if (value.has_pdcch_MonitoringResumptionAfterNack_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_MonitoringResumptionAfterNack_r18), 0, 0);
    }
    if (value.has_searchSpacesToAddModListExt_v1800) {
enc.WriteConstrainedLength(value.searchSpacesToAddModListExt_v1800_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.searchSpacesToAddModListExt_v1800_count; ++i) {
    Encode_SearchSpaceExt_v1800(enc, value.searchSpacesToAddModListExt_v1800_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_Config_ExtGroup3(Decoder& dec, PDCCH_Config_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.pdcch_MonitoringResumptionAfterNack_r18 = (PDCCH_Config_ExtGroup3_Pdcch_MonitoringResumptionAfterNack_r18)0;
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.searchSpacesToAddModListExt_v1800_count)) { goto fail; }
if (value.searchSpacesToAddModListExt_v1800_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.searchSpacesToAddModListExt_v1800_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.searchSpacesToAddModListExt_v1800_count > 0u) {
    value.searchSpacesToAddModListExt_v1800_items = (SearchSpaceExt_v1800*)std::malloc((std::size_t)value.searchSpacesToAddModListExt_v1800_count * sizeof(SearchSpaceExt_v1800));
    if (value.searchSpacesToAddModListExt_v1800_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.searchSpacesToAddModListExt_v1800_items, 0, (std::size_t)value.searchSpacesToAddModListExt_v1800_count * sizeof(SearchSpaceExt_v1800));
}
for (std::uint32_t i = 0; i < value.searchSpacesToAddModListExt_v1800_count; ++i) {
    if (Decode_SearchSpaceExt_v1800(dec, value.searchSpacesToAddModListExt_v1800_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_Config_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_Config_ExtGroup3(PDCCH_Config_ExtGroup3& value)
{
    if (value.has_pdcch_MonitoringResumptionAfterNack_r18) {
    }
    if (value.has_searchSpacesToAddModListExt_v1800) {
        if (value.searchSpacesToAddModListExt_v1800_items != nullptr) {
            for (std::uint32_t i = 0; i < value.searchSpacesToAddModListExt_v1800_count; ++i) {
                Free_SearchSpaceExt_v1800(value.searchSpacesToAddModListExt_v1800_items[i]);
            }
            std::free(value.searchSpacesToAddModListExt_v1800_items);
            value.searchSpacesToAddModListExt_v1800_items = nullptr;
        }
        value.searchSpacesToAddModListExt_v1800_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DownlinkPreemption：ASN.1 DownlinkPreemption；源文件第 6612 行；SEQUENCE。
// Encode_DownlinkPreemption 只读不分配；Decode_DownlinkPreemption 可能 malloc（失败时内部已释放并清零）；Free_DownlinkPreemption 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DownlinkPreemption(Encoder& enc, const DownlinkPreemption& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.int_RNTI), 0, 65535);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeFrequencySet), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.dci_PayloadSize), 0, 126);
enc.WriteConstrainedLength(value.int_ConfigurationPerServingCell_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.int_ConfigurationPerServingCell_count; ++i) {
    Encode_INT_ConfigurationPerServingCell(enc, value.int_ConfigurationPerServingCell_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_DownlinkPreemption(Decoder& dec, DownlinkPreemption& value)
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
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.int_RNTI = (RNTI_Value)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.timeFrequencySet = (DownlinkPreemption_TimeFrequencySet)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 126, tmp_value)) { goto fail; }
        value.dci_PayloadSize = (int64_t)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.int_ConfigurationPerServingCell_count)) { goto fail; }
if (value.int_ConfigurationPerServingCell_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.int_ConfigurationPerServingCell_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.int_ConfigurationPerServingCell_count > 0u) {
    value.int_ConfigurationPerServingCell_items = (INT_ConfigurationPerServingCell*)std::malloc((std::size_t)value.int_ConfigurationPerServingCell_count * sizeof(INT_ConfigurationPerServingCell));
    if (value.int_ConfigurationPerServingCell_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.int_ConfigurationPerServingCell_items, 0, (std::size_t)value.int_ConfigurationPerServingCell_count * sizeof(INT_ConfigurationPerServingCell));
}
for (std::uint32_t i = 0; i < value.int_ConfigurationPerServingCell_count; ++i) {
    if (Decode_INT_ConfigurationPerServingCell(dec, value.int_ConfigurationPerServingCell_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_DownlinkPreemption(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DownlinkPreemption(DownlinkPreemption& value)
{
    if (value.int_ConfigurationPerServingCell_items != nullptr) {
        for (std::uint32_t i = 0; i < value.int_ConfigurationPerServingCell_count; ++i) {
            Free_INT_ConfigurationPerServingCell(value.int_ConfigurationPerServingCell_items[i]);
        }
        std::free(value.int_ConfigurationPerServingCell_items);
        value.int_ConfigurationPerServingCell_items = nullptr;
    }
    value.int_ConfigurationPerServingCell_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_DownlinkPreemption：ASN.1 SetupRelease<DownlinkPreemption>；源文件第 9149 行；CHOICE。
// Encode_SetupRelease_DownlinkPreemption 只读不分配；Decode_SetupRelease_DownlinkPreemption 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_DownlinkPreemption 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_DownlinkPreemption(Encoder& enc, const SetupRelease_DownlinkPreemption& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DownlinkPreemption_Tag_release:
        (void)0;
        break;
    case SetupRelease_DownlinkPreemption_Tag_setup:
        Encode_DownlinkPreemption(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DownlinkPreemption(Decoder& dec, SetupRelease_DownlinkPreemption& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DownlinkPreemption_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DownlinkPreemption_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DownlinkPreemption_Tag_setup: {
        if (Decode_DownlinkPreemption(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DownlinkPreemption(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DownlinkPreemption(SetupRelease_DownlinkPreemption& value)
{
    switch (value.tag) {
    case SetupRelease_DownlinkPreemption_Tag_release:
        break;
    case SetupRelease_DownlinkPreemption_Tag_setup:
        Free_DownlinkPreemption(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PUSCH_TPC_CommandConfig：ASN.1 PUSCH-TPC-CommandConfig；源文件第 10638 行；SEQUENCE。
// Encode_PUSCH_TPC_CommandConfig 只读不分配；Decode_PUSCH_TPC_CommandConfig 可能 malloc（失败时内部已释放并清零）；Free_PUSCH_TPC_CommandConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PUSCH_TPC_CommandConfig(Encoder& enc, const PUSCH_TPC_CommandConfig& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_tpc_Index);
    enc.WriteBit(value.has_tpc_IndexSUL);
    enc.WriteBit(value.has_targetCell);
    if (value.has_tpc_Index) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tpc_Index), 1, 15);
    }
    if (value.has_tpc_IndexSUL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tpc_IndexSUL), 1, 15);
    }
    if (value.has_targetCell) {
        enc.WriteConstrainedInteger((std::int64_t)(value.targetCell), 0, 31);
    }
    return enc.Error();
}

ErrorCode Decode_PUSCH_TPC_CommandConfig(Decoder& dec, PUSCH_TPC_CommandConfig& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 15, tmp_value)) { goto fail; }
        value.tpc_Index = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 15, tmp_value)) { goto fail; }
        value.tpc_IndexSUL = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.targetCell = (ServCellIndex)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUSCH_TPC_CommandConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_TPC_CommandConfig(PUSCH_TPC_CommandConfig& value)
{
    if (value.has_tpc_Index) {
    }
    if (value.has_tpc_IndexSUL) {
    }
    if (value.has_targetCell) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PUSCH_TPC_CommandConfig：ASN.1 SetupRelease<PUSCH-TPC-CommandConfig>；源文件第 9150 行；CHOICE。
// Encode_SetupRelease_PUSCH_TPC_CommandConfig 只读不分配；Decode_SetupRelease_PUSCH_TPC_CommandConfig 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PUSCH_TPC_CommandConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PUSCH_TPC_CommandConfig(Encoder& enc, const SetupRelease_PUSCH_TPC_CommandConfig& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PUSCH_TPC_CommandConfig_Tag_release:
        (void)0;
        break;
    case SetupRelease_PUSCH_TPC_CommandConfig_Tag_setup:
        Encode_PUSCH_TPC_CommandConfig(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PUSCH_TPC_CommandConfig(Decoder& dec, SetupRelease_PUSCH_TPC_CommandConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PUSCH_TPC_CommandConfig_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PUSCH_TPC_CommandConfig_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PUSCH_TPC_CommandConfig_Tag_setup: {
        if (Decode_PUSCH_TPC_CommandConfig(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PUSCH_TPC_CommandConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PUSCH_TPC_CommandConfig(SetupRelease_PUSCH_TPC_CommandConfig& value)
{
    switch (value.tag) {
    case SetupRelease_PUSCH_TPC_CommandConfig_Tag_release:
        break;
    case SetupRelease_PUSCH_TPC_CommandConfig_Tag_setup:
        Free_PUSCH_TPC_CommandConfig(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PUCCH_TPC_CommandConfig_ExtGroup1：ASN.1 PUCCH_TPC_CommandConfig_ExtGroup1；源文件第 10261 行；扩展添加组 [[ ]]。
// Encode_PUCCH_TPC_CommandConfig_ExtGroup1 只读不分配；Decode_PUCCH_TPC_CommandConfig_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_PUCCH_TPC_CommandConfig_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PUCCH_TPC_CommandConfig_ExtGroup1(Encoder& enc, const PUCCH_TPC_CommandConfig_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_tpc_IndexPUCCH_sSCell_r17);
    enc.WriteBit(value.has_tpc_IndexPUCCH_sScellSecondaryPUCCHgroup_r17);
    if (value.has_tpc_IndexPUCCH_sSCell_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tpc_IndexPUCCH_sSCell_r17), 1, 15);
    }
    if (value.has_tpc_IndexPUCCH_sScellSecondaryPUCCHgroup_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tpc_IndexPUCCH_sScellSecondaryPUCCHgroup_r17), 1, 15);
    }
    return enc.Error();
}

ErrorCode Decode_PUCCH_TPC_CommandConfig_ExtGroup1(Decoder& dec, PUCCH_TPC_CommandConfig_ExtGroup1& value)
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
        value.tpc_IndexPUCCH_sSCell_r17 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 15, tmp_value)) { goto fail; }
        value.tpc_IndexPUCCH_sScellSecondaryPUCCHgroup_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_TPC_CommandConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_TPC_CommandConfig_ExtGroup1(PUCCH_TPC_CommandConfig_ExtGroup1& value)
{
    if (value.has_tpc_IndexPUCCH_sSCell_r17) {
    }
    if (value.has_tpc_IndexPUCCH_sScellSecondaryPUCCHgroup_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
