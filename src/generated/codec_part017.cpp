/* ============================================================================
 * src/generated/codec_part017.cpp — 生成的编解码函数
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

ErrorCode Encode_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Two(Encoder& enc, const CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Two& value)
{
    (void)value;
    enc.WriteFixedBitString(value.twoTX_CodebookSubsetRestriction.bytes, value.twoTX_CodebookSubsetRestriction.bitLength, 6, 6);
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Two(Decoder& dec, CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Two& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 6)) { goto fail; }
        string_length = 6;
        value.twoTX_CodebookSubsetRestriction.bytes = string_bytes;
        value.twoTX_CodebookSubsetRestriction.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Two(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Two(CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Two& value)
{
    std::free(value.twoTX_CodebookSubsetRestriction.bytes);
    value.twoTX_CodebookSubsetRestriction.bytes = nullptr;
    value.twoTX_CodebookSubsetRestriction.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2(Encoder& enc, const CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 12);
    switch (value.tag) {
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_two_one_TypeI_SinglePanel_Restriction:
        enc.WriteFixedBitString(value.u.two_one_TypeI_SinglePanel_Restriction.bytes, value.u.two_one_TypeI_SinglePanel_Restriction.bitLength, 8, 8);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_two_two_TypeI_SinglePanel_Restriction:
        enc.WriteFixedBitString(value.u.two_two_TypeI_SinglePanel_Restriction.bytes, value.u.two_two_TypeI_SinglePanel_Restriction.bitLength, 64, 64);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_one_TypeI_SinglePanel_Restriction:
        enc.WriteFixedBitString(value.u.four_one_TypeI_SinglePanel_Restriction.bytes, value.u.four_one_TypeI_SinglePanel_Restriction.bitLength, 16, 16);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_three_two_TypeI_SinglePanel_Restriction:
        enc.WriteFixedBitString(value.u.three_two_TypeI_SinglePanel_Restriction.bytes, value.u.three_two_TypeI_SinglePanel_Restriction.bitLength, 96, 96);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_six_one_TypeI_SinglePanel_Restriction:
        enc.WriteFixedBitString(value.u.six_one_TypeI_SinglePanel_Restriction.bytes, value.u.six_one_TypeI_SinglePanel_Restriction.bitLength, 24, 24);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_two_TypeI_SinglePanel_Restriction:
        enc.WriteFixedBitString(value.u.four_two_TypeI_SinglePanel_Restriction.bytes, value.u.four_two_TypeI_SinglePanel_Restriction.bitLength, 128, 128);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_eight_one_TypeI_SinglePanel_Restriction:
        enc.WriteFixedBitString(value.u.eight_one_TypeI_SinglePanel_Restriction.bytes, value.u.eight_one_TypeI_SinglePanel_Restriction.bitLength, 32, 32);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_three_TypeI_SinglePanel_Restriction:
        enc.WriteFixedBitString(value.u.four_three_TypeI_SinglePanel_Restriction.bytes, value.u.four_three_TypeI_SinglePanel_Restriction.bitLength, 192, 192);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_six_two_TypeI_SinglePanel_Restriction:
        enc.WriteFixedBitString(value.u.six_two_TypeI_SinglePanel_Restriction.bytes, value.u.six_two_TypeI_SinglePanel_Restriction.bitLength, 192, 192);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_twelve_one_TypeI_SinglePanel_Restriction:
        enc.WriteFixedBitString(value.u.twelve_one_TypeI_SinglePanel_Restriction.bytes, value.u.twelve_one_TypeI_SinglePanel_Restriction.bitLength, 48, 48);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_four_TypeI_SinglePanel_Restriction:
        enc.WriteFixedBitString(value.u.four_four_TypeI_SinglePanel_Restriction.bytes, value.u.four_four_TypeI_SinglePanel_Restriction.bitLength, 256, 256);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_eight_two_TypeI_SinglePanel_Restriction:
        enc.WriteFixedBitString(value.u.eight_two_TypeI_SinglePanel_Restriction.bytes, value.u.eight_two_TypeI_SinglePanel_Restriction.bitLength, 256, 256);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_sixteen_one_TypeI_SinglePanel_Restriction:
        enc.WriteFixedBitString(value.u.sixteen_one_TypeI_SinglePanel_Restriction.bytes, value.u.sixteen_one_TypeI_SinglePanel_Restriction.bitLength, 64, 64);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2(Decoder& dec, CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 12, root_index)) {
        goto fail;
    }
    value.tag = (CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag)root_index;
    switch (value.tag) {
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_two_one_TypeI_SinglePanel_Restriction: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.u.two_one_TypeI_SinglePanel_Restriction.bytes = string_bytes;
        value.u.two_one_TypeI_SinglePanel_Restriction.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_two_two_TypeI_SinglePanel_Restriction: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 64)) { goto fail; }
        string_length = 64;
        value.u.two_two_TypeI_SinglePanel_Restriction.bytes = string_bytes;
        value.u.two_two_TypeI_SinglePanel_Restriction.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_one_TypeI_SinglePanel_Restriction: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.u.four_one_TypeI_SinglePanel_Restriction.bytes = string_bytes;
        value.u.four_one_TypeI_SinglePanel_Restriction.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_three_two_TypeI_SinglePanel_Restriction: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 96)) { goto fail; }
        string_length = 96;
        value.u.three_two_TypeI_SinglePanel_Restriction.bytes = string_bytes;
        value.u.three_two_TypeI_SinglePanel_Restriction.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_six_one_TypeI_SinglePanel_Restriction: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.u.six_one_TypeI_SinglePanel_Restriction.bytes = string_bytes;
        value.u.six_one_TypeI_SinglePanel_Restriction.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_two_TypeI_SinglePanel_Restriction: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 128)) { goto fail; }
        string_length = 128;
        value.u.four_two_TypeI_SinglePanel_Restriction.bytes = string_bytes;
        value.u.four_two_TypeI_SinglePanel_Restriction.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_eight_one_TypeI_SinglePanel_Restriction: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 32)) { goto fail; }
        string_length = 32;
        value.u.eight_one_TypeI_SinglePanel_Restriction.bytes = string_bytes;
        value.u.eight_one_TypeI_SinglePanel_Restriction.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_three_TypeI_SinglePanel_Restriction: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 192)) { goto fail; }
        string_length = 192;
        value.u.four_three_TypeI_SinglePanel_Restriction.bytes = string_bytes;
        value.u.four_three_TypeI_SinglePanel_Restriction.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_six_two_TypeI_SinglePanel_Restriction: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 192)) { goto fail; }
        string_length = 192;
        value.u.six_two_TypeI_SinglePanel_Restriction.bytes = string_bytes;
        value.u.six_two_TypeI_SinglePanel_Restriction.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_twelve_one_TypeI_SinglePanel_Restriction: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 48)) { goto fail; }
        string_length = 48;
        value.u.twelve_one_TypeI_SinglePanel_Restriction.bytes = string_bytes;
        value.u.twelve_one_TypeI_SinglePanel_Restriction.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_four_TypeI_SinglePanel_Restriction: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 256)) { goto fail; }
        string_length = 256;
        value.u.four_four_TypeI_SinglePanel_Restriction.bytes = string_bytes;
        value.u.four_four_TypeI_SinglePanel_Restriction.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_eight_two_TypeI_SinglePanel_Restriction: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 256)) { goto fail; }
        string_length = 256;
        value.u.eight_two_TypeI_SinglePanel_Restriction.bytes = string_bytes;
        value.u.eight_two_TypeI_SinglePanel_Restriction.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_sixteen_one_TypeI_SinglePanel_Restriction: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 64)) { goto fail; }
        string_length = 64;
        value.u.sixteen_one_TypeI_SinglePanel_Restriction.bytes = string_bytes;
        value.u.sixteen_one_TypeI_SinglePanel_Restriction.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2(CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2& value)
{
    switch (value.tag) {
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_two_one_TypeI_SinglePanel_Restriction:
        std::free(value.u.two_one_TypeI_SinglePanel_Restriction.bytes);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_two_two_TypeI_SinglePanel_Restriction:
        std::free(value.u.two_two_TypeI_SinglePanel_Restriction.bytes);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_one_TypeI_SinglePanel_Restriction:
        std::free(value.u.four_one_TypeI_SinglePanel_Restriction.bytes);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_three_two_TypeI_SinglePanel_Restriction:
        std::free(value.u.three_two_TypeI_SinglePanel_Restriction.bytes);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_six_one_TypeI_SinglePanel_Restriction:
        std::free(value.u.six_one_TypeI_SinglePanel_Restriction.bytes);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_two_TypeI_SinglePanel_Restriction:
        std::free(value.u.four_two_TypeI_SinglePanel_Restriction.bytes);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_eight_one_TypeI_SinglePanel_Restriction:
        std::free(value.u.eight_one_TypeI_SinglePanel_Restriction.bytes);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_three_TypeI_SinglePanel_Restriction:
        std::free(value.u.four_three_TypeI_SinglePanel_Restriction.bytes);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_six_two_TypeI_SinglePanel_Restriction:
        std::free(value.u.six_two_TypeI_SinglePanel_Restriction.bytes);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_twelve_one_TypeI_SinglePanel_Restriction:
        std::free(value.u.twelve_one_TypeI_SinglePanel_Restriction.bytes);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_four_TypeI_SinglePanel_Restriction:
        std::free(value.u.four_four_TypeI_SinglePanel_Restriction.bytes);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_eight_two_TypeI_SinglePanel_Restriction:
        std::free(value.u.eight_two_TypeI_SinglePanel_Restriction.bytes);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_sixteen_one_TypeI_SinglePanel_Restriction:
        std::free(value.u.sixteen_one_TypeI_SinglePanel_Restriction.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo(Encoder& enc, const CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo& value)
{
    (void)value;
    enc.WriteBit(value.has_typeI_SinglePanel_codebookSubsetRestriction_i2);
    Encode_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2(enc, value.n1_n2);
    if (value.has_typeI_SinglePanel_codebookSubsetRestriction_i2) {
        enc.WriteFixedBitString(value.typeI_SinglePanel_codebookSubsetRestriction_i2.bytes, value.typeI_SinglePanel_codebookSubsetRestriction_i2.bitLength, 16, 16);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo(Decoder& dec, CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2(dec, value.n1_n2) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.typeI_SinglePanel_codebookSubsetRestriction_i2.bytes = string_bytes;
        value.typeI_SinglePanel_codebookSubsetRestriction_i2.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo(CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo& value)
{
    Free_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2(value.n1_n2);
    if (value.has_typeI_SinglePanel_codebookSubsetRestriction_i2) {
        std::free(value.typeI_SinglePanel_codebookSubsetRestriction_i2.bytes);
        value.typeI_SinglePanel_codebookSubsetRestriction_i2.bytes = nullptr;
        value.typeI_SinglePanel_codebookSubsetRestriction_i2.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts(Encoder& enc, const CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Tag_two:
        Encode_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Two(enc, value.u.two);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Tag_moreThanTwo:
        Encode_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo(enc, value.u.moreThanTwo);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts(Decoder& dec, CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Tag)root_index;
    switch (value.tag) {
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Tag_two: {
        if (Decode_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Two(dec, value.u.two) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Tag_moreThanTwo: {
        if (Decode_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo(dec, value.u.moreThanTwo) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts(CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts& value)
{
    switch (value.tag) {
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Tag_two:
        Free_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Two(value.u.two);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Tag_moreThanTwo:
        Free_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo(value.u.moreThanTwo);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel(Encoder& enc, const CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel& value)
{
    (void)value;
    Encode_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts(enc, value.nrOfAntennaPorts);
    enc.WriteFixedBitString(value.typeI_SinglePanel_ri_Restriction.bytes, value.typeI_SinglePanel_ri_Restriction.bitLength, 8, 8);
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel(Decoder& dec, CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts(dec, value.nrOfAntennaPorts) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.typeI_SinglePanel_ri_Restriction.bytes = string_bytes;
        value.typeI_SinglePanel_ri_Restriction.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel(CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel& value)
{
    Free_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts(value.nrOfAntennaPorts);
    std::free(value.typeI_SinglePanel_ri_Restriction.bytes);
    value.typeI_SinglePanel_ri_Restriction.bytes = nullptr;
    value.typeI_SinglePanel_ri_Restriction.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2(Encoder& enc, const CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 7);
    switch (value.tag) {
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_two_two_one_TypeI_MultiPanel_Restriction:
        enc.WriteFixedBitString(value.u.two_two_one_TypeI_MultiPanel_Restriction.bytes, value.u.two_two_one_TypeI_MultiPanel_Restriction.bitLength, 8, 8);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_two_four_one_TypeI_MultiPanel_Restriction:
        enc.WriteFixedBitString(value.u.two_four_one_TypeI_MultiPanel_Restriction.bytes, value.u.two_four_one_TypeI_MultiPanel_Restriction.bitLength, 16, 16);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_four_two_one_TypeI_MultiPanel_Restriction:
        enc.WriteFixedBitString(value.u.four_two_one_TypeI_MultiPanel_Restriction.bytes, value.u.four_two_one_TypeI_MultiPanel_Restriction.bitLength, 8, 8);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_two_two_two_TypeI_MultiPanel_Restriction:
        enc.WriteFixedBitString(value.u.two_two_two_TypeI_MultiPanel_Restriction.bytes, value.u.two_two_two_TypeI_MultiPanel_Restriction.bitLength, 64, 64);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_two_eight_one_TypeI_MultiPanel_Restriction:
        enc.WriteFixedBitString(value.u.two_eight_one_TypeI_MultiPanel_Restriction.bytes, value.u.two_eight_one_TypeI_MultiPanel_Restriction.bitLength, 32, 32);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_four_four_one_TypeI_MultiPanel_Restriction:
        enc.WriteFixedBitString(value.u.four_four_one_TypeI_MultiPanel_Restriction.bytes, value.u.four_four_one_TypeI_MultiPanel_Restriction.bitLength, 16, 16);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_two_four_two_TypeI_MultiPanel_Restriction:
        enc.WriteFixedBitString(value.u.two_four_two_TypeI_MultiPanel_Restriction.bytes, value.u.two_four_two_TypeI_MultiPanel_Restriction.bitLength, 128, 128);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_four_two_two_TypeI_MultiPanel_Restriction:
        enc.WriteFixedBitString(value.u.four_two_two_TypeI_MultiPanel_Restriction.bytes, value.u.four_two_two_TypeI_MultiPanel_Restriction.bitLength, 64, 64);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2(Decoder& dec, CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 7, root_index)) {
        goto fail;
    }
    value.tag = (CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag)root_index;
    switch (value.tag) {
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_two_two_one_TypeI_MultiPanel_Restriction: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.u.two_two_one_TypeI_MultiPanel_Restriction.bytes = string_bytes;
        value.u.two_two_one_TypeI_MultiPanel_Restriction.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_two_four_one_TypeI_MultiPanel_Restriction: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.u.two_four_one_TypeI_MultiPanel_Restriction.bytes = string_bytes;
        value.u.two_four_one_TypeI_MultiPanel_Restriction.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_four_two_one_TypeI_MultiPanel_Restriction: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.u.four_two_one_TypeI_MultiPanel_Restriction.bytes = string_bytes;
        value.u.four_two_one_TypeI_MultiPanel_Restriction.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_two_two_two_TypeI_MultiPanel_Restriction: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 64)) { goto fail; }
        string_length = 64;
        value.u.two_two_two_TypeI_MultiPanel_Restriction.bytes = string_bytes;
        value.u.two_two_two_TypeI_MultiPanel_Restriction.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_two_eight_one_TypeI_MultiPanel_Restriction: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 32)) { goto fail; }
        string_length = 32;
        value.u.two_eight_one_TypeI_MultiPanel_Restriction.bytes = string_bytes;
        value.u.two_eight_one_TypeI_MultiPanel_Restriction.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_four_four_one_TypeI_MultiPanel_Restriction: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.u.four_four_one_TypeI_MultiPanel_Restriction.bytes = string_bytes;
        value.u.four_four_one_TypeI_MultiPanel_Restriction.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_two_four_two_TypeI_MultiPanel_Restriction: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 128)) { goto fail; }
        string_length = 128;
        value.u.two_four_two_TypeI_MultiPanel_Restriction.bytes = string_bytes;
        value.u.two_four_two_TypeI_MultiPanel_Restriction.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_four_two_two_TypeI_MultiPanel_Restriction: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 64)) { goto fail; }
        string_length = 64;
        value.u.four_two_two_TypeI_MultiPanel_Restriction.bytes = string_bytes;
        value.u.four_two_two_TypeI_MultiPanel_Restriction.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2(CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2& value)
{
    switch (value.tag) {
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_two_two_one_TypeI_MultiPanel_Restriction:
        std::free(value.u.two_two_one_TypeI_MultiPanel_Restriction.bytes);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_two_four_one_TypeI_MultiPanel_Restriction:
        std::free(value.u.two_four_one_TypeI_MultiPanel_Restriction.bytes);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_four_two_one_TypeI_MultiPanel_Restriction:
        std::free(value.u.four_two_one_TypeI_MultiPanel_Restriction.bytes);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_two_two_two_TypeI_MultiPanel_Restriction:
        std::free(value.u.two_two_two_TypeI_MultiPanel_Restriction.bytes);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_two_eight_one_TypeI_MultiPanel_Restriction:
        std::free(value.u.two_eight_one_TypeI_MultiPanel_Restriction.bytes);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_four_four_one_TypeI_MultiPanel_Restriction:
        std::free(value.u.four_four_one_TypeI_MultiPanel_Restriction.bytes);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_two_four_two_TypeI_MultiPanel_Restriction:
        std::free(value.u.two_four_two_TypeI_MultiPanel_Restriction.bytes);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_four_two_two_TypeI_MultiPanel_Restriction:
        std::free(value.u.four_two_two_TypeI_MultiPanel_Restriction.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel(Encoder& enc, const CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel& value)
{
    (void)value;
    Encode_CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2(enc, value.ng_n1_n2);
    enc.WriteFixedBitString(value.ri_Restriction.bytes, value.ri_Restriction.bitLength, 4, 4);
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel(Decoder& dec, CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2(dec, value.ng_n1_n2) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 4)) { goto fail; }
        string_length = 4;
        value.ri_Restriction.bytes = string_bytes;
        value.ri_Restriction.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel(CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel& value)
{
    Free_CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2(value.ng_n1_n2);
    std::free(value.ri_Restriction.bytes);
    value.ri_Restriction.bytes = nullptr;
    value.ri_Restriction.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_CodebookType_Type1_SubType(Encoder& enc, const CodebookConfig_CodebookType_Type1_SubType& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CodebookConfig_CodebookType_Type1_SubType_Tag_typeI_SinglePanel:
        Encode_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel(enc, value.u.typeI_SinglePanel);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_Tag_typeI_MultiPanel:
        Encode_CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel(enc, value.u.typeI_MultiPanel);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_CodebookType_Type1_SubType(Decoder& dec, CodebookConfig_CodebookType_Type1_SubType& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CodebookConfig_CodebookType_Type1_SubType_Tag)root_index;
    switch (value.tag) {
    case CodebookConfig_CodebookType_Type1_SubType_Tag_typeI_SinglePanel: {
        if (Decode_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel(dec, value.u.typeI_SinglePanel) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case CodebookConfig_CodebookType_Type1_SubType_Tag_typeI_MultiPanel: {
        if (Decode_CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel(dec, value.u.typeI_MultiPanel) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_CodebookType_Type1_SubType(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_CodebookType_Type1_SubType(CodebookConfig_CodebookType_Type1_SubType& value)
{
    switch (value.tag) {
    case CodebookConfig_CodebookType_Type1_SubType_Tag_typeI_SinglePanel:
        Free_CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel(value.u.typeI_SinglePanel);
        break;
    case CodebookConfig_CodebookType_Type1_SubType_Tag_typeI_MultiPanel:
        Free_CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel(value.u.typeI_MultiPanel);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_CodebookType_Type1(Encoder& enc, const CodebookConfig_CodebookType_Type1& value)
{
    (void)value;
    Encode_CodebookConfig_CodebookType_Type1_SubType(enc, value.subType);
    enc.WriteConstrainedInteger((std::int64_t)(value.codebookMode), 1, 2);
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_CodebookType_Type1(Decoder& dec, CodebookConfig_CodebookType_Type1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CodebookConfig_CodebookType_Type1_SubType(dec, value.subType) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.codebookMode = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_CodebookType_Type1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_CodebookType_Type1(CodebookConfig_CodebookType_Type1& value)
{
    Free_CodebookConfig_CodebookType_Type1_SubType(value.subType);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction(Encoder& enc, const CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 12);
    switch (value.tag) {
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_two_one:
        enc.WriteFixedBitString(value.u.two_one.bytes, value.u.two_one.bitLength, 16, 16);
        break;
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_two_two:
        enc.WriteFixedBitString(value.u.two_two.bytes, value.u.two_two.bitLength, 43, 43);
        break;
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_four_one:
        enc.WriteFixedBitString(value.u.four_one.bytes, value.u.four_one.bitLength, 32, 32);
        break;
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_three_two:
        enc.WriteFixedBitString(value.u.three_two.bytes, value.u.three_two.bitLength, 59, 59);
        break;
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_six_one:
        enc.WriteFixedBitString(value.u.six_one.bytes, value.u.six_one.bitLength, 48, 48);
        break;
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_four_two:
        enc.WriteFixedBitString(value.u.four_two.bytes, value.u.four_two.bitLength, 75, 75);
        break;
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_eight_one:
        enc.WriteFixedBitString(value.u.eight_one.bytes, value.u.eight_one.bitLength, 64, 64);
        break;
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_four_three:
        enc.WriteFixedBitString(value.u.four_three.bytes, value.u.four_three.bitLength, 107, 107);
        break;
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_six_two:
        enc.WriteFixedBitString(value.u.six_two.bytes, value.u.six_two.bitLength, 107, 107);
        break;
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_twelve_one:
        enc.WriteFixedBitString(value.u.twelve_one.bytes, value.u.twelve_one.bitLength, 96, 96);
        break;
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_four_four:
        enc.WriteFixedBitString(value.u.four_four.bytes, value.u.four_four.bitLength, 139, 139);
        break;
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_eight_two:
        enc.WriteFixedBitString(value.u.eight_two.bytes, value.u.eight_two.bitLength, 139, 139);
        break;
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_sixteen_one:
        enc.WriteFixedBitString(value.u.sixteen_one.bytes, value.u.sixteen_one.bitLength, 128, 128);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction(Decoder& dec, CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 12, root_index)) {
        goto fail;
    }
    value.tag = (CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag)root_index;
    switch (value.tag) {
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_two_one: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.u.two_one.bytes = string_bytes;
        value.u.two_one.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_two_two: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 43)) { goto fail; }
        string_length = 43;
        value.u.two_two.bytes = string_bytes;
        value.u.two_two.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_four_one: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 32)) { goto fail; }
        string_length = 32;
        value.u.four_one.bytes = string_bytes;
        value.u.four_one.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_three_two: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 59)) { goto fail; }
        string_length = 59;
        value.u.three_two.bytes = string_bytes;
        value.u.three_two.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_six_one: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 48)) { goto fail; }
        string_length = 48;
        value.u.six_one.bytes = string_bytes;
        value.u.six_one.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_four_two: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 75)) { goto fail; }
        string_length = 75;
        value.u.four_two.bytes = string_bytes;
        value.u.four_two.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_eight_one: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 64)) { goto fail; }
        string_length = 64;
        value.u.eight_one.bytes = string_bytes;
        value.u.eight_one.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_four_three: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 107)) { goto fail; }
        string_length = 107;
        value.u.four_three.bytes = string_bytes;
        value.u.four_three.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_six_two: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 107)) { goto fail; }
        string_length = 107;
        value.u.six_two.bytes = string_bytes;
        value.u.six_two.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_twelve_one: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 96)) { goto fail; }
        string_length = 96;
        value.u.twelve_one.bytes = string_bytes;
        value.u.twelve_one.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_four_four: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 139)) { goto fail; }
        string_length = 139;
        value.u.four_four.bytes = string_bytes;
        value.u.four_four.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_eight_two: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 139)) { goto fail; }
        string_length = 139;
        value.u.eight_two.bytes = string_bytes;
        value.u.eight_two.bitLength = string_length;
        break;
    }
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_sixteen_one: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 128)) { goto fail; }
        string_length = 128;
        value.u.sixteen_one.bytes = string_bytes;
        value.u.sixteen_one.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction(CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction& value)
{
    switch (value.tag) {
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_two_one:
        std::free(value.u.two_one.bytes);
        break;
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_two_two:
        std::free(value.u.two_two.bytes);
        break;
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_four_one:
        std::free(value.u.four_one.bytes);
        break;
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_three_two:
        std::free(value.u.three_two.bytes);
        break;
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_six_one:
        std::free(value.u.six_one.bytes);
        break;
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_four_two:
        std::free(value.u.four_two.bytes);
        break;
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_eight_one:
        std::free(value.u.eight_one.bytes);
        break;
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_four_three:
        std::free(value.u.four_three.bytes);
        break;
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_six_two:
        std::free(value.u.six_two.bytes);
        break;
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_twelve_one:
        std::free(value.u.twelve_one.bytes);
        break;
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_four_four:
        std::free(value.u.four_four.bytes);
        break;
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_eight_two:
        std::free(value.u.eight_two.bytes);
        break;
    case CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_sixteen_one:
        std::free(value.u.sixteen_one.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_CodebookType_Type2_SubType_TypeII(Encoder& enc, const CodebookConfig_CodebookType_Type2_SubType_TypeII& value)
{
    (void)value;
    Encode_CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction(enc, value.n1_n2_codebookSubsetRestriction);
    enc.WriteFixedBitString(value.typeII_RI_Restriction.bytes, value.typeII_RI_Restriction.bitLength, 2, 2);
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_CodebookType_Type2_SubType_TypeII(Decoder& dec, CodebookConfig_CodebookType_Type2_SubType_TypeII& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction(dec, value.n1_n2_codebookSubsetRestriction) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 2)) { goto fail; }
        string_length = 2;
        value.typeII_RI_Restriction.bytes = string_bytes;
        value.typeII_RI_Restriction.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_CodebookType_Type2_SubType_TypeII(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_CodebookType_Type2_SubType_TypeII(CodebookConfig_CodebookType_Type2_SubType_TypeII& value)
{
    Free_CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction(value.n1_n2_codebookSubsetRestriction);
    std::free(value.typeII_RI_Restriction.bytes);
    value.typeII_RI_Restriction.bytes = nullptr;
    value.typeII_RI_Restriction.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_CodebookType_Type2_SubType_TypeII_PortSelection(Encoder& enc, const CodebookConfig_CodebookType_Type2_SubType_TypeII_PortSelection& value)
{
    (void)value;
    enc.WriteBit(value.has_portSelectionSamplingSize);
    if (value.has_portSelectionSamplingSize) {
        enc.WriteConstrainedInteger((std::int64_t)(value.portSelectionSamplingSize), 0, 3);
    }
    enc.WriteFixedBitString(value.typeII_PortSelectionRI_Restriction.bytes, value.typeII_PortSelectionRI_Restriction.bitLength, 2, 2);
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_CodebookType_Type2_SubType_TypeII_PortSelection(Decoder& dec, CodebookConfig_CodebookType_Type2_SubType_TypeII_PortSelection& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.portSelectionSamplingSize = (CodebookConfig_CodebookType_Type2_SubType_TypeII_PortSelectionSamplingSize)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 2)) { goto fail; }
        string_length = 2;
        value.typeII_PortSelectionRI_Restriction.bytes = string_bytes;
        value.typeII_PortSelectionRI_Restriction.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_CodebookType_Type2_SubType_TypeII_PortSelection(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_CodebookType_Type2_SubType_TypeII_PortSelection(CodebookConfig_CodebookType_Type2_SubType_TypeII_PortSelection& value)
{
    if (value.has_portSelectionSamplingSize) {
    }
    std::free(value.typeII_PortSelectionRI_Restriction.bytes);
    value.typeII_PortSelectionRI_Restriction.bytes = nullptr;
    value.typeII_PortSelectionRI_Restriction.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_CodebookType_Type2_SubType(Encoder& enc, const CodebookConfig_CodebookType_Type2_SubType& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CodebookConfig_CodebookType_Type2_SubType_Tag_typeII:
        Encode_CodebookConfig_CodebookType_Type2_SubType_TypeII(enc, value.u.typeII);
        break;
    case CodebookConfig_CodebookType_Type2_SubType_Tag_typeII_PortSelection:
        Encode_CodebookConfig_CodebookType_Type2_SubType_TypeII_PortSelection(enc, value.u.typeII_PortSelection);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_CodebookType_Type2_SubType(Decoder& dec, CodebookConfig_CodebookType_Type2_SubType& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CodebookConfig_CodebookType_Type2_SubType_Tag)root_index;
    switch (value.tag) {
    case CodebookConfig_CodebookType_Type2_SubType_Tag_typeII: {
        if (Decode_CodebookConfig_CodebookType_Type2_SubType_TypeII(dec, value.u.typeII) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case CodebookConfig_CodebookType_Type2_SubType_Tag_typeII_PortSelection: {
        if (Decode_CodebookConfig_CodebookType_Type2_SubType_TypeII_PortSelection(dec, value.u.typeII_PortSelection) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_CodebookType_Type2_SubType(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_CodebookType_Type2_SubType(CodebookConfig_CodebookType_Type2_SubType& value)
{
    switch (value.tag) {
    case CodebookConfig_CodebookType_Type2_SubType_Tag_typeII:
        Free_CodebookConfig_CodebookType_Type2_SubType_TypeII(value.u.typeII);
        break;
    case CodebookConfig_CodebookType_Type2_SubType_Tag_typeII_PortSelection:
        Free_CodebookConfig_CodebookType_Type2_SubType_TypeII_PortSelection(value.u.typeII_PortSelection);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_CodebookType_Type2(Encoder& enc, const CodebookConfig_CodebookType_Type2& value)
{
    (void)value;
    Encode_CodebookConfig_CodebookType_Type2_SubType(enc, value.subType);
    enc.WriteConstrainedInteger((std::int64_t)(value.phaseAlphabetSize), 0, 1);
    enc.WriteBool(value.subbandAmplitude);
    enc.WriteConstrainedInteger((std::int64_t)(value.numberOfBeams), 0, 2);
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_CodebookType_Type2(Decoder& dec, CodebookConfig_CodebookType_Type2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CodebookConfig_CodebookType_Type2_SubType(dec, value.subType) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.phaseAlphabetSize = (CodebookConfig_CodebookType_Type2_PhaseAlphabetSize)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.subbandAmplitude = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.numberOfBeams = (CodebookConfig_CodebookType_Type2_NumberOfBeams)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_CodebookType_Type2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_CodebookType_Type2(CodebookConfig_CodebookType_Type2& value)
{
    Free_CodebookConfig_CodebookType_Type2_SubType(value.subType);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_CodebookType(Encoder& enc, const CodebookConfig_CodebookType& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CodebookConfig_CodebookType_Tag_type1:
        Encode_CodebookConfig_CodebookType_Type1(enc, value.u.type1);
        break;
    case CodebookConfig_CodebookType_Tag_type2:
        Encode_CodebookConfig_CodebookType_Type2(enc, value.u.type2);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_CodebookType(Decoder& dec, CodebookConfig_CodebookType& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CodebookConfig_CodebookType_Tag)root_index;
    switch (value.tag) {
    case CodebookConfig_CodebookType_Tag_type1: {
        if (Decode_CodebookConfig_CodebookType_Type1(dec, value.u.type1) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case CodebookConfig_CodebookType_Tag_type2: {
        if (Decode_CodebookConfig_CodebookType_Type2(dec, value.u.type2) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_CodebookType(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_CodebookType(CodebookConfig_CodebookType& value)
{
    switch (value.tag) {
    case CodebookConfig_CodebookType_Tag_type1:
        Free_CodebookConfig_CodebookType_Type1(value.u.type1);
        break;
    case CodebookConfig_CodebookType_Tag_type2:
        Free_CodebookConfig_CodebookType_Type2(value.u.type2);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig(Encoder& enc, const CodebookConfig& value)
{
    (void)value;
    Encode_CodebookConfig_CodebookType(enc, value.codebookType);
    return enc.Error();
}

ErrorCode Decode_CodebookConfig(Decoder& dec, CodebookConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CodebookConfig_CodebookType(dec, value.codebookType) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig(CodebookConfig& value)
{
    Free_CodebookConfig_CodebookType(value.codebookType);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16(Encoder& enc, const CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 12);
    switch (value.tag) {
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_two_one:
        enc.WriteFixedBitString(value.u.two_one.bytes, value.u.two_one.bitLength, 16, 16);
        break;
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_two_two:
        enc.WriteFixedBitString(value.u.two_two.bytes, value.u.two_two.bitLength, 43, 43);
        break;
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_four_one:
        enc.WriteFixedBitString(value.u.four_one.bytes, value.u.four_one.bitLength, 32, 32);
        break;
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_three_two:
        enc.WriteFixedBitString(value.u.three_two.bytes, value.u.three_two.bitLength, 59, 59);
        break;
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_six_one:
        enc.WriteFixedBitString(value.u.six_one.bytes, value.u.six_one.bitLength, 48, 48);
        break;
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_four_two:
        enc.WriteFixedBitString(value.u.four_two.bytes, value.u.four_two.bitLength, 75, 75);
        break;
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_eight_one:
        enc.WriteFixedBitString(value.u.eight_one.bytes, value.u.eight_one.bitLength, 64, 64);
        break;
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_four_three:
        enc.WriteFixedBitString(value.u.four_three.bytes, value.u.four_three.bitLength, 107, 107);
        break;
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_six_two:
        enc.WriteFixedBitString(value.u.six_two.bytes, value.u.six_two.bitLength, 107, 107);
        break;
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_twelve_one:
        enc.WriteFixedBitString(value.u.twelve_one.bytes, value.u.twelve_one.bitLength, 96, 96);
        break;
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_four_four:
        enc.WriteFixedBitString(value.u.four_four.bytes, value.u.four_four.bitLength, 139, 139);
        break;
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_eight_two:
        enc.WriteFixedBitString(value.u.eight_two.bytes, value.u.eight_two.bitLength, 139, 139);
        break;
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_sixteen_one:
        enc.WriteFixedBitString(value.u.sixteen_one.bytes, value.u.sixteen_one.bitLength, 128, 128);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16(Decoder& dec, CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 12, root_index)) {
        goto fail;
    }
    value.tag = (CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag)root_index;
    switch (value.tag) {
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_two_one: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.u.two_one.bytes = string_bytes;
        value.u.two_one.bitLength = string_length;
        break;
    }
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_two_two: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 43)) { goto fail; }
        string_length = 43;
        value.u.two_two.bytes = string_bytes;
        value.u.two_two.bitLength = string_length;
        break;
    }
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_four_one: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 32)) { goto fail; }
        string_length = 32;
        value.u.four_one.bytes = string_bytes;
        value.u.four_one.bitLength = string_length;
        break;
    }
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_three_two: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 59)) { goto fail; }
        string_length = 59;
        value.u.three_two.bytes = string_bytes;
        value.u.three_two.bitLength = string_length;
        break;
    }
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_six_one: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 48)) { goto fail; }
        string_length = 48;
        value.u.six_one.bytes = string_bytes;
        value.u.six_one.bitLength = string_length;
        break;
    }
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_four_two: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 75)) { goto fail; }
        string_length = 75;
        value.u.four_two.bytes = string_bytes;
        value.u.four_two.bitLength = string_length;
        break;
    }
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_eight_one: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 64)) { goto fail; }
        string_length = 64;
        value.u.eight_one.bytes = string_bytes;
        value.u.eight_one.bitLength = string_length;
        break;
    }
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_four_three: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 107)) { goto fail; }
        string_length = 107;
        value.u.four_three.bytes = string_bytes;
        value.u.four_three.bitLength = string_length;
        break;
    }
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_six_two: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 107)) { goto fail; }
        string_length = 107;
        value.u.six_two.bytes = string_bytes;
        value.u.six_two.bitLength = string_length;
        break;
    }
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_twelve_one: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 96)) { goto fail; }
        string_length = 96;
        value.u.twelve_one.bytes = string_bytes;
        value.u.twelve_one.bitLength = string_length;
        break;
    }
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_four_four: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 139)) { goto fail; }
        string_length = 139;
        value.u.four_four.bytes = string_bytes;
        value.u.four_four.bitLength = string_length;
        break;
    }
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_eight_two: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 139)) { goto fail; }
        string_length = 139;
        value.u.eight_two.bytes = string_bytes;
        value.u.eight_two.bitLength = string_length;
        break;
    }
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_sixteen_one: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 128)) { goto fail; }
        string_length = 128;
        value.u.sixteen_one.bytes = string_bytes;
        value.u.sixteen_one.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16(CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16& value)
{
    switch (value.tag) {
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_two_one:
        std::free(value.u.two_one.bytes);
        break;
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_two_two:
        std::free(value.u.two_two.bytes);
        break;
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_four_one:
        std::free(value.u.four_one.bytes);
        break;
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_three_two:
        std::free(value.u.three_two.bytes);
        break;
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_six_one:
        std::free(value.u.six_one.bytes);
        break;
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_four_two:
        std::free(value.u.four_two.bytes);
        break;
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_eight_one:
        std::free(value.u.eight_one.bytes);
        break;
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_four_three:
        std::free(value.u.four_three.bytes);
        break;
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_six_two:
        std::free(value.u.six_two.bytes);
        break;
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_twelve_one:
        std::free(value.u.twelve_one.bytes);
        break;
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_four_four:
        std::free(value.u.four_four.bytes);
        break;
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_eight_two:
        std::free(value.u.eight_two.bytes);
        break;
    case CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_sixteen_one:
        std::free(value.u.sixteen_one.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16(Encoder& enc, const CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16& value)
{
    (void)value;
    Encode_CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16(enc, value.n1_n2_codebookSubsetRestriction_r16);
    enc.WriteFixedBitString(value.typeII_RI_Restriction_r16.bytes, value.typeII_RI_Restriction_r16.bitLength, 4, 4);
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16(Decoder& dec, CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16(dec, value.n1_n2_codebookSubsetRestriction_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 4)) { goto fail; }
        string_length = 4;
        value.typeII_RI_Restriction_r16.bytes = string_bytes;
        value.typeII_RI_Restriction_r16.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16(CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16& value)
{
    Free_CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16(value.n1_n2_codebookSubsetRestriction_r16);
    std::free(value.typeII_RI_Restriction_r16.bytes);
    value.typeII_RI_Restriction_r16.bytes = nullptr;
    value.typeII_RI_Restriction_r16.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_PortSelection_r16(Encoder& enc, const CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_PortSelection_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.portSelectionSamplingSize_r16), 0, 3);
    enc.WriteFixedBitString(value.typeII_PortSelectionRI_Restriction_r16.bytes, value.typeII_PortSelectionRI_Restriction_r16.bitLength, 4, 4);
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_PortSelection_r16(Decoder& dec, CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_PortSelection_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.portSelectionSamplingSize_r16 = (CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_PortSelection_r16_PortSelectionSamplingSize_r16)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 4)) { goto fail; }
        string_length = 4;
        value.typeII_PortSelectionRI_Restriction_r16.bytes = string_bytes;
        value.typeII_PortSelectionRI_Restriction_r16.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_PortSelection_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_PortSelection_r16(CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_PortSelection_r16& value)
{
    std::free(value.typeII_PortSelectionRI_Restriction_r16.bytes);
    value.typeII_PortSelectionRI_Restriction_r16.bytes = nullptr;
    value.typeII_PortSelectionRI_Restriction_r16.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r16_CodebookType_Type2_SubType(Encoder& enc, const CodebookConfig_r16_CodebookType_Type2_SubType& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CodebookConfig_r16_CodebookType_Type2_SubType_Tag_typeII_r16:
        Encode_CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16(enc, value.u.typeII_r16);
        break;
    case CodebookConfig_r16_CodebookType_Type2_SubType_Tag_typeII_PortSelection_r16:
        Encode_CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_PortSelection_r16(enc, value.u.typeII_PortSelection_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r16_CodebookType_Type2_SubType(Decoder& dec, CodebookConfig_r16_CodebookType_Type2_SubType& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CodebookConfig_r16_CodebookType_Type2_SubType_Tag)root_index;
    switch (value.tag) {
    case CodebookConfig_r16_CodebookType_Type2_SubType_Tag_typeII_r16: {
        if (Decode_CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16(dec, value.u.typeII_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case CodebookConfig_r16_CodebookType_Type2_SubType_Tag_typeII_PortSelection_r16: {
        if (Decode_CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_PortSelection_r16(dec, value.u.typeII_PortSelection_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r16_CodebookType_Type2_SubType(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r16_CodebookType_Type2_SubType(CodebookConfig_r16_CodebookType_Type2_SubType& value)
{
    switch (value.tag) {
    case CodebookConfig_r16_CodebookType_Type2_SubType_Tag_typeII_r16:
        Free_CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16(value.u.typeII_r16);
        break;
    case CodebookConfig_r16_CodebookType_Type2_SubType_Tag_typeII_PortSelection_r16:
        Free_CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_PortSelection_r16(value.u.typeII_PortSelection_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r16_CodebookType_Type2(Encoder& enc, const CodebookConfig_r16_CodebookType_Type2& value)
{
    (void)value;
    Encode_CodebookConfig_r16_CodebookType_Type2_SubType(enc, value.subType);
    enc.WriteConstrainedInteger((std::int64_t)(value.numberOfPMI_SubbandsPerCQI_Subband_r16), 1, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.paramCombination_r16), 1, 8);
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r16_CodebookType_Type2(Decoder& dec, CodebookConfig_r16_CodebookType_Type2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CodebookConfig_r16_CodebookType_Type2_SubType(dec, value.subType) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.numberOfPMI_SubbandsPerCQI_Subband_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.paramCombination_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r16_CodebookType_Type2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r16_CodebookType_Type2(CodebookConfig_r16_CodebookType_Type2& value)
{
    Free_CodebookConfig_r16_CodebookType_Type2_SubType(value.subType);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r16_CodebookType(Encoder& enc, const CodebookConfig_r16_CodebookType& value)
{
    switch (value.tag) {
    case CodebookConfig_r16_CodebookType_Tag_type2:
        Encode_CodebookConfig_r16_CodebookType_Type2(enc, value.u.type2);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r16_CodebookType(Decoder& dec, CodebookConfig_r16_CodebookType& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    value.tag = (CodebookConfig_r16_CodebookType_Tag)0;
    switch (value.tag) {
    case CodebookConfig_r16_CodebookType_Tag_type2: {
        if (Decode_CodebookConfig_r16_CodebookType_Type2(dec, value.u.type2) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r16_CodebookType(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r16_CodebookType(CodebookConfig_r16_CodebookType& value)
{
    switch (value.tag) {
    case CodebookConfig_r16_CodebookType_Tag_type2:
        Free_CodebookConfig_r16_CodebookType_Type2(value.u.type2);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r16(Encoder& enc, const CodebookConfig_r16& value)
{
    (void)value;
    Encode_CodebookConfig_r16_CodebookType(enc, value.codebookType);
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r16(Decoder& dec, CodebookConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CodebookConfig_r16_CodebookType(dec, value.codebookType) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r16(CodebookConfig_r16& value)
{
    Free_CodebookConfig_r16_CodebookType(value.codebookType);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Two(Encoder& enc, const CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Two& value)
{
    (void)value;
    enc.WriteFixedBitString(value.twoTX_CodebookSubsetRestriction1_r17.bytes, value.twoTX_CodebookSubsetRestriction1_r17.bitLength, 6, 6);
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Two(Decoder& dec, CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Two& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 6)) { goto fail; }
        string_length = 6;
        value.twoTX_CodebookSubsetRestriction1_r17.bytes = string_bytes;
        value.twoTX_CodebookSubsetRestriction1_r17.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Two(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Two(CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Two& value)
{
    std::free(value.twoTX_CodebookSubsetRestriction1_r17.bytes);
    value.twoTX_CodebookSubsetRestriction1_r17.bytes = nullptr;
    value.twoTX_CodebookSubsetRestriction1_r17.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2(Encoder& enc, const CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 12);
    switch (value.tag) {
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_two_one_TypeI_SinglePanel_Restriction1_r17:
        enc.WriteFixedBitString(value.u.two_one_TypeI_SinglePanel_Restriction1_r17.bytes, value.u.two_one_TypeI_SinglePanel_Restriction1_r17.bitLength, 8, 8);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_two_two_TypeI_SinglePanel_Restriction1_r17:
        enc.WriteFixedBitString(value.u.two_two_TypeI_SinglePanel_Restriction1_r17.bytes, value.u.two_two_TypeI_SinglePanel_Restriction1_r17.bitLength, 64, 64);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_one_TypeI_SinglePanel_Restriction1_r17:
        enc.WriteFixedBitString(value.u.four_one_TypeI_SinglePanel_Restriction1_r17.bytes, value.u.four_one_TypeI_SinglePanel_Restriction1_r17.bitLength, 16, 16);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_three_two_TypeI_SinglePanel_Restriction1_r17:
        enc.WriteFixedBitString(value.u.three_two_TypeI_SinglePanel_Restriction1_r17.bytes, value.u.three_two_TypeI_SinglePanel_Restriction1_r17.bitLength, 96, 96);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_six_one_TypeI_SinglePanel_Restriction1_r17:
        enc.WriteFixedBitString(value.u.six_one_TypeI_SinglePanel_Restriction1_r17.bytes, value.u.six_one_TypeI_SinglePanel_Restriction1_r17.bitLength, 24, 24);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_two_TypeI_SinglePanel_Restriction1_r17:
        enc.WriteFixedBitString(value.u.four_two_TypeI_SinglePanel_Restriction1_r17.bytes, value.u.four_two_TypeI_SinglePanel_Restriction1_r17.bitLength, 128, 128);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_eight_one_TypeI_SinglePanel_Restriction1_r17:
        enc.WriteFixedBitString(value.u.eight_one_TypeI_SinglePanel_Restriction1_r17.bytes, value.u.eight_one_TypeI_SinglePanel_Restriction1_r17.bitLength, 32, 32);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_three_TypeI_SinglePanel_Restriction1_r17:
        enc.WriteFixedBitString(value.u.four_three_TypeI_SinglePanel_Restriction1_r17.bytes, value.u.four_three_TypeI_SinglePanel_Restriction1_r17.bitLength, 192, 192);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_six_two_TypeI_SinglePanel_Restriction1_r17:
        enc.WriteFixedBitString(value.u.six_two_TypeI_SinglePanel_Restriction1_r17.bytes, value.u.six_two_TypeI_SinglePanel_Restriction1_r17.bitLength, 192, 192);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_twelve_one_TypeI_SinglePanel_Restriction1_r17:
        enc.WriteFixedBitString(value.u.twelve_one_TypeI_SinglePanel_Restriction1_r17.bytes, value.u.twelve_one_TypeI_SinglePanel_Restriction1_r17.bitLength, 48, 48);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_four_TypeI_SinglePanel_Restriction1_r17:
        enc.WriteFixedBitString(value.u.four_four_TypeI_SinglePanel_Restriction1_r17.bytes, value.u.four_four_TypeI_SinglePanel_Restriction1_r17.bitLength, 256, 256);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_eight_two_TypeI_SinglePanel_Restriction1_r17:
        enc.WriteFixedBitString(value.u.eight_two_TypeI_SinglePanel_Restriction1_r17.bytes, value.u.eight_two_TypeI_SinglePanel_Restriction1_r17.bitLength, 256, 256);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_sixteen_one_TypeI_SinglePanel_Restriction1_r17:
        enc.WriteFixedBitString(value.u.sixteen_one_TypeI_SinglePanel_Restriction1_r17.bytes, value.u.sixteen_one_TypeI_SinglePanel_Restriction1_r17.bitLength, 64, 64);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2(Decoder& dec, CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 12, root_index)) {
        goto fail;
    }
    value.tag = (CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag)root_index;
    switch (value.tag) {
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_two_one_TypeI_SinglePanel_Restriction1_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.u.two_one_TypeI_SinglePanel_Restriction1_r17.bytes = string_bytes;
        value.u.two_one_TypeI_SinglePanel_Restriction1_r17.bitLength = string_length;
        break;
    }
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_two_two_TypeI_SinglePanel_Restriction1_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 64)) { goto fail; }
        string_length = 64;
        value.u.two_two_TypeI_SinglePanel_Restriction1_r17.bytes = string_bytes;
        value.u.two_two_TypeI_SinglePanel_Restriction1_r17.bitLength = string_length;
        break;
    }
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_one_TypeI_SinglePanel_Restriction1_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.u.four_one_TypeI_SinglePanel_Restriction1_r17.bytes = string_bytes;
        value.u.four_one_TypeI_SinglePanel_Restriction1_r17.bitLength = string_length;
        break;
    }
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_three_two_TypeI_SinglePanel_Restriction1_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 96)) { goto fail; }
        string_length = 96;
        value.u.three_two_TypeI_SinglePanel_Restriction1_r17.bytes = string_bytes;
        value.u.three_two_TypeI_SinglePanel_Restriction1_r17.bitLength = string_length;
        break;
    }
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_six_one_TypeI_SinglePanel_Restriction1_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.u.six_one_TypeI_SinglePanel_Restriction1_r17.bytes = string_bytes;
        value.u.six_one_TypeI_SinglePanel_Restriction1_r17.bitLength = string_length;
        break;
    }
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_two_TypeI_SinglePanel_Restriction1_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 128)) { goto fail; }
        string_length = 128;
        value.u.four_two_TypeI_SinglePanel_Restriction1_r17.bytes = string_bytes;
        value.u.four_two_TypeI_SinglePanel_Restriction1_r17.bitLength = string_length;
        break;
    }
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_eight_one_TypeI_SinglePanel_Restriction1_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 32)) { goto fail; }
        string_length = 32;
        value.u.eight_one_TypeI_SinglePanel_Restriction1_r17.bytes = string_bytes;
        value.u.eight_one_TypeI_SinglePanel_Restriction1_r17.bitLength = string_length;
        break;
    }
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_three_TypeI_SinglePanel_Restriction1_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 192)) { goto fail; }
        string_length = 192;
        value.u.four_three_TypeI_SinglePanel_Restriction1_r17.bytes = string_bytes;
        value.u.four_three_TypeI_SinglePanel_Restriction1_r17.bitLength = string_length;
        break;
    }
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_six_two_TypeI_SinglePanel_Restriction1_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 192)) { goto fail; }
        string_length = 192;
        value.u.six_two_TypeI_SinglePanel_Restriction1_r17.bytes = string_bytes;
        value.u.six_two_TypeI_SinglePanel_Restriction1_r17.bitLength = string_length;
        break;
    }
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_twelve_one_TypeI_SinglePanel_Restriction1_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 48)) { goto fail; }
        string_length = 48;
        value.u.twelve_one_TypeI_SinglePanel_Restriction1_r17.bytes = string_bytes;
        value.u.twelve_one_TypeI_SinglePanel_Restriction1_r17.bitLength = string_length;
        break;
    }
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_four_TypeI_SinglePanel_Restriction1_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 256)) { goto fail; }
        string_length = 256;
        value.u.four_four_TypeI_SinglePanel_Restriction1_r17.bytes = string_bytes;
        value.u.four_four_TypeI_SinglePanel_Restriction1_r17.bitLength = string_length;
        break;
    }
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_eight_two_TypeI_SinglePanel_Restriction1_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 256)) { goto fail; }
        string_length = 256;
        value.u.eight_two_TypeI_SinglePanel_Restriction1_r17.bytes = string_bytes;
        value.u.eight_two_TypeI_SinglePanel_Restriction1_r17.bitLength = string_length;
        break;
    }
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_sixteen_one_TypeI_SinglePanel_Restriction1_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 64)) { goto fail; }
        string_length = 64;
        value.u.sixteen_one_TypeI_SinglePanel_Restriction1_r17.bytes = string_bytes;
        value.u.sixteen_one_TypeI_SinglePanel_Restriction1_r17.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2(CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2& value)
{
    switch (value.tag) {
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_two_one_TypeI_SinglePanel_Restriction1_r17:
        std::free(value.u.two_one_TypeI_SinglePanel_Restriction1_r17.bytes);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_two_two_TypeI_SinglePanel_Restriction1_r17:
        std::free(value.u.two_two_TypeI_SinglePanel_Restriction1_r17.bytes);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_one_TypeI_SinglePanel_Restriction1_r17:
        std::free(value.u.four_one_TypeI_SinglePanel_Restriction1_r17.bytes);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_three_two_TypeI_SinglePanel_Restriction1_r17:
        std::free(value.u.three_two_TypeI_SinglePanel_Restriction1_r17.bytes);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_six_one_TypeI_SinglePanel_Restriction1_r17:
        std::free(value.u.six_one_TypeI_SinglePanel_Restriction1_r17.bytes);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_two_TypeI_SinglePanel_Restriction1_r17:
        std::free(value.u.four_two_TypeI_SinglePanel_Restriction1_r17.bytes);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_eight_one_TypeI_SinglePanel_Restriction1_r17:
        std::free(value.u.eight_one_TypeI_SinglePanel_Restriction1_r17.bytes);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_three_TypeI_SinglePanel_Restriction1_r17:
        std::free(value.u.four_three_TypeI_SinglePanel_Restriction1_r17.bytes);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_six_two_TypeI_SinglePanel_Restriction1_r17:
        std::free(value.u.six_two_TypeI_SinglePanel_Restriction1_r17.bytes);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_twelve_one_TypeI_SinglePanel_Restriction1_r17:
        std::free(value.u.twelve_one_TypeI_SinglePanel_Restriction1_r17.bytes);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_four_TypeI_SinglePanel_Restriction1_r17:
        std::free(value.u.four_four_TypeI_SinglePanel_Restriction1_r17.bytes);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_eight_two_TypeI_SinglePanel_Restriction1_r17:
        std::free(value.u.eight_two_TypeI_SinglePanel_Restriction1_r17.bytes);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_sixteen_one_TypeI_SinglePanel_Restriction1_r17:
        std::free(value.u.sixteen_one_TypeI_SinglePanel_Restriction1_r17.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo(Encoder& enc, const CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo& value)
{
    (void)value;
    Encode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2(enc, value.n1_n2);
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo(Decoder& dec, CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2(dec, value.n1_n2) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo(CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo& value)
{
    Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2(value.n1_n2);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts(Encoder& enc, const CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Tag_two:
        Encode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Two(enc, value.u.two);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Tag_moreThanTwo:
        Encode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo(enc, value.u.moreThanTwo);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts(Decoder& dec, CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Tag)root_index;
    switch (value.tag) {
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Tag_two: {
        if (Decode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Two(dec, value.u.two) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Tag_moreThanTwo: {
        if (Decode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo(dec, value.u.moreThanTwo) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts(CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts& value)
{
    switch (value.tag) {
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Tag_two:
        Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Two(value.u.two);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Tag_moreThanTwo:
        Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo(value.u.moreThanTwo);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17(Encoder& enc, const CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17& value)
{
    (void)value;
    Encode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts(enc, value.nrOfAntennaPorts);
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17(Decoder& dec, CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts(dec, value.nrOfAntennaPorts) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17(CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17& value)
{
    Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts(value.nrOfAntennaPorts);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Two(Encoder& enc, const CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Two& value)
{
    (void)value;
    enc.WriteFixedBitString(value.twoTX_CodebookSubsetRestriction2_r17.bytes, value.twoTX_CodebookSubsetRestriction2_r17.bitLength, 6, 6);
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Two(Decoder& dec, CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Two& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 6)) { goto fail; }
        string_length = 6;
        value.twoTX_CodebookSubsetRestriction2_r17.bytes = string_bytes;
        value.twoTX_CodebookSubsetRestriction2_r17.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Two(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Two(CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Two& value)
{
    std::free(value.twoTX_CodebookSubsetRestriction2_r17.bytes);
    value.twoTX_CodebookSubsetRestriction2_r17.bytes = nullptr;
    value.twoTX_CodebookSubsetRestriction2_r17.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2(Encoder& enc, const CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 12);
    switch (value.tag) {
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_two_one_TypeI_SinglePanel_Restriction2_r17:
        enc.WriteFixedBitString(value.u.two_one_TypeI_SinglePanel_Restriction2_r17.bytes, value.u.two_one_TypeI_SinglePanel_Restriction2_r17.bitLength, 8, 8);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_two_two_TypeI_SinglePanel_Restriction2_r17:
        enc.WriteFixedBitString(value.u.two_two_TypeI_SinglePanel_Restriction2_r17.bytes, value.u.two_two_TypeI_SinglePanel_Restriction2_r17.bitLength, 64, 64);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_one_TypeI_SinglePanel_Restriction2_r17:
        enc.WriteFixedBitString(value.u.four_one_TypeI_SinglePanel_Restriction2_r17.bytes, value.u.four_one_TypeI_SinglePanel_Restriction2_r17.bitLength, 16, 16);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_three_two_TypeI_SinglePanel_Restriction2_r17:
        enc.WriteFixedBitString(value.u.three_two_TypeI_SinglePanel_Restriction2_r17.bytes, value.u.three_two_TypeI_SinglePanel_Restriction2_r17.bitLength, 96, 96);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_six_one_TypeI_SinglePanel_Restriction2_r17:
        enc.WriteFixedBitString(value.u.six_one_TypeI_SinglePanel_Restriction2_r17.bytes, value.u.six_one_TypeI_SinglePanel_Restriction2_r17.bitLength, 24, 24);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_two_TypeI_SinglePanel_Restriction2_r17:
        enc.WriteFixedBitString(value.u.four_two_TypeI_SinglePanel_Restriction2_r17.bytes, value.u.four_two_TypeI_SinglePanel_Restriction2_r17.bitLength, 128, 128);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_eight_one_TypeI_SinglePanel_Restriction2_r17:
        enc.WriteFixedBitString(value.u.eight_one_TypeI_SinglePanel_Restriction2_r17.bytes, value.u.eight_one_TypeI_SinglePanel_Restriction2_r17.bitLength, 32, 32);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_three_TypeI_SinglePanel_Restriction2_r17:
        enc.WriteFixedBitString(value.u.four_three_TypeI_SinglePanel_Restriction2_r17.bytes, value.u.four_three_TypeI_SinglePanel_Restriction2_r17.bitLength, 192, 192);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_six_two_TypeI_SinglePanel_Restriction2_r17:
        enc.WriteFixedBitString(value.u.six_two_TypeI_SinglePanel_Restriction2_r17.bytes, value.u.six_two_TypeI_SinglePanel_Restriction2_r17.bitLength, 192, 192);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_twelve_one_TypeI_SinglePanel_Restriction2_r17:
        enc.WriteFixedBitString(value.u.twelve_one_TypeI_SinglePanel_Restriction2_r17.bytes, value.u.twelve_one_TypeI_SinglePanel_Restriction2_r17.bitLength, 48, 48);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_four_TypeI_SinglePanel_Restriction2_r17:
        enc.WriteFixedBitString(value.u.four_four_TypeI_SinglePanel_Restriction2_r17.bytes, value.u.four_four_TypeI_SinglePanel_Restriction2_r17.bitLength, 256, 256);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_eight_two_TypeI_SinglePanel_Restriction2_r17:
        enc.WriteFixedBitString(value.u.eight_two_TypeI_SinglePanel_Restriction2_r17.bytes, value.u.eight_two_TypeI_SinglePanel_Restriction2_r17.bitLength, 256, 256);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_sixteen_one_TypeI_SinglePanel_Restriction2_r17:
        enc.WriteFixedBitString(value.u.sixteen_one_TypeI_SinglePanel_Restriction2_r17.bytes, value.u.sixteen_one_TypeI_SinglePanel_Restriction2_r17.bitLength, 64, 64);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2(Decoder& dec, CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 12, root_index)) {
        goto fail;
    }
    value.tag = (CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag)root_index;
    switch (value.tag) {
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_two_one_TypeI_SinglePanel_Restriction2_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.u.two_one_TypeI_SinglePanel_Restriction2_r17.bytes = string_bytes;
        value.u.two_one_TypeI_SinglePanel_Restriction2_r17.bitLength = string_length;
        break;
    }
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_two_two_TypeI_SinglePanel_Restriction2_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 64)) { goto fail; }
        string_length = 64;
        value.u.two_two_TypeI_SinglePanel_Restriction2_r17.bytes = string_bytes;
        value.u.two_two_TypeI_SinglePanel_Restriction2_r17.bitLength = string_length;
        break;
    }
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_one_TypeI_SinglePanel_Restriction2_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.u.four_one_TypeI_SinglePanel_Restriction2_r17.bytes = string_bytes;
        value.u.four_one_TypeI_SinglePanel_Restriction2_r17.bitLength = string_length;
        break;
    }
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_three_two_TypeI_SinglePanel_Restriction2_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 96)) { goto fail; }
        string_length = 96;
        value.u.three_two_TypeI_SinglePanel_Restriction2_r17.bytes = string_bytes;
        value.u.three_two_TypeI_SinglePanel_Restriction2_r17.bitLength = string_length;
        break;
    }
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_six_one_TypeI_SinglePanel_Restriction2_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.u.six_one_TypeI_SinglePanel_Restriction2_r17.bytes = string_bytes;
        value.u.six_one_TypeI_SinglePanel_Restriction2_r17.bitLength = string_length;
        break;
    }
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_two_TypeI_SinglePanel_Restriction2_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 128)) { goto fail; }
        string_length = 128;
        value.u.four_two_TypeI_SinglePanel_Restriction2_r17.bytes = string_bytes;
        value.u.four_two_TypeI_SinglePanel_Restriction2_r17.bitLength = string_length;
        break;
    }
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_eight_one_TypeI_SinglePanel_Restriction2_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 32)) { goto fail; }
        string_length = 32;
        value.u.eight_one_TypeI_SinglePanel_Restriction2_r17.bytes = string_bytes;
        value.u.eight_one_TypeI_SinglePanel_Restriction2_r17.bitLength = string_length;
        break;
    }
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_three_TypeI_SinglePanel_Restriction2_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 192)) { goto fail; }
        string_length = 192;
        value.u.four_three_TypeI_SinglePanel_Restriction2_r17.bytes = string_bytes;
        value.u.four_three_TypeI_SinglePanel_Restriction2_r17.bitLength = string_length;
        break;
    }
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_six_two_TypeI_SinglePanel_Restriction2_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 192)) { goto fail; }
        string_length = 192;
        value.u.six_two_TypeI_SinglePanel_Restriction2_r17.bytes = string_bytes;
        value.u.six_two_TypeI_SinglePanel_Restriction2_r17.bitLength = string_length;
        break;
    }
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_twelve_one_TypeI_SinglePanel_Restriction2_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 48)) { goto fail; }
        string_length = 48;
        value.u.twelve_one_TypeI_SinglePanel_Restriction2_r17.bytes = string_bytes;
        value.u.twelve_one_TypeI_SinglePanel_Restriction2_r17.bitLength = string_length;
        break;
    }
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_four_TypeI_SinglePanel_Restriction2_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 256)) { goto fail; }
        string_length = 256;
        value.u.four_four_TypeI_SinglePanel_Restriction2_r17.bytes = string_bytes;
        value.u.four_four_TypeI_SinglePanel_Restriction2_r17.bitLength = string_length;
        break;
    }
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_eight_two_TypeI_SinglePanel_Restriction2_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 256)) { goto fail; }
        string_length = 256;
        value.u.eight_two_TypeI_SinglePanel_Restriction2_r17.bytes = string_bytes;
        value.u.eight_two_TypeI_SinglePanel_Restriction2_r17.bitLength = string_length;
        break;
    }
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_sixteen_one_TypeI_SinglePanel_Restriction2_r17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 64)) { goto fail; }
        string_length = 64;
        value.u.sixteen_one_TypeI_SinglePanel_Restriction2_r17.bytes = string_bytes;
        value.u.sixteen_one_TypeI_SinglePanel_Restriction2_r17.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2(CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2& value)
{
    switch (value.tag) {
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_two_one_TypeI_SinglePanel_Restriction2_r17:
        std::free(value.u.two_one_TypeI_SinglePanel_Restriction2_r17.bytes);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_two_two_TypeI_SinglePanel_Restriction2_r17:
        std::free(value.u.two_two_TypeI_SinglePanel_Restriction2_r17.bytes);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_one_TypeI_SinglePanel_Restriction2_r17:
        std::free(value.u.four_one_TypeI_SinglePanel_Restriction2_r17.bytes);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_three_two_TypeI_SinglePanel_Restriction2_r17:
        std::free(value.u.three_two_TypeI_SinglePanel_Restriction2_r17.bytes);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_six_one_TypeI_SinglePanel_Restriction2_r17:
        std::free(value.u.six_one_TypeI_SinglePanel_Restriction2_r17.bytes);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_two_TypeI_SinglePanel_Restriction2_r17:
        std::free(value.u.four_two_TypeI_SinglePanel_Restriction2_r17.bytes);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_eight_one_TypeI_SinglePanel_Restriction2_r17:
        std::free(value.u.eight_one_TypeI_SinglePanel_Restriction2_r17.bytes);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_three_TypeI_SinglePanel_Restriction2_r17:
        std::free(value.u.four_three_TypeI_SinglePanel_Restriction2_r17.bytes);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_six_two_TypeI_SinglePanel_Restriction2_r17:
        std::free(value.u.six_two_TypeI_SinglePanel_Restriction2_r17.bytes);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_twelve_one_TypeI_SinglePanel_Restriction2_r17:
        std::free(value.u.twelve_one_TypeI_SinglePanel_Restriction2_r17.bytes);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_four_TypeI_SinglePanel_Restriction2_r17:
        std::free(value.u.four_four_TypeI_SinglePanel_Restriction2_r17.bytes);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_eight_two_TypeI_SinglePanel_Restriction2_r17:
        std::free(value.u.eight_two_TypeI_SinglePanel_Restriction2_r17.bytes);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_sixteen_one_TypeI_SinglePanel_Restriction2_r17:
        std::free(value.u.sixteen_one_TypeI_SinglePanel_Restriction2_r17.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo(Encoder& enc, const CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo& value)
{
    (void)value;
    Encode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2(enc, value.n1_n2);
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo(Decoder& dec, CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2(dec, value.n1_n2) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo(CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo& value)
{
    Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2(value.n1_n2);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts(Encoder& enc, const CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Tag_two:
        Encode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Two(enc, value.u.two);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Tag_moreThanTwo:
        Encode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo(enc, value.u.moreThanTwo);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts(Decoder& dec, CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Tag)root_index;
    switch (value.tag) {
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Tag_two: {
        if (Decode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Two(dec, value.u.two) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Tag_moreThanTwo: {
        if (Decode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo(dec, value.u.moreThanTwo) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts(CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts& value)
{
    switch (value.tag) {
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Tag_two:
        Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Two(value.u.two);
        break;
    case CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Tag_moreThanTwo:
        Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo(value.u.moreThanTwo);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17(Encoder& enc, const CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17& value)
{
    (void)value;
    Encode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts(enc, value.nrOfAntennaPorts);
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17(Decoder& dec, CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts(dec, value.nrOfAntennaPorts) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17(CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17& value)
{
    Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts(value.nrOfAntennaPorts);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r17_CodebookType_Type1(Encoder& enc, const CodebookConfig_r17_CodebookType_Type1& value)
{
    (void)value;
    enc.WriteBit(value.has_typeI_SinglePanel_Group1_r17);
    enc.WriteBit(value.has_typeI_SinglePanel_Group2_r17);
    enc.WriteBit(value.has_typeI_SinglePanel_ri_RestrictionSTRP_r17);
    enc.WriteBit(value.has_typeI_SinglePanel_ri_RestrictionSDM_r17);
    if (value.has_typeI_SinglePanel_Group1_r17) {
        Encode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17(enc, value.typeI_SinglePanel_Group1_r17);
    }
    if (value.has_typeI_SinglePanel_Group2_r17) {
        Encode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17(enc, value.typeI_SinglePanel_Group2_r17);
    }
    if (value.has_typeI_SinglePanel_ri_RestrictionSTRP_r17) {
        enc.WriteFixedBitString(value.typeI_SinglePanel_ri_RestrictionSTRP_r17.bytes, value.typeI_SinglePanel_ri_RestrictionSTRP_r17.bitLength, 8, 8);
    }
    if (value.has_typeI_SinglePanel_ri_RestrictionSDM_r17) {
        enc.WriteFixedBitString(value.typeI_SinglePanel_ri_RestrictionSDM_r17.bytes, value.typeI_SinglePanel_ri_RestrictionSDM_r17.bitLength, 4, 4);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r17_CodebookType_Type1(Decoder& dec, CodebookConfig_r17_CodebookType_Type1& value)
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
        if (Decode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17(dec, value.typeI_SinglePanel_Group1_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17(dec, value.typeI_SinglePanel_Group2_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.typeI_SinglePanel_ri_RestrictionSTRP_r17.bytes = string_bytes;
        value.typeI_SinglePanel_ri_RestrictionSTRP_r17.bitLength = string_length;
    }
    if (present_3) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 4)) { goto fail; }
        string_length = 4;
        value.typeI_SinglePanel_ri_RestrictionSDM_r17.bytes = string_bytes;
        value.typeI_SinglePanel_ri_RestrictionSDM_r17.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r17_CodebookType_Type1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r17_CodebookType_Type1(CodebookConfig_r17_CodebookType_Type1& value)
{
    if (value.has_typeI_SinglePanel_Group1_r17) {
        Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17(value.typeI_SinglePanel_Group1_r17);
    }
    if (value.has_typeI_SinglePanel_Group2_r17) {
        Free_CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17(value.typeI_SinglePanel_Group2_r17);
    }
    if (value.has_typeI_SinglePanel_ri_RestrictionSTRP_r17) {
        std::free(value.typeI_SinglePanel_ri_RestrictionSTRP_r17.bytes);
        value.typeI_SinglePanel_ri_RestrictionSTRP_r17.bytes = nullptr;
        value.typeI_SinglePanel_ri_RestrictionSTRP_r17.bitLength = 0;
    }
    if (value.has_typeI_SinglePanel_ri_RestrictionSDM_r17) {
        std::free(value.typeI_SinglePanel_ri_RestrictionSDM_r17.bytes);
        value.typeI_SinglePanel_ri_RestrictionSDM_r17.bytes = nullptr;
        value.typeI_SinglePanel_ri_RestrictionSDM_r17.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r17_CodebookType_Type2_TypeII_PortSelection_r17(Encoder& enc, const CodebookConfig_r17_CodebookType_Type2_TypeII_PortSelection_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_valueOfN_r17);
    enc.WriteBit(value.has_numberOfPMI_SubbandsPerCQI_Subband_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.paramCombination_r17), 1, 8);
    if (value.has_valueOfN_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.valueOfN_r17), 0, 1);
    }
    if (value.has_numberOfPMI_SubbandsPerCQI_Subband_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.numberOfPMI_SubbandsPerCQI_Subband_r17), 1, 2);
    }
    enc.WriteFixedBitString(value.typeII_PortSelectionRI_Restriction_r17.bytes, value.typeII_PortSelectionRI_Restriction_r17.bitLength, 4, 4);
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r17_CodebookType_Type2_TypeII_PortSelection_r17(Decoder& dec, CodebookConfig_r17_CodebookType_Type2_TypeII_PortSelection_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.paramCombination_r17 = (int64_t)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.valueOfN_r17 = (CodebookConfig_r17_CodebookType_Type2_TypeII_PortSelection_r17_ValueOfN_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.numberOfPMI_SubbandsPerCQI_Subband_r17 = (int64_t)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 4)) { goto fail; }
        string_length = 4;
        value.typeII_PortSelectionRI_Restriction_r17.bytes = string_bytes;
        value.typeII_PortSelectionRI_Restriction_r17.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r17_CodebookType_Type2_TypeII_PortSelection_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r17_CodebookType_Type2_TypeII_PortSelection_r17(CodebookConfig_r17_CodebookType_Type2_TypeII_PortSelection_r17& value)
{
    if (value.has_valueOfN_r17) {
    }
    if (value.has_numberOfPMI_SubbandsPerCQI_Subband_r17) {
    }
    std::free(value.typeII_PortSelectionRI_Restriction_r17.bytes);
    value.typeII_PortSelectionRI_Restriction_r17.bytes = nullptr;
    value.typeII_PortSelectionRI_Restriction_r17.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r17_CodebookType_Type2(Encoder& enc, const CodebookConfig_r17_CodebookType_Type2& value)
{
    (void)value;
    Encode_CodebookConfig_r17_CodebookType_Type2_TypeII_PortSelection_r17(enc, value.typeII_PortSelection_r17);
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r17_CodebookType_Type2(Decoder& dec, CodebookConfig_r17_CodebookType_Type2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CodebookConfig_r17_CodebookType_Type2_TypeII_PortSelection_r17(dec, value.typeII_PortSelection_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r17_CodebookType_Type2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r17_CodebookType_Type2(CodebookConfig_r17_CodebookType_Type2& value)
{
    Free_CodebookConfig_r17_CodebookType_Type2_TypeII_PortSelection_r17(value.typeII_PortSelection_r17);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r17_CodebookType(Encoder& enc, const CodebookConfig_r17_CodebookType& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CodebookConfig_r17_CodebookType_Tag_type1:
        Encode_CodebookConfig_r17_CodebookType_Type1(enc, value.u.type1);
        break;
    case CodebookConfig_r17_CodebookType_Tag_type2:
        Encode_CodebookConfig_r17_CodebookType_Type2(enc, value.u.type2);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r17_CodebookType(Decoder& dec, CodebookConfig_r17_CodebookType& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CodebookConfig_r17_CodebookType_Tag)root_index;
    switch (value.tag) {
    case CodebookConfig_r17_CodebookType_Tag_type1: {
        if (Decode_CodebookConfig_r17_CodebookType_Type1(dec, value.u.type1) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case CodebookConfig_r17_CodebookType_Tag_type2: {
        if (Decode_CodebookConfig_r17_CodebookType_Type2(dec, value.u.type2) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r17_CodebookType(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r17_CodebookType(CodebookConfig_r17_CodebookType& value)
{
    switch (value.tag) {
    case CodebookConfig_r17_CodebookType_Tag_type1:
        Free_CodebookConfig_r17_CodebookType_Type1(value.u.type1);
        break;
    case CodebookConfig_r17_CodebookType_Tag_type2:
        Free_CodebookConfig_r17_CodebookType_Type2(value.u.type2);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r17(Encoder& enc, const CodebookConfig_r17& value)
{
    (void)value;
    Encode_CodebookConfig_r17_CodebookType(enc, value.codebookType);
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r17(Decoder& dec, CodebookConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CodebookConfig_r17_CodebookType(dec, value.codebookType) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r17(CodebookConfig_r17& value)
{
    Free_CodebookConfig_r17_CodebookType(value.codebookType);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_v1730_CodebookType_Type1(Encoder& enc, const CodebookConfig_v1730_CodebookType_Type1& value)
{
    (void)value;
    enc.WriteBit(value.has_codebookMode);
    if (value.has_codebookMode) {
        enc.WriteConstrainedInteger((std::int64_t)(value.codebookMode), 1, 2);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_v1730_CodebookType_Type1(Decoder& dec, CodebookConfig_v1730_CodebookType_Type1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.codebookMode = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_v1730_CodebookType_Type1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_v1730_CodebookType_Type1(CodebookConfig_v1730_CodebookType_Type1& value)
{
    if (value.has_codebookMode) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_v1730_CodebookType(Encoder& enc, const CodebookConfig_v1730_CodebookType& value)
{
    switch (value.tag) {
    case CodebookConfig_v1730_CodebookType_Tag_type1:
        Encode_CodebookConfig_v1730_CodebookType_Type1(enc, value.u.type1);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_v1730_CodebookType(Decoder& dec, CodebookConfig_v1730_CodebookType& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    value.tag = (CodebookConfig_v1730_CodebookType_Tag)0;
    switch (value.tag) {
    case CodebookConfig_v1730_CodebookType_Tag_type1: {
        if (Decode_CodebookConfig_v1730_CodebookType_Type1(dec, value.u.type1) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_v1730_CodebookType(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_v1730_CodebookType(CodebookConfig_v1730_CodebookType& value)
{
    switch (value.tag) {
    case CodebookConfig_v1730_CodebookType_Tag_type1:
        Free_CodebookConfig_v1730_CodebookType_Type1(value.u.type1);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_v1730(Encoder& enc, const CodebookConfig_v1730& value)
{
    (void)value;
    Encode_CodebookConfig_v1730_CodebookType(enc, value.codebookType);
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_v1730(Decoder& dec, CodebookConfig_v1730& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CodebookConfig_v1730_CodebookType(dec, value.codebookType) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_v1730(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_v1730(CodebookConfig_v1730& value)
{
    Free_CodebookConfig_v1730_CodebookType(value.codebookType);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18(Encoder& enc, const CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_valueOfO3_r18);
enc.WriteConstrainedLength(value.n1_n2_codebookSubsetRestrictionList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.n1_n2_codebookSubsetRestrictionList_r18_count; ++i) {
    Encode_CBSR_r18(enc, value.n1_n2_codebookSubsetRestrictionList_r18_items[i]);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.paramCombination_CJT_r18), 1, 7);
enc.WriteConstrainedLength(value.paramCombination_CJT_L_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.paramCombination_CJT_L_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.paramCombination_CJT_L_r18_items[i]), 1, 5);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.restrictedCMR_Selection_r18), 0, 0);
    if (value.has_valueOfO3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.valueOfO3_r18), 0, 1);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.numberOfPMI_SubbandsPerCQI_Subband_r18), 1, 2);
    enc.WriteFixedBitString(value.typeII_RI_Restriction_r18.bytes, value.typeII_RI_Restriction_r18.bitLength, 4, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.codebookMode_r18), 1, 2);
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18(Decoder& dec, CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.n1_n2_codebookSubsetRestrictionList_r18_count)) { goto fail; }
if (value.n1_n2_codebookSubsetRestrictionList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.n1_n2_codebookSubsetRestrictionList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.n1_n2_codebookSubsetRestrictionList_r18_count > 0u) {
    value.n1_n2_codebookSubsetRestrictionList_r18_items = (CBSR_r18*)std::malloc((std::size_t)value.n1_n2_codebookSubsetRestrictionList_r18_count * sizeof(CBSR_r18));
    if (value.n1_n2_codebookSubsetRestrictionList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.n1_n2_codebookSubsetRestrictionList_r18_items, 0, (std::size_t)value.n1_n2_codebookSubsetRestrictionList_r18_count * sizeof(CBSR_r18));
}
for (std::uint32_t i = 0; i < value.n1_n2_codebookSubsetRestrictionList_r18_count; ++i) {
    if (Decode_CBSR_r18(dec, value.n1_n2_codebookSubsetRestrictionList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 7, tmp_value)) { goto fail; }
        value.paramCombination_CJT_r18 = (int64_t)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.paramCombination_CJT_L_r18_count)) { goto fail; }
if (value.paramCombination_CJT_L_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.paramCombination_CJT_L_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.paramCombination_CJT_L_r18_count > 0u) {
    value.paramCombination_CJT_L_r18_items = (int64_t*)std::malloc((std::size_t)value.paramCombination_CJT_L_r18_count * sizeof(int64_t));
    if (value.paramCombination_CJT_L_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.paramCombination_CJT_L_r18_items, 0, (std::size_t)value.paramCombination_CJT_L_r18_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.paramCombination_CJT_L_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 5, tmp_value)) { goto fail; }
    value.paramCombination_CJT_L_r18_items[i] = (int64_t)tmp_value;
}
    }
    {
        value.restrictedCMR_Selection_r18 = (CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18_RestrictedCMR_Selection_r18)0;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.valueOfO3_r18 = (CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18_ValueOfO3_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.numberOfPMI_SubbandsPerCQI_Subband_r18 = (int64_t)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 4)) { goto fail; }
        string_length = 4;
        value.typeII_RI_Restriction_r18.bytes = string_bytes;
        value.typeII_RI_Restriction_r18.bitLength = string_length;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.codebookMode_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18(CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18& value)
{
    if (value.n1_n2_codebookSubsetRestrictionList_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.n1_n2_codebookSubsetRestrictionList_r18_count; ++i) {
            Free_CBSR_r18(value.n1_n2_codebookSubsetRestrictionList_r18_items[i]);
        }
        std::free(value.n1_n2_codebookSubsetRestrictionList_r18_items);
        value.n1_n2_codebookSubsetRestrictionList_r18_items = nullptr;
    }
    value.n1_n2_codebookSubsetRestrictionList_r18_count = 0;
    if (value.paramCombination_CJT_L_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.paramCombination_CJT_L_r18_count; ++i) {
        }
        std::free(value.paramCombination_CJT_L_r18_items);
        value.paramCombination_CJT_L_r18_items = nullptr;
    }
    value.paramCombination_CJT_L_r18_count = 0;
    if (value.has_valueOfO3_r18) {
    }
    std::free(value.typeII_RI_Restriction_r18.bytes);
    value.typeII_RI_Restriction_r18.bytes = nullptr;
    value.typeII_RI_Restriction_r18.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18(Encoder& enc, const CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_valueOfO3_r18);
    enc.WriteBit(value.has_valueOfN_CJT_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.paramCombination_CJT_PS_r18), 1, 5);
enc.WriteConstrainedLength(value.paramCombination_CJT_PS_alpha_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.paramCombination_CJT_PS_alpha_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.paramCombination_CJT_PS_alpha_r18_items[i]), 1, 8);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.restrictedCMR_Selection_r18), 0, 0);
    if (value.has_valueOfO3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.valueOfO3_r18), 0, 1);
    }
    if (value.has_valueOfN_CJT_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.valueOfN_CJT_r18), 0, 1);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.numberOfPMI_SubbandsPerCQI_Subband_r18), 1, 2);
    enc.WriteFixedBitString(value.typeII_PortSelectionRI_Restriction_r18.bytes, value.typeII_PortSelectionRI_Restriction_r18.bitLength, 4, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.codebookMode_r18), 1, 2);
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18(Decoder& dec, CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 5, tmp_value)) { goto fail; }
        value.paramCombination_CJT_PS_r18 = (int64_t)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.paramCombination_CJT_PS_alpha_r18_count)) { goto fail; }
if (value.paramCombination_CJT_PS_alpha_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.paramCombination_CJT_PS_alpha_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.paramCombination_CJT_PS_alpha_r18_count > 0u) {
    value.paramCombination_CJT_PS_alpha_r18_items = (int64_t*)std::malloc((std::size_t)value.paramCombination_CJT_PS_alpha_r18_count * sizeof(int64_t));
    if (value.paramCombination_CJT_PS_alpha_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.paramCombination_CJT_PS_alpha_r18_items, 0, (std::size_t)value.paramCombination_CJT_PS_alpha_r18_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.paramCombination_CJT_PS_alpha_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
    value.paramCombination_CJT_PS_alpha_r18_items[i] = (int64_t)tmp_value;
}
    }
    {
        value.restrictedCMR_Selection_r18 = (CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18_RestrictedCMR_Selection_r18)0;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.valueOfO3_r18 = (CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18_ValueOfO3_r18)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.valueOfN_CJT_r18 = (CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18_ValueOfN_CJT_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.numberOfPMI_SubbandsPerCQI_Subband_r18 = (int64_t)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 4)) { goto fail; }
        string_length = 4;
        value.typeII_PortSelectionRI_Restriction_r18.bytes = string_bytes;
        value.typeII_PortSelectionRI_Restriction_r18.bitLength = string_length;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.codebookMode_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18(CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18& value)
{
    if (value.paramCombination_CJT_PS_alpha_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.paramCombination_CJT_PS_alpha_r18_count; ++i) {
        }
        std::free(value.paramCombination_CJT_PS_alpha_r18_items);
        value.paramCombination_CJT_PS_alpha_r18_items = nullptr;
    }
    value.paramCombination_CJT_PS_alpha_r18_count = 0;
    if (value.has_valueOfO3_r18) {
    }
    if (value.has_valueOfN_CJT_r18) {
    }
    std::free(value.typeII_PortSelectionRI_Restriction_r18.bytes);
    value.typeII_PortSelectionRI_Restriction_r18.bytes = nullptr;
    value.typeII_PortSelectionRI_Restriction_r18.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CBSR_r18(Encoder& enc, const CBSR_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 12);
    switch (value.tag) {
    case CBSR_r18_Tag_two_one:
        enc.WriteFixedBitString(value.u.two_one.bytes, value.u.two_one.bitLength, 8, 8);
        break;
    case CBSR_r18_Tag_two_two:
        enc.WriteFixedBitString(value.u.two_two.bytes, value.u.two_two.bitLength, 27, 27);
        break;
    case CBSR_r18_Tag_four_one:
        enc.WriteFixedBitString(value.u.four_one.bytes, value.u.four_one.bitLength, 16, 16);
        break;
    case CBSR_r18_Tag_three_two:
        enc.WriteFixedBitString(value.u.three_two.bytes, value.u.three_two.bitLength, 35, 35);
        break;
    case CBSR_r18_Tag_six_one:
        enc.WriteFixedBitString(value.u.six_one.bytes, value.u.six_one.bitLength, 24, 24);
        break;
    case CBSR_r18_Tag_four_two:
        enc.WriteFixedBitString(value.u.four_two.bytes, value.u.four_two.bitLength, 43, 43);
        break;
    case CBSR_r18_Tag_eight_one:
        enc.WriteFixedBitString(value.u.eight_one.bytes, value.u.eight_one.bitLength, 32, 32);
        break;
    case CBSR_r18_Tag_four_three:
        enc.WriteFixedBitString(value.u.four_three.bytes, value.u.four_three.bitLength, 59, 59);
        break;
    case CBSR_r18_Tag_six_two:
        enc.WriteFixedBitString(value.u.six_two.bytes, value.u.six_two.bitLength, 59, 59);
        break;
    case CBSR_r18_Tag_twelve_one:
        enc.WriteFixedBitString(value.u.twelve_one.bytes, value.u.twelve_one.bitLength, 48, 48);
        break;
    case CBSR_r18_Tag_four_four:
        enc.WriteFixedBitString(value.u.four_four.bytes, value.u.four_four.bitLength, 75, 75);
        break;
    case CBSR_r18_Tag_eight_two:
        enc.WriteFixedBitString(value.u.eight_two.bytes, value.u.eight_two.bitLength, 75, 75);
        break;
    case CBSR_r18_Tag_sixteen_one:
        enc.WriteFixedBitString(value.u.sixteen_one.bytes, value.u.sixteen_one.bitLength, 64, 64);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CBSR_r18(Decoder& dec, CBSR_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 12, root_index)) {
        goto fail;
    }
    value.tag = (CBSR_r18_Tag)root_index;
    switch (value.tag) {
    case CBSR_r18_Tag_two_one: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.u.two_one.bytes = string_bytes;
        value.u.two_one.bitLength = string_length;
        break;
    }
    case CBSR_r18_Tag_two_two: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 27)) { goto fail; }
        string_length = 27;
        value.u.two_two.bytes = string_bytes;
        value.u.two_two.bitLength = string_length;
        break;
    }
    case CBSR_r18_Tag_four_one: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.u.four_one.bytes = string_bytes;
        value.u.four_one.bitLength = string_length;
        break;
    }
    case CBSR_r18_Tag_three_two: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 35)) { goto fail; }
        string_length = 35;
        value.u.three_two.bytes = string_bytes;
        value.u.three_two.bitLength = string_length;
        break;
    }
    case CBSR_r18_Tag_six_one: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.u.six_one.bytes = string_bytes;
        value.u.six_one.bitLength = string_length;
        break;
    }
    case CBSR_r18_Tag_four_two: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 43)) { goto fail; }
        string_length = 43;
        value.u.four_two.bytes = string_bytes;
        value.u.four_two.bitLength = string_length;
        break;
    }
    case CBSR_r18_Tag_eight_one: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 32)) { goto fail; }
        string_length = 32;
        value.u.eight_one.bytes = string_bytes;
        value.u.eight_one.bitLength = string_length;
        break;
    }
    case CBSR_r18_Tag_four_three: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 59)) { goto fail; }
        string_length = 59;
        value.u.four_three.bytes = string_bytes;
        value.u.four_three.bitLength = string_length;
        break;
    }
    case CBSR_r18_Tag_six_two: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 59)) { goto fail; }
        string_length = 59;
        value.u.six_two.bytes = string_bytes;
        value.u.six_two.bitLength = string_length;
        break;
    }
    case CBSR_r18_Tag_twelve_one: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 48)) { goto fail; }
        string_length = 48;
        value.u.twelve_one.bytes = string_bytes;
        value.u.twelve_one.bitLength = string_length;
        break;
    }
    case CBSR_r18_Tag_four_four: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 75)) { goto fail; }
        string_length = 75;
        value.u.four_four.bytes = string_bytes;
        value.u.four_four.bitLength = string_length;
        break;
    }
    case CBSR_r18_Tag_eight_two: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 75)) { goto fail; }
        string_length = 75;
        value.u.eight_two.bytes = string_bytes;
        value.u.eight_two.bitLength = string_length;
        break;
    }
    case CBSR_r18_Tag_sixteen_one: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 64)) { goto fail; }
        string_length = 64;
        value.u.sixteen_one.bytes = string_bytes;
        value.u.sixteen_one.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CBSR_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CBSR_r18(CBSR_r18& value)
{
    switch (value.tag) {
    case CBSR_r18_Tag_two_one:
        std::free(value.u.two_one.bytes);
        break;
    case CBSR_r18_Tag_two_two:
        std::free(value.u.two_two.bytes);
        break;
    case CBSR_r18_Tag_four_one:
        std::free(value.u.four_one.bytes);
        break;
    case CBSR_r18_Tag_three_two:
        std::free(value.u.three_two.bytes);
        break;
    case CBSR_r18_Tag_six_one:
        std::free(value.u.six_one.bytes);
        break;
    case CBSR_r18_Tag_four_two:
        std::free(value.u.four_two.bytes);
        break;
    case CBSR_r18_Tag_eight_one:
        std::free(value.u.eight_one.bytes);
        break;
    case CBSR_r18_Tag_four_three:
        std::free(value.u.four_three.bytes);
        break;
    case CBSR_r18_Tag_six_two:
        std::free(value.u.six_two.bytes);
        break;
    case CBSR_r18_Tag_twelve_one:
        std::free(value.u.twelve_one.bytes);
        break;
    case CBSR_r18_Tag_four_four:
        std::free(value.u.four_four.bytes);
        break;
    case CBSR_r18_Tag_eight_two:
        std::free(value.u.eight_two.bytes);
        break;
    case CBSR_r18_Tag_sixteen_one:
        std::free(value.u.sixteen_one.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_TD_DD_Config_r18(Encoder& enc, const TD_DD_Config_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_unitDurationDD_r18);
    enc.WriteBit(value.has_aperiodicResourceOffset_r18);
    enc.WriteBit(value.has_tdCQI_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.vectorLengthDD_r18), 0, 3);
    if (value.has_unitDurationDD_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.unitDurationDD_r18), 0, 1);
    }
    if (value.has_aperiodicResourceOffset_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aperiodicResourceOffset_r18), 1, 2);
    }
    if (value.has_tdCQI_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tdCQI_r18), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_TD_DD_Config_r18(Decoder& dec, TD_DD_Config_r18& value)
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
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.vectorLengthDD_r18 = (TD_DD_Config_r18_VectorLengthDD_r18)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.unitDurationDD_r18 = (TD_DD_Config_r18_UnitDurationDD_r18)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.aperiodicResourceOffset_r18 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.tdCQI_r18 = (TD_DD_Config_r18_TdCQI_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_TD_DD_Config_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TD_DD_Config_r18(TD_DD_Config_r18& value)
{
    if (value.has_unitDurationDD_r18) {
    }
    if (value.has_aperiodicResourceOffset_r18) {
    }
    if (value.has_tdCQI_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r18_CodebookType_Type2_TypeII_Doppler_r18(Encoder& enc, const CodebookConfig_r18_CodebookType_Type2_TypeII_Doppler_r18& value)
{
    (void)value;
    Encode_CBSR_r18(enc, value.n1_n2_codebookSubsetRestriction_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.paramCombination_Doppler_r18), 1, 9);
    Encode_TD_DD_Config_r18(enc, value.td_dd_config_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.numberOfPMI_SubbandsPerCQI_Subband_r18), 1, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.predictionDelay_r18), 0, 3);
    enc.WriteFixedBitString(value.typeII_RI_Restriction_r18.bytes, value.typeII_RI_Restriction_r18.bitLength, 4, 4);
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r18_CodebookType_Type2_TypeII_Doppler_r18(Decoder& dec, CodebookConfig_r18_CodebookType_Type2_TypeII_Doppler_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CBSR_r18(dec, value.n1_n2_codebookSubsetRestriction_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 9, tmp_value)) { goto fail; }
        value.paramCombination_Doppler_r18 = (int64_t)tmp_value;
    }
    {
        if (Decode_TD_DD_Config_r18(dec, value.td_dd_config_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.numberOfPMI_SubbandsPerCQI_Subband_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.predictionDelay_r18 = (CodebookConfig_r18_CodebookType_Type2_TypeII_Doppler_r18_PredictionDelay_r18)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 4)) { goto fail; }
        string_length = 4;
        value.typeII_RI_Restriction_r18.bytes = string_bytes;
        value.typeII_RI_Restriction_r18.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r18_CodebookType_Type2_TypeII_Doppler_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r18_CodebookType_Type2_TypeII_Doppler_r18(CodebookConfig_r18_CodebookType_Type2_TypeII_Doppler_r18& value)
{
    Free_CBSR_r18(value.n1_n2_codebookSubsetRestriction_r18);
    Free_TD_DD_Config_r18(value.td_dd_config_r18);
    std::free(value.typeII_RI_Restriction_r18.bytes);
    value.typeII_RI_Restriction_r18.bytes = nullptr;
    value.typeII_RI_Restriction_r18.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18(Encoder& enc, const CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_valueOfN_Doppler_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.paramCombinationDoppler_PS_r18), 1, 8);
    Encode_TD_DD_Config_r18(enc, value.td_dd_config_r18);
    if (value.has_valueOfN_Doppler_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.valueOfN_Doppler_r18), 0, 1);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.numberOfPMI_SubbandsPerCQI_Subband_r18), 1, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.predictionDelay_r18), 0, 3);
    enc.WriteFixedBitString(value.typeII_PortSelectionRI_Restriction_r18.bytes, value.typeII_PortSelectionRI_Restriction_r18.bitLength, 4, 4);
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18(Decoder& dec, CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.paramCombinationDoppler_PS_r18 = (int64_t)tmp_value;
    }
    {
        if (Decode_TD_DD_Config_r18(dec, value.td_dd_config_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.valueOfN_Doppler_r18 = (CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18_ValueOfN_Doppler_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.numberOfPMI_SubbandsPerCQI_Subband_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.predictionDelay_r18 = (CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18_PredictionDelay_r18)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 4)) { goto fail; }
        string_length = 4;
        value.typeII_PortSelectionRI_Restriction_r18.bytes = string_bytes;
        value.typeII_PortSelectionRI_Restriction_r18.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18(CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18& value)
{
    Free_TD_DD_Config_r18(value.td_dd_config_r18);
    if (value.has_valueOfN_Doppler_r18) {
    }
    std::free(value.typeII_PortSelectionRI_Restriction_r18.bytes);
    value.typeII_PortSelectionRI_Restriction_r18.bytes = nullptr;
    value.typeII_PortSelectionRI_Restriction_r18.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r18_CodebookType_Type2(Encoder& enc, const CodebookConfig_r18_CodebookType_Type2& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 3);
    switch (value.tag) {
    case CodebookConfig_r18_CodebookType_Type2_Tag_typeII_CJT_r18:
        Encode_CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18(enc, value.u.typeII_CJT_r18);
        break;
    case CodebookConfig_r18_CodebookType_Type2_Tag_typeII_CJT_PortSelection_r18:
        Encode_CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18(enc, value.u.typeII_CJT_PortSelection_r18);
        break;
    case CodebookConfig_r18_CodebookType_Type2_Tag_typeII_Doppler_r18:
        Encode_CodebookConfig_r18_CodebookType_Type2_TypeII_Doppler_r18(enc, value.u.typeII_Doppler_r18);
        break;
    case CodebookConfig_r18_CodebookType_Type2_Tag_typeII_DopplerPortSelection_r18:
        Encode_CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18(enc, value.u.typeII_DopplerPortSelection_r18);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r18_CodebookType_Type2(Decoder& dec, CodebookConfig_r18_CodebookType_Type2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 3, root_index)) {
        goto fail;
    }
    value.tag = (CodebookConfig_r18_CodebookType_Type2_Tag)root_index;
    switch (value.tag) {
    case CodebookConfig_r18_CodebookType_Type2_Tag_typeII_CJT_r18: {
        if (Decode_CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18(dec, value.u.typeII_CJT_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case CodebookConfig_r18_CodebookType_Type2_Tag_typeII_CJT_PortSelection_r18: {
        if (Decode_CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18(dec, value.u.typeII_CJT_PortSelection_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case CodebookConfig_r18_CodebookType_Type2_Tag_typeII_Doppler_r18: {
        if (Decode_CodebookConfig_r18_CodebookType_Type2_TypeII_Doppler_r18(dec, value.u.typeII_Doppler_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case CodebookConfig_r18_CodebookType_Type2_Tag_typeII_DopplerPortSelection_r18: {
        if (Decode_CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18(dec, value.u.typeII_DopplerPortSelection_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r18_CodebookType_Type2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r18_CodebookType_Type2(CodebookConfig_r18_CodebookType_Type2& value)
{
    switch (value.tag) {
    case CodebookConfig_r18_CodebookType_Type2_Tag_typeII_CJT_r18:
        Free_CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18(value.u.typeII_CJT_r18);
        break;
    case CodebookConfig_r18_CodebookType_Type2_Tag_typeII_CJT_PortSelection_r18:
        Free_CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18(value.u.typeII_CJT_PortSelection_r18);
        break;
    case CodebookConfig_r18_CodebookType_Type2_Tag_typeII_Doppler_r18:
        Free_CodebookConfig_r18_CodebookType_Type2_TypeII_Doppler_r18(value.u.typeII_Doppler_r18);
        break;
    case CodebookConfig_r18_CodebookType_Type2_Tag_typeII_DopplerPortSelection_r18:
        Free_CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18(value.u.typeII_DopplerPortSelection_r18);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r18_CodebookType(Encoder& enc, const CodebookConfig_r18_CodebookType& value)
{
    switch (value.tag) {
    case CodebookConfig_r18_CodebookType_Tag_type2:
        Encode_CodebookConfig_r18_CodebookType_Type2(enc, value.u.type2);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r18_CodebookType(Decoder& dec, CodebookConfig_r18_CodebookType& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    value.tag = (CodebookConfig_r18_CodebookType_Tag)0;
    switch (value.tag) {
    case CodebookConfig_r18_CodebookType_Tag_type2: {
        if (Decode_CodebookConfig_r18_CodebookType_Type2(dec, value.u.type2) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r18_CodebookType(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r18_CodebookType(CodebookConfig_r18_CodebookType& value)
{
    switch (value.tag) {
    case CodebookConfig_r18_CodebookType_Tag_type2:
        Free_CodebookConfig_r18_CodebookType_Type2(value.u.type2);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CodebookConfig_r18(Encoder& enc, const CodebookConfig_r18& value)
{
    (void)value;
    Encode_CodebookConfig_r18_CodebookType(enc, value.codebookType);
    return enc.Error();
}

ErrorCode Decode_CodebookConfig_r18(Decoder& dec, CodebookConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CodebookConfig_r18_CodebookType(dec, value.codebookType) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookConfig_r18(CodebookConfig_r18& value)
{
    Free_CodebookConfig_r18_CodebookType(value.codebookType);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CondReconfigToAddMod_r16_ExtGroup1(Encoder& enc, const CondReconfigToAddMod_r16_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.condExecutionCondSCG_r17 != nullptr);
    if (value.condExecutionCondSCG_r17 != nullptr) {
        if (value.condExecutionCondSCG_r17 == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_CondReconfigExecCondSCG_r17(enc, *value.condExecutionCondSCG_r17);
        }
    }
    return enc.Error();
}

ErrorCode Decode_CondReconfigToAddMod_r16_ExtGroup1(Decoder& dec, CondReconfigToAddMod_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
    dec.Fail(ErrorCode_ContainingDepthExceeded); goto fail;
        }
        std::vector<std::uint8_t> containing_bytes;
        if (!dec.ReadOpenType(containing_bytes)) { goto fail; }
        Decoder containing_sub(containing_bytes.data(), containing_bytes.size());
        containing_sub.SetContainingDepth(dec.ContainingDepth() + 1);
        CondReconfigExecCondSCG_r17* containing_value = (CondReconfigExecCondSCG_r17*)std::malloc(sizeof(CondReconfigExecCondSCG_r17));
        if (containing_value == nullptr) {
    dec.Fail(ErrorCode_OutOfMemory); goto fail;
        }
        std::memset(containing_value, 0, sizeof(*containing_value));
        if (Decode_CondReconfigExecCondSCG_r17(containing_sub, *containing_value) != ErrorCode_Ok) {
    Free_CondReconfigExecCondSCG_r17(*containing_value);
    std::free(containing_value);
    dec.Fail(containing_sub.Error()); goto fail;
        }
        if (!containing_sub.CheckOpenTypeEnd()) {
    Free_CondReconfigExecCondSCG_r17(*containing_value);
    std::free(containing_value);
    dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
        }
        value.condExecutionCondSCG_r17 = containing_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CondReconfigToAddMod_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CondReconfigToAddMod_r16_ExtGroup1(CondReconfigToAddMod_r16_ExtGroup1& value)
{
    if (value.condExecutionCondSCG_r17 != nullptr) {
        if (value.condExecutionCondSCG_r17 != nullptr) {
            Free_CondReconfigExecCondSCG_r17(*value.condExecutionCondSCG_r17);
            std::free(value.condExecutionCondSCG_r17);
            value.condExecutionCondSCG_r17 = nullptr;
        }
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CondExecutionCondToAddModList_r18(Encoder& enc, const CondExecutionCondToAddModList_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_CondExecutionCondToAddMod_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_CondExecutionCondToAddModList_r18(Decoder& dec, CondExecutionCondToAddModList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (CondExecutionCondToAddMod_r18*)std::malloc((std::size_t)value.count * sizeof(CondExecutionCondToAddMod_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(CondExecutionCondToAddMod_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_CondExecutionCondToAddMod_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_CondExecutionCondToAddModList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CondExecutionCondToAddModList_r18(CondExecutionCondToAddModList_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_CondExecutionCondToAddMod_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CondExecutionCondToReleaseList_r18(Encoder& enc, const CondExecutionCondToReleaseList_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 1, 8);
    }
    return enc.Error();
}

ErrorCode Decode_CondExecutionCondToReleaseList_r18(Decoder& dec, CondExecutionCondToReleaseList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (CondReconfigId_r16*)std::malloc((std::size_t)value.count * sizeof(CondReconfigId_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(CondReconfigId_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
    value.items[i] = (CondReconfigId_r16)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_CondExecutionCondToReleaseList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CondExecutionCondToReleaseList_r18(CondExecutionCondToReleaseList_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SubsequentCondReconfig_r18(Encoder& enc, const SubsequentCondReconfig_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_condExecutionCondToReleaseList_r18);
    enc.WriteBit(value.has_condExecutionCondToAddModList_r18);
    if (value.has_condExecutionCondToReleaseList_r18) {
        Encode_CondExecutionCondToReleaseList_r18(enc, value.condExecutionCondToReleaseList_r18);
    }
    if (value.has_condExecutionCondToAddModList_r18) {
        Encode_CondExecutionCondToAddModList_r18(enc, value.condExecutionCondToAddModList_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SubsequentCondReconfig_r18(Decoder& dec, SubsequentCondReconfig_r18& value)
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
        if (Decode_CondExecutionCondToReleaseList_r18(dec, value.condExecutionCondToReleaseList_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CondExecutionCondToAddModList_r18(dec, value.condExecutionCondToAddModList_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SubsequentCondReconfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SubsequentCondReconfig_r18(SubsequentCondReconfig_r18& value)
{
    if (value.has_condExecutionCondToReleaseList_r18) {
        Free_CondExecutionCondToReleaseList_r18(value.condExecutionCondToReleaseList_r18);
    }
    if (value.has_condExecutionCondToAddModList_r18) {
        Free_CondExecutionCondToAddModList_r18(value.condExecutionCondToAddModList_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CondReconfigToAddMod_r16_ExtGroup2(Encoder& enc, const CondReconfigToAddMod_r16_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_condExecutionCondPSCell_r18);
    enc.WriteBit(value.has_subsequentCondReconfig_r18);
    enc.WriteBit(value.has_securityCellSetId_r18);
    enc.WriteBit(value.has_scpac_ConfigComplete_r18);
    if (value.has_condExecutionCondPSCell_r18) {
enc.WriteConstrainedLength(value.condExecutionCondPSCell_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.condExecutionCondPSCell_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.condExecutionCondPSCell_r18_items[i]), 1, 64);
}
    }
    if (value.has_subsequentCondReconfig_r18) {
        Encode_SubsequentCondReconfig_r18(enc, value.subsequentCondReconfig_r18);
    }
    if (value.has_securityCellSetId_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.securityCellSetId_r18), 1, 9);
    }
    if (value.has_scpac_ConfigComplete_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scpac_ConfigComplete_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CondReconfigToAddMod_r16_ExtGroup2(Decoder& dec, CondReconfigToAddMod_r16_ExtGroup2& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.condExecutionCondPSCell_r18_count)) { goto fail; }
if (value.condExecutionCondPSCell_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.condExecutionCondPSCell_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.condExecutionCondPSCell_r18_count > 0u) {
    value.condExecutionCondPSCell_r18_items = (MeasId*)std::malloc((std::size_t)value.condExecutionCondPSCell_r18_count * sizeof(MeasId));
    if (value.condExecutionCondPSCell_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.condExecutionCondPSCell_r18_items, 0, (std::size_t)value.condExecutionCondPSCell_r18_count * sizeof(MeasId));
}
for (std::uint32_t i = 0; i < value.condExecutionCondPSCell_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
    value.condExecutionCondPSCell_r18_items[i] = (MeasId)tmp_value;
}
    }
    if (present_1) {
        if (Decode_SubsequentCondReconfig_r18(dec, value.subsequentCondReconfig_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 9, tmp_value)) { goto fail; }
        value.securityCellSetId_r18 = (SecurityCellSetId_r18)tmp_value;
    }
    if (present_3) {
        value.scpac_ConfigComplete_r18 = (CondReconfigToAddMod_r16_ExtGroup2_Scpac_ConfigComplete_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CondReconfigToAddMod_r16_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CondReconfigToAddMod_r16_ExtGroup2(CondReconfigToAddMod_r16_ExtGroup2& value)
{
    if (value.has_condExecutionCondPSCell_r18) {
        if (value.condExecutionCondPSCell_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.condExecutionCondPSCell_r18_count; ++i) {
            }
            std::free(value.condExecutionCondPSCell_r18_items);
            value.condExecutionCondPSCell_r18_items = nullptr;
        }
        value.condExecutionCondPSCell_r18_count = 0;
    }
    if (value.has_subsequentCondReconfig_r18) {
        Free_SubsequentCondReconfig_r18(value.subsequentCondReconfig_r18);
    }
    if (value.has_securityCellSetId_r18) {
    }
    if (value.has_scpac_ConfigComplete_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CondReconfigToAddMod_r16(Encoder& enc, const CondReconfigToAddMod_r16& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_condExecutionCond_r16);
    enc.WriteBit(value.condRRCReconfig_r16 != nullptr);
    enc.WriteConstrainedInteger((std::int64_t)(value.condReconfigId_r16), 1, 8);
    if (value.has_condExecutionCond_r16) {
enc.WriteConstrainedLength(value.condExecutionCond_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.condExecutionCond_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.condExecutionCond_r16_items[i]), 1, 64);
}
    }
    if (value.condRRCReconfig_r16 != nullptr) {
        if (value.condRRCReconfig_r16 == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_RRCReconfiguration(enc, *value.condRRCReconfig_r16);
        }
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_CondReconfigToAddMod_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_CondReconfigToAddMod_r16_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_CondReconfigToAddMod_r16(Decoder& dec, CondReconfigToAddMod_r16& value)
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
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.condReconfigId_r16 = (CondReconfigId_r16)tmp_value;
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.condExecutionCond_r16_count)) { goto fail; }
if (value.condExecutionCond_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.condExecutionCond_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.condExecutionCond_r16_count > 0u) {
    value.condExecutionCond_r16_items = (MeasId*)std::malloc((std::size_t)value.condExecutionCond_r16_count * sizeof(MeasId));
    if (value.condExecutionCond_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.condExecutionCond_r16_items, 0, (std::size_t)value.condExecutionCond_r16_count * sizeof(MeasId));
}
for (std::uint32_t i = 0; i < value.condExecutionCond_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
    value.condExecutionCond_r16_items[i] = (MeasId)tmp_value;
}
    }
    if (present_1) {
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
        value.condRRCReconfig_r16 = containing_value;
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
    if (Decode_CondReconfigToAddMod_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_CondReconfigToAddMod_r16_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_CondReconfigToAddMod_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CondReconfigToAddMod_r16(CondReconfigToAddMod_r16& value)
{
    if (value.has_condExecutionCond_r16) {
        if (value.condExecutionCond_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.condExecutionCond_r16_count; ++i) {
            }
            std::free(value.condExecutionCond_r16_items);
            value.condExecutionCond_r16_items = nullptr;
        }
        value.condExecutionCond_r16_count = 0;
    }
    if (value.condRRCReconfig_r16 != nullptr) {
        if (value.condRRCReconfig_r16 != nullptr) {
            Free_RRCReconfiguration(*value.condRRCReconfig_r16);
            std::free(value.condRRCReconfig_r16);
            value.condRRCReconfig_r16 = nullptr;
        }
    }
    if (value.has_extGroup1) {
        Free_CondReconfigToAddMod_r16_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_CondReconfigToAddMod_r16_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CondReconfigExecCondSCG_r17(Encoder& enc, const CondReconfigExecCondSCG_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 2u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 1, 64);
    }
    return enc.Error();
}

ErrorCode Decode_CondReconfigExecCondSCG_r17(Decoder& dec, CondReconfigExecCondSCG_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 2u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 2u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MeasId*)std::malloc((std::size_t)value.count * sizeof(MeasId));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasId));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
    value.items[i] = (MeasId)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_CondReconfigExecCondSCG_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CondReconfigExecCondSCG_r17(CondReconfigExecCondSCG_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CondExecutionCondToAddMod_r18(Encoder& enc, const CondExecutionCondToAddMod_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_subsequentCondExecutionCond_r18);
    enc.WriteBit(value.subsequentCondExecutionCondSCG_r18 != nullptr);
    enc.WriteConstrainedInteger((std::int64_t)(value.subsequentCondReconfigId_r18), 1, 8);
    if (value.has_subsequentCondExecutionCond_r18) {
enc.WriteConstrainedLength(value.subsequentCondExecutionCond_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.subsequentCondExecutionCond_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.subsequentCondExecutionCond_r18_items[i]), 1, 64);
}
    }
    if (value.subsequentCondExecutionCondSCG_r18 != nullptr) {
        if (value.subsequentCondExecutionCondSCG_r18 == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_CondReconfigExecCondSCG_r17(enc, *value.subsequentCondExecutionCondSCG_r18);
        }
    }
    return enc.Error();
}

ErrorCode Decode_CondExecutionCondToAddMod_r18(Decoder& dec, CondExecutionCondToAddMod_r18& value)
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
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.subsequentCondReconfigId_r18 = (CondReconfigId_r16)tmp_value;
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.subsequentCondExecutionCond_r18_count)) { goto fail; }
if (value.subsequentCondExecutionCond_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.subsequentCondExecutionCond_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.subsequentCondExecutionCond_r18_count > 0u) {
    value.subsequentCondExecutionCond_r18_items = (MeasId*)std::malloc((std::size_t)value.subsequentCondExecutionCond_r18_count * sizeof(MeasId));
    if (value.subsequentCondExecutionCond_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.subsequentCondExecutionCond_r18_items, 0, (std::size_t)value.subsequentCondExecutionCond_r18_count * sizeof(MeasId));
}
for (std::uint32_t i = 0; i < value.subsequentCondExecutionCond_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
    value.subsequentCondExecutionCond_r18_items[i] = (MeasId)tmp_value;
}
    }
    if (present_1) {
        if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
    dec.Fail(ErrorCode_ContainingDepthExceeded); goto fail;
        }
        std::vector<std::uint8_t> containing_bytes;
        if (!dec.ReadOpenType(containing_bytes)) { goto fail; }
        Decoder containing_sub(containing_bytes.data(), containing_bytes.size());
        containing_sub.SetContainingDepth(dec.ContainingDepth() + 1);
        CondReconfigExecCondSCG_r17* containing_value = (CondReconfigExecCondSCG_r17*)std::malloc(sizeof(CondReconfigExecCondSCG_r17));
        if (containing_value == nullptr) {
    dec.Fail(ErrorCode_OutOfMemory); goto fail;
        }
        std::memset(containing_value, 0, sizeof(*containing_value));
        if (Decode_CondReconfigExecCondSCG_r17(containing_sub, *containing_value) != ErrorCode_Ok) {
    Free_CondReconfigExecCondSCG_r17(*containing_value);
    std::free(containing_value);
    dec.Fail(containing_sub.Error()); goto fail;
        }
        if (!containing_sub.CheckOpenTypeEnd()) {
    Free_CondReconfigExecCondSCG_r17(*containing_value);
    std::free(containing_value);
    dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
        }
        value.subsequentCondExecutionCondSCG_r18 = containing_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CondExecutionCondToAddMod_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CondExecutionCondToAddMod_r18(CondExecutionCondToAddMod_r18& value)
{
    if (value.has_subsequentCondExecutionCond_r18) {
        if (value.subsequentCondExecutionCond_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.subsequentCondExecutionCond_r18_count; ++i) {
            }
            std::free(value.subsequentCondExecutionCond_r18_items);
            value.subsequentCondExecutionCond_r18_items = nullptr;
        }
        value.subsequentCondExecutionCond_r18_count = 0;
    }
    if (value.subsequentCondExecutionCondSCG_r18 != nullptr) {
        if (value.subsequentCondExecutionCondSCG_r18 != nullptr) {
            Free_CondReconfigExecCondSCG_r17(*value.subsequentCondExecutionCondSCG_r18);
            std::free(value.subsequentCondExecutionCondSCG_r18);
            value.subsequentCondExecutionCondSCG_r18 = nullptr;
        }
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SK_CounterConfig_r18(Encoder& enc, const SK_CounterConfig_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.securityCellSetId_r18), 1, 9);
enc.WriteConstrainedLength(value.sk_CounterList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sk_CounterList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sk_CounterList_r18_items[i]), 0, 65535);
}
    return enc.Error();
}

ErrorCode Decode_SK_CounterConfig_r18(Decoder& dec, SK_CounterConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 9, tmp_value)) { goto fail; }
        value.securityCellSetId_r18 = (SecurityCellSetId_r18)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.sk_CounterList_r18_count)) { goto fail; }
if (value.sk_CounterList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sk_CounterList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sk_CounterList_r18_count > 0u) {
    value.sk_CounterList_r18_items = (SK_Counter*)std::malloc((std::size_t)value.sk_CounterList_r18_count * sizeof(SK_Counter));
    if (value.sk_CounterList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sk_CounterList_r18_items, 0, (std::size_t)value.sk_CounterList_r18_count * sizeof(SK_Counter));
}
for (std::uint32_t i = 0; i < value.sk_CounterList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
    value.sk_CounterList_r18_items[i] = (SK_Counter)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SK_CounterConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SK_CounterConfig_r18(SK_CounterConfig_r18& value)
{
    if (value.sk_CounterList_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.sk_CounterList_r18_count; ++i) {
        }
        std::free(value.sk_CounterList_r18_items);
        value.sk_CounterList_r18_items = nullptr;
    }
    value.sk_CounterList_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CG_COT_Sharing_r16_Cot_Sharing_r16(Encoder& enc, const CG_COT_Sharing_r16_Cot_Sharing_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.duration_r16), 1, 39);
    enc.WriteConstrainedInteger((std::int64_t)(value.offset_r16), 1, 39);
    enc.WriteConstrainedInteger((std::int64_t)(value.channelAccessPriority_r16), 1, 4);
    return enc.Error();
}

ErrorCode Decode_CG_COT_Sharing_r16_Cot_Sharing_r16(Decoder& dec, CG_COT_Sharing_r16_Cot_Sharing_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 39, tmp_value)) { goto fail; }
        value.duration_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 39, tmp_value)) { goto fail; }
        value.offset_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.channelAccessPriority_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CG_COT_Sharing_r16_Cot_Sharing_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CG_COT_Sharing_r16_Cot_Sharing_r16(CG_COT_Sharing_r16_Cot_Sharing_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CG_COT_Sharing_r16(Encoder& enc, const CG_COT_Sharing_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CG_COT_Sharing_r16_Tag_noCOT_Sharing_r16:
        (void)0;
        break;
    case CG_COT_Sharing_r16_Tag_cot_Sharing_r16:
        Encode_CG_COT_Sharing_r16_Cot_Sharing_r16(enc, value.u.cot_Sharing_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CG_COT_Sharing_r16(Decoder& dec, CG_COT_Sharing_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CG_COT_Sharing_r16_Tag)root_index;
    switch (value.tag) {
    case CG_COT_Sharing_r16_Tag_noCOT_Sharing_r16: {
        (void)0;
        break;
    }
    case CG_COT_Sharing_r16_Tag_cot_Sharing_r16: {
        if (Decode_CG_COT_Sharing_r16_Cot_Sharing_r16(dec, value.u.cot_Sharing_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CG_COT_Sharing_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CG_COT_Sharing_r16(CG_COT_Sharing_r16& value)
{
    switch (value.tag) {
    case CG_COT_Sharing_r16_Tag_noCOT_Sharing_r16:
        break;
    case CG_COT_Sharing_r16_Tag_cot_Sharing_r16:
        Free_CG_COT_Sharing_r16_Cot_Sharing_r16(value.u.cot_Sharing_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CG_COT_Sharing_r17_Cot_Sharing_r17(Encoder& enc, const CG_COT_Sharing_r17_Cot_Sharing_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.duration_r17), 1, 319);
    enc.WriteConstrainedInteger((std::int64_t)(value.offset_r17), 1, 319);
    return enc.Error();
}

ErrorCode Decode_CG_COT_Sharing_r17_Cot_Sharing_r17(Decoder& dec, CG_COT_Sharing_r17_Cot_Sharing_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 319, tmp_value)) { goto fail; }
        value.duration_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 319, tmp_value)) { goto fail; }
        value.offset_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CG_COT_Sharing_r17_Cot_Sharing_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CG_COT_Sharing_r17_Cot_Sharing_r17(CG_COT_Sharing_r17_Cot_Sharing_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CG_COT_Sharing_r17(Encoder& enc, const CG_COT_Sharing_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CG_COT_Sharing_r17_Tag_noCOT_Sharing_r17:
        (void)0;
        break;
    case CG_COT_Sharing_r17_Tag_cot_Sharing_r17:
        Encode_CG_COT_Sharing_r17_Cot_Sharing_r17(enc, value.u.cot_Sharing_r17);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CG_COT_Sharing_r17(Decoder& dec, CG_COT_Sharing_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CG_COT_Sharing_r17_Tag)root_index;
    switch (value.tag) {
    case CG_COT_Sharing_r17_Tag_noCOT_Sharing_r17: {
        (void)0;
        break;
    }
    case CG_COT_Sharing_r17_Tag_cot_Sharing_r17: {
        if (Decode_CG_COT_Sharing_r17_Cot_Sharing_r17(dec, value.u.cot_Sharing_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CG_COT_Sharing_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CG_COT_Sharing_r17(CG_COT_Sharing_r17& value)
{
    switch (value.tag) {
    case CG_COT_Sharing_r17_Tag_noCOT_Sharing_r17:
        break;
    case CG_COT_Sharing_r17_Tag_cot_Sharing_r17:
        Free_CG_COT_Sharing_r17_Cot_Sharing_r17(value.u.cot_Sharing_r17);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_AperiodicTriggerState_ExtGroup1(Encoder& enc, const CSI_AperiodicTriggerState_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_ap_CSI_MultiplexingMode_r17);
    if (value.has_ap_CSI_MultiplexingMode_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ap_CSI_MultiplexingMode_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_AperiodicTriggerState_ExtGroup1(Decoder& dec, CSI_AperiodicTriggerState_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.ap_CSI_MultiplexingMode_r17 = (CSI_AperiodicTriggerState_ExtGroup1_Ap_CSI_MultiplexingMode_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_AperiodicTriggerState_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_AperiodicTriggerState_ExtGroup1(CSI_AperiodicTriggerState_ExtGroup1& value)
{
    if (value.has_ap_CSI_MultiplexingMode_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_AperiodicTriggerState_ExtGroup2(Encoder& enc, const CSI_AperiodicTriggerState_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_ltm_AssociatedReportConfigInfo_r18);
    if (value.has_ltm_AssociatedReportConfigInfo_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ltm_AssociatedReportConfigInfo_r18), 0, 47);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_AperiodicTriggerState_ExtGroup2(Decoder& dec, CSI_AperiodicTriggerState_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 47, tmp_value)) { goto fail; }
        value.ltm_AssociatedReportConfigInfo_r18 = (LTM_CSI_ReportConfigId_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_AperiodicTriggerState_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_AperiodicTriggerState_ExtGroup2(CSI_AperiodicTriggerState_ExtGroup2& value)
{
    if (value.has_ltm_AssociatedReportConfigInfo_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_AperiodicTriggerState(Encoder& enc, const CSI_AperiodicTriggerState& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
enc.WriteConstrainedLength(value.associatedReportConfigInfoList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.associatedReportConfigInfoList_count; ++i) {
    Encode_CSI_AssociatedReportConfigInfo(enc, value.associatedReportConfigInfoList_items[i]);
}
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_CSI_AperiodicTriggerState_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_CSI_AperiodicTriggerState_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_CSI_AperiodicTriggerState(Decoder& dec, CSI_AperiodicTriggerState& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.associatedReportConfigInfoList_count)) { goto fail; }
if (value.associatedReportConfigInfoList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.associatedReportConfigInfoList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.associatedReportConfigInfoList_count > 0u) {
    value.associatedReportConfigInfoList_items = (CSI_AssociatedReportConfigInfo*)std::malloc((std::size_t)value.associatedReportConfigInfoList_count * sizeof(CSI_AssociatedReportConfigInfo));
    if (value.associatedReportConfigInfoList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.associatedReportConfigInfoList_items, 0, (std::size_t)value.associatedReportConfigInfoList_count * sizeof(CSI_AssociatedReportConfigInfo));
}
for (std::uint32_t i = 0; i < value.associatedReportConfigInfoList_count; ++i) {
    if (Decode_CSI_AssociatedReportConfigInfo(dec, value.associatedReportConfigInfoList_items[i]) != ErrorCode_Ok) { goto fail; }
}
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
    if (Decode_CSI_AperiodicTriggerState_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_CSI_AperiodicTriggerState_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_CSI_AperiodicTriggerState(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_AperiodicTriggerState(CSI_AperiodicTriggerState& value)
{
    if (value.associatedReportConfigInfoList_items != nullptr) {
        for (std::uint32_t i = 0; i < value.associatedReportConfigInfoList_count; ++i) {
            Free_CSI_AssociatedReportConfigInfo(value.associatedReportConfigInfoList_items[i]);
        }
        std::free(value.associatedReportConfigInfoList_items);
        value.associatedReportConfigInfoList_items = nullptr;
    }
    value.associatedReportConfigInfoList_count = 0;
    if (value.has_extGroup1) {
        Free_CSI_AperiodicTriggerState_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_CSI_AperiodicTriggerState_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Nzp_CSI_RS2_r17(Encoder& enc, const CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Nzp_CSI_RS2_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_qcl_info2_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.resourceSet2_r17), 1, 16);
    if (value.has_qcl_info2_r17) {
enc.WriteConstrainedLength(value.qcl_info2_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.qcl_info2_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.qcl_info2_r17_items[i]), 0, 127);
}
    }
    return enc.Error();
}

ErrorCode Decode_CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Nzp_CSI_RS2_r17(Decoder& dec, CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Nzp_CSI_RS2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.resourceSet2_r17 = (int64_t)tmp_value;
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.qcl_info2_r17_count)) { goto fail; }
if (value.qcl_info2_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.qcl_info2_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.qcl_info2_r17_count > 0u) {
    value.qcl_info2_r17_items = (TCI_StateId*)std::malloc((std::size_t)value.qcl_info2_r17_count * sizeof(TCI_StateId));
    if (value.qcl_info2_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.qcl_info2_r17_items, 0, (std::size_t)value.qcl_info2_r17_count * sizeof(TCI_StateId));
}
for (std::uint32_t i = 0; i < value.qcl_info2_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
    value.qcl_info2_r17_items[i] = (TCI_StateId)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Nzp_CSI_RS2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Nzp_CSI_RS2_r17(CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Nzp_CSI_RS2_r17& value)
{
    if (value.has_qcl_info2_r17) {
        if (value.qcl_info2_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.qcl_info2_r17_count; ++i) {
            }
            std::free(value.qcl_info2_r17_items);
            value.qcl_info2_r17_items = nullptr;
        }
        value.qcl_info2_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17(Encoder& enc, const CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Tag_nzp_CSI_RS2_r17:
        Encode_CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Nzp_CSI_RS2_r17(enc, value.u.nzp_CSI_RS2_r17);
        break;
    case CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Tag_csi_SSB_ResourceSet2_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.csi_SSB_ResourceSet2_r17), 1, 2);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17(Decoder& dec, CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Tag)root_index;
    switch (value.tag) {
    case CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Tag_nzp_CSI_RS2_r17: {
        if (Decode_CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Nzp_CSI_RS2_r17(dec, value.u.nzp_CSI_RS2_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Tag_csi_SSB_ResourceSet2_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.u.csi_SSB_ResourceSet2_r17 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17(CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17& value)
{
    switch (value.tag) {
    case CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Tag_nzp_CSI_RS2_r17:
        Free_CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Nzp_CSI_RS2_r17(value.u.nzp_CSI_RS2_r17);
        break;
    case CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Tag_csi_SSB_ResourceSet2_r17:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_AssociatedReportConfigInfo_ExtGroup1(Encoder& enc, const CSI_AssociatedReportConfigInfo_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_resourcesForChannel2_r17);
    enc.WriteBit(value.has_csi_SSB_ResourceSetExt);
    if (value.has_resourcesForChannel2_r17) {
        Encode_CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17(enc, value.resourcesForChannel2_r17);
    }
    if (value.has_csi_SSB_ResourceSetExt) {
        enc.WriteConstrainedInteger((std::int64_t)(value.csi_SSB_ResourceSetExt), 1, 2);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_AssociatedReportConfigInfo_ExtGroup1(Decoder& dec, CSI_AssociatedReportConfigInfo_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17(dec, value.resourcesForChannel2_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.csi_SSB_ResourceSetExt = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_AssociatedReportConfigInfo_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_AssociatedReportConfigInfo_ExtGroup1(CSI_AssociatedReportConfigInfo_ExtGroup1& value)
{
    if (value.has_resourcesForChannel2_r17) {
        Free_CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17(value.resourcesForChannel2_r17);
    }
    if (value.has_csi_SSB_ResourceSetExt) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportSubConfigTriggerList_r18(Encoder& enc, const CSI_ReportSubConfigTriggerList_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ReportSubConfigTriggerList_r18(Decoder& dec, CSI_ReportSubConfigTriggerList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (CSI_ReportSubConfigId_r18*)std::malloc((std::size_t)value.count * sizeof(CSI_ReportSubConfigId_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(CSI_ReportSubConfigId_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.items[i] = (CSI_ReportSubConfigId_r18)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportSubConfigTriggerList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportSubConfigTriggerList_r18(CSI_ReportSubConfigTriggerList_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_AssociatedReportConfigInfo_ExtGroup2_ResourcesForChannelTDCP_r18(Encoder& enc, const CSI_AssociatedReportConfigInfo_ExtGroup2_ResourcesForChannelTDCP_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_resourceSet3TDCP_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.resourceSet2TDCP_r18), 1, 16);
    if (value.has_resourceSet3TDCP_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.resourceSet3TDCP_r18), 1, 16);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_AssociatedReportConfigInfo_ExtGroup2_ResourcesForChannelTDCP_r18(Decoder& dec, CSI_AssociatedReportConfigInfo_ExtGroup2_ResourcesForChannelTDCP_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.resourceSet2TDCP_r18 = (int64_t)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.resourceSet3TDCP_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_AssociatedReportConfigInfo_ExtGroup2_ResourcesForChannelTDCP_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_AssociatedReportConfigInfo_ExtGroup2_ResourcesForChannelTDCP_r18(CSI_AssociatedReportConfigInfo_ExtGroup2_ResourcesForChannelTDCP_r18& value)
{
    if (value.has_resourceSet3TDCP_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18(Encoder& enc, const CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18(Decoder& dec, CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18_Item*)std::malloc((std::size_t)value.count * sizeof(CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18_Item));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18_Item));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
    value.items[i] = (CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18_Item)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18(CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18(Encoder& enc, const CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_Tag_perSet_r18:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.perSet_r18), 0, 1);
        break;
    case CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_Tag_perResource_r18:
        Encode_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18(enc, value.u.perResource_r18);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18(Decoder& dec, CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_Tag)root_index;
    switch (value.tag) {
    case CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_Tag_perSet_r18: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.u.perSet_r18 = (CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerSet_r18)tmp_value;
        break;
    }
    case CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_Tag_perResource_r18: {
        if (Decode_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18(dec, value.u.perResource_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18(CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18& value)
{
    switch (value.tag) {
    case CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_Tag_perSet_r18:
        break;
    case CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_Tag_perResource_r18:
        Free_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18(value.u.perResource_r18);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18(Encoder& enc, const CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18(Decoder& dec, CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18_Item*)std::malloc((std::size_t)value.count * sizeof(CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18_Item));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18_Item));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
    value.items[i] = (CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18_Item)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18(CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18(Encoder& enc, const CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_Tag_perSet_r18:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.perSet_r18), 0, 1);
        break;
    case CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_Tag_perResource_r18:
        Encode_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18(enc, value.u.perResource_r18);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18(Decoder& dec, CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_Tag)root_index;
    switch (value.tag) {
    case CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_Tag_perSet_r18: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.u.perSet_r18 = (CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerSet_r18)tmp_value;
        break;
    }
    case CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_Tag_perResource_r18: {
        if (Decode_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18(dec, value.u.perResource_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18(CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18& value)
{
    switch (value.tag) {
    case CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_Tag_perSet_r18:
        break;
    case CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_Tag_perResource_r18:
        Free_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18(value.u.perResource_r18);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_AssociatedReportConfigInfo_ExtGroup2(Encoder& enc, const CSI_AssociatedReportConfigInfo_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_resourcesForChannelTDCP_r18);
    enc.WriteBit(value.has_applyIndicatedTCI_State_r18);
    enc.WriteBit(value.has_applyIndicatedTCI_State2_r18);
    enc.WriteBit(value.has_csi_ReportSubConfigTriggerList_r18);
    if (value.has_resourcesForChannelTDCP_r18) {
        Encode_CSI_AssociatedReportConfigInfo_ExtGroup2_ResourcesForChannelTDCP_r18(enc, value.resourcesForChannelTDCP_r18);
    }
    if (value.has_applyIndicatedTCI_State_r18) {
        Encode_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18(enc, value.applyIndicatedTCI_State_r18);
    }
    if (value.has_applyIndicatedTCI_State2_r18) {
        Encode_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18(enc, value.applyIndicatedTCI_State2_r18);
    }
    if (value.has_csi_ReportSubConfigTriggerList_r18) {
        Encode_CSI_ReportSubConfigTriggerList_r18(enc, value.csi_ReportSubConfigTriggerList_r18);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_AssociatedReportConfigInfo_ExtGroup2(Decoder& dec, CSI_AssociatedReportConfigInfo_ExtGroup2& value)
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
        if (Decode_CSI_AssociatedReportConfigInfo_ExtGroup2_ResourcesForChannelTDCP_r18(dec, value.resourcesForChannelTDCP_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18(dec, value.applyIndicatedTCI_State_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18(dec, value.applyIndicatedTCI_State2_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_CSI_ReportSubConfigTriggerList_r18(dec, value.csi_ReportSubConfigTriggerList_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_AssociatedReportConfigInfo_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_AssociatedReportConfigInfo_ExtGroup2(CSI_AssociatedReportConfigInfo_ExtGroup2& value)
{
    if (value.has_resourcesForChannelTDCP_r18) {
        Free_CSI_AssociatedReportConfigInfo_ExtGroup2_ResourcesForChannelTDCP_r18(value.resourcesForChannelTDCP_r18);
    }
    if (value.has_applyIndicatedTCI_State_r18) {
        Free_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18(value.applyIndicatedTCI_State_r18);
    }
    if (value.has_applyIndicatedTCI_State2_r18) {
        Free_CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18(value.applyIndicatedTCI_State2_r18);
    }
    if (value.has_csi_ReportSubConfigTriggerList_r18) {
        Free_CSI_ReportSubConfigTriggerList_r18(value.csi_ReportSubConfigTriggerList_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_AssociatedReportConfigInfo_ResourcesForChannel_Nzp_CSI_RS(Encoder& enc, const CSI_AssociatedReportConfigInfo_ResourcesForChannel_Nzp_CSI_RS& value)
{
    (void)value;
    enc.WriteBit(value.has_qcl_info);
    enc.WriteConstrainedInteger((std::int64_t)(value.resourceSet), 1, 16);
    if (value.has_qcl_info) {
enc.WriteConstrainedLength(value.qcl_info_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.qcl_info_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.qcl_info_items[i]), 0, 127);
}
    }
    return enc.Error();
}

ErrorCode Decode_CSI_AssociatedReportConfigInfo_ResourcesForChannel_Nzp_CSI_RS(Decoder& dec, CSI_AssociatedReportConfigInfo_ResourcesForChannel_Nzp_CSI_RS& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.resourceSet = (int64_t)tmp_value;
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.qcl_info_count)) { goto fail; }
if (value.qcl_info_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.qcl_info_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.qcl_info_count > 0u) {
    value.qcl_info_items = (TCI_StateId*)std::malloc((std::size_t)value.qcl_info_count * sizeof(TCI_StateId));
    if (value.qcl_info_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.qcl_info_items, 0, (std::size_t)value.qcl_info_count * sizeof(TCI_StateId));
}
for (std::uint32_t i = 0; i < value.qcl_info_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
    value.qcl_info_items[i] = (TCI_StateId)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_AssociatedReportConfigInfo_ResourcesForChannel_Nzp_CSI_RS(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_AssociatedReportConfigInfo_ResourcesForChannel_Nzp_CSI_RS(CSI_AssociatedReportConfigInfo_ResourcesForChannel_Nzp_CSI_RS& value)
{
    if (value.has_qcl_info) {
        if (value.qcl_info_items != nullptr) {
            for (std::uint32_t i = 0; i < value.qcl_info_count; ++i) {
            }
            std::free(value.qcl_info_items);
            value.qcl_info_items = nullptr;
        }
        value.qcl_info_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_AssociatedReportConfigInfo_ResourcesForChannel(Encoder& enc, const CSI_AssociatedReportConfigInfo_ResourcesForChannel& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CSI_AssociatedReportConfigInfo_ResourcesForChannel_Tag_nzp_CSI_RS:
        Encode_CSI_AssociatedReportConfigInfo_ResourcesForChannel_Nzp_CSI_RS(enc, value.u.nzp_CSI_RS);
        break;
    case CSI_AssociatedReportConfigInfo_ResourcesForChannel_Tag_csi_SSB_ResourceSet:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.csi_SSB_ResourceSet), 1, 1);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_AssociatedReportConfigInfo_ResourcesForChannel(Decoder& dec, CSI_AssociatedReportConfigInfo_ResourcesForChannel& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CSI_AssociatedReportConfigInfo_ResourcesForChannel_Tag)root_index;
    switch (value.tag) {
    case CSI_AssociatedReportConfigInfo_ResourcesForChannel_Tag_nzp_CSI_RS: {
        if (Decode_CSI_AssociatedReportConfigInfo_ResourcesForChannel_Nzp_CSI_RS(dec, value.u.nzp_CSI_RS) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case CSI_AssociatedReportConfigInfo_ResourcesForChannel_Tag_csi_SSB_ResourceSet: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 1, tmp_value)) { goto fail; }
        value.u.csi_SSB_ResourceSet = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_AssociatedReportConfigInfo_ResourcesForChannel(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_AssociatedReportConfigInfo_ResourcesForChannel(CSI_AssociatedReportConfigInfo_ResourcesForChannel& value)
{
    switch (value.tag) {
    case CSI_AssociatedReportConfigInfo_ResourcesForChannel_Tag_nzp_CSI_RS:
        Free_CSI_AssociatedReportConfigInfo_ResourcesForChannel_Nzp_CSI_RS(value.u.nzp_CSI_RS);
        break;
    case CSI_AssociatedReportConfigInfo_ResourcesForChannel_Tag_csi_SSB_ResourceSet:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_AssociatedReportConfigInfo(Encoder& enc, const CSI_AssociatedReportConfigInfo& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_csi_IM_ResourcesForInterference);
    enc.WriteBit(value.has_nzp_CSI_RS_ResourcesForInterference);
    enc.WriteConstrainedInteger((std::int64_t)(value.reportConfigId), 0, 47);
    Encode_CSI_AssociatedReportConfigInfo_ResourcesForChannel(enc, value.resourcesForChannel);
    if (value.has_csi_IM_ResourcesForInterference) {
        enc.WriteConstrainedInteger((std::int64_t)(value.csi_IM_ResourcesForInterference), 1, 16);
    }
    if (value.has_nzp_CSI_RS_ResourcesForInterference) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nzp_CSI_RS_ResourcesForInterference), 1, 16);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_CSI_AssociatedReportConfigInfo_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_CSI_AssociatedReportConfigInfo_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_CSI_AssociatedReportConfigInfo(Decoder& dec, CSI_AssociatedReportConfigInfo& value)
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
        if (!dec.ReadConstrainedInteger(0, 47, tmp_value)) { goto fail; }
        value.reportConfigId = (CSI_ReportConfigId)tmp_value;
    }
    {
        if (Decode_CSI_AssociatedReportConfigInfo_ResourcesForChannel(dec, value.resourcesForChannel) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.csi_IM_ResourcesForInterference = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.nzp_CSI_RS_ResourcesForInterference = (int64_t)tmp_value;
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
    if (Decode_CSI_AssociatedReportConfigInfo_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_CSI_AssociatedReportConfigInfo_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_CSI_AssociatedReportConfigInfo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_AssociatedReportConfigInfo(CSI_AssociatedReportConfigInfo& value)
{
    Free_CSI_AssociatedReportConfigInfo_ResourcesForChannel(value.resourcesForChannel);
    if (value.has_csi_IM_ResourcesForInterference) {
    }
    if (value.has_nzp_CSI_RS_ResourcesForInterference) {
    }
    if (value.has_extGroup1) {
        Free_CSI_AssociatedReportConfigInfo_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_CSI_AssociatedReportConfigInfo_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_FrequencyOccupation(Encoder& enc, const CSI_FrequencyOccupation& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.startingRB), 0, 274);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofRBs), 24, 276);
    return enc.Error();
}

ErrorCode Decode_CSI_FrequencyOccupation(Decoder& dec, CSI_FrequencyOccupation& value)
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
        if (!dec.ReadConstrainedInteger(0, 274, tmp_value)) { goto fail; }
        value.startingRB = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(24, 276, tmp_value)) { goto fail; }
        value.nrofRBs = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_FrequencyOccupation(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_FrequencyOccupation(CSI_FrequencyOccupation& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ResourcePeriodicityAndOffset(Encoder& enc, const CSI_ResourcePeriodicityAndOffset& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 12);
    switch (value.tag) {
    case CSI_ResourcePeriodicityAndOffset_Tag_slots4:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.slots4), 0, 3);
        break;
    case CSI_ResourcePeriodicityAndOffset_Tag_slots5:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.slots5), 0, 4);
        break;
    case CSI_ResourcePeriodicityAndOffset_Tag_slots8:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.slots8), 0, 7);
        break;
    case CSI_ResourcePeriodicityAndOffset_Tag_slots10:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.slots10), 0, 9);
        break;
    case CSI_ResourcePeriodicityAndOffset_Tag_slots16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.slots16), 0, 15);
        break;
    case CSI_ResourcePeriodicityAndOffset_Tag_slots20:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.slots20), 0, 19);
        break;
    case CSI_ResourcePeriodicityAndOffset_Tag_slots32:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.slots32), 0, 31);
        break;
    case CSI_ResourcePeriodicityAndOffset_Tag_slots40:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.slots40), 0, 39);
        break;
    case CSI_ResourcePeriodicityAndOffset_Tag_slots64:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.slots64), 0, 63);
        break;
    case CSI_ResourcePeriodicityAndOffset_Tag_slots80:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.slots80), 0, 79);
        break;
    case CSI_ResourcePeriodicityAndOffset_Tag_slots160:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.slots160), 0, 159);
        break;
    case CSI_ResourcePeriodicityAndOffset_Tag_slots320:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.slots320), 0, 319);
        break;
    case CSI_ResourcePeriodicityAndOffset_Tag_slots640:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.slots640), 0, 639);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ResourcePeriodicityAndOffset(Decoder& dec, CSI_ResourcePeriodicityAndOffset& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 12, root_index)) {
        goto fail;
    }
    value.tag = (CSI_ResourcePeriodicityAndOffset_Tag)root_index;
    switch (value.tag) {
    case CSI_ResourcePeriodicityAndOffset_Tag_slots4: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.slots4 = (int64_t)tmp_value;
        break;
    }
    case CSI_ResourcePeriodicityAndOffset_Tag_slots5: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.u.slots5 = (int64_t)tmp_value;
        break;
    }
    case CSI_ResourcePeriodicityAndOffset_Tag_slots8: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.u.slots8 = (int64_t)tmp_value;
        break;
    }
    case CSI_ResourcePeriodicityAndOffset_Tag_slots10: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.u.slots10 = (int64_t)tmp_value;
        break;
    }
    case CSI_ResourcePeriodicityAndOffset_Tag_slots16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.slots16 = (int64_t)tmp_value;
        break;
    }
    case CSI_ResourcePeriodicityAndOffset_Tag_slots20: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 19, tmp_value)) { goto fail; }
        value.u.slots20 = (int64_t)tmp_value;
        break;
    }
    case CSI_ResourcePeriodicityAndOffset_Tag_slots32: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.slots32 = (int64_t)tmp_value;
        break;
    }
    case CSI_ResourcePeriodicityAndOffset_Tag_slots40: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.slots40 = (int64_t)tmp_value;
        break;
    }
    case CSI_ResourcePeriodicityAndOffset_Tag_slots64: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.slots64 = (int64_t)tmp_value;
        break;
    }
    case CSI_ResourcePeriodicityAndOffset_Tag_slots80: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.slots80 = (int64_t)tmp_value;
        break;
    }
    case CSI_ResourcePeriodicityAndOffset_Tag_slots160: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.u.slots160 = (int64_t)tmp_value;
        break;
    }
    case CSI_ResourcePeriodicityAndOffset_Tag_slots320: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.u.slots320 = (int64_t)tmp_value;
        break;
    }
    case CSI_ResourcePeriodicityAndOffset_Tag_slots640: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.u.slots640 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ResourcePeriodicityAndOffset(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ResourcePeriodicityAndOffset(CSI_ResourcePeriodicityAndOffset& value)
{
    switch (value.tag) {
    case CSI_ResourcePeriodicityAndOffset_Tag_slots4:
        break;
    case CSI_ResourcePeriodicityAndOffset_Tag_slots5:
        break;
    case CSI_ResourcePeriodicityAndOffset_Tag_slots8:
        break;
    case CSI_ResourcePeriodicityAndOffset_Tag_slots10:
        break;
    case CSI_ResourcePeriodicityAndOffset_Tag_slots16:
        break;
    case CSI_ResourcePeriodicityAndOffset_Tag_slots20:
        break;
    case CSI_ResourcePeriodicityAndOffset_Tag_slots32:
        break;
    case CSI_ResourcePeriodicityAndOffset_Tag_slots40:
        break;
    case CSI_ResourcePeriodicityAndOffset_Tag_slots64:
        break;
    case CSI_ResourcePeriodicityAndOffset_Tag_slots80:
        break;
    case CSI_ResourcePeriodicityAndOffset_Tag_slots160:
        break;
    case CSI_ResourcePeriodicityAndOffset_Tag_slots320:
        break;
    case CSI_ResourcePeriodicityAndOffset_Tag_slots640:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0(Encoder& enc, const CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.subcarrierLocation_p0), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.symbolLocation_p0), 0, 12);
    return enc.Error();
}

ErrorCode Decode_CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0(Decoder& dec, CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.subcarrierLocation_p0 = (CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0_SubcarrierLocation_p0)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 12, tmp_value)) { goto fail; }
        value.symbolLocation_p0 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0(CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern1(Encoder& enc, const CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern1& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.subcarrierLocation_p1), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.symbolLocation_p1), 0, 13);
    return enc.Error();
}

ErrorCode Decode_CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern1(Decoder& dec, CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.subcarrierLocation_p1 = (CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern1_SubcarrierLocation_p1)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.symbolLocation_p1 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern1(CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern1& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_IM_Resource_Csi_IM_ResourceElementPattern(Encoder& enc, const CSI_IM_Resource_Csi_IM_ResourceElementPattern& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CSI_IM_Resource_Csi_IM_ResourceElementPattern_Tag_pattern0:
        Encode_CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0(enc, value.u.pattern0);
        break;
    case CSI_IM_Resource_Csi_IM_ResourceElementPattern_Tag_pattern1:
        Encode_CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern1(enc, value.u.pattern1);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_IM_Resource_Csi_IM_ResourceElementPattern(Decoder& dec, CSI_IM_Resource_Csi_IM_ResourceElementPattern& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CSI_IM_Resource_Csi_IM_ResourceElementPattern_Tag)root_index;
    switch (value.tag) {
    case CSI_IM_Resource_Csi_IM_ResourceElementPattern_Tag_pattern0: {
        if (Decode_CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0(dec, value.u.pattern0) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case CSI_IM_Resource_Csi_IM_ResourceElementPattern_Tag_pattern1: {
        if (Decode_CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern1(dec, value.u.pattern1) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_IM_Resource_Csi_IM_ResourceElementPattern(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_IM_Resource_Csi_IM_ResourceElementPattern(CSI_IM_Resource_Csi_IM_ResourceElementPattern& value)
{
    switch (value.tag) {
    case CSI_IM_Resource_Csi_IM_ResourceElementPattern_Tag_pattern0:
        Free_CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0(value.u.pattern0);
        break;
    case CSI_IM_Resource_Csi_IM_ResourceElementPattern_Tag_pattern1:
        Free_CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern1(value.u.pattern1);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_IM_Resource(Encoder& enc, const CSI_IM_Resource& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_csi_IM_ResourceElementPattern);
    enc.WriteBit(value.has_freqBand);
    enc.WriteBit(value.has_periodicityAndOffset);
    enc.WriteConstrainedInteger((std::int64_t)(value.csi_IM_ResourceId), 0, 31);
    if (value.has_csi_IM_ResourceElementPattern) {
        Encode_CSI_IM_Resource_Csi_IM_ResourceElementPattern(enc, value.csi_IM_ResourceElementPattern);
    }
    if (value.has_freqBand) {
        Encode_CSI_FrequencyOccupation(enc, value.freqBand);
    }
    if (value.has_periodicityAndOffset) {
        Encode_CSI_ResourcePeriodicityAndOffset(enc, value.periodicityAndOffset);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_IM_Resource(Decoder& dec, CSI_IM_Resource& value)
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
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.csi_IM_ResourceId = (CSI_IM_ResourceId)tmp_value;
    }
    if (present_0) {
        if (Decode_CSI_IM_Resource_Csi_IM_ResourceElementPattern(dec, value.csi_IM_ResourceElementPattern) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CSI_FrequencyOccupation(dec, value.freqBand) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_CSI_ResourcePeriodicityAndOffset(dec, value.periodicityAndOffset) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_IM_Resource(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_IM_Resource(CSI_IM_Resource& value)
{
    if (value.has_csi_IM_ResourceElementPattern) {
        Free_CSI_IM_Resource_Csi_IM_ResourceElementPattern(value.csi_IM_ResourceElementPattern);
    }
    if (value.has_freqBand) {
        Free_CSI_FrequencyOccupation(value.freqBand);
    }
    if (value.has_periodicityAndOffset) {
        Free_CSI_ResourcePeriodicityAndOffset(value.periodicityAndOffset);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_IM_ResourceSet(Encoder& enc, const CSI_IM_ResourceSet& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.csi_IM_ResourceSetId), 0, 63);
enc.WriteConstrainedLength(value.csi_IM_Resources_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.csi_IM_Resources_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.csi_IM_Resources_items[i]), 0, 31);
}
    return enc.Error();
}

ErrorCode Decode_CSI_IM_ResourceSet(Decoder& dec, CSI_IM_ResourceSet& value)
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
        value.csi_IM_ResourceSetId = (CSI_IM_ResourceSetId)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.csi_IM_Resources_count)) { goto fail; }
if (value.csi_IM_Resources_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.csi_IM_Resources_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.csi_IM_Resources_count > 0u) {
    value.csi_IM_Resources_items = (CSI_IM_ResourceId*)std::malloc((std::size_t)value.csi_IM_Resources_count * sizeof(CSI_IM_ResourceId));
    if (value.csi_IM_Resources_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.csi_IM_Resources_items, 0, (std::size_t)value.csi_IM_Resources_count * sizeof(CSI_IM_ResourceId));
}
for (std::uint32_t i = 0; i < value.csi_IM_Resources_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.csi_IM_Resources_items[i] = (CSI_IM_ResourceId)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_IM_ResourceSet(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_IM_ResourceSet(CSI_IM_ResourceSet& value)
{
    if (value.csi_IM_Resources_items != nullptr) {
        for (std::uint32_t i = 0; i < value.csi_IM_Resources_count; ++i) {
        }
        std::free(value.csi_IM_Resources_items);
        value.csi_IM_Resources_items = nullptr;
    }
    value.csi_IM_Resources_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportConfig_ExtGroup1_SemiPersistentOnPUSCH_v1530(Encoder& enc, const CSI_ReportConfig_ExtGroup1_SemiPersistentOnPUSCH_v1530& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.reportSlotConfig_v1530), 0, 2);
    return enc.Error();
}

ErrorCode Decode_CSI_ReportConfig_ExtGroup1_SemiPersistentOnPUSCH_v1530(Decoder& dec, CSI_ReportConfig_ExtGroup1_SemiPersistentOnPUSCH_v1530& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.reportSlotConfig_v1530 = (CSI_ReportConfig_ExtGroup1_SemiPersistentOnPUSCH_v1530_ReportSlotConfig_v1530)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportConfig_ExtGroup1_SemiPersistentOnPUSCH_v1530(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportConfig_ExtGroup1_SemiPersistentOnPUSCH_v1530(CSI_ReportConfig_ExtGroup1_SemiPersistentOnPUSCH_v1530& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportConfig_ExtGroup1(Encoder& enc, const CSI_ReportConfig_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_semiPersistentOnPUSCH_v1530);
    if (value.has_semiPersistentOnPUSCH_v1530) {
        Encode_CSI_ReportConfig_ExtGroup1_SemiPersistentOnPUSCH_v1530(enc, value.semiPersistentOnPUSCH_v1530);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ReportConfig_ExtGroup1(Decoder& dec, CSI_ReportConfig_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_CSI_ReportConfig_ExtGroup1_SemiPersistentOnPUSCH_v1530(dec, value.semiPersistentOnPUSCH_v1530) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportConfig_ExtGroup1(CSI_ReportConfig_ExtGroup1& value)
{
    if (value.has_semiPersistentOnPUSCH_v1530) {
        Free_CSI_ReportConfig_ExtGroup1_SemiPersistentOnPUSCH_v1530(value.semiPersistentOnPUSCH_v1530);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportConfig_ExtGroup2_SemiPersistentOnPUSCH_v1610(Encoder& enc, const CSI_ReportConfig_ExtGroup2_SemiPersistentOnPUSCH_v1610& value)
{
    (void)value;
    enc.WriteBit(value.has_reportSlotOffsetListDCI_0_2_r16);
    enc.WriteBit(value.has_reportSlotOffsetListDCI_0_1_r16);
    if (value.has_reportSlotOffsetListDCI_0_2_r16) {
enc.WriteConstrainedLength(value.reportSlotOffsetListDCI_0_2_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_2_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.reportSlotOffsetListDCI_0_2_r16_items[i]), 0, 32);
}
    }
    if (value.has_reportSlotOffsetListDCI_0_1_r16) {
enc.WriteConstrainedLength(value.reportSlotOffsetListDCI_0_1_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_1_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.reportSlotOffsetListDCI_0_1_r16_items[i]), 0, 32);
}
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ReportConfig_ExtGroup2_SemiPersistentOnPUSCH_v1610(Decoder& dec, CSI_ReportConfig_ExtGroup2_SemiPersistentOnPUSCH_v1610& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.reportSlotOffsetListDCI_0_2_r16_count)) { goto fail; }
if (value.reportSlotOffsetListDCI_0_2_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.reportSlotOffsetListDCI_0_2_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.reportSlotOffsetListDCI_0_2_r16_count > 0u) {
    value.reportSlotOffsetListDCI_0_2_r16_items = (int64_t*)std::malloc((std::size_t)value.reportSlotOffsetListDCI_0_2_r16_count * sizeof(int64_t));
    if (value.reportSlotOffsetListDCI_0_2_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.reportSlotOffsetListDCI_0_2_r16_items, 0, (std::size_t)value.reportSlotOffsetListDCI_0_2_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_2_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 32, tmp_value)) { goto fail; }
    value.reportSlotOffsetListDCI_0_2_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.reportSlotOffsetListDCI_0_1_r16_count)) { goto fail; }
if (value.reportSlotOffsetListDCI_0_1_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.reportSlotOffsetListDCI_0_1_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.reportSlotOffsetListDCI_0_1_r16_count > 0u) {
    value.reportSlotOffsetListDCI_0_1_r16_items = (int64_t*)std::malloc((std::size_t)value.reportSlotOffsetListDCI_0_1_r16_count * sizeof(int64_t));
    if (value.reportSlotOffsetListDCI_0_1_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.reportSlotOffsetListDCI_0_1_r16_items, 0, (std::size_t)value.reportSlotOffsetListDCI_0_1_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_1_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 32, tmp_value)) { goto fail; }
    value.reportSlotOffsetListDCI_0_1_r16_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportConfig_ExtGroup2_SemiPersistentOnPUSCH_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportConfig_ExtGroup2_SemiPersistentOnPUSCH_v1610(CSI_ReportConfig_ExtGroup2_SemiPersistentOnPUSCH_v1610& value)
{
    if (value.has_reportSlotOffsetListDCI_0_2_r16) {
        if (value.reportSlotOffsetListDCI_0_2_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_2_r16_count; ++i) {
            }
            std::free(value.reportSlotOffsetListDCI_0_2_r16_items);
            value.reportSlotOffsetListDCI_0_2_r16_items = nullptr;
        }
        value.reportSlotOffsetListDCI_0_2_r16_count = 0;
    }
    if (value.has_reportSlotOffsetListDCI_0_1_r16) {
        if (value.reportSlotOffsetListDCI_0_1_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_1_r16_count; ++i) {
            }
            std::free(value.reportSlotOffsetListDCI_0_1_r16_items);
            value.reportSlotOffsetListDCI_0_1_r16_items = nullptr;
        }
        value.reportSlotOffsetListDCI_0_1_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportConfig_ExtGroup2_Aperiodic_v1610(Encoder& enc, const CSI_ReportConfig_ExtGroup2_Aperiodic_v1610& value)
{
    (void)value;
    enc.WriteBit(value.has_reportSlotOffsetListDCI_0_2_r16);
    enc.WriteBit(value.has_reportSlotOffsetListDCI_0_1_r16);
    if (value.has_reportSlotOffsetListDCI_0_2_r16) {
enc.WriteConstrainedLength(value.reportSlotOffsetListDCI_0_2_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_2_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.reportSlotOffsetListDCI_0_2_r16_items[i]), 0, 32);
}
    }
    if (value.has_reportSlotOffsetListDCI_0_1_r16) {
enc.WriteConstrainedLength(value.reportSlotOffsetListDCI_0_1_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_1_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.reportSlotOffsetListDCI_0_1_r16_items[i]), 0, 32);
}
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ReportConfig_ExtGroup2_Aperiodic_v1610(Decoder& dec, CSI_ReportConfig_ExtGroup2_Aperiodic_v1610& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.reportSlotOffsetListDCI_0_2_r16_count)) { goto fail; }
if (value.reportSlotOffsetListDCI_0_2_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.reportSlotOffsetListDCI_0_2_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.reportSlotOffsetListDCI_0_2_r16_count > 0u) {
    value.reportSlotOffsetListDCI_0_2_r16_items = (int64_t*)std::malloc((std::size_t)value.reportSlotOffsetListDCI_0_2_r16_count * sizeof(int64_t));
    if (value.reportSlotOffsetListDCI_0_2_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.reportSlotOffsetListDCI_0_2_r16_items, 0, (std::size_t)value.reportSlotOffsetListDCI_0_2_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_2_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 32, tmp_value)) { goto fail; }
    value.reportSlotOffsetListDCI_0_2_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.reportSlotOffsetListDCI_0_1_r16_count)) { goto fail; }
if (value.reportSlotOffsetListDCI_0_1_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.reportSlotOffsetListDCI_0_1_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.reportSlotOffsetListDCI_0_1_r16_count > 0u) {
    value.reportSlotOffsetListDCI_0_1_r16_items = (int64_t*)std::malloc((std::size_t)value.reportSlotOffsetListDCI_0_1_r16_count * sizeof(int64_t));
    if (value.reportSlotOffsetListDCI_0_1_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.reportSlotOffsetListDCI_0_1_r16_items, 0, (std::size_t)value.reportSlotOffsetListDCI_0_1_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_1_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 32, tmp_value)) { goto fail; }
    value.reportSlotOffsetListDCI_0_1_r16_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportConfig_ExtGroup2_Aperiodic_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportConfig_ExtGroup2_Aperiodic_v1610(CSI_ReportConfig_ExtGroup2_Aperiodic_v1610& value)
{
    if (value.has_reportSlotOffsetListDCI_0_2_r16) {
        if (value.reportSlotOffsetListDCI_0_2_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_2_r16_count; ++i) {
            }
            std::free(value.reportSlotOffsetListDCI_0_2_r16_items);
            value.reportSlotOffsetListDCI_0_2_r16_items = nullptr;
        }
        value.reportSlotOffsetListDCI_0_2_r16_count = 0;
    }
    if (value.has_reportSlotOffsetListDCI_0_1_r16) {
        if (value.reportSlotOffsetListDCI_0_1_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_1_r16_count; ++i) {
            }
            std::free(value.reportSlotOffsetListDCI_0_1_r16_items);
            value.reportSlotOffsetListDCI_0_1_r16_items = nullptr;
        }
        value.reportSlotOffsetListDCI_0_1_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportConfig_ExtGroup2_ReportQuantity_r16(Encoder& enc, const CSI_ReportConfig_ExtGroup2_ReportQuantity_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CSI_ReportConfig_ExtGroup2_ReportQuantity_r16_Tag_cri_SINR_r16:
        (void)0;
        break;
    case CSI_ReportConfig_ExtGroup2_ReportQuantity_r16_Tag_ssb_Index_SINR_r16:
        (void)0;
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ReportConfig_ExtGroup2_ReportQuantity_r16(Decoder& dec, CSI_ReportConfig_ExtGroup2_ReportQuantity_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CSI_ReportConfig_ExtGroup2_ReportQuantity_r16_Tag)root_index;
    switch (value.tag) {
    case CSI_ReportConfig_ExtGroup2_ReportQuantity_r16_Tag_cri_SINR_r16: {
        (void)0;
        break;
    }
    case CSI_ReportConfig_ExtGroup2_ReportQuantity_r16_Tag_ssb_Index_SINR_r16: {
        (void)0;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportConfig_ExtGroup2_ReportQuantity_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportConfig_ExtGroup2_ReportQuantity_r16(CSI_ReportConfig_ExtGroup2_ReportQuantity_r16& value)
{
    switch (value.tag) {
    case CSI_ReportConfig_ExtGroup2_ReportQuantity_r16_Tag_cri_SINR_r16:
        break;
    case CSI_ReportConfig_ExtGroup2_ReportQuantity_r16_Tag_ssb_Index_SINR_r16:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportConfig_ExtGroup2(Encoder& enc, const CSI_ReportConfig_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_semiPersistentOnPUSCH_v1610);
    enc.WriteBit(value.has_aperiodic_v1610);
    enc.WriteBit(value.has_reportQuantity_r16);
    enc.WriteBit(value.has_codebookConfig_r16);
    if (value.has_semiPersistentOnPUSCH_v1610) {
        Encode_CSI_ReportConfig_ExtGroup2_SemiPersistentOnPUSCH_v1610(enc, value.semiPersistentOnPUSCH_v1610);
    }
    if (value.has_aperiodic_v1610) {
        Encode_CSI_ReportConfig_ExtGroup2_Aperiodic_v1610(enc, value.aperiodic_v1610);
    }
    if (value.has_reportQuantity_r16) {
        Encode_CSI_ReportConfig_ExtGroup2_ReportQuantity_r16(enc, value.reportQuantity_r16);
    }
    if (value.has_codebookConfig_r16) {
        Encode_CodebookConfig_r16(enc, value.codebookConfig_r16);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ReportConfig_ExtGroup2(Decoder& dec, CSI_ReportConfig_ExtGroup2& value)
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
        if (Decode_CSI_ReportConfig_ExtGroup2_SemiPersistentOnPUSCH_v1610(dec, value.semiPersistentOnPUSCH_v1610) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CSI_ReportConfig_ExtGroup2_Aperiodic_v1610(dec, value.aperiodic_v1610) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_CSI_ReportConfig_ExtGroup2_ReportQuantity_r16(dec, value.reportQuantity_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_CodebookConfig_r16(dec, value.codebookConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportConfig_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportConfig_ExtGroup2(CSI_ReportConfig_ExtGroup2& value)
{
    if (value.has_semiPersistentOnPUSCH_v1610) {
        Free_CSI_ReportConfig_ExtGroup2_SemiPersistentOnPUSCH_v1610(value.semiPersistentOnPUSCH_v1610);
    }
    if (value.has_aperiodic_v1610) {
        Free_CSI_ReportConfig_ExtGroup2_Aperiodic_v1610(value.aperiodic_v1610);
    }
    if (value.has_reportQuantity_r16) {
        Free_CSI_ReportConfig_ExtGroup2_ReportQuantity_r16(value.reportQuantity_r16);
    }
    if (value.has_codebookConfig_r16) {
        Free_CodebookConfig_r16(value.codebookConfig_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportConfig_ExtGroup3_GroupBasedBeamReporting_v1710(Encoder& enc, const CSI_ReportConfig_ExtGroup3_GroupBasedBeamReporting_v1710& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofReportedGroups_r17), 0, 3);
    return enc.Error();
}

ErrorCode Decode_CSI_ReportConfig_ExtGroup3_GroupBasedBeamReporting_v1710(Decoder& dec, CSI_ReportConfig_ExtGroup3_GroupBasedBeamReporting_v1710& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.nrofReportedGroups_r17 = (CSI_ReportConfig_ExtGroup3_GroupBasedBeamReporting_v1710_NrofReportedGroups_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportConfig_ExtGroup3_GroupBasedBeamReporting_v1710(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportConfig_ExtGroup3_GroupBasedBeamReporting_v1710(CSI_ReportConfig_ExtGroup3_GroupBasedBeamReporting_v1710& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportConfig_ExtGroup3_ReportQuantity_r17(Encoder& enc, const CSI_ReportConfig_ExtGroup3_ReportQuantity_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 3);
    switch (value.tag) {
    case CSI_ReportConfig_ExtGroup3_ReportQuantity_r17_Tag_cri_RSRP_Index_r17:
        (void)0;
        break;
    case CSI_ReportConfig_ExtGroup3_ReportQuantity_r17_Tag_ssb_Index_RSRP_Index_r17:
        (void)0;
        break;
    case CSI_ReportConfig_ExtGroup3_ReportQuantity_r17_Tag_cri_SINR_Index_r17:
        (void)0;
        break;
    case CSI_ReportConfig_ExtGroup3_ReportQuantity_r17_Tag_ssb_Index_SINR_Index_r17:
        (void)0;
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ReportConfig_ExtGroup3_ReportQuantity_r17(Decoder& dec, CSI_ReportConfig_ExtGroup3_ReportQuantity_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 3, root_index)) {
        goto fail;
    }
    value.tag = (CSI_ReportConfig_ExtGroup3_ReportQuantity_r17_Tag)root_index;
    switch (value.tag) {
    case CSI_ReportConfig_ExtGroup3_ReportQuantity_r17_Tag_cri_RSRP_Index_r17: {
        (void)0;
        break;
    }
    case CSI_ReportConfig_ExtGroup3_ReportQuantity_r17_Tag_ssb_Index_RSRP_Index_r17: {
        (void)0;
        break;
    }
    case CSI_ReportConfig_ExtGroup3_ReportQuantity_r17_Tag_cri_SINR_Index_r17: {
        (void)0;
        break;
    }
    case CSI_ReportConfig_ExtGroup3_ReportQuantity_r17_Tag_ssb_Index_SINR_Index_r17: {
        (void)0;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportConfig_ExtGroup3_ReportQuantity_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportConfig_ExtGroup3_ReportQuantity_r17(CSI_ReportConfig_ExtGroup3_ReportQuantity_r17& value)
{
    switch (value.tag) {
    case CSI_ReportConfig_ExtGroup3_ReportQuantity_r17_Tag_cri_RSRP_Index_r17:
        break;
    case CSI_ReportConfig_ExtGroup3_ReportQuantity_r17_Tag_ssb_Index_RSRP_Index_r17:
        break;
    case CSI_ReportConfig_ExtGroup3_ReportQuantity_r17_Tag_cri_SINR_Index_r17:
        break;
    case CSI_ReportConfig_ExtGroup3_ReportQuantity_r17_Tag_ssb_Index_SINR_Index_r17:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportConfig_ExtGroup3(Encoder& enc, const CSI_ReportConfig_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_cqi_BitsPerSubband_r17);
    enc.WriteBit(value.has_groupBasedBeamReporting_v1710);
    enc.WriteBit(value.has_codebookConfig_r17);
    enc.WriteBit(value.has_sharedCMR_r17);
    enc.WriteBit(value.has_csi_ReportMode_r17);
    enc.WriteBit(value.has_numberOfSingleTRP_CSI_Mode1_r17);
    enc.WriteBit(value.has_reportQuantity_r17);
    if (value.has_cqi_BitsPerSubband_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cqi_BitsPerSubband_r17), 0, 0);
    }
    if (value.has_groupBasedBeamReporting_v1710) {
        Encode_CSI_ReportConfig_ExtGroup3_GroupBasedBeamReporting_v1710(enc, value.groupBasedBeamReporting_v1710);
    }
    if (value.has_codebookConfig_r17) {
        Encode_CodebookConfig_r17(enc, value.codebookConfig_r17);
    }
    if (value.has_sharedCMR_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sharedCMR_r17), 0, 0);
    }
    if (value.has_csi_ReportMode_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.csi_ReportMode_r17), 0, 1);
    }
    if (value.has_numberOfSingleTRP_CSI_Mode1_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.numberOfSingleTRP_CSI_Mode1_r17), 0, 2);
    }
    if (value.has_reportQuantity_r17) {
        Encode_CSI_ReportConfig_ExtGroup3_ReportQuantity_r17(enc, value.reportQuantity_r17);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ReportConfig_ExtGroup3(Decoder& dec, CSI_ReportConfig_ExtGroup3& value)
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
        value.cqi_BitsPerSubband_r17 = (CSI_ReportConfig_ExtGroup3_Cqi_BitsPerSubband_r17)0;
    }
    if (present_1) {
        if (Decode_CSI_ReportConfig_ExtGroup3_GroupBasedBeamReporting_v1710(dec, value.groupBasedBeamReporting_v1710) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_CodebookConfig_r17(dec, value.codebookConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        value.sharedCMR_r17 = (CSI_ReportConfig_ExtGroup3_SharedCMR_r17)0;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.csi_ReportMode_r17 = (CSI_ReportConfig_ExtGroup3_Csi_ReportMode_r17)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.numberOfSingleTRP_CSI_Mode1_r17 = (CSI_ReportConfig_ExtGroup3_NumberOfSingleTRP_CSI_Mode1_r17)tmp_value;
    }
    if (present_6) {
        if (Decode_CSI_ReportConfig_ExtGroup3_ReportQuantity_r17(dec, value.reportQuantity_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportConfig_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportConfig_ExtGroup3(CSI_ReportConfig_ExtGroup3& value)
{
    if (value.has_cqi_BitsPerSubband_r17) {
    }
    if (value.has_groupBasedBeamReporting_v1710) {
        Free_CSI_ReportConfig_ExtGroup3_GroupBasedBeamReporting_v1710(value.groupBasedBeamReporting_v1710);
    }
    if (value.has_codebookConfig_r17) {
        Free_CodebookConfig_r17(value.codebookConfig_r17);
    }
    if (value.has_sharedCMR_r17) {
    }
    if (value.has_csi_ReportMode_r17) {
    }
    if (value.has_numberOfSingleTRP_CSI_Mode1_r17) {
    }
    if (value.has_reportQuantity_r17) {
        Free_CSI_ReportConfig_ExtGroup3_ReportQuantity_r17(value.reportQuantity_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportConfig_ExtGroup4_SemiPersistentOnPUSCH_v1720(Encoder& enc, const CSI_ReportConfig_ExtGroup4_SemiPersistentOnPUSCH_v1720& value)
{
    (void)value;
    enc.WriteBit(value.has_reportSlotOffsetList_r17);
    enc.WriteBit(value.has_reportSlotOffsetListDCI_0_2_r17);
    enc.WriteBit(value.has_reportSlotOffsetListDCI_0_1_r17);
    if (value.has_reportSlotOffsetList_r17) {
enc.WriteConstrainedLength(value.reportSlotOffsetList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.reportSlotOffsetList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.reportSlotOffsetList_r17_items[i]), 0, 128);
}
    }
    if (value.has_reportSlotOffsetListDCI_0_2_r17) {
enc.WriteConstrainedLength(value.reportSlotOffsetListDCI_0_2_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_2_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.reportSlotOffsetListDCI_0_2_r17_items[i]), 0, 128);
}
    }
    if (value.has_reportSlotOffsetListDCI_0_1_r17) {
enc.WriteConstrainedLength(value.reportSlotOffsetListDCI_0_1_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_1_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.reportSlotOffsetListDCI_0_1_r17_items[i]), 0, 128);
}
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ReportConfig_ExtGroup4_SemiPersistentOnPUSCH_v1720(Decoder& dec, CSI_ReportConfig_ExtGroup4_SemiPersistentOnPUSCH_v1720& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.reportSlotOffsetList_r17_count)) { goto fail; }
if (value.reportSlotOffsetList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.reportSlotOffsetList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.reportSlotOffsetList_r17_count > 0u) {
    value.reportSlotOffsetList_r17_items = (int64_t*)std::malloc((std::size_t)value.reportSlotOffsetList_r17_count * sizeof(int64_t));
    if (value.reportSlotOffsetList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.reportSlotOffsetList_r17_items, 0, (std::size_t)value.reportSlotOffsetList_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.reportSlotOffsetList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 128, tmp_value)) { goto fail; }
    value.reportSlotOffsetList_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.reportSlotOffsetListDCI_0_2_r17_count)) { goto fail; }
if (value.reportSlotOffsetListDCI_0_2_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.reportSlotOffsetListDCI_0_2_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.reportSlotOffsetListDCI_0_2_r17_count > 0u) {
    value.reportSlotOffsetListDCI_0_2_r17_items = (int64_t*)std::malloc((std::size_t)value.reportSlotOffsetListDCI_0_2_r17_count * sizeof(int64_t));
    if (value.reportSlotOffsetListDCI_0_2_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.reportSlotOffsetListDCI_0_2_r17_items, 0, (std::size_t)value.reportSlotOffsetListDCI_0_2_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_2_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 128, tmp_value)) { goto fail; }
    value.reportSlotOffsetListDCI_0_2_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.reportSlotOffsetListDCI_0_1_r17_count)) { goto fail; }
if (value.reportSlotOffsetListDCI_0_1_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.reportSlotOffsetListDCI_0_1_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.reportSlotOffsetListDCI_0_1_r17_count > 0u) {
    value.reportSlotOffsetListDCI_0_1_r17_items = (int64_t*)std::malloc((std::size_t)value.reportSlotOffsetListDCI_0_1_r17_count * sizeof(int64_t));
    if (value.reportSlotOffsetListDCI_0_1_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.reportSlotOffsetListDCI_0_1_r17_items, 0, (std::size_t)value.reportSlotOffsetListDCI_0_1_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_1_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 128, tmp_value)) { goto fail; }
    value.reportSlotOffsetListDCI_0_1_r17_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportConfig_ExtGroup4_SemiPersistentOnPUSCH_v1720(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportConfig_ExtGroup4_SemiPersistentOnPUSCH_v1720(CSI_ReportConfig_ExtGroup4_SemiPersistentOnPUSCH_v1720& value)
{
    if (value.has_reportSlotOffsetList_r17) {
        if (value.reportSlotOffsetList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.reportSlotOffsetList_r17_count; ++i) {
            }
            std::free(value.reportSlotOffsetList_r17_items);
            value.reportSlotOffsetList_r17_items = nullptr;
        }
        value.reportSlotOffsetList_r17_count = 0;
    }
    if (value.has_reportSlotOffsetListDCI_0_2_r17) {
        if (value.reportSlotOffsetListDCI_0_2_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_2_r17_count; ++i) {
            }
            std::free(value.reportSlotOffsetListDCI_0_2_r17_items);
            value.reportSlotOffsetListDCI_0_2_r17_items = nullptr;
        }
        value.reportSlotOffsetListDCI_0_2_r17_count = 0;
    }
    if (value.has_reportSlotOffsetListDCI_0_1_r17) {
        if (value.reportSlotOffsetListDCI_0_1_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_1_r17_count; ++i) {
            }
            std::free(value.reportSlotOffsetListDCI_0_1_r17_items);
            value.reportSlotOffsetListDCI_0_1_r17_items = nullptr;
        }
        value.reportSlotOffsetListDCI_0_1_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportConfig_ExtGroup4_Aperiodic_v1720(Encoder& enc, const CSI_ReportConfig_ExtGroup4_Aperiodic_v1720& value)
{
    (void)value;
    enc.WriteBit(value.has_reportSlotOffsetList_r17);
    enc.WriteBit(value.has_reportSlotOffsetListDCI_0_2_r17);
    enc.WriteBit(value.has_reportSlotOffsetListDCI_0_1_r17);
    if (value.has_reportSlotOffsetList_r17) {
enc.WriteConstrainedLength(value.reportSlotOffsetList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.reportSlotOffsetList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.reportSlotOffsetList_r17_items[i]), 0, 128);
}
    }
    if (value.has_reportSlotOffsetListDCI_0_2_r17) {
enc.WriteConstrainedLength(value.reportSlotOffsetListDCI_0_2_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_2_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.reportSlotOffsetListDCI_0_2_r17_items[i]), 0, 128);
}
    }
    if (value.has_reportSlotOffsetListDCI_0_1_r17) {
enc.WriteConstrainedLength(value.reportSlotOffsetListDCI_0_1_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_1_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.reportSlotOffsetListDCI_0_1_r17_items[i]), 0, 128);
}
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ReportConfig_ExtGroup4_Aperiodic_v1720(Decoder& dec, CSI_ReportConfig_ExtGroup4_Aperiodic_v1720& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.reportSlotOffsetList_r17_count)) { goto fail; }
if (value.reportSlotOffsetList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.reportSlotOffsetList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.reportSlotOffsetList_r17_count > 0u) {
    value.reportSlotOffsetList_r17_items = (int64_t*)std::malloc((std::size_t)value.reportSlotOffsetList_r17_count * sizeof(int64_t));
    if (value.reportSlotOffsetList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.reportSlotOffsetList_r17_items, 0, (std::size_t)value.reportSlotOffsetList_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.reportSlotOffsetList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 128, tmp_value)) { goto fail; }
    value.reportSlotOffsetList_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.reportSlotOffsetListDCI_0_2_r17_count)) { goto fail; }
if (value.reportSlotOffsetListDCI_0_2_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.reportSlotOffsetListDCI_0_2_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.reportSlotOffsetListDCI_0_2_r17_count > 0u) {
    value.reportSlotOffsetListDCI_0_2_r17_items = (int64_t*)std::malloc((std::size_t)value.reportSlotOffsetListDCI_0_2_r17_count * sizeof(int64_t));
    if (value.reportSlotOffsetListDCI_0_2_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.reportSlotOffsetListDCI_0_2_r17_items, 0, (std::size_t)value.reportSlotOffsetListDCI_0_2_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_2_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 128, tmp_value)) { goto fail; }
    value.reportSlotOffsetListDCI_0_2_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.reportSlotOffsetListDCI_0_1_r17_count)) { goto fail; }
if (value.reportSlotOffsetListDCI_0_1_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.reportSlotOffsetListDCI_0_1_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.reportSlotOffsetListDCI_0_1_r17_count > 0u) {
    value.reportSlotOffsetListDCI_0_1_r17_items = (int64_t*)std::malloc((std::size_t)value.reportSlotOffsetListDCI_0_1_r17_count * sizeof(int64_t));
    if (value.reportSlotOffsetListDCI_0_1_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.reportSlotOffsetListDCI_0_1_r17_items, 0, (std::size_t)value.reportSlotOffsetListDCI_0_1_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_1_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 128, tmp_value)) { goto fail; }
    value.reportSlotOffsetListDCI_0_1_r17_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportConfig_ExtGroup4_Aperiodic_v1720(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportConfig_ExtGroup4_Aperiodic_v1720(CSI_ReportConfig_ExtGroup4_Aperiodic_v1720& value)
{
    if (value.has_reportSlotOffsetList_r17) {
        if (value.reportSlotOffsetList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.reportSlotOffsetList_r17_count; ++i) {
            }
            std::free(value.reportSlotOffsetList_r17_items);
            value.reportSlotOffsetList_r17_items = nullptr;
        }
        value.reportSlotOffsetList_r17_count = 0;
    }
    if (value.has_reportSlotOffsetListDCI_0_2_r17) {
        if (value.reportSlotOffsetListDCI_0_2_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_2_r17_count; ++i) {
            }
            std::free(value.reportSlotOffsetListDCI_0_2_r17_items);
            value.reportSlotOffsetListDCI_0_2_r17_items = nullptr;
        }
        value.reportSlotOffsetListDCI_0_2_r17_count = 0;
    }
    if (value.has_reportSlotOffsetListDCI_0_1_r17) {
        if (value.reportSlotOffsetListDCI_0_1_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_1_r17_count; ++i) {
            }
            std::free(value.reportSlotOffsetListDCI_0_1_r17_items);
            value.reportSlotOffsetListDCI_0_1_r17_items = nullptr;
        }
        value.reportSlotOffsetListDCI_0_1_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportConfig_ExtGroup4(Encoder& enc, const CSI_ReportConfig_ExtGroup4& value)
{
    (void)value;
    enc.WriteBit(value.has_semiPersistentOnPUSCH_v1720);
    enc.WriteBit(value.has_aperiodic_v1720);
    if (value.has_semiPersistentOnPUSCH_v1720) {
        Encode_CSI_ReportConfig_ExtGroup4_SemiPersistentOnPUSCH_v1720(enc, value.semiPersistentOnPUSCH_v1720);
    }
    if (value.has_aperiodic_v1720) {
        Encode_CSI_ReportConfig_ExtGroup4_Aperiodic_v1720(enc, value.aperiodic_v1720);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ReportConfig_ExtGroup4(Decoder& dec, CSI_ReportConfig_ExtGroup4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_CSI_ReportConfig_ExtGroup4_SemiPersistentOnPUSCH_v1720(dec, value.semiPersistentOnPUSCH_v1720) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CSI_ReportConfig_ExtGroup4_Aperiodic_v1720(dec, value.aperiodic_v1720) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportConfig_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportConfig_ExtGroup4(CSI_ReportConfig_ExtGroup4& value)
{
    if (value.has_semiPersistentOnPUSCH_v1720) {
        Free_CSI_ReportConfig_ExtGroup4_SemiPersistentOnPUSCH_v1720(value.semiPersistentOnPUSCH_v1720);
    }
    if (value.has_aperiodic_v1720) {
        Free_CSI_ReportConfig_ExtGroup4_Aperiodic_v1720(value.aperiodic_v1720);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_TDCP_r18(Encoder& enc, const TDCP_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_phaseReporting_r18);
enc.WriteConstrainedLength(value.delayDSetofLengthY_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.delayDSetofLengthY_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.delayDSetofLengthY_r18_items[i]), 0, 7);
}
    if (value.has_phaseReporting_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.phaseReporting_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_TDCP_r18(Decoder& dec, TDCP_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.delayDSetofLengthY_r18_count)) { goto fail; }
if (value.delayDSetofLengthY_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.delayDSetofLengthY_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.delayDSetofLengthY_r18_count > 0u) {
    value.delayDSetofLengthY_r18_items = (DelayD*)std::malloc((std::size_t)value.delayDSetofLengthY_r18_count * sizeof(DelayD));
    if (value.delayDSetofLengthY_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.delayDSetofLengthY_r18_items, 0, (std::size_t)value.delayDSetofLengthY_r18_count * sizeof(DelayD));
}
for (std::uint32_t i = 0; i < value.delayDSetofLengthY_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.delayDSetofLengthY_r18_items[i] = (DelayD)tmp_value;
}
    }
    if (present_0) {
        value.phaseReporting_r18 = (TDCP_r18_PhaseReporting_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_TDCP_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TDCP_r18(TDCP_r18& value)
{
    if (value.delayDSetofLengthY_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.delayDSetofLengthY_r18_count; ++i) {
        }
        std::free(value.delayDSetofLengthY_r18_items);
        value.delayDSetofLengthY_r18_items = nullptr;
    }
    value.delayDSetofLengthY_r18_count = 0;
    if (value.has_phaseReporting_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportConfig_ExtGroup6_GroupBasedBeamReporting_v1800(Encoder& enc, const CSI_ReportConfig_ExtGroup6_GroupBasedBeamReporting_v1800& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.reportingMode_r18), 0, 1);
    return enc.Error();
}

ErrorCode Decode_CSI_ReportConfig_ExtGroup6_GroupBasedBeamReporting_v1800(Decoder& dec, CSI_ReportConfig_ExtGroup6_GroupBasedBeamReporting_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.reportingMode_r18 = (CSI_ReportConfig_ExtGroup6_GroupBasedBeamReporting_v1800_ReportingMode_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportConfig_ExtGroup6_GroupBasedBeamReporting_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportConfig_ExtGroup6_GroupBasedBeamReporting_v1800(CSI_ReportConfig_ExtGroup6_GroupBasedBeamReporting_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportConfig_ExtGroup6(Encoder& enc, const CSI_ReportConfig_ExtGroup6& value)
{
    (void)value;
    enc.WriteBit(value.has_groupBasedBeamReporting_v1800);
    enc.WriteBit(value.has_reportQuantity_r18);
    enc.WriteBit(value.has_codebookConfig_r18);
    enc.WriteBit(value.has_csi_ReportSubConfigToAddModList_r18);
    enc.WriteBit(value.has_csi_ReportSubConfigToReleaseList_r18);
    if (value.has_groupBasedBeamReporting_v1800) {
        Encode_CSI_ReportConfig_ExtGroup6_GroupBasedBeamReporting_v1800(enc, value.groupBasedBeamReporting_v1800);
    }
    if (value.has_reportQuantity_r18) {
        Encode_TDCP_r18(enc, value.reportQuantity_r18);
    }
    if (value.has_codebookConfig_r18) {
        Encode_CodebookConfig_r18(enc, value.codebookConfig_r18);
    }
    if (value.has_csi_ReportSubConfigToAddModList_r18) {
enc.WriteConstrainedLength(value.csi_ReportSubConfigToAddModList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.csi_ReportSubConfigToAddModList_r18_count; ++i) {
    Encode_CSI_ReportSubConfig_r18(enc, value.csi_ReportSubConfigToAddModList_r18_items[i]);
}
    }
    if (value.has_csi_ReportSubConfigToReleaseList_r18) {
enc.WriteConstrainedLength(value.csi_ReportSubConfigToReleaseList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.csi_ReportSubConfigToReleaseList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.csi_ReportSubConfigToReleaseList_r18_items[i]), 0, 7);
}
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ReportConfig_ExtGroup6(Decoder& dec, CSI_ReportConfig_ExtGroup6& value)
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
        if (Decode_CSI_ReportConfig_ExtGroup6_GroupBasedBeamReporting_v1800(dec, value.groupBasedBeamReporting_v1800) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_TDCP_r18(dec, value.reportQuantity_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_CodebookConfig_r18(dec, value.codebookConfig_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.csi_ReportSubConfigToAddModList_r18_count)) { goto fail; }
if (value.csi_ReportSubConfigToAddModList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.csi_ReportSubConfigToAddModList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.csi_ReportSubConfigToAddModList_r18_count > 0u) {
    value.csi_ReportSubConfigToAddModList_r18_items = (CSI_ReportSubConfig_r18*)std::malloc((std::size_t)value.csi_ReportSubConfigToAddModList_r18_count * sizeof(CSI_ReportSubConfig_r18));
    if (value.csi_ReportSubConfigToAddModList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.csi_ReportSubConfigToAddModList_r18_items, 0, (std::size_t)value.csi_ReportSubConfigToAddModList_r18_count * sizeof(CSI_ReportSubConfig_r18));
}
for (std::uint32_t i = 0; i < value.csi_ReportSubConfigToAddModList_r18_count; ++i) {
    if (Decode_CSI_ReportSubConfig_r18(dec, value.csi_ReportSubConfigToAddModList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.csi_ReportSubConfigToReleaseList_r18_count)) { goto fail; }
if (value.csi_ReportSubConfigToReleaseList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.csi_ReportSubConfigToReleaseList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.csi_ReportSubConfigToReleaseList_r18_count > 0u) {
    value.csi_ReportSubConfigToReleaseList_r18_items = (CSI_ReportSubConfigId_r18*)std::malloc((std::size_t)value.csi_ReportSubConfigToReleaseList_r18_count * sizeof(CSI_ReportSubConfigId_r18));
    if (value.csi_ReportSubConfigToReleaseList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.csi_ReportSubConfigToReleaseList_r18_items, 0, (std::size_t)value.csi_ReportSubConfigToReleaseList_r18_count * sizeof(CSI_ReportSubConfigId_r18));
}
for (std::uint32_t i = 0; i < value.csi_ReportSubConfigToReleaseList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.csi_ReportSubConfigToReleaseList_r18_items[i] = (CSI_ReportSubConfigId_r18)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportConfig_ExtGroup6(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportConfig_ExtGroup6(CSI_ReportConfig_ExtGroup6& value)
{
    if (value.has_groupBasedBeamReporting_v1800) {
        Free_CSI_ReportConfig_ExtGroup6_GroupBasedBeamReporting_v1800(value.groupBasedBeamReporting_v1800);
    }
    if (value.has_reportQuantity_r18) {
        Free_TDCP_r18(value.reportQuantity_r18);
    }
    if (value.has_codebookConfig_r18) {
        Free_CodebookConfig_r18(value.codebookConfig_r18);
    }
    if (value.has_csi_ReportSubConfigToAddModList_r18) {
        if (value.csi_ReportSubConfigToAddModList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.csi_ReportSubConfigToAddModList_r18_count; ++i) {
                Free_CSI_ReportSubConfig_r18(value.csi_ReportSubConfigToAddModList_r18_items[i]);
            }
            std::free(value.csi_ReportSubConfigToAddModList_r18_items);
            value.csi_ReportSubConfigToAddModList_r18_items = nullptr;
        }
        value.csi_ReportSubConfigToAddModList_r18_count = 0;
    }
    if (value.has_csi_ReportSubConfigToReleaseList_r18) {
        if (value.csi_ReportSubConfigToReleaseList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.csi_ReportSubConfigToReleaseList_r18_count; ++i) {
            }
            std::free(value.csi_ReportSubConfigToReleaseList_r18_items);
            value.csi_ReportSubConfigToReleaseList_r18_items = nullptr;
        }
        value.csi_ReportSubConfigToReleaseList_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportConfig_ExtGroup5(Encoder& enc, const CSI_ReportConfig_ExtGroup5& value)
{
    (void)value;
    enc.WriteBit(value.has_codebookConfig_v1730);
    if (value.has_codebookConfig_v1730) {
        Encode_CodebookConfig_v1730(enc, value.codebookConfig_v1730);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ReportConfig_ExtGroup5(Decoder& dec, CSI_ReportConfig_ExtGroup5& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_CodebookConfig_v1730(dec, value.codebookConfig_v1730) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportConfig_ExtGroup5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportConfig_ExtGroup5(CSI_ReportConfig_ExtGroup5& value)
{
    if (value.has_codebookConfig_v1730) {
        Free_CodebookConfig_v1730(value.codebookConfig_v1730);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportPeriodicityAndOffset(Encoder& enc, const CSI_ReportPeriodicityAndOffset& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 9);
    switch (value.tag) {
    case CSI_ReportPeriodicityAndOffset_Tag_slots4:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.slots4), 0, 3);
        break;
    case CSI_ReportPeriodicityAndOffset_Tag_slots5:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.slots5), 0, 4);
        break;
    case CSI_ReportPeriodicityAndOffset_Tag_slots8:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.slots8), 0, 7);
        break;
    case CSI_ReportPeriodicityAndOffset_Tag_slots10:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.slots10), 0, 9);
        break;
    case CSI_ReportPeriodicityAndOffset_Tag_slots16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.slots16), 0, 15);
        break;
    case CSI_ReportPeriodicityAndOffset_Tag_slots20:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.slots20), 0, 19);
        break;
    case CSI_ReportPeriodicityAndOffset_Tag_slots40:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.slots40), 0, 39);
        break;
    case CSI_ReportPeriodicityAndOffset_Tag_slots80:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.slots80), 0, 79);
        break;
    case CSI_ReportPeriodicityAndOffset_Tag_slots160:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.slots160), 0, 159);
        break;
    case CSI_ReportPeriodicityAndOffset_Tag_slots320:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.slots320), 0, 319);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ReportPeriodicityAndOffset(Decoder& dec, CSI_ReportPeriodicityAndOffset& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 9, root_index)) {
        goto fail;
    }
    value.tag = (CSI_ReportPeriodicityAndOffset_Tag)root_index;
    switch (value.tag) {
    case CSI_ReportPeriodicityAndOffset_Tag_slots4: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.slots4 = (int64_t)tmp_value;
        break;
    }
    case CSI_ReportPeriodicityAndOffset_Tag_slots5: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.u.slots5 = (int64_t)tmp_value;
        break;
    }
    case CSI_ReportPeriodicityAndOffset_Tag_slots8: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.u.slots8 = (int64_t)tmp_value;
        break;
    }
    case CSI_ReportPeriodicityAndOffset_Tag_slots10: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.u.slots10 = (int64_t)tmp_value;
        break;
    }
    case CSI_ReportPeriodicityAndOffset_Tag_slots16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.slots16 = (int64_t)tmp_value;
        break;
    }
    case CSI_ReportPeriodicityAndOffset_Tag_slots20: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 19, tmp_value)) { goto fail; }
        value.u.slots20 = (int64_t)tmp_value;
        break;
    }
    case CSI_ReportPeriodicityAndOffset_Tag_slots40: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.slots40 = (int64_t)tmp_value;
        break;
    }
    case CSI_ReportPeriodicityAndOffset_Tag_slots80: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.slots80 = (int64_t)tmp_value;
        break;
    }
    case CSI_ReportPeriodicityAndOffset_Tag_slots160: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.u.slots160 = (int64_t)tmp_value;
        break;
    }
    case CSI_ReportPeriodicityAndOffset_Tag_slots320: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.u.slots320 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportPeriodicityAndOffset(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportPeriodicityAndOffset(CSI_ReportPeriodicityAndOffset& value)
{
    switch (value.tag) {
    case CSI_ReportPeriodicityAndOffset_Tag_slots4:
        break;
    case CSI_ReportPeriodicityAndOffset_Tag_slots5:
        break;
    case CSI_ReportPeriodicityAndOffset_Tag_slots8:
        break;
    case CSI_ReportPeriodicityAndOffset_Tag_slots10:
        break;
    case CSI_ReportPeriodicityAndOffset_Tag_slots16:
        break;
    case CSI_ReportPeriodicityAndOffset_Tag_slots20:
        break;
    case CSI_ReportPeriodicityAndOffset_Tag_slots40:
        break;
    case CSI_ReportPeriodicityAndOffset_Tag_slots80:
        break;
    case CSI_ReportPeriodicityAndOffset_Tag_slots160:
        break;
    case CSI_ReportPeriodicityAndOffset_Tag_slots320:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportConfigType_Periodic(Encoder& enc, const CSI_ReportConfigType_Periodic& value)
{
    (void)value;
    Encode_CSI_ReportPeriodicityAndOffset(enc, value.reportSlotConfig);
enc.WriteConstrainedLength(value.pucch_CSI_ResourceList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pucch_CSI_ResourceList_count; ++i) {
    Encode_PUCCH_CSI_Resource(enc, value.pucch_CSI_ResourceList_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_CSI_ReportConfigType_Periodic(Decoder& dec, CSI_ReportConfigType_Periodic& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CSI_ReportPeriodicityAndOffset(dec, value.reportSlotConfig) != ErrorCode_Ok) { goto fail; }
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.pucch_CSI_ResourceList_count)) { goto fail; }
if (value.pucch_CSI_ResourceList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pucch_CSI_ResourceList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pucch_CSI_ResourceList_count > 0u) {
    value.pucch_CSI_ResourceList_items = (PUCCH_CSI_Resource*)std::malloc((std::size_t)value.pucch_CSI_ResourceList_count * sizeof(PUCCH_CSI_Resource));
    if (value.pucch_CSI_ResourceList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pucch_CSI_ResourceList_items, 0, (std::size_t)value.pucch_CSI_ResourceList_count * sizeof(PUCCH_CSI_Resource));
}
for (std::uint32_t i = 0; i < value.pucch_CSI_ResourceList_count; ++i) {
    if (Decode_PUCCH_CSI_Resource(dec, value.pucch_CSI_ResourceList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportConfigType_Periodic(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportConfigType_Periodic(CSI_ReportConfigType_Periodic& value)
{
    Free_CSI_ReportPeriodicityAndOffset(value.reportSlotConfig);
    if (value.pucch_CSI_ResourceList_items != nullptr) {
        for (std::uint32_t i = 0; i < value.pucch_CSI_ResourceList_count; ++i) {
            Free_PUCCH_CSI_Resource(value.pucch_CSI_ResourceList_items[i]);
        }
        std::free(value.pucch_CSI_ResourceList_items);
        value.pucch_CSI_ResourceList_items = nullptr;
    }
    value.pucch_CSI_ResourceList_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportConfigType_SemiPersistentOnPUCCH(Encoder& enc, const CSI_ReportConfigType_SemiPersistentOnPUCCH& value)
{
    (void)value;
    Encode_CSI_ReportPeriodicityAndOffset(enc, value.reportSlotConfig);
enc.WriteConstrainedLength(value.pucch_CSI_ResourceList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pucch_CSI_ResourceList_count; ++i) {
    Encode_PUCCH_CSI_Resource(enc, value.pucch_CSI_ResourceList_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_CSI_ReportConfigType_SemiPersistentOnPUCCH(Decoder& dec, CSI_ReportConfigType_SemiPersistentOnPUCCH& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CSI_ReportPeriodicityAndOffset(dec, value.reportSlotConfig) != ErrorCode_Ok) { goto fail; }
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.pucch_CSI_ResourceList_count)) { goto fail; }
if (value.pucch_CSI_ResourceList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pucch_CSI_ResourceList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pucch_CSI_ResourceList_count > 0u) {
    value.pucch_CSI_ResourceList_items = (PUCCH_CSI_Resource*)std::malloc((std::size_t)value.pucch_CSI_ResourceList_count * sizeof(PUCCH_CSI_Resource));
    if (value.pucch_CSI_ResourceList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pucch_CSI_ResourceList_items, 0, (std::size_t)value.pucch_CSI_ResourceList_count * sizeof(PUCCH_CSI_Resource));
}
for (std::uint32_t i = 0; i < value.pucch_CSI_ResourceList_count; ++i) {
    if (Decode_PUCCH_CSI_Resource(dec, value.pucch_CSI_ResourceList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportConfigType_SemiPersistentOnPUCCH(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportConfigType_SemiPersistentOnPUCCH(CSI_ReportConfigType_SemiPersistentOnPUCCH& value)
{
    Free_CSI_ReportPeriodicityAndOffset(value.reportSlotConfig);
    if (value.pucch_CSI_ResourceList_items != nullptr) {
        for (std::uint32_t i = 0; i < value.pucch_CSI_ResourceList_count; ++i) {
            Free_PUCCH_CSI_Resource(value.pucch_CSI_ResourceList_items[i]);
        }
        std::free(value.pucch_CSI_ResourceList_items);
        value.pucch_CSI_ResourceList_items = nullptr;
    }
    value.pucch_CSI_ResourceList_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportConfigType_SemiPersistentOnPUSCH(Encoder& enc, const CSI_ReportConfigType_SemiPersistentOnPUSCH& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.reportSlotConfig), 0, 6);
enc.WriteConstrainedLength(value.reportSlotOffsetList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.reportSlotOffsetList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.reportSlotOffsetList_items[i]), 0, 32);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.p0alpha), 0, 29);
    return enc.Error();
}

ErrorCode Decode_CSI_ReportConfigType_SemiPersistentOnPUSCH(Decoder& dec, CSI_ReportConfigType_SemiPersistentOnPUSCH& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.reportSlotConfig = (CSI_ReportConfigType_SemiPersistentOnPUSCH_ReportSlotConfig)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.reportSlotOffsetList_count)) { goto fail; }
if (value.reportSlotOffsetList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.reportSlotOffsetList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.reportSlotOffsetList_count > 0u) {
    value.reportSlotOffsetList_items = (int64_t*)std::malloc((std::size_t)value.reportSlotOffsetList_count * sizeof(int64_t));
    if (value.reportSlotOffsetList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.reportSlotOffsetList_items, 0, (std::size_t)value.reportSlotOffsetList_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.reportSlotOffsetList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 32, tmp_value)) { goto fail; }
    value.reportSlotOffsetList_items[i] = (int64_t)tmp_value;
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 29, tmp_value)) { goto fail; }
        value.p0alpha = (P0_PUSCH_AlphaSetId)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportConfigType_SemiPersistentOnPUSCH(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportConfigType_SemiPersistentOnPUSCH(CSI_ReportConfigType_SemiPersistentOnPUSCH& value)
{
    if (value.reportSlotOffsetList_items != nullptr) {
        for (std::uint32_t i = 0; i < value.reportSlotOffsetList_count; ++i) {
        }
        std::free(value.reportSlotOffsetList_items);
        value.reportSlotOffsetList_items = nullptr;
    }
    value.reportSlotOffsetList_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportConfigType_Aperiodic(Encoder& enc, const CSI_ReportConfigType_Aperiodic& value)
{
    (void)value;
enc.WriteConstrainedLength(value.reportSlotOffsetList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.reportSlotOffsetList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.reportSlotOffsetList_items[i]), 0, 32);
}
    return enc.Error();
}

ErrorCode Decode_CSI_ReportConfigType_Aperiodic(Decoder& dec, CSI_ReportConfigType_Aperiodic& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.reportSlotOffsetList_count)) { goto fail; }
if (value.reportSlotOffsetList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.reportSlotOffsetList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.reportSlotOffsetList_count > 0u) {
    value.reportSlotOffsetList_items = (int64_t*)std::malloc((std::size_t)value.reportSlotOffsetList_count * sizeof(int64_t));
    if (value.reportSlotOffsetList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.reportSlotOffsetList_items, 0, (std::size_t)value.reportSlotOffsetList_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.reportSlotOffsetList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 32, tmp_value)) { goto fail; }
    value.reportSlotOffsetList_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportConfigType_Aperiodic(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportConfigType_Aperiodic(CSI_ReportConfigType_Aperiodic& value)
{
    if (value.reportSlotOffsetList_items != nullptr) {
        for (std::uint32_t i = 0; i < value.reportSlotOffsetList_count; ++i) {
        }
        std::free(value.reportSlotOffsetList_items);
        value.reportSlotOffsetList_items = nullptr;
    }
    value.reportSlotOffsetList_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportConfigType(Encoder& enc, const CSI_ReportConfigType& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 3);
    switch (value.tag) {
    case CSI_ReportConfigType_Tag_periodic:
        Encode_CSI_ReportConfigType_Periodic(enc, value.u.periodic);
        break;
    case CSI_ReportConfigType_Tag_semiPersistentOnPUCCH:
        Encode_CSI_ReportConfigType_SemiPersistentOnPUCCH(enc, value.u.semiPersistentOnPUCCH);
        break;
    case CSI_ReportConfigType_Tag_semiPersistentOnPUSCH:
        Encode_CSI_ReportConfigType_SemiPersistentOnPUSCH(enc, value.u.semiPersistentOnPUSCH);
        break;
    case CSI_ReportConfigType_Tag_aperiodic:
        Encode_CSI_ReportConfigType_Aperiodic(enc, value.u.aperiodic);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ReportConfigType(Decoder& dec, CSI_ReportConfigType& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 3, root_index)) {
        goto fail;
    }
    value.tag = (CSI_ReportConfigType_Tag)root_index;
    switch (value.tag) {
    case CSI_ReportConfigType_Tag_periodic: {
        if (Decode_CSI_ReportConfigType_Periodic(dec, value.u.periodic) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case CSI_ReportConfigType_Tag_semiPersistentOnPUCCH: {
        if (Decode_CSI_ReportConfigType_SemiPersistentOnPUCCH(dec, value.u.semiPersistentOnPUCCH) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case CSI_ReportConfigType_Tag_semiPersistentOnPUSCH: {
        if (Decode_CSI_ReportConfigType_SemiPersistentOnPUSCH(dec, value.u.semiPersistentOnPUSCH) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case CSI_ReportConfigType_Tag_aperiodic: {
        if (Decode_CSI_ReportConfigType_Aperiodic(dec, value.u.aperiodic) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportConfigType(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportConfigType(CSI_ReportConfigType& value)
{
    switch (value.tag) {
    case CSI_ReportConfigType_Tag_periodic:
        Free_CSI_ReportConfigType_Periodic(value.u.periodic);
        break;
    case CSI_ReportConfigType_Tag_semiPersistentOnPUCCH:
        Free_CSI_ReportConfigType_SemiPersistentOnPUCCH(value.u.semiPersistentOnPUCCH);
        break;
    case CSI_ReportConfigType_Tag_semiPersistentOnPUSCH:
        Free_CSI_ReportConfigType_SemiPersistentOnPUSCH(value.u.semiPersistentOnPUSCH);
        break;
    case CSI_ReportConfigType_Tag_aperiodic:
        Free_CSI_ReportConfigType_Aperiodic(value.u.aperiodic);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportConfig_ReportQuantity_Cri_RI_i1_CQI(Encoder& enc, const CSI_ReportConfig_ReportQuantity_Cri_RI_i1_CQI& value)
{
    (void)value;
    enc.WriteBit(value.has_pdsch_BundleSizeForCSI);
    if (value.has_pdsch_BundleSizeForCSI) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_BundleSizeForCSI), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ReportConfig_ReportQuantity_Cri_RI_i1_CQI(Decoder& dec, CSI_ReportConfig_ReportQuantity_Cri_RI_i1_CQI& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.pdsch_BundleSizeForCSI = (CSI_ReportConfig_ReportQuantity_Cri_RI_i1_CQI_Pdsch_BundleSizeForCSI)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportConfig_ReportQuantity_Cri_RI_i1_CQI(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportConfig_ReportQuantity_Cri_RI_i1_CQI(CSI_ReportConfig_ReportQuantity_Cri_RI_i1_CQI& value)
{
    if (value.has_pdsch_BundleSizeForCSI) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportConfig_ReportQuantity(Encoder& enc, const CSI_ReportConfig_ReportQuantity& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 7);
    switch (value.tag) {
    case CSI_ReportConfig_ReportQuantity_Tag_none:
        (void)0;
        break;
    case CSI_ReportConfig_ReportQuantity_Tag_cri_RI_PMI_CQI:
        (void)0;
        break;
    case CSI_ReportConfig_ReportQuantity_Tag_cri_RI_i1:
        (void)0;
        break;
    case CSI_ReportConfig_ReportQuantity_Tag_cri_RI_i1_CQI:
        Encode_CSI_ReportConfig_ReportQuantity_Cri_RI_i1_CQI(enc, value.u.cri_RI_i1_CQI);
        break;
    case CSI_ReportConfig_ReportQuantity_Tag_cri_RI_CQI:
        (void)0;
        break;
    case CSI_ReportConfig_ReportQuantity_Tag_cri_RSRP:
        (void)0;
        break;
    case CSI_ReportConfig_ReportQuantity_Tag_ssb_Index_RSRP:
        (void)0;
        break;
    case CSI_ReportConfig_ReportQuantity_Tag_cri_RI_LI_PMI_CQI:
        (void)0;
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ReportConfig_ReportQuantity(Decoder& dec, CSI_ReportConfig_ReportQuantity& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 7, root_index)) {
        goto fail;
    }
    value.tag = (CSI_ReportConfig_ReportQuantity_Tag)root_index;
    switch (value.tag) {
    case CSI_ReportConfig_ReportQuantity_Tag_none: {
        (void)0;
        break;
    }
    case CSI_ReportConfig_ReportQuantity_Tag_cri_RI_PMI_CQI: {
        (void)0;
        break;
    }
    case CSI_ReportConfig_ReportQuantity_Tag_cri_RI_i1: {
        (void)0;
        break;
    }
    case CSI_ReportConfig_ReportQuantity_Tag_cri_RI_i1_CQI: {
        if (Decode_CSI_ReportConfig_ReportQuantity_Cri_RI_i1_CQI(dec, value.u.cri_RI_i1_CQI) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case CSI_ReportConfig_ReportQuantity_Tag_cri_RI_CQI: {
        (void)0;
        break;
    }
    case CSI_ReportConfig_ReportQuantity_Tag_cri_RSRP: {
        (void)0;
        break;
    }
    case CSI_ReportConfig_ReportQuantity_Tag_ssb_Index_RSRP: {
        (void)0;
        break;
    }
    case CSI_ReportConfig_ReportQuantity_Tag_cri_RI_LI_PMI_CQI: {
        (void)0;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportConfig_ReportQuantity(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportConfig_ReportQuantity(CSI_ReportConfig_ReportQuantity& value)
{
    switch (value.tag) {
    case CSI_ReportConfig_ReportQuantity_Tag_none:
        break;
    case CSI_ReportConfig_ReportQuantity_Tag_cri_RI_PMI_CQI:
        break;
    case CSI_ReportConfig_ReportQuantity_Tag_cri_RI_i1:
        break;
    case CSI_ReportConfig_ReportQuantity_Tag_cri_RI_i1_CQI:
        Free_CSI_ReportConfig_ReportQuantity_Cri_RI_i1_CQI(value.u.cri_RI_i1_CQI);
        break;
    case CSI_ReportConfig_ReportQuantity_Tag_cri_RI_CQI:
        break;
    case CSI_ReportConfig_ReportQuantity_Tag_cri_RSRP:
        break;
    case CSI_ReportConfig_ReportQuantity_Tag_ssb_Index_RSRP:
        break;
    case CSI_ReportConfig_ReportQuantity_Tag_cri_RI_LI_PMI_CQI:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand(Encoder& enc, const CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 16) {
        if (choice_index >= 17) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 16));
        Encoder sub;
        switch (value.tag) {
        case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands19_v1530:
            sub.WriteFixedBitString(value.u.subbands19_v1530.bytes, value.u.subbands19_v1530.bitLength, 19, 19);
            break;
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
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 15);
    switch (value.tag) {
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands3:
        enc.WriteFixedBitString(value.u.subbands3.bytes, value.u.subbands3.bitLength, 3, 3);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands4:
        enc.WriteFixedBitString(value.u.subbands4.bytes, value.u.subbands4.bitLength, 4, 4);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands5:
        enc.WriteFixedBitString(value.u.subbands5.bytes, value.u.subbands5.bitLength, 5, 5);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands6:
        enc.WriteFixedBitString(value.u.subbands6.bytes, value.u.subbands6.bitLength, 6, 6);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands7:
        enc.WriteFixedBitString(value.u.subbands7.bytes, value.u.subbands7.bitLength, 7, 7);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands8:
        enc.WriteFixedBitString(value.u.subbands8.bytes, value.u.subbands8.bitLength, 8, 8);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands9:
        enc.WriteFixedBitString(value.u.subbands9.bytes, value.u.subbands9.bitLength, 9, 9);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands10:
        enc.WriteFixedBitString(value.u.subbands10.bytes, value.u.subbands10.bitLength, 10, 10);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands11:
        enc.WriteFixedBitString(value.u.subbands11.bytes, value.u.subbands11.bitLength, 11, 11);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands12:
        enc.WriteFixedBitString(value.u.subbands12.bytes, value.u.subbands12.bitLength, 12, 12);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands13:
        enc.WriteFixedBitString(value.u.subbands13.bytes, value.u.subbands13.bitLength, 13, 13);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands14:
        enc.WriteFixedBitString(value.u.subbands14.bytes, value.u.subbands14.bitLength, 14, 14);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands15:
        enc.WriteFixedBitString(value.u.subbands15.bytes, value.u.subbands15.bitLength, 15, 15);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands16:
        enc.WriteFixedBitString(value.u.subbands16.bytes, value.u.subbands16.bitLength, 16, 16);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands17:
        enc.WriteFixedBitString(value.u.subbands17.bytes, value.u.subbands17.bitLength, 17, 17);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands18:
        enc.WriteFixedBitString(value.u.subbands18.bytes, value.u.subbands18.bitLength, 18, 18);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand(Decoder& dec, CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand& value)
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
        if (extension_index >= 1u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        value.tag = (CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag)(16 + extension_index);
        std::vector<std::uint8_t> open_bytes;
        if (!dec.ReadOpenType(open_bytes)) { goto fail; }
        Decoder sub(open_bytes.data(), open_bytes.size());
        switch (value.tag) {
        case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands19_v1530: {
            std::uint8_t* string_bytes = nullptr;
            std::uint32_t string_length = 0;
            if (!sub.ReadFixedBitString(string_bytes, 19)) { goto fail; }
            string_length = 19;
            value.u.subbands19_v1530.bytes = string_bytes;
            value.u.subbands19_v1530.bitLength = string_length;
            break;
        }
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
    if (!dec.ReadConstrainedInteger(0, 15, root_index)) {
        goto fail;
    }
    value.tag = (CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag)root_index;
    switch (value.tag) {
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands3: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 3)) { goto fail; }
        string_length = 3;
        value.u.subbands3.bytes = string_bytes;
        value.u.subbands3.bitLength = string_length;
        break;
    }
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands4: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 4)) { goto fail; }
        string_length = 4;
        value.u.subbands4.bytes = string_bytes;
        value.u.subbands4.bitLength = string_length;
        break;
    }
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands5: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 5)) { goto fail; }
        string_length = 5;
        value.u.subbands5.bytes = string_bytes;
        value.u.subbands5.bitLength = string_length;
        break;
    }
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands6: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 6)) { goto fail; }
        string_length = 6;
        value.u.subbands6.bytes = string_bytes;
        value.u.subbands6.bitLength = string_length;
        break;
    }
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands7: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 7)) { goto fail; }
        string_length = 7;
        value.u.subbands7.bytes = string_bytes;
        value.u.subbands7.bitLength = string_length;
        break;
    }
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands8: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.u.subbands8.bytes = string_bytes;
        value.u.subbands8.bitLength = string_length;
        break;
    }
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands9: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 9)) { goto fail; }
        string_length = 9;
        value.u.subbands9.bytes = string_bytes;
        value.u.subbands9.bitLength = string_length;
        break;
    }
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands10: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 10)) { goto fail; }
        string_length = 10;
        value.u.subbands10.bytes = string_bytes;
        value.u.subbands10.bitLength = string_length;
        break;
    }
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands11: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 11)) { goto fail; }
        string_length = 11;
        value.u.subbands11.bytes = string_bytes;
        value.u.subbands11.bitLength = string_length;
        break;
    }
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands12: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 12)) { goto fail; }
        string_length = 12;
        value.u.subbands12.bytes = string_bytes;
        value.u.subbands12.bitLength = string_length;
        break;
    }
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands13: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 13)) { goto fail; }
        string_length = 13;
        value.u.subbands13.bytes = string_bytes;
        value.u.subbands13.bitLength = string_length;
        break;
    }
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands14: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 14)) { goto fail; }
        string_length = 14;
        value.u.subbands14.bytes = string_bytes;
        value.u.subbands14.bitLength = string_length;
        break;
    }
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands15: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 15)) { goto fail; }
        string_length = 15;
        value.u.subbands15.bytes = string_bytes;
        value.u.subbands15.bitLength = string_length;
        break;
    }
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands16: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.u.subbands16.bytes = string_bytes;
        value.u.subbands16.bitLength = string_length;
        break;
    }
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands17: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 17)) { goto fail; }
        string_length = 17;
        value.u.subbands17.bytes = string_bytes;
        value.u.subbands17.bitLength = string_length;
        break;
    }
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands18: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 18)) { goto fail; }
        string_length = 18;
        value.u.subbands18.bytes = string_bytes;
        value.u.subbands18.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand(CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand& value)
{
    switch (value.tag) {
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands3:
        std::free(value.u.subbands3.bytes);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands4:
        std::free(value.u.subbands4.bytes);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands5:
        std::free(value.u.subbands5.bytes);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands6:
        std::free(value.u.subbands6.bytes);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands7:
        std::free(value.u.subbands7.bytes);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands8:
        std::free(value.u.subbands8.bytes);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands9:
        std::free(value.u.subbands9.bytes);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands10:
        std::free(value.u.subbands10.bytes);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands11:
        std::free(value.u.subbands11.bytes);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands12:
        std::free(value.u.subbands12.bytes);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands13:
        std::free(value.u.subbands13.bytes);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands14:
        std::free(value.u.subbands14.bytes);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands15:
        std::free(value.u.subbands15.bytes);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands16:
        std::free(value.u.subbands16.bytes);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands17:
        std::free(value.u.subbands17.bytes);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands18:
        std::free(value.u.subbands18.bytes);
        break;
    case CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands19_v1530:
        std::free(value.u.subbands19_v1530.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportConfig_ReportFreqConfiguration(Encoder& enc, const CSI_ReportConfig_ReportFreqConfiguration& value)
{
    (void)value;
    enc.WriteBit(value.has_cqi_FormatIndicator);
    enc.WriteBit(value.has_pmi_FormatIndicator);
    enc.WriteBit(value.has_csi_ReportingBand);
    if (value.has_cqi_FormatIndicator) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cqi_FormatIndicator), 0, 1);
    }
    if (value.has_pmi_FormatIndicator) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pmi_FormatIndicator), 0, 1);
    }
    if (value.has_csi_ReportingBand) {
        Encode_CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand(enc, value.csi_ReportingBand);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ReportConfig_ReportFreqConfiguration(Decoder& dec, CSI_ReportConfig_ReportFreqConfiguration& value)
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
        value.cqi_FormatIndicator = (CSI_ReportConfig_ReportFreqConfiguration_Cqi_FormatIndicator)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.pmi_FormatIndicator = (CSI_ReportConfig_ReportFreqConfiguration_Pmi_FormatIndicator)tmp_value;
    }
    if (present_2) {
        if (Decode_CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand(dec, value.csi_ReportingBand) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportConfig_ReportFreqConfiguration(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportConfig_ReportFreqConfiguration(CSI_ReportConfig_ReportFreqConfiguration& value)
{
    if (value.has_cqi_FormatIndicator) {
    }
    if (value.has_pmi_FormatIndicator) {
    }
    if (value.has_csi_ReportingBand) {
        Free_CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand(value.csi_ReportingBand);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportConfig_GroupBasedBeamReporting_Disabled(Encoder& enc, const CSI_ReportConfig_GroupBasedBeamReporting_Disabled& value)
{
    (void)value;
    enc.WriteBit(value.has_nrofReportedRS);
    if (value.has_nrofReportedRS) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrofReportedRS), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ReportConfig_GroupBasedBeamReporting_Disabled(Decoder& dec, CSI_ReportConfig_GroupBasedBeamReporting_Disabled& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.nrofReportedRS = (CSI_ReportConfig_GroupBasedBeamReporting_Disabled_NrofReportedRS)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportConfig_GroupBasedBeamReporting_Disabled(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportConfig_GroupBasedBeamReporting_Disabled(CSI_ReportConfig_GroupBasedBeamReporting_Disabled& value)
{
    if (value.has_nrofReportedRS) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportConfig_GroupBasedBeamReporting(Encoder& enc, const CSI_ReportConfig_GroupBasedBeamReporting& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CSI_ReportConfig_GroupBasedBeamReporting_Tag_enabled:
        (void)0;
        break;
    case CSI_ReportConfig_GroupBasedBeamReporting_Tag_disabled:
        Encode_CSI_ReportConfig_GroupBasedBeamReporting_Disabled(enc, value.u.disabled);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ReportConfig_GroupBasedBeamReporting(Decoder& dec, CSI_ReportConfig_GroupBasedBeamReporting& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CSI_ReportConfig_GroupBasedBeamReporting_Tag)root_index;
    switch (value.tag) {
    case CSI_ReportConfig_GroupBasedBeamReporting_Tag_enabled: {
        (void)0;
        break;
    }
    case CSI_ReportConfig_GroupBasedBeamReporting_Tag_disabled: {
        if (Decode_CSI_ReportConfig_GroupBasedBeamReporting_Disabled(dec, value.u.disabled) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportConfig_GroupBasedBeamReporting(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportConfig_GroupBasedBeamReporting(CSI_ReportConfig_GroupBasedBeamReporting& value)
{
    switch (value.tag) {
    case CSI_ReportConfig_GroupBasedBeamReporting_Tag_enabled:
        break;
    case CSI_ReportConfig_GroupBasedBeamReporting_Tag_disabled:
        Free_CSI_ReportConfig_GroupBasedBeamReporting_Disabled(value.u.disabled);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportConfig(Encoder& enc, const CSI_ReportConfig& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4 || value.has_extGroup5 || value.has_extGroup6;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_carrier);
    enc.WriteBit(value.has_csi_IM_ResourcesForInterference);
    enc.WriteBit(value.has_nzp_CSI_RS_ResourcesForInterference);
    enc.WriteBit(value.has_reportFreqConfiguration);
    enc.WriteBit(value.has_codebookConfig);
    enc.WriteBit(value.has_dummy);
    enc.WriteBit(value.has_cqi_Table);
    enc.WriteBit(value.has_non_PMI_PortIndication);
    enc.WriteConstrainedInteger((std::int64_t)(value.reportConfigId), 0, 47);
    if (value.has_carrier) {
        enc.WriteConstrainedInteger((std::int64_t)(value.carrier), 0, 31);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.resourcesForChannelMeasurement), 0, 111);
    if (value.has_csi_IM_ResourcesForInterference) {
        enc.WriteConstrainedInteger((std::int64_t)(value.csi_IM_ResourcesForInterference), 0, 111);
    }
    if (value.has_nzp_CSI_RS_ResourcesForInterference) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nzp_CSI_RS_ResourcesForInterference), 0, 111);
    }
    Encode_CSI_ReportConfigType(enc, value.reportConfigType);
    Encode_CSI_ReportConfig_ReportQuantity(enc, value.reportQuantity);
    if (value.has_reportFreqConfiguration) {
        Encode_CSI_ReportConfig_ReportFreqConfiguration(enc, value.reportFreqConfiguration);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.timeRestrictionForChannelMeasurements), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeRestrictionForInterferenceMeasurements), 0, 1);
    if (value.has_codebookConfig) {
        Encode_CodebookConfig(enc, value.codebookConfig);
    }
    if (value.has_dummy) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy), 0, 1);
    }
    Encode_CSI_ReportConfig_GroupBasedBeamReporting(enc, value.groupBasedBeamReporting);
    if (value.has_cqi_Table) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cqi_Table), 0, 3);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.subbandSize), 0, 1);
    if (value.has_non_PMI_PortIndication) {
enc.WriteConstrainedLength(value.non_PMI_PortIndication_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.non_PMI_PortIndication_count; ++i) {
    Encode_PortIndexFor8Ranks(enc, value.non_PMI_PortIndication_items[i]);
}
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(6u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        enc.WriteBit(value.has_extGroup4);
        enc.WriteBit(value.has_extGroup5);
        enc.WriteBit(value.has_extGroup6);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_CSI_ReportConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_CSI_ReportConfig_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_CSI_ReportConfig_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_CSI_ReportConfig_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup5) {
    Encoder sub;
    Encode_CSI_ReportConfig_ExtGroup5(sub, value.extGroup5);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup6) {
    Encoder sub;
    Encode_CSI_ReportConfig_ExtGroup6(sub, value.extGroup6);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ReportConfig(Decoder& dec, CSI_ReportConfig& value)
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
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 47, tmp_value)) { goto fail; }
        value.reportConfigId = (CSI_ReportConfigId)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.carrier = (ServCellIndex)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 111, tmp_value)) { goto fail; }
        value.resourcesForChannelMeasurement = (CSI_ResourceConfigId)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 111, tmp_value)) { goto fail; }
        value.csi_IM_ResourcesForInterference = (CSI_ResourceConfigId)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 111, tmp_value)) { goto fail; }
        value.nzp_CSI_RS_ResourcesForInterference = (CSI_ResourceConfigId)tmp_value;
    }
    {
        if (Decode_CSI_ReportConfigType(dec, value.reportConfigType) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_CSI_ReportConfig_ReportQuantity(dec, value.reportQuantity) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_CSI_ReportConfig_ReportFreqConfiguration(dec, value.reportFreqConfiguration) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.timeRestrictionForChannelMeasurements = (CSI_ReportConfig_TimeRestrictionForChannelMeasurements)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.timeRestrictionForInterferenceMeasurements = (CSI_ReportConfig_TimeRestrictionForInterferenceMeasurements)tmp_value;
    }
    if (present_4) {
        if (Decode_CodebookConfig(dec, value.codebookConfig) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.dummy = (CSI_ReportConfig_Dummy)tmp_value;
    }
    {
        if (Decode_CSI_ReportConfig_GroupBasedBeamReporting(dec, value.groupBasedBeamReporting) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.cqi_Table = (CSI_ReportConfig_Cqi_Table)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.subbandSize = (CSI_ReportConfig_SubbandSize)tmp_value;
    }
    if (present_7) {
if (!dec.ReadConstrainedLength(0u, 0u, value.non_PMI_PortIndication_count)) { goto fail; }
if (value.non_PMI_PortIndication_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.non_PMI_PortIndication_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.non_PMI_PortIndication_count > 0u) {
    value.non_PMI_PortIndication_items = (PortIndexFor8Ranks*)std::malloc((std::size_t)value.non_PMI_PortIndication_count * sizeof(PortIndexFor8Ranks));
    if (value.non_PMI_PortIndication_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.non_PMI_PortIndication_items, 0, (std::size_t)value.non_PMI_PortIndication_count * sizeof(PortIndexFor8Ranks));
}
for (std::uint32_t i = 0; i < value.non_PMI_PortIndication_count; ++i) {
    if (Decode_PortIndexFor8Ranks(dec, value.non_PMI_PortIndication_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (extension) {
        std::uint32_t addition_count = 0;
        if (!dec.ReadNormallySmallLength(addition_count)) { goto fail; }
        if (addition_count > 6u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        bool addition_present[6] = {false};
        for (std::uint32_t i = 0; i < addition_count; ++i) {
            bool bit = false;
            if (!dec.ReadBit(bit)) { goto fail; }
            addition_present[i] = bit;
        }
        if (addition_present[0]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_CSI_ReportConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_CSI_ReportConfig_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_CSI_ReportConfig_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_CSI_ReportConfig_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    if (Decode_CSI_ReportConfig_ExtGroup5(sub, value.extGroup5) != ErrorCode_Ok) {
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
    if (Decode_CSI_ReportConfig_ExtGroup6(sub, value.extGroup6) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup6 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportConfig(CSI_ReportConfig& value)
{
    if (value.has_carrier) {
    }
    if (value.has_csi_IM_ResourcesForInterference) {
    }
    if (value.has_nzp_CSI_RS_ResourcesForInterference) {
    }
    Free_CSI_ReportConfigType(value.reportConfigType);
    Free_CSI_ReportConfig_ReportQuantity(value.reportQuantity);
    if (value.has_reportFreqConfiguration) {
        Free_CSI_ReportConfig_ReportFreqConfiguration(value.reportFreqConfiguration);
    }
    if (value.has_codebookConfig) {
        Free_CodebookConfig(value.codebookConfig);
    }
    if (value.has_dummy) {
    }
    Free_CSI_ReportConfig_GroupBasedBeamReporting(value.groupBasedBeamReporting);
    if (value.has_cqi_Table) {
    }
    if (value.has_non_PMI_PortIndication) {
        if (value.non_PMI_PortIndication_items != nullptr) {
            for (std::uint32_t i = 0; i < value.non_PMI_PortIndication_count; ++i) {
                Free_PortIndexFor8Ranks(value.non_PMI_PortIndication_items[i]);
            }
            std::free(value.non_PMI_PortIndication_items);
            value.non_PMI_PortIndication_items = nullptr;
        }
        value.non_PMI_PortIndication_count = 0;
    }
    if (value.has_extGroup1) {
        Free_CSI_ReportConfig_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_CSI_ReportConfig_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_CSI_ReportConfig_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_CSI_ReportConfig_ExtGroup4(value.extGroup4);
    }
    if (value.has_extGroup5) {
        Free_CSI_ReportConfig_ExtGroup5(value.extGroup5);
    }
    if (value.has_extGroup6) {
        Free_CSI_ReportConfig_ExtGroup6(value.extGroup6);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PortIndexFor8Ranks_PortIndex8(Encoder& enc, const PortIndexFor8Ranks_PortIndex8& value)
{
    (void)value;
    enc.WriteBit(value.has_rank1_8);
    enc.WriteBit(value.has_rank2_8);
    enc.WriteBit(value.has_rank3_8);
    enc.WriteBit(value.has_rank4_8);
    enc.WriteBit(value.has_rank5_8);
    enc.WriteBit(value.has_rank6_8);
    enc.WriteBit(value.has_rank7_8);
    enc.WriteBit(value.has_rank8_8);
    if (value.has_rank1_8) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rank1_8), 0, 7);
    }
    if (value.has_rank2_8) {
enc.WriteConstrainedLength(value.rank2_8_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.rank2_8_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.rank2_8_items[i]), 0, 7);
}
    }
    if (value.has_rank3_8) {
enc.WriteConstrainedLength(value.rank3_8_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.rank3_8_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.rank3_8_items[i]), 0, 7);
}
    }
    if (value.has_rank4_8) {
enc.WriteConstrainedLength(value.rank4_8_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.rank4_8_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.rank4_8_items[i]), 0, 7);
}
    }
    if (value.has_rank5_8) {
enc.WriteConstrainedLength(value.rank5_8_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.rank5_8_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.rank5_8_items[i]), 0, 7);
}
    }
    if (value.has_rank6_8) {
enc.WriteConstrainedLength(value.rank6_8_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.rank6_8_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.rank6_8_items[i]), 0, 7);
}
    }
    if (value.has_rank7_8) {
enc.WriteConstrainedLength(value.rank7_8_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.rank7_8_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.rank7_8_items[i]), 0, 7);
}
    }
    if (value.has_rank8_8) {
enc.WriteConstrainedLength(value.rank8_8_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.rank8_8_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.rank8_8_items[i]), 0, 7);
}
    }
    return enc.Error();
}

ErrorCode Decode_PortIndexFor8Ranks_PortIndex8(Decoder& dec, PortIndexFor8Ranks_PortIndex8& value)
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
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.rank1_8 = (PortIndex8)tmp_value;
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.rank2_8_count)) { goto fail; }
if (value.rank2_8_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.rank2_8_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.rank2_8_count > 0u) {
    value.rank2_8_items = (PortIndex8*)std::malloc((std::size_t)value.rank2_8_count * sizeof(PortIndex8));
    if (value.rank2_8_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.rank2_8_items, 0, (std::size_t)value.rank2_8_count * sizeof(PortIndex8));
}
for (std::uint32_t i = 0; i < value.rank2_8_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.rank2_8_items[i] = (PortIndex8)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.rank3_8_count)) { goto fail; }
if (value.rank3_8_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.rank3_8_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.rank3_8_count > 0u) {
    value.rank3_8_items = (PortIndex8*)std::malloc((std::size_t)value.rank3_8_count * sizeof(PortIndex8));
    if (value.rank3_8_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.rank3_8_items, 0, (std::size_t)value.rank3_8_count * sizeof(PortIndex8));
}
for (std::uint32_t i = 0; i < value.rank3_8_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.rank3_8_items[i] = (PortIndex8)tmp_value;
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.rank4_8_count)) { goto fail; }
if (value.rank4_8_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.rank4_8_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.rank4_8_count > 0u) {
    value.rank4_8_items = (PortIndex8*)std::malloc((std::size_t)value.rank4_8_count * sizeof(PortIndex8));
    if (value.rank4_8_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.rank4_8_items, 0, (std::size_t)value.rank4_8_count * sizeof(PortIndex8));
}
for (std::uint32_t i = 0; i < value.rank4_8_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.rank4_8_items[i] = (PortIndex8)tmp_value;
}
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.rank5_8_count)) { goto fail; }
if (value.rank5_8_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.rank5_8_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.rank5_8_count > 0u) {
    value.rank5_8_items = (PortIndex8*)std::malloc((std::size_t)value.rank5_8_count * sizeof(PortIndex8));
    if (value.rank5_8_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.rank5_8_items, 0, (std::size_t)value.rank5_8_count * sizeof(PortIndex8));
}
for (std::uint32_t i = 0; i < value.rank5_8_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.rank5_8_items[i] = (PortIndex8)tmp_value;
}
    }
    if (present_5) {
if (!dec.ReadConstrainedLength(0u, 0u, value.rank6_8_count)) { goto fail; }
if (value.rank6_8_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.rank6_8_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.rank6_8_count > 0u) {
    value.rank6_8_items = (PortIndex8*)std::malloc((std::size_t)value.rank6_8_count * sizeof(PortIndex8));
    if (value.rank6_8_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.rank6_8_items, 0, (std::size_t)value.rank6_8_count * sizeof(PortIndex8));
}
for (std::uint32_t i = 0; i < value.rank6_8_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.rank6_8_items[i] = (PortIndex8)tmp_value;
}
    }
    if (present_6) {
if (!dec.ReadConstrainedLength(0u, 0u, value.rank7_8_count)) { goto fail; }
if (value.rank7_8_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.rank7_8_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.rank7_8_count > 0u) {
    value.rank7_8_items = (PortIndex8*)std::malloc((std::size_t)value.rank7_8_count * sizeof(PortIndex8));
    if (value.rank7_8_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.rank7_8_items, 0, (std::size_t)value.rank7_8_count * sizeof(PortIndex8));
}
for (std::uint32_t i = 0; i < value.rank7_8_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.rank7_8_items[i] = (PortIndex8)tmp_value;
}
    }
    if (present_7) {
if (!dec.ReadConstrainedLength(0u, 0u, value.rank8_8_count)) { goto fail; }
if (value.rank8_8_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.rank8_8_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.rank8_8_count > 0u) {
    value.rank8_8_items = (PortIndex8*)std::malloc((std::size_t)value.rank8_8_count * sizeof(PortIndex8));
    if (value.rank8_8_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.rank8_8_items, 0, (std::size_t)value.rank8_8_count * sizeof(PortIndex8));
}
for (std::uint32_t i = 0; i < value.rank8_8_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.rank8_8_items[i] = (PortIndex8)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_PortIndexFor8Ranks_PortIndex8(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PortIndexFor8Ranks_PortIndex8(PortIndexFor8Ranks_PortIndex8& value)
{
    if (value.has_rank1_8) {
    }
    if (value.has_rank2_8) {
        if (value.rank2_8_items != nullptr) {
            for (std::uint32_t i = 0; i < value.rank2_8_count; ++i) {
            }
            std::free(value.rank2_8_items);
            value.rank2_8_items = nullptr;
        }
        value.rank2_8_count = 0;
    }
    if (value.has_rank3_8) {
        if (value.rank3_8_items != nullptr) {
            for (std::uint32_t i = 0; i < value.rank3_8_count; ++i) {
            }
            std::free(value.rank3_8_items);
            value.rank3_8_items = nullptr;
        }
        value.rank3_8_count = 0;
    }
    if (value.has_rank4_8) {
        if (value.rank4_8_items != nullptr) {
            for (std::uint32_t i = 0; i < value.rank4_8_count; ++i) {
            }
            std::free(value.rank4_8_items);
            value.rank4_8_items = nullptr;
        }
        value.rank4_8_count = 0;
    }
    if (value.has_rank5_8) {
        if (value.rank5_8_items != nullptr) {
            for (std::uint32_t i = 0; i < value.rank5_8_count; ++i) {
            }
            std::free(value.rank5_8_items);
            value.rank5_8_items = nullptr;
        }
        value.rank5_8_count = 0;
    }
    if (value.has_rank6_8) {
        if (value.rank6_8_items != nullptr) {
            for (std::uint32_t i = 0; i < value.rank6_8_count; ++i) {
            }
            std::free(value.rank6_8_items);
            value.rank6_8_items = nullptr;
        }
        value.rank6_8_count = 0;
    }
    if (value.has_rank7_8) {
        if (value.rank7_8_items != nullptr) {
            for (std::uint32_t i = 0; i < value.rank7_8_count; ++i) {
            }
            std::free(value.rank7_8_items);
            value.rank7_8_items = nullptr;
        }
        value.rank7_8_count = 0;
    }
    if (value.has_rank8_8) {
        if (value.rank8_8_items != nullptr) {
            for (std::uint32_t i = 0; i < value.rank8_8_count; ++i) {
            }
            std::free(value.rank8_8_items);
            value.rank8_8_items = nullptr;
        }
        value.rank8_8_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PortIndexFor8Ranks_PortIndex4(Encoder& enc, const PortIndexFor8Ranks_PortIndex4& value)
{
    (void)value;
    enc.WriteBit(value.has_rank1_4);
    enc.WriteBit(value.has_rank2_4);
    enc.WriteBit(value.has_rank3_4);
    enc.WriteBit(value.has_rank4_4);
    if (value.has_rank1_4) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rank1_4), 0, 3);
    }
    if (value.has_rank2_4) {
enc.WriteConstrainedLength(value.rank2_4_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.rank2_4_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.rank2_4_items[i]), 0, 3);
}
    }
    if (value.has_rank3_4) {
enc.WriteConstrainedLength(value.rank3_4_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.rank3_4_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.rank3_4_items[i]), 0, 3);
}
    }
    if (value.has_rank4_4) {
enc.WriteConstrainedLength(value.rank4_4_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.rank4_4_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.rank4_4_items[i]), 0, 3);
}
    }
    return enc.Error();
}

ErrorCode Decode_PortIndexFor8Ranks_PortIndex4(Decoder& dec, PortIndexFor8Ranks_PortIndex4& value)
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
        value.rank1_4 = (PortIndex4)tmp_value;
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.rank2_4_count)) { goto fail; }
if (value.rank2_4_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.rank2_4_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.rank2_4_count > 0u) {
    value.rank2_4_items = (PortIndex4*)std::malloc((std::size_t)value.rank2_4_count * sizeof(PortIndex4));
    if (value.rank2_4_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.rank2_4_items, 0, (std::size_t)value.rank2_4_count * sizeof(PortIndex4));
}
for (std::uint32_t i = 0; i < value.rank2_4_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
    value.rank2_4_items[i] = (PortIndex4)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.rank3_4_count)) { goto fail; }
if (value.rank3_4_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.rank3_4_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.rank3_4_count > 0u) {
    value.rank3_4_items = (PortIndex4*)std::malloc((std::size_t)value.rank3_4_count * sizeof(PortIndex4));
    if (value.rank3_4_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.rank3_4_items, 0, (std::size_t)value.rank3_4_count * sizeof(PortIndex4));
}
for (std::uint32_t i = 0; i < value.rank3_4_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
    value.rank3_4_items[i] = (PortIndex4)tmp_value;
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.rank4_4_count)) { goto fail; }
if (value.rank4_4_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.rank4_4_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.rank4_4_count > 0u) {
    value.rank4_4_items = (PortIndex4*)std::malloc((std::size_t)value.rank4_4_count * sizeof(PortIndex4));
    if (value.rank4_4_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.rank4_4_items, 0, (std::size_t)value.rank4_4_count * sizeof(PortIndex4));
}
for (std::uint32_t i = 0; i < value.rank4_4_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
    value.rank4_4_items[i] = (PortIndex4)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_PortIndexFor8Ranks_PortIndex4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PortIndexFor8Ranks_PortIndex4(PortIndexFor8Ranks_PortIndex4& value)
{
    if (value.has_rank1_4) {
    }
    if (value.has_rank2_4) {
        if (value.rank2_4_items != nullptr) {
            for (std::uint32_t i = 0; i < value.rank2_4_count; ++i) {
            }
            std::free(value.rank2_4_items);
            value.rank2_4_items = nullptr;
        }
        value.rank2_4_count = 0;
    }
    if (value.has_rank3_4) {
        if (value.rank3_4_items != nullptr) {
            for (std::uint32_t i = 0; i < value.rank3_4_count; ++i) {
            }
            std::free(value.rank3_4_items);
            value.rank3_4_items = nullptr;
        }
        value.rank3_4_count = 0;
    }
    if (value.has_rank4_4) {
        if (value.rank4_4_items != nullptr) {
            for (std::uint32_t i = 0; i < value.rank4_4_count; ++i) {
            }
            std::free(value.rank4_4_items);
            value.rank4_4_items = nullptr;
        }
        value.rank4_4_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PortIndexFor8Ranks_PortIndex2(Encoder& enc, const PortIndexFor8Ranks_PortIndex2& value)
{
    (void)value;
    enc.WriteBit(value.has_rank1_2);
    enc.WriteBit(value.has_rank2_2);
    if (value.has_rank1_2) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rank1_2), 0, 1);
    }
    if (value.has_rank2_2) {
enc.WriteConstrainedLength(value.rank2_2_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.rank2_2_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.rank2_2_items[i]), 0, 1);
}
    }
    return enc.Error();
}

ErrorCode Decode_PortIndexFor8Ranks_PortIndex2(Decoder& dec, PortIndexFor8Ranks_PortIndex2& value)
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
        value.rank1_2 = (PortIndex2)tmp_value;
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.rank2_2_count)) { goto fail; }
if (value.rank2_2_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.rank2_2_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.rank2_2_count > 0u) {
    value.rank2_2_items = (PortIndex2*)std::malloc((std::size_t)value.rank2_2_count * sizeof(PortIndex2));
    if (value.rank2_2_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.rank2_2_items, 0, (std::size_t)value.rank2_2_count * sizeof(PortIndex2));
}
for (std::uint32_t i = 0; i < value.rank2_2_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
    value.rank2_2_items[i] = (PortIndex2)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_PortIndexFor8Ranks_PortIndex2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PortIndexFor8Ranks_PortIndex2(PortIndexFor8Ranks_PortIndex2& value)
{
    if (value.has_rank1_2) {
    }
    if (value.has_rank2_2) {
        if (value.rank2_2_items != nullptr) {
            for (std::uint32_t i = 0; i < value.rank2_2_count; ++i) {
            }
            std::free(value.rank2_2_items);
            value.rank2_2_items = nullptr;
        }
        value.rank2_2_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PortIndexFor8Ranks(Encoder& enc, const PortIndexFor8Ranks& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 3);
    switch (value.tag) {
    case PortIndexFor8Ranks_Tag_portIndex8:
        Encode_PortIndexFor8Ranks_PortIndex8(enc, value.u.portIndex8);
        break;
    case PortIndexFor8Ranks_Tag_portIndex4:
        Encode_PortIndexFor8Ranks_PortIndex4(enc, value.u.portIndex4);
        break;
    case PortIndexFor8Ranks_Tag_portIndex2:
        Encode_PortIndexFor8Ranks_PortIndex2(enc, value.u.portIndex2);
        break;
    case PortIndexFor8Ranks_Tag_portIndex1:
        (void)0;
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PortIndexFor8Ranks(Decoder& dec, PortIndexFor8Ranks& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 3, root_index)) {
        goto fail;
    }
    value.tag = (PortIndexFor8Ranks_Tag)root_index;
    switch (value.tag) {
    case PortIndexFor8Ranks_Tag_portIndex8: {
        if (Decode_PortIndexFor8Ranks_PortIndex8(dec, value.u.portIndex8) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PortIndexFor8Ranks_Tag_portIndex4: {
        if (Decode_PortIndexFor8Ranks_PortIndex4(dec, value.u.portIndex4) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PortIndexFor8Ranks_Tag_portIndex2: {
        if (Decode_PortIndexFor8Ranks_PortIndex2(dec, value.u.portIndex2) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PortIndexFor8Ranks_Tag_portIndex1: {
        (void)0;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PortIndexFor8Ranks(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PortIndexFor8Ranks(PortIndexFor8Ranks& value)
{
    switch (value.tag) {
    case PortIndexFor8Ranks_Tag_portIndex8:
        Free_PortIndexFor8Ranks_PortIndex8(value.u.portIndex8);
        break;
    case PortIndexFor8Ranks_Tag_portIndex4:
        Free_PortIndexFor8Ranks_PortIndex4(value.u.portIndex4);
        break;
    case PortIndexFor8Ranks_Tag_portIndex2:
        Free_PortIndexFor8Ranks_PortIndex2(value.u.portIndex2);
        break;
    case PortIndexFor8Ranks_Tag_portIndex1:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18(Encoder& enc, const CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 6);
    switch (value.tag) {
    case CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p2:
        enc.WriteFixedBitString(value.u.p2.bytes, value.u.p2.bitLength, 2, 2);
        break;
    case CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p4:
        enc.WriteFixedBitString(value.u.p4.bytes, value.u.p4.bitLength, 4, 4);
        break;
    case CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p8:
        enc.WriteFixedBitString(value.u.p8.bytes, value.u.p8.bitLength, 8, 8);
        break;
    case CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p12:
        enc.WriteFixedBitString(value.u.p12.bytes, value.u.p12.bitLength, 12, 12);
        break;
    case CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p16:
        enc.WriteFixedBitString(value.u.p16.bytes, value.u.p16.bitLength, 16, 16);
        break;
    case CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p24:
        enc.WriteFixedBitString(value.u.p24.bytes, value.u.p24.bitLength, 24, 24);
        break;
    case CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p32:
        enc.WriteFixedBitString(value.u.p32.bytes, value.u.p32.bitLength, 32, 32);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18(Decoder& dec, CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 6, root_index)) {
        goto fail;
    }
    value.tag = (CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag)root_index;
    switch (value.tag) {
    case CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p2: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 2)) { goto fail; }
        string_length = 2;
        value.u.p2.bytes = string_bytes;
        value.u.p2.bitLength = string_length;
        break;
    }
    case CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p4: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 4)) { goto fail; }
        string_length = 4;
        value.u.p4.bytes = string_bytes;
        value.u.p4.bitLength = string_length;
        break;
    }
    case CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p8: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.u.p8.bytes = string_bytes;
        value.u.p8.bitLength = string_length;
        break;
    }
    case CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p12: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 12)) { goto fail; }
        string_length = 12;
        value.u.p12.bytes = string_bytes;
        value.u.p12.bitLength = string_length;
        break;
    }
    case CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p16: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.u.p16.bytes = string_bytes;
        value.u.p16.bitLength = string_length;
        break;
    }
    case CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p24: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.u.p24.bytes = string_bytes;
        value.u.p24.bitLength = string_length;
        break;
    }
    case CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p32: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 32)) { goto fail; }
        string_length = 32;
        value.u.p32.bytes = string_bytes;
        value.u.p32.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18(CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18& value)
{
    switch (value.tag) {
    case CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p2:
        std::free(value.u.p2.bytes);
        break;
    case CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p4:
        std::free(value.u.p4.bytes);
        break;
    case CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p8:
        std::free(value.u.p8.bytes);
        break;
    case CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p12:
        std::free(value.u.p12.bytes);
        break;
    case CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p16:
        std::free(value.u.p16.bytes);
        break;
    case CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p24:
        std::free(value.u.p24.bytes);
        break;
    case CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p32:
        std::free(value.u.p32.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
