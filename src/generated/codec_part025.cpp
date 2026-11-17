/* ============================================================================
 * src/generated/codec_part025.cpp — 生成的编解码函数
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
// BandParameters_v1710：ASN.1 BandParameters-v1710；源文件第 14569 行；SEQUENCE。
// Encode_BandParameters_v1710 只读不分配；Decode_BandParameters_v1710 可能 malloc（失败时内部已释放并清零）；Free_BandParameters_v1710 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParameters_v1710(Encoder& enc, const BandParameters_v1710& value)
{
    (void)value;
    enc.WriteBit(value.has_srs_AntennaSwitchingBeyond4RX_r17);
    if (value.has_srs_AntennaSwitchingBeyond4RX_r17) {
        Encode_BandParameters_v1710_Srs_AntennaSwitchingBeyond4RX_r17(enc, value.srs_AntennaSwitchingBeyond4RX_r17);
    }
    return enc.Error();
}

ErrorCode Decode_BandParameters_v1710(Decoder& dec, BandParameters_v1710& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BandParameters_v1710_Srs_AntennaSwitchingBeyond4RX_r17(dec, value.srs_AntennaSwitchingBeyond4RX_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParameters_v1710(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParameters_v1710(BandParameters_v1710& value)
{
    if (value.has_srs_AntennaSwitchingBeyond4RX_r17) {
        Free_BandParameters_v1710_Srs_AntennaSwitchingBeyond4RX_r17(value.srs_AntennaSwitchingBeyond4RX_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParameters_v1730：ASN.1 BandParameters-v1730；源文件第 14581 行；SEQUENCE。
// Encode_BandParameters_v1730 只读不分配；Decode_BandParameters_v1730 可能 malloc（失败时内部已释放并清零）；Free_BandParameters_v1730 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParameters_v1730(Encoder& enc, const BandParameters_v1730& value)
{
    (void)value;
enc.WriteConstrainedLength(value.srs_SwitchingAffectedBandsListNR_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.srs_SwitchingAffectedBandsListNR_r17_count; ++i) {
    enc.WriteConstrainedBitString(value.srs_SwitchingAffectedBandsListNR_r17_items[i].bytes, value.srs_SwitchingAffectedBandsListNR_r17_items[i].bitLength, 1, 32);
}
    return enc.Error();
}

ErrorCode Decode_BandParameters_v1730(Decoder& dec, BandParameters_v1730& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.srs_SwitchingAffectedBandsListNR_r17_count)) { goto fail; }
if (value.srs_SwitchingAffectedBandsListNR_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.srs_SwitchingAffectedBandsListNR_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.srs_SwitchingAffectedBandsListNR_r17_count > 0u) {
    value.srs_SwitchingAffectedBandsListNR_r17_items = (SRS_SwitchingAffectedBandsNR_r17*)std::malloc((std::size_t)value.srs_SwitchingAffectedBandsListNR_r17_count * sizeof(SRS_SwitchingAffectedBandsNR_r17));
    if (value.srs_SwitchingAffectedBandsListNR_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.srs_SwitchingAffectedBandsListNR_r17_items, 0, (std::size_t)value.srs_SwitchingAffectedBandsListNR_r17_count * sizeof(SRS_SwitchingAffectedBandsNR_r17));
}
for (std::uint32_t i = 0; i < value.srs_SwitchingAffectedBandsListNR_r17_count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadConstrainedBitString(string_bytes, string_length, 1, 32)) { goto fail; }
    value.srs_SwitchingAffectedBandsListNR_r17_items[i].bytes = string_bytes;
    value.srs_SwitchingAffectedBandsListNR_r17_items[i].bitLength = string_length;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParameters_v1730(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParameters_v1730(BandParameters_v1730& value)
{
    if (value.srs_SwitchingAffectedBandsListNR_r17_items != nullptr) {
        for (std::uint32_t i = 0; i < value.srs_SwitchingAffectedBandsListNR_r17_count; ++i) {
            std::free(value.srs_SwitchingAffectedBandsListNR_r17_items[i].bytes);
            value.srs_SwitchingAffectedBandsListNR_r17_items[i].bytes = nullptr;
            value.srs_SwitchingAffectedBandsListNR_r17_items[i].bitLength = 0;
        }
        std::free(value.srs_SwitchingAffectedBandsListNR_r17_items);
        value.srs_SwitchingAffectedBandsListNR_r17_items = nullptr;
    }
    value.srs_SwitchingAffectedBandsListNR_r17_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParameters_v1770：ASN.1 BandParameters-v1770；源文件第 14586 行；SEQUENCE。
// Encode_BandParameters_v1770 只读不分配；Decode_BandParameters_v1770 可能 malloc（失败时内部已释放并清零）；Free_BandParameters_v1770 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParameters_v1770(Encoder& enc, const BandParameters_v1770& value)
{
    (void)value;
    enc.WriteBit(value.has_ca_BandwidthClassDL_NR_r17);
    enc.WriteBit(value.has_ca_BandwidthClassUL_NR_r17);
    if (value.has_ca_BandwidthClassDL_NR_r17) {
        {
            const std::int64_t enum_value = (std::int64_t)(value.ca_BandwidthClassDL_NR_r17);
            if (enum_value < 0) {
                return enc.Fail(ErrorCode_InvalidEnumValue);
            }
            if (enum_value < 4) {
                enc.WriteBit(false);
                enc.WriteConstrainedInteger(enum_value, 0, 3);
            } else {
                enc.WriteBit(true);
                enc.WriteNormallySmallNonNegative((std::uint32_t)(enum_value - 4));
            }
        }
    }
    if (value.has_ca_BandwidthClassUL_NR_r17) {
        {
            const std::int64_t enum_value = (std::int64_t)(value.ca_BandwidthClassUL_NR_r17);
            if (enum_value < 0) {
                return enc.Fail(ErrorCode_InvalidEnumValue);
            }
            if (enum_value < 4) {
                enc.WriteBit(false);
                enc.WriteConstrainedInteger(enum_value, 0, 3);
            } else {
                enc.WriteBit(true);
                enc.WriteNormallySmallNonNegative((std::uint32_t)(enum_value - 4));
            }
        }
    }
    return enc.Error();
}

ErrorCode Decode_BandParameters_v1770(Decoder& dec, BandParameters_v1770& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        bool enum_extension = false;
        if (!dec.ReadBit(enum_extension)) { goto fail; }
        std::int64_t enum_value = 0;
        if (!enum_extension) {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 3, root_index)) { goto fail; }
    enum_value = root_index;
        } else {
    std::uint32_t extension_index = 0;
    if (!dec.ReadNormallySmallNonNegative(extension_index)) { goto fail; }
    enum_value = (std::int64_t)4 + (std::int64_t)extension_index;
        }
        value.ca_BandwidthClassDL_NR_r17 = (CA_BandwidthClassNR_r17)enum_value;
    }
    if (present_1) {
        bool enum_extension = false;
        if (!dec.ReadBit(enum_extension)) { goto fail; }
        std::int64_t enum_value = 0;
        if (!enum_extension) {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 3, root_index)) { goto fail; }
    enum_value = root_index;
        } else {
    std::uint32_t extension_index = 0;
    if (!dec.ReadNormallySmallNonNegative(extension_index)) { goto fail; }
    enum_value = (std::int64_t)4 + (std::int64_t)extension_index;
        }
        value.ca_BandwidthClassUL_NR_r17 = (CA_BandwidthClassNR_r17)enum_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParameters_v1770(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParameters_v1770(BandParameters_v1770& value)
{
    if (value.has_ca_BandwidthClassDL_NR_r17) {
    }
    if (value.has_ca_BandwidthClassUL_NR_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParameters_v1780_SupportedAggBW_FR2_r17：ASN.1 supportedAggBW-FR2-r17；源文件第 14594 行；SEQUENCE。
// Encode_BandParameters_v1780_SupportedAggBW_FR2_r17 只读不分配；Decode_BandParameters_v1780_SupportedAggBW_FR2_r17 可能 malloc（失败时内部已释放并清零）；Free_BandParameters_v1780_SupportedAggBW_FR2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParameters_v1780_SupportedAggBW_FR2_r17(Encoder& enc, const BandParameters_v1780_SupportedAggBW_FR2_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedAggBW_DL_r17);
    enc.WriteBit(value.has_supportedAggBW_UL_r17);
    if (value.has_supportedAggBW_DL_r17) {
        Encode_SupportedAggBandwidth_r17(enc, value.supportedAggBW_DL_r17);
    }
    if (value.has_supportedAggBW_UL_r17) {
        Encode_SupportedAggBandwidth_r17(enc, value.supportedAggBW_UL_r17);
    }
    return enc.Error();
}

ErrorCode Decode_BandParameters_v1780_SupportedAggBW_FR2_r17(Decoder& dec, BandParameters_v1780_SupportedAggBW_FR2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SupportedAggBandwidth_r17(dec, value.supportedAggBW_DL_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SupportedAggBandwidth_r17(dec, value.supportedAggBW_UL_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParameters_v1780_SupportedAggBW_FR2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParameters_v1780_SupportedAggBW_FR2_r17(BandParameters_v1780_SupportedAggBW_FR2_r17& value)
{
    if (value.has_supportedAggBW_DL_r17) {
        Free_SupportedAggBandwidth_r17(value.supportedAggBW_DL_r17);
    }
    if (value.has_supportedAggBW_UL_r17) {
        Free_SupportedAggBandwidth_r17(value.supportedAggBW_UL_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParameters_v1780：ASN.1 BandParameters-v1780；源文件第 14591 行；SEQUENCE。
// Encode_BandParameters_v1780 只读不分配；Decode_BandParameters_v1780 可能 malloc（失败时内部已释放并清零）；Free_BandParameters_v1780 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParameters_v1780(Encoder& enc, const BandParameters_v1780& value)
{
    (void)value;
    enc.WriteBit(value.has_ca_BandwidthClassDL_NR_r17);
    enc.WriteBit(value.has_ca_BandwidthClassUL_NR_r17);
    enc.WriteBit(value.has_supportedAggBW_FR2_r17);
    if (value.has_ca_BandwidthClassDL_NR_r17) {
        {
            const std::int64_t enum_value = (std::int64_t)(value.ca_BandwidthClassDL_NR_r17);
            if (enum_value < 0) {
                return enc.Fail(ErrorCode_InvalidEnumValue);
            }
            if (enum_value < 4) {
                enc.WriteBit(false);
                enc.WriteConstrainedInteger(enum_value, 0, 3);
            } else {
                enc.WriteBit(true);
                enc.WriteNormallySmallNonNegative((std::uint32_t)(enum_value - 4));
            }
        }
    }
    if (value.has_ca_BandwidthClassUL_NR_r17) {
        {
            const std::int64_t enum_value = (std::int64_t)(value.ca_BandwidthClassUL_NR_r17);
            if (enum_value < 0) {
                return enc.Fail(ErrorCode_InvalidEnumValue);
            }
            if (enum_value < 4) {
                enc.WriteBit(false);
                enc.WriteConstrainedInteger(enum_value, 0, 3);
            } else {
                enc.WriteBit(true);
                enc.WriteNormallySmallNonNegative((std::uint32_t)(enum_value - 4));
            }
        }
    }
    if (value.has_supportedAggBW_FR2_r17) {
        Encode_BandParameters_v1780_SupportedAggBW_FR2_r17(enc, value.supportedAggBW_FR2_r17);
    }
    return enc.Error();
}

ErrorCode Decode_BandParameters_v1780(Decoder& dec, BandParameters_v1780& value)
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
        bool enum_extension = false;
        if (!dec.ReadBit(enum_extension)) { goto fail; }
        std::int64_t enum_value = 0;
        if (!enum_extension) {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 3, root_index)) { goto fail; }
    enum_value = root_index;
        } else {
    std::uint32_t extension_index = 0;
    if (!dec.ReadNormallySmallNonNegative(extension_index)) { goto fail; }
    enum_value = (std::int64_t)4 + (std::int64_t)extension_index;
        }
        value.ca_BandwidthClassDL_NR_r17 = (CA_BandwidthClassNR_r17)enum_value;
    }
    if (present_1) {
        bool enum_extension = false;
        if (!dec.ReadBit(enum_extension)) { goto fail; }
        std::int64_t enum_value = 0;
        if (!enum_extension) {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 3, root_index)) { goto fail; }
    enum_value = root_index;
        } else {
    std::uint32_t extension_index = 0;
    if (!dec.ReadNormallySmallNonNegative(extension_index)) { goto fail; }
    enum_value = (std::int64_t)4 + (std::int64_t)extension_index;
        }
        value.ca_BandwidthClassUL_NR_r17 = (CA_BandwidthClassNR_r17)enum_value;
    }
    if (present_2) {
        if (Decode_BandParameters_v1780_SupportedAggBW_FR2_r17(dec, value.supportedAggBW_FR2_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParameters_v1780(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParameters_v1780(BandParameters_v1780& value)
{
    if (value.has_ca_BandwidthClassDL_NR_r17) {
    }
    if (value.has_ca_BandwidthClassUL_NR_r17) {
    }
    if (value.has_supportedAggBW_FR2_r17) {
        Free_BandParameters_v1780_SupportedAggBW_FR2_r17(value.supportedAggBW_FR2_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18：ASN.1 srs-AntennaSwitching8T8R-r18/downgradeConfig-r18；源文件第 14604 行；CHOICE。
// Encode_BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18 只读不分配；Decode_BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18(Encoder& enc, const BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18_Tag_empty_r18:
        (void)0;
        break;
    case BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18_Tag_downgrade_r18:
        enc.WriteFixedBitString(value.u.downgrade_r18.bytes, value.u.downgrade_r18.bitLength, 11, 11);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18(Decoder& dec, BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18_Tag)root_index;
    switch (value.tag) {
    case BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18_Tag_empty_r18: {
        (void)0;
        break;
    }
    case BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18_Tag_downgrade_r18: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 11)) { goto fail; }
        string_length = 11;
        value.u.downgrade_r18.bytes = string_bytes;
        value.u.downgrade_r18.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18(BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18& value)
{
    switch (value.tag) {
    case BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18_Tag_empty_r18:
        break;
    case BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18_Tag_downgrade_r18:
        std::free(value.u.downgrade_r18.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParameters_v1810_Srs_AntennaSwitching8T8R_r18：ASN.1 srs-AntennaSwitching8T8R-r18；源文件第 14602 行；SEQUENCE。
// Encode_BandParameters_v1810_Srs_AntennaSwitching8T8R_r18 只读不分配；Decode_BandParameters_v1810_Srs_AntennaSwitching8T8R_r18 可能 malloc（失败时内部已释放并清零）；Free_BandParameters_v1810_Srs_AntennaSwitching8T8R_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParameters_v1810_Srs_AntennaSwitching8T8R_r18(Encoder& enc, const BandParameters_v1810_Srs_AntennaSwitching8T8R_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_downgradeConfig_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.antennaSwitch8T8R_r18), 0, 1);
    if (value.has_downgradeConfig_r18) {
        Encode_BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18(enc, value.downgradeConfig_r18);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.entryNumberAffect_r18), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.entryNumberSwtich_r18), 1, 32);
    return enc.Error();
}

ErrorCode Decode_BandParameters_v1810_Srs_AntennaSwitching8T8R_r18(Decoder& dec, BandParameters_v1810_Srs_AntennaSwitching8T8R_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.antennaSwitch8T8R_r18 = (BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_AntennaSwitch8T8R_r18)tmp_value;
    }
    if (present_0) {
        if (Decode_BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18(dec, value.downgradeConfig_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.entryNumberAffect_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.entryNumberSwtich_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParameters_v1810_Srs_AntennaSwitching8T8R_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParameters_v1810_Srs_AntennaSwitching8T8R_r18(BandParameters_v1810_Srs_AntennaSwitching8T8R_r18& value)
{
    if (value.has_downgradeConfig_r18) {
        Free_BandParameters_v1810_Srs_AntennaSwitching8T8R_r18_DowngradeConfig_r18(value.downgradeConfig_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParameters_v1810：ASN.1 BandParameters-v1810；源文件第 14600 行；SEQUENCE。
// Encode_BandParameters_v1810 只读不分配；Decode_BandParameters_v1810 可能 malloc（失败时内部已释放并清零）；Free_BandParameters_v1810 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParameters_v1810(Encoder& enc, const BandParameters_v1810& value)
{
    (void)value;
    enc.WriteBit(value.has_srs_AntennaSwitching8T8R_r18);
    if (value.has_srs_AntennaSwitching8T8R_r18) {
        Encode_BandParameters_v1810_Srs_AntennaSwitching8T8R_r18(enc, value.srs_AntennaSwitching8T8R_r18);
    }
    return enc.Error();
}

ErrorCode Decode_BandParameters_v1810(Decoder& dec, BandParameters_v1810& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BandParameters_v1810_Srs_AntennaSwitching8T8R_r18(dec, value.srs_AntennaSwitching8T8R_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParameters_v1810(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParameters_v1810(BandParameters_v1810& value)
{
    if (value.has_srs_AntennaSwitching8T8R_r18) {
        Free_BandParameters_v1810_Srs_AntennaSwitching8T8R_r18(value.srs_AntennaSwitching8T8R_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombinationListSidelinkEUTRA_NR_r16：ASN.1 BandCombinationListSidelinkEUTRA-NR-r16；源文件第 14622 行；SEQUENCE OF。
// Encode_BandCombinationListSidelinkEUTRA_NR_r16 只读不分配；Decode_BandCombinationListSidelinkEUTRA_NR_r16 可能 malloc（失败时内部已释放并清零）；Free_BandCombinationListSidelinkEUTRA_NR_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombinationListSidelinkEUTRA_NR_r16(Encoder& enc, const BandCombinationListSidelinkEUTRA_NR_r16& value)
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
        Encode_BandCombinationParametersSidelinkEUTRA_NR_r16(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombinationParametersSidelinkEUTRA_NR_r16(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationListSidelinkEUTRA_NR_r16(Decoder& dec, BandCombinationListSidelinkEUTRA_NR_r16& value)
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
    BandCombinationParametersSidelinkEUTRA_NR_r16* grown = (BandCombinationParametersSidelinkEUTRA_NR_r16*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombinationParametersSidelinkEUTRA_NR_r16));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombinationParametersSidelinkEUTRA_NR_r16));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombinationParametersSidelinkEUTRA_NR_r16(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
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
    Free_BandCombinationListSidelinkEUTRA_NR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationListSidelinkEUTRA_NR_r16(BandCombinationListSidelinkEUTRA_NR_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombinationParametersSidelinkEUTRA_NR_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombinationListSidelinkEUTRA_NR_v1630：ASN.1 BandCombinationListSidelinkEUTRA-NR-v1630；源文件第 14624 行；SEQUENCE OF。
// Encode_BandCombinationListSidelinkEUTRA_NR_v1630 只读不分配；Decode_BandCombinationListSidelinkEUTRA_NR_v1630 可能 malloc（失败时内部已释放并清零）；Free_BandCombinationListSidelinkEUTRA_NR_v1630 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombinationListSidelinkEUTRA_NR_v1630(Encoder& enc, const BandCombinationListSidelinkEUTRA_NR_v1630& value)
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
        Encode_BandCombinationParametersSidelinkEUTRA_NR_v1630(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombinationParametersSidelinkEUTRA_NR_v1630(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationListSidelinkEUTRA_NR_v1630(Decoder& dec, BandCombinationListSidelinkEUTRA_NR_v1630& value)
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
    BandCombinationParametersSidelinkEUTRA_NR_v1630* grown = (BandCombinationParametersSidelinkEUTRA_NR_v1630*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombinationParametersSidelinkEUTRA_NR_v1630));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombinationParametersSidelinkEUTRA_NR_v1630));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombinationParametersSidelinkEUTRA_NR_v1630(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
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
    Free_BandCombinationListSidelinkEUTRA_NR_v1630(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationListSidelinkEUTRA_NR_v1630(BandCombinationListSidelinkEUTRA_NR_v1630& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombinationParametersSidelinkEUTRA_NR_v1630(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombinationListSidelinkEUTRA_NR_v1710：ASN.1 BandCombinationListSidelinkEUTRA-NR-v1710；源文件第 14626 行；SEQUENCE OF。
// Encode_BandCombinationListSidelinkEUTRA_NR_v1710 只读不分配；Decode_BandCombinationListSidelinkEUTRA_NR_v1710 可能 malloc（失败时内部已释放并清零）；Free_BandCombinationListSidelinkEUTRA_NR_v1710 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombinationListSidelinkEUTRA_NR_v1710(Encoder& enc, const BandCombinationListSidelinkEUTRA_NR_v1710& value)
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
        Encode_BandCombinationParametersSidelinkEUTRA_NR_v1710(enc, value.items[element_index + i]);
    }
    element_index += chunk;
    remaining -= chunk;
}
enc.WriteLengthDeterminant(remaining);
for (std::uint32_t i = 0; i < remaining; ++i) {
    Encode_BandCombinationParametersSidelinkEUTRA_NR_v1710(enc, value.items[element_index + i]);
}
    return enc.Error();
}

ErrorCode Decode_BandCombinationListSidelinkEUTRA_NR_v1710(Decoder& dec, BandCombinationListSidelinkEUTRA_NR_v1710& value)
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
    BandCombinationParametersSidelinkEUTRA_NR_v1710* grown = (BandCombinationParametersSidelinkEUTRA_NR_v1710*)std::realloc(value.items, (std::size_t)new_total * sizeof(BandCombinationParametersSidelinkEUTRA_NR_v1710));
    if (grown == nullptr) {
        dec.Fail(ErrorCode_OutOfMemory); goto fail;
    }
    value.items = grown;
    std::memset(value.items + total_count, 0, (std::size_t)fragment_count * sizeof(BandCombinationParametersSidelinkEUTRA_NR_v1710));
    value.count = new_total;
    for (std::uint32_t i = 0; i < fragment_count; ++i) {
        if (Decode_BandCombinationParametersSidelinkEUTRA_NR_v1710(dec, value.items[total_count + i]) != ErrorCode_Ok) { goto fail; }
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
    Free_BandCombinationListSidelinkEUTRA_NR_v1710(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationListSidelinkEUTRA_NR_v1710(BandCombinationListSidelinkEUTRA_NR_v1710& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandCombinationParametersSidelinkEUTRA_NR_v1710(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombinationParametersSidelinkEUTRA_NR_r16：ASN.1 BandCombinationParametersSidelinkEUTRA-NR-r16；源文件第 14628 行；SEQUENCE OF。
// Encode_BandCombinationParametersSidelinkEUTRA_NR_r16 只读不分配；Decode_BandCombinationParametersSidelinkEUTRA_NR_r16 可能 malloc（失败时内部已释放并清零）；Free_BandCombinationParametersSidelinkEUTRA_NR_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombinationParametersSidelinkEUTRA_NR_r16(Encoder& enc, const BandCombinationParametersSidelinkEUTRA_NR_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_BandParametersSidelinkEUTRA_NR_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombinationParametersSidelinkEUTRA_NR_r16(Decoder& dec, BandCombinationParametersSidelinkEUTRA_NR_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (BandParametersSidelinkEUTRA_NR_r16*)std::malloc((std::size_t)value.count * sizeof(BandParametersSidelinkEUTRA_NR_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandParametersSidelinkEUTRA_NR_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_BandParametersSidelinkEUTRA_NR_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationParametersSidelinkEUTRA_NR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationParametersSidelinkEUTRA_NR_r16(BandCombinationParametersSidelinkEUTRA_NR_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandParametersSidelinkEUTRA_NR_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombinationParametersSidelinkEUTRA_NR_v1630：ASN.1 BandCombinationParametersSidelinkEUTRA-NR-v1630；源文件第 14630 行；SEQUENCE OF。
// Encode_BandCombinationParametersSidelinkEUTRA_NR_v1630 只读不分配；Decode_BandCombinationParametersSidelinkEUTRA_NR_v1630 可能 malloc（失败时内部已释放并清零）；Free_BandCombinationParametersSidelinkEUTRA_NR_v1630 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombinationParametersSidelinkEUTRA_NR_v1630(Encoder& enc, const BandCombinationParametersSidelinkEUTRA_NR_v1630& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_BandParametersSidelinkEUTRA_NR_v1630(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombinationParametersSidelinkEUTRA_NR_v1630(Decoder& dec, BandCombinationParametersSidelinkEUTRA_NR_v1630& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (BandParametersSidelinkEUTRA_NR_v1630*)std::malloc((std::size_t)value.count * sizeof(BandParametersSidelinkEUTRA_NR_v1630));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandParametersSidelinkEUTRA_NR_v1630));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_BandParametersSidelinkEUTRA_NR_v1630(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationParametersSidelinkEUTRA_NR_v1630(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationParametersSidelinkEUTRA_NR_v1630(BandCombinationParametersSidelinkEUTRA_NR_v1630& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandParametersSidelinkEUTRA_NR_v1630(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombinationParametersSidelinkEUTRA_NR_v1710：ASN.1 BandCombinationParametersSidelinkEUTRA-NR-v1710；源文件第 14632 行；SEQUENCE OF。
// Encode_BandCombinationParametersSidelinkEUTRA_NR_v1710 只读不分配；Decode_BandCombinationParametersSidelinkEUTRA_NR_v1710 可能 malloc（失败时内部已释放并清零）；Free_BandCombinationParametersSidelinkEUTRA_NR_v1710 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombinationParametersSidelinkEUTRA_NR_v1710(Encoder& enc, const BandCombinationParametersSidelinkEUTRA_NR_v1710& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_BandParametersSidelinkEUTRA_NR_v1710(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombinationParametersSidelinkEUTRA_NR_v1710(Decoder& dec, BandCombinationParametersSidelinkEUTRA_NR_v1710& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (BandParametersSidelinkEUTRA_NR_v1710*)std::malloc((std::size_t)value.count * sizeof(BandParametersSidelinkEUTRA_NR_v1710));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandParametersSidelinkEUTRA_NR_v1710));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_BandParametersSidelinkEUTRA_NR_v1710(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationParametersSidelinkEUTRA_NR_v1710(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationParametersSidelinkEUTRA_NR_v1710(BandCombinationParametersSidelinkEUTRA_NR_v1710& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandParametersSidelinkEUTRA_NR_v1710(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParametersSidelinkEUTRA_NR_r16_Eutra：ASN.1 eutra；源文件第 14635 行；SEQUENCE。
// Encode_BandParametersSidelinkEUTRA_NR_r16_Eutra 只读不分配；Decode_BandParametersSidelinkEUTRA_NR_r16_Eutra 可能 malloc（失败时内部已释放并清零）；Free_BandParametersSidelinkEUTRA_NR_r16_Eutra 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParametersSidelinkEUTRA_NR_r16_Eutra(Encoder& enc, const BandParametersSidelinkEUTRA_NR_r16_Eutra& value)
{
    (void)value;
    enc.WriteBit(value.has_bandParametersSidelinkEUTRA1_r16);
    enc.WriteBit(value.has_bandParametersSidelinkEUTRA2_r16);
    if (value.has_bandParametersSidelinkEUTRA1_r16) {
        enc.WriteSemiConstrainedOctetString(value.bandParametersSidelinkEUTRA1_r16.bytes, value.bandParametersSidelinkEUTRA1_r16.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_bandParametersSidelinkEUTRA2_r16) {
        enc.WriteSemiConstrainedOctetString(value.bandParametersSidelinkEUTRA2_r16.bytes, value.bandParametersSidelinkEUTRA2_r16.length, 0, 0xFFFFFFFFu);
    }
    return enc.Error();
}

ErrorCode Decode_BandParametersSidelinkEUTRA_NR_r16_Eutra(Decoder& dec, BandParametersSidelinkEUTRA_NR_r16_Eutra& value)
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
        value.bandParametersSidelinkEUTRA1_r16.bytes = string_bytes;
        value.bandParametersSidelinkEUTRA1_r16.length = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.bandParametersSidelinkEUTRA2_r16.bytes = string_bytes;
        value.bandParametersSidelinkEUTRA2_r16.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParametersSidelinkEUTRA_NR_r16_Eutra(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParametersSidelinkEUTRA_NR_r16_Eutra(BandParametersSidelinkEUTRA_NR_r16_Eutra& value)
{
    if (value.has_bandParametersSidelinkEUTRA1_r16) {
        std::free(value.bandParametersSidelinkEUTRA1_r16.bytes);
        value.bandParametersSidelinkEUTRA1_r16.bytes = nullptr;
        value.bandParametersSidelinkEUTRA1_r16.length = 0;
    }
    if (value.has_bandParametersSidelinkEUTRA2_r16) {
        std::free(value.bandParametersSidelinkEUTRA2_r16.bytes);
        value.bandParametersSidelinkEUTRA2_r16.bytes = nullptr;
        value.bandParametersSidelinkEUTRA2_r16.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParametersSidelink_r16：ASN.1 BandParametersSidelink-r16；源文件第 14682 行；SEQUENCE。
// Encode_BandParametersSidelink_r16 只读不分配；Decode_BandParametersSidelink_r16 可能 malloc（失败时内部已释放并清零）；Free_BandParametersSidelink_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParametersSidelink_r16(Encoder& enc, const BandParametersSidelink_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.freqBandSidelink_r16), 1, 1024);
    return enc.Error();
}

ErrorCode Decode_BandParametersSidelink_r16(Decoder& dec, BandParametersSidelink_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 1024, tmp_value)) { goto fail; }
        value.freqBandSidelink_r16 = (FreqBandIndicatorNR)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParametersSidelink_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParametersSidelink_r16(BandParametersSidelink_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParametersSidelinkEUTRA_NR_r16_Nr：ASN.1 nr；源文件第 14639 行；SEQUENCE。
// Encode_BandParametersSidelinkEUTRA_NR_r16_Nr 只读不分配；Decode_BandParametersSidelinkEUTRA_NR_r16_Nr 可能 malloc（失败时内部已释放并清零）；Free_BandParametersSidelinkEUTRA_NR_r16_Nr 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParametersSidelinkEUTRA_NR_r16_Nr(Encoder& enc, const BandParametersSidelinkEUTRA_NR_r16_Nr& value)
{
    (void)value;
    Encode_BandParametersSidelink_r16(enc, value.bandParametersSidelinkNR_r16);
    return enc.Error();
}

ErrorCode Decode_BandParametersSidelinkEUTRA_NR_r16_Nr(Decoder& dec, BandParametersSidelinkEUTRA_NR_r16_Nr& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_BandParametersSidelink_r16(dec, value.bandParametersSidelinkNR_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParametersSidelinkEUTRA_NR_r16_Nr(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParametersSidelinkEUTRA_NR_r16_Nr(BandParametersSidelinkEUTRA_NR_r16_Nr& value)
{
    Free_BandParametersSidelink_r16(value.bandParametersSidelinkNR_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParametersSidelinkEUTRA_NR_r16：ASN.1 BandParametersSidelinkEUTRA-NR-r16；源文件第 14634 行；CHOICE。
// Encode_BandParametersSidelinkEUTRA_NR_r16 只读不分配；Decode_BandParametersSidelinkEUTRA_NR_r16 可能 malloc（失败时内部已释放并清零）；Free_BandParametersSidelinkEUTRA_NR_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParametersSidelinkEUTRA_NR_r16(Encoder& enc, const BandParametersSidelinkEUTRA_NR_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case BandParametersSidelinkEUTRA_NR_r16_Tag_eutra:
        Encode_BandParametersSidelinkEUTRA_NR_r16_Eutra(enc, value.u.eutra);
        break;
    case BandParametersSidelinkEUTRA_NR_r16_Tag_nr:
        Encode_BandParametersSidelinkEUTRA_NR_r16_Nr(enc, value.u.nr);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_BandParametersSidelinkEUTRA_NR_r16(Decoder& dec, BandParametersSidelinkEUTRA_NR_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (BandParametersSidelinkEUTRA_NR_r16_Tag)root_index;
    switch (value.tag) {
    case BandParametersSidelinkEUTRA_NR_r16_Tag_eutra: {
        if (Decode_BandParametersSidelinkEUTRA_NR_r16_Eutra(dec, value.u.eutra) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case BandParametersSidelinkEUTRA_NR_r16_Tag_nr: {
        if (Decode_BandParametersSidelinkEUTRA_NR_r16_Nr(dec, value.u.nr) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParametersSidelinkEUTRA_NR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParametersSidelinkEUTRA_NR_r16(BandParametersSidelinkEUTRA_NR_r16& value)
{
    switch (value.tag) {
    case BandParametersSidelinkEUTRA_NR_r16_Tag_eutra:
        Free_BandParametersSidelinkEUTRA_NR_r16_Eutra(value.u.eutra);
        break;
    case BandParametersSidelinkEUTRA_NR_r16_Tag_nr:
        Free_BandParametersSidelinkEUTRA_NR_r16_Nr(value.u.nr);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParametersSidelinkEUTRA_NR_v1630_Nr：ASN.1 nr；源文件第 14646 行；SEQUENCE。
// Encode_BandParametersSidelinkEUTRA_NR_v1630_Nr 只读不分配；Decode_BandParametersSidelinkEUTRA_NR_v1630_Nr 可能 malloc（失败时内部已释放并清零）；Free_BandParametersSidelinkEUTRA_NR_v1630_Nr 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParametersSidelinkEUTRA_NR_v1630_Nr(Encoder& enc, const BandParametersSidelinkEUTRA_NR_v1630_Nr& value)
{
    (void)value;
    enc.WriteBit(value.has_tx_Sidelink_r16);
    enc.WriteBit(value.has_rx_Sidelink_r16);
    enc.WriteBit(value.has_sl_CrossCarrierScheduling_r16);
    if (value.has_tx_Sidelink_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tx_Sidelink_r16), 0, 0);
    }
    if (value.has_rx_Sidelink_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rx_Sidelink_r16), 0, 0);
    }
    if (value.has_sl_CrossCarrierScheduling_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_CrossCarrierScheduling_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandParametersSidelinkEUTRA_NR_v1630_Nr(Decoder& dec, BandParametersSidelinkEUTRA_NR_v1630_Nr& value)
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
        value.tx_Sidelink_r16 = (BandParametersSidelinkEUTRA_NR_v1630_Nr_Tx_Sidelink_r16)0;
    }
    if (present_1) {
        value.rx_Sidelink_r16 = (BandParametersSidelinkEUTRA_NR_v1630_Nr_Rx_Sidelink_r16)0;
    }
    if (present_2) {
        value.sl_CrossCarrierScheduling_r16 = (BandParametersSidelinkEUTRA_NR_v1630_Nr_Sl_CrossCarrierScheduling_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParametersSidelinkEUTRA_NR_v1630_Nr(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParametersSidelinkEUTRA_NR_v1630_Nr(BandParametersSidelinkEUTRA_NR_v1630_Nr& value)
{
    if (value.has_tx_Sidelink_r16) {
    }
    if (value.has_rx_Sidelink_r16) {
    }
    if (value.has_sl_CrossCarrierScheduling_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParametersSidelinkEUTRA_NR_v1630：ASN.1 BandParametersSidelinkEUTRA-NR-v1630；源文件第 14644 行；CHOICE。
// Encode_BandParametersSidelinkEUTRA_NR_v1630 只读不分配；Decode_BandParametersSidelinkEUTRA_NR_v1630 可能 malloc（失败时内部已释放并清零）；Free_BandParametersSidelinkEUTRA_NR_v1630 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParametersSidelinkEUTRA_NR_v1630(Encoder& enc, const BandParametersSidelinkEUTRA_NR_v1630& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case BandParametersSidelinkEUTRA_NR_v1630_Tag_eutra:
        (void)0;
        break;
    case BandParametersSidelinkEUTRA_NR_v1630_Tag_nr:
        Encode_BandParametersSidelinkEUTRA_NR_v1630_Nr(enc, value.u.nr);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_BandParametersSidelinkEUTRA_NR_v1630(Decoder& dec, BandParametersSidelinkEUTRA_NR_v1630& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (BandParametersSidelinkEUTRA_NR_v1630_Tag)root_index;
    switch (value.tag) {
    case BandParametersSidelinkEUTRA_NR_v1630_Tag_eutra: {
        (void)0;
        break;
    }
    case BandParametersSidelinkEUTRA_NR_v1630_Tag_nr: {
        if (Decode_BandParametersSidelinkEUTRA_NR_v1630_Nr(dec, value.u.nr) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParametersSidelinkEUTRA_NR_v1630(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParametersSidelinkEUTRA_NR_v1630(BandParametersSidelinkEUTRA_NR_v1630& value)
{
    switch (value.tag) {
    case BandParametersSidelinkEUTRA_NR_v1630_Tag_eutra:
        break;
    case BandParametersSidelinkEUTRA_NR_v1630_Tag_nr:
        Free_BandParametersSidelinkEUTRA_NR_v1630_Nr(value.u.nr);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_d9d46e71：ASN.1 nr/sl-TransmissionMode2-PartialSensing-r17/scs-CP-PatternTxSidelinkModeTwo-r17/fr1-r17；源文件第 14660 行；SEQUENCE。
// Encode_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_d9d46e71 只读不分配；Decode_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_d9d46e71 可能 malloc（失败时内部已释放并清零）；Free_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_d9d46e71 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_d9d46e71(Encoder& enc, const BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_d9d46e71& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz_r17);
    enc.WriteBit(value.has_scs_30kHz_r17);
    enc.WriteBit(value.has_scs_60kHz_r17);
    if (value.has_scs_15kHz_r17) {
        enc.WriteFixedBitString(value.scs_15kHz_r17.bytes, value.scs_15kHz_r17.bitLength, 16, 16);
    }
    if (value.has_scs_30kHz_r17) {
        enc.WriteFixedBitString(value.scs_30kHz_r17.bytes, value.scs_30kHz_r17.bitLength, 16, 16);
    }
    if (value.has_scs_60kHz_r17) {
        enc.WriteFixedBitString(value.scs_60kHz_r17.bytes, value.scs_60kHz_r17.bitLength, 16, 16);
    }
    return enc.Error();
}

ErrorCode Decode_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_d9d46e71(Decoder& dec, BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_d9d46e71& value)
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
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_15kHz_r17.bytes = string_bytes;
        value.scs_15kHz_r17.bitLength = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_30kHz_r17.bytes = string_bytes;
        value.scs_30kHz_r17.bitLength = string_length;
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_60kHz_r17.bytes = string_bytes;
        value.scs_60kHz_r17.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_d9d46e71(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_d9d46e71(BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_d9d46e71& value)
{
    if (value.has_scs_15kHz_r17) {
        std::free(value.scs_15kHz_r17.bytes);
        value.scs_15kHz_r17.bytes = nullptr;
        value.scs_15kHz_r17.bitLength = 0;
    }
    if (value.has_scs_30kHz_r17) {
        std::free(value.scs_30kHz_r17.bytes);
        value.scs_30kHz_r17.bytes = nullptr;
        value.scs_30kHz_r17.bitLength = 0;
    }
    if (value.has_scs_60kHz_r17) {
        std::free(value.scs_60kHz_r17.bytes);
        value.scs_60kHz_r17.bytes = nullptr;
        value.scs_60kHz_r17.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_3f3652b6：ASN.1 nr/sl-TransmissionMode2-PartialSensing-r17/scs-CP-PatternTxSidelinkModeTwo-r17/fr2-r17；源文件第 14665 行；SEQUENCE。
// Encode_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_3f3652b6 只读不分配；Decode_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_3f3652b6 可能 malloc（失败时内部已释放并清零）；Free_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_3f3652b6 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_3f3652b6(Encoder& enc, const BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_3f3652b6& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_60kHz_r17);
    enc.WriteBit(value.has_scs_120kHz_r17);
    if (value.has_scs_60kHz_r17) {
        enc.WriteFixedBitString(value.scs_60kHz_r17.bytes, value.scs_60kHz_r17.bitLength, 16, 16);
    }
    if (value.has_scs_120kHz_r17) {
        enc.WriteFixedBitString(value.scs_120kHz_r17.bytes, value.scs_120kHz_r17.bitLength, 16, 16);
    }
    return enc.Error();
}

ErrorCode Decode_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_3f3652b6(Decoder& dec, BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_3f3652b6& value)
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
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_60kHz_r17.bytes = string_bytes;
        value.scs_60kHz_r17.bitLength = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_120kHz_r17.bytes = string_bytes;
        value.scs_120kHz_r17.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_3f3652b6(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_3f3652b6(BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_3f3652b6& value)
{
    if (value.has_scs_60kHz_r17) {
        std::free(value.scs_60kHz_r17.bytes);
        value.scs_60kHz_r17.bytes = nullptr;
        value.scs_60kHz_r17.bitLength = 0;
    }
    if (value.has_scs_120kHz_r17) {
        std::free(value.scs_120kHz_r17.bytes);
        value.scs_120kHz_r17.bytes = nullptr;
        value.scs_120kHz_r17.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17：ASN.1 nr/sl-TransmissionMode2-PartialSensing-r17/scs-CP-PatternTxSidelinkModeTwo-r17；源文件第 14659 行；CHOICE。
// Encode_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17 只读不分配；Decode_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17 可能 malloc（失败时内部已释放并清零）；Free_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17(Encoder& enc, const BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag_fr1_r17:
        Encode_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_d9d46e71(enc, value.u.fr1_r17);
        break;
    case BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag_fr2_r17:
        Encode_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_3f3652b6(enc, value.u.fr2_r17);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17(Decoder& dec, BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag)root_index;
    switch (value.tag) {
    case BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag_fr1_r17: {
        if (Decode_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_d9d46e71(dec, value.u.fr1_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag_fr2_r17: {
        if (Decode_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_3f3652b6(dec, value.u.fr2_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17(BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17& value)
{
    switch (value.tag) {
    case BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag_fr1_r17:
        Free_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_d9d46e71(value.u.fr1_r17);
        break;
    case BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag_fr2_r17:
        Free_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSide_3f3652b6(value.u.fr2_r17);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17：ASN.1 nr/sl-TransmissionMode2-PartialSensing-r17；源文件第 14657 行；SEQUENCE。
// Encode_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17 只读不分配；Decode_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17 可能 malloc（失败时内部已释放并清零）；Free_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17(Encoder& enc, const BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_CP_PatternTxSidelinkModeTwo_r17);
    enc.WriteBit(value.has_extendedCP_Mode2PartialSensing_r17);
    enc.WriteBit(value.has_dl_openLoopPC_Sidelink_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.harq_TxProcessModeTwoSidelink_r17), 0, 1);
    if (value.has_scs_CP_PatternTxSidelinkModeTwo_r17) {
        Encode_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17(enc, value.scs_CP_PatternTxSidelinkModeTwo_r17);
    }
    if (value.has_extendedCP_Mode2PartialSensing_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.extendedCP_Mode2PartialSensing_r17), 0, 0);
    }
    if (value.has_dl_openLoopPC_Sidelink_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_openLoopPC_Sidelink_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17(Decoder& dec, BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.harq_TxProcessModeTwoSidelink_r17 = (BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Harq_TxProcessModeTwoSidelink_r17)tmp_value;
    }
    if (present_0) {
        if (Decode_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17(dec, value.scs_CP_PatternTxSidelinkModeTwo_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.extendedCP_Mode2PartialSensing_r17 = (BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_ExtendedCP_Mode2PartialSensing_r17)0;
    }
    if (present_2) {
        value.dl_openLoopPC_Sidelink_r17 = (BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Dl_openLoopPC_Sidelink_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17(BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17& value)
{
    if (value.has_scs_CP_PatternTxSidelinkModeTwo_r17) {
        Free_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17(value.scs_CP_PatternTxSidelinkModeTwo_r17);
    }
    if (value.has_extendedCP_Mode2PartialSensing_r17) {
    }
    if (value.has_dl_openLoopPC_Sidelink_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParametersSidelinkEUTRA_NR_v1710_Nr：ASN.1 nr；源文件第 14655 行；SEQUENCE。
// Encode_BandParametersSidelinkEUTRA_NR_v1710_Nr 只读不分配；Decode_BandParametersSidelinkEUTRA_NR_v1710_Nr 可能 malloc（失败时内部已释放并清零）；Free_BandParametersSidelinkEUTRA_NR_v1710_Nr 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParametersSidelinkEUTRA_NR_v1710_Nr(Encoder& enc, const BandParametersSidelinkEUTRA_NR_v1710_Nr& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_TransmissionMode2_PartialSensing_r17);
    enc.WriteBit(value.has_rx_sidelinkPSFCH_r17);
    enc.WriteBit(value.has_tx_IUC_Scheme1_Mode2Sidelink_r17);
    enc.WriteBit(value.has_tx_IUC_Scheme2_Mode2Sidelink_r17);
    if (value.has_sl_TransmissionMode2_PartialSensing_r17) {
        Encode_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17(enc, value.sl_TransmissionMode2_PartialSensing_r17);
    }
    if (value.has_rx_sidelinkPSFCH_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rx_sidelinkPSFCH_r17), 0, 7);
    }
    if (value.has_tx_IUC_Scheme1_Mode2Sidelink_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tx_IUC_Scheme1_Mode2Sidelink_r17), 0, 0);
    }
    if (value.has_tx_IUC_Scheme2_Mode2Sidelink_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tx_IUC_Scheme2_Mode2Sidelink_r17), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_BandParametersSidelinkEUTRA_NR_v1710_Nr(Decoder& dec, BandParametersSidelinkEUTRA_NR_v1710_Nr& value)
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
        if (Decode_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17(dec, value.sl_TransmissionMode2_PartialSensing_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.rx_sidelinkPSFCH_r17 = (BandParametersSidelinkEUTRA_NR_v1710_Nr_Rx_sidelinkPSFCH_r17)tmp_value;
    }
    if (present_2) {
        value.tx_IUC_Scheme1_Mode2Sidelink_r17 = (BandParametersSidelinkEUTRA_NR_v1710_Nr_Tx_IUC_Scheme1_Mode2Sidelink_r17)0;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.tx_IUC_Scheme2_Mode2Sidelink_r17 = (BandParametersSidelinkEUTRA_NR_v1710_Nr_Tx_IUC_Scheme2_Mode2Sidelink_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParametersSidelinkEUTRA_NR_v1710_Nr(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParametersSidelinkEUTRA_NR_v1710_Nr(BandParametersSidelinkEUTRA_NR_v1710_Nr& value)
{
    if (value.has_sl_TransmissionMode2_PartialSensing_r17) {
        Free_BandParametersSidelinkEUTRA_NR_v1710_Nr_Sl_TransmissionMode2_PartialSensing_r17(value.sl_TransmissionMode2_PartialSensing_r17);
    }
    if (value.has_rx_sidelinkPSFCH_r17) {
    }
    if (value.has_tx_IUC_Scheme1_Mode2Sidelink_r17) {
    }
    if (value.has_tx_IUC_Scheme2_Mode2Sidelink_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParametersSidelinkEUTRA_NR_v1710：ASN.1 BandParametersSidelinkEUTRA-NR-v1710；源文件第 14653 行；CHOICE。
// Encode_BandParametersSidelinkEUTRA_NR_v1710 只读不分配；Decode_BandParametersSidelinkEUTRA_NR_v1710 可能 malloc（失败时内部已释放并清零）；Free_BandParametersSidelinkEUTRA_NR_v1710 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParametersSidelinkEUTRA_NR_v1710(Encoder& enc, const BandParametersSidelinkEUTRA_NR_v1710& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case BandParametersSidelinkEUTRA_NR_v1710_Tag_eutra:
        (void)0;
        break;
    case BandParametersSidelinkEUTRA_NR_v1710_Tag_nr:
        Encode_BandParametersSidelinkEUTRA_NR_v1710_Nr(enc, value.u.nr);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_BandParametersSidelinkEUTRA_NR_v1710(Decoder& dec, BandParametersSidelinkEUTRA_NR_v1710& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (BandParametersSidelinkEUTRA_NR_v1710_Tag)root_index;
    switch (value.tag) {
    case BandParametersSidelinkEUTRA_NR_v1710_Tag_eutra: {
        (void)0;
        break;
    }
    case BandParametersSidelinkEUTRA_NR_v1710_Tag_nr: {
        if (Decode_BandParametersSidelinkEUTRA_NR_v1710_Nr(dec, value.u.nr) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParametersSidelinkEUTRA_NR_v1710(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParametersSidelinkEUTRA_NR_v1710(BandParametersSidelinkEUTRA_NR_v1710& value)
{
    switch (value.tag) {
    case BandParametersSidelinkEUTRA_NR_v1710_Tag_eutra:
        break;
    case BandParametersSidelinkEUTRA_NR_v1710_Tag_nr:
        Free_BandParametersSidelinkEUTRA_NR_v1710_Nr(value.u.nr);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombinationListSL_Discovery_r17：ASN.1 BandCombinationListSL-Discovery-r17；源文件第 14689 行；SEQUENCE OF。
// Encode_BandCombinationListSL_Discovery_r17 只读不分配；Decode_BandCombinationListSL_Discovery_r17 可能 malloc（失败时内部已释放并清零）；Free_BandCombinationListSL_Discovery_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombinationListSL_Discovery_r17(Encoder& enc, const BandCombinationListSL_Discovery_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_BandParametersSidelinkDiscovery_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombinationListSL_Discovery_r17(Decoder& dec, BandCombinationListSL_Discovery_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (BandParametersSidelinkDiscovery_r17*)std::malloc((std::size_t)value.count * sizeof(BandParametersSidelinkDiscovery_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(BandParametersSidelinkDiscovery_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_BandParametersSidelinkDiscovery_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_BandCombinationListSL_Discovery_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombinationListSL_Discovery_r17(BandCombinationListSL_Discovery_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_BandParametersSidelinkDiscovery_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17：ASN.1 sl-TransmissionMode2-PartialSensing-r17/scs-CP-PatternTxSidelinkModeTwo-r17/fr1-r17；源文件第 14697 行；SEQUENCE。
// Encode_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17 只读不分配；Decode_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17 可能 malloc（失败时内部已释放并清零）；Free_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17(Encoder& enc, const BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz_r17);
    enc.WriteBit(value.has_scs_30kHz_r17);
    enc.WriteBit(value.has_scs_60kHz_r17);
    if (value.has_scs_15kHz_r17) {
        enc.WriteFixedBitString(value.scs_15kHz_r17.bytes, value.scs_15kHz_r17.bitLength, 16, 16);
    }
    if (value.has_scs_30kHz_r17) {
        enc.WriteFixedBitString(value.scs_30kHz_r17.bytes, value.scs_30kHz_r17.bitLength, 16, 16);
    }
    if (value.has_scs_60kHz_r17) {
        enc.WriteFixedBitString(value.scs_60kHz_r17.bytes, value.scs_60kHz_r17.bitLength, 16, 16);
    }
    return enc.Error();
}

ErrorCode Decode_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17(Decoder& dec, BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17& value)
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
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_15kHz_r17.bytes = string_bytes;
        value.scs_15kHz_r17.bitLength = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_30kHz_r17.bytes = string_bytes;
        value.scs_30kHz_r17.bitLength = string_length;
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_60kHz_r17.bytes = string_bytes;
        value.scs_60kHz_r17.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17(BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17& value)
{
    if (value.has_scs_15kHz_r17) {
        std::free(value.scs_15kHz_r17.bytes);
        value.scs_15kHz_r17.bytes = nullptr;
        value.scs_15kHz_r17.bitLength = 0;
    }
    if (value.has_scs_30kHz_r17) {
        std::free(value.scs_30kHz_r17.bytes);
        value.scs_30kHz_r17.bytes = nullptr;
        value.scs_30kHz_r17.bitLength = 0;
    }
    if (value.has_scs_60kHz_r17) {
        std::free(value.scs_60kHz_r17.bytes);
        value.scs_60kHz_r17.bytes = nullptr;
        value.scs_60kHz_r17.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17：ASN.1 sl-TransmissionMode2-PartialSensing-r17/scs-CP-PatternTxSidelinkModeTwo-r17/fr2-r17；源文件第 14702 行；SEQUENCE。
// Encode_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17 只读不分配；Decode_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17 可能 malloc（失败时内部已释放并清零）；Free_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17(Encoder& enc, const BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_60kHz_r17);
    enc.WriteBit(value.has_scs_120kHz_r17);
    if (value.has_scs_60kHz_r17) {
        enc.WriteFixedBitString(value.scs_60kHz_r17.bytes, value.scs_60kHz_r17.bitLength, 16, 16);
    }
    if (value.has_scs_120kHz_r17) {
        enc.WriteFixedBitString(value.scs_120kHz_r17.bytes, value.scs_120kHz_r17.bitLength, 16, 16);
    }
    return enc.Error();
}

ErrorCode Decode_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17(Decoder& dec, BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17& value)
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
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_60kHz_r17.bytes = string_bytes;
        value.scs_60kHz_r17.bitLength = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_120kHz_r17.bytes = string_bytes;
        value.scs_120kHz_r17.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17(BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17& value)
{
    if (value.has_scs_60kHz_r17) {
        std::free(value.scs_60kHz_r17.bytes);
        value.scs_60kHz_r17.bytes = nullptr;
        value.scs_60kHz_r17.bitLength = 0;
    }
    if (value.has_scs_120kHz_r17) {
        std::free(value.scs_120kHz_r17.bytes);
        value.scs_120kHz_r17.bytes = nullptr;
        value.scs_120kHz_r17.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17：ASN.1 sl-TransmissionMode2-PartialSensing-r17/scs-CP-PatternTxSidelinkModeTwo-r17；源文件第 14696 行；CHOICE。
// Encode_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17 只读不分配；Decode_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17 可能 malloc（失败时内部已释放并清零）；Free_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17(Encoder& enc, const BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag_fr1_r17:
        Encode_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17(enc, value.u.fr1_r17);
        break;
    case BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag_fr2_r17:
        Encode_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17(enc, value.u.fr2_r17);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17(Decoder& dec, BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag)root_index;
    switch (value.tag) {
    case BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag_fr1_r17: {
        if (Decode_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17(dec, value.u.fr1_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag_fr2_r17: {
        if (Decode_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17(dec, value.u.fr2_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17(BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17& value)
{
    switch (value.tag) {
    case BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag_fr1_r17:
        Free_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17(value.u.fr1_r17);
        break;
    case BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag_fr2_r17:
        Free_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17(value.u.fr2_r17);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17：ASN.1 sl-TransmissionMode2-PartialSensing-r17；源文件第 14694 行；SEQUENCE。
// Encode_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17 只读不分配；Decode_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17 可能 malloc（失败时内部已释放并清零）；Free_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17(Encoder& enc, const BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_CP_PatternTxSidelinkModeTwo_r17);
    enc.WriteBit(value.has_extendedCP_Mode2PartialSensing_r17);
    enc.WriteBit(value.has_dl_openLoopPC_Sidelink_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.harq_TxProcessModeTwoSidelink_r17), 0, 1);
    if (value.has_scs_CP_PatternTxSidelinkModeTwo_r17) {
        Encode_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17(enc, value.scs_CP_PatternTxSidelinkModeTwo_r17);
    }
    if (value.has_extendedCP_Mode2PartialSensing_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.extendedCP_Mode2PartialSensing_r17), 0, 0);
    }
    if (value.has_dl_openLoopPC_Sidelink_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_openLoopPC_Sidelink_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17(Decoder& dec, BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.harq_TxProcessModeTwoSidelink_r17 = (BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Harq_TxProcessModeTwoSidelink_r17)tmp_value;
    }
    if (present_0) {
        if (Decode_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17(dec, value.scs_CP_PatternTxSidelinkModeTwo_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.extendedCP_Mode2PartialSensing_r17 = (BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_ExtendedCP_Mode2PartialSensing_r17)0;
    }
    if (present_2) {
        value.dl_openLoopPC_Sidelink_r17 = (BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Dl_openLoopPC_Sidelink_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17(BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17& value)
{
    if (value.has_scs_CP_PatternTxSidelinkModeTwo_r17) {
        Free_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17_Scs_CP_PatternTxSidelinkModeTwo_r17(value.scs_CP_PatternTxSidelinkModeTwo_r17);
    }
    if (value.has_extendedCP_Mode2PartialSensing_r17) {
    }
    if (value.has_dl_openLoopPC_Sidelink_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParametersSidelinkDiscovery_r17：ASN.1 BandParametersSidelinkDiscovery-r17；源文件第 14691 行；SEQUENCE。
// Encode_BandParametersSidelinkDiscovery_r17 只读不分配；Decode_BandParametersSidelinkDiscovery_r17 可能 malloc（失败时内部已释放并清零）；Free_BandParametersSidelinkDiscovery_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParametersSidelinkDiscovery_r17(Encoder& enc, const BandParametersSidelinkDiscovery_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_CrossCarrierScheduling_r17);
    enc.WriteBit(value.has_sl_TransmissionMode2_PartialSensing_r17);
    enc.WriteBit(value.has_tx_IUC_Scheme1_Mode2Sidelink_r17);
    if (value.has_sl_CrossCarrierScheduling_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_CrossCarrierScheduling_r17), 0, 0);
    }
    if (value.has_sl_TransmissionMode2_PartialSensing_r17) {
        Encode_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17(enc, value.sl_TransmissionMode2_PartialSensing_r17);
    }
    if (value.has_tx_IUC_Scheme1_Mode2Sidelink_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tx_IUC_Scheme1_Mode2Sidelink_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandParametersSidelinkDiscovery_r17(Decoder& dec, BandParametersSidelinkDiscovery_r17& value)
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
        value.sl_CrossCarrierScheduling_r17 = (BandParametersSidelinkDiscovery_r17_Sl_CrossCarrierScheduling_r17)0;
    }
    if (present_1) {
        if (Decode_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17(dec, value.sl_TransmissionMode2_PartialSensing_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        value.tx_IUC_Scheme1_Mode2Sidelink_r17 = (BandParametersSidelinkDiscovery_r17_Tx_IUC_Scheme1_Mode2Sidelink_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParametersSidelinkDiscovery_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParametersSidelinkDiscovery_r17(BandParametersSidelinkDiscovery_r17& value)
{
    if (value.has_sl_CrossCarrierScheduling_r17) {
    }
    if (value.has_sl_TransmissionMode2_PartialSensing_r17) {
        Free_BandParametersSidelinkDiscovery_r17_Sl_TransmissionMode2_PartialSensing_r17(value.sl_TransmissionMode2_PartialSensing_r17);
    }
    if (value.has_tx_IUC_Scheme1_Mode2Sidelink_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_BlindDetectionCA_MixedExt_r16：ASN.1 PDCCH-BlindDetectionCA-MixedExt-r16；源文件第 15342 行；SEQUENCE。
// Encode_PDCCH_BlindDetectionCA_MixedExt_r16 只读不分配；Decode_PDCCH_BlindDetectionCA_MixedExt_r16 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_BlindDetectionCA_MixedExt_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_BlindDetectionCA_MixedExt_r16(Encoder& enc, const PDCCH_BlindDetectionCA_MixedExt_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCA1_r16), 1, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCA2_r16), 1, 15);
    return enc.Error();
}

ErrorCode Decode_PDCCH_BlindDetectionCA_MixedExt_r16(Decoder& dec, PDCCH_BlindDetectionCA_MixedExt_r16& value)
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
    Free_PDCCH_BlindDetectionCA_MixedExt_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_BlindDetectionCA_MixedExt_r16(PDCCH_BlindDetectionCA_MixedExt_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16：ASN.1 pdcch-BlindDetectionCA-MixedExt-r16；源文件第 15332 行；CHOICE。
// Encode_PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16 只读不分配；Decode_PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16(Encoder& enc, const PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16_Tag_pdcch_BlindDetectionCA_Mixed_v16a0:
        Encode_PDCCH_BlindDetectionCA_MixedExt_r16(enc, value.u.pdcch_BlindDetectionCA_Mixed_v16a0);
        break;
    case PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16_Tag_pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_v16a0:
        Encode_PDCCH_BlindDetectionCA_MixedExt_r16(enc, value.u.pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_v16a0);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16(Decoder& dec, PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16_Tag)root_index;
    switch (value.tag) {
    case PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16_Tag_pdcch_BlindDetectionCA_Mixed_v16a0: {
        if (Decode_PDCCH_BlindDetectionCA_MixedExt_r16(dec, value.u.pdcch_BlindDetectionCA_Mixed_v16a0) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16_Tag_pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_v16a0: {
        if (Decode_PDCCH_BlindDetectionCA_MixedExt_r16(dec, value.u.pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_v16a0) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16(PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16& value)
{
    switch (value.tag) {
    case PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16_Tag_pdcch_BlindDetectionCA_Mixed_v16a0:
        Free_PDCCH_BlindDetectionCA_MixedExt_r16(value.u.pdcch_BlindDetectionCA_Mixed_v16a0);
        break;
    case PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16_Tag_pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_v16a0:
        Free_PDCCH_BlindDetectionCA_MixedExt_r16(value.u.pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_v16a0);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_BlindDetectionCG_UE_MixedExt_r16：ASN.1 PDCCH-BlindDetectionCG-UE-MixedExt-r16；源文件第 15347 行；SEQUENCE。
// Encode_PDCCH_BlindDetectionCG_UE_MixedExt_r16 只读不分配；Decode_PDCCH_BlindDetectionCG_UE_MixedExt_r16 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_BlindDetectionCG_UE_MixedExt_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_BlindDetectionCG_UE_MixedExt_r16(Encoder& enc, const PDCCH_BlindDetectionCG_UE_MixedExt_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCG_UE1_r16), 0, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCG_UE2_r16), 0, 15);
    return enc.Error();
}

ErrorCode Decode_PDCCH_BlindDetectionCG_UE_MixedExt_r16(Decoder& dec, PDCCH_BlindDetectionCG_UE_MixedExt_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionCG_UE1_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionCG_UE2_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_BlindDetectionCG_UE_MixedExt_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_BlindDetectionCG_UE_MixedExt_r16(PDCCH_BlindDetectionCG_UE_MixedExt_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCG_UE_MixedExt_r16：ASN.1 pdcch-BlindDetectionCG-UE-MixedExt-r16；源文件第 15336 行；SEQUENCE。
// Encode_PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCG_UE_MixedExt_r16 只读不分配；Decode_PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCG_UE_MixedExt_r16 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCG_UE_MixedExt_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCG_UE_MixedExt_r16(Encoder& enc, const PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCG_UE_MixedExt_r16& value)
{
    (void)value;
    Encode_PDCCH_BlindDetectionCG_UE_MixedExt_r16(enc, value.pdcch_BlindDetectionMCG_UE_Mixed_v16a0);
    Encode_PDCCH_BlindDetectionCG_UE_MixedExt_r16(enc, value.pdcch_BlindDetectionSCG_UE_Mixed_v16a0);
    return enc.Error();
}

ErrorCode Decode_PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCG_UE_MixedExt_r16(Decoder& dec, PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCG_UE_MixedExt_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_PDCCH_BlindDetectionCG_UE_MixedExt_r16(dec, value.pdcch_BlindDetectionMCG_UE_Mixed_v16a0) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_PDCCH_BlindDetectionCG_UE_MixedExt_r16(dec, value.pdcch_BlindDetectionSCG_UE_Mixed_v16a0) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCG_UE_MixedExt_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCG_UE_MixedExt_r16(PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCG_UE_MixedExt_r16& value)
{
    Free_PDCCH_BlindDetectionCG_UE_MixedExt_r16(value.pdcch_BlindDetectionMCG_UE_Mixed_v16a0);
    Free_PDCCH_BlindDetectionCG_UE_MixedExt_r16(value.pdcch_BlindDetectionSCG_UE_Mixed_v16a0);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_BlindDetectionMixedList_r16：ASN.1 PDCCH-BlindDetectionMixedList-r16；源文件第 15331 行；SEQUENCE。
// Encode_PDCCH_BlindDetectionMixedList_r16 只读不分配；Decode_PDCCH_BlindDetectionMixedList_r16 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_BlindDetectionMixedList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_BlindDetectionMixedList_r16(Encoder& enc, const PDCCH_BlindDetectionMixedList_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_pdcch_BlindDetectionCA_MixedExt_r16);
    enc.WriteBit(value.has_pdcch_BlindDetectionCG_UE_MixedExt_r16);
    if (value.has_pdcch_BlindDetectionCA_MixedExt_r16) {
        Encode_PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16(enc, value.pdcch_BlindDetectionCA_MixedExt_r16);
    }
    if (value.has_pdcch_BlindDetectionCG_UE_MixedExt_r16) {
        Encode_PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCG_UE_MixedExt_r16(enc, value.pdcch_BlindDetectionCG_UE_MixedExt_r16);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_BlindDetectionMixedList_r16(Decoder& dec, PDCCH_BlindDetectionMixedList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16(dec, value.pdcch_BlindDetectionCA_MixedExt_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCG_UE_MixedExt_r16(dec, value.pdcch_BlindDetectionCG_UE_MixedExt_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_BlindDetectionMixedList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_BlindDetectionMixedList_r16(PDCCH_BlindDetectionMixedList_r16& value)
{
    if (value.has_pdcch_BlindDetectionCA_MixedExt_r16) {
        Free_PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCA_MixedExt_r16(value.pdcch_BlindDetectionCA_MixedExt_r16);
    }
    if (value.has_pdcch_BlindDetectionCG_UE_MixedExt_r16) {
        Free_PDCCH_BlindDetectionMixedList_r16_Pdcch_BlindDetectionCG_UE_MixedExt_r16(value.pdcch_BlindDetectionCG_UE_MixedExt_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_BlindDetectionMCG_SCG_r17：ASN.1 PDCCH-BlindDetectionMCG-SCG-r17；源文件第 15352 行；SEQUENCE。
// Encode_PDCCH_BlindDetectionMCG_SCG_r17 只读不分配；Decode_PDCCH_BlindDetectionMCG_SCG_r17 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_BlindDetectionMCG_SCG_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_BlindDetectionMCG_SCG_r17(Encoder& enc, const PDCCH_BlindDetectionMCG_SCG_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionMCG_UE_r17), 1, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionSCG_UE_r17), 1, 15);
    return enc.Error();
}

ErrorCode Decode_PDCCH_BlindDetectionMCG_SCG_r17(Decoder& dec, PDCCH_BlindDetectionMCG_SCG_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionMCG_UE_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionSCG_UE_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_BlindDetectionMCG_SCG_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_BlindDetectionMCG_SCG_r17(PDCCH_BlindDetectionMCG_SCG_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_BlindDetectionCA_Mixed_r17：ASN.1 PDCCH-BlindDetectionCA-Mixed-r17；源文件第 15370 行；SEQUENCE。
// Encode_PDCCH_BlindDetectionCA_Mixed_r17 只读不分配；Decode_PDCCH_BlindDetectionCA_Mixed_r17 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_BlindDetectionCA_Mixed_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_BlindDetectionCA_Mixed_r17(Encoder& enc, const PDCCH_BlindDetectionCA_Mixed_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_pdcch_BlindDetectionCA1_r17);
    enc.WriteBit(value.has_pdcch_BlindDetectionCA2_r17);
    if (value.has_pdcch_BlindDetectionCA1_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCA1_r17), 1, 15);
    }
    if (value.has_pdcch_BlindDetectionCA2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCA2_r17), 1, 15);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_BlindDetectionCA_Mixed_r17(Decoder& dec, PDCCH_BlindDetectionCA_Mixed_r17& value)
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
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_BlindDetectionCA_Mixed_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_BlindDetectionCA_Mixed_r17(PDCCH_BlindDetectionCA_Mixed_r17& value)
{
    if (value.has_pdcch_BlindDetectionCA1_r17) {
    }
    if (value.has_pdcch_BlindDetectionCA2_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_BlindDetectionCG_UE_Mixed_r17：ASN.1 PDCCH-BlindDetectionCG-UE-Mixed-r17；源文件第 15365 行；SEQUENCE。
// Encode_PDCCH_BlindDetectionCG_UE_Mixed_r17 只读不分配；Decode_PDCCH_BlindDetectionCG_UE_Mixed_r17 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_BlindDetectionCG_UE_Mixed_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_BlindDetectionCG_UE_Mixed_r17(Encoder& enc, const PDCCH_BlindDetectionCG_UE_Mixed_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCG_UE1_r17), 0, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCG_UE2_r17), 0, 15);
    return enc.Error();
}

ErrorCode Decode_PDCCH_BlindDetectionCG_UE_Mixed_r17(Decoder& dec, PDCCH_BlindDetectionCG_UE_Mixed_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionCG_UE1_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionCG_UE2_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_BlindDetectionCG_UE_Mixed_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_BlindDetectionCG_UE_Mixed_r17(PDCCH_BlindDetectionCG_UE_Mixed_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_BlindDetectionMixed_r17_Pdcch_BlindDetectionCG_UE_Mixed_r17：ASN.1 pdcch-BlindDetectionCG-UE-Mixed-r17；源文件第 15359 行；SEQUENCE。
// Encode_PDCCH_BlindDetectionMixed_r17_Pdcch_BlindDetectionCG_UE_Mixed_r17 只读不分配；Decode_PDCCH_BlindDetectionMixed_r17_Pdcch_BlindDetectionCG_UE_Mixed_r17 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_BlindDetectionMixed_r17_Pdcch_BlindDetectionCG_UE_Mixed_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_BlindDetectionMixed_r17_Pdcch_BlindDetectionCG_UE_Mixed_r17(Encoder& enc, const PDCCH_BlindDetectionMixed_r17_Pdcch_BlindDetectionCG_UE_Mixed_r17& value)
{
    (void)value;
    Encode_PDCCH_BlindDetectionCG_UE_Mixed_r17(enc, value.pdcch_BlindDetectionMCG_UE_Mixed_v17);
    Encode_PDCCH_BlindDetectionCG_UE_Mixed_r17(enc, value.pdcch_BlindDetectionSCG_UE_Mixed_v17);
    return enc.Error();
}

ErrorCode Decode_PDCCH_BlindDetectionMixed_r17_Pdcch_BlindDetectionCG_UE_Mixed_r17(Decoder& dec, PDCCH_BlindDetectionMixed_r17_Pdcch_BlindDetectionCG_UE_Mixed_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_PDCCH_BlindDetectionCG_UE_Mixed_r17(dec, value.pdcch_BlindDetectionMCG_UE_Mixed_v17) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_PDCCH_BlindDetectionCG_UE_Mixed_r17(dec, value.pdcch_BlindDetectionSCG_UE_Mixed_v17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_BlindDetectionMixed_r17_Pdcch_BlindDetectionCG_UE_Mixed_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_BlindDetectionMixed_r17_Pdcch_BlindDetectionCG_UE_Mixed_r17(PDCCH_BlindDetectionMixed_r17_Pdcch_BlindDetectionCG_UE_Mixed_r17& value)
{
    Free_PDCCH_BlindDetectionCG_UE_Mixed_r17(value.pdcch_BlindDetectionMCG_UE_Mixed_v17);
    Free_PDCCH_BlindDetectionCG_UE_Mixed_r17(value.pdcch_BlindDetectionSCG_UE_Mixed_v17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_BlindDetectionMixed_r17：ASN.1 PDCCH-BlindDetectionMixed-r17；源文件第 15357 行；SEQUENCE。
// Encode_PDCCH_BlindDetectionMixed_r17 只读不分配；Decode_PDCCH_BlindDetectionMixed_r17 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_BlindDetectionMixed_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_BlindDetectionMixed_r17(Encoder& enc, const PDCCH_BlindDetectionMixed_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_pdcch_BlindDetectionCA_Mixed_r17);
    enc.WriteBit(value.has_pdcch_BlindDetectionCG_UE_Mixed_r17);
    if (value.has_pdcch_BlindDetectionCA_Mixed_r17) {
        Encode_PDCCH_BlindDetectionCA_Mixed_r17(enc, value.pdcch_BlindDetectionCA_Mixed_r17);
    }
    if (value.has_pdcch_BlindDetectionCG_UE_Mixed_r17) {
        Encode_PDCCH_BlindDetectionMixed_r17_Pdcch_BlindDetectionCG_UE_Mixed_r17(enc, value.pdcch_BlindDetectionCG_UE_Mixed_r17);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_BlindDetectionMixed_r17(Decoder& dec, PDCCH_BlindDetectionMixed_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_PDCCH_BlindDetectionCA_Mixed_r17(dec, value.pdcch_BlindDetectionCA_Mixed_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_PDCCH_BlindDetectionMixed_r17_Pdcch_BlindDetectionCG_UE_Mixed_r17(dec, value.pdcch_BlindDetectionCG_UE_Mixed_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_BlindDetectionMixed_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_BlindDetectionMixed_r17(PDCCH_BlindDetectionMixed_r17& value)
{
    if (value.has_pdcch_BlindDetectionCA_Mixed_r17) {
        Free_PDCCH_BlindDetectionCA_Mixed_r17(value.pdcch_BlindDetectionCA_Mixed_r17);
    }
    if (value.has_pdcch_BlindDetectionCG_UE_Mixed_r17) {
        Free_PDCCH_BlindDetectionMixed_r17_Pdcch_BlindDetectionCG_UE_Mixed_r17(value.pdcch_BlindDetectionCG_UE_Mixed_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_BlindDetectionCA_Mixed1_r17：ASN.1 PDCCH-BlindDetectionCA-Mixed1-r17；源文件第 15388 行；SEQUENCE。
// Encode_PDCCH_BlindDetectionCA_Mixed1_r17 只读不分配；Decode_PDCCH_BlindDetectionCA_Mixed1_r17 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_BlindDetectionCA_Mixed1_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_BlindDetectionCA_Mixed1_r17(Encoder& enc, const PDCCH_BlindDetectionCA_Mixed1_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_pdcch_BlindDetectionCA1_r17);
    enc.WriteBit(value.has_pdcch_BlindDetectionCA2_r17);
    enc.WriteBit(value.has_pdcch_BlindDetectionCA3_r17);
    if (value.has_pdcch_BlindDetectionCA1_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCA1_r17), 1, 15);
    }
    if (value.has_pdcch_BlindDetectionCA2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCA2_r17), 1, 15);
    }
    if (value.has_pdcch_BlindDetectionCA3_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCA3_r17), 1, 15);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_BlindDetectionCA_Mixed1_r17(Decoder& dec, PDCCH_BlindDetectionCA_Mixed1_r17& value)
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
        if (!dec.ReadConstrainedInteger(1, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionCA1_r17 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionCA2_r17 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionCA3_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_BlindDetectionCA_Mixed1_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_BlindDetectionCA_Mixed1_r17(PDCCH_BlindDetectionCA_Mixed1_r17& value)
{
    if (value.has_pdcch_BlindDetectionCA1_r17) {
    }
    if (value.has_pdcch_BlindDetectionCA2_r17) {
    }
    if (value.has_pdcch_BlindDetectionCA3_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_BlindDetectionCG_UE_Mixed1_r17：ASN.1 PDCCH-BlindDetectionCG-UE-Mixed1-r17；源文件第 15382 行；SEQUENCE。
// Encode_PDCCH_BlindDetectionCG_UE_Mixed1_r17 只读不分配；Decode_PDCCH_BlindDetectionCG_UE_Mixed1_r17 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_BlindDetectionCG_UE_Mixed1_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_BlindDetectionCG_UE_Mixed1_r17(Encoder& enc, const PDCCH_BlindDetectionCG_UE_Mixed1_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCG_UE1_r17), 0, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCG_UE2_r17), 0, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCG_UE3_r17), 0, 15);
    return enc.Error();
}

ErrorCode Decode_PDCCH_BlindDetectionCG_UE_Mixed1_r17(Decoder& dec, PDCCH_BlindDetectionCG_UE_Mixed1_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionCG_UE1_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionCG_UE2_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionCG_UE3_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_BlindDetectionCG_UE_Mixed1_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_BlindDetectionCG_UE_Mixed1_r17(PDCCH_BlindDetectionCG_UE_Mixed1_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_BlindDetectionMixed1_r17_Pdcch_BlindDetectionCG_UE_Mixed1_r17：ASN.1 pdcch-BlindDetectionCG-UE-Mixed1-r17；源文件第 15376 行；SEQUENCE。
// Encode_PDCCH_BlindDetectionMixed1_r17_Pdcch_BlindDetectionCG_UE_Mixed1_r17 只读不分配；Decode_PDCCH_BlindDetectionMixed1_r17_Pdcch_BlindDetectionCG_UE_Mixed1_r17 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_BlindDetectionMixed1_r17_Pdcch_BlindDetectionCG_UE_Mixed1_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_BlindDetectionMixed1_r17_Pdcch_BlindDetectionCG_UE_Mixed1_r17(Encoder& enc, const PDCCH_BlindDetectionMixed1_r17_Pdcch_BlindDetectionCG_UE_Mixed1_r17& value)
{
    (void)value;
    Encode_PDCCH_BlindDetectionCG_UE_Mixed1_r17(enc, value.pdcch_BlindDetectionMCG_UE_Mixed1_v17);
    Encode_PDCCH_BlindDetectionCG_UE_Mixed1_r17(enc, value.pdcch_BlindDetectionSCG_UE_Mixed1_v17);
    return enc.Error();
}

ErrorCode Decode_PDCCH_BlindDetectionMixed1_r17_Pdcch_BlindDetectionCG_UE_Mixed1_r17(Decoder& dec, PDCCH_BlindDetectionMixed1_r17_Pdcch_BlindDetectionCG_UE_Mixed1_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_PDCCH_BlindDetectionCG_UE_Mixed1_r17(dec, value.pdcch_BlindDetectionMCG_UE_Mixed1_v17) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_PDCCH_BlindDetectionCG_UE_Mixed1_r17(dec, value.pdcch_BlindDetectionSCG_UE_Mixed1_v17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_BlindDetectionMixed1_r17_Pdcch_BlindDetectionCG_UE_Mixed1_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_BlindDetectionMixed1_r17_Pdcch_BlindDetectionCG_UE_Mixed1_r17(PDCCH_BlindDetectionMixed1_r17_Pdcch_BlindDetectionCG_UE_Mixed1_r17& value)
{
    Free_PDCCH_BlindDetectionCG_UE_Mixed1_r17(value.pdcch_BlindDetectionMCG_UE_Mixed1_v17);
    Free_PDCCH_BlindDetectionCG_UE_Mixed1_r17(value.pdcch_BlindDetectionSCG_UE_Mixed1_v17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_BlindDetectionMixed1_r17：ASN.1 PDCCH-BlindDetectionMixed1-r17；源文件第 15374 行；SEQUENCE。
// Encode_PDCCH_BlindDetectionMixed1_r17 只读不分配；Decode_PDCCH_BlindDetectionMixed1_r17 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_BlindDetectionMixed1_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_BlindDetectionMixed1_r17(Encoder& enc, const PDCCH_BlindDetectionMixed1_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_pdcch_BlindDetectionCA_Mixed1_r17);
    enc.WriteBit(value.has_pdcch_BlindDetectionCG_UE_Mixed1_r17);
    if (value.has_pdcch_BlindDetectionCA_Mixed1_r17) {
        Encode_PDCCH_BlindDetectionCA_Mixed1_r17(enc, value.pdcch_BlindDetectionCA_Mixed1_r17);
    }
    if (value.has_pdcch_BlindDetectionCG_UE_Mixed1_r17) {
        Encode_PDCCH_BlindDetectionMixed1_r17_Pdcch_BlindDetectionCG_UE_Mixed1_r17(enc, value.pdcch_BlindDetectionCG_UE_Mixed1_r17);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_BlindDetectionMixed1_r17(Decoder& dec, PDCCH_BlindDetectionMixed1_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_PDCCH_BlindDetectionCA_Mixed1_r17(dec, value.pdcch_BlindDetectionCA_Mixed1_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_PDCCH_BlindDetectionMixed1_r17_Pdcch_BlindDetectionCG_UE_Mixed1_r17(dec, value.pdcch_BlindDetectionCG_UE_Mixed1_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_BlindDetectionMixed1_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_BlindDetectionMixed1_r17(PDCCH_BlindDetectionMixed1_r17& value)
{
    if (value.has_pdcch_BlindDetectionCA_Mixed1_r17) {
        Free_PDCCH_BlindDetectionCA_Mixed1_r17(value.pdcch_BlindDetectionCA_Mixed1_r17);
    }
    if (value.has_pdcch_BlindDetectionCG_UE_Mixed1_r17) {
        Free_PDCCH_BlindDetectionMixed1_r17_Pdcch_BlindDetectionCG_UE_Mixed1_r17(value.pdcch_BlindDetectionCG_UE_Mixed1_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_BlindDetectionCG_UE_Mixed_r18：ASN.1 PDCCH-BlindDetectionCG-UE-Mixed-r18；源文件第 15404 行；SEQUENCE。
// Encode_PDCCH_BlindDetectionCG_UE_Mixed_r18 只读不分配；Decode_PDCCH_BlindDetectionCG_UE_Mixed_r18 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_BlindDetectionCG_UE_Mixed_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_BlindDetectionCG_UE_Mixed_r18(Encoder& enc, const PDCCH_BlindDetectionCG_UE_Mixed_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCG_UE1_r18), 0, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCG_UE2_r18), 0, 15);
    return enc.Error();
}

ErrorCode Decode_PDCCH_BlindDetectionCG_UE_Mixed_r18(Decoder& dec, PDCCH_BlindDetectionCG_UE_Mixed_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionCG_UE1_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionCG_UE2_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_BlindDetectionCG_UE_Mixed_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_BlindDetectionCG_UE_Mixed_r18(PDCCH_BlindDetectionCG_UE_Mixed_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_BlindDetectionMCG_SCG_r18：ASN.1 PDCCH-BlindDetectionMCG-SCG-r18；源文件第 15394 行；SEQUENCE。
// Encode_PDCCH_BlindDetectionMCG_SCG_r18 只读不分配；Decode_PDCCH_BlindDetectionMCG_SCG_r18 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_BlindDetectionMCG_SCG_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_BlindDetectionMCG_SCG_r18(Encoder& enc, const PDCCH_BlindDetectionMCG_SCG_r18& value)
{
    (void)value;
    Encode_PDCCH_BlindDetectionCG_UE_Mixed_r18(enc, value.pdcch_BlindDetectionMCG_UE_Mixed_r18);
    Encode_PDCCH_BlindDetectionCG_UE_Mixed_r18(enc, value.pdcch_BlindDetectionSCG_UE_Mixed_r18);
    return enc.Error();
}

ErrorCode Decode_PDCCH_BlindDetectionMCG_SCG_r18(Decoder& dec, PDCCH_BlindDetectionMCG_SCG_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_PDCCH_BlindDetectionCG_UE_Mixed_r18(dec, value.pdcch_BlindDetectionMCG_UE_Mixed_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_PDCCH_BlindDetectionCG_UE_Mixed_r18(dec, value.pdcch_BlindDetectionSCG_UE_Mixed_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_BlindDetectionMCG_SCG_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_BlindDetectionMCG_SCG_r18(PDCCH_BlindDetectionMCG_SCG_r18& value)
{
    Free_PDCCH_BlindDetectionCG_UE_Mixed_r18(value.pdcch_BlindDetectionMCG_UE_Mixed_r18);
    Free_PDCCH_BlindDetectionCG_UE_Mixed_r18(value.pdcch_BlindDetectionSCG_UE_Mixed_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_BlindDetectionCA_Mixed_r18：ASN.1 PDCCH-BlindDetectionCA-Mixed-r18；源文件第 15399 行；SEQUENCE。
// Encode_PDCCH_BlindDetectionCA_Mixed_r18 只读不分配；Decode_PDCCH_BlindDetectionCA_Mixed_r18 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_BlindDetectionCA_Mixed_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_BlindDetectionCA_Mixed_r18(Encoder& enc, const PDCCH_BlindDetectionCA_Mixed_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCA1_r18), 1, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_BlindDetectionCA2_r18), 1, 15);
    return enc.Error();
}

ErrorCode Decode_PDCCH_BlindDetectionCA_Mixed_r18(Decoder& dec, PDCCH_BlindDetectionCA_Mixed_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionCA1_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 15, tmp_value)) { goto fail; }
        value.pdcch_BlindDetectionCA2_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_BlindDetectionCA_Mixed_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_BlindDetectionCA_Mixed_r18(PDCCH_BlindDetectionCA_Mixed_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TwoPUCCH_Grp_ConfigParams_r16：ASN.1 TwoPUCCH-Grp-ConfigParams-r16；源文件第 15425 行；SEQUENCE。
// Encode_TwoPUCCH_Grp_ConfigParams_r16 只读不分配；Decode_TwoPUCCH_Grp_ConfigParams_r16 可能 malloc（失败时内部已释放并清零）；Free_TwoPUCCH_Grp_ConfigParams_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TwoPUCCH_Grp_ConfigParams_r16(Encoder& enc, const TwoPUCCH_Grp_ConfigParams_r16& value)
{
    (void)value;
    Encode_PUCCH_Grp_CarrierTypes_r16(enc, value.pucch_GroupMapping_r16);
    Encode_PUCCH_Grp_CarrierTypes_r16(enc, value.pucch_TX_r16);
    return enc.Error();
}

ErrorCode Decode_TwoPUCCH_Grp_ConfigParams_r16(Decoder& dec, TwoPUCCH_Grp_ConfigParams_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_PUCCH_Grp_CarrierTypes_r16(dec, value.pucch_GroupMapping_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_PUCCH_Grp_CarrierTypes_r16(dec, value.pucch_TX_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_TwoPUCCH_Grp_ConfigParams_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TwoPUCCH_Grp_ConfigParams_r16(TwoPUCCH_Grp_ConfigParams_r16& value)
{
    Free_PUCCH_Grp_CarrierTypes_r16(value.pucch_GroupMapping_r16);
    Free_PUCCH_Grp_CarrierTypes_r16(value.pucch_TX_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TwoPUCCH_Grp_Configurations_r16：ASN.1 TwoPUCCH-Grp-Configurations-r16；源文件第 15415 行；SEQUENCE。
// Encode_TwoPUCCH_Grp_Configurations_r16 只读不分配；Decode_TwoPUCCH_Grp_Configurations_r16 可能 malloc（失败时内部已释放并清零）；Free_TwoPUCCH_Grp_Configurations_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TwoPUCCH_Grp_Configurations_r16(Encoder& enc, const TwoPUCCH_Grp_Configurations_r16& value)
{
    (void)value;
    Encode_TwoPUCCH_Grp_ConfigParams_r16(enc, value.pucch_PrimaryGroupMapping_r16);
    Encode_TwoPUCCH_Grp_ConfigParams_r16(enc, value.pucch_SecondaryGroupMapping_r16);
    return enc.Error();
}

ErrorCode Decode_TwoPUCCH_Grp_Configurations_r16(Decoder& dec, TwoPUCCH_Grp_Configurations_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_TwoPUCCH_Grp_ConfigParams_r16(dec, value.pucch_PrimaryGroupMapping_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_TwoPUCCH_Grp_ConfigParams_r16(dec, value.pucch_SecondaryGroupMapping_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_TwoPUCCH_Grp_Configurations_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TwoPUCCH_Grp_Configurations_r16(TwoPUCCH_Grp_Configurations_r16& value)
{
    Free_TwoPUCCH_Grp_ConfigParams_r16(value.pucch_PrimaryGroupMapping_r16);
    Free_TwoPUCCH_Grp_ConfigParams_r16(value.pucch_SecondaryGroupMapping_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TwoPUCCH_Grp_Configurations_r17：ASN.1 TwoPUCCH-Grp-Configurations-r17；源文件第 15420 行；SEQUENCE。
// Encode_TwoPUCCH_Grp_Configurations_r17 只读不分配；Decode_TwoPUCCH_Grp_Configurations_r17 可能 malloc（失败时内部已释放并清零）；Free_TwoPUCCH_Grp_Configurations_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TwoPUCCH_Grp_Configurations_r17(Encoder& enc, const TwoPUCCH_Grp_Configurations_r17& value)
{
    (void)value;
    Encode_PUCCH_Group_Config_r17(enc, value.primaryPUCCH_GroupConfig_r17);
    Encode_PUCCH_Group_Config_r17(enc, value.secondaryPUCCH_GroupConfig_r17);
    return enc.Error();
}

ErrorCode Decode_TwoPUCCH_Grp_Configurations_r17(Decoder& dec, TwoPUCCH_Grp_Configurations_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_PUCCH_Group_Config_r17(dec, value.primaryPUCCH_GroupConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_PUCCH_Group_Config_r17(dec, value.secondaryPUCCH_GroupConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_TwoPUCCH_Grp_Configurations_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TwoPUCCH_Grp_Configurations_r17(TwoPUCCH_Grp_Configurations_r17& value)
{
    Free_PUCCH_Group_Config_r17(value.primaryPUCCH_GroupConfig_r17);
    Free_PUCCH_Group_Config_r17(value.secondaryPUCCH_GroupConfig_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CarrierTypePair_r16：ASN.1 CarrierTypePair-r16；源文件第 15431 行；SEQUENCE。
// Encode_CarrierTypePair_r16 只读不分配；Decode_CarrierTypePair_r16 可能 malloc（失败时内部已释放并清零）；Free_CarrierTypePair_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CarrierTypePair_r16(Encoder& enc, const CarrierTypePair_r16& value)
{
    (void)value;
    Encode_PUCCH_Grp_CarrierTypes_r16(enc, value.carrierForCSI_Measurement_r16);
    Encode_PUCCH_Grp_CarrierTypes_r16(enc, value.carrierForCSI_Reporting_r16);
    return enc.Error();
}

ErrorCode Decode_CarrierTypePair_r16(Decoder& dec, CarrierTypePair_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_PUCCH_Grp_CarrierTypes_r16(dec, value.carrierForCSI_Measurement_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_PUCCH_Grp_CarrierTypes_r16(dec, value.carrierForCSI_Reporting_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CarrierTypePair_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CarrierTypePair_r16(CarrierTypePair_r16& value)
{
    Free_PUCCH_Grp_CarrierTypes_r16(value.carrierForCSI_Measurement_r16);
    Free_PUCCH_Grp_CarrierTypes_r16(value.carrierForCSI_Reporting_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CombinationCarrierType_r18：ASN.1 CombinationCarrierType-r18；源文件第 15449 行；SEQUENCE。
// Encode_CombinationCarrierType_r18 只读不分配；Decode_CombinationCarrierType_r18 可能 malloc（失败时内部已释放并清零）；Free_CombinationCarrierType_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CombinationCarrierType_r18(Encoder& enc, const CombinationCarrierType_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.schedulingCellCarrierType_r18), 0, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.scheduledCellCarrierType_r18), 0, 4);
    return enc.Error();
}

ErrorCode Decode_CombinationCarrierType_r18(Decoder& dec, CombinationCarrierType_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.schedulingCellCarrierType_r18 = (CombinationCarrierType_r18_SchedulingCellCarrierType_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.scheduledCellCarrierType_r18 = (CombinationCarrierType_r18_ScheduledCellCarrierType_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CombinationCarrierType_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CombinationCarrierType_r18(CombinationCarrierType_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_BlindDetectionMixed1_r18_Pdcch_BlindDetectionCG_UE_Mixed_r18：ASN.1 pdcch-BlindDetectionCG-UE-Mixed-r18；源文件第 15531 行；SEQUENCE。
// Encode_PDCCH_BlindDetectionMixed1_r18_Pdcch_BlindDetectionCG_UE_Mixed_r18 只读不分配；Decode_PDCCH_BlindDetectionMixed1_r18_Pdcch_BlindDetectionCG_UE_Mixed_r18 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_BlindDetectionMixed1_r18_Pdcch_BlindDetectionCG_UE_Mixed_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_BlindDetectionMixed1_r18_Pdcch_BlindDetectionCG_UE_Mixed_r18(Encoder& enc, const PDCCH_BlindDetectionMixed1_r18_Pdcch_BlindDetectionCG_UE_Mixed_r18& value)
{
    (void)value;
    Encode_PDCCH_BlindDetectionCG_UE_Mixed_r18(enc, value.pdcch_BlindDetectionMCG_UE_Mixed_r18);
    Encode_PDCCH_BlindDetectionCG_UE_Mixed_r18(enc, value.pdcch_BlindDetectionSCG_UE_Mixed_r18);
    return enc.Error();
}

ErrorCode Decode_PDCCH_BlindDetectionMixed1_r18_Pdcch_BlindDetectionCG_UE_Mixed_r18(Decoder& dec, PDCCH_BlindDetectionMixed1_r18_Pdcch_BlindDetectionCG_UE_Mixed_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_PDCCH_BlindDetectionCG_UE_Mixed_r18(dec, value.pdcch_BlindDetectionMCG_UE_Mixed_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_PDCCH_BlindDetectionCG_UE_Mixed_r18(dec, value.pdcch_BlindDetectionSCG_UE_Mixed_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_BlindDetectionMixed1_r18_Pdcch_BlindDetectionCG_UE_Mixed_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_BlindDetectionMixed1_r18_Pdcch_BlindDetectionCG_UE_Mixed_r18(PDCCH_BlindDetectionMixed1_r18_Pdcch_BlindDetectionCG_UE_Mixed_r18& value)
{
    Free_PDCCH_BlindDetectionCG_UE_Mixed_r18(value.pdcch_BlindDetectionMCG_UE_Mixed_r18);
    Free_PDCCH_BlindDetectionCG_UE_Mixed_r18(value.pdcch_BlindDetectionSCG_UE_Mixed_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_BlindDetectionMixed1_r18：ASN.1 PDCCH-BlindDetectionMixed1-r18；源文件第 15530 行；SEQUENCE。
// Encode_PDCCH_BlindDetectionMixed1_r18 只读不分配；Decode_PDCCH_BlindDetectionMixed1_r18 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_BlindDetectionMixed1_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_BlindDetectionMixed1_r18(Encoder& enc, const PDCCH_BlindDetectionMixed1_r18& value)
{
    (void)value;
    Encode_PDCCH_BlindDetectionMixed1_r18_Pdcch_BlindDetectionCG_UE_Mixed_r18(enc, value.pdcch_BlindDetectionCG_UE_Mixed_r18);
    return enc.Error();
}

ErrorCode Decode_PDCCH_BlindDetectionMixed1_r18(Decoder& dec, PDCCH_BlindDetectionMixed1_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_PDCCH_BlindDetectionMixed1_r18_Pdcch_BlindDetectionCG_UE_Mixed_r18(dec, value.pdcch_BlindDetectionCG_UE_Mixed_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_BlindDetectionMixed1_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_BlindDetectionMixed1_r18(PDCCH_BlindDetectionMixed1_r18& value)
{
    Free_PDCCH_BlindDetectionMixed1_r18_Pdcch_BlindDetectionCG_UE_Mixed_r18(value.pdcch_BlindDetectionCG_UE_Mixed_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CarrierAggregationVariant：ASN.1 CarrierAggregationVariant；源文件第 15540 行；SEQUENCE。
// Encode_CarrierAggregationVariant 只读不分配；Decode_CarrierAggregationVariant 可能 malloc（失败时内部已释放并清零）；Free_CarrierAggregationVariant 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CarrierAggregationVariant(Encoder& enc, const CarrierAggregationVariant& value)
{
    (void)value;
    enc.WriteBit(value.has_fr1fdd_FR1TDD_CA_SpCellOnFR1FDD);
    enc.WriteBit(value.has_fr1fdd_FR1TDD_CA_SpCellOnFR1TDD);
    enc.WriteBit(value.has_fr1fdd_FR2TDD_CA_SpCellOnFR1FDD);
    enc.WriteBit(value.has_fr1fdd_FR2TDD_CA_SpCellOnFR2TDD);
    enc.WriteBit(value.has_fr1tdd_FR2TDD_CA_SpCellOnFR1TDD);
    enc.WriteBit(value.has_fr1tdd_FR2TDD_CA_SpCellOnFR2TDD);
    enc.WriteBit(value.has_fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1FDD);
    enc.WriteBit(value.has_fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1TDD);
    enc.WriteBit(value.has_fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR2TDD);
    if (value.has_fr1fdd_FR1TDD_CA_SpCellOnFR1FDD) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fr1fdd_FR1TDD_CA_SpCellOnFR1FDD), 0, 0);
    }
    if (value.has_fr1fdd_FR1TDD_CA_SpCellOnFR1TDD) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fr1fdd_FR1TDD_CA_SpCellOnFR1TDD), 0, 0);
    }
    if (value.has_fr1fdd_FR2TDD_CA_SpCellOnFR1FDD) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fr1fdd_FR2TDD_CA_SpCellOnFR1FDD), 0, 0);
    }
    if (value.has_fr1fdd_FR2TDD_CA_SpCellOnFR2TDD) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fr1fdd_FR2TDD_CA_SpCellOnFR2TDD), 0, 0);
    }
    if (value.has_fr1tdd_FR2TDD_CA_SpCellOnFR1TDD) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fr1tdd_FR2TDD_CA_SpCellOnFR1TDD), 0, 0);
    }
    if (value.has_fr1tdd_FR2TDD_CA_SpCellOnFR2TDD) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fr1tdd_FR2TDD_CA_SpCellOnFR2TDD), 0, 0);
    }
    if (value.has_fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1FDD) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1FDD), 0, 0);
    }
    if (value.has_fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1TDD) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1TDD), 0, 0);
    }
    if (value.has_fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR2TDD) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR2TDD), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CarrierAggregationVariant(Decoder& dec, CarrierAggregationVariant& value)
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
        value.fr1fdd_FR1TDD_CA_SpCellOnFR1FDD = (CarrierAggregationVariant_Fr1fdd_FR1TDD_CA_SpCellOnFR1FDD)0;
    }
    if (present_1) {
        value.fr1fdd_FR1TDD_CA_SpCellOnFR1TDD = (CarrierAggregationVariant_Fr1fdd_FR1TDD_CA_SpCellOnFR1TDD)0;
    }
    if (present_2) {
        value.fr1fdd_FR2TDD_CA_SpCellOnFR1FDD = (CarrierAggregationVariant_Fr1fdd_FR2TDD_CA_SpCellOnFR1FDD)0;
    }
    if (present_3) {
        value.fr1fdd_FR2TDD_CA_SpCellOnFR2TDD = (CarrierAggregationVariant_Fr1fdd_FR2TDD_CA_SpCellOnFR2TDD)0;
    }
    if (present_4) {
        value.fr1tdd_FR2TDD_CA_SpCellOnFR1TDD = (CarrierAggregationVariant_Fr1tdd_FR2TDD_CA_SpCellOnFR1TDD)0;
    }
    if (present_5) {
        value.fr1tdd_FR2TDD_CA_SpCellOnFR2TDD = (CarrierAggregationVariant_Fr1tdd_FR2TDD_CA_SpCellOnFR2TDD)0;
    }
    if (present_6) {
        value.fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1FDD = (CarrierAggregationVariant_Fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1FDD)0;
    }
    if (present_7) {
        value.fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1TDD = (CarrierAggregationVariant_Fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1TDD)0;
    }
    if (present_8) {
        value.fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR2TDD = (CarrierAggregationVariant_Fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR2TDD)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CarrierAggregationVariant(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CarrierAggregationVariant(CarrierAggregationVariant& value)
{
    if (value.has_fr1fdd_FR1TDD_CA_SpCellOnFR1FDD) {
    }
    if (value.has_fr1fdd_FR1TDD_CA_SpCellOnFR1TDD) {
    }
    if (value.has_fr1fdd_FR2TDD_CA_SpCellOnFR1FDD) {
    }
    if (value.has_fr1fdd_FR2TDD_CA_SpCellOnFR2TDD) {
    }
    if (value.has_fr1tdd_FR2TDD_CA_SpCellOnFR1TDD) {
    }
    if (value.has_fr1tdd_FR2TDD_CA_SpCellOnFR2TDD) {
    }
    if (value.has_fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1FDD) {
    }
    if (value.has_fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1TDD) {
    }
    if (value.has_fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR2TDD) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookParameters_Type1_SinglePanel：ASN.1 type1/singlePanel；源文件第 15557 行；SEQUENCE。
// Encode_CodebookParameters_Type1_SinglePanel 只读不分配；Decode_CodebookParameters_Type1_SinglePanel 可能 malloc（失败时内部已释放并清零）；Free_CodebookParameters_Type1_SinglePanel 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookParameters_Type1_SinglePanel(Encoder& enc, const CodebookParameters_Type1_SinglePanel& value)
{
    (void)value;
enc.WriteConstrainedLength(value.supportedCSI_RS_ResourceList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceList_count; ++i) {
    Encode_SupportedCSI_RS_Resource(enc, value.supportedCSI_RS_ResourceList_items[i]);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.modes), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCSI_RS_PerResourceSet), 1, 8);
    return enc.Error();
}

ErrorCode Decode_CodebookParameters_Type1_SinglePanel(Decoder& dec, CodebookParameters_Type1_SinglePanel& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ResourceList_count)) { goto fail; }
if (value.supportedCSI_RS_ResourceList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ResourceList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ResourceList_count > 0u) {
    value.supportedCSI_RS_ResourceList_items = (SupportedCSI_RS_Resource*)std::malloc((std::size_t)value.supportedCSI_RS_ResourceList_count * sizeof(SupportedCSI_RS_Resource));
    if (value.supportedCSI_RS_ResourceList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ResourceList_items, 0, (std::size_t)value.supportedCSI_RS_ResourceList_count * sizeof(SupportedCSI_RS_Resource));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceList_count; ++i) {
    if (Decode_SupportedCSI_RS_Resource(dec, value.supportedCSI_RS_ResourceList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.modes = (CodebookParameters_Type1_SinglePanel_Modes)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumberCSI_RS_PerResourceSet = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParameters_Type1_SinglePanel(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParameters_Type1_SinglePanel(CodebookParameters_Type1_SinglePanel& value)
{
    if (value.supportedCSI_RS_ResourceList_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceList_count; ++i) {
            Free_SupportedCSI_RS_Resource(value.supportedCSI_RS_ResourceList_items[i]);
        }
        std::free(value.supportedCSI_RS_ResourceList_items);
        value.supportedCSI_RS_ResourceList_items = nullptr;
    }
    value.supportedCSI_RS_ResourceList_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookParameters_Type1_MultiPanel：ASN.1 type1/multiPanel；源文件第 15562 行；SEQUENCE。
// Encode_CodebookParameters_Type1_MultiPanel 只读不分配；Decode_CodebookParameters_Type1_MultiPanel 可能 malloc（失败时内部已释放并清零）；Free_CodebookParameters_Type1_MultiPanel 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookParameters_Type1_MultiPanel(Encoder& enc, const CodebookParameters_Type1_MultiPanel& value)
{
    (void)value;
enc.WriteConstrainedLength(value.supportedCSI_RS_ResourceList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceList_count; ++i) {
    Encode_SupportedCSI_RS_Resource(enc, value.supportedCSI_RS_ResourceList_items[i]);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.modes), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofPanels), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCSI_RS_PerResourceSet), 1, 8);
    return enc.Error();
}

ErrorCode Decode_CodebookParameters_Type1_MultiPanel(Decoder& dec, CodebookParameters_Type1_MultiPanel& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ResourceList_count)) { goto fail; }
if (value.supportedCSI_RS_ResourceList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ResourceList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ResourceList_count > 0u) {
    value.supportedCSI_RS_ResourceList_items = (SupportedCSI_RS_Resource*)std::malloc((std::size_t)value.supportedCSI_RS_ResourceList_count * sizeof(SupportedCSI_RS_Resource));
    if (value.supportedCSI_RS_ResourceList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ResourceList_items, 0, (std::size_t)value.supportedCSI_RS_ResourceList_count * sizeof(SupportedCSI_RS_Resource));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceList_count; ++i) {
    if (Decode_SupportedCSI_RS_Resource(dec, value.supportedCSI_RS_ResourceList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.modes = (CodebookParameters_Type1_MultiPanel_Modes)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.nrofPanels = (CodebookParameters_Type1_MultiPanel_NrofPanels)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumberCSI_RS_PerResourceSet = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParameters_Type1_MultiPanel(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParameters_Type1_MultiPanel(CodebookParameters_Type1_MultiPanel& value)
{
    if (value.supportedCSI_RS_ResourceList_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceList_count; ++i) {
            Free_SupportedCSI_RS_Resource(value.supportedCSI_RS_ResourceList_items[i]);
        }
        std::free(value.supportedCSI_RS_ResourceList_items);
        value.supportedCSI_RS_ResourceList_items = nullptr;
    }
    value.supportedCSI_RS_ResourceList_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookParameters_Type1：ASN.1 type1；源文件第 15556 行；SEQUENCE。
// Encode_CodebookParameters_Type1 只读不分配；Decode_CodebookParameters_Type1 可能 malloc（失败时内部已释放并清零）；Free_CodebookParameters_Type1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookParameters_Type1(Encoder& enc, const CodebookParameters_Type1& value)
{
    (void)value;
    enc.WriteBit(value.has_multiPanel);
    Encode_CodebookParameters_Type1_SinglePanel(enc, value.singlePanel);
    if (value.has_multiPanel) {
        Encode_CodebookParameters_Type1_MultiPanel(enc, value.multiPanel);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookParameters_Type1(Decoder& dec, CodebookParameters_Type1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_CodebookParameters_Type1_SinglePanel(dec, value.singlePanel) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_CodebookParameters_Type1_MultiPanel(dec, value.multiPanel) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParameters_Type1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParameters_Type1(CodebookParameters_Type1& value)
{
    Free_CodebookParameters_Type1_SinglePanel(value.singlePanel);
    if (value.has_multiPanel) {
        Free_CodebookParameters_Type1_MultiPanel(value.multiPanel);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookParameters_Type2：ASN.1 type2；源文件第 15569 行；SEQUENCE。
// Encode_CodebookParameters_Type2 只读不分配；Decode_CodebookParameters_Type2 可能 malloc（失败时内部已释放并清零）；Free_CodebookParameters_Type2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookParameters_Type2(Encoder& enc, const CodebookParameters_Type2& value)
{
    (void)value;
    enc.WriteBit(value.has_amplitudeSubsetRestriction);
enc.WriteConstrainedLength(value.supportedCSI_RS_ResourceList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceList_count; ++i) {
    Encode_SupportedCSI_RS_Resource(enc, value.supportedCSI_RS_ResourceList_items[i]);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.parameterLx), 2, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.amplitudeScalingType), 0, 1);
    if (value.has_amplitudeSubsetRestriction) {
        enc.WriteConstrainedInteger((std::int64_t)(value.amplitudeSubsetRestriction), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookParameters_Type2(Decoder& dec, CodebookParameters_Type2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ResourceList_count)) { goto fail; }
if (value.supportedCSI_RS_ResourceList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ResourceList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ResourceList_count > 0u) {
    value.supportedCSI_RS_ResourceList_items = (SupportedCSI_RS_Resource*)std::malloc((std::size_t)value.supportedCSI_RS_ResourceList_count * sizeof(SupportedCSI_RS_Resource));
    if (value.supportedCSI_RS_ResourceList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ResourceList_items, 0, (std::size_t)value.supportedCSI_RS_ResourceList_count * sizeof(SupportedCSI_RS_Resource));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceList_count; ++i) {
    if (Decode_SupportedCSI_RS_Resource(dec, value.supportedCSI_RS_ResourceList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.parameterLx = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.amplitudeScalingType = (CodebookParameters_Type2_AmplitudeScalingType)tmp_value;
    }
    if (present_0) {
        value.amplitudeSubsetRestriction = (CodebookParameters_Type2_AmplitudeSubsetRestriction)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParameters_Type2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParameters_Type2(CodebookParameters_Type2& value)
{
    if (value.supportedCSI_RS_ResourceList_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceList_count; ++i) {
            Free_SupportedCSI_RS_Resource(value.supportedCSI_RS_ResourceList_items[i]);
        }
        std::free(value.supportedCSI_RS_ResourceList_items);
        value.supportedCSI_RS_ResourceList_items = nullptr;
    }
    value.supportedCSI_RS_ResourceList_count = 0;
    if (value.has_amplitudeSubsetRestriction) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookParameters_Type2_PortSelection：ASN.1 type2-PortSelection；源文件第 15575 行；SEQUENCE。
// Encode_CodebookParameters_Type2_PortSelection 只读不分配；Decode_CodebookParameters_Type2_PortSelection 可能 malloc（失败时内部已释放并清零）；Free_CodebookParameters_Type2_PortSelection 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookParameters_Type2_PortSelection(Encoder& enc, const CodebookParameters_Type2_PortSelection& value)
{
    (void)value;
enc.WriteConstrainedLength(value.supportedCSI_RS_ResourceList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceList_count; ++i) {
    Encode_SupportedCSI_RS_Resource(enc, value.supportedCSI_RS_ResourceList_items[i]);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.parameterLx), 2, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.amplitudeScalingType), 0, 1);
    return enc.Error();
}

ErrorCode Decode_CodebookParameters_Type2_PortSelection(Decoder& dec, CodebookParameters_Type2_PortSelection& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ResourceList_count)) { goto fail; }
if (value.supportedCSI_RS_ResourceList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ResourceList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ResourceList_count > 0u) {
    value.supportedCSI_RS_ResourceList_items = (SupportedCSI_RS_Resource*)std::malloc((std::size_t)value.supportedCSI_RS_ResourceList_count * sizeof(SupportedCSI_RS_Resource));
    if (value.supportedCSI_RS_ResourceList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ResourceList_items, 0, (std::size_t)value.supportedCSI_RS_ResourceList_count * sizeof(SupportedCSI_RS_Resource));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceList_count; ++i) {
    if (Decode_SupportedCSI_RS_Resource(dec, value.supportedCSI_RS_ResourceList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.parameterLx = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.amplitudeScalingType = (CodebookParameters_Type2_PortSelection_AmplitudeScalingType)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParameters_Type2_PortSelection(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParameters_Type2_PortSelection(CodebookParameters_Type2_PortSelection& value)
{
    if (value.supportedCSI_RS_ResourceList_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceList_count; ++i) {
            Free_SupportedCSI_RS_Resource(value.supportedCSI_RS_ResourceList_items[i]);
        }
        std::free(value.supportedCSI_RS_ResourceList_items);
        value.supportedCSI_RS_ResourceList_items = nullptr;
    }
    value.supportedCSI_RS_ResourceList_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookParameters：ASN.1 CodebookParameters；源文件第 15555 行；SEQUENCE。
// Encode_CodebookParameters 只读不分配；Decode_CodebookParameters 可能 malloc（失败时内部已释放并清零）；Free_CodebookParameters 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookParameters(Encoder& enc, const CodebookParameters& value)
{
    (void)value;
    enc.WriteBit(value.has_type2);
    enc.WriteBit(value.has_type2_PortSelection);
    Encode_CodebookParameters_Type1(enc, value.type1);
    if (value.has_type2) {
        Encode_CodebookParameters_Type2(enc, value.type2);
    }
    if (value.has_type2_PortSelection) {
        Encode_CodebookParameters_Type2_PortSelection(enc, value.type2_PortSelection);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookParameters(Decoder& dec, CodebookParameters& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        if (Decode_CodebookParameters_Type1(dec, value.type1) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_CodebookParameters_Type2(dec, value.type2) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CodebookParameters_Type2_PortSelection(dec, value.type2_PortSelection) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParameters(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParameters(CodebookParameters& value)
{
    Free_CodebookParameters_Type1(value.type1);
    if (value.has_type2) {
        Free_CodebookParameters_Type2(value.type2);
    }
    if (value.has_type2_PortSelection) {
        Free_CodebookParameters_Type2_PortSelection(value.type2_PortSelection);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookParametersAddition_r16_Etype2_r16_Etype2R1_r16：ASN.1 etype2-r16/etype2R1-r16；源文件第 15594 行；SEQUENCE。
// Encode_CodebookParametersAddition_r16_Etype2_r16_Etype2R1_r16 只读不分配；Decode_CodebookParametersAddition_r16_Etype2_r16_Etype2R1_r16 可能 malloc（失败时内部已释放并清零）；Free_CodebookParametersAddition_r16_Etype2_r16_Etype2R1_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookParametersAddition_r16_Etype2_r16_Etype2R1_r16(Encoder& enc, const CodebookParametersAddition_r16_Etype2_r16_Etype2R1_r16& value)
{
    (void)value;
enc.WriteConstrainedLength(value.supportedCSI_RS_ResourceListAdd_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedCSI_RS_ResourceListAdd_r16_items[i]), 0, 511);
}
    return enc.Error();
}

ErrorCode Decode_CodebookParametersAddition_r16_Etype2_r16_Etype2R1_r16(Decoder& dec, CodebookParametersAddition_r16_Etype2_r16_Etype2R1_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ResourceListAdd_r16_count)) { goto fail; }
if (value.supportedCSI_RS_ResourceListAdd_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    value.supportedCSI_RS_ResourceListAdd_r16_items = (int64_t*)std::malloc((std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
    if (value.supportedCSI_RS_ResourceListAdd_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ResourceListAdd_r16_items, 0, (std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.supportedCSI_RS_ResourceListAdd_r16_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParametersAddition_r16_Etype2_r16_Etype2R1_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParametersAddition_r16_Etype2_r16_Etype2R1_r16(CodebookParametersAddition_r16_Etype2_r16_Etype2R1_r16& value)
{
    if (value.supportedCSI_RS_ResourceListAdd_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
        }
        std::free(value.supportedCSI_RS_ResourceListAdd_r16_items);
        value.supportedCSI_RS_ResourceListAdd_r16_items = nullptr;
    }
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookParametersAddition_r16_Etype2_r16_Etype2R2_r16：ASN.1 etype2-r16/etype2R2-r16；源文件第 15599 行；SEQUENCE。
// Encode_CodebookParametersAddition_r16_Etype2_r16_Etype2R2_r16 只读不分配；Decode_CodebookParametersAddition_r16_Etype2_r16_Etype2R2_r16 可能 malloc（失败时内部已释放并清零）；Free_CodebookParametersAddition_r16_Etype2_r16_Etype2R2_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookParametersAddition_r16_Etype2_r16_Etype2R2_r16(Encoder& enc, const CodebookParametersAddition_r16_Etype2_r16_Etype2R2_r16& value)
{
    (void)value;
enc.WriteConstrainedLength(value.supportedCSI_RS_ResourceListAdd_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedCSI_RS_ResourceListAdd_r16_items[i]), 0, 511);
}
    return enc.Error();
}

ErrorCode Decode_CodebookParametersAddition_r16_Etype2_r16_Etype2R2_r16(Decoder& dec, CodebookParametersAddition_r16_Etype2_r16_Etype2R2_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ResourceListAdd_r16_count)) { goto fail; }
if (value.supportedCSI_RS_ResourceListAdd_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    value.supportedCSI_RS_ResourceListAdd_r16_items = (int64_t*)std::malloc((std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
    if (value.supportedCSI_RS_ResourceListAdd_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ResourceListAdd_r16_items, 0, (std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.supportedCSI_RS_ResourceListAdd_r16_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParametersAddition_r16_Etype2_r16_Etype2R2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParametersAddition_r16_Etype2_r16_Etype2R2_r16(CodebookParametersAddition_r16_Etype2_r16_Etype2R2_r16& value)
{
    if (value.supportedCSI_RS_ResourceListAdd_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
        }
        std::free(value.supportedCSI_RS_ResourceListAdd_r16_items);
        value.supportedCSI_RS_ResourceListAdd_r16_items = nullptr;
    }
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookParametersAddition_r16_Etype2_r16：ASN.1 etype2-r16；源文件第 15592 行；SEQUENCE。
// Encode_CodebookParametersAddition_r16_Etype2_r16 只读不分配；Decode_CodebookParametersAddition_r16_Etype2_r16 可能 malloc（失败时内部已释放并清零）；Free_CodebookParametersAddition_r16_Etype2_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookParametersAddition_r16_Etype2_r16(Encoder& enc, const CodebookParametersAddition_r16_Etype2_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_etype2R2_r16);
    enc.WriteBit(value.has_paramComb7_8_r16);
    enc.WriteBit(value.has_rank3_4_r16);
    enc.WriteBit(value.has_amplitudeSubsetRestriction_r16);
    Encode_CodebookParametersAddition_r16_Etype2_r16_Etype2R1_r16(enc, value.etype2R1_r16);
    if (value.has_etype2R2_r16) {
        Encode_CodebookParametersAddition_r16_Etype2_r16_Etype2R2_r16(enc, value.etype2R2_r16);
    }
    if (value.has_paramComb7_8_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.paramComb7_8_r16), 0, 0);
    }
    if (value.has_rank3_4_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rank3_4_r16), 0, 0);
    }
    if (value.has_amplitudeSubsetRestriction_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.amplitudeSubsetRestriction_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookParametersAddition_r16_Etype2_r16(Decoder& dec, CodebookParametersAddition_r16_Etype2_r16& value)
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
        if (Decode_CodebookParametersAddition_r16_Etype2_r16_Etype2R1_r16(dec, value.etype2R1_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_CodebookParametersAddition_r16_Etype2_r16_Etype2R2_r16(dec, value.etype2R2_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.paramComb7_8_r16 = (CodebookParametersAddition_r16_Etype2_r16_ParamComb7_8_r16)0;
    }
    if (present_2) {
        value.rank3_4_r16 = (CodebookParametersAddition_r16_Etype2_r16_Rank3_4_r16)0;
    }
    if (present_3) {
        value.amplitudeSubsetRestriction_r16 = (CodebookParametersAddition_r16_Etype2_r16_AmplitudeSubsetRestriction_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParametersAddition_r16_Etype2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParametersAddition_r16_Etype2_r16(CodebookParametersAddition_r16_Etype2_r16& value)
{
    Free_CodebookParametersAddition_r16_Etype2_r16_Etype2R1_r16(value.etype2R1_r16);
    if (value.has_etype2R2_r16) {
        Free_CodebookParametersAddition_r16_Etype2_r16_Etype2R2_r16(value.etype2R2_r16);
    }
    if (value.has_paramComb7_8_r16) {
    }
    if (value.has_rank3_4_r16) {
    }
    if (value.has_amplitudeSubsetRestriction_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R1_PortSelection_r16：ASN.1 etype2-PS-r16/etype2R1-PortSelection-r16；源文件第 15612 行；SEQUENCE。
// Encode_CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R1_PortSelection_r16 只读不分配；Decode_CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R1_PortSelection_r16 可能 malloc（失败时内部已释放并清零）；Free_CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R1_PortSelection_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R1_PortSelection_r16(Encoder& enc, const CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R1_PortSelection_r16& value)
{
    (void)value;
enc.WriteConstrainedLength(value.supportedCSI_RS_ResourceListAdd_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedCSI_RS_ResourceListAdd_r16_items[i]), 0, 511);
}
    return enc.Error();
}

ErrorCode Decode_CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R1_PortSelection_r16(Decoder& dec, CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R1_PortSelection_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ResourceListAdd_r16_count)) { goto fail; }
if (value.supportedCSI_RS_ResourceListAdd_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    value.supportedCSI_RS_ResourceListAdd_r16_items = (int64_t*)std::malloc((std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
    if (value.supportedCSI_RS_ResourceListAdd_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ResourceListAdd_r16_items, 0, (std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.supportedCSI_RS_ResourceListAdd_r16_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R1_PortSelection_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R1_PortSelection_r16(CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R1_PortSelection_r16& value)
{
    if (value.supportedCSI_RS_ResourceListAdd_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
        }
        std::free(value.supportedCSI_RS_ResourceListAdd_r16_items);
        value.supportedCSI_RS_ResourceListAdd_r16_items = nullptr;
    }
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R2_PortSelection_r16：ASN.1 etype2-PS-r16/etype2R2-PortSelection-r16；源文件第 15617 行；SEQUENCE。
// Encode_CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R2_PortSelection_r16 只读不分配；Decode_CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R2_PortSelection_r16 可能 malloc（失败时内部已释放并清零）；Free_CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R2_PortSelection_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R2_PortSelection_r16(Encoder& enc, const CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R2_PortSelection_r16& value)
{
    (void)value;
enc.WriteConstrainedLength(value.supportedCSI_RS_ResourceListAdd_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedCSI_RS_ResourceListAdd_r16_items[i]), 0, 511);
}
    return enc.Error();
}

ErrorCode Decode_CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R2_PortSelection_r16(Decoder& dec, CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R2_PortSelection_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ResourceListAdd_r16_count)) { goto fail; }
if (value.supportedCSI_RS_ResourceListAdd_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    value.supportedCSI_RS_ResourceListAdd_r16_items = (int64_t*)std::malloc((std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
    if (value.supportedCSI_RS_ResourceListAdd_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ResourceListAdd_r16_items, 0, (std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.supportedCSI_RS_ResourceListAdd_r16_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R2_PortSelection_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R2_PortSelection_r16(CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R2_PortSelection_r16& value)
{
    if (value.supportedCSI_RS_ResourceListAdd_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
        }
        std::free(value.supportedCSI_RS_ResourceListAdd_r16_items);
        value.supportedCSI_RS_ResourceListAdd_r16_items = nullptr;
    }
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookParametersAddition_r16_Etype2_PS_r16：ASN.1 etype2-PS-r16；源文件第 15610 行；SEQUENCE。
// Encode_CodebookParametersAddition_r16_Etype2_PS_r16 只读不分配；Decode_CodebookParametersAddition_r16_Etype2_PS_r16 可能 malloc（失败时内部已释放并清零）；Free_CodebookParametersAddition_r16_Etype2_PS_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookParametersAddition_r16_Etype2_PS_r16(Encoder& enc, const CodebookParametersAddition_r16_Etype2_PS_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_etype2R2_PortSelection_r16);
    enc.WriteBit(value.has_rank3_4_r16);
    Encode_CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R1_PortSelection_r16(enc, value.etype2R1_PortSelection_r16);
    if (value.has_etype2R2_PortSelection_r16) {
        Encode_CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R2_PortSelection_r16(enc, value.etype2R2_PortSelection_r16);
    }
    if (value.has_rank3_4_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rank3_4_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookParametersAddition_r16_Etype2_PS_r16(Decoder& dec, CodebookParametersAddition_r16_Etype2_PS_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        if (Decode_CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R1_PortSelection_r16(dec, value.etype2R1_PortSelection_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R2_PortSelection_r16(dec, value.etype2R2_PortSelection_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.rank3_4_r16 = (CodebookParametersAddition_r16_Etype2_PS_r16_Rank3_4_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParametersAddition_r16_Etype2_PS_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParametersAddition_r16_Etype2_PS_r16(CodebookParametersAddition_r16_Etype2_PS_r16& value)
{
    Free_CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R1_PortSelection_r16(value.etype2R1_PortSelection_r16);
    if (value.has_etype2R2_PortSelection_r16) {
        Free_CodebookParametersAddition_r16_Etype2_PS_r16_Etype2R2_PortSelection_r16(value.etype2R2_PortSelection_r16);
    }
    if (value.has_rank3_4_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookParametersAddition_r16：ASN.1 CodebookParametersAddition-r16；源文件第 15591 行；SEQUENCE。
// Encode_CodebookParametersAddition_r16 只读不分配；Decode_CodebookParametersAddition_r16 可能 malloc（失败时内部已释放并清零）；Free_CodebookParametersAddition_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookParametersAddition_r16(Encoder& enc, const CodebookParametersAddition_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_etype2_r16);
    enc.WriteBit(value.has_etype2_PS_r16);
    if (value.has_etype2_r16) {
        Encode_CodebookParametersAddition_r16_Etype2_r16(enc, value.etype2_r16);
    }
    if (value.has_etype2_PS_r16) {
        Encode_CodebookParametersAddition_r16_Etype2_PS_r16(enc, value.etype2_PS_r16);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookParametersAddition_r16(Decoder& dec, CodebookParametersAddition_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_CodebookParametersAddition_r16_Etype2_r16(dec, value.etype2_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CodebookParametersAddition_r16_Etype2_PS_r16(dec, value.etype2_PS_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParametersAddition_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParametersAddition_r16(CodebookParametersAddition_r16& value)
{
    if (value.has_etype2_r16) {
        Free_CodebookParametersAddition_r16_Etype2_r16(value.etype2_r16);
    }
    if (value.has_etype2_PS_r16) {
        Free_CodebookParametersAddition_r16_Etype2_PS_r16(value.etype2_PS_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookComboParametersAddition_r16_Type1SP_Type2_null_r16：ASN.1 type1SP-Type2-null-r16；源文件第 15628 行；SEQUENCE。
// Encode_CodebookComboParametersAddition_r16_Type1SP_Type2_null_r16 只读不分配；Decode_CodebookComboParametersAddition_r16_Type1SP_Type2_null_r16 可能 malloc（失败时内部已释放并清零）；Free_CodebookComboParametersAddition_r16_Type1SP_Type2_null_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookComboParametersAddition_r16_Type1SP_Type2_null_r16(Encoder& enc, const CodebookComboParametersAddition_r16_Type1SP_Type2_null_r16& value)
{
    (void)value;
enc.WriteConstrainedLength(value.supportedCSI_RS_ResourceListAdd_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedCSI_RS_ResourceListAdd_r16_items[i]), 0, 511);
}
    return enc.Error();
}

ErrorCode Decode_CodebookComboParametersAddition_r16_Type1SP_Type2_null_r16(Decoder& dec, CodebookComboParametersAddition_r16_Type1SP_Type2_null_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ResourceListAdd_r16_count)) { goto fail; }
if (value.supportedCSI_RS_ResourceListAdd_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    value.supportedCSI_RS_ResourceListAdd_r16_items = (int64_t*)std::malloc((std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
    if (value.supportedCSI_RS_ResourceListAdd_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ResourceListAdd_r16_items, 0, (std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.supportedCSI_RS_ResourceListAdd_r16_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookComboParametersAddition_r16_Type1SP_Type2_null_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookComboParametersAddition_r16_Type1SP_Type2_null_r16(CodebookComboParametersAddition_r16_Type1SP_Type2_null_r16& value)
{
    if (value.supportedCSI_RS_ResourceListAdd_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
        }
        std::free(value.supportedCSI_RS_ResourceListAdd_r16_items);
        value.supportedCSI_RS_ResourceListAdd_r16_items = nullptr;
    }
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookComboParametersAddition_r16_Type1SP_Type2PS_null_r16：ASN.1 type1SP-Type2PS-null-r16；源文件第 15631 行；SEQUENCE。
// Encode_CodebookComboParametersAddition_r16_Type1SP_Type2PS_null_r16 只读不分配；Decode_CodebookComboParametersAddition_r16_Type1SP_Type2PS_null_r16 可能 malloc（失败时内部已释放并清零）；Free_CodebookComboParametersAddition_r16_Type1SP_Type2PS_null_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookComboParametersAddition_r16_Type1SP_Type2PS_null_r16(Encoder& enc, const CodebookComboParametersAddition_r16_Type1SP_Type2PS_null_r16& value)
{
    (void)value;
enc.WriteConstrainedLength(value.supportedCSI_RS_ResourceListAdd_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedCSI_RS_ResourceListAdd_r16_items[i]), 0, 511);
}
    return enc.Error();
}

ErrorCode Decode_CodebookComboParametersAddition_r16_Type1SP_Type2PS_null_r16(Decoder& dec, CodebookComboParametersAddition_r16_Type1SP_Type2PS_null_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ResourceListAdd_r16_count)) { goto fail; }
if (value.supportedCSI_RS_ResourceListAdd_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    value.supportedCSI_RS_ResourceListAdd_r16_items = (int64_t*)std::malloc((std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
    if (value.supportedCSI_RS_ResourceListAdd_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ResourceListAdd_r16_items, 0, (std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.supportedCSI_RS_ResourceListAdd_r16_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookComboParametersAddition_r16_Type1SP_Type2PS_null_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookComboParametersAddition_r16_Type1SP_Type2PS_null_r16(CodebookComboParametersAddition_r16_Type1SP_Type2PS_null_r16& value)
{
    if (value.supportedCSI_RS_ResourceListAdd_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
        }
        std::free(value.supportedCSI_RS_ResourceListAdd_r16_items);
        value.supportedCSI_RS_ResourceListAdd_r16_items = nullptr;
    }
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookComboParametersAddition_r16_Type1SP_eType2R1_null_r16：ASN.1 type1SP-eType2R1-null-r16；源文件第 15634 行；SEQUENCE。
// Encode_CodebookComboParametersAddition_r16_Type1SP_eType2R1_null_r16 只读不分配；Decode_CodebookComboParametersAddition_r16_Type1SP_eType2R1_null_r16 可能 malloc（失败时内部已释放并清零）；Free_CodebookComboParametersAddition_r16_Type1SP_eType2R1_null_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookComboParametersAddition_r16_Type1SP_eType2R1_null_r16(Encoder& enc, const CodebookComboParametersAddition_r16_Type1SP_eType2R1_null_r16& value)
{
    (void)value;
enc.WriteConstrainedLength(value.supportedCSI_RS_ResourceListAdd_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedCSI_RS_ResourceListAdd_r16_items[i]), 0, 511);
}
    return enc.Error();
}

ErrorCode Decode_CodebookComboParametersAddition_r16_Type1SP_eType2R1_null_r16(Decoder& dec, CodebookComboParametersAddition_r16_Type1SP_eType2R1_null_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ResourceListAdd_r16_count)) { goto fail; }
if (value.supportedCSI_RS_ResourceListAdd_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    value.supportedCSI_RS_ResourceListAdd_r16_items = (int64_t*)std::malloc((std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
    if (value.supportedCSI_RS_ResourceListAdd_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ResourceListAdd_r16_items, 0, (std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.supportedCSI_RS_ResourceListAdd_r16_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookComboParametersAddition_r16_Type1SP_eType2R1_null_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookComboParametersAddition_r16_Type1SP_eType2R1_null_r16(CodebookComboParametersAddition_r16_Type1SP_eType2R1_null_r16& value)
{
    if (value.supportedCSI_RS_ResourceListAdd_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
        }
        std::free(value.supportedCSI_RS_ResourceListAdd_r16_items);
        value.supportedCSI_RS_ResourceListAdd_r16_items = nullptr;
    }
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookComboParametersAddition_r16_Type1SP_eType2R2_null_r16：ASN.1 type1SP-eType2R2-null-r16；源文件第 15637 行；SEQUENCE。
// Encode_CodebookComboParametersAddition_r16_Type1SP_eType2R2_null_r16 只读不分配；Decode_CodebookComboParametersAddition_r16_Type1SP_eType2R2_null_r16 可能 malloc（失败时内部已释放并清零）；Free_CodebookComboParametersAddition_r16_Type1SP_eType2R2_null_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookComboParametersAddition_r16_Type1SP_eType2R2_null_r16(Encoder& enc, const CodebookComboParametersAddition_r16_Type1SP_eType2R2_null_r16& value)
{
    (void)value;
enc.WriteConstrainedLength(value.supportedCSI_RS_ResourceListAdd_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedCSI_RS_ResourceListAdd_r16_items[i]), 0, 511);
}
    return enc.Error();
}

ErrorCode Decode_CodebookComboParametersAddition_r16_Type1SP_eType2R2_null_r16(Decoder& dec, CodebookComboParametersAddition_r16_Type1SP_eType2R2_null_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ResourceListAdd_r16_count)) { goto fail; }
if (value.supportedCSI_RS_ResourceListAdd_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    value.supportedCSI_RS_ResourceListAdd_r16_items = (int64_t*)std::malloc((std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
    if (value.supportedCSI_RS_ResourceListAdd_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ResourceListAdd_r16_items, 0, (std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.supportedCSI_RS_ResourceListAdd_r16_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookComboParametersAddition_r16_Type1SP_eType2R2_null_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookComboParametersAddition_r16_Type1SP_eType2R2_null_r16(CodebookComboParametersAddition_r16_Type1SP_eType2R2_null_r16& value)
{
    if (value.supportedCSI_RS_ResourceListAdd_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
        }
        std::free(value.supportedCSI_RS_ResourceListAdd_r16_items);
        value.supportedCSI_RS_ResourceListAdd_r16_items = nullptr;
    }
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookComboParametersAddition_r16_Type1SP_eType2R1PS_null_r16：ASN.1 type1SP-eType2R1PS-null-r16；源文件第 15640 行；SEQUENCE。
// Encode_CodebookComboParametersAddition_r16_Type1SP_eType2R1PS_null_r16 只读不分配；Decode_CodebookComboParametersAddition_r16_Type1SP_eType2R1PS_null_r16 可能 malloc（失败时内部已释放并清零）；Free_CodebookComboParametersAddition_r16_Type1SP_eType2R1PS_null_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookComboParametersAddition_r16_Type1SP_eType2R1PS_null_r16(Encoder& enc, const CodebookComboParametersAddition_r16_Type1SP_eType2R1PS_null_r16& value)
{
    (void)value;
enc.WriteConstrainedLength(value.supportedCSI_RS_ResourceListAdd_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedCSI_RS_ResourceListAdd_r16_items[i]), 0, 511);
}
    return enc.Error();
}

ErrorCode Decode_CodebookComboParametersAddition_r16_Type1SP_eType2R1PS_null_r16(Decoder& dec, CodebookComboParametersAddition_r16_Type1SP_eType2R1PS_null_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ResourceListAdd_r16_count)) { goto fail; }
if (value.supportedCSI_RS_ResourceListAdd_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    value.supportedCSI_RS_ResourceListAdd_r16_items = (int64_t*)std::malloc((std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
    if (value.supportedCSI_RS_ResourceListAdd_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ResourceListAdd_r16_items, 0, (std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.supportedCSI_RS_ResourceListAdd_r16_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookComboParametersAddition_r16_Type1SP_eType2R1PS_null_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookComboParametersAddition_r16_Type1SP_eType2R1PS_null_r16(CodebookComboParametersAddition_r16_Type1SP_eType2R1PS_null_r16& value)
{
    if (value.supportedCSI_RS_ResourceListAdd_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
        }
        std::free(value.supportedCSI_RS_ResourceListAdd_r16_items);
        value.supportedCSI_RS_ResourceListAdd_r16_items = nullptr;
    }
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookComboParametersAddition_r16_Type1SP_eType2R2PS_null_r16：ASN.1 type1SP-eType2R2PS-null-r16；源文件第 15643 行；SEQUENCE。
// Encode_CodebookComboParametersAddition_r16_Type1SP_eType2R2PS_null_r16 只读不分配；Decode_CodebookComboParametersAddition_r16_Type1SP_eType2R2PS_null_r16 可能 malloc（失败时内部已释放并清零）；Free_CodebookComboParametersAddition_r16_Type1SP_eType2R2PS_null_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookComboParametersAddition_r16_Type1SP_eType2R2PS_null_r16(Encoder& enc, const CodebookComboParametersAddition_r16_Type1SP_eType2R2PS_null_r16& value)
{
    (void)value;
enc.WriteConstrainedLength(value.supportedCSI_RS_ResourceListAdd_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedCSI_RS_ResourceListAdd_r16_items[i]), 0, 511);
}
    return enc.Error();
}

ErrorCode Decode_CodebookComboParametersAddition_r16_Type1SP_eType2R2PS_null_r16(Decoder& dec, CodebookComboParametersAddition_r16_Type1SP_eType2R2PS_null_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ResourceListAdd_r16_count)) { goto fail; }
if (value.supportedCSI_RS_ResourceListAdd_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    value.supportedCSI_RS_ResourceListAdd_r16_items = (int64_t*)std::malloc((std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
    if (value.supportedCSI_RS_ResourceListAdd_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ResourceListAdd_r16_items, 0, (std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.supportedCSI_RS_ResourceListAdd_r16_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookComboParametersAddition_r16_Type1SP_eType2R2PS_null_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookComboParametersAddition_r16_Type1SP_eType2R2PS_null_r16(CodebookComboParametersAddition_r16_Type1SP_eType2R2PS_null_r16& value)
{
    if (value.supportedCSI_RS_ResourceListAdd_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
        }
        std::free(value.supportedCSI_RS_ResourceListAdd_r16_items);
        value.supportedCSI_RS_ResourceListAdd_r16_items = nullptr;
    }
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookComboParametersAddition_r16_Type1SP_Type2_Type2PS_r16：ASN.1 type1SP-Type2-Type2PS-r16；源文件第 15646 行；SEQUENCE。
// Encode_CodebookComboParametersAddition_r16_Type1SP_Type2_Type2PS_r16 只读不分配；Decode_CodebookComboParametersAddition_r16_Type1SP_Type2_Type2PS_r16 可能 malloc（失败时内部已释放并清零）；Free_CodebookComboParametersAddition_r16_Type1SP_Type2_Type2PS_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookComboParametersAddition_r16_Type1SP_Type2_Type2PS_r16(Encoder& enc, const CodebookComboParametersAddition_r16_Type1SP_Type2_Type2PS_r16& value)
{
    (void)value;
enc.WriteConstrainedLength(value.supportedCSI_RS_ResourceListAdd_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedCSI_RS_ResourceListAdd_r16_items[i]), 0, 511);
}
    return enc.Error();
}

ErrorCode Decode_CodebookComboParametersAddition_r16_Type1SP_Type2_Type2PS_r16(Decoder& dec, CodebookComboParametersAddition_r16_Type1SP_Type2_Type2PS_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ResourceListAdd_r16_count)) { goto fail; }
if (value.supportedCSI_RS_ResourceListAdd_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    value.supportedCSI_RS_ResourceListAdd_r16_items = (int64_t*)std::malloc((std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
    if (value.supportedCSI_RS_ResourceListAdd_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ResourceListAdd_r16_items, 0, (std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.supportedCSI_RS_ResourceListAdd_r16_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookComboParametersAddition_r16_Type1SP_Type2_Type2PS_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookComboParametersAddition_r16_Type1SP_Type2_Type2PS_r16(CodebookComboParametersAddition_r16_Type1SP_Type2_Type2PS_r16& value)
{
    if (value.supportedCSI_RS_ResourceListAdd_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
        }
        std::free(value.supportedCSI_RS_ResourceListAdd_r16_items);
        value.supportedCSI_RS_ResourceListAdd_r16_items = nullptr;
    }
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookComboParametersAddition_r16_Type1MP_Type2_null_r16：ASN.1 type1MP-Type2-null-r16；源文件第 15649 行；SEQUENCE。
// Encode_CodebookComboParametersAddition_r16_Type1MP_Type2_null_r16 只读不分配；Decode_CodebookComboParametersAddition_r16_Type1MP_Type2_null_r16 可能 malloc（失败时内部已释放并清零）；Free_CodebookComboParametersAddition_r16_Type1MP_Type2_null_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookComboParametersAddition_r16_Type1MP_Type2_null_r16(Encoder& enc, const CodebookComboParametersAddition_r16_Type1MP_Type2_null_r16& value)
{
    (void)value;
enc.WriteConstrainedLength(value.supportedCSI_RS_ResourceListAdd_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedCSI_RS_ResourceListAdd_r16_items[i]), 0, 511);
}
    return enc.Error();
}

ErrorCode Decode_CodebookComboParametersAddition_r16_Type1MP_Type2_null_r16(Decoder& dec, CodebookComboParametersAddition_r16_Type1MP_Type2_null_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ResourceListAdd_r16_count)) { goto fail; }
if (value.supportedCSI_RS_ResourceListAdd_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    value.supportedCSI_RS_ResourceListAdd_r16_items = (int64_t*)std::malloc((std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
    if (value.supportedCSI_RS_ResourceListAdd_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ResourceListAdd_r16_items, 0, (std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.supportedCSI_RS_ResourceListAdd_r16_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookComboParametersAddition_r16_Type1MP_Type2_null_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookComboParametersAddition_r16_Type1MP_Type2_null_r16(CodebookComboParametersAddition_r16_Type1MP_Type2_null_r16& value)
{
    if (value.supportedCSI_RS_ResourceListAdd_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
        }
        std::free(value.supportedCSI_RS_ResourceListAdd_r16_items);
        value.supportedCSI_RS_ResourceListAdd_r16_items = nullptr;
    }
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookComboParametersAddition_r16_Type1MP_Type2PS_null_r16：ASN.1 type1MP-Type2PS-null-r16；源文件第 15652 行；SEQUENCE。
// Encode_CodebookComboParametersAddition_r16_Type1MP_Type2PS_null_r16 只读不分配；Decode_CodebookComboParametersAddition_r16_Type1MP_Type2PS_null_r16 可能 malloc（失败时内部已释放并清零）；Free_CodebookComboParametersAddition_r16_Type1MP_Type2PS_null_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookComboParametersAddition_r16_Type1MP_Type2PS_null_r16(Encoder& enc, const CodebookComboParametersAddition_r16_Type1MP_Type2PS_null_r16& value)
{
    (void)value;
enc.WriteConstrainedLength(value.supportedCSI_RS_ResourceListAdd_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedCSI_RS_ResourceListAdd_r16_items[i]), 0, 511);
}
    return enc.Error();
}

ErrorCode Decode_CodebookComboParametersAddition_r16_Type1MP_Type2PS_null_r16(Decoder& dec, CodebookComboParametersAddition_r16_Type1MP_Type2PS_null_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ResourceListAdd_r16_count)) { goto fail; }
if (value.supportedCSI_RS_ResourceListAdd_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    value.supportedCSI_RS_ResourceListAdd_r16_items = (int64_t*)std::malloc((std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
    if (value.supportedCSI_RS_ResourceListAdd_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ResourceListAdd_r16_items, 0, (std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.supportedCSI_RS_ResourceListAdd_r16_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookComboParametersAddition_r16_Type1MP_Type2PS_null_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookComboParametersAddition_r16_Type1MP_Type2PS_null_r16(CodebookComboParametersAddition_r16_Type1MP_Type2PS_null_r16& value)
{
    if (value.supportedCSI_RS_ResourceListAdd_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
        }
        std::free(value.supportedCSI_RS_ResourceListAdd_r16_items);
        value.supportedCSI_RS_ResourceListAdd_r16_items = nullptr;
    }
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookComboParametersAddition_r16_Type1MP_eType2R1_null_r16：ASN.1 type1MP-eType2R1-null-r16；源文件第 15655 行；SEQUENCE。
// Encode_CodebookComboParametersAddition_r16_Type1MP_eType2R1_null_r16 只读不分配；Decode_CodebookComboParametersAddition_r16_Type1MP_eType2R1_null_r16 可能 malloc（失败时内部已释放并清零）；Free_CodebookComboParametersAddition_r16_Type1MP_eType2R1_null_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookComboParametersAddition_r16_Type1MP_eType2R1_null_r16(Encoder& enc, const CodebookComboParametersAddition_r16_Type1MP_eType2R1_null_r16& value)
{
    (void)value;
enc.WriteConstrainedLength(value.supportedCSI_RS_ResourceListAdd_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedCSI_RS_ResourceListAdd_r16_items[i]), 0, 511);
}
    return enc.Error();
}

ErrorCode Decode_CodebookComboParametersAddition_r16_Type1MP_eType2R1_null_r16(Decoder& dec, CodebookComboParametersAddition_r16_Type1MP_eType2R1_null_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ResourceListAdd_r16_count)) { goto fail; }
if (value.supportedCSI_RS_ResourceListAdd_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    value.supportedCSI_RS_ResourceListAdd_r16_items = (int64_t*)std::malloc((std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
    if (value.supportedCSI_RS_ResourceListAdd_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ResourceListAdd_r16_items, 0, (std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.supportedCSI_RS_ResourceListAdd_r16_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookComboParametersAddition_r16_Type1MP_eType2R1_null_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookComboParametersAddition_r16_Type1MP_eType2R1_null_r16(CodebookComboParametersAddition_r16_Type1MP_eType2R1_null_r16& value)
{
    if (value.supportedCSI_RS_ResourceListAdd_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
        }
        std::free(value.supportedCSI_RS_ResourceListAdd_r16_items);
        value.supportedCSI_RS_ResourceListAdd_r16_items = nullptr;
    }
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookComboParametersAddition_r16_Type1MP_eType2R2_null_r16：ASN.1 type1MP-eType2R2-null-r16；源文件第 15658 行；SEQUENCE。
// Encode_CodebookComboParametersAddition_r16_Type1MP_eType2R2_null_r16 只读不分配；Decode_CodebookComboParametersAddition_r16_Type1MP_eType2R2_null_r16 可能 malloc（失败时内部已释放并清零）；Free_CodebookComboParametersAddition_r16_Type1MP_eType2R2_null_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookComboParametersAddition_r16_Type1MP_eType2R2_null_r16(Encoder& enc, const CodebookComboParametersAddition_r16_Type1MP_eType2R2_null_r16& value)
{
    (void)value;
enc.WriteConstrainedLength(value.supportedCSI_RS_ResourceListAdd_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedCSI_RS_ResourceListAdd_r16_items[i]), 0, 511);
}
    return enc.Error();
}

ErrorCode Decode_CodebookComboParametersAddition_r16_Type1MP_eType2R2_null_r16(Decoder& dec, CodebookComboParametersAddition_r16_Type1MP_eType2R2_null_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ResourceListAdd_r16_count)) { goto fail; }
if (value.supportedCSI_RS_ResourceListAdd_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    value.supportedCSI_RS_ResourceListAdd_r16_items = (int64_t*)std::malloc((std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
    if (value.supportedCSI_RS_ResourceListAdd_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ResourceListAdd_r16_items, 0, (std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.supportedCSI_RS_ResourceListAdd_r16_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookComboParametersAddition_r16_Type1MP_eType2R2_null_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookComboParametersAddition_r16_Type1MP_eType2R2_null_r16(CodebookComboParametersAddition_r16_Type1MP_eType2R2_null_r16& value)
{
    if (value.supportedCSI_RS_ResourceListAdd_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
        }
        std::free(value.supportedCSI_RS_ResourceListAdd_r16_items);
        value.supportedCSI_RS_ResourceListAdd_r16_items = nullptr;
    }
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookComboParametersAddition_r16_Type1MP_eType2R1PS_null_r16：ASN.1 type1MP-eType2R1PS-null-r16；源文件第 15661 行；SEQUENCE。
// Encode_CodebookComboParametersAddition_r16_Type1MP_eType2R1PS_null_r16 只读不分配；Decode_CodebookComboParametersAddition_r16_Type1MP_eType2R1PS_null_r16 可能 malloc（失败时内部已释放并清零）；Free_CodebookComboParametersAddition_r16_Type1MP_eType2R1PS_null_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookComboParametersAddition_r16_Type1MP_eType2R1PS_null_r16(Encoder& enc, const CodebookComboParametersAddition_r16_Type1MP_eType2R1PS_null_r16& value)
{
    (void)value;
enc.WriteConstrainedLength(value.supportedCSI_RS_ResourceListAdd_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedCSI_RS_ResourceListAdd_r16_items[i]), 0, 511);
}
    return enc.Error();
}

ErrorCode Decode_CodebookComboParametersAddition_r16_Type1MP_eType2R1PS_null_r16(Decoder& dec, CodebookComboParametersAddition_r16_Type1MP_eType2R1PS_null_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ResourceListAdd_r16_count)) { goto fail; }
if (value.supportedCSI_RS_ResourceListAdd_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    value.supportedCSI_RS_ResourceListAdd_r16_items = (int64_t*)std::malloc((std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
    if (value.supportedCSI_RS_ResourceListAdd_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ResourceListAdd_r16_items, 0, (std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.supportedCSI_RS_ResourceListAdd_r16_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookComboParametersAddition_r16_Type1MP_eType2R1PS_null_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookComboParametersAddition_r16_Type1MP_eType2R1PS_null_r16(CodebookComboParametersAddition_r16_Type1MP_eType2R1PS_null_r16& value)
{
    if (value.supportedCSI_RS_ResourceListAdd_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
        }
        std::free(value.supportedCSI_RS_ResourceListAdd_r16_items);
        value.supportedCSI_RS_ResourceListAdd_r16_items = nullptr;
    }
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookComboParametersAddition_r16_Type1MP_eType2R2PS_null_r16：ASN.1 type1MP-eType2R2PS-null-r16；源文件第 15664 行；SEQUENCE。
// Encode_CodebookComboParametersAddition_r16_Type1MP_eType2R2PS_null_r16 只读不分配；Decode_CodebookComboParametersAddition_r16_Type1MP_eType2R2PS_null_r16 可能 malloc（失败时内部已释放并清零）；Free_CodebookComboParametersAddition_r16_Type1MP_eType2R2PS_null_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookComboParametersAddition_r16_Type1MP_eType2R2PS_null_r16(Encoder& enc, const CodebookComboParametersAddition_r16_Type1MP_eType2R2PS_null_r16& value)
{
    (void)value;
enc.WriteConstrainedLength(value.supportedCSI_RS_ResourceListAdd_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedCSI_RS_ResourceListAdd_r16_items[i]), 0, 511);
}
    return enc.Error();
}

ErrorCode Decode_CodebookComboParametersAddition_r16_Type1MP_eType2R2PS_null_r16(Decoder& dec, CodebookComboParametersAddition_r16_Type1MP_eType2R2PS_null_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ResourceListAdd_r16_count)) { goto fail; }
if (value.supportedCSI_RS_ResourceListAdd_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    value.supportedCSI_RS_ResourceListAdd_r16_items = (int64_t*)std::malloc((std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
    if (value.supportedCSI_RS_ResourceListAdd_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ResourceListAdd_r16_items, 0, (std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.supportedCSI_RS_ResourceListAdd_r16_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookComboParametersAddition_r16_Type1MP_eType2R2PS_null_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookComboParametersAddition_r16_Type1MP_eType2R2PS_null_r16(CodebookComboParametersAddition_r16_Type1MP_eType2R2PS_null_r16& value)
{
    if (value.supportedCSI_RS_ResourceListAdd_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
        }
        std::free(value.supportedCSI_RS_ResourceListAdd_r16_items);
        value.supportedCSI_RS_ResourceListAdd_r16_items = nullptr;
    }
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookComboParametersAddition_r16_Type1MP_Type2_Type2PS_r16：ASN.1 type1MP-Type2-Type2PS-r16；源文件第 15667 行；SEQUENCE。
// Encode_CodebookComboParametersAddition_r16_Type1MP_Type2_Type2PS_r16 只读不分配；Decode_CodebookComboParametersAddition_r16_Type1MP_Type2_Type2PS_r16 可能 malloc（失败时内部已释放并清零）；Free_CodebookComboParametersAddition_r16_Type1MP_Type2_Type2PS_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookComboParametersAddition_r16_Type1MP_Type2_Type2PS_r16(Encoder& enc, const CodebookComboParametersAddition_r16_Type1MP_Type2_Type2PS_r16& value)
{
    (void)value;
enc.WriteConstrainedLength(value.supportedCSI_RS_ResourceListAdd_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedCSI_RS_ResourceListAdd_r16_items[i]), 0, 511);
}
    return enc.Error();
}

ErrorCode Decode_CodebookComboParametersAddition_r16_Type1MP_Type2_Type2PS_r16(Decoder& dec, CodebookComboParametersAddition_r16_Type1MP_Type2_Type2PS_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ResourceListAdd_r16_count)) { goto fail; }
if (value.supportedCSI_RS_ResourceListAdd_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ResourceListAdd_r16_count > 0u) {
    value.supportedCSI_RS_ResourceListAdd_r16_items = (int64_t*)std::malloc((std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
    if (value.supportedCSI_RS_ResourceListAdd_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ResourceListAdd_r16_items, 0, (std::size_t)value.supportedCSI_RS_ResourceListAdd_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.supportedCSI_RS_ResourceListAdd_r16_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookComboParametersAddition_r16_Type1MP_Type2_Type2PS_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookComboParametersAddition_r16_Type1MP_Type2_Type2PS_r16(CodebookComboParametersAddition_r16_Type1MP_Type2_Type2PS_r16& value)
{
    if (value.supportedCSI_RS_ResourceListAdd_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceListAdd_r16_count; ++i) {
        }
        std::free(value.supportedCSI_RS_ResourceListAdd_r16_items);
        value.supportedCSI_RS_ResourceListAdd_r16_items = nullptr;
    }
    value.supportedCSI_RS_ResourceListAdd_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookComboParametersAddition_r16：ASN.1 CodebookComboParametersAddition-r16；源文件第 15626 行；SEQUENCE。
// Encode_CodebookComboParametersAddition_r16 只读不分配；Decode_CodebookComboParametersAddition_r16 可能 malloc（失败时内部已释放并清零）；Free_CodebookComboParametersAddition_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookComboParametersAddition_r16(Encoder& enc, const CodebookComboParametersAddition_r16& value)
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
        Encode_CodebookComboParametersAddition_r16_Type1SP_Type2_null_r16(enc, value.type1SP_Type2_null_r16);
    }
    if (value.has_type1SP_Type2PS_null_r16) {
        Encode_CodebookComboParametersAddition_r16_Type1SP_Type2PS_null_r16(enc, value.type1SP_Type2PS_null_r16);
    }
    if (value.has_type1SP_eType2R1_null_r16) {
        Encode_CodebookComboParametersAddition_r16_Type1SP_eType2R1_null_r16(enc, value.type1SP_eType2R1_null_r16);
    }
    if (value.has_type1SP_eType2R2_null_r16) {
        Encode_CodebookComboParametersAddition_r16_Type1SP_eType2R2_null_r16(enc, value.type1SP_eType2R2_null_r16);
    }
    if (value.has_type1SP_eType2R1PS_null_r16) {
        Encode_CodebookComboParametersAddition_r16_Type1SP_eType2R1PS_null_r16(enc, value.type1SP_eType2R1PS_null_r16);
    }
    if (value.has_type1SP_eType2R2PS_null_r16) {
        Encode_CodebookComboParametersAddition_r16_Type1SP_eType2R2PS_null_r16(enc, value.type1SP_eType2R2PS_null_r16);
    }
    if (value.has_type1SP_Type2_Type2PS_r16) {
        Encode_CodebookComboParametersAddition_r16_Type1SP_Type2_Type2PS_r16(enc, value.type1SP_Type2_Type2PS_r16);
    }
    if (value.has_type1MP_Type2_null_r16) {
        Encode_CodebookComboParametersAddition_r16_Type1MP_Type2_null_r16(enc, value.type1MP_Type2_null_r16);
    }
    if (value.has_type1MP_Type2PS_null_r16) {
        Encode_CodebookComboParametersAddition_r16_Type1MP_Type2PS_null_r16(enc, value.type1MP_Type2PS_null_r16);
    }
    if (value.has_type1MP_eType2R1_null_r16) {
        Encode_CodebookComboParametersAddition_r16_Type1MP_eType2R1_null_r16(enc, value.type1MP_eType2R1_null_r16);
    }
    if (value.has_type1MP_eType2R2_null_r16) {
        Encode_CodebookComboParametersAddition_r16_Type1MP_eType2R2_null_r16(enc, value.type1MP_eType2R2_null_r16);
    }
    if (value.has_type1MP_eType2R1PS_null_r16) {
        Encode_CodebookComboParametersAddition_r16_Type1MP_eType2R1PS_null_r16(enc, value.type1MP_eType2R1PS_null_r16);
    }
    if (value.has_type1MP_eType2R2PS_null_r16) {
        Encode_CodebookComboParametersAddition_r16_Type1MP_eType2R2PS_null_r16(enc, value.type1MP_eType2R2PS_null_r16);
    }
    if (value.has_type1MP_Type2_Type2PS_r16) {
        Encode_CodebookComboParametersAddition_r16_Type1MP_Type2_Type2PS_r16(enc, value.type1MP_Type2_Type2PS_r16);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookComboParametersAddition_r16(Decoder& dec, CodebookComboParametersAddition_r16& value)
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
        if (Decode_CodebookComboParametersAddition_r16_Type1SP_Type2_null_r16(dec, value.type1SP_Type2_null_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CodebookComboParametersAddition_r16_Type1SP_Type2PS_null_r16(dec, value.type1SP_Type2PS_null_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_CodebookComboParametersAddition_r16_Type1SP_eType2R1_null_r16(dec, value.type1SP_eType2R1_null_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_CodebookComboParametersAddition_r16_Type1SP_eType2R2_null_r16(dec, value.type1SP_eType2R2_null_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_CodebookComboParametersAddition_r16_Type1SP_eType2R1PS_null_r16(dec, value.type1SP_eType2R1PS_null_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_CodebookComboParametersAddition_r16_Type1SP_eType2R2PS_null_r16(dec, value.type1SP_eType2R2PS_null_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_CodebookComboParametersAddition_r16_Type1SP_Type2_Type2PS_r16(dec, value.type1SP_Type2_Type2PS_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        if (Decode_CodebookComboParametersAddition_r16_Type1MP_Type2_null_r16(dec, value.type1MP_Type2_null_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        if (Decode_CodebookComboParametersAddition_r16_Type1MP_Type2PS_null_r16(dec, value.type1MP_Type2PS_null_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_9) {
        if (Decode_CodebookComboParametersAddition_r16_Type1MP_eType2R1_null_r16(dec, value.type1MP_eType2R1_null_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_10) {
        if (Decode_CodebookComboParametersAddition_r16_Type1MP_eType2R2_null_r16(dec, value.type1MP_eType2R2_null_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_11) {
        if (Decode_CodebookComboParametersAddition_r16_Type1MP_eType2R1PS_null_r16(dec, value.type1MP_eType2R1PS_null_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_12) {
        if (Decode_CodebookComboParametersAddition_r16_Type1MP_eType2R2PS_null_r16(dec, value.type1MP_eType2R2PS_null_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_13) {
        if (Decode_CodebookComboParametersAddition_r16_Type1MP_Type2_Type2PS_r16(dec, value.type1MP_Type2_Type2PS_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookComboParametersAddition_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookComboParametersAddition_r16(CodebookComboParametersAddition_r16& value)
{
    if (value.has_type1SP_Type2_null_r16) {
        Free_CodebookComboParametersAddition_r16_Type1SP_Type2_null_r16(value.type1SP_Type2_null_r16);
    }
    if (value.has_type1SP_Type2PS_null_r16) {
        Free_CodebookComboParametersAddition_r16_Type1SP_Type2PS_null_r16(value.type1SP_Type2PS_null_r16);
    }
    if (value.has_type1SP_eType2R1_null_r16) {
        Free_CodebookComboParametersAddition_r16_Type1SP_eType2R1_null_r16(value.type1SP_eType2R1_null_r16);
    }
    if (value.has_type1SP_eType2R2_null_r16) {
        Free_CodebookComboParametersAddition_r16_Type1SP_eType2R2_null_r16(value.type1SP_eType2R2_null_r16);
    }
    if (value.has_type1SP_eType2R1PS_null_r16) {
        Free_CodebookComboParametersAddition_r16_Type1SP_eType2R1PS_null_r16(value.type1SP_eType2R1PS_null_r16);
    }
    if (value.has_type1SP_eType2R2PS_null_r16) {
        Free_CodebookComboParametersAddition_r16_Type1SP_eType2R2PS_null_r16(value.type1SP_eType2R2PS_null_r16);
    }
    if (value.has_type1SP_Type2_Type2PS_r16) {
        Free_CodebookComboParametersAddition_r16_Type1SP_Type2_Type2PS_r16(value.type1SP_Type2_Type2PS_r16);
    }
    if (value.has_type1MP_Type2_null_r16) {
        Free_CodebookComboParametersAddition_r16_Type1MP_Type2_null_r16(value.type1MP_Type2_null_r16);
    }
    if (value.has_type1MP_Type2PS_null_r16) {
        Free_CodebookComboParametersAddition_r16_Type1MP_Type2PS_null_r16(value.type1MP_Type2PS_null_r16);
    }
    if (value.has_type1MP_eType2R1_null_r16) {
        Free_CodebookComboParametersAddition_r16_Type1MP_eType2R1_null_r16(value.type1MP_eType2R1_null_r16);
    }
    if (value.has_type1MP_eType2R2_null_r16) {
        Free_CodebookComboParametersAddition_r16_Type1MP_eType2R2_null_r16(value.type1MP_eType2R2_null_r16);
    }
    if (value.has_type1MP_eType2R1PS_null_r16) {
        Free_CodebookComboParametersAddition_r16_Type1MP_eType2R1PS_null_r16(value.type1MP_eType2R1PS_null_r16);
    }
    if (value.has_type1MP_eType2R2PS_null_r16) {
        Free_CodebookComboParametersAddition_r16_Type1MP_eType2R2PS_null_r16(value.type1MP_eType2R2PS_null_r16);
    }
    if (value.has_type1MP_Type2_Type2PS_r16) {
        Free_CodebookComboParametersAddition_r16_Type1MP_Type2_Type2PS_r16(value.type1MP_Type2_Type2PS_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookParametersfetype2_r17：ASN.1 CodebookParametersfetype2-r17；源文件第 15672 行；SEQUENCE。
// Encode_CodebookParametersfetype2_r17 只读不分配；Decode_CodebookParametersfetype2_r17 可能 malloc（失败时内部已释放并清零）；Free_CodebookParametersfetype2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookParametersfetype2_r17(Encoder& enc, const CodebookParametersfetype2_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_fetype2R1_r17);
    enc.WriteBit(value.has_fetype2R2_r17);
    enc.WriteBit(value.has_fetype2Rank3Rank4_r17);
enc.WriteConstrainedLength(value.fetype2basic_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.fetype2basic_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.fetype2basic_r17_items[i]), 0, 511);
}
    if (value.has_fetype2R1_r17) {
enc.WriteConstrainedLength(value.fetype2R1_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.fetype2R1_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.fetype2R1_r17_items[i]), 0, 511);
}
    }
    if (value.has_fetype2R2_r17) {
enc.WriteConstrainedLength(value.fetype2R2_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.fetype2R2_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.fetype2R2_r17_items[i]), 0, 511);
}
    }
    if (value.has_fetype2Rank3Rank4_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fetype2Rank3Rank4_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookParametersfetype2_r17(Decoder& dec, CodebookParametersfetype2_r17& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.fetype2basic_r17_count)) { goto fail; }
if (value.fetype2basic_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.fetype2basic_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.fetype2basic_r17_count > 0u) {
    value.fetype2basic_r17_items = (int64_t*)std::malloc((std::size_t)value.fetype2basic_r17_count * sizeof(int64_t));
    if (value.fetype2basic_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.fetype2basic_r17_items, 0, (std::size_t)value.fetype2basic_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.fetype2basic_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.fetype2basic_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.fetype2R1_r17_count)) { goto fail; }
if (value.fetype2R1_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.fetype2R1_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.fetype2R1_r17_count > 0u) {
    value.fetype2R1_r17_items = (int64_t*)std::malloc((std::size_t)value.fetype2R1_r17_count * sizeof(int64_t));
    if (value.fetype2R1_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.fetype2R1_r17_items, 0, (std::size_t)value.fetype2R1_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.fetype2R1_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.fetype2R1_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.fetype2R2_r17_count)) { goto fail; }
if (value.fetype2R2_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.fetype2R2_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.fetype2R2_r17_count > 0u) {
    value.fetype2R2_r17_items = (int64_t*)std::malloc((std::size_t)value.fetype2R2_r17_count * sizeof(int64_t));
    if (value.fetype2R2_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.fetype2R2_r17_items, 0, (std::size_t)value.fetype2R2_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.fetype2R2_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.fetype2R2_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_2) {
        value.fetype2Rank3Rank4_r17 = (CodebookParametersfetype2_r17_Fetype2Rank3Rank4_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParametersfetype2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParametersfetype2_r17(CodebookParametersfetype2_r17& value)
{
    if (value.fetype2basic_r17_items != nullptr) {
        for (std::uint32_t i = 0; i < value.fetype2basic_r17_count; ++i) {
        }
        std::free(value.fetype2basic_r17_items);
        value.fetype2basic_r17_items = nullptr;
    }
    value.fetype2basic_r17_count = 0;
    if (value.has_fetype2R1_r17) {
        if (value.fetype2R1_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.fetype2R1_r17_count; ++i) {
            }
            std::free(value.fetype2R1_r17_items);
            value.fetype2R1_r17_items = nullptr;
        }
        value.fetype2R1_r17_count = 0;
    }
    if (value.has_fetype2R2_r17) {
        if (value.fetype2R2_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.fetype2R2_r17_count; ++i) {
            }
            std::free(value.fetype2R2_r17_items);
            value.fetype2R2_r17_items = nullptr;
        }
        value.fetype2R2_r17_count = 0;
    }
    if (value.has_fetype2Rank3Rank4_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookComboParameterMixedType_r17：ASN.1 CodebookComboParameterMixedType-r17；源文件第 15685 行；SEQUENCE。
// Encode_CodebookComboParameterMixedType_r17 只读不分配；Decode_CodebookComboParameterMixedType_r17 可能 malloc（失败时内部已释放并清零）；Free_CodebookComboParameterMixedType_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookComboParameterMixedType_r17(Encoder& enc, const CodebookComboParameterMixedType_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_type1SP_feType2PS_null_r17);
    enc.WriteBit(value.has_type1SP_feType2PS_M2R1_null_r17);
    enc.WriteBit(value.has_type1SP_feType2PS_M2R2_null_r1);
    enc.WriteBit(value.has_type1SP_Type2_feType2_PS_M1_r17);
    enc.WriteBit(value.has_type1SP_Type2_feType2_PS_M2R1_r17);
    enc.WriteBit(value.has_type1SP_eType2R1_feType2_PS_M1_r17);
    enc.WriteBit(value.has_type1SP_eType2R1_feType2_PS_M2R1_r17);
    enc.WriteBit(value.has_type1MP_feType2PS_null_r17);
    enc.WriteBit(value.has_type1MP_feType2PS_M2R1_null_r17);
    enc.WriteBit(value.has_type1MP_feType2PS_M2R2_null_r17);
    enc.WriteBit(value.has_type1MP_Type2_feType2_PS_M1_r17);
    enc.WriteBit(value.has_type1MP_Type2_feType2_PS_M2R1_r17);
    enc.WriteBit(value.has_type1MP_eType2R1_feType2_PS_M1_r17);
    enc.WriteBit(value.has_type1MP_eType2R1_feType2_PS_M2R1_r17);
    if (value.has_type1SP_feType2PS_null_r17) {
enc.WriteConstrainedLength(value.type1SP_feType2PS_null_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1SP_feType2PS_null_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1SP_feType2PS_null_r17_items[i]), 0, 511);
}
    }
    if (value.has_type1SP_feType2PS_M2R1_null_r17) {
enc.WriteConstrainedLength(value.type1SP_feType2PS_M2R1_null_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1SP_feType2PS_M2R1_null_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1SP_feType2PS_M2R1_null_r17_items[i]), 0, 511);
}
    }
    if (value.has_type1SP_feType2PS_M2R2_null_r1) {
enc.WriteConstrainedLength(value.type1SP_feType2PS_M2R2_null_r1_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1SP_feType2PS_M2R2_null_r1_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1SP_feType2PS_M2R2_null_r1_items[i]), 0, 511);
}
    }
    if (value.has_type1SP_Type2_feType2_PS_M1_r17) {
enc.WriteConstrainedLength(value.type1SP_Type2_feType2_PS_M1_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1SP_Type2_feType2_PS_M1_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1SP_Type2_feType2_PS_M1_r17_items[i]), 0, 511);
}
    }
    if (value.has_type1SP_Type2_feType2_PS_M2R1_r17) {
enc.WriteConstrainedLength(value.type1SP_Type2_feType2_PS_M2R1_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1SP_Type2_feType2_PS_M2R1_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1SP_Type2_feType2_PS_M2R1_r17_items[i]), 0, 511);
}
    }
    if (value.has_type1SP_eType2R1_feType2_PS_M1_r17) {
enc.WriteConstrainedLength(value.type1SP_eType2R1_feType2_PS_M1_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1SP_eType2R1_feType2_PS_M1_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1SP_eType2R1_feType2_PS_M1_r17_items[i]), 0, 511);
}
    }
    if (value.has_type1SP_eType2R1_feType2_PS_M2R1_r17) {
enc.WriteConstrainedLength(value.type1SP_eType2R1_feType2_PS_M2R1_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1SP_eType2R1_feType2_PS_M2R1_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1SP_eType2R1_feType2_PS_M2R1_r17_items[i]), 0, 511);
}
    }
    if (value.has_type1MP_feType2PS_null_r17) {
enc.WriteConstrainedLength(value.type1MP_feType2PS_null_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1MP_feType2PS_null_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1MP_feType2PS_null_r17_items[i]), 0, 511);
}
    }
    if (value.has_type1MP_feType2PS_M2R1_null_r17) {
enc.WriteConstrainedLength(value.type1MP_feType2PS_M2R1_null_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1MP_feType2PS_M2R1_null_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1MP_feType2PS_M2R1_null_r17_items[i]), 0, 511);
}
    }
    if (value.has_type1MP_feType2PS_M2R2_null_r17) {
enc.WriteConstrainedLength(value.type1MP_feType2PS_M2R2_null_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1MP_feType2PS_M2R2_null_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1MP_feType2PS_M2R2_null_r17_items[i]), 0, 511);
}
    }
    if (value.has_type1MP_Type2_feType2_PS_M1_r17) {
enc.WriteConstrainedLength(value.type1MP_Type2_feType2_PS_M1_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1MP_Type2_feType2_PS_M1_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1MP_Type2_feType2_PS_M1_r17_items[i]), 0, 511);
}
    }
    if (value.has_type1MP_Type2_feType2_PS_M2R1_r17) {
enc.WriteConstrainedLength(value.type1MP_Type2_feType2_PS_M2R1_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1MP_Type2_feType2_PS_M2R1_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1MP_Type2_feType2_PS_M2R1_r17_items[i]), 0, 511);
}
    }
    if (value.has_type1MP_eType2R1_feType2_PS_M1_r17) {
enc.WriteConstrainedLength(value.type1MP_eType2R1_feType2_PS_M1_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1MP_eType2R1_feType2_PS_M1_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1MP_eType2R1_feType2_PS_M1_r17_items[i]), 0, 511);
}
    }
    if (value.has_type1MP_eType2R1_feType2_PS_M2R1_r17) {
enc.WriteConstrainedLength(value.type1MP_eType2R1_feType2_PS_M2R1_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1MP_eType2R1_feType2_PS_M2R1_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1MP_eType2R1_feType2_PS_M2R1_r17_items[i]), 0, 511);
}
    }
    return enc.Error();
}

ErrorCode Decode_CodebookComboParameterMixedType_r17(Decoder& dec, CodebookComboParameterMixedType_r17& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.type1SP_feType2PS_null_r17_count)) { goto fail; }
if (value.type1SP_feType2PS_null_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1SP_feType2PS_null_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1SP_feType2PS_null_r17_count > 0u) {
    value.type1SP_feType2PS_null_r17_items = (int64_t*)std::malloc((std::size_t)value.type1SP_feType2PS_null_r17_count * sizeof(int64_t));
    if (value.type1SP_feType2PS_null_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1SP_feType2PS_null_r17_items, 0, (std::size_t)value.type1SP_feType2PS_null_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1SP_feType2PS_null_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1SP_feType2PS_null_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1SP_feType2PS_M2R1_null_r17_count)) { goto fail; }
if (value.type1SP_feType2PS_M2R1_null_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1SP_feType2PS_M2R1_null_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1SP_feType2PS_M2R1_null_r17_count > 0u) {
    value.type1SP_feType2PS_M2R1_null_r17_items = (int64_t*)std::malloc((std::size_t)value.type1SP_feType2PS_M2R1_null_r17_count * sizeof(int64_t));
    if (value.type1SP_feType2PS_M2R1_null_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1SP_feType2PS_M2R1_null_r17_items, 0, (std::size_t)value.type1SP_feType2PS_M2R1_null_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1SP_feType2PS_M2R1_null_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1SP_feType2PS_M2R1_null_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1SP_feType2PS_M2R2_null_r1_count)) { goto fail; }
if (value.type1SP_feType2PS_M2R2_null_r1_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1SP_feType2PS_M2R2_null_r1_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1SP_feType2PS_M2R2_null_r1_count > 0u) {
    value.type1SP_feType2PS_M2R2_null_r1_items = (int64_t*)std::malloc((std::size_t)value.type1SP_feType2PS_M2R2_null_r1_count * sizeof(int64_t));
    if (value.type1SP_feType2PS_M2R2_null_r1_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1SP_feType2PS_M2R2_null_r1_items, 0, (std::size_t)value.type1SP_feType2PS_M2R2_null_r1_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1SP_feType2PS_M2R2_null_r1_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1SP_feType2PS_M2R2_null_r1_items[i] = (int64_t)tmp_value;
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1SP_Type2_feType2_PS_M1_r17_count)) { goto fail; }
if (value.type1SP_Type2_feType2_PS_M1_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1SP_Type2_feType2_PS_M1_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1SP_Type2_feType2_PS_M1_r17_count > 0u) {
    value.type1SP_Type2_feType2_PS_M1_r17_items = (int64_t*)std::malloc((std::size_t)value.type1SP_Type2_feType2_PS_M1_r17_count * sizeof(int64_t));
    if (value.type1SP_Type2_feType2_PS_M1_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1SP_Type2_feType2_PS_M1_r17_items, 0, (std::size_t)value.type1SP_Type2_feType2_PS_M1_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1SP_Type2_feType2_PS_M1_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1SP_Type2_feType2_PS_M1_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1SP_Type2_feType2_PS_M2R1_r17_count)) { goto fail; }
if (value.type1SP_Type2_feType2_PS_M2R1_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1SP_Type2_feType2_PS_M2R1_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1SP_Type2_feType2_PS_M2R1_r17_count > 0u) {
    value.type1SP_Type2_feType2_PS_M2R1_r17_items = (int64_t*)std::malloc((std::size_t)value.type1SP_Type2_feType2_PS_M2R1_r17_count * sizeof(int64_t));
    if (value.type1SP_Type2_feType2_PS_M2R1_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1SP_Type2_feType2_PS_M2R1_r17_items, 0, (std::size_t)value.type1SP_Type2_feType2_PS_M2R1_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1SP_Type2_feType2_PS_M2R1_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1SP_Type2_feType2_PS_M2R1_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_5) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1SP_eType2R1_feType2_PS_M1_r17_count)) { goto fail; }
if (value.type1SP_eType2R1_feType2_PS_M1_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1SP_eType2R1_feType2_PS_M1_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1SP_eType2R1_feType2_PS_M1_r17_count > 0u) {
    value.type1SP_eType2R1_feType2_PS_M1_r17_items = (int64_t*)std::malloc((std::size_t)value.type1SP_eType2R1_feType2_PS_M1_r17_count * sizeof(int64_t));
    if (value.type1SP_eType2R1_feType2_PS_M1_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1SP_eType2R1_feType2_PS_M1_r17_items, 0, (std::size_t)value.type1SP_eType2R1_feType2_PS_M1_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1SP_eType2R1_feType2_PS_M1_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1SP_eType2R1_feType2_PS_M1_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_6) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1SP_eType2R1_feType2_PS_M2R1_r17_count)) { goto fail; }
if (value.type1SP_eType2R1_feType2_PS_M2R1_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1SP_eType2R1_feType2_PS_M2R1_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1SP_eType2R1_feType2_PS_M2R1_r17_count > 0u) {
    value.type1SP_eType2R1_feType2_PS_M2R1_r17_items = (int64_t*)std::malloc((std::size_t)value.type1SP_eType2R1_feType2_PS_M2R1_r17_count * sizeof(int64_t));
    if (value.type1SP_eType2R1_feType2_PS_M2R1_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1SP_eType2R1_feType2_PS_M2R1_r17_items, 0, (std::size_t)value.type1SP_eType2R1_feType2_PS_M2R1_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1SP_eType2R1_feType2_PS_M2R1_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1SP_eType2R1_feType2_PS_M2R1_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_7) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1MP_feType2PS_null_r17_count)) { goto fail; }
if (value.type1MP_feType2PS_null_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1MP_feType2PS_null_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1MP_feType2PS_null_r17_count > 0u) {
    value.type1MP_feType2PS_null_r17_items = (int64_t*)std::malloc((std::size_t)value.type1MP_feType2PS_null_r17_count * sizeof(int64_t));
    if (value.type1MP_feType2PS_null_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1MP_feType2PS_null_r17_items, 0, (std::size_t)value.type1MP_feType2PS_null_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1MP_feType2PS_null_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1MP_feType2PS_null_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_8) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1MP_feType2PS_M2R1_null_r17_count)) { goto fail; }
if (value.type1MP_feType2PS_M2R1_null_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1MP_feType2PS_M2R1_null_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1MP_feType2PS_M2R1_null_r17_count > 0u) {
    value.type1MP_feType2PS_M2R1_null_r17_items = (int64_t*)std::malloc((std::size_t)value.type1MP_feType2PS_M2R1_null_r17_count * sizeof(int64_t));
    if (value.type1MP_feType2PS_M2R1_null_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1MP_feType2PS_M2R1_null_r17_items, 0, (std::size_t)value.type1MP_feType2PS_M2R1_null_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1MP_feType2PS_M2R1_null_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1MP_feType2PS_M2R1_null_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_9) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1MP_feType2PS_M2R2_null_r17_count)) { goto fail; }
if (value.type1MP_feType2PS_M2R2_null_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1MP_feType2PS_M2R2_null_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1MP_feType2PS_M2R2_null_r17_count > 0u) {
    value.type1MP_feType2PS_M2R2_null_r17_items = (int64_t*)std::malloc((std::size_t)value.type1MP_feType2PS_M2R2_null_r17_count * sizeof(int64_t));
    if (value.type1MP_feType2PS_M2R2_null_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1MP_feType2PS_M2R2_null_r17_items, 0, (std::size_t)value.type1MP_feType2PS_M2R2_null_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1MP_feType2PS_M2R2_null_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1MP_feType2PS_M2R2_null_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_10) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1MP_Type2_feType2_PS_M1_r17_count)) { goto fail; }
if (value.type1MP_Type2_feType2_PS_M1_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1MP_Type2_feType2_PS_M1_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1MP_Type2_feType2_PS_M1_r17_count > 0u) {
    value.type1MP_Type2_feType2_PS_M1_r17_items = (int64_t*)std::malloc((std::size_t)value.type1MP_Type2_feType2_PS_M1_r17_count * sizeof(int64_t));
    if (value.type1MP_Type2_feType2_PS_M1_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1MP_Type2_feType2_PS_M1_r17_items, 0, (std::size_t)value.type1MP_Type2_feType2_PS_M1_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1MP_Type2_feType2_PS_M1_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1MP_Type2_feType2_PS_M1_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_11) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1MP_Type2_feType2_PS_M2R1_r17_count)) { goto fail; }
if (value.type1MP_Type2_feType2_PS_M2R1_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1MP_Type2_feType2_PS_M2R1_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1MP_Type2_feType2_PS_M2R1_r17_count > 0u) {
    value.type1MP_Type2_feType2_PS_M2R1_r17_items = (int64_t*)std::malloc((std::size_t)value.type1MP_Type2_feType2_PS_M2R1_r17_count * sizeof(int64_t));
    if (value.type1MP_Type2_feType2_PS_M2R1_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1MP_Type2_feType2_PS_M2R1_r17_items, 0, (std::size_t)value.type1MP_Type2_feType2_PS_M2R1_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1MP_Type2_feType2_PS_M2R1_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1MP_Type2_feType2_PS_M2R1_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_12) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1MP_eType2R1_feType2_PS_M1_r17_count)) { goto fail; }
if (value.type1MP_eType2R1_feType2_PS_M1_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1MP_eType2R1_feType2_PS_M1_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1MP_eType2R1_feType2_PS_M1_r17_count > 0u) {
    value.type1MP_eType2R1_feType2_PS_M1_r17_items = (int64_t*)std::malloc((std::size_t)value.type1MP_eType2R1_feType2_PS_M1_r17_count * sizeof(int64_t));
    if (value.type1MP_eType2R1_feType2_PS_M1_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1MP_eType2R1_feType2_PS_M1_r17_items, 0, (std::size_t)value.type1MP_eType2R1_feType2_PS_M1_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1MP_eType2R1_feType2_PS_M1_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1MP_eType2R1_feType2_PS_M1_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_13) {
if (!dec.ReadConstrainedLength(0u, 0u, value.type1MP_eType2R1_feType2_PS_M2R1_r17_count)) { goto fail; }
if (value.type1MP_eType2R1_feType2_PS_M2R1_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1MP_eType2R1_feType2_PS_M2R1_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1MP_eType2R1_feType2_PS_M2R1_r17_count > 0u) {
    value.type1MP_eType2R1_feType2_PS_M2R1_r17_items = (int64_t*)std::malloc((std::size_t)value.type1MP_eType2R1_feType2_PS_M2R1_r17_count * sizeof(int64_t));
    if (value.type1MP_eType2R1_feType2_PS_M2R1_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1MP_eType2R1_feType2_PS_M2R1_r17_items, 0, (std::size_t)value.type1MP_eType2R1_feType2_PS_M2R1_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1MP_eType2R1_feType2_PS_M2R1_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1MP_eType2R1_feType2_PS_M2R1_r17_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookComboParameterMixedType_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookComboParameterMixedType_r17(CodebookComboParameterMixedType_r17& value)
{
    if (value.has_type1SP_feType2PS_null_r17) {
        if (value.type1SP_feType2PS_null_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1SP_feType2PS_null_r17_count; ++i) {
            }
            std::free(value.type1SP_feType2PS_null_r17_items);
            value.type1SP_feType2PS_null_r17_items = nullptr;
        }
        value.type1SP_feType2PS_null_r17_count = 0;
    }
    if (value.has_type1SP_feType2PS_M2R1_null_r17) {
        if (value.type1SP_feType2PS_M2R1_null_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1SP_feType2PS_M2R1_null_r17_count; ++i) {
            }
            std::free(value.type1SP_feType2PS_M2R1_null_r17_items);
            value.type1SP_feType2PS_M2R1_null_r17_items = nullptr;
        }
        value.type1SP_feType2PS_M2R1_null_r17_count = 0;
    }
    if (value.has_type1SP_feType2PS_M2R2_null_r1) {
        if (value.type1SP_feType2PS_M2R2_null_r1_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1SP_feType2PS_M2R2_null_r1_count; ++i) {
            }
            std::free(value.type1SP_feType2PS_M2R2_null_r1_items);
            value.type1SP_feType2PS_M2R2_null_r1_items = nullptr;
        }
        value.type1SP_feType2PS_M2R2_null_r1_count = 0;
    }
    if (value.has_type1SP_Type2_feType2_PS_M1_r17) {
        if (value.type1SP_Type2_feType2_PS_M1_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1SP_Type2_feType2_PS_M1_r17_count; ++i) {
            }
            std::free(value.type1SP_Type2_feType2_PS_M1_r17_items);
            value.type1SP_Type2_feType2_PS_M1_r17_items = nullptr;
        }
        value.type1SP_Type2_feType2_PS_M1_r17_count = 0;
    }
    if (value.has_type1SP_Type2_feType2_PS_M2R1_r17) {
        if (value.type1SP_Type2_feType2_PS_M2R1_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1SP_Type2_feType2_PS_M2R1_r17_count; ++i) {
            }
            std::free(value.type1SP_Type2_feType2_PS_M2R1_r17_items);
            value.type1SP_Type2_feType2_PS_M2R1_r17_items = nullptr;
        }
        value.type1SP_Type2_feType2_PS_M2R1_r17_count = 0;
    }
    if (value.has_type1SP_eType2R1_feType2_PS_M1_r17) {
        if (value.type1SP_eType2R1_feType2_PS_M1_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1SP_eType2R1_feType2_PS_M1_r17_count; ++i) {
            }
            std::free(value.type1SP_eType2R1_feType2_PS_M1_r17_items);
            value.type1SP_eType2R1_feType2_PS_M1_r17_items = nullptr;
        }
        value.type1SP_eType2R1_feType2_PS_M1_r17_count = 0;
    }
    if (value.has_type1SP_eType2R1_feType2_PS_M2R1_r17) {
        if (value.type1SP_eType2R1_feType2_PS_M2R1_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1SP_eType2R1_feType2_PS_M2R1_r17_count; ++i) {
            }
            std::free(value.type1SP_eType2R1_feType2_PS_M2R1_r17_items);
            value.type1SP_eType2R1_feType2_PS_M2R1_r17_items = nullptr;
        }
        value.type1SP_eType2R1_feType2_PS_M2R1_r17_count = 0;
    }
    if (value.has_type1MP_feType2PS_null_r17) {
        if (value.type1MP_feType2PS_null_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1MP_feType2PS_null_r17_count; ++i) {
            }
            std::free(value.type1MP_feType2PS_null_r17_items);
            value.type1MP_feType2PS_null_r17_items = nullptr;
        }
        value.type1MP_feType2PS_null_r17_count = 0;
    }
    if (value.has_type1MP_feType2PS_M2R1_null_r17) {
        if (value.type1MP_feType2PS_M2R1_null_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1MP_feType2PS_M2R1_null_r17_count; ++i) {
            }
            std::free(value.type1MP_feType2PS_M2R1_null_r17_items);
            value.type1MP_feType2PS_M2R1_null_r17_items = nullptr;
        }
        value.type1MP_feType2PS_M2R1_null_r17_count = 0;
    }
    if (value.has_type1MP_feType2PS_M2R2_null_r17) {
        if (value.type1MP_feType2PS_M2R2_null_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1MP_feType2PS_M2R2_null_r17_count; ++i) {
            }
            std::free(value.type1MP_feType2PS_M2R2_null_r17_items);
            value.type1MP_feType2PS_M2R2_null_r17_items = nullptr;
        }
        value.type1MP_feType2PS_M2R2_null_r17_count = 0;
    }
    if (value.has_type1MP_Type2_feType2_PS_M1_r17) {
        if (value.type1MP_Type2_feType2_PS_M1_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1MP_Type2_feType2_PS_M1_r17_count; ++i) {
            }
            std::free(value.type1MP_Type2_feType2_PS_M1_r17_items);
            value.type1MP_Type2_feType2_PS_M1_r17_items = nullptr;
        }
        value.type1MP_Type2_feType2_PS_M1_r17_count = 0;
    }
    if (value.has_type1MP_Type2_feType2_PS_M2R1_r17) {
        if (value.type1MP_Type2_feType2_PS_M2R1_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1MP_Type2_feType2_PS_M2R1_r17_count; ++i) {
            }
            std::free(value.type1MP_Type2_feType2_PS_M2R1_r17_items);
            value.type1MP_Type2_feType2_PS_M2R1_r17_items = nullptr;
        }
        value.type1MP_Type2_feType2_PS_M2R1_r17_count = 0;
    }
    if (value.has_type1MP_eType2R1_feType2_PS_M1_r17) {
        if (value.type1MP_eType2R1_feType2_PS_M1_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1MP_eType2R1_feType2_PS_M1_r17_count; ++i) {
            }
            std::free(value.type1MP_eType2R1_feType2_PS_M1_r17_items);
            value.type1MP_eType2R1_feType2_PS_M1_r17_items = nullptr;
        }
        value.type1MP_eType2R1_feType2_PS_M1_r17_count = 0;
    }
    if (value.has_type1MP_eType2R1_feType2_PS_M2R1_r17) {
        if (value.type1MP_eType2R1_feType2_PS_M2R1_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1MP_eType2R1_feType2_PS_M2R1_r17_count; ++i) {
            }
            std::free(value.type1MP_eType2R1_feType2_PS_M2R1_r17_items);
            value.type1MP_eType2R1_feType2_PS_M2R1_r17_items = nullptr;
        }
        value.type1MP_eType2R1_feType2_PS_M2R1_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookComboParameterMultiTRP_r17：ASN.1 CodebookComboParameterMultiTRP-r17；源文件第 15717 行；SEQUENCE。
// Encode_CodebookComboParameterMultiTRP_r17 只读不分配；Decode_CodebookComboParameterMultiTRP_r17 可能 malloc（失败时内部已释放并清零）；Free_CodebookComboParameterMultiTRP_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookComboParameterMultiTRP_r17(Encoder& enc, const CodebookComboParameterMultiTRP_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_nCJT_null_null);
    enc.WriteBit(value.has_nCJT1SP_null_null);
    enc.WriteBit(value.has_nCJT_Type2_null_r16);
    enc.WriteBit(value.has_nCJT_Type2PS_null_r16);
    enc.WriteBit(value.has_nCJT_eType2R1_null_r16);
    enc.WriteBit(value.has_nCJT_eType2R2_null_r16);
    enc.WriteBit(value.has_nCJT_eType2R1PS_null_r16);
    enc.WriteBit(value.has_nCJT_eType2R2PS_null_r16);
    enc.WriteBit(value.has_nCJT_Type2_Type2PS_r16);
    enc.WriteBit(value.has_nCJT1SP_Type2_null_r16);
    enc.WriteBit(value.has_nCJT1SP_Type2PS_null_r16);
    enc.WriteBit(value.has_nCJT1SP_eType2R1_null_r16);
    enc.WriteBit(value.has_nCJT1SP_eType2R2_null_r16);
    enc.WriteBit(value.has_nCJT1SP_eType2R1PS_null_r16);
    enc.WriteBit(value.has_nCJT1SP_eType2R2PS_null_r16);
    enc.WriteBit(value.has_nCJT1SP_Type2_Type2PS_r16);
    enc.WriteBit(value.has_nCJT_feType2PS_null_r17);
    enc.WriteBit(value.has_nCJT_feType2PS_M2R1_null_r17);
    enc.WriteBit(value.has_nCJT_feType2PS_M2R2_null_r17);
    enc.WriteBit(value.has_nCJT_Type2_feType2_PS_M1_r17);
    enc.WriteBit(value.has_nCJT_Type2_feType2_PS_M2R1_r17);
    enc.WriteBit(value.has_nCJT_eType2R1_feType2_PS_M1_r17);
    enc.WriteBit(value.has_nCJT_eType2R1_feType2_PS_M2R1_r17);
    enc.WriteBit(value.has_nCJT1SP_feType2PS_null_r17);
    enc.WriteBit(value.has_nCJT1SP_feType2PS_M2R1_null_r17);
    enc.WriteBit(value.has_nCJT1SP_feType2PS_M2R2_null_r1);
    enc.WriteBit(value.has_nCJT1SP_Type2_feType2_PS_M1_r17);
    enc.WriteBit(value.has_nCJT1SP_Type2_feType2_PS_M2R1_r17);
    enc.WriteBit(value.has_nCJT1SP_eType2R1_feType2_PS_M1_r17);
    enc.WriteBit(value.has_nCJT1SP_eType2R1_feType2_PS_M2R1_r17);
    if (value.has_nCJT_null_null) {
enc.WriteConstrainedLength(value.nCJT_null_null_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT_null_null_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT_null_null_items[i]), 0, 511);
}
    }
    if (value.has_nCJT1SP_null_null) {
enc.WriteConstrainedLength(value.nCJT1SP_null_null_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT1SP_null_null_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT1SP_null_null_items[i]), 0, 511);
}
    }
    if (value.has_nCJT_Type2_null_r16) {
enc.WriteConstrainedLength(value.nCJT_Type2_null_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT_Type2_null_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT_Type2_null_r16_items[i]), 0, 511);
}
    }
    if (value.has_nCJT_Type2PS_null_r16) {
enc.WriteConstrainedLength(value.nCJT_Type2PS_null_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT_Type2PS_null_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT_Type2PS_null_r16_items[i]), 0, 511);
}
    }
    if (value.has_nCJT_eType2R1_null_r16) {
enc.WriteConstrainedLength(value.nCJT_eType2R1_null_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT_eType2R1_null_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT_eType2R1_null_r16_items[i]), 0, 511);
}
    }
    if (value.has_nCJT_eType2R2_null_r16) {
enc.WriteConstrainedLength(value.nCJT_eType2R2_null_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT_eType2R2_null_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT_eType2R2_null_r16_items[i]), 0, 511);
}
    }
    if (value.has_nCJT_eType2R1PS_null_r16) {
enc.WriteConstrainedLength(value.nCJT_eType2R1PS_null_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT_eType2R1PS_null_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT_eType2R1PS_null_r16_items[i]), 0, 511);
}
    }
    if (value.has_nCJT_eType2R2PS_null_r16) {
enc.WriteConstrainedLength(value.nCJT_eType2R2PS_null_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT_eType2R2PS_null_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT_eType2R2PS_null_r16_items[i]), 0, 511);
}
    }
    if (value.has_nCJT_Type2_Type2PS_r16) {
enc.WriteConstrainedLength(value.nCJT_Type2_Type2PS_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT_Type2_Type2PS_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT_Type2_Type2PS_r16_items[i]), 0, 511);
}
    }
    if (value.has_nCJT1SP_Type2_null_r16) {
enc.WriteConstrainedLength(value.nCJT1SP_Type2_null_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT1SP_Type2_null_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT1SP_Type2_null_r16_items[i]), 0, 511);
}
    }
    if (value.has_nCJT1SP_Type2PS_null_r16) {
enc.WriteConstrainedLength(value.nCJT1SP_Type2PS_null_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT1SP_Type2PS_null_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT1SP_Type2PS_null_r16_items[i]), 0, 511);
}
    }
    if (value.has_nCJT1SP_eType2R1_null_r16) {
enc.WriteConstrainedLength(value.nCJT1SP_eType2R1_null_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT1SP_eType2R1_null_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT1SP_eType2R1_null_r16_items[i]), 0, 511);
}
    }
    if (value.has_nCJT1SP_eType2R2_null_r16) {
enc.WriteConstrainedLength(value.nCJT1SP_eType2R2_null_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT1SP_eType2R2_null_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT1SP_eType2R2_null_r16_items[i]), 0, 511);
}
    }
    if (value.has_nCJT1SP_eType2R1PS_null_r16) {
enc.WriteConstrainedLength(value.nCJT1SP_eType2R1PS_null_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT1SP_eType2R1PS_null_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT1SP_eType2R1PS_null_r16_items[i]), 0, 511);
}
    }
    if (value.has_nCJT1SP_eType2R2PS_null_r16) {
enc.WriteConstrainedLength(value.nCJT1SP_eType2R2PS_null_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT1SP_eType2R2PS_null_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT1SP_eType2R2PS_null_r16_items[i]), 0, 511);
}
    }
    if (value.has_nCJT1SP_Type2_Type2PS_r16) {
enc.WriteConstrainedLength(value.nCJT1SP_Type2_Type2PS_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT1SP_Type2_Type2PS_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT1SP_Type2_Type2PS_r16_items[i]), 0, 511);
}
    }
    if (value.has_nCJT_feType2PS_null_r17) {
enc.WriteConstrainedLength(value.nCJT_feType2PS_null_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT_feType2PS_null_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT_feType2PS_null_r17_items[i]), 0, 511);
}
    }
    if (value.has_nCJT_feType2PS_M2R1_null_r17) {
enc.WriteConstrainedLength(value.nCJT_feType2PS_M2R1_null_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT_feType2PS_M2R1_null_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT_feType2PS_M2R1_null_r17_items[i]), 0, 511);
}
    }
    if (value.has_nCJT_feType2PS_M2R2_null_r17) {
enc.WriteConstrainedLength(value.nCJT_feType2PS_M2R2_null_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT_feType2PS_M2R2_null_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT_feType2PS_M2R2_null_r17_items[i]), 0, 511);
}
    }
    if (value.has_nCJT_Type2_feType2_PS_M1_r17) {
enc.WriteConstrainedLength(value.nCJT_Type2_feType2_PS_M1_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT_Type2_feType2_PS_M1_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT_Type2_feType2_PS_M1_r17_items[i]), 0, 511);
}
    }
    if (value.has_nCJT_Type2_feType2_PS_M2R1_r17) {
enc.WriteConstrainedLength(value.nCJT_Type2_feType2_PS_M2R1_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT_Type2_feType2_PS_M2R1_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT_Type2_feType2_PS_M2R1_r17_items[i]), 0, 511);
}
    }
    if (value.has_nCJT_eType2R1_feType2_PS_M1_r17) {
enc.WriteConstrainedLength(value.nCJT_eType2R1_feType2_PS_M1_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT_eType2R1_feType2_PS_M1_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT_eType2R1_feType2_PS_M1_r17_items[i]), 0, 511);
}
    }
    if (value.has_nCJT_eType2R1_feType2_PS_M2R1_r17) {
enc.WriteConstrainedLength(value.nCJT_eType2R1_feType2_PS_M2R1_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT_eType2R1_feType2_PS_M2R1_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT_eType2R1_feType2_PS_M2R1_r17_items[i]), 0, 511);
}
    }
    if (value.has_nCJT1SP_feType2PS_null_r17) {
enc.WriteConstrainedLength(value.nCJT1SP_feType2PS_null_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT1SP_feType2PS_null_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT1SP_feType2PS_null_r17_items[i]), 0, 511);
}
    }
    if (value.has_nCJT1SP_feType2PS_M2R1_null_r17) {
enc.WriteConstrainedLength(value.nCJT1SP_feType2PS_M2R1_null_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT1SP_feType2PS_M2R1_null_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT1SP_feType2PS_M2R1_null_r17_items[i]), 0, 511);
}
    }
    if (value.has_nCJT1SP_feType2PS_M2R2_null_r1) {
enc.WriteConstrainedLength(value.nCJT1SP_feType2PS_M2R2_null_r1_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT1SP_feType2PS_M2R2_null_r1_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT1SP_feType2PS_M2R2_null_r1_items[i]), 0, 511);
}
    }
    if (value.has_nCJT1SP_Type2_feType2_PS_M1_r17) {
enc.WriteConstrainedLength(value.nCJT1SP_Type2_feType2_PS_M1_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT1SP_Type2_feType2_PS_M1_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT1SP_Type2_feType2_PS_M1_r17_items[i]), 0, 511);
}
    }
    if (value.has_nCJT1SP_Type2_feType2_PS_M2R1_r17) {
enc.WriteConstrainedLength(value.nCJT1SP_Type2_feType2_PS_M2R1_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT1SP_Type2_feType2_PS_M2R1_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT1SP_Type2_feType2_PS_M2R1_r17_items[i]), 0, 511);
}
    }
    if (value.has_nCJT1SP_eType2R1_feType2_PS_M1_r17) {
enc.WriteConstrainedLength(value.nCJT1SP_eType2R1_feType2_PS_M1_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT1SP_eType2R1_feType2_PS_M1_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT1SP_eType2R1_feType2_PS_M1_r17_items[i]), 0, 511);
}
    }
    if (value.has_nCJT1SP_eType2R1_feType2_PS_M2R1_r17) {
enc.WriteConstrainedLength(value.nCJT1SP_eType2R1_feType2_PS_M2R1_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nCJT1SP_eType2R1_feType2_PS_M2R1_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nCJT1SP_eType2R1_feType2_PS_M2R1_r17_items[i]), 0, 511);
}
    }
    return enc.Error();
}

ErrorCode Decode_CodebookComboParameterMultiTRP_r17(Decoder& dec, CodebookComboParameterMultiTRP_r17& value)
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
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT_null_null_count)) { goto fail; }
if (value.nCJT_null_null_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT_null_null_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT_null_null_count > 0u) {
    value.nCJT_null_null_items = (int64_t*)std::malloc((std::size_t)value.nCJT_null_null_count * sizeof(int64_t));
    if (value.nCJT_null_null_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT_null_null_items, 0, (std::size_t)value.nCJT_null_null_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT_null_null_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT_null_null_items[i] = (int64_t)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT1SP_null_null_count)) { goto fail; }
if (value.nCJT1SP_null_null_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT1SP_null_null_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT1SP_null_null_count > 0u) {
    value.nCJT1SP_null_null_items = (int64_t*)std::malloc((std::size_t)value.nCJT1SP_null_null_count * sizeof(int64_t));
    if (value.nCJT1SP_null_null_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT1SP_null_null_items, 0, (std::size_t)value.nCJT1SP_null_null_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT1SP_null_null_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT1SP_null_null_items[i] = (int64_t)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT_Type2_null_r16_count)) { goto fail; }
if (value.nCJT_Type2_null_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT_Type2_null_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT_Type2_null_r16_count > 0u) {
    value.nCJT_Type2_null_r16_items = (int64_t*)std::malloc((std::size_t)value.nCJT_Type2_null_r16_count * sizeof(int64_t));
    if (value.nCJT_Type2_null_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT_Type2_null_r16_items, 0, (std::size_t)value.nCJT_Type2_null_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT_Type2_null_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT_Type2_null_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT_Type2PS_null_r16_count)) { goto fail; }
if (value.nCJT_Type2PS_null_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT_Type2PS_null_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT_Type2PS_null_r16_count > 0u) {
    value.nCJT_Type2PS_null_r16_items = (int64_t*)std::malloc((std::size_t)value.nCJT_Type2PS_null_r16_count * sizeof(int64_t));
    if (value.nCJT_Type2PS_null_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT_Type2PS_null_r16_items, 0, (std::size_t)value.nCJT_Type2PS_null_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT_Type2PS_null_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT_Type2PS_null_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT_eType2R1_null_r16_count)) { goto fail; }
if (value.nCJT_eType2R1_null_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT_eType2R1_null_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT_eType2R1_null_r16_count > 0u) {
    value.nCJT_eType2R1_null_r16_items = (int64_t*)std::malloc((std::size_t)value.nCJT_eType2R1_null_r16_count * sizeof(int64_t));
    if (value.nCJT_eType2R1_null_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT_eType2R1_null_r16_items, 0, (std::size_t)value.nCJT_eType2R1_null_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT_eType2R1_null_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT_eType2R1_null_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_5) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT_eType2R2_null_r16_count)) { goto fail; }
if (value.nCJT_eType2R2_null_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT_eType2R2_null_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT_eType2R2_null_r16_count > 0u) {
    value.nCJT_eType2R2_null_r16_items = (int64_t*)std::malloc((std::size_t)value.nCJT_eType2R2_null_r16_count * sizeof(int64_t));
    if (value.nCJT_eType2R2_null_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT_eType2R2_null_r16_items, 0, (std::size_t)value.nCJT_eType2R2_null_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT_eType2R2_null_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT_eType2R2_null_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_6) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT_eType2R1PS_null_r16_count)) { goto fail; }
if (value.nCJT_eType2R1PS_null_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT_eType2R1PS_null_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT_eType2R1PS_null_r16_count > 0u) {
    value.nCJT_eType2R1PS_null_r16_items = (int64_t*)std::malloc((std::size_t)value.nCJT_eType2R1PS_null_r16_count * sizeof(int64_t));
    if (value.nCJT_eType2R1PS_null_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT_eType2R1PS_null_r16_items, 0, (std::size_t)value.nCJT_eType2R1PS_null_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT_eType2R1PS_null_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT_eType2R1PS_null_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_7) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT_eType2R2PS_null_r16_count)) { goto fail; }
if (value.nCJT_eType2R2PS_null_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT_eType2R2PS_null_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT_eType2R2PS_null_r16_count > 0u) {
    value.nCJT_eType2R2PS_null_r16_items = (int64_t*)std::malloc((std::size_t)value.nCJT_eType2R2PS_null_r16_count * sizeof(int64_t));
    if (value.nCJT_eType2R2PS_null_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT_eType2R2PS_null_r16_items, 0, (std::size_t)value.nCJT_eType2R2PS_null_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT_eType2R2PS_null_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT_eType2R2PS_null_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_8) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT_Type2_Type2PS_r16_count)) { goto fail; }
if (value.nCJT_Type2_Type2PS_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT_Type2_Type2PS_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT_Type2_Type2PS_r16_count > 0u) {
    value.nCJT_Type2_Type2PS_r16_items = (int64_t*)std::malloc((std::size_t)value.nCJT_Type2_Type2PS_r16_count * sizeof(int64_t));
    if (value.nCJT_Type2_Type2PS_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT_Type2_Type2PS_r16_items, 0, (std::size_t)value.nCJT_Type2_Type2PS_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT_Type2_Type2PS_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT_Type2_Type2PS_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_9) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT1SP_Type2_null_r16_count)) { goto fail; }
if (value.nCJT1SP_Type2_null_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT1SP_Type2_null_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT1SP_Type2_null_r16_count > 0u) {
    value.nCJT1SP_Type2_null_r16_items = (int64_t*)std::malloc((std::size_t)value.nCJT1SP_Type2_null_r16_count * sizeof(int64_t));
    if (value.nCJT1SP_Type2_null_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT1SP_Type2_null_r16_items, 0, (std::size_t)value.nCJT1SP_Type2_null_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT1SP_Type2_null_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT1SP_Type2_null_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_10) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT1SP_Type2PS_null_r16_count)) { goto fail; }
if (value.nCJT1SP_Type2PS_null_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT1SP_Type2PS_null_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT1SP_Type2PS_null_r16_count > 0u) {
    value.nCJT1SP_Type2PS_null_r16_items = (int64_t*)std::malloc((std::size_t)value.nCJT1SP_Type2PS_null_r16_count * sizeof(int64_t));
    if (value.nCJT1SP_Type2PS_null_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT1SP_Type2PS_null_r16_items, 0, (std::size_t)value.nCJT1SP_Type2PS_null_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT1SP_Type2PS_null_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT1SP_Type2PS_null_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_11) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT1SP_eType2R1_null_r16_count)) { goto fail; }
if (value.nCJT1SP_eType2R1_null_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT1SP_eType2R1_null_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT1SP_eType2R1_null_r16_count > 0u) {
    value.nCJT1SP_eType2R1_null_r16_items = (int64_t*)std::malloc((std::size_t)value.nCJT1SP_eType2R1_null_r16_count * sizeof(int64_t));
    if (value.nCJT1SP_eType2R1_null_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT1SP_eType2R1_null_r16_items, 0, (std::size_t)value.nCJT1SP_eType2R1_null_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT1SP_eType2R1_null_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT1SP_eType2R1_null_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_12) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT1SP_eType2R2_null_r16_count)) { goto fail; }
if (value.nCJT1SP_eType2R2_null_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT1SP_eType2R2_null_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT1SP_eType2R2_null_r16_count > 0u) {
    value.nCJT1SP_eType2R2_null_r16_items = (int64_t*)std::malloc((std::size_t)value.nCJT1SP_eType2R2_null_r16_count * sizeof(int64_t));
    if (value.nCJT1SP_eType2R2_null_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT1SP_eType2R2_null_r16_items, 0, (std::size_t)value.nCJT1SP_eType2R2_null_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT1SP_eType2R2_null_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT1SP_eType2R2_null_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_13) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT1SP_eType2R1PS_null_r16_count)) { goto fail; }
if (value.nCJT1SP_eType2R1PS_null_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT1SP_eType2R1PS_null_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT1SP_eType2R1PS_null_r16_count > 0u) {
    value.nCJT1SP_eType2R1PS_null_r16_items = (int64_t*)std::malloc((std::size_t)value.nCJT1SP_eType2R1PS_null_r16_count * sizeof(int64_t));
    if (value.nCJT1SP_eType2R1PS_null_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT1SP_eType2R1PS_null_r16_items, 0, (std::size_t)value.nCJT1SP_eType2R1PS_null_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT1SP_eType2R1PS_null_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT1SP_eType2R1PS_null_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_14) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT1SP_eType2R2PS_null_r16_count)) { goto fail; }
if (value.nCJT1SP_eType2R2PS_null_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT1SP_eType2R2PS_null_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT1SP_eType2R2PS_null_r16_count > 0u) {
    value.nCJT1SP_eType2R2PS_null_r16_items = (int64_t*)std::malloc((std::size_t)value.nCJT1SP_eType2R2PS_null_r16_count * sizeof(int64_t));
    if (value.nCJT1SP_eType2R2PS_null_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT1SP_eType2R2PS_null_r16_items, 0, (std::size_t)value.nCJT1SP_eType2R2PS_null_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT1SP_eType2R2PS_null_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT1SP_eType2R2PS_null_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_15) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT1SP_Type2_Type2PS_r16_count)) { goto fail; }
if (value.nCJT1SP_Type2_Type2PS_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT1SP_Type2_Type2PS_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT1SP_Type2_Type2PS_r16_count > 0u) {
    value.nCJT1SP_Type2_Type2PS_r16_items = (int64_t*)std::malloc((std::size_t)value.nCJT1SP_Type2_Type2PS_r16_count * sizeof(int64_t));
    if (value.nCJT1SP_Type2_Type2PS_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT1SP_Type2_Type2PS_r16_items, 0, (std::size_t)value.nCJT1SP_Type2_Type2PS_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT1SP_Type2_Type2PS_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT1SP_Type2_Type2PS_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_16) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT_feType2PS_null_r17_count)) { goto fail; }
if (value.nCJT_feType2PS_null_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT_feType2PS_null_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT_feType2PS_null_r17_count > 0u) {
    value.nCJT_feType2PS_null_r17_items = (int64_t*)std::malloc((std::size_t)value.nCJT_feType2PS_null_r17_count * sizeof(int64_t));
    if (value.nCJT_feType2PS_null_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT_feType2PS_null_r17_items, 0, (std::size_t)value.nCJT_feType2PS_null_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT_feType2PS_null_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT_feType2PS_null_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_17) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT_feType2PS_M2R1_null_r17_count)) { goto fail; }
if (value.nCJT_feType2PS_M2R1_null_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT_feType2PS_M2R1_null_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT_feType2PS_M2R1_null_r17_count > 0u) {
    value.nCJT_feType2PS_M2R1_null_r17_items = (int64_t*)std::malloc((std::size_t)value.nCJT_feType2PS_M2R1_null_r17_count * sizeof(int64_t));
    if (value.nCJT_feType2PS_M2R1_null_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT_feType2PS_M2R1_null_r17_items, 0, (std::size_t)value.nCJT_feType2PS_M2R1_null_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT_feType2PS_M2R1_null_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT_feType2PS_M2R1_null_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_18) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT_feType2PS_M2R2_null_r17_count)) { goto fail; }
if (value.nCJT_feType2PS_M2R2_null_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT_feType2PS_M2R2_null_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT_feType2PS_M2R2_null_r17_count > 0u) {
    value.nCJT_feType2PS_M2R2_null_r17_items = (int64_t*)std::malloc((std::size_t)value.nCJT_feType2PS_M2R2_null_r17_count * sizeof(int64_t));
    if (value.nCJT_feType2PS_M2R2_null_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT_feType2PS_M2R2_null_r17_items, 0, (std::size_t)value.nCJT_feType2PS_M2R2_null_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT_feType2PS_M2R2_null_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT_feType2PS_M2R2_null_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_19) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT_Type2_feType2_PS_M1_r17_count)) { goto fail; }
if (value.nCJT_Type2_feType2_PS_M1_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT_Type2_feType2_PS_M1_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT_Type2_feType2_PS_M1_r17_count > 0u) {
    value.nCJT_Type2_feType2_PS_M1_r17_items = (int64_t*)std::malloc((std::size_t)value.nCJT_Type2_feType2_PS_M1_r17_count * sizeof(int64_t));
    if (value.nCJT_Type2_feType2_PS_M1_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT_Type2_feType2_PS_M1_r17_items, 0, (std::size_t)value.nCJT_Type2_feType2_PS_M1_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT_Type2_feType2_PS_M1_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT_Type2_feType2_PS_M1_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_20) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT_Type2_feType2_PS_M2R1_r17_count)) { goto fail; }
if (value.nCJT_Type2_feType2_PS_M2R1_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT_Type2_feType2_PS_M2R1_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT_Type2_feType2_PS_M2R1_r17_count > 0u) {
    value.nCJT_Type2_feType2_PS_M2R1_r17_items = (int64_t*)std::malloc((std::size_t)value.nCJT_Type2_feType2_PS_M2R1_r17_count * sizeof(int64_t));
    if (value.nCJT_Type2_feType2_PS_M2R1_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT_Type2_feType2_PS_M2R1_r17_items, 0, (std::size_t)value.nCJT_Type2_feType2_PS_M2R1_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT_Type2_feType2_PS_M2R1_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT_Type2_feType2_PS_M2R1_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_21) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT_eType2R1_feType2_PS_M1_r17_count)) { goto fail; }
if (value.nCJT_eType2R1_feType2_PS_M1_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT_eType2R1_feType2_PS_M1_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT_eType2R1_feType2_PS_M1_r17_count > 0u) {
    value.nCJT_eType2R1_feType2_PS_M1_r17_items = (int64_t*)std::malloc((std::size_t)value.nCJT_eType2R1_feType2_PS_M1_r17_count * sizeof(int64_t));
    if (value.nCJT_eType2R1_feType2_PS_M1_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT_eType2R1_feType2_PS_M1_r17_items, 0, (std::size_t)value.nCJT_eType2R1_feType2_PS_M1_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT_eType2R1_feType2_PS_M1_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT_eType2R1_feType2_PS_M1_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_22) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT_eType2R1_feType2_PS_M2R1_r17_count)) { goto fail; }
if (value.nCJT_eType2R1_feType2_PS_M2R1_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT_eType2R1_feType2_PS_M2R1_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT_eType2R1_feType2_PS_M2R1_r17_count > 0u) {
    value.nCJT_eType2R1_feType2_PS_M2R1_r17_items = (int64_t*)std::malloc((std::size_t)value.nCJT_eType2R1_feType2_PS_M2R1_r17_count * sizeof(int64_t));
    if (value.nCJT_eType2R1_feType2_PS_M2R1_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT_eType2R1_feType2_PS_M2R1_r17_items, 0, (std::size_t)value.nCJT_eType2R1_feType2_PS_M2R1_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT_eType2R1_feType2_PS_M2R1_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT_eType2R1_feType2_PS_M2R1_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_23) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT1SP_feType2PS_null_r17_count)) { goto fail; }
if (value.nCJT1SP_feType2PS_null_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT1SP_feType2PS_null_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT1SP_feType2PS_null_r17_count > 0u) {
    value.nCJT1SP_feType2PS_null_r17_items = (int64_t*)std::malloc((std::size_t)value.nCJT1SP_feType2PS_null_r17_count * sizeof(int64_t));
    if (value.nCJT1SP_feType2PS_null_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT1SP_feType2PS_null_r17_items, 0, (std::size_t)value.nCJT1SP_feType2PS_null_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT1SP_feType2PS_null_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT1SP_feType2PS_null_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_24) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT1SP_feType2PS_M2R1_null_r17_count)) { goto fail; }
if (value.nCJT1SP_feType2PS_M2R1_null_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT1SP_feType2PS_M2R1_null_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT1SP_feType2PS_M2R1_null_r17_count > 0u) {
    value.nCJT1SP_feType2PS_M2R1_null_r17_items = (int64_t*)std::malloc((std::size_t)value.nCJT1SP_feType2PS_M2R1_null_r17_count * sizeof(int64_t));
    if (value.nCJT1SP_feType2PS_M2R1_null_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT1SP_feType2PS_M2R1_null_r17_items, 0, (std::size_t)value.nCJT1SP_feType2PS_M2R1_null_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT1SP_feType2PS_M2R1_null_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT1SP_feType2PS_M2R1_null_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_25) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT1SP_feType2PS_M2R2_null_r1_count)) { goto fail; }
if (value.nCJT1SP_feType2PS_M2R2_null_r1_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT1SP_feType2PS_M2R2_null_r1_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT1SP_feType2PS_M2R2_null_r1_count > 0u) {
    value.nCJT1SP_feType2PS_M2R2_null_r1_items = (int64_t*)std::malloc((std::size_t)value.nCJT1SP_feType2PS_M2R2_null_r1_count * sizeof(int64_t));
    if (value.nCJT1SP_feType2PS_M2R2_null_r1_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT1SP_feType2PS_M2R2_null_r1_items, 0, (std::size_t)value.nCJT1SP_feType2PS_M2R2_null_r1_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT1SP_feType2PS_M2R2_null_r1_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT1SP_feType2PS_M2R2_null_r1_items[i] = (int64_t)tmp_value;
}
    }
    if (present_26) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT1SP_Type2_feType2_PS_M1_r17_count)) { goto fail; }
if (value.nCJT1SP_Type2_feType2_PS_M1_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT1SP_Type2_feType2_PS_M1_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT1SP_Type2_feType2_PS_M1_r17_count > 0u) {
    value.nCJT1SP_Type2_feType2_PS_M1_r17_items = (int64_t*)std::malloc((std::size_t)value.nCJT1SP_Type2_feType2_PS_M1_r17_count * sizeof(int64_t));
    if (value.nCJT1SP_Type2_feType2_PS_M1_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT1SP_Type2_feType2_PS_M1_r17_items, 0, (std::size_t)value.nCJT1SP_Type2_feType2_PS_M1_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT1SP_Type2_feType2_PS_M1_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT1SP_Type2_feType2_PS_M1_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_27) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT1SP_Type2_feType2_PS_M2R1_r17_count)) { goto fail; }
if (value.nCJT1SP_Type2_feType2_PS_M2R1_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT1SP_Type2_feType2_PS_M2R1_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT1SP_Type2_feType2_PS_M2R1_r17_count > 0u) {
    value.nCJT1SP_Type2_feType2_PS_M2R1_r17_items = (int64_t*)std::malloc((std::size_t)value.nCJT1SP_Type2_feType2_PS_M2R1_r17_count * sizeof(int64_t));
    if (value.nCJT1SP_Type2_feType2_PS_M2R1_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT1SP_Type2_feType2_PS_M2R1_r17_items, 0, (std::size_t)value.nCJT1SP_Type2_feType2_PS_M2R1_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT1SP_Type2_feType2_PS_M2R1_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT1SP_Type2_feType2_PS_M2R1_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_28) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT1SP_eType2R1_feType2_PS_M1_r17_count)) { goto fail; }
if (value.nCJT1SP_eType2R1_feType2_PS_M1_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT1SP_eType2R1_feType2_PS_M1_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT1SP_eType2R1_feType2_PS_M1_r17_count > 0u) {
    value.nCJT1SP_eType2R1_feType2_PS_M1_r17_items = (int64_t*)std::malloc((std::size_t)value.nCJT1SP_eType2R1_feType2_PS_M1_r17_count * sizeof(int64_t));
    if (value.nCJT1SP_eType2R1_feType2_PS_M1_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT1SP_eType2R1_feType2_PS_M1_r17_items, 0, (std::size_t)value.nCJT1SP_eType2R1_feType2_PS_M1_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT1SP_eType2R1_feType2_PS_M1_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT1SP_eType2R1_feType2_PS_M1_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_29) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nCJT1SP_eType2R1_feType2_PS_M2R1_r17_count)) { goto fail; }
if (value.nCJT1SP_eType2R1_feType2_PS_M2R1_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nCJT1SP_eType2R1_feType2_PS_M2R1_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nCJT1SP_eType2R1_feType2_PS_M2R1_r17_count > 0u) {
    value.nCJT1SP_eType2R1_feType2_PS_M2R1_r17_items = (int64_t*)std::malloc((std::size_t)value.nCJT1SP_eType2R1_feType2_PS_M2R1_r17_count * sizeof(int64_t));
    if (value.nCJT1SP_eType2R1_feType2_PS_M2R1_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nCJT1SP_eType2R1_feType2_PS_M2R1_r17_items, 0, (std::size_t)value.nCJT1SP_eType2R1_feType2_PS_M2R1_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.nCJT1SP_eType2R1_feType2_PS_M2R1_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.nCJT1SP_eType2R1_feType2_PS_M2R1_r17_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookComboParameterMultiTRP_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookComboParameterMultiTRP_r17(CodebookComboParameterMultiTRP_r17& value)
{
    if (value.has_nCJT_null_null) {
        if (value.nCJT_null_null_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT_null_null_count; ++i) {
            }
            std::free(value.nCJT_null_null_items);
            value.nCJT_null_null_items = nullptr;
        }
        value.nCJT_null_null_count = 0;
    }
    if (value.has_nCJT1SP_null_null) {
        if (value.nCJT1SP_null_null_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT1SP_null_null_count; ++i) {
            }
            std::free(value.nCJT1SP_null_null_items);
            value.nCJT1SP_null_null_items = nullptr;
        }
        value.nCJT1SP_null_null_count = 0;
    }
    if (value.has_nCJT_Type2_null_r16) {
        if (value.nCJT_Type2_null_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT_Type2_null_r16_count; ++i) {
            }
            std::free(value.nCJT_Type2_null_r16_items);
            value.nCJT_Type2_null_r16_items = nullptr;
        }
        value.nCJT_Type2_null_r16_count = 0;
    }
    if (value.has_nCJT_Type2PS_null_r16) {
        if (value.nCJT_Type2PS_null_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT_Type2PS_null_r16_count; ++i) {
            }
            std::free(value.nCJT_Type2PS_null_r16_items);
            value.nCJT_Type2PS_null_r16_items = nullptr;
        }
        value.nCJT_Type2PS_null_r16_count = 0;
    }
    if (value.has_nCJT_eType2R1_null_r16) {
        if (value.nCJT_eType2R1_null_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT_eType2R1_null_r16_count; ++i) {
            }
            std::free(value.nCJT_eType2R1_null_r16_items);
            value.nCJT_eType2R1_null_r16_items = nullptr;
        }
        value.nCJT_eType2R1_null_r16_count = 0;
    }
    if (value.has_nCJT_eType2R2_null_r16) {
        if (value.nCJT_eType2R2_null_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT_eType2R2_null_r16_count; ++i) {
            }
            std::free(value.nCJT_eType2R2_null_r16_items);
            value.nCJT_eType2R2_null_r16_items = nullptr;
        }
        value.nCJT_eType2R2_null_r16_count = 0;
    }
    if (value.has_nCJT_eType2R1PS_null_r16) {
        if (value.nCJT_eType2R1PS_null_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT_eType2R1PS_null_r16_count; ++i) {
            }
            std::free(value.nCJT_eType2R1PS_null_r16_items);
            value.nCJT_eType2R1PS_null_r16_items = nullptr;
        }
        value.nCJT_eType2R1PS_null_r16_count = 0;
    }
    if (value.has_nCJT_eType2R2PS_null_r16) {
        if (value.nCJT_eType2R2PS_null_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT_eType2R2PS_null_r16_count; ++i) {
            }
            std::free(value.nCJT_eType2R2PS_null_r16_items);
            value.nCJT_eType2R2PS_null_r16_items = nullptr;
        }
        value.nCJT_eType2R2PS_null_r16_count = 0;
    }
    if (value.has_nCJT_Type2_Type2PS_r16) {
        if (value.nCJT_Type2_Type2PS_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT_Type2_Type2PS_r16_count; ++i) {
            }
            std::free(value.nCJT_Type2_Type2PS_r16_items);
            value.nCJT_Type2_Type2PS_r16_items = nullptr;
        }
        value.nCJT_Type2_Type2PS_r16_count = 0;
    }
    if (value.has_nCJT1SP_Type2_null_r16) {
        if (value.nCJT1SP_Type2_null_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT1SP_Type2_null_r16_count; ++i) {
            }
            std::free(value.nCJT1SP_Type2_null_r16_items);
            value.nCJT1SP_Type2_null_r16_items = nullptr;
        }
        value.nCJT1SP_Type2_null_r16_count = 0;
    }
    if (value.has_nCJT1SP_Type2PS_null_r16) {
        if (value.nCJT1SP_Type2PS_null_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT1SP_Type2PS_null_r16_count; ++i) {
            }
            std::free(value.nCJT1SP_Type2PS_null_r16_items);
            value.nCJT1SP_Type2PS_null_r16_items = nullptr;
        }
        value.nCJT1SP_Type2PS_null_r16_count = 0;
    }
    if (value.has_nCJT1SP_eType2R1_null_r16) {
        if (value.nCJT1SP_eType2R1_null_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT1SP_eType2R1_null_r16_count; ++i) {
            }
            std::free(value.nCJT1SP_eType2R1_null_r16_items);
            value.nCJT1SP_eType2R1_null_r16_items = nullptr;
        }
        value.nCJT1SP_eType2R1_null_r16_count = 0;
    }
    if (value.has_nCJT1SP_eType2R2_null_r16) {
        if (value.nCJT1SP_eType2R2_null_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT1SP_eType2R2_null_r16_count; ++i) {
            }
            std::free(value.nCJT1SP_eType2R2_null_r16_items);
            value.nCJT1SP_eType2R2_null_r16_items = nullptr;
        }
        value.nCJT1SP_eType2R2_null_r16_count = 0;
    }
    if (value.has_nCJT1SP_eType2R1PS_null_r16) {
        if (value.nCJT1SP_eType2R1PS_null_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT1SP_eType2R1PS_null_r16_count; ++i) {
            }
            std::free(value.nCJT1SP_eType2R1PS_null_r16_items);
            value.nCJT1SP_eType2R1PS_null_r16_items = nullptr;
        }
        value.nCJT1SP_eType2R1PS_null_r16_count = 0;
    }
    if (value.has_nCJT1SP_eType2R2PS_null_r16) {
        if (value.nCJT1SP_eType2R2PS_null_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT1SP_eType2R2PS_null_r16_count; ++i) {
            }
            std::free(value.nCJT1SP_eType2R2PS_null_r16_items);
            value.nCJT1SP_eType2R2PS_null_r16_items = nullptr;
        }
        value.nCJT1SP_eType2R2PS_null_r16_count = 0;
    }
    if (value.has_nCJT1SP_Type2_Type2PS_r16) {
        if (value.nCJT1SP_Type2_Type2PS_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT1SP_Type2_Type2PS_r16_count; ++i) {
            }
            std::free(value.nCJT1SP_Type2_Type2PS_r16_items);
            value.nCJT1SP_Type2_Type2PS_r16_items = nullptr;
        }
        value.nCJT1SP_Type2_Type2PS_r16_count = 0;
    }
    if (value.has_nCJT_feType2PS_null_r17) {
        if (value.nCJT_feType2PS_null_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT_feType2PS_null_r17_count; ++i) {
            }
            std::free(value.nCJT_feType2PS_null_r17_items);
            value.nCJT_feType2PS_null_r17_items = nullptr;
        }
        value.nCJT_feType2PS_null_r17_count = 0;
    }
    if (value.has_nCJT_feType2PS_M2R1_null_r17) {
        if (value.nCJT_feType2PS_M2R1_null_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT_feType2PS_M2R1_null_r17_count; ++i) {
            }
            std::free(value.nCJT_feType2PS_M2R1_null_r17_items);
            value.nCJT_feType2PS_M2R1_null_r17_items = nullptr;
        }
        value.nCJT_feType2PS_M2R1_null_r17_count = 0;
    }
    if (value.has_nCJT_feType2PS_M2R2_null_r17) {
        if (value.nCJT_feType2PS_M2R2_null_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT_feType2PS_M2R2_null_r17_count; ++i) {
            }
            std::free(value.nCJT_feType2PS_M2R2_null_r17_items);
            value.nCJT_feType2PS_M2R2_null_r17_items = nullptr;
        }
        value.nCJT_feType2PS_M2R2_null_r17_count = 0;
    }
    if (value.has_nCJT_Type2_feType2_PS_M1_r17) {
        if (value.nCJT_Type2_feType2_PS_M1_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT_Type2_feType2_PS_M1_r17_count; ++i) {
            }
            std::free(value.nCJT_Type2_feType2_PS_M1_r17_items);
            value.nCJT_Type2_feType2_PS_M1_r17_items = nullptr;
        }
        value.nCJT_Type2_feType2_PS_M1_r17_count = 0;
    }
    if (value.has_nCJT_Type2_feType2_PS_M2R1_r17) {
        if (value.nCJT_Type2_feType2_PS_M2R1_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT_Type2_feType2_PS_M2R1_r17_count; ++i) {
            }
            std::free(value.nCJT_Type2_feType2_PS_M2R1_r17_items);
            value.nCJT_Type2_feType2_PS_M2R1_r17_items = nullptr;
        }
        value.nCJT_Type2_feType2_PS_M2R1_r17_count = 0;
    }
    if (value.has_nCJT_eType2R1_feType2_PS_M1_r17) {
        if (value.nCJT_eType2R1_feType2_PS_M1_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT_eType2R1_feType2_PS_M1_r17_count; ++i) {
            }
            std::free(value.nCJT_eType2R1_feType2_PS_M1_r17_items);
            value.nCJT_eType2R1_feType2_PS_M1_r17_items = nullptr;
        }
        value.nCJT_eType2R1_feType2_PS_M1_r17_count = 0;
    }
    if (value.has_nCJT_eType2R1_feType2_PS_M2R1_r17) {
        if (value.nCJT_eType2R1_feType2_PS_M2R1_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT_eType2R1_feType2_PS_M2R1_r17_count; ++i) {
            }
            std::free(value.nCJT_eType2R1_feType2_PS_M2R1_r17_items);
            value.nCJT_eType2R1_feType2_PS_M2R1_r17_items = nullptr;
        }
        value.nCJT_eType2R1_feType2_PS_M2R1_r17_count = 0;
    }
    if (value.has_nCJT1SP_feType2PS_null_r17) {
        if (value.nCJT1SP_feType2PS_null_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT1SP_feType2PS_null_r17_count; ++i) {
            }
            std::free(value.nCJT1SP_feType2PS_null_r17_items);
            value.nCJT1SP_feType2PS_null_r17_items = nullptr;
        }
        value.nCJT1SP_feType2PS_null_r17_count = 0;
    }
    if (value.has_nCJT1SP_feType2PS_M2R1_null_r17) {
        if (value.nCJT1SP_feType2PS_M2R1_null_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT1SP_feType2PS_M2R1_null_r17_count; ++i) {
            }
            std::free(value.nCJT1SP_feType2PS_M2R1_null_r17_items);
            value.nCJT1SP_feType2PS_M2R1_null_r17_items = nullptr;
        }
        value.nCJT1SP_feType2PS_M2R1_null_r17_count = 0;
    }
    if (value.has_nCJT1SP_feType2PS_M2R2_null_r1) {
        if (value.nCJT1SP_feType2PS_M2R2_null_r1_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT1SP_feType2PS_M2R2_null_r1_count; ++i) {
            }
            std::free(value.nCJT1SP_feType2PS_M2R2_null_r1_items);
            value.nCJT1SP_feType2PS_M2R2_null_r1_items = nullptr;
        }
        value.nCJT1SP_feType2PS_M2R2_null_r1_count = 0;
    }
    if (value.has_nCJT1SP_Type2_feType2_PS_M1_r17) {
        if (value.nCJT1SP_Type2_feType2_PS_M1_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT1SP_Type2_feType2_PS_M1_r17_count; ++i) {
            }
            std::free(value.nCJT1SP_Type2_feType2_PS_M1_r17_items);
            value.nCJT1SP_Type2_feType2_PS_M1_r17_items = nullptr;
        }
        value.nCJT1SP_Type2_feType2_PS_M1_r17_count = 0;
    }
    if (value.has_nCJT1SP_Type2_feType2_PS_M2R1_r17) {
        if (value.nCJT1SP_Type2_feType2_PS_M2R1_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT1SP_Type2_feType2_PS_M2R1_r17_count; ++i) {
            }
            std::free(value.nCJT1SP_Type2_feType2_PS_M2R1_r17_items);
            value.nCJT1SP_Type2_feType2_PS_M2R1_r17_items = nullptr;
        }
        value.nCJT1SP_Type2_feType2_PS_M2R1_r17_count = 0;
    }
    if (value.has_nCJT1SP_eType2R1_feType2_PS_M1_r17) {
        if (value.nCJT1SP_eType2R1_feType2_PS_M1_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT1SP_eType2R1_feType2_PS_M1_r17_count; ++i) {
            }
            std::free(value.nCJT1SP_eType2R1_feType2_PS_M1_r17_items);
            value.nCJT1SP_eType2R1_feType2_PS_M1_r17_items = nullptr;
        }
        value.nCJT1SP_eType2R1_feType2_PS_M1_r17_count = 0;
    }
    if (value.has_nCJT1SP_eType2R1_feType2_PS_M2R1_r17) {
        if (value.nCJT1SP_eType2R1_feType2_PS_M2R1_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nCJT1SP_eType2R1_feType2_PS_M2R1_r17_count; ++i) {
            }
            std::free(value.nCJT1SP_eType2R1_feType2_PS_M2R1_r17_items);
            value.nCJT1SP_eType2R1_feType2_PS_M2R1_r17_items = nullptr;
        }
        value.nCJT1SP_eType2R1_feType2_PS_M2R1_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookVariantsList_r16：ASN.1 CodebookVariantsList-r16；源文件第 16106 行；SEQUENCE OF。
// Encode_CodebookVariantsList_r16 只读不分配；Decode_CodebookVariantsList_r16 可能 malloc（失败时内部已释放并清零）；Free_CodebookVariantsList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookVariantsList_r16(Encoder& enc, const CodebookVariantsList_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 512u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SupportedCSI_RS_Resource(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookVariantsList_r16(Decoder& dec, CodebookVariantsList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 512u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 512u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SupportedCSI_RS_Resource*)std::malloc((std::size_t)value.count * sizeof(SupportedCSI_RS_Resource));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SupportedCSI_RS_Resource));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SupportedCSI_RS_Resource(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_CodebookVariantsList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookVariantsList_r16(CodebookVariantsList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SupportedCSI_RS_Resource(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SupportedCSI_RS_Resource：ASN.1 SupportedCSI-RS-Resource；源文件第 16108 行；SEQUENCE。
// Encode_SupportedCSI_RS_Resource 只读不分配；Decode_SupportedCSI_RS_Resource 可能 malloc（失败时内部已释放并清零）；Free_SupportedCSI_RS_Resource 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SupportedCSI_RS_Resource(Encoder& enc, const SupportedCSI_RS_Resource& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberTxPortsPerResource), 0, 6);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberResourcesPerBand), 1, 64);
    enc.WriteConstrainedInteger((std::int64_t)(value.totalNumberTxPortsPerBand), 2, 256);
    return enc.Error();
}

ErrorCode Decode_SupportedCSI_RS_Resource(Decoder& dec, SupportedCSI_RS_Resource& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maxNumberTxPortsPerResource = (SupportedCSI_RS_Resource_MaxNumberTxPortsPerResource)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.maxNumberResourcesPerBand = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 256, tmp_value)) { goto fail; }
        value.totalNumberTxPortsPerBand = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SupportedCSI_RS_Resource(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SupportedCSI_RS_Resource(SupportedCSI_RS_Resource& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SupportedCSI_RS_ReportSetting_r18：ASN.1 SupportedCSI-RS-ReportSetting-r18；源文件第 16114 行；SEQUENCE。
// Encode_SupportedCSI_RS_ReportSetting_r18 只读不分配；Decode_SupportedCSI_RS_ReportSetting_r18 可能 malloc（失败时内部已释放并清零）；Free_SupportedCSI_RS_ReportSetting_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SupportedCSI_RS_ReportSetting_r18(Encoder& enc, const SupportedCSI_RS_ReportSetting_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxN4_r18), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberTxPortsPerResource_r18), 0, 6);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberResourcesPerBand_r18), 1, 64);
    enc.WriteConstrainedInteger((std::int64_t)(value.totalNumberTxPortsPerBand_r18), 2, 256);
    return enc.Error();
}

ErrorCode Decode_SupportedCSI_RS_ReportSetting_r18(Decoder& dec, SupportedCSI_RS_ReportSetting_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maxN4_r18 = (SupportedCSI_RS_ReportSetting_r18_MaxN4_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maxNumberTxPortsPerResource_r18 = (SupportedCSI_RS_ReportSetting_r18_MaxNumberTxPortsPerResource_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.maxNumberResourcesPerBand_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 256, tmp_value)) { goto fail; }
        value.totalNumberTxPortsPerBand_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SupportedCSI_RS_ReportSetting_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SupportedCSI_RS_ReportSetting_r18(SupportedCSI_RS_ReportSetting_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18：ASN.1 processingDuration-r18；源文件第 16128 行；SEQUENCE。
// Encode_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18 只读不分配；Decode_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18 可能 malloc（失败时内部已释放并清零）；Free_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18(Encoder& enc, const DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.processingPRS_SymbolsDurationN3_r18), 0, 17);
    enc.WriteConstrainedInteger((std::int64_t)(value.processingDurationT3_r18), 0, 9);
    return enc.Error();
}

ErrorCode Decode_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18(Decoder& dec, DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 17, tmp_value)) { goto fail; }
        value.processingPRS_SymbolsDurationN3_r18 = (DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingPRS_SymbolsDurationN3_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.processingDurationT3_r18 = (DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingDurationT3_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18(DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DL_PRS_MeasurementWithRxFH_RRC_Connected_r18：ASN.1 DL-PRS-MeasurementWithRxFH-RRC-Connected-r18；源文件第 16124 行；SEQUENCE。
// Encode_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18 只读不分配；Decode_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18 可能 malloc（失败时内部已释放并清零）；Free_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18(Encoder& enc, const DL_PRS_MeasurementWithRxFH_RRC_Connected_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_maximumPRS_BandwidthAcrossAllHopsFR1_r18);
    enc.WriteBit(value.has_maximumPRS_BandwidthAcrossAllHopsFR2_r18);
    enc.WriteBit(value.has_maximumFH_Hops_r18);
    enc.WriteBit(value.has_processingDuration_r18);
    enc.WriteBit(value.has_rf_RxRetunTimeFR1_r18);
    enc.WriteBit(value.has_rf_RxRetunTimeFR2_r18);
    enc.WriteBit(value.has_numOfOverlappingPRB_r18);
    if (value.has_maximumPRS_BandwidthAcrossAllHopsFR1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumPRS_BandwidthAcrossAllHopsFR1_r18), 0, 3);
    }
    if (value.has_maximumPRS_BandwidthAcrossAllHopsFR2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumPRS_BandwidthAcrossAllHopsFR2_r18), 0, 2);
    }
    if (value.has_maximumFH_Hops_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumFH_Hops_r18), 0, 4);
    }
    if (value.has_processingDuration_r18) {
        Encode_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18(enc, value.processingDuration_r18);
    }
    if (value.has_rf_RxRetunTimeFR1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rf_RxRetunTimeFR1_r18), 0, 2);
    }
    if (value.has_rf_RxRetunTimeFR2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rf_RxRetunTimeFR2_r18), 0, 2);
    }
    if (value.has_numOfOverlappingPRB_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.numOfOverlappingPRB_r18), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18(Decoder& dec, DL_PRS_MeasurementWithRxFH_RRC_Connected_r18& value)
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
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maximumPRS_BandwidthAcrossAllHopsFR1_r18 = (DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_MaximumPRS_BandwidthAcrossAllHopsFR1_r18)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.maximumPRS_BandwidthAcrossAllHopsFR2_r18 = (DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_MaximumPRS_BandwidthAcrossAllHopsFR2_r18)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maximumFH_Hops_r18 = (DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_MaximumFH_Hops_r18)tmp_value;
    }
    if (present_3) {
        if (Decode_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18(dec, value.processingDuration_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.rf_RxRetunTimeFR1_r18 = (DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_Rf_RxRetunTimeFR1_r18)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.rf_RxRetunTimeFR2_r18 = (DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_Rf_RxRetunTimeFR2_r18)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.numOfOverlappingPRB_r18 = (DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_NumOfOverlappingPRB_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18(DL_PRS_MeasurementWithRxFH_RRC_Connected_r18& value)
{
    if (value.has_maximumPRS_BandwidthAcrossAllHopsFR1_r18) {
    }
    if (value.has_maximumPRS_BandwidthAcrossAllHopsFR2_r18) {
    }
    if (value.has_maximumFH_Hops_r18) {
    }
    if (value.has_processingDuration_r18) {
        Free_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18(value.processingDuration_r18);
    }
    if (value.has_rf_RxRetunTimeFR1_r18) {
    }
    if (value.has_rf_RxRetunTimeFR2_r18) {
    }
    if (value.has_numOfOverlappingPRB_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ERedCapParameters_r18：ASN.1 ERedCapParameters-r18；源文件第 16142 行；SEQUENCE。
// Encode_ERedCapParameters_r18 只读不分配；Decode_ERedCapParameters_r18 可能 malloc（失败时内部已释放并清零）；Free_ERedCapParameters_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ERedCapParameters_r18(Encoder& enc, const ERedCapParameters_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_eRedCapNotReducedBB_BW_r18);
    enc.WriteBit(value.has_eRedCapIgnoreCapabilityFiltering_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.supportOfERedCap_r18), 0, 0);
    if (value.has_eRedCapNotReducedBB_BW_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eRedCapNotReducedBB_BW_r18), 0, 0);
    }
    if (value.has_eRedCapIgnoreCapabilityFiltering_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eRedCapIgnoreCapabilityFiltering_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_ERedCapParameters_r18(Decoder& dec, ERedCapParameters_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        value.supportOfERedCap_r18 = (ERedCapParameters_r18_SupportOfERedCap_r18)0;
    }
    if (present_0) {
        value.eRedCapNotReducedBB_BW_r18 = (ERedCapParameters_r18_ERedCapNotReducedBB_BW_r18)0;
    }
    if (present_1) {
        value.eRedCapIgnoreCapabilityFiltering_r18 = (ERedCapParameters_r18_ERedCapIgnoreCapabilityFiltering_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ERedCapParameters_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ERedCapParameters_r18(ERedCapParameters_r18& value)
{
    if (value.has_eRedCapNotReducedBB_BW_r18) {
    }
    if (value.has_eRedCapIgnoreCapabilityFiltering_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FeatureSetCombination：ASN.1 FeatureSetCombination；源文件第 16153 行；SEQUENCE OF。
// Encode_FeatureSetCombination 只读不分配；Decode_FeatureSetCombination 可能 malloc（失败时内部已释放并清零）；Free_FeatureSetCombination 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FeatureSetCombination(Encoder& enc, const FeatureSetCombination& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_FeatureSetsPerBand(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetCombination(Decoder& dec, FeatureSetCombination& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (FeatureSetsPerBand*)std::malloc((std::size_t)value.count * sizeof(FeatureSetsPerBand));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(FeatureSetsPerBand));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_FeatureSetsPerBand(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetCombination(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetCombination(FeatureSetCombination& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_FeatureSetsPerBand(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FeatureSetsPerBand：ASN.1 FeatureSetsPerBand；源文件第 16155 行；SEQUENCE OF。
// Encode_FeatureSetsPerBand 只读不分配；Decode_FeatureSetsPerBand 可能 malloc（失败时内部已释放并清零）；Free_FeatureSetsPerBand 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FeatureSetsPerBand(Encoder& enc, const FeatureSetsPerBand& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 128u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_FeatureSet(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetsPerBand(Decoder& dec, FeatureSetsPerBand& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 128u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 128u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (FeatureSet*)std::malloc((std::size_t)value.count * sizeof(FeatureSet));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(FeatureSet));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_FeatureSet(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetsPerBand(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetsPerBand(FeatureSetsPerBand& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_FeatureSet(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FeatureSet_Eutra：ASN.1 eutra；源文件第 16158 行；SEQUENCE。
// Encode_FeatureSet_Eutra 只读不分配；Decode_FeatureSet_Eutra 可能 malloc（失败时内部已释放并清零）；Free_FeatureSet_Eutra 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FeatureSet_Eutra(Encoder& enc, const FeatureSet_Eutra& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.downlinkSetEUTRA), 0, 256);
    enc.WriteConstrainedInteger((std::int64_t)(value.uplinkSetEUTRA), 0, 256);
    return enc.Error();
}

ErrorCode Decode_FeatureSet_Eutra(Decoder& dec, FeatureSet_Eutra& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 256, tmp_value)) { goto fail; }
        value.downlinkSetEUTRA = (FeatureSetEUTRA_DownlinkId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 256, tmp_value)) { goto fail; }
        value.uplinkSetEUTRA = (FeatureSetEUTRA_UplinkId)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSet_Eutra(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSet_Eutra(FeatureSet_Eutra& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FeatureSet_Nr：ASN.1 nr；源文件第 16162 行；SEQUENCE。
// Encode_FeatureSet_Nr 只读不分配；Decode_FeatureSet_Nr 可能 malloc（失败时内部已释放并清零）；Free_FeatureSet_Nr 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FeatureSet_Nr(Encoder& enc, const FeatureSet_Nr& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.downlinkSetNR), 0, 1024);
    enc.WriteConstrainedInteger((std::int64_t)(value.uplinkSetNR), 0, 1024);
    return enc.Error();
}

ErrorCode Decode_FeatureSet_Nr(Decoder& dec, FeatureSet_Nr& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1024, tmp_value)) { goto fail; }
        value.downlinkSetNR = (FeatureSetDownlinkId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1024, tmp_value)) { goto fail; }
        value.uplinkSetNR = (FeatureSetUplinkId)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSet_Nr(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSet_Nr(FeatureSet_Nr& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FeatureSet：ASN.1 FeatureSet；源文件第 16157 行；CHOICE。
// Encode_FeatureSet 只读不分配；Decode_FeatureSet 可能 malloc（失败时内部已释放并清零）；Free_FeatureSet 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FeatureSet(Encoder& enc, const FeatureSet& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case FeatureSet_Tag_eutra:
        Encode_FeatureSet_Eutra(enc, value.u.eutra);
        break;
    case FeatureSet_Tag_nr:
        Encode_FeatureSet_Nr(enc, value.u.nr);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSet(Decoder& dec, FeatureSet& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (FeatureSet_Tag)root_index;
    switch (value.tag) {
    case FeatureSet_Tag_eutra: {
        if (Decode_FeatureSet_Eutra(dec, value.u.eutra) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case FeatureSet_Tag_nr: {
        if (Decode_FeatureSet_Nr(dec, value.u.nr) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSet(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSet(FeatureSet& value)
{
    switch (value.tag) {
    case FeatureSet_Tag_eutra:
        Free_FeatureSet_Eutra(value.u.eutra);
        break;
    case FeatureSet_Tag_nr:
        Free_FeatureSet_Nr(value.u.nr);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DummyA：ASN.1 DummyA；源文件第 16431 行；SEQUENCE。
// Encode_DummyA 只读不分配；Decode_DummyA 可能 malloc（失败时内部已释放并清零）；Free_DummyA 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DummyA(Encoder& enc, const DummyA& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberNZP_CSI_RS_PerCC), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPortsAcrossNZP_CSI_RS_PerCC), 0, 34);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCS_IM_PerCC), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSimultaneousCSI_RS_ActBWP_AllCC), 0, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC), 0, 32);
    return enc.Error();
}

ErrorCode Decode_DummyA(Decoder& dec, DummyA& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.maxNumberNZP_CSI_RS_PerCC = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 34, tmp_value)) { goto fail; }
        value.maxNumberPortsAcrossNZP_CSI_RS_PerCC = (DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumberCS_IM_PerCC = (DummyA_MaxNumberCS_IM_PerCC)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 32, tmp_value)) { goto fail; }
        value.maxNumberSimultaneousCSI_RS_ActBWP_AllCC = (DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 32, tmp_value)) { goto fail; }
        value.totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC = (DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DummyA(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DummyA(DummyA& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FeatureSetDownlink_TimeDurationForQCL：ASN.1 timeDurationForQCL；源文件第 16190 行；SEQUENCE。
// Encode_FeatureSetDownlink_TimeDurationForQCL 只读不分配；Decode_FeatureSetDownlink_TimeDurationForQCL 可能 malloc（失败时内部已释放并清零）；Free_FeatureSetDownlink_TimeDurationForQCL 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FeatureSetDownlink_TimeDurationForQCL(Encoder& enc, const FeatureSetDownlink_TimeDurationForQCL& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_60kHz);
    enc.WriteBit(value.has_scs_120kHz);
    if (value.has_scs_60kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz), 0, 2);
    }
    if (value.has_scs_120kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_120kHz), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_TimeDurationForQCL(Decoder& dec, FeatureSetDownlink_TimeDurationForQCL& value)
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
        value.scs_60kHz = (FeatureSetDownlink_TimeDurationForQCL_Scs_60kHz)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.scs_120kHz = (FeatureSetDownlink_TimeDurationForQCL_Scs_120kHz)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_TimeDurationForQCL(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_TimeDurationForQCL(FeatureSetDownlink_TimeDurationForQCL& value)
{
    if (value.has_scs_60kHz) {
    }
    if (value.has_scs_120kHz) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot：ASN.1 pdsch-ProcessingType1-DifferentTB-PerSlot；源文件第 16194 行；SEQUENCE。
// Encode_FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot 只读不分配；Decode_FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot 可能 malloc（失败时内部已释放并清零）；Free_FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot(Encoder& enc, const FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz);
    enc.WriteBit(value.has_scs_30kHz);
    enc.WriteBit(value.has_scs_60kHz);
    enc.WriteBit(value.has_scs_120kHz);
    if (value.has_scs_15kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz), 0, 2);
    }
    if (value.has_scs_30kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz), 0, 2);
    }
    if (value.has_scs_60kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz), 0, 2);
    }
    if (value.has_scs_120kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_120kHz), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot(Decoder& dec, FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot& value)
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
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_15kHz = (FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_15kHz)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_30kHz = (FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_30kHz)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_60kHz = (FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_60kHz)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_120kHz = (FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_120kHz)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot(FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot& value)
{
    if (value.has_scs_15kHz) {
    }
    if (value.has_scs_30kHz) {
    }
    if (value.has_scs_60kHz) {
    }
    if (value.has_scs_120kHz) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FeatureSetDownlink：ASN.1 FeatureSetDownlink；源文件第 16176 行；SEQUENCE。
// Encode_FeatureSetDownlink 只读不分配；Decode_FeatureSetDownlink 可能 malloc（失败时内部已释放并清零）；Free_FeatureSetDownlink 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FeatureSetDownlink(Encoder& enc, const FeatureSetDownlink& value)
{
    (void)value;
    enc.WriteBit(value.has_intraBandFreqSeparationDL);
    enc.WriteBit(value.has_scalingFactor);
    enc.WriteBit(value.has_dummy8);
    enc.WriteBit(value.has_scellWithoutSSB);
    enc.WriteBit(value.has_csi_RS_MeasSCellWithoutSSB);
    enc.WriteBit(value.has_dummy1);
    enc.WriteBit(value.has_type1_3_CSS);
    enc.WriteBit(value.has_pdcch_MonitoringAnyOccasions);
    enc.WriteBit(value.has_dummy2);
    enc.WriteBit(value.has_ue_SpecificUL_DL_Assignment);
    enc.WriteBit(value.has_searchSpaceSharingCA_DL);
    enc.WriteBit(value.has_timeDurationForQCL);
    enc.WriteBit(value.has_pdsch_ProcessingType1_DifferentTB_PerSlot);
    enc.WriteBit(value.has_dummy3);
    enc.WriteBit(value.has_dummy4);
    enc.WriteBit(value.has_dummy5);
    enc.WriteBit(value.has_dummy6);
    enc.WriteBit(value.has_dummy7);
enc.WriteConstrainedLength(value.featureSetListPerDownlinkCC_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetListPerDownlinkCC_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.featureSetListPerDownlinkCC_items[i]), 1, 1024);
}
    if (value.has_intraBandFreqSeparationDL) {
        {
            const std::int64_t enum_value = (std::int64_t)(value.intraBandFreqSeparationDL);
            if (enum_value < 0) {
                return enc.Fail(ErrorCode_InvalidEnumValue);
            }
            if (enum_value < 3) {
                enc.WriteBit(false);
                enc.WriteConstrainedInteger(enum_value, 0, 2);
            } else {
                enc.WriteBit(true);
                enc.WriteNormallySmallNonNegative((std::uint32_t)(enum_value - 3));
            }
        }
    }
    if (value.has_scalingFactor) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scalingFactor), 0, 2);
    }
    if (value.has_dummy8) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy8), 0, 0);
    }
    if (value.has_scellWithoutSSB) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scellWithoutSSB), 0, 0);
    }
    if (value.has_csi_RS_MeasSCellWithoutSSB) {
        enc.WriteConstrainedInteger((std::int64_t)(value.csi_RS_MeasSCellWithoutSSB), 0, 0);
    }
    if (value.has_dummy1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy1), 0, 0);
    }
    if (value.has_type1_3_CSS) {
        enc.WriteConstrainedInteger((std::int64_t)(value.type1_3_CSS), 0, 0);
    }
    if (value.has_pdcch_MonitoringAnyOccasions) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_MonitoringAnyOccasions), 0, 1);
    }
    if (value.has_dummy2) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy2), 0, 0);
    }
    if (value.has_ue_SpecificUL_DL_Assignment) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ue_SpecificUL_DL_Assignment), 0, 0);
    }
    if (value.has_searchSpaceSharingCA_DL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.searchSpaceSharingCA_DL), 0, 0);
    }
    if (value.has_timeDurationForQCL) {
        Encode_FeatureSetDownlink_TimeDurationForQCL(enc, value.timeDurationForQCL);
    }
    if (value.has_pdsch_ProcessingType1_DifferentTB_PerSlot) {
        Encode_FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot(enc, value.pdsch_ProcessingType1_DifferentTB_PerSlot);
    }
    if (value.has_dummy3) {
        Encode_DummyA(enc, value.dummy3);
    }
    if (value.has_dummy4) {
enc.WriteConstrainedLength(value.dummy4_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.dummy4_count; ++i) {
    Encode_DummyB(enc, value.dummy4_items[i]);
}
    }
    if (value.has_dummy5) {
enc.WriteConstrainedLength(value.dummy5_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.dummy5_count; ++i) {
    Encode_DummyC(enc, value.dummy5_items[i]);
}
    }
    if (value.has_dummy6) {
enc.WriteConstrainedLength(value.dummy6_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.dummy6_count; ++i) {
    Encode_DummyD(enc, value.dummy6_items[i]);
}
    }
    if (value.has_dummy7) {
enc.WriteConstrainedLength(value.dummy7_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.dummy7_count; ++i) {
    Encode_DummyE(enc, value.dummy7_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink(Decoder& dec, FeatureSetDownlink& value)
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
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetListPerDownlinkCC_count)) { goto fail; }
if (value.featureSetListPerDownlinkCC_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetListPerDownlinkCC_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetListPerDownlinkCC_count > 0u) {
    value.featureSetListPerDownlinkCC_items = (FeatureSetDownlinkPerCC_Id*)std::malloc((std::size_t)value.featureSetListPerDownlinkCC_count * sizeof(FeatureSetDownlinkPerCC_Id));
    if (value.featureSetListPerDownlinkCC_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetListPerDownlinkCC_items, 0, (std::size_t)value.featureSetListPerDownlinkCC_count * sizeof(FeatureSetDownlinkPerCC_Id));
}
for (std::uint32_t i = 0; i < value.featureSetListPerDownlinkCC_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 1024, tmp_value)) { goto fail; }
    value.featureSetListPerDownlinkCC_items[i] = (FeatureSetDownlinkPerCC_Id)tmp_value;
}
    }
    if (present_0) {
        bool enum_extension = false;
        if (!dec.ReadBit(enum_extension)) { goto fail; }
        std::int64_t enum_value = 0;
        if (!enum_extension) {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) { goto fail; }
    enum_value = root_index;
        } else {
    std::uint32_t extension_index = 0;
    if (!dec.ReadNormallySmallNonNegative(extension_index)) { goto fail; }
    enum_value = (std::int64_t)3 + (std::int64_t)extension_index;
        }
        value.intraBandFreqSeparationDL = (FreqSeparationClass)enum_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scalingFactor = (FeatureSetDownlink_ScalingFactor)tmp_value;
    }
    if (present_2) {
        value.dummy8 = (FeatureSetDownlink_Dummy8)0;
    }
    if (present_3) {
        value.scellWithoutSSB = (FeatureSetDownlink_ScellWithoutSSB)0;
    }
    if (present_4) {
        value.csi_RS_MeasSCellWithoutSSB = (FeatureSetDownlink_Csi_RS_MeasSCellWithoutSSB)0;
    }
    if (present_5) {
        value.dummy1 = (FeatureSetDownlink_Dummy1)0;
    }
    if (present_6) {
        value.type1_3_CSS = (FeatureSetDownlink_Type1_3_CSS)0;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.pdcch_MonitoringAnyOccasions = (FeatureSetDownlink_Pdcch_MonitoringAnyOccasions)tmp_value;
    }
    if (present_8) {
        value.dummy2 = (FeatureSetDownlink_Dummy2)0;
    }
    if (present_9) {
        value.ue_SpecificUL_DL_Assignment = (FeatureSetDownlink_Ue_SpecificUL_DL_Assignment)0;
    }
    if (present_10) {
        value.searchSpaceSharingCA_DL = (FeatureSetDownlink_SearchSpaceSharingCA_DL)0;
    }
    if (present_11) {
        if (Decode_FeatureSetDownlink_TimeDurationForQCL(dec, value.timeDurationForQCL) != ErrorCode_Ok) { goto fail; }
    }
    if (present_12) {
        if (Decode_FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot(dec, value.pdsch_ProcessingType1_DifferentTB_PerSlot) != ErrorCode_Ok) { goto fail; }
    }
    if (present_13) {
        if (Decode_DummyA(dec, value.dummy3) != ErrorCode_Ok) { goto fail; }
    }
    if (present_14) {
if (!dec.ReadConstrainedLength(0u, 0u, value.dummy4_count)) { goto fail; }
if (value.dummy4_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.dummy4_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.dummy4_count > 0u) {
    value.dummy4_items = (DummyB*)std::malloc((std::size_t)value.dummy4_count * sizeof(DummyB));
    if (value.dummy4_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.dummy4_items, 0, (std::size_t)value.dummy4_count * sizeof(DummyB));
}
for (std::uint32_t i = 0; i < value.dummy4_count; ++i) {
    if (Decode_DummyB(dec, value.dummy4_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_15) {
if (!dec.ReadConstrainedLength(0u, 0u, value.dummy5_count)) { goto fail; }
if (value.dummy5_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.dummy5_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.dummy5_count > 0u) {
    value.dummy5_items = (DummyC*)std::malloc((std::size_t)value.dummy5_count * sizeof(DummyC));
    if (value.dummy5_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.dummy5_items, 0, (std::size_t)value.dummy5_count * sizeof(DummyC));
}
for (std::uint32_t i = 0; i < value.dummy5_count; ++i) {
    if (Decode_DummyC(dec, value.dummy5_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_16) {
if (!dec.ReadConstrainedLength(0u, 0u, value.dummy6_count)) { goto fail; }
if (value.dummy6_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.dummy6_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.dummy6_count > 0u) {
    value.dummy6_items = (DummyD*)std::malloc((std::size_t)value.dummy6_count * sizeof(DummyD));
    if (value.dummy6_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.dummy6_items, 0, (std::size_t)value.dummy6_count * sizeof(DummyD));
}
for (std::uint32_t i = 0; i < value.dummy6_count; ++i) {
    if (Decode_DummyD(dec, value.dummy6_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_17) {
if (!dec.ReadConstrainedLength(0u, 0u, value.dummy7_count)) { goto fail; }
if (value.dummy7_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.dummy7_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.dummy7_count > 0u) {
    value.dummy7_items = (DummyE*)std::malloc((std::size_t)value.dummy7_count * sizeof(DummyE));
    if (value.dummy7_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.dummy7_items, 0, (std::size_t)value.dummy7_count * sizeof(DummyE));
}
for (std::uint32_t i = 0; i < value.dummy7_count; ++i) {
    if (Decode_DummyE(dec, value.dummy7_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink(FeatureSetDownlink& value)
{
    if (value.featureSetListPerDownlinkCC_items != nullptr) {
        for (std::uint32_t i = 0; i < value.featureSetListPerDownlinkCC_count; ++i) {
        }
        std::free(value.featureSetListPerDownlinkCC_items);
        value.featureSetListPerDownlinkCC_items = nullptr;
    }
    value.featureSetListPerDownlinkCC_count = 0;
    if (value.has_intraBandFreqSeparationDL) {
    }
    if (value.has_scalingFactor) {
    }
    if (value.has_dummy8) {
    }
    if (value.has_scellWithoutSSB) {
    }
    if (value.has_csi_RS_MeasSCellWithoutSSB) {
    }
    if (value.has_dummy1) {
    }
    if (value.has_type1_3_CSS) {
    }
    if (value.has_pdcch_MonitoringAnyOccasions) {
    }
    if (value.has_dummy2) {
    }
    if (value.has_ue_SpecificUL_DL_Assignment) {
    }
    if (value.has_searchSpaceSharingCA_DL) {
    }
    if (value.has_timeDurationForQCL) {
        Free_FeatureSetDownlink_TimeDurationForQCL(value.timeDurationForQCL);
    }
    if (value.has_pdsch_ProcessingType1_DifferentTB_PerSlot) {
        Free_FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot(value.pdsch_ProcessingType1_DifferentTB_PerSlot);
    }
    if (value.has_dummy3) {
        Free_DummyA(value.dummy3);
    }
    if (value.has_dummy4) {
        if (value.dummy4_items != nullptr) {
            for (std::uint32_t i = 0; i < value.dummy4_count; ++i) {
                Free_DummyB(value.dummy4_items[i]);
            }
            std::free(value.dummy4_items);
            value.dummy4_items = nullptr;
        }
        value.dummy4_count = 0;
    }
    if (value.has_dummy5) {
        if (value.dummy5_items != nullptr) {
            for (std::uint32_t i = 0; i < value.dummy5_count; ++i) {
                Free_DummyC(value.dummy5_items[i]);
            }
            std::free(value.dummy5_items);
            value.dummy5_items = nullptr;
        }
        value.dummy5_count = 0;
    }
    if (value.has_dummy6) {
        if (value.dummy6_items != nullptr) {
            for (std::uint32_t i = 0; i < value.dummy6_count; ++i) {
                Free_DummyD(value.dummy6_items[i]);
            }
            std::free(value.dummy6_items);
            value.dummy6_items = nullptr;
        }
        value.dummy6_count = 0;
    }
    if (value.has_dummy7) {
        if (value.dummy7_items != nullptr) {
            for (std::uint32_t i = 0; i < value.dummy7_count; ++i) {
                Free_DummyE(value.dummy7_items[i]);
            }
            std::free(value.dummy7_items);
            value.dummy7_items = nullptr;
        }
        value.dummy7_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap：ASN.1 pdcch-MonitoringAnyOccasionsWithSpanGap；源文件第 16212 行；SEQUENCE。
// Encode_FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap 只读不分配；Decode_FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap 可能 malloc（失败时内部已释放并清零）；Free_FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap(Encoder& enc, const FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz);
    enc.WriteBit(value.has_scs_30kHz);
    enc.WriteBit(value.has_scs_60kHz);
    enc.WriteBit(value.has_scs_120kHz);
    if (value.has_scs_15kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz), 0, 2);
    }
    if (value.has_scs_30kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz), 0, 2);
    }
    if (value.has_scs_60kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz), 0, 2);
    }
    if (value.has_scs_120kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_120kHz), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap(Decoder& dec, FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap& value)
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
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_15kHz = (FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_15kHz)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_30kHz = (FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_30kHz)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_60kHz = (FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_60kHz)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_120kHz = (FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_120kHz)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap(FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap& value)
{
    if (value.has_scs_15kHz) {
    }
    if (value.has_scs_30kHz) {
    }
    if (value.has_scs_60kHz) {
    }
    if (value.has_scs_120kHz) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ProcessingParameters_DifferentTB_PerSlot：ASN.1 differentTB-PerSlot；源文件第 19350 行；SEQUENCE。
// Encode_ProcessingParameters_DifferentTB_PerSlot 只读不分配；Decode_ProcessingParameters_DifferentTB_PerSlot 可能 malloc（失败时内部已释放并清零）；Free_ProcessingParameters_DifferentTB_PerSlot 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ProcessingParameters_DifferentTB_PerSlot(Encoder& enc, const ProcessingParameters_DifferentTB_PerSlot& value)
{
    (void)value;
    enc.WriteBit(value.has_upto1);
    enc.WriteBit(value.has_upto2);
    enc.WriteBit(value.has_upto4);
    enc.WriteBit(value.has_upto7);
    if (value.has_upto1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.upto1), 1, 16);
    }
    if (value.has_upto2) {
        enc.WriteConstrainedInteger((std::int64_t)(value.upto2), 1, 16);
    }
    if (value.has_upto4) {
        enc.WriteConstrainedInteger((std::int64_t)(value.upto4), 1, 16);
    }
    if (value.has_upto7) {
        enc.WriteConstrainedInteger((std::int64_t)(value.upto7), 1, 16);
    }
    return enc.Error();
}

ErrorCode Decode_ProcessingParameters_DifferentTB_PerSlot(Decoder& dec, ProcessingParameters_DifferentTB_PerSlot& value)
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
        value.upto1 = (NumberOfCarriers)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.upto2 = (NumberOfCarriers)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.upto4 = (NumberOfCarriers)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.upto7 = (NumberOfCarriers)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ProcessingParameters_DifferentTB_PerSlot(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ProcessingParameters_DifferentTB_PerSlot(ProcessingParameters_DifferentTB_PerSlot& value)
{
    if (value.has_upto1) {
    }
    if (value.has_upto2) {
    }
    if (value.has_upto4) {
    }
    if (value.has_upto7) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ProcessingParameters：ASN.1 ProcessingParameters；源文件第 19348 行；SEQUENCE。
// Encode_ProcessingParameters 只读不分配；Decode_ProcessingParameters 可能 malloc（失败时内部已释放并清零）；Free_ProcessingParameters 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ProcessingParameters(Encoder& enc, const ProcessingParameters& value)
{
    (void)value;
    enc.WriteBit(value.has_differentTB_PerSlot);
    enc.WriteConstrainedInteger((std::int64_t)(value.fallback), 0, 1);
    if (value.has_differentTB_PerSlot) {
        Encode_ProcessingParameters_DifferentTB_PerSlot(enc, value.differentTB_PerSlot);
    }
    return enc.Error();
}

ErrorCode Decode_ProcessingParameters(Decoder& dec, ProcessingParameters& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.fallback = (ProcessingParameters_Fallback)tmp_value;
    }
    if (present_0) {
        if (Decode_ProcessingParameters_DifferentTB_PerSlot(dec, value.differentTB_PerSlot) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ProcessingParameters(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ProcessingParameters(ProcessingParameters& value)
{
    if (value.has_differentTB_PerSlot) {
        Free_ProcessingParameters_DifferentTB_PerSlot(value.differentTB_PerSlot);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FeatureSetDownlink_v1540_Pdsch_ProcessingType2：ASN.1 pdsch-ProcessingType2；源文件第 16219 行；SEQUENCE。
// Encode_FeatureSetDownlink_v1540_Pdsch_ProcessingType2 只读不分配；Decode_FeatureSetDownlink_v1540_Pdsch_ProcessingType2 可能 malloc（失败时内部已释放并清零）；Free_FeatureSetDownlink_v1540_Pdsch_ProcessingType2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FeatureSetDownlink_v1540_Pdsch_ProcessingType2(Encoder& enc, const FeatureSetDownlink_v1540_Pdsch_ProcessingType2& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz);
    enc.WriteBit(value.has_scs_30kHz);
    enc.WriteBit(value.has_scs_60kHz);
    if (value.has_scs_15kHz) {
        Encode_ProcessingParameters(enc, value.scs_15kHz);
    }
    if (value.has_scs_30kHz) {
        Encode_ProcessingParameters(enc, value.scs_30kHz);
    }
    if (value.has_scs_60kHz) {
        Encode_ProcessingParameters(enc, value.scs_60kHz);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_v1540_Pdsch_ProcessingType2(Decoder& dec, FeatureSetDownlink_v1540_Pdsch_ProcessingType2& value)
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
        if (Decode_ProcessingParameters(dec, value.scs_15kHz) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_ProcessingParameters(dec, value.scs_30kHz) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_ProcessingParameters(dec, value.scs_60kHz) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_v1540_Pdsch_ProcessingType2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_v1540_Pdsch_ProcessingType2(FeatureSetDownlink_v1540_Pdsch_ProcessingType2& value)
{
    if (value.has_scs_15kHz) {
        Free_ProcessingParameters(value.scs_15kHz);
    }
    if (value.has_scs_30kHz) {
        Free_ProcessingParameters(value.scs_30kHz);
    }
    if (value.has_scs_60kHz) {
        Free_ProcessingParameters(value.scs_60kHz);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited：ASN.1 pdsch-ProcessingType2-Limited；源文件第 16224 行；SEQUENCE。
// Encode_FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited 只读不分配；Decode_FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited 可能 malloc（失败时内部已释放并清零）；Free_FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited(Encoder& enc, const FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.differentTB_PerSlot_SCS_30kHz), 0, 3);
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited(Decoder& dec, FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.differentTB_PerSlot_SCS_30kHz = (FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited_DifferentTB_PerSlot_SCS_30kHz)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited(FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FeatureSetDownlink_v1540：ASN.1 FeatureSetDownlink-v1540；源文件第 16207 行；SEQUENCE。
// Encode_FeatureSetDownlink_v1540 只读不分配；Decode_FeatureSetDownlink_v1540 可能 malloc（失败时内部已释放并清零）；Free_FeatureSetDownlink_v1540 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FeatureSetDownlink_v1540(Encoder& enc, const FeatureSetDownlink_v1540& value)
{
    (void)value;
    enc.WriteBit(value.has_oneFL_DMRS_TwoAdditionalDMRS_DL);
    enc.WriteBit(value.has_additionalDMRS_DL_Alt);
    enc.WriteBit(value.has_twoFL_DMRS_TwoAdditionalDMRS_DL);
    enc.WriteBit(value.has_oneFL_DMRS_ThreeAdditionalDMRS_DL);
    enc.WriteBit(value.has_pdcch_MonitoringAnyOccasionsWithSpanGap);
    enc.WriteBit(value.has_pdsch_SeparationWithGap);
    enc.WriteBit(value.has_pdsch_ProcessingType2);
    enc.WriteBit(value.has_pdsch_ProcessingType2_Limited);
    enc.WriteBit(value.has_dl_MCS_TableAlt_DynamicIndication);
    if (value.has_oneFL_DMRS_TwoAdditionalDMRS_DL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.oneFL_DMRS_TwoAdditionalDMRS_DL), 0, 0);
    }
    if (value.has_additionalDMRS_DL_Alt) {
        enc.WriteConstrainedInteger((std::int64_t)(value.additionalDMRS_DL_Alt), 0, 0);
    }
    if (value.has_twoFL_DMRS_TwoAdditionalDMRS_DL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoFL_DMRS_TwoAdditionalDMRS_DL), 0, 0);
    }
    if (value.has_oneFL_DMRS_ThreeAdditionalDMRS_DL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.oneFL_DMRS_ThreeAdditionalDMRS_DL), 0, 0);
    }
    if (value.has_pdcch_MonitoringAnyOccasionsWithSpanGap) {
        Encode_FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap(enc, value.pdcch_MonitoringAnyOccasionsWithSpanGap);
    }
    if (value.has_pdsch_SeparationWithGap) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_SeparationWithGap), 0, 0);
    }
    if (value.has_pdsch_ProcessingType2) {
        Encode_FeatureSetDownlink_v1540_Pdsch_ProcessingType2(enc, value.pdsch_ProcessingType2);
    }
    if (value.has_pdsch_ProcessingType2_Limited) {
        Encode_FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited(enc, value.pdsch_ProcessingType2_Limited);
    }
    if (value.has_dl_MCS_TableAlt_DynamicIndication) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_MCS_TableAlt_DynamicIndication), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_v1540(Decoder& dec, FeatureSetDownlink_v1540& value)
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
        value.oneFL_DMRS_TwoAdditionalDMRS_DL = (FeatureSetDownlink_v1540_OneFL_DMRS_TwoAdditionalDMRS_DL)0;
    }
    if (present_1) {
        value.additionalDMRS_DL_Alt = (FeatureSetDownlink_v1540_AdditionalDMRS_DL_Alt)0;
    }
    if (present_2) {
        value.twoFL_DMRS_TwoAdditionalDMRS_DL = (FeatureSetDownlink_v1540_TwoFL_DMRS_TwoAdditionalDMRS_DL)0;
    }
    if (present_3) {
        value.oneFL_DMRS_ThreeAdditionalDMRS_DL = (FeatureSetDownlink_v1540_OneFL_DMRS_ThreeAdditionalDMRS_DL)0;
    }
    if (present_4) {
        if (Decode_FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap(dec, value.pdcch_MonitoringAnyOccasionsWithSpanGap) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        value.pdsch_SeparationWithGap = (FeatureSetDownlink_v1540_Pdsch_SeparationWithGap)0;
    }
    if (present_6) {
        if (Decode_FeatureSetDownlink_v1540_Pdsch_ProcessingType2(dec, value.pdsch_ProcessingType2) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        if (Decode_FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited(dec, value.pdsch_ProcessingType2_Limited) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        value.dl_MCS_TableAlt_DynamicIndication = (FeatureSetDownlink_v1540_Dl_MCS_TableAlt_DynamicIndication)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_v1540(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_v1540(FeatureSetDownlink_v1540& value)
{
    if (value.has_oneFL_DMRS_TwoAdditionalDMRS_DL) {
    }
    if (value.has_additionalDMRS_DL_Alt) {
    }
    if (value.has_twoFL_DMRS_TwoAdditionalDMRS_DL) {
    }
    if (value.has_oneFL_DMRS_ThreeAdditionalDMRS_DL) {
    }
    if (value.has_pdcch_MonitoringAnyOccasionsWithSpanGap) {
        Free_FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap(value.pdcch_MonitoringAnyOccasionsWithSpanGap);
    }
    if (value.has_pdsch_SeparationWithGap) {
    }
    if (value.has_pdsch_ProcessingType2) {
        Free_FeatureSetDownlink_v1540_Pdsch_ProcessingType2(value.pdsch_ProcessingType2);
    }
    if (value.has_pdsch_ProcessingType2_Limited) {
        Free_FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited(value.pdsch_ProcessingType2_Limited);
    }
    if (value.has_dl_MCS_TableAlt_DynamicIndication) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_Resources：ASN.1 SRS-Resources；源文件第 16968 行；SEQUENCE。
// Encode_SRS_Resources 只读不分配；Decode_SRS_Resources 可能 malloc（失败时内部已释放并清零）；Free_SRS_Resources 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_Resources(Encoder& enc, const SRS_Resources& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberAperiodicSRS_PerBWP), 0, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberAperiodicSRS_PerBWP_PerSlot), 1, 6);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPeriodicSRS_PerBWP), 0, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPeriodicSRS_PerBWP_PerSlot), 1, 6);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSemiPersistentSRS_PerBWP), 0, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSemiPersistentSRS_PerBWP_PerSlot), 1, 6);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSRS_Ports_PerResource), 0, 2);
    return enc.Error();
}

ErrorCode Decode_SRS_Resources(Decoder& dec, SRS_Resources& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxNumberAperiodicSRS_PerBWP = (SRS_Resources_MaxNumberAperiodicSRS_PerBWP)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 6, tmp_value)) { goto fail; }
        value.maxNumberAperiodicSRS_PerBWP_PerSlot = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxNumberPeriodicSRS_PerBWP = (SRS_Resources_MaxNumberPeriodicSRS_PerBWP)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 6, tmp_value)) { goto fail; }
        value.maxNumberPeriodicSRS_PerBWP_PerSlot = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxNumberSemiPersistentSRS_PerBWP = (SRS_Resources_MaxNumberSemiPersistentSRS_PerBWP)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 6, tmp_value)) { goto fail; }
        value.maxNumberSemiPersistentSRS_PerBWP_PerSlot = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.maxNumberSRS_Ports_PerResource = (SRS_Resources_MaxNumberSRS_Ports_PerResource)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_Resources(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_Resources(SRS_Resources& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FeatureSetDownlink_v15a0：ASN.1 FeatureSetDownlink-v15a0；源文件第 16230 行；SEQUENCE。
// Encode_FeatureSetDownlink_v15a0 只读不分配；Decode_FeatureSetDownlink_v15a0 可能 malloc（失败时内部已释放并清零）；Free_FeatureSetDownlink_v15a0 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FeatureSetDownlink_v15a0(Encoder& enc, const FeatureSetDownlink_v15a0& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedSRS_Resources);
    if (value.has_supportedSRS_Resources) {
        Encode_SRS_Resources(enc, value.supportedSRS_Resources);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_v15a0(Decoder& dec, FeatureSetDownlink_v15a0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SRS_Resources(dec, value.supportedSRS_Resources) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_v15a0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_v15a0(FeatureSetDownlink_v15a0& value)
{
    if (value.has_supportedSRS_Resources) {
        Free_SRS_Resources(value.supportedSRS_Resources);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16：ASN.1 cbgPDSCH-ProcessingType1-DifferentTB-PerSlot-r16；源文件第 16236 行；SEQUENCE。
// Encode_FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16 只读不分配；Decode_FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16 可能 malloc（失败时内部已释放并清零）；Free_FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16(Encoder& enc, const FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz_r16);
    enc.WriteBit(value.has_scs_30kHz_r16);
    enc.WriteBit(value.has_scs_60kHz_r16);
    enc.WriteBit(value.has_scs_120kHz_r16);
    if (value.has_scs_15kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz_r16), 0, 3);
    }
    if (value.has_scs_30kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz_r16), 0, 3);
    }
    if (value.has_scs_60kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz_r16), 0, 3);
    }
    if (value.has_scs_120kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_120kHz_r16), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16(Decoder& dec, FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16& value)
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
        value.scs_15kHz_r16 = (FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_15kHz_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.scs_30kHz_r16 = (FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_30kHz_r16)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.scs_60kHz_r16 = (FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_60kHz_r16)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.scs_120kHz_r16 = (FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_120kHz_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16(FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16& value)
{
    if (value.has_scs_15kHz_r16) {
    }
    if (value.has_scs_30kHz_r16) {
    }
    if (value.has_scs_60kHz_r16) {
    }
    if (value.has_scs_120kHz_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16：ASN.1 cbgPDSCH-ProcessingType2-DifferentTB-PerSlot-r16；源文件第 16244 行；SEQUENCE。
// Encode_FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16 只读不分配；Decode_FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16 可能 malloc（失败时内部已释放并清零）；Free_FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16(Encoder& enc, const FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz_r16);
    enc.WriteBit(value.has_scs_30kHz_r16);
    enc.WriteBit(value.has_scs_60kHz_r16);
    enc.WriteBit(value.has_scs_120kHz_r16);
    if (value.has_scs_15kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz_r16), 0, 3);
    }
    if (value.has_scs_30kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz_r16), 0, 3);
    }
    if (value.has_scs_60kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz_r16), 0, 3);
    }
    if (value.has_scs_120kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_120kHz_r16), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16(Decoder& dec, FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16& value)
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
        value.scs_15kHz_r16 = (FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_15kHz_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.scs_30kHz_r16 = (FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_30kHz_r16)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.scs_60kHz_r16 = (FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_60kHz_r16)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.scs_120kHz_r16 = (FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_120kHz_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16(FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16& value)
{
    if (value.has_scs_15kHz_r16) {
    }
    if (value.has_scs_30kHz_r16) {
    }
    if (value.has_scs_60kHz_r16) {
    }
    if (value.has_scs_120kHz_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FeatureSetDownlink_v1610_IntraFreqDAPS_r16：ASN.1 intraFreqDAPS-r16；源文件第 16250 行；SEQUENCE。
// Encode_FeatureSetDownlink_v1610_IntraFreqDAPS_r16 只读不分配；Decode_FeatureSetDownlink_v1610_IntraFreqDAPS_r16 可能 malloc（失败时内部已释放并清零）；Free_FeatureSetDownlink_v1610_IntraFreqDAPS_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FeatureSetDownlink_v1610_IntraFreqDAPS_r16(Encoder& enc, const FeatureSetDownlink_v1610_IntraFreqDAPS_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_intraFreqDiffSCS_DAPS_r16);
    enc.WriteBit(value.has_intraFreqAsyncDAPS_r16);
    if (value.has_intraFreqDiffSCS_DAPS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.intraFreqDiffSCS_DAPS_r16), 0, 0);
    }
    if (value.has_intraFreqAsyncDAPS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.intraFreqAsyncDAPS_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_v1610_IntraFreqDAPS_r16(Decoder& dec, FeatureSetDownlink_v1610_IntraFreqDAPS_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.intraFreqDiffSCS_DAPS_r16 = (FeatureSetDownlink_v1610_IntraFreqDAPS_r16_IntraFreqDiffSCS_DAPS_r16)0;
    }
    if (present_1) {
        value.intraFreqAsyncDAPS_r16 = (FeatureSetDownlink_v1610_IntraFreqDAPS_r16_IntraFreqAsyncDAPS_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_v1610_IntraFreqDAPS_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_v1610_IntraFreqDAPS_r16(FeatureSetDownlink_v1610_IntraFreqDAPS_r16& value)
{
    if (value.has_intraFreqDiffSCS_DAPS_r16) {
    }
    if (value.has_intraFreqAsyncDAPS_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_MonitoringOccasions_r16：ASN.1 PDCCH-MonitoringOccasions-r16；源文件第 16419 行；SEQUENCE。
// Encode_PDCCH_MonitoringOccasions_r16 只读不分配；Decode_PDCCH_MonitoringOccasions_r16 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_MonitoringOccasions_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_MonitoringOccasions_r16(Encoder& enc, const PDCCH_MonitoringOccasions_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_period7span3_r16);
    enc.WriteBit(value.has_period4span3_r16);
    enc.WriteBit(value.has_period2span2_r16);
    if (value.has_period7span3_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.period7span3_r16), 0, 0);
    }
    if (value.has_period4span3_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.period4span3_r16), 0, 0);
    }
    if (value.has_period2span2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.period2span2_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_MonitoringOccasions_r16(Decoder& dec, PDCCH_MonitoringOccasions_r16& value)
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
        value.period7span3_r16 = (PDCCH_MonitoringOccasions_r16_Period7span3_r16)0;
    }
    if (present_1) {
        value.period4span3_r16 = (PDCCH_MonitoringOccasions_r16_Period4span3_r16)0;
    }
    if (present_2) {
        value.period2span2_r16 = (PDCCH_MonitoringOccasions_r16_Period2span2_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_MonitoringOccasions_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_MonitoringOccasions_r16(PDCCH_MonitoringOccasions_r16& value)
{
    if (value.has_period7span3_r16) {
    }
    if (value.has_period4span3_r16) {
    }
    if (value.has_period2span2_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType1_r16：ASN.1 pdcch-Monitoring-r16/pdsch-ProcessingType1-r16；源文件第 16259 行；SEQUENCE。
// Encode_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType1_r16 只读不分配；Decode_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType1_r16 可能 malloc（失败时内部已释放并清零）；Free_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType1_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType1_r16(Encoder& enc, const FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType1_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz_r16);
    enc.WriteBit(value.has_scs_30kHz_r16);
    if (value.has_scs_15kHz_r16) {
        Encode_PDCCH_MonitoringOccasions_r16(enc, value.scs_15kHz_r16);
    }
    if (value.has_scs_30kHz_r16) {
        Encode_PDCCH_MonitoringOccasions_r16(enc, value.scs_30kHz_r16);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType1_r16(Decoder& dec, FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType1_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_PDCCH_MonitoringOccasions_r16(dec, value.scs_15kHz_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_PDCCH_MonitoringOccasions_r16(dec, value.scs_30kHz_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType1_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType1_r16(FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType1_r16& value)
{
    if (value.has_scs_15kHz_r16) {
        Free_PDCCH_MonitoringOccasions_r16(value.scs_15kHz_r16);
    }
    if (value.has_scs_30kHz_r16) {
        Free_PDCCH_MonitoringOccasions_r16(value.scs_30kHz_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType2_r16：ASN.1 pdcch-Monitoring-r16/pdsch-ProcessingType2-r16；源文件第 16263 行；SEQUENCE。
// Encode_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType2_r16 只读不分配；Decode_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType2_r16 可能 malloc（失败时内部已释放并清零）；Free_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType2_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType2_r16(Encoder& enc, const FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType2_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz_r16);
    enc.WriteBit(value.has_scs_30kHz_r16);
    if (value.has_scs_15kHz_r16) {
        Encode_PDCCH_MonitoringOccasions_r16(enc, value.scs_15kHz_r16);
    }
    if (value.has_scs_30kHz_r16) {
        Encode_PDCCH_MonitoringOccasions_r16(enc, value.scs_30kHz_r16);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType2_r16(Decoder& dec, FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType2_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_PDCCH_MonitoringOccasions_r16(dec, value.scs_15kHz_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_PDCCH_MonitoringOccasions_r16(dec, value.scs_30kHz_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType2_r16(FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType2_r16& value)
{
    if (value.has_scs_15kHz_r16) {
        Free_PDCCH_MonitoringOccasions_r16(value.scs_15kHz_r16);
    }
    if (value.has_scs_30kHz_r16) {
        Free_PDCCH_MonitoringOccasions_r16(value.scs_30kHz_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FeatureSetDownlink_v1610_Pdcch_Monitoring_r16：ASN.1 pdcch-Monitoring-r16；源文件第 16258 行；SEQUENCE。
// Encode_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16 只读不分配；Decode_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16 可能 malloc（失败时内部已释放并清零）；Free_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16(Encoder& enc, const FeatureSetDownlink_v1610_Pdcch_Monitoring_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_pdsch_ProcessingType1_r16);
    enc.WriteBit(value.has_pdsch_ProcessingType2_r16);
    if (value.has_pdsch_ProcessingType1_r16) {
        Encode_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType1_r16(enc, value.pdsch_ProcessingType1_r16);
    }
    if (value.has_pdsch_ProcessingType2_r16) {
        Encode_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType2_r16(enc, value.pdsch_ProcessingType2_r16);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16(Decoder& dec, FeatureSetDownlink_v1610_Pdcch_Monitoring_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType1_r16(dec, value.pdsch_ProcessingType1_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType2_r16(dec, value.pdsch_ProcessingType2_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16(FeatureSetDownlink_v1610_Pdcch_Monitoring_r16& value)
{
    if (value.has_pdsch_ProcessingType1_r16) {
        Free_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType1_r16(value.pdsch_ProcessingType1_r16);
    }
    if (value.has_pdsch_ProcessingType2_r16) {
        Free_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16_Pdsch_ProcessingType2_r16(value.pdsch_ProcessingType2_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16：ASN.1 crossCarrierSchedulingProcessing-DiffSCS-r16；源文件第 16273 行；SEQUENCE。
// Encode_FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16 只读不分配；Decode_FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16 可能 malloc（失败时内部已释放并清零）；Free_FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16(Encoder& enc, const FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz_120kHz_r16);
    enc.WriteBit(value.has_scs_15kHz_60kHz_r16);
    enc.WriteBit(value.has_scs_30kHz_120kHz_r16);
    enc.WriteBit(value.has_scs_15kHz_30kHz_r16);
    enc.WriteBit(value.has_scs_30kHz_60kHz_r16);
    enc.WriteBit(value.has_scs_60kHz_120kHz_r16);
    if (value.has_scs_15kHz_120kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz_120kHz_r16), 0, 2);
    }
    if (value.has_scs_15kHz_60kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz_60kHz_r16), 0, 2);
    }
    if (value.has_scs_30kHz_120kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz_120kHz_r16), 0, 2);
    }
    if (value.has_scs_15kHz_30kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz_30kHz_r16), 0, 0);
    }
    if (value.has_scs_30kHz_60kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz_60kHz_r16), 0, 0);
    }
    if (value.has_scs_60kHz_120kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz_120kHz_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16(Decoder& dec, FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16& value)
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
        value.scs_15kHz_120kHz_r16 = (FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_120kHz_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_15kHz_60kHz_r16 = (FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_60kHz_r16)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_30kHz_120kHz_r16 = (FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_120kHz_r16)tmp_value;
    }
    if (present_3) {
        value.scs_15kHz_30kHz_r16 = (FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_30kHz_r16)0;
    }
    if (present_4) {
        value.scs_30kHz_60kHz_r16 = (FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_60kHz_r16)0;
    }
    if (present_5) {
        value.scs_60kHz_120kHz_r16 = (FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_60kHz_120kHz_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16(FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16& value)
{
    if (value.has_scs_15kHz_120kHz_r16) {
    }
    if (value.has_scs_15kHz_60kHz_r16) {
    }
    if (value.has_scs_30kHz_120kHz_r16) {
    }
    if (value.has_scs_15kHz_30kHz_r16) {
    }
    if (value.has_scs_30kHz_60kHz_r16) {
    }
    if (value.has_scs_60kHz_120kHz_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FeatureSetDownlink_v1610：ASN.1 FeatureSetDownlink-v1610；源文件第 16234 行；SEQUENCE。
// Encode_FeatureSetDownlink_v1610 只读不分配；Decode_FeatureSetDownlink_v1610 可能 malloc（失败时内部已释放并清零）；Free_FeatureSetDownlink_v1610 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FeatureSetDownlink_v1610(Encoder& enc, const FeatureSetDownlink_v1610& value)
{
    (void)value;
    enc.WriteBit(value.has_cbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16);
    enc.WriteBit(value.has_cbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16);
    enc.WriteBit(value.has_intraFreqDAPS_r16);
    enc.WriteBit(value.has_intraBandFreqSeparationDL_v1620);
    enc.WriteBit(value.has_intraBandFreqSeparationDL_Only_r16);
    enc.WriteBit(value.has_pdcch_Monitoring_r16);
    enc.WriteBit(value.has_pdcch_MonitoringMixed_r16);
    enc.WriteBit(value.has_crossCarrierSchedulingProcessing_DiffSCS_r16);
    enc.WriteBit(value.has_singleDCI_SDM_scheme_r16);
    if (value.has_cbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16) {
        Encode_FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16(enc, value.cbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16);
    }
    if (value.has_cbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16) {
        Encode_FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16(enc, value.cbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16);
    }
    if (value.has_intraFreqDAPS_r16) {
        Encode_FeatureSetDownlink_v1610_IntraFreqDAPS_r16(enc, value.intraFreqDAPS_r16);
    }
    if (value.has_intraBandFreqSeparationDL_v1620) {
        enc.WriteConstrainedInteger((std::int64_t)(value.intraBandFreqSeparationDL_v1620), 0, 5);
    }
    if (value.has_intraBandFreqSeparationDL_Only_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.intraBandFreqSeparationDL_Only_r16), 0, 5);
    }
    if (value.has_pdcch_Monitoring_r16) {
        Encode_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16(enc, value.pdcch_Monitoring_r16);
    }
    if (value.has_pdcch_MonitoringMixed_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_MonitoringMixed_r16), 0, 0);
    }
    if (value.has_crossCarrierSchedulingProcessing_DiffSCS_r16) {
        Encode_FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16(enc, value.crossCarrierSchedulingProcessing_DiffSCS_r16);
    }
    if (value.has_singleDCI_SDM_scheme_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.singleDCI_SDM_scheme_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_v1610(Decoder& dec, FeatureSetDownlink_v1610& value)
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
        if (Decode_FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16(dec, value.cbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16(dec, value.cbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_FeatureSetDownlink_v1610_IntraFreqDAPS_r16(dec, value.intraFreqDAPS_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.intraBandFreqSeparationDL_v1620 = (FreqSeparationClassDL_v1620)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.intraBandFreqSeparationDL_Only_r16 = (FreqSeparationClassDL_Only_r16)tmp_value;
    }
    if (present_5) {
        if (Decode_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16(dec, value.pdcch_Monitoring_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        value.pdcch_MonitoringMixed_r16 = (FeatureSetDownlink_v1610_Pdcch_MonitoringMixed_r16)0;
    }
    if (present_7) {
        if (Decode_FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16(dec, value.crossCarrierSchedulingProcessing_DiffSCS_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        value.singleDCI_SDM_scheme_r16 = (FeatureSetDownlink_v1610_SingleDCI_SDM_scheme_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_v1610(FeatureSetDownlink_v1610& value)
{
    if (value.has_cbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16) {
        Free_FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16(value.cbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16);
    }
    if (value.has_cbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16) {
        Free_FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16(value.cbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16);
    }
    if (value.has_intraFreqDAPS_r16) {
        Free_FeatureSetDownlink_v1610_IntraFreqDAPS_r16(value.intraFreqDAPS_r16);
    }
    if (value.has_intraBandFreqSeparationDL_v1620) {
    }
    if (value.has_intraBandFreqSeparationDL_Only_r16) {
    }
    if (value.has_pdcch_Monitoring_r16) {
        Free_FeatureSetDownlink_v1610_Pdcch_Monitoring_r16(value.pdcch_Monitoring_r16);
    }
    if (value.has_pdcch_MonitoringMixed_r16) {
    }
    if (value.has_crossCarrierSchedulingProcessing_DiffSCS_r16) {
        Free_FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16(value.crossCarrierSchedulingProcessing_DiffSCS_r16);
    }
    if (value.has_singleDCI_SDM_scheme_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
