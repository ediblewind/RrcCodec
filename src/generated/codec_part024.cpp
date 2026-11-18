/* ============================================================================
 * src/generated/codec_part024.cpp — 生成的编解码函数
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
// BandCombination_v1650：ASN.1 BandCombination-v1650；源文件第 14323 行；SEQUENCE。
// Encode_BandCombination_v1650 只读不分配；Decode_BandCombination_v1650 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_v1650 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_v1650(Encoder& enc, const BandCombination_v1650& value)
{
    enc.WriteBit(value.has_ca_ParametersNRDC_v1650);
    if (value.has_ca_ParametersNRDC_v1650) {
        Encode_CA_ParametersNRDC_v1650(enc, value.ca_ParametersNRDC_v1650);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_v1650(Decoder& dec, BandCombination_v1650& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_CA_ParametersNRDC_v1650(dec, value.ca_ParametersNRDC_v1650) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_v1650(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_v1650(BandCombination_v1650& value)
{
    if (value.has_ca_ParametersNRDC_v1650) {
        Free_CA_ParametersNRDC_v1650(value.ca_ParametersNRDC_v1650);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_v1680：ASN.1 BandCombination-v1680；源文件第 14327 行；SEQUENCE。
// Encode_BandCombination_v1680 只读不分配；Decode_BandCombination_v1680 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_v1680 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_v1680(Encoder& enc, const BandCombination_v1680& value)
{
    enc.WriteBit(value.has_intrabandConcurrentOperationPowerClass_r16);
    if (value.has_intrabandConcurrentOperationPowerClass_r16) {
enc.WriteConstrainedLength(value.intrabandConcurrentOperationPowerClass_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.intrabandConcurrentOperationPowerClass_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.intrabandConcurrentOperationPowerClass_r16_items[i]), 0, 7);
}
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_v1680(Decoder& dec, BandCombination_v1680& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.intrabandConcurrentOperationPowerClass_r16_count)) { goto fail; }
if (value.intrabandConcurrentOperationPowerClass_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.intrabandConcurrentOperationPowerClass_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.intrabandConcurrentOperationPowerClass_r16_count > 0u) {
    value.intrabandConcurrentOperationPowerClass_r16_items = (IntraBandPowerClass_r16*)std::malloc((std::size_t)value.intrabandConcurrentOperationPowerClass_r16_count * sizeof(IntraBandPowerClass_r16));
    if (value.intrabandConcurrentOperationPowerClass_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.intrabandConcurrentOperationPowerClass_r16_items, 0, (std::size_t)value.intrabandConcurrentOperationPowerClass_r16_count * sizeof(IntraBandPowerClass_r16));
}
for (std::uint32_t i = 0; i < value.intrabandConcurrentOperationPowerClass_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.intrabandConcurrentOperationPowerClass_r16_items[i] = (IntraBandPowerClass_r16)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_v1680(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_v1680(BandCombination_v1680& value)
{
    if (value.has_intrabandConcurrentOperationPowerClass_r16) {
        if (value.intrabandConcurrentOperationPowerClass_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.intrabandConcurrentOperationPowerClass_r16_count; ++i) {
            }
            std::free(value.intrabandConcurrentOperationPowerClass_r16_items);
            value.intrabandConcurrentOperationPowerClass_r16_items = nullptr;
        }
        value.intrabandConcurrentOperationPowerClass_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16：ASN.1 csi-ReportingCrossPUCCH-Grp-r16/additionalSymbols-r16；源文件第 14903 行；SEQUENCE。
// Encode_CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16 只读不分配；Decode_CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16(Encoder& enc, const CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16& value)
{
    enc.WriteBit(value.has_scs_15kHz_additionalSymbols_r16);
    enc.WriteBit(value.has_scs_30kHz_additionalSymbols_r16);
    enc.WriteBit(value.has_scs_60kHz_additionalSymbols_r16);
    enc.WriteBit(value.has_scs_120kHz_additionalSymbols_r16);
    if (value.has_scs_15kHz_additionalSymbols_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz_additionalSymbols_r16), 0, 1);
    }
    if (value.has_scs_30kHz_additionalSymbols_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz_additionalSymbols_r16), 0, 1);
    }
    if (value.has_scs_60kHz_additionalSymbols_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz_additionalSymbols_r16), 0, 2);
    }
    if (value.has_scs_120kHz_additionalSymbols_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_120kHz_additionalSymbols_r16), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16(Decoder& dec, CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.scs_15kHz_additionalSymbols_r16 = (CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_15kHz_additionalSymbols_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.scs_30kHz_additionalSymbols_r16 = (CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_30kHz_additionalSymbols_r16)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_60kHz_additionalSymbols_r16 = (CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_60kHz_additionalSymbols_r16)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_120kHz_additionalSymbols_r16 = (CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_120kHz_additionalSymbols_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16(CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16& value)
{
    if (value.has_scs_15kHz_additionalSymbols_r16) {
    }
    if (value.has_scs_30kHz_additionalSymbols_r16) {
    }
    if (value.has_scs_60kHz_additionalSymbols_r16) {
    }
    if (value.has_scs_120kHz_additionalSymbols_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16：ASN.1 csi-ReportingCrossPUCCH-Grp-r16；源文件第 14901 行；SEQUENCE。
// Encode_CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16 只读不分配；Decode_CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16(Encoder& enc, const CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16& value)
{
    enc.WriteBit(value.has_additionalSymbols_r16);
    enc.WriteBit(value.has_sp_CSI_ReportingOnPUCCH_r16);
    enc.WriteBit(value.has_sp_CSI_ReportingOnPUSCH_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.computationTimeForA_CSI_r16), 0, 1);
    if (value.has_additionalSymbols_r16) {
        Encode_CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16(enc, value.additionalSymbols_r16);
    }
    if (value.has_sp_CSI_ReportingOnPUCCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sp_CSI_ReportingOnPUCCH_r16), 0, 0);
    }
    if (value.has_sp_CSI_ReportingOnPUSCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sp_CSI_ReportingOnPUSCH_r16), 0, 0);
    }
enc.WriteConstrainedLength(value.carrierTypePairList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.carrierTypePairList_r16_count; ++i) {
    Encode_CarrierTypePair_r16(enc, value.carrierTypePairList_r16_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16(Decoder& dec, CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16& value)
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
        value.computationTimeForA_CSI_r16 = (CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_ComputationTimeForA_CSI_r16)tmp_value;
    }
    if (present_0) {
        if (Decode_CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16(dec, value.additionalSymbols_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.sp_CSI_ReportingOnPUCCH_r16 = (CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_Sp_CSI_ReportingOnPUCCH_r16)0;
    }
    if (present_2) {
        value.sp_CSI_ReportingOnPUSCH_r16 = (CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_Sp_CSI_ReportingOnPUSCH_r16)0;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.carrierTypePairList_r16_count)) { goto fail; }
if (value.carrierTypePairList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.carrierTypePairList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.carrierTypePairList_r16_count > 0u) {
    value.carrierTypePairList_r16_items = (CarrierTypePair_r16*)std::malloc((std::size_t)value.carrierTypePairList_r16_count * sizeof(CarrierTypePair_r16));
    if (value.carrierTypePairList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.carrierTypePairList_r16_items, 0, (std::size_t)value.carrierTypePairList_r16_count * sizeof(CarrierTypePair_r16));
}
for (std::uint32_t i = 0; i < value.carrierTypePairList_r16_count; ++i) {
    if (Decode_CarrierTypePair_r16(dec, value.carrierTypePairList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16(CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16& value)
{
    if (value.has_additionalSymbols_r16) {
        Free_CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16(value.additionalSymbols_r16);
    }
    if (value.has_sp_CSI_ReportingOnPUCCH_r16) {
    }
    if (value.has_sp_CSI_ReportingOnPUSCH_r16) {
    }
    if (value.carrierTypePairList_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.carrierTypePairList_r16_count; ++i) {
            Free_CarrierTypePair_r16(value.carrierTypePairList_r16_items[i]);
        }
        std::free(value.carrierTypePairList_r16_items);
        value.carrierTypePairList_r16_items = nullptr;
    }
    value.carrierTypePairList_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1690：ASN.1 CA-ParametersNR-v1690；源文件第 14900 行；SEQUENCE。
// Encode_CA_ParametersNR_v1690 只读不分配；Decode_CA_ParametersNR_v1690 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1690 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1690(Encoder& enc, const CA_ParametersNR_v1690& value)
{
    enc.WriteBit(value.has_csi_ReportingCrossPUCCH_Grp_r16);
    if (value.has_csi_ReportingCrossPUCCH_Grp_r16) {
        Encode_CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16(enc, value.csi_ReportingCrossPUCCH_Grp_r16);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1690(Decoder& dec, CA_ParametersNR_v1690& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16(dec, value.csi_ReportingCrossPUCCH_Grp_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1690(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1690(CA_ParametersNR_v1690& value)
{
    if (value.has_csi_ReportingCrossPUCCH_Grp_r16) {
        Free_CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16(value.csi_ReportingCrossPUCCH_Grp_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_v1690：ASN.1 BandCombination-v1690；源文件第 14331 行；SEQUENCE。
// Encode_BandCombination_v1690 只读不分配；Decode_BandCombination_v1690 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_v1690 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_v1690(Encoder& enc, const BandCombination_v1690& value)
{
    enc.WriteBit(value.has_ca_ParametersNR_v1690);
    if (value.has_ca_ParametersNR_v1690) {
        Encode_CA_ParametersNR_v1690(enc, value.ca_ParametersNR_v1690);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_v1690(Decoder& dec, BandCombination_v1690& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_CA_ParametersNR_v1690(dec, value.ca_ParametersNR_v1690) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_v1690(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_v1690(BandCombination_v1690& value)
{
    if (value.has_ca_ParametersNR_v1690) {
        Free_CA_ParametersNR_v1690(value.ca_ParametersNR_v1690);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v16a0：ASN.1 CA-ParametersNR-v16a0；源文件第 14915 行；SEQUENCE。
// Encode_CA_ParametersNR_v16a0 只读不分配；Decode_CA_ParametersNR_v16a0 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v16a0 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v16a0(Encoder& enc, const CA_ParametersNR_v16a0& value)
{
enc.WriteConstrainedLength(value.pdcch_BlindDetectionMixedList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pdcch_BlindDetectionMixedList_r16_count; ++i) {
    Encode_PDCCH_BlindDetectionMixedList_r16(enc, value.pdcch_BlindDetectionMixedList_r16_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v16a0(Decoder& dec, CA_ParametersNR_v16a0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.pdcch_BlindDetectionMixedList_r16_count)) { goto fail; }
if (value.pdcch_BlindDetectionMixedList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pdcch_BlindDetectionMixedList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pdcch_BlindDetectionMixedList_r16_count > 0u) {
    value.pdcch_BlindDetectionMixedList_r16_items = (PDCCH_BlindDetectionMixedList_r16*)std::malloc((std::size_t)value.pdcch_BlindDetectionMixedList_r16_count * sizeof(PDCCH_BlindDetectionMixedList_r16));
    if (value.pdcch_BlindDetectionMixedList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pdcch_BlindDetectionMixedList_r16_items, 0, (std::size_t)value.pdcch_BlindDetectionMixedList_r16_count * sizeof(PDCCH_BlindDetectionMixedList_r16));
}
for (std::uint32_t i = 0; i < value.pdcch_BlindDetectionMixedList_r16_count; ++i) {
    if (Decode_PDCCH_BlindDetectionMixedList_r16(dec, value.pdcch_BlindDetectionMixedList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v16a0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v16a0(CA_ParametersNR_v16a0& value)
{
    if (value.pdcch_BlindDetectionMixedList_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.pdcch_BlindDetectionMixedList_r16_count; ++i) {
            Free_PDCCH_BlindDetectionMixedList_r16(value.pdcch_BlindDetectionMixedList_r16_items[i]);
        }
        std::free(value.pdcch_BlindDetectionMixedList_r16_items);
        value.pdcch_BlindDetectionMixedList_r16_items = nullptr;
    }
    value.pdcch_BlindDetectionMixedList_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNRDC_v16a0：ASN.1 CA-ParametersNRDC-v16a0；源文件第 15492 行；SEQUENCE。
// Encode_CA_ParametersNRDC_v16a0 只读不分配；Decode_CA_ParametersNRDC_v16a0 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNRDC_v16a0 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNRDC_v16a0(Encoder& enc, const CA_ParametersNRDC_v16a0& value)
{
    enc.WriteBit(value.has_ca_ParametersNR_ForDC_v16a0);
    if (value.has_ca_ParametersNR_ForDC_v16a0) {
        Encode_CA_ParametersNR_v16a0(enc, value.ca_ParametersNR_ForDC_v16a0);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNRDC_v16a0(Decoder& dec, CA_ParametersNRDC_v16a0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_CA_ParametersNR_v16a0(dec, value.ca_ParametersNR_ForDC_v16a0) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNRDC_v16a0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNRDC_v16a0(CA_ParametersNRDC_v16a0& value)
{
    if (value.has_ca_ParametersNR_ForDC_v16a0) {
        Free_CA_ParametersNR_v16a0(value.ca_ParametersNR_ForDC_v16a0);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_v16a0：ASN.1 BandCombination-v16a0；源文件第 14335 行；SEQUENCE。
// Encode_BandCombination_v16a0 只读不分配；Decode_BandCombination_v16a0 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_v16a0 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_v16a0(Encoder& enc, const BandCombination_v16a0& value)
{
    enc.WriteBit(value.has_ca_ParametersNR_v16a0);
    enc.WriteBit(value.has_ca_ParametersNRDC_v16a0);
    if (value.has_ca_ParametersNR_v16a0) {
        Encode_CA_ParametersNR_v16a0(enc, value.ca_ParametersNR_v16a0);
    }
    if (value.has_ca_ParametersNRDC_v16a0) {
        Encode_CA_ParametersNRDC_v16a0(enc, value.ca_ParametersNRDC_v16a0);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_v16a0(Decoder& dec, BandCombination_v16a0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_CA_ParametersNR_v16a0(dec, value.ca_ParametersNR_v16a0) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CA_ParametersNRDC_v16a0(dec, value.ca_ParametersNRDC_v16a0) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_v16a0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_v16a0(BandCombination_v16a0& value)
{
    if (value.has_ca_ParametersNR_v16a0) {
        Free_CA_ParametersNR_v16a0(value.ca_ParametersNR_v16a0);
    }
    if (value.has_ca_ParametersNRDC_v16a0) {
        Free_CA_ParametersNRDC_v16a0(value.ca_ParametersNRDC_v16a0);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17：ASN.1 supportedSCS-Combinations-r17；源文件第 15320 行；SEQUENCE。
// Encode_CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17 只读不分配；Decode_CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17 可能 malloc（失败时内部已释放并清零）；Free_CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17(Encoder& enc, const CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17& value)
{
    enc.WriteBit(value.has_scs15kHz_15kHz_r17);
    enc.WriteBit(value.has_scs15kHz_30kHz_r17);
    enc.WriteBit(value.has_scs15kHz_60kHz_r17);
    enc.WriteBit(value.has_scs30kHz_30kHz_r17);
    enc.WriteBit(value.has_scs30kHz_60kHz_r17);
    enc.WriteBit(value.has_scs60kHz_60kHz_r17);
    if (value.has_scs15kHz_15kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs15kHz_15kHz_r17), 0, 0);
    }
    if (value.has_scs15kHz_30kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs15kHz_30kHz_r17), 0, 0);
    }
    if (value.has_scs15kHz_60kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs15kHz_60kHz_r17), 0, 0);
    }
    if (value.has_scs30kHz_30kHz_r17) {
        enc.WriteConstrainedBitString(value.scs30kHz_30kHz_r17.bytes, value.scs30kHz_30kHz_r17.bitLength, 1, 496);
    }
    if (value.has_scs30kHz_60kHz_r17) {
        enc.WriteConstrainedBitString(value.scs30kHz_60kHz_r17.bytes, value.scs30kHz_60kHz_r17.bitLength, 1, 496);
    }
    if (value.has_scs60kHz_60kHz_r17) {
        enc.WriteConstrainedBitString(value.scs60kHz_60kHz_r17.bytes, value.scs60kHz_60kHz_r17.bitLength, 1, 496);
    }
    return enc.Error();
}

ErrorCode Decode_CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17(Decoder& dec, CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17& value)
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
        value.scs15kHz_15kHz_r17 = (CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17_Scs15kHz_15kHz_r17)0;
    }
    if (present_1) {
        value.scs15kHz_30kHz_r17 = (CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17_Scs15kHz_30kHz_r17)0;
    }
    if (present_2) {
        value.scs15kHz_60kHz_r17 = (CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17_Scs15kHz_60kHz_r17)0;
    }
    if (present_3) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 1, 496)) { goto fail; }
        value.scs30kHz_30kHz_r17.bytes = string_bytes;
        value.scs30kHz_30kHz_r17.bitLength = string_length;
    }
    if (present_4) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 1, 496)) { goto fail; }
        value.scs30kHz_60kHz_r17.bytes = string_bytes;
        value.scs30kHz_60kHz_r17.bitLength = string_length;
    }
    if (present_5) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 1, 496)) { goto fail; }
        value.scs60kHz_60kHz_r17.bytes = string_bytes;
        value.scs60kHz_60kHz_r17.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17(CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17& value)
{
    if (value.has_scs15kHz_15kHz_r17) {
    }
    if (value.has_scs15kHz_30kHz_r17) {
    }
    if (value.has_scs15kHz_60kHz_r17) {
    }
    if (value.has_scs30kHz_30kHz_r17) {
        std::free(value.scs30kHz_30kHz_r17.bytes);
        value.scs30kHz_30kHz_r17.bytes = nullptr;
        value.scs30kHz_30kHz_r17.bitLength = 0;
    }
    if (value.has_scs30kHz_60kHz_r17) {
        std::free(value.scs30kHz_60kHz_r17.bytes);
        value.scs30kHz_60kHz_r17.bytes = nullptr;
        value.scs30kHz_60kHz_r17.bitLength = 0;
    }
    if (value.has_scs60kHz_60kHz_r17) {
        std::free(value.scs60kHz_60kHz_r17.bytes);
        value.scs60kHz_60kHz_r17.bytes = nullptr;
        value.scs60kHz_60kHz_r17.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CrossCarrierSchedulingSCell_SpCell_r17：ASN.1 CrossCarrierSchedulingSCell-SpCell-r17；源文件第 15319 行；SEQUENCE。
// Encode_CrossCarrierSchedulingSCell_SpCell_r17 只读不分配；Decode_CrossCarrierSchedulingSCell_SpCell_r17 可能 malloc（失败时内部已释放并清零）；Free_CrossCarrierSchedulingSCell_SpCell_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CrossCarrierSchedulingSCell_SpCell_r17(Encoder& enc, const CrossCarrierSchedulingSCell_SpCell_r17& value)
{
    Encode_CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17(enc, value.supportedSCS_Combinations_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_MonitoringOccasion_r17), 0, 1);
    return enc.Error();
}

ErrorCode Decode_CrossCarrierSchedulingSCell_SpCell_r17(Decoder& dec, CrossCarrierSchedulingSCell_SpCell_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17(dec, value.supportedSCS_Combinations_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.pdcch_MonitoringOccasion_r17 = (CrossCarrierSchedulingSCell_SpCell_r17_Pdcch_MonitoringOccasion_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CrossCarrierSchedulingSCell_SpCell_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CrossCarrierSchedulingSCell_SpCell_r17(CrossCarrierSchedulingSCell_SpCell_r17& value)
{
    Free_CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17(value.supportedSCS_Combinations_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookParametersfetype2PerBC_r17：ASN.1 CodebookParametersfetype2PerBC-r17；源文件第 15831 行；SEQUENCE。
// Encode_CodebookParametersfetype2PerBC_r17 只读不分配；Decode_CodebookParametersfetype2PerBC_r17 可能 malloc（失败时内部已释放并清零）；Free_CodebookParametersfetype2PerBC_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookParametersfetype2PerBC_r17(Encoder& enc, const CodebookParametersfetype2PerBC_r17& value)
{
    enc.WriteBit(value.has_fetype2R1_r17);
    enc.WriteBit(value.has_fetype2R2_r17);
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
    return enc.Error();
}

ErrorCode Decode_CodebookParametersfetype2PerBC_r17(Decoder& dec, CodebookParametersfetype2PerBC_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
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
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParametersfetype2PerBC_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParametersfetype2PerBC_r17(CodebookParametersfetype2PerBC_r17& value)
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
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookComboParameterMixedTypePerBC_r17：ASN.1 CodebookComboParameterMixedTypePerBC-r17；源文件第 15842 行；SEQUENCE。
// Encode_CodebookComboParameterMixedTypePerBC_r17 只读不分配；Decode_CodebookComboParameterMixedTypePerBC_r17 可能 malloc（失败时内部已释放并清零）；Free_CodebookComboParameterMixedTypePerBC_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookComboParameterMixedTypePerBC_r17(Encoder& enc, const CodebookComboParameterMixedTypePerBC_r17& value)
{
    enc.WriteBit(value.has_type1SP_feType2PS_null_r17);
    enc.WriteBit(value.has_type1SP_feType2PS_M2R1_null_r17);
    enc.WriteBit(value.has_type1SP_feType2PS_M2R2_null_r17);
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
    if (value.has_type1SP_feType2PS_M2R2_null_r17) {
enc.WriteConstrainedLength(value.type1SP_feType2PS_M2R2_null_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.type1SP_feType2PS_M2R2_null_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.type1SP_feType2PS_M2R2_null_r17_items[i]), 0, 511);
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

ErrorCode Decode_CodebookComboParameterMixedTypePerBC_r17(Decoder& dec, CodebookComboParameterMixedTypePerBC_r17& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.type1SP_feType2PS_M2R2_null_r17_count)) { goto fail; }
if (value.type1SP_feType2PS_M2R2_null_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.type1SP_feType2PS_M2R2_null_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.type1SP_feType2PS_M2R2_null_r17_count > 0u) {
    value.type1SP_feType2PS_M2R2_null_r17_items = (int64_t*)std::malloc((std::size_t)value.type1SP_feType2PS_M2R2_null_r17_count * sizeof(int64_t));
    if (value.type1SP_feType2PS_M2R2_null_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.type1SP_feType2PS_M2R2_null_r17_items, 0, (std::size_t)value.type1SP_feType2PS_M2R2_null_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.type1SP_feType2PS_M2R2_null_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.type1SP_feType2PS_M2R2_null_r17_items[i] = (int64_t)tmp_value;
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
    Free_CodebookComboParameterMixedTypePerBC_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookComboParameterMixedTypePerBC_r17(CodebookComboParameterMixedTypePerBC_r17& value)
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
    if (value.has_type1SP_feType2PS_M2R2_null_r17) {
        if (value.type1SP_feType2PS_M2R2_null_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.type1SP_feType2PS_M2R2_null_r17_count; ++i) {
            }
            std::free(value.type1SP_feType2PS_M2R2_null_r17_items);
            value.type1SP_feType2PS_M2R2_null_r17_items = nullptr;
        }
        value.type1SP_feType2PS_M2R2_null_r17_count = 0;
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
// CodebookComboParameterMultiTRP_PerBC_r17：ASN.1 CodebookComboParameterMultiTRP-PerBC-r17；源文件第 15874 行；SEQUENCE。
// Encode_CodebookComboParameterMultiTRP_PerBC_r17 只读不分配；Decode_CodebookComboParameterMultiTRP_PerBC_r17 可能 malloc（失败时内部已释放并清零）；Free_CodebookComboParameterMultiTRP_PerBC_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookComboParameterMultiTRP_PerBC_r17(Encoder& enc, const CodebookComboParameterMultiTRP_PerBC_r17& value)
{
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

ErrorCode Decode_CodebookComboParameterMultiTRP_PerBC_r17(Decoder& dec, CodebookComboParameterMultiTRP_PerBC_r17& value)
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
    Free_CodebookComboParameterMultiTRP_PerBC_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookComboParameterMultiTRP_PerBC_r17(CodebookComboParameterMultiTRP_PerBC_r17& value)
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
// CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17：ASN.1 mTRP-CSI-EnhancementPerBC-r17；源文件第 14934 行；SEQUENCE。
// Encode_CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17 只读不分配；Decode_CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17(Encoder& enc, const CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumNZP_CSI_RS_r17), 2, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.cSI_Report_mode_r17), 0, 2);
enc.WriteConstrainedLength(value.supportedComboAcrossCCs_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedComboAcrossCCs_r17_count; ++i) {
    Encode_CSI_MultiTRP_SupportedCombinations_r17(enc, value.supportedComboAcrossCCs_r17_items[i]);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.codebookMode_NCJT_r17), 0, 1);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17(Decoder& dec, CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 8, tmp_value)) { goto fail; }
        value.maxNumNZP_CSI_RS_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.cSI_Report_mode_r17 = (CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17_CSI_Report_mode_r17)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedComboAcrossCCs_r17_count)) { goto fail; }
if (value.supportedComboAcrossCCs_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedComboAcrossCCs_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedComboAcrossCCs_r17_count > 0u) {
    value.supportedComboAcrossCCs_r17_items = (CSI_MultiTRP_SupportedCombinations_r17*)std::malloc((std::size_t)value.supportedComboAcrossCCs_r17_count * sizeof(CSI_MultiTRP_SupportedCombinations_r17));
    if (value.supportedComboAcrossCCs_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedComboAcrossCCs_r17_items, 0, (std::size_t)value.supportedComboAcrossCCs_r17_count * sizeof(CSI_MultiTRP_SupportedCombinations_r17));
}
for (std::uint32_t i = 0; i < value.supportedComboAcrossCCs_r17_count; ++i) {
    if (Decode_CSI_MultiTRP_SupportedCombinations_r17(dec, value.supportedComboAcrossCCs_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.codebookMode_NCJT_r17 = (CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17_CodebookMode_NCJT_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17(CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17& value)
{
    if (value.supportedComboAcrossCCs_r17_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedComboAcrossCCs_r17_count; ++i) {
            Free_CSI_MultiTRP_SupportedCombinations_r17(value.supportedComboAcrossCCs_r17_items[i]);
        }
        std::free(value.supportedComboAcrossCCs_r17_items);
        value.supportedComboAcrossCCs_r17_items = nullptr;
    }
    value.supportedComboAcrossCCs_r17_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1700_Non_AlignedFrameBoundaries_r17：ASN.1 non-AlignedFrameBoundaries-r17；源文件第 14957 行；SEQUENCE。
// Encode_CA_ParametersNR_v1700_Non_AlignedFrameBoundaries_r17 只读不分配；Decode_CA_ParametersNR_v1700_Non_AlignedFrameBoundaries_r17 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1700_Non_AlignedFrameBoundaries_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1700_Non_AlignedFrameBoundaries_r17(Encoder& enc, const CA_ParametersNR_v1700_Non_AlignedFrameBoundaries_r17& value)
{
    enc.WriteBit(value.has_scs15kHz_15kHz_r17);
    enc.WriteBit(value.has_scs15kHz_30kHz_r17);
    enc.WriteBit(value.has_scs15kHz_60kHz_r17);
    enc.WriteBit(value.has_scs30kHz_30kHz_r17);
    enc.WriteBit(value.has_scs30kHz_60kHz_r17);
    enc.WriteBit(value.has_scs60kHz_60kHz_r17);
    if (value.has_scs15kHz_15kHz_r17) {
        enc.WriteConstrainedBitString(value.scs15kHz_15kHz_r17.bytes, value.scs15kHz_15kHz_r17.bitLength, 1, 496);
    }
    if (value.has_scs15kHz_30kHz_r17) {
        enc.WriteConstrainedBitString(value.scs15kHz_30kHz_r17.bytes, value.scs15kHz_30kHz_r17.bitLength, 1, 496);
    }
    if (value.has_scs15kHz_60kHz_r17) {
        enc.WriteConstrainedBitString(value.scs15kHz_60kHz_r17.bytes, value.scs15kHz_60kHz_r17.bitLength, 1, 496);
    }
    if (value.has_scs30kHz_30kHz_r17) {
        enc.WriteConstrainedBitString(value.scs30kHz_30kHz_r17.bytes, value.scs30kHz_30kHz_r17.bitLength, 1, 496);
    }
    if (value.has_scs30kHz_60kHz_r17) {
        enc.WriteConstrainedBitString(value.scs30kHz_60kHz_r17.bytes, value.scs30kHz_60kHz_r17.bitLength, 1, 496);
    }
    if (value.has_scs60kHz_60kHz_r17) {
        enc.WriteConstrainedBitString(value.scs60kHz_60kHz_r17.bytes, value.scs60kHz_60kHz_r17.bitLength, 1, 496);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1700_Non_AlignedFrameBoundaries_r17(Decoder& dec, CA_ParametersNR_v1700_Non_AlignedFrameBoundaries_r17& value)
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
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 1, 496)) { goto fail; }
        value.scs15kHz_15kHz_r17.bytes = string_bytes;
        value.scs15kHz_15kHz_r17.bitLength = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 1, 496)) { goto fail; }
        value.scs15kHz_30kHz_r17.bytes = string_bytes;
        value.scs15kHz_30kHz_r17.bitLength = string_length;
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 1, 496)) { goto fail; }
        value.scs15kHz_60kHz_r17.bytes = string_bytes;
        value.scs15kHz_60kHz_r17.bitLength = string_length;
    }
    if (present_3) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 1, 496)) { goto fail; }
        value.scs30kHz_30kHz_r17.bytes = string_bytes;
        value.scs30kHz_30kHz_r17.bitLength = string_length;
    }
    if (present_4) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 1, 496)) { goto fail; }
        value.scs30kHz_60kHz_r17.bytes = string_bytes;
        value.scs30kHz_60kHz_r17.bitLength = string_length;
    }
    if (present_5) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 1, 496)) { goto fail; }
        value.scs60kHz_60kHz_r17.bytes = string_bytes;
        value.scs60kHz_60kHz_r17.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1700_Non_AlignedFrameBoundaries_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1700_Non_AlignedFrameBoundaries_r17(CA_ParametersNR_v1700_Non_AlignedFrameBoundaries_r17& value)
{
    if (value.has_scs15kHz_15kHz_r17) {
        std::free(value.scs15kHz_15kHz_r17.bytes);
        value.scs15kHz_15kHz_r17.bytes = nullptr;
        value.scs15kHz_15kHz_r17.bitLength = 0;
    }
    if (value.has_scs15kHz_30kHz_r17) {
        std::free(value.scs15kHz_30kHz_r17.bytes);
        value.scs15kHz_30kHz_r17.bytes = nullptr;
        value.scs15kHz_30kHz_r17.bitLength = 0;
    }
    if (value.has_scs15kHz_60kHz_r17) {
        std::free(value.scs15kHz_60kHz_r17.bytes);
        value.scs15kHz_60kHz_r17.bytes = nullptr;
        value.scs15kHz_60kHz_r17.bitLength = 0;
    }
    if (value.has_scs30kHz_30kHz_r17) {
        std::free(value.scs30kHz_30kHz_r17.bytes);
        value.scs30kHz_30kHz_r17.bytes = nullptr;
        value.scs30kHz_30kHz_r17.bitLength = 0;
    }
    if (value.has_scs30kHz_60kHz_r17) {
        std::free(value.scs30kHz_60kHz_r17.bytes);
        value.scs30kHz_60kHz_r17.bytes = nullptr;
        value.scs30kHz_60kHz_r17.bitLength = 0;
    }
    if (value.has_scs60kHz_60kHz_r17) {
        std::free(value.scs60kHz_60kHz_r17.bytes);
        value.scs60kHz_60kHz_r17.bytes = nullptr;
        value.scs60kHz_60kHz_r17.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1700：ASN.1 CA-ParametersNR-v1700；源文件第 14919 行；SEQUENCE。
// Encode_CA_ParametersNR_v1700 只读不分配；Decode_CA_ParametersNR_v1700 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1700(Encoder& enc, const CA_ParametersNR_v1700& value)
{
    enc.WriteBit(value.has_codebookParametersfetype2PerBC_r17);
    enc.WriteBit(value.has_demodulationEnhancementCA_r17);
    enc.WriteBit(value.has_maxUplinkDutyCycle_interBandCA_PC2_r17);
    enc.WriteBit(value.has_maxUplinkDutyCycle_SULcombination_PC2_r17);
    enc.WriteBit(value.has_beamManagementType_CBM_r17);
    enc.WriteBit(value.has_parallelTxPUCCH_PUSCH_r17);
    enc.WriteBit(value.has_codebookComboParameterMixedTypePerBC_r17);
    enc.WriteBit(value.has_mTRP_CSI_EnhancementPerBC_r17);
    enc.WriteBit(value.has_codebookComboParameterMultiTRP_PerBC_r17);
    enc.WriteBit(value.has_maxCC_32_DL_HARQ_ProcessFR2_2_r17);
    enc.WriteBit(value.has_maxCC_32_UL_HARQ_ProcessFR2_2_r17);
    enc.WriteBit(value.has_crossCarrierSchedulingSCell_SpCellTypeB_r17);
    enc.WriteBit(value.has_crossCarrierSchedulingSCell_SpCellTypeA_r17);
    enc.WriteBit(value.has_dci_FormatsPCellPSCellUSS_Sets_r17);
    enc.WriteBit(value.has_disablingScalingFactorDeactSCell_r17);
    enc.WriteBit(value.has_disablingScalingFactorDormantSCell_r17);
    enc.WriteBit(value.has_non_AlignedFrameBoundaries_r17);
    if (value.has_codebookParametersfetype2PerBC_r17) {
        Encode_CodebookParametersfetype2PerBC_r17(enc, value.codebookParametersfetype2PerBC_r17);
    }
    if (value.has_demodulationEnhancementCA_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.demodulationEnhancementCA_r17), 0, 0);
    }
    if (value.has_maxUplinkDutyCycle_interBandCA_PC2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxUplinkDutyCycle_interBandCA_PC2_r17), 0, 5);
    }
    if (value.has_maxUplinkDutyCycle_SULcombination_PC2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxUplinkDutyCycle_SULcombination_PC2_r17), 0, 5);
    }
    if (value.has_beamManagementType_CBM_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.beamManagementType_CBM_r17), 0, 0);
    }
    if (value.has_parallelTxPUCCH_PUSCH_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.parallelTxPUCCH_PUSCH_r17), 0, 0);
    }
    if (value.has_codebookComboParameterMixedTypePerBC_r17) {
        Encode_CodebookComboParameterMixedTypePerBC_r17(enc, value.codebookComboParameterMixedTypePerBC_r17);
    }
    if (value.has_mTRP_CSI_EnhancementPerBC_r17) {
        Encode_CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17(enc, value.mTRP_CSI_EnhancementPerBC_r17);
    }
    if (value.has_codebookComboParameterMultiTRP_PerBC_r17) {
        Encode_CodebookComboParameterMultiTRP_PerBC_r17(enc, value.codebookComboParameterMultiTRP_PerBC_r17);
    }
    if (value.has_maxCC_32_DL_HARQ_ProcessFR2_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxCC_32_DL_HARQ_ProcessFR2_2_r17), 0, 7);
    }
    if (value.has_maxCC_32_UL_HARQ_ProcessFR2_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxCC_32_UL_HARQ_ProcessFR2_2_r17), 0, 7);
    }
    if (value.has_crossCarrierSchedulingSCell_SpCellTypeB_r17) {
        Encode_CrossCarrierSchedulingSCell_SpCell_r17(enc, value.crossCarrierSchedulingSCell_SpCellTypeB_r17);
    }
    if (value.has_crossCarrierSchedulingSCell_SpCellTypeA_r17) {
        Encode_CrossCarrierSchedulingSCell_SpCell_r17(enc, value.crossCarrierSchedulingSCell_SpCellTypeA_r17);
    }
    if (value.has_dci_FormatsPCellPSCellUSS_Sets_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dci_FormatsPCellPSCellUSS_Sets_r17), 0, 0);
    }
    if (value.has_disablingScalingFactorDeactSCell_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.disablingScalingFactorDeactSCell_r17), 0, 0);
    }
    if (value.has_disablingScalingFactorDormantSCell_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.disablingScalingFactorDormantSCell_r17), 0, 0);
    }
    if (value.has_non_AlignedFrameBoundaries_r17) {
        Encode_CA_ParametersNR_v1700_Non_AlignedFrameBoundaries_r17(enc, value.non_AlignedFrameBoundaries_r17);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1700(Decoder& dec, CA_ParametersNR_v1700& value)
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
        if (Decode_CodebookParametersfetype2PerBC_r17(dec, value.codebookParametersfetype2PerBC_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.demodulationEnhancementCA_r17 = (CA_ParametersNR_v1700_DemodulationEnhancementCA_r17)0;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxUplinkDutyCycle_interBandCA_PC2_r17 = (CA_ParametersNR_v1700_MaxUplinkDutyCycle_interBandCA_PC2_r17)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxUplinkDutyCycle_SULcombination_PC2_r17 = (CA_ParametersNR_v1700_MaxUplinkDutyCycle_SULcombination_PC2_r17)tmp_value;
    }
    if (present_4) {
        value.beamManagementType_CBM_r17 = (CA_ParametersNR_v1700_BeamManagementType_CBM_r17)0;
    }
    if (present_5) {
        value.parallelTxPUCCH_PUSCH_r17 = (CA_ParametersNR_v1700_ParallelTxPUCCH_PUSCH_r17)0;
    }
    if (present_6) {
        if (Decode_CodebookComboParameterMixedTypePerBC_r17(dec, value.codebookComboParameterMixedTypePerBC_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        if (Decode_CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17(dec, value.mTRP_CSI_EnhancementPerBC_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        if (Decode_CodebookComboParameterMultiTRP_PerBC_r17(dec, value.codebookComboParameterMultiTRP_PerBC_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maxCC_32_DL_HARQ_ProcessFR2_2_r17 = (CA_ParametersNR_v1700_MaxCC_32_DL_HARQ_ProcessFR2_2_r17)tmp_value;
    }
    if (present_10) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maxCC_32_UL_HARQ_ProcessFR2_2_r17 = (CA_ParametersNR_v1700_MaxCC_32_UL_HARQ_ProcessFR2_2_r17)tmp_value;
    }
    if (present_11) {
        if (Decode_CrossCarrierSchedulingSCell_SpCell_r17(dec, value.crossCarrierSchedulingSCell_SpCellTypeB_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_12) {
        if (Decode_CrossCarrierSchedulingSCell_SpCell_r17(dec, value.crossCarrierSchedulingSCell_SpCellTypeA_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_13) {
        value.dci_FormatsPCellPSCellUSS_Sets_r17 = (CA_ParametersNR_v1700_Dci_FormatsPCellPSCellUSS_Sets_r17)0;
    }
    if (present_14) {
        value.disablingScalingFactorDeactSCell_r17 = (CA_ParametersNR_v1700_DisablingScalingFactorDeactSCell_r17)0;
    }
    if (present_15) {
        value.disablingScalingFactorDormantSCell_r17 = (CA_ParametersNR_v1700_DisablingScalingFactorDormantSCell_r17)0;
    }
    if (present_16) {
        if (Decode_CA_ParametersNR_v1700_Non_AlignedFrameBoundaries_r17(dec, value.non_AlignedFrameBoundaries_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1700(CA_ParametersNR_v1700& value)
{
    if (value.has_codebookParametersfetype2PerBC_r17) {
        Free_CodebookParametersfetype2PerBC_r17(value.codebookParametersfetype2PerBC_r17);
    }
    if (value.has_demodulationEnhancementCA_r17) {
    }
    if (value.has_maxUplinkDutyCycle_interBandCA_PC2_r17) {
    }
    if (value.has_maxUplinkDutyCycle_SULcombination_PC2_r17) {
    }
    if (value.has_beamManagementType_CBM_r17) {
    }
    if (value.has_parallelTxPUCCH_PUSCH_r17) {
    }
    if (value.has_codebookComboParameterMixedTypePerBC_r17) {
        Free_CodebookComboParameterMixedTypePerBC_r17(value.codebookComboParameterMixedTypePerBC_r17);
    }
    if (value.has_mTRP_CSI_EnhancementPerBC_r17) {
        Free_CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17(value.mTRP_CSI_EnhancementPerBC_r17);
    }
    if (value.has_codebookComboParameterMultiTRP_PerBC_r17) {
        Free_CodebookComboParameterMultiTRP_PerBC_r17(value.codebookComboParameterMultiTRP_PerBC_r17);
    }
    if (value.has_maxCC_32_DL_HARQ_ProcessFR2_2_r17) {
    }
    if (value.has_maxCC_32_UL_HARQ_ProcessFR2_2_r17) {
    }
    if (value.has_crossCarrierSchedulingSCell_SpCellTypeB_r17) {
        Free_CrossCarrierSchedulingSCell_SpCell_r17(value.crossCarrierSchedulingSCell_SpCellTypeB_r17);
    }
    if (value.has_crossCarrierSchedulingSCell_SpCellTypeA_r17) {
        Free_CrossCarrierSchedulingSCell_SpCell_r17(value.crossCarrierSchedulingSCell_SpCellTypeA_r17);
    }
    if (value.has_dci_FormatsPCellPSCellUSS_Sets_r17) {
    }
    if (value.has_disablingScalingFactorDeactSCell_r17) {
    }
    if (value.has_disablingScalingFactorDormantSCell_r17) {
    }
    if (value.has_non_AlignedFrameBoundaries_r17) {
        Free_CA_ParametersNR_v1700_Non_AlignedFrameBoundaries_r17(value.non_AlignedFrameBoundaries_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNRDC_v1700：ASN.1 CA-ParametersNRDC-v1700；源文件第 15496 行；SEQUENCE。
// Encode_CA_ParametersNRDC_v1700 只读不分配；Decode_CA_ParametersNRDC_v1700 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNRDC_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNRDC_v1700(Encoder& enc, const CA_ParametersNRDC_v1700& value)
{
    enc.WriteBit(value.has_simultaneousRxTx_IAB_MultipleParents_r17);
    enc.WriteBit(value.has_condPSCellAdditionNRDC_r17);
    enc.WriteBit(value.has_scg_ActivationDeactivationNRDC_r17);
    enc.WriteBit(value.has_scg_ActivationDeactivationResumeNRDC_r17);
    enc.WriteBit(value.has_beamManagementType_CBM_r17);
    if (value.has_simultaneousRxTx_IAB_MultipleParents_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousRxTx_IAB_MultipleParents_r17), 0, 0);
    }
    if (value.has_condPSCellAdditionNRDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.condPSCellAdditionNRDC_r17), 0, 0);
    }
    if (value.has_scg_ActivationDeactivationNRDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scg_ActivationDeactivationNRDC_r17), 0, 0);
    }
    if (value.has_scg_ActivationDeactivationResumeNRDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scg_ActivationDeactivationResumeNRDC_r17), 0, 0);
    }
    if (value.has_beamManagementType_CBM_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.beamManagementType_CBM_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNRDC_v1700(Decoder& dec, CA_ParametersNRDC_v1700& value)
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
        value.simultaneousRxTx_IAB_MultipleParents_r17 = (CA_ParametersNRDC_v1700_SimultaneousRxTx_IAB_MultipleParents_r17)0;
    }
    if (present_1) {
        value.condPSCellAdditionNRDC_r17 = (CA_ParametersNRDC_v1700_CondPSCellAdditionNRDC_r17)0;
    }
    if (present_2) {
        value.scg_ActivationDeactivationNRDC_r17 = (CA_ParametersNRDC_v1700_Scg_ActivationDeactivationNRDC_r17)0;
    }
    if (present_3) {
        value.scg_ActivationDeactivationResumeNRDC_r17 = (CA_ParametersNRDC_v1700_Scg_ActivationDeactivationResumeNRDC_r17)0;
    }
    if (present_4) {
        value.beamManagementType_CBM_r17 = (CA_ParametersNRDC_v1700_BeamManagementType_CBM_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNRDC_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNRDC_v1700(CA_ParametersNRDC_v1700& value)
{
    if (value.has_simultaneousRxTx_IAB_MultipleParents_r17) {
    }
    if (value.has_condPSCellAdditionNRDC_r17) {
    }
    if (value.has_scg_ActivationDeactivationNRDC_r17) {
    }
    if (value.has_scg_ActivationDeactivationResumeNRDC_r17) {
    }
    if (value.has_beamManagementType_CBM_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MRDC_Parameters_v1700：ASN.1 MRDC-Parameters-v1700；源文件第 18590 行；SEQUENCE。
// Encode_MRDC_Parameters_v1700 只读不分配；Decode_MRDC_Parameters_v1700 可能 malloc（失败时内部已释放并清零）；Free_MRDC_Parameters_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MRDC_Parameters_v1700(Encoder& enc, const MRDC_Parameters_v1700& value)
{
    enc.WriteBit(value.has_condPSCellAdditionENDC_r17);
    enc.WriteBit(value.has_scg_ActivationDeactivationENDC_r17);
    enc.WriteBit(value.has_scg_ActivationDeactivationResumeENDC_r17);
    if (value.has_condPSCellAdditionENDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.condPSCellAdditionENDC_r17), 0, 0);
    }
    if (value.has_scg_ActivationDeactivationENDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scg_ActivationDeactivationENDC_r17), 0, 0);
    }
    if (value.has_scg_ActivationDeactivationResumeENDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scg_ActivationDeactivationResumeENDC_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MRDC_Parameters_v1700(Decoder& dec, MRDC_Parameters_v1700& value)
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
        value.condPSCellAdditionENDC_r17 = (MRDC_Parameters_v1700_CondPSCellAdditionENDC_r17)0;
    }
    if (present_1) {
        value.scg_ActivationDeactivationENDC_r17 = (MRDC_Parameters_v1700_Scg_ActivationDeactivationENDC_r17)0;
    }
    if (present_2) {
        value.scg_ActivationDeactivationResumeENDC_r17 = (MRDC_Parameters_v1700_Scg_ActivationDeactivationResumeENDC_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MRDC_Parameters_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRDC_Parameters_v1700(MRDC_Parameters_v1700& value)
{
    if (value.has_condPSCellAdditionENDC_r17) {
    }
    if (value.has_scg_ActivationDeactivationENDC_r17) {
    }
    if (value.has_scg_ActivationDeactivationResumeENDC_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_v1700：ASN.1 BandCombination-v1700；源文件第 14339 行；SEQUENCE。
// Encode_BandCombination_v1700 只读不分配；Decode_BandCombination_v1700 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_v1700(Encoder& enc, const BandCombination_v1700& value)
{
    enc.WriteBit(value.has_ca_ParametersNR_v1700);
    enc.WriteBit(value.has_ca_ParametersNRDC_v1700);
    enc.WriteBit(value.has_mrdc_Parameters_v1700);
    enc.WriteBit(value.has_bandList_v1710);
    enc.WriteBit(value.has_supportedBandCombListPerBC_SL_RelayDiscovery_r17);
    enc.WriteBit(value.has_supportedBandCombListPerBC_SL_NonRelayDiscovery_r17);
    if (value.has_ca_ParametersNR_v1700) {
        Encode_CA_ParametersNR_v1700(enc, value.ca_ParametersNR_v1700);
    }
    if (value.has_ca_ParametersNRDC_v1700) {
        Encode_CA_ParametersNRDC_v1700(enc, value.ca_ParametersNRDC_v1700);
    }
    if (value.has_mrdc_Parameters_v1700) {
        Encode_MRDC_Parameters_v1700(enc, value.mrdc_Parameters_v1700);
    }
    if (value.has_bandList_v1710) {
enc.WriteConstrainedLength(value.bandList_v1710_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.bandList_v1710_count; ++i) {
    Encode_BandParameters_v1710(enc, value.bandList_v1710_items[i]);
}
    }
    if (value.has_supportedBandCombListPerBC_SL_RelayDiscovery_r17) {
        enc.WriteSemiConstrainedBitString(value.supportedBandCombListPerBC_SL_RelayDiscovery_r17.bytes, value.supportedBandCombListPerBC_SL_RelayDiscovery_r17.bitLength, 1, 4294967295u);
    }
    if (value.has_supportedBandCombListPerBC_SL_NonRelayDiscovery_r17) {
        enc.WriteSemiConstrainedBitString(value.supportedBandCombListPerBC_SL_NonRelayDiscovery_r17.bytes, value.supportedBandCombListPerBC_SL_NonRelayDiscovery_r17.bitLength, 1, 4294967295u);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_v1700(Decoder& dec, BandCombination_v1700& value)
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
        if (Decode_CA_ParametersNR_v1700(dec, value.ca_ParametersNR_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CA_ParametersNRDC_v1700(dec, value.ca_ParametersNRDC_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_MRDC_Parameters_v1700(dec, value.mrdc_Parameters_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.bandList_v1710_count)) { goto fail; }
if (value.bandList_v1710_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.bandList_v1710_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.bandList_v1710_count > 0u) {
    value.bandList_v1710_items = (BandParameters_v1710*)std::malloc((std::size_t)value.bandList_v1710_count * sizeof(BandParameters_v1710));
    if (value.bandList_v1710_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.bandList_v1710_items, 0, (std::size_t)value.bandList_v1710_count * sizeof(BandParameters_v1710));
}
for (std::uint32_t i = 0; i < value.bandList_v1710_count; ++i) {
    if (Decode_BandParameters_v1710(dec, value.bandList_v1710_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_4) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedBitString(string_bytes, string_length, 1, 0xFFFFFFFFu)) { goto fail; }
        value.supportedBandCombListPerBC_SL_RelayDiscovery_r17.bytes = string_bytes;
        value.supportedBandCombListPerBC_SL_RelayDiscovery_r17.bitLength = string_length;
    }
    if (present_5) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedBitString(string_bytes, string_length, 1, 0xFFFFFFFFu)) { goto fail; }
        value.supportedBandCombListPerBC_SL_NonRelayDiscovery_r17.bytes = string_bytes;
        value.supportedBandCombListPerBC_SL_NonRelayDiscovery_r17.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_v1700(BandCombination_v1700& value)
{
    if (value.has_ca_ParametersNR_v1700) {
        Free_CA_ParametersNR_v1700(value.ca_ParametersNR_v1700);
    }
    if (value.has_ca_ParametersNRDC_v1700) {
        Free_CA_ParametersNRDC_v1700(value.ca_ParametersNRDC_v1700);
    }
    if (value.has_mrdc_Parameters_v1700) {
        Free_MRDC_Parameters_v1700(value.mrdc_Parameters_v1700);
    }
    if (value.has_bandList_v1710) {
        if (value.bandList_v1710_items != nullptr) {
            for (std::uint32_t i = 0; i < value.bandList_v1710_count; ++i) {
                Free_BandParameters_v1710(value.bandList_v1710_items[i]);
            }
            std::free(value.bandList_v1710_items);
            value.bandList_v1710_items = nullptr;
        }
        value.bandList_v1710_count = 0;
    }
    if (value.has_supportedBandCombListPerBC_SL_RelayDiscovery_r17) {
        std::free(value.supportedBandCombListPerBC_SL_RelayDiscovery_r17.bytes);
        value.supportedBandCombListPerBC_SL_RelayDiscovery_r17.bytes = nullptr;
        value.supportedBandCombListPerBC_SL_RelayDiscovery_r17.bitLength = 0;
    }
    if (value.has_supportedBandCombListPerBC_SL_NonRelayDiscovery_r17) {
        std::free(value.supportedBandCombListPerBC_SL_NonRelayDiscovery_r17.bytes);
        value.supportedBandCombListPerBC_SL_NonRelayDiscovery_r17.bytes = nullptr;
        value.supportedBandCombListPerBC_SL_NonRelayDiscovery_r17.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PUCCH_Group_Config_r17：ASN.1 PUCCH-Group-Config-r17；源文件第 15443 行；SEQUENCE。
// Encode_PUCCH_Group_Config_r17 只读不分配；Decode_PUCCH_Group_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_PUCCH_Group_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PUCCH_Group_Config_r17(Encoder& enc, const PUCCH_Group_Config_r17& value)
{
    enc.WriteBit(value.has_fr1_FR1_NonSharedTDD_r17);
    enc.WriteBit(value.has_fr2_FR2_NonSharedTDD_r17);
    enc.WriteBit(value.has_fr1_FR2_NonSharedTDD_r17);
    if (value.has_fr1_FR1_NonSharedTDD_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fr1_FR1_NonSharedTDD_r17), 0, 0);
    }
    if (value.has_fr2_FR2_NonSharedTDD_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fr2_FR2_NonSharedTDD_r17), 0, 0);
    }
    if (value.has_fr1_FR2_NonSharedTDD_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fr1_FR2_NonSharedTDD_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PUCCH_Group_Config_r17(Decoder& dec, PUCCH_Group_Config_r17& value)
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
        value.fr1_FR1_NonSharedTDD_r17 = (PUCCH_Group_Config_r17_Fr1_FR1_NonSharedTDD_r17)0;
    }
    if (present_1) {
        value.fr2_FR2_NonSharedTDD_r17 = (PUCCH_Group_Config_r17_Fr2_FR2_NonSharedTDD_r17)0;
    }
    if (present_2) {
        value.fr1_FR2_NonSharedTDD_r17 = (PUCCH_Group_Config_r17_Fr1_FR2_NonSharedTDD_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUCCH_Group_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUCCH_Group_Config_r17(PUCCH_Group_Config_r17& value)
{
    if (value.has_fr1_FR1_NonSharedTDD_r17) {
    }
    if (value.has_fr2_FR2_NonSharedTDD_r17) {
    }
    if (value.has_fr1_FR2_NonSharedTDD_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17：ASN.1 semiStaticPUCCH-CellSwitchSingleGroup-r17；源文件第 14973 行；SEQUENCE。
// Encode_CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17 只读不分配；Decode_CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17(Encoder& enc, const CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.pucch_Group_r17), 0, 2);
    Encode_PUCCH_Group_Config_r17(enc, value.pucch_Group_Config_r17);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17(Decoder& dec, CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.pucch_Group_r17 = (CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17_Pucch_Group_r17)tmp_value;
    }
    {
        if (Decode_PUCCH_Group_Config_r17(dec, value.pucch_Group_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17(CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17& value)
{
    Free_PUCCH_Group_Config_r17(value.pucch_Group_Config_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17：ASN.1 dynamicPUCCH-CellSwitchSameLengthSingleGroup-r17；源文件第 14981 行；SEQUENCE。
// Encode_CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17 只读不分配；Decode_CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17(Encoder& enc, const CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.pucch_Group_r17), 0, 2);
    Encode_PUCCH_Group_Config_r17(enc, value.pucch_Group_Config_r17);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17(Decoder& dec, CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.pucch_Group_r17 = (CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17_Pucch_Group_r17)tmp_value;
    }
    {
        if (Decode_PUCCH_Group_Config_r17(dec, value.pucch_Group_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17(CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17& value)
{
    Free_PUCCH_Group_Config_r17(value.pucch_Group_Config_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17：ASN.1 dynamicPUCCH-CellSwitchDiffLengthSingleGroup-r17；源文件第 14987 行；SEQUENCE。
// Encode_CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17 只读不分配；Decode_CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17(Encoder& enc, const CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.pucch_Group_r17), 0, 2);
    Encode_PUCCH_Group_Config_r17(enc, value.pucch_Group_Config_r17);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17(Decoder& dec, CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.pucch_Group_r17 = (CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17_Pucch_Group_r17)tmp_value;
    }
    {
        if (Decode_PUCCH_Group_Config_r17(dec, value.pucch_Group_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17(CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17& value)
{
    Free_PUCCH_Group_Config_r17(value.pucch_Group_Config_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1720：ASN.1 CA-ParametersNR-v1720；源文件第 14967 行；SEQUENCE。
// Encode_CA_ParametersNR_v1720 只读不分配；Decode_CA_ParametersNR_v1720 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1720 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1720(Encoder& enc, const CA_ParametersNR_v1720& value)
{
    enc.WriteBit(value.has_parallelTxSRS_PUCCH_PUSCH_intraBand_r17);
    enc.WriteBit(value.has_parallelTxPRACH_SRS_PUCCH_PUSCH_intraBand_r17);
    enc.WriteBit(value.has_semiStaticPUCCH_CellSwitchSingleGroup_r17);
    enc.WriteBit(value.has_semiStaticPUCCH_CellSwitchTwoGroups_r17);
    enc.WriteBit(value.has_dynamicPUCCH_CellSwitchSameLengthSingleGroup_r17);
    enc.WriteBit(value.has_dynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17);
    enc.WriteBit(value.has_dynamicPUCCH_CellSwitchSameLengthTwoGroups_r17);
    enc.WriteBit(value.has_dynamicPUCCH_CellSwitchDiffLengthTwoGroups_r17);
    enc.WriteBit(value.has_ack_NACK_FeedbackForMulticast_r17);
    enc.WriteBit(value.has_ptp_Retx_Multicast_r17);
    enc.WriteBit(value.has_nack_OnlyFeedbackForMulticast_r17);
    enc.WriteBit(value.has_nack_OnlyFeedbackSpecificResourceForMulticast_r17);
    enc.WriteBit(value.has_ack_NACK_FeedbackForSPS_Multicast_r17);
    enc.WriteBit(value.has_ptp_Retx_SPS_Multicast_r17);
    enc.WriteBit(value.has_higherPowerLimit_r17);
    enc.WriteBit(value.has_parallelTxMsgA_SRS_PUCCH_PUSCH_intraBand_r17);
    enc.WriteBit(value.has_pdcch_MonitoringCA_r17);
    enc.WriteBit(value.has_pdcch_BlindDetectionMCG_SCG_List_r17);
    enc.WriteBit(value.has_pdcch_BlindDetectionMixedList1_r17);
    enc.WriteBit(value.has_pdcch_BlindDetectionMixedList2_r17);
    enc.WriteBit(value.has_pdcch_BlindDetectionMixedList3_r17);
    if (value.has_parallelTxSRS_PUCCH_PUSCH_intraBand_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.parallelTxSRS_PUCCH_PUSCH_intraBand_r17), 0, 0);
    }
    if (value.has_parallelTxPRACH_SRS_PUCCH_PUSCH_intraBand_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.parallelTxPRACH_SRS_PUCCH_PUSCH_intraBand_r17), 0, 0);
    }
    if (value.has_semiStaticPUCCH_CellSwitchSingleGroup_r17) {
        Encode_CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17(enc, value.semiStaticPUCCH_CellSwitchSingleGroup_r17);
    }
    if (value.has_semiStaticPUCCH_CellSwitchTwoGroups_r17) {
enc.WriteConstrainedLength(value.semiStaticPUCCH_CellSwitchTwoGroups_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.semiStaticPUCCH_CellSwitchTwoGroups_r17_count; ++i) {
    Encode_TwoPUCCH_Grp_Configurations_r17(enc, value.semiStaticPUCCH_CellSwitchTwoGroups_r17_items[i]);
}
    }
    if (value.has_dynamicPUCCH_CellSwitchSameLengthSingleGroup_r17) {
        Encode_CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17(enc, value.dynamicPUCCH_CellSwitchSameLengthSingleGroup_r17);
    }
    if (value.has_dynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17) {
        Encode_CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17(enc, value.dynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17);
    }
    if (value.has_dynamicPUCCH_CellSwitchSameLengthTwoGroups_r17) {
enc.WriteConstrainedLength(value.dynamicPUCCH_CellSwitchSameLengthTwoGroups_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.dynamicPUCCH_CellSwitchSameLengthTwoGroups_r17_count; ++i) {
    Encode_TwoPUCCH_Grp_Configurations_r17(enc, value.dynamicPUCCH_CellSwitchSameLengthTwoGroups_r17_items[i]);
}
    }
    if (value.has_dynamicPUCCH_CellSwitchDiffLengthTwoGroups_r17) {
enc.WriteConstrainedLength(value.dynamicPUCCH_CellSwitchDiffLengthTwoGroups_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.dynamicPUCCH_CellSwitchDiffLengthTwoGroups_r17_count; ++i) {
    Encode_TwoPUCCH_Grp_Configurations_r17(enc, value.dynamicPUCCH_CellSwitchDiffLengthTwoGroups_r17_items[i]);
}
    }
    if (value.has_ack_NACK_FeedbackForMulticast_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ack_NACK_FeedbackForMulticast_r17), 0, 0);
    }
    if (value.has_ptp_Retx_Multicast_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ptp_Retx_Multicast_r17), 0, 0);
    }
    if (value.has_nack_OnlyFeedbackForMulticast_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nack_OnlyFeedbackForMulticast_r17), 0, 0);
    }
    if (value.has_nack_OnlyFeedbackSpecificResourceForMulticast_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nack_OnlyFeedbackSpecificResourceForMulticast_r17), 0, 0);
    }
    if (value.has_ack_NACK_FeedbackForSPS_Multicast_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ack_NACK_FeedbackForSPS_Multicast_r17), 0, 0);
    }
    if (value.has_ptp_Retx_SPS_Multicast_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ptp_Retx_SPS_Multicast_r17), 0, 0);
    }
    if (value.has_higherPowerLimit_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.higherPowerLimit_r17), 0, 0);
    }
    if (value.has_parallelTxMsgA_SRS_PUCCH_PUSCH_intraBand_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.parallelTxMsgA_SRS_PUCCH_PUSCH_intraBand_r17), 0, 0);
    }
    if (value.has_pdcch_MonitoringCA_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_MonitoringCA_r17), 4, 16);
    }
    if (value.has_pdcch_BlindDetectionMCG_SCG_List_r17) {
enc.WriteConstrainedLength(value.pdcch_BlindDetectionMCG_SCG_List_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pdcch_BlindDetectionMCG_SCG_List_r17_count; ++i) {
    Encode_PDCCH_BlindDetectionMCG_SCG_r17(enc, value.pdcch_BlindDetectionMCG_SCG_List_r17_items[i]);
}
    }
    if (value.has_pdcch_BlindDetectionMixedList1_r17) {
enc.WriteConstrainedLength(value.pdcch_BlindDetectionMixedList1_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pdcch_BlindDetectionMixedList1_r17_count; ++i) {
    Encode_PDCCH_BlindDetectionMixed_r17(enc, value.pdcch_BlindDetectionMixedList1_r17_items[i]);
}
    }
    if (value.has_pdcch_BlindDetectionMixedList2_r17) {
enc.WriteConstrainedLength(value.pdcch_BlindDetectionMixedList2_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pdcch_BlindDetectionMixedList2_r17_count; ++i) {
    Encode_PDCCH_BlindDetectionMixed_r17(enc, value.pdcch_BlindDetectionMixedList2_r17_items[i]);
}
    }
    if (value.has_pdcch_BlindDetectionMixedList3_r17) {
enc.WriteConstrainedLength(value.pdcch_BlindDetectionMixedList3_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pdcch_BlindDetectionMixedList3_r17_count; ++i) {
    Encode_PDCCH_BlindDetectionMixed1_r17(enc, value.pdcch_BlindDetectionMixedList3_r17_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1720(Decoder& dec, CA_ParametersNR_v1720& value)
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
        value.parallelTxSRS_PUCCH_PUSCH_intraBand_r17 = (CA_ParametersNR_v1720_ParallelTxSRS_PUCCH_PUSCH_intraBand_r17)0;
    }
    if (present_1) {
        value.parallelTxPRACH_SRS_PUCCH_PUSCH_intraBand_r17 = (CA_ParametersNR_v1720_ParallelTxPRACH_SRS_PUCCH_PUSCH_intraBand_r17)0;
    }
    if (present_2) {
        if (Decode_CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17(dec, value.semiStaticPUCCH_CellSwitchSingleGroup_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.semiStaticPUCCH_CellSwitchTwoGroups_r17_count)) { goto fail; }
if (value.semiStaticPUCCH_CellSwitchTwoGroups_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.semiStaticPUCCH_CellSwitchTwoGroups_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.semiStaticPUCCH_CellSwitchTwoGroups_r17_count > 0u) {
    value.semiStaticPUCCH_CellSwitchTwoGroups_r17_items = (TwoPUCCH_Grp_Configurations_r17*)std::malloc((std::size_t)value.semiStaticPUCCH_CellSwitchTwoGroups_r17_count * sizeof(TwoPUCCH_Grp_Configurations_r17));
    if (value.semiStaticPUCCH_CellSwitchTwoGroups_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.semiStaticPUCCH_CellSwitchTwoGroups_r17_items, 0, (std::size_t)value.semiStaticPUCCH_CellSwitchTwoGroups_r17_count * sizeof(TwoPUCCH_Grp_Configurations_r17));
}
for (std::uint32_t i = 0; i < value.semiStaticPUCCH_CellSwitchTwoGroups_r17_count; ++i) {
    if (Decode_TwoPUCCH_Grp_Configurations_r17(dec, value.semiStaticPUCCH_CellSwitchTwoGroups_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_4) {
        if (Decode_CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17(dec, value.dynamicPUCCH_CellSwitchSameLengthSingleGroup_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17(dec, value.dynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
if (!dec.ReadConstrainedLength(0u, 0u, value.dynamicPUCCH_CellSwitchSameLengthTwoGroups_r17_count)) { goto fail; }
if (value.dynamicPUCCH_CellSwitchSameLengthTwoGroups_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.dynamicPUCCH_CellSwitchSameLengthTwoGroups_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.dynamicPUCCH_CellSwitchSameLengthTwoGroups_r17_count > 0u) {
    value.dynamicPUCCH_CellSwitchSameLengthTwoGroups_r17_items = (TwoPUCCH_Grp_Configurations_r17*)std::malloc((std::size_t)value.dynamicPUCCH_CellSwitchSameLengthTwoGroups_r17_count * sizeof(TwoPUCCH_Grp_Configurations_r17));
    if (value.dynamicPUCCH_CellSwitchSameLengthTwoGroups_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.dynamicPUCCH_CellSwitchSameLengthTwoGroups_r17_items, 0, (std::size_t)value.dynamicPUCCH_CellSwitchSameLengthTwoGroups_r17_count * sizeof(TwoPUCCH_Grp_Configurations_r17));
}
for (std::uint32_t i = 0; i < value.dynamicPUCCH_CellSwitchSameLengthTwoGroups_r17_count; ++i) {
    if (Decode_TwoPUCCH_Grp_Configurations_r17(dec, value.dynamicPUCCH_CellSwitchSameLengthTwoGroups_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_7) {
if (!dec.ReadConstrainedLength(0u, 0u, value.dynamicPUCCH_CellSwitchDiffLengthTwoGroups_r17_count)) { goto fail; }
if (value.dynamicPUCCH_CellSwitchDiffLengthTwoGroups_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.dynamicPUCCH_CellSwitchDiffLengthTwoGroups_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.dynamicPUCCH_CellSwitchDiffLengthTwoGroups_r17_count > 0u) {
    value.dynamicPUCCH_CellSwitchDiffLengthTwoGroups_r17_items = (TwoPUCCH_Grp_Configurations_r17*)std::malloc((std::size_t)value.dynamicPUCCH_CellSwitchDiffLengthTwoGroups_r17_count * sizeof(TwoPUCCH_Grp_Configurations_r17));
    if (value.dynamicPUCCH_CellSwitchDiffLengthTwoGroups_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.dynamicPUCCH_CellSwitchDiffLengthTwoGroups_r17_items, 0, (std::size_t)value.dynamicPUCCH_CellSwitchDiffLengthTwoGroups_r17_count * sizeof(TwoPUCCH_Grp_Configurations_r17));
}
for (std::uint32_t i = 0; i < value.dynamicPUCCH_CellSwitchDiffLengthTwoGroups_r17_count; ++i) {
    if (Decode_TwoPUCCH_Grp_Configurations_r17(dec, value.dynamicPUCCH_CellSwitchDiffLengthTwoGroups_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_8) {
        value.ack_NACK_FeedbackForMulticast_r17 = (CA_ParametersNR_v1720_Ack_NACK_FeedbackForMulticast_r17)0;
    }
    if (present_9) {
        value.ptp_Retx_Multicast_r17 = (CA_ParametersNR_v1720_Ptp_Retx_Multicast_r17)0;
    }
    if (present_10) {
        value.nack_OnlyFeedbackForMulticast_r17 = (CA_ParametersNR_v1720_Nack_OnlyFeedbackForMulticast_r17)0;
    }
    if (present_11) {
        value.nack_OnlyFeedbackSpecificResourceForMulticast_r17 = (CA_ParametersNR_v1720_Nack_OnlyFeedbackSpecificResourceForMulticast_r17)0;
    }
    if (present_12) {
        value.ack_NACK_FeedbackForSPS_Multicast_r17 = (CA_ParametersNR_v1720_Ack_NACK_FeedbackForSPS_Multicast_r17)0;
    }
    if (present_13) {
        value.ptp_Retx_SPS_Multicast_r17 = (CA_ParametersNR_v1720_Ptp_Retx_SPS_Multicast_r17)0;
    }
    if (present_14) {
        value.higherPowerLimit_r17 = (CA_ParametersNR_v1720_HigherPowerLimit_r17)0;
    }
    if (present_15) {
        value.parallelTxMsgA_SRS_PUCCH_PUSCH_intraBand_r17 = (CA_ParametersNR_v1720_ParallelTxMsgA_SRS_PUCCH_PUSCH_intraBand_r17)0;
    }
    if (present_16) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(4, 16, tmp_value)) { goto fail; }
        value.pdcch_MonitoringCA_r17 = (int64_t)tmp_value;
    }
    if (present_17) {
if (!dec.ReadConstrainedLength(0u, 0u, value.pdcch_BlindDetectionMCG_SCG_List_r17_count)) { goto fail; }
if (value.pdcch_BlindDetectionMCG_SCG_List_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pdcch_BlindDetectionMCG_SCG_List_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pdcch_BlindDetectionMCG_SCG_List_r17_count > 0u) {
    value.pdcch_BlindDetectionMCG_SCG_List_r17_items = (PDCCH_BlindDetectionMCG_SCG_r17*)std::malloc((std::size_t)value.pdcch_BlindDetectionMCG_SCG_List_r17_count * sizeof(PDCCH_BlindDetectionMCG_SCG_r17));
    if (value.pdcch_BlindDetectionMCG_SCG_List_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pdcch_BlindDetectionMCG_SCG_List_r17_items, 0, (std::size_t)value.pdcch_BlindDetectionMCG_SCG_List_r17_count * sizeof(PDCCH_BlindDetectionMCG_SCG_r17));
}
for (std::uint32_t i = 0; i < value.pdcch_BlindDetectionMCG_SCG_List_r17_count; ++i) {
    if (Decode_PDCCH_BlindDetectionMCG_SCG_r17(dec, value.pdcch_BlindDetectionMCG_SCG_List_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_18) {
if (!dec.ReadConstrainedLength(0u, 0u, value.pdcch_BlindDetectionMixedList1_r17_count)) { goto fail; }
if (value.pdcch_BlindDetectionMixedList1_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pdcch_BlindDetectionMixedList1_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pdcch_BlindDetectionMixedList1_r17_count > 0u) {
    value.pdcch_BlindDetectionMixedList1_r17_items = (PDCCH_BlindDetectionMixed_r17*)std::malloc((std::size_t)value.pdcch_BlindDetectionMixedList1_r17_count * sizeof(PDCCH_BlindDetectionMixed_r17));
    if (value.pdcch_BlindDetectionMixedList1_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pdcch_BlindDetectionMixedList1_r17_items, 0, (std::size_t)value.pdcch_BlindDetectionMixedList1_r17_count * sizeof(PDCCH_BlindDetectionMixed_r17));
}
for (std::uint32_t i = 0; i < value.pdcch_BlindDetectionMixedList1_r17_count; ++i) {
    if (Decode_PDCCH_BlindDetectionMixed_r17(dec, value.pdcch_BlindDetectionMixedList1_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_19) {
if (!dec.ReadConstrainedLength(0u, 0u, value.pdcch_BlindDetectionMixedList2_r17_count)) { goto fail; }
if (value.pdcch_BlindDetectionMixedList2_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pdcch_BlindDetectionMixedList2_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pdcch_BlindDetectionMixedList2_r17_count > 0u) {
    value.pdcch_BlindDetectionMixedList2_r17_items = (PDCCH_BlindDetectionMixed_r17*)std::malloc((std::size_t)value.pdcch_BlindDetectionMixedList2_r17_count * sizeof(PDCCH_BlindDetectionMixed_r17));
    if (value.pdcch_BlindDetectionMixedList2_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pdcch_BlindDetectionMixedList2_r17_items, 0, (std::size_t)value.pdcch_BlindDetectionMixedList2_r17_count * sizeof(PDCCH_BlindDetectionMixed_r17));
}
for (std::uint32_t i = 0; i < value.pdcch_BlindDetectionMixedList2_r17_count; ++i) {
    if (Decode_PDCCH_BlindDetectionMixed_r17(dec, value.pdcch_BlindDetectionMixedList2_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_20) {
if (!dec.ReadConstrainedLength(0u, 0u, value.pdcch_BlindDetectionMixedList3_r17_count)) { goto fail; }
if (value.pdcch_BlindDetectionMixedList3_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pdcch_BlindDetectionMixedList3_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pdcch_BlindDetectionMixedList3_r17_count > 0u) {
    value.pdcch_BlindDetectionMixedList3_r17_items = (PDCCH_BlindDetectionMixed1_r17*)std::malloc((std::size_t)value.pdcch_BlindDetectionMixedList3_r17_count * sizeof(PDCCH_BlindDetectionMixed1_r17));
    if (value.pdcch_BlindDetectionMixedList3_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pdcch_BlindDetectionMixedList3_r17_items, 0, (std::size_t)value.pdcch_BlindDetectionMixedList3_r17_count * sizeof(PDCCH_BlindDetectionMixed1_r17));
}
for (std::uint32_t i = 0; i < value.pdcch_BlindDetectionMixedList3_r17_count; ++i) {
    if (Decode_PDCCH_BlindDetectionMixed1_r17(dec, value.pdcch_BlindDetectionMixedList3_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1720(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1720(CA_ParametersNR_v1720& value)
{
    if (value.has_parallelTxSRS_PUCCH_PUSCH_intraBand_r17) {
    }
    if (value.has_parallelTxPRACH_SRS_PUCCH_PUSCH_intraBand_r17) {
    }
    if (value.has_semiStaticPUCCH_CellSwitchSingleGroup_r17) {
        Free_CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17(value.semiStaticPUCCH_CellSwitchSingleGroup_r17);
    }
    if (value.has_semiStaticPUCCH_CellSwitchTwoGroups_r17) {
        if (value.semiStaticPUCCH_CellSwitchTwoGroups_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.semiStaticPUCCH_CellSwitchTwoGroups_r17_count; ++i) {
                Free_TwoPUCCH_Grp_Configurations_r17(value.semiStaticPUCCH_CellSwitchTwoGroups_r17_items[i]);
            }
            std::free(value.semiStaticPUCCH_CellSwitchTwoGroups_r17_items);
            value.semiStaticPUCCH_CellSwitchTwoGroups_r17_items = nullptr;
        }
        value.semiStaticPUCCH_CellSwitchTwoGroups_r17_count = 0;
    }
    if (value.has_dynamicPUCCH_CellSwitchSameLengthSingleGroup_r17) {
        Free_CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17(value.dynamicPUCCH_CellSwitchSameLengthSingleGroup_r17);
    }
    if (value.has_dynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17) {
        Free_CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17(value.dynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17);
    }
    if (value.has_dynamicPUCCH_CellSwitchSameLengthTwoGroups_r17) {
        if (value.dynamicPUCCH_CellSwitchSameLengthTwoGroups_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.dynamicPUCCH_CellSwitchSameLengthTwoGroups_r17_count; ++i) {
                Free_TwoPUCCH_Grp_Configurations_r17(value.dynamicPUCCH_CellSwitchSameLengthTwoGroups_r17_items[i]);
            }
            std::free(value.dynamicPUCCH_CellSwitchSameLengthTwoGroups_r17_items);
            value.dynamicPUCCH_CellSwitchSameLengthTwoGroups_r17_items = nullptr;
        }
        value.dynamicPUCCH_CellSwitchSameLengthTwoGroups_r17_count = 0;
    }
    if (value.has_dynamicPUCCH_CellSwitchDiffLengthTwoGroups_r17) {
        if (value.dynamicPUCCH_CellSwitchDiffLengthTwoGroups_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.dynamicPUCCH_CellSwitchDiffLengthTwoGroups_r17_count; ++i) {
                Free_TwoPUCCH_Grp_Configurations_r17(value.dynamicPUCCH_CellSwitchDiffLengthTwoGroups_r17_items[i]);
            }
            std::free(value.dynamicPUCCH_CellSwitchDiffLengthTwoGroups_r17_items);
            value.dynamicPUCCH_CellSwitchDiffLengthTwoGroups_r17_items = nullptr;
        }
        value.dynamicPUCCH_CellSwitchDiffLengthTwoGroups_r17_count = 0;
    }
    if (value.has_ack_NACK_FeedbackForMulticast_r17) {
    }
    if (value.has_ptp_Retx_Multicast_r17) {
    }
    if (value.has_nack_OnlyFeedbackForMulticast_r17) {
    }
    if (value.has_nack_OnlyFeedbackSpecificResourceForMulticast_r17) {
    }
    if (value.has_ack_NACK_FeedbackForSPS_Multicast_r17) {
    }
    if (value.has_ptp_Retx_SPS_Multicast_r17) {
    }
    if (value.has_higherPowerLimit_r17) {
    }
    if (value.has_parallelTxMsgA_SRS_PUCCH_PUSCH_intraBand_r17) {
    }
    if (value.has_pdcch_MonitoringCA_r17) {
    }
    if (value.has_pdcch_BlindDetectionMCG_SCG_List_r17) {
        if (value.pdcch_BlindDetectionMCG_SCG_List_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pdcch_BlindDetectionMCG_SCG_List_r17_count; ++i) {
                Free_PDCCH_BlindDetectionMCG_SCG_r17(value.pdcch_BlindDetectionMCG_SCG_List_r17_items[i]);
            }
            std::free(value.pdcch_BlindDetectionMCG_SCG_List_r17_items);
            value.pdcch_BlindDetectionMCG_SCG_List_r17_items = nullptr;
        }
        value.pdcch_BlindDetectionMCG_SCG_List_r17_count = 0;
    }
    if (value.has_pdcch_BlindDetectionMixedList1_r17) {
        if (value.pdcch_BlindDetectionMixedList1_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pdcch_BlindDetectionMixedList1_r17_count; ++i) {
                Free_PDCCH_BlindDetectionMixed_r17(value.pdcch_BlindDetectionMixedList1_r17_items[i]);
            }
            std::free(value.pdcch_BlindDetectionMixedList1_r17_items);
            value.pdcch_BlindDetectionMixedList1_r17_items = nullptr;
        }
        value.pdcch_BlindDetectionMixedList1_r17_count = 0;
    }
    if (value.has_pdcch_BlindDetectionMixedList2_r17) {
        if (value.pdcch_BlindDetectionMixedList2_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pdcch_BlindDetectionMixedList2_r17_count; ++i) {
                Free_PDCCH_BlindDetectionMixed_r17(value.pdcch_BlindDetectionMixedList2_r17_items[i]);
            }
            std::free(value.pdcch_BlindDetectionMixedList2_r17_items);
            value.pdcch_BlindDetectionMixedList2_r17_items = nullptr;
        }
        value.pdcch_BlindDetectionMixedList2_r17_count = 0;
    }
    if (value.has_pdcch_BlindDetectionMixedList3_r17) {
        if (value.pdcch_BlindDetectionMixedList3_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pdcch_BlindDetectionMixedList3_r17_count; ++i) {
                Free_PDCCH_BlindDetectionMixed1_r17(value.pdcch_BlindDetectionMixedList3_r17_items[i]);
            }
            std::free(value.pdcch_BlindDetectionMixedList3_r17_items);
            value.pdcch_BlindDetectionMixedList3_r17_items = nullptr;
        }
        value.pdcch_BlindDetectionMixedList3_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNRDC_v1720：ASN.1 CA-ParametersNRDC-v1720；源文件第 15505 行；SEQUENCE。
// Encode_CA_ParametersNRDC_v1720 只读不分配；Decode_CA_ParametersNRDC_v1720 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNRDC_v1720 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNRDC_v1720(Encoder& enc, const CA_ParametersNRDC_v1720& value)
{
    enc.WriteBit(value.has_ca_ParametersNR_ForDC_v1700);
    enc.WriteBit(value.has_ca_ParametersNR_ForDC_v1720);
    if (value.has_ca_ParametersNR_ForDC_v1700) {
        Encode_CA_ParametersNR_v1700(enc, value.ca_ParametersNR_ForDC_v1700);
    }
    if (value.has_ca_ParametersNR_ForDC_v1720) {
        Encode_CA_ParametersNR_v1720(enc, value.ca_ParametersNR_ForDC_v1720);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNRDC_v1720(Decoder& dec, CA_ParametersNRDC_v1720& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_CA_ParametersNR_v1700(dec, value.ca_ParametersNR_ForDC_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CA_ParametersNR_v1720(dec, value.ca_ParametersNR_ForDC_v1720) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNRDC_v1720(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNRDC_v1720(CA_ParametersNRDC_v1720& value)
{
    if (value.has_ca_ParametersNR_ForDC_v1700) {
        Free_CA_ParametersNR_v1700(value.ca_ParametersNR_ForDC_v1700);
    }
    if (value.has_ca_ParametersNR_ForDC_v1720) {
        Free_CA_ParametersNR_v1720(value.ca_ParametersNR_ForDC_v1720);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_v1720：ASN.1 BandCombination-v1720；源文件第 14348 行；SEQUENCE。
// Encode_BandCombination_v1720 只读不分配；Decode_BandCombination_v1720 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_v1720 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_v1720(Encoder& enc, const BandCombination_v1720& value)
{
    enc.WriteBit(value.has_ca_ParametersNR_v1720);
    enc.WriteBit(value.has_ca_ParametersNRDC_v1720);
    if (value.has_ca_ParametersNR_v1720) {
        Encode_CA_ParametersNR_v1720(enc, value.ca_ParametersNR_v1720);
    }
    if (value.has_ca_ParametersNRDC_v1720) {
        Encode_CA_ParametersNRDC_v1720(enc, value.ca_ParametersNRDC_v1720);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_v1720(Decoder& dec, BandCombination_v1720& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_CA_ParametersNR_v1720(dec, value.ca_ParametersNR_v1720) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CA_ParametersNRDC_v1720(dec, value.ca_ParametersNRDC_v1720) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_v1720(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_v1720(BandCombination_v1720& value)
{
    if (value.has_ca_ParametersNR_v1720) {
        Free_CA_ParametersNR_v1720(value.ca_ParametersNR_v1720);
    }
    if (value.has_ca_ParametersNRDC_v1720) {
        Free_CA_ParametersNRDC_v1720(value.ca_ParametersNRDC_v1720);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1730：ASN.1 CA-ParametersNR-v1730；源文件第 15044 行；SEQUENCE。
// Encode_CA_ParametersNR_v1730 只读不分配；Decode_CA_ParametersNR_v1730 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1730 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1730(Encoder& enc, const CA_ParametersNR_v1730& value)
{
    enc.WriteBit(value.has_dmrs_BundlingPUSCH_RepTypeAPerBC_r17);
    enc.WriteBit(value.has_dmrs_BundlingPUSCH_RepTypeBPerBC_r17);
    enc.WriteBit(value.has_dmrs_BundlingPUSCH_multiSlotPerBC_r17);
    enc.WriteBit(value.has_dmrs_BundlingPUCCH_RepPerBC_r17);
    enc.WriteBit(value.has_dmrs_BundlingRestartPerBC_r17);
    enc.WriteBit(value.has_dmrs_BundlingNonBackToBackTX_PerBC_r17);
    enc.WriteBit(value.has_stayOnTargetCC_SRS_CarrierSwitch_r17);
    enc.WriteBit(value.has_fdm_CodebookForMux_UnicastMulticastHARQ_ACK_r17);
    enc.WriteBit(value.has_mode2_TDM_CodebookForMux_UnicastMulticastHARQ_ACK_r17);
    enc.WriteBit(value.has_mode1_ForType1_CodebookGeneration_r17);
    enc.WriteBit(value.has_nack_OnlyFeedbackSpecificResourceForSPS_Multicast_r17);
    enc.WriteBit(value.has_multiPUCCH_ConfigForMulticast_r17);
    enc.WriteBit(value.has_pucch_ConfigForSPS_Multicast_r17);
    enc.WriteBit(value.has_maxNumberG_RNTI_HARQ_ACK_Codebook_r17);
    enc.WriteBit(value.has_mux_HARQ_ACK_UnicastMulticast_r17);
    if (value.has_dmrs_BundlingPUSCH_RepTypeAPerBC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_BundlingPUSCH_RepTypeAPerBC_r17), 0, 0);
    }
    if (value.has_dmrs_BundlingPUSCH_RepTypeBPerBC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_BundlingPUSCH_RepTypeBPerBC_r17), 0, 0);
    }
    if (value.has_dmrs_BundlingPUSCH_multiSlotPerBC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_BundlingPUSCH_multiSlotPerBC_r17), 0, 0);
    }
    if (value.has_dmrs_BundlingPUCCH_RepPerBC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_BundlingPUCCH_RepPerBC_r17), 0, 0);
    }
    if (value.has_dmrs_BundlingRestartPerBC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_BundlingRestartPerBC_r17), 0, 0);
    }
    if (value.has_dmrs_BundlingNonBackToBackTX_PerBC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_BundlingNonBackToBackTX_PerBC_r17), 0, 0);
    }
    if (value.has_stayOnTargetCC_SRS_CarrierSwitch_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.stayOnTargetCC_SRS_CarrierSwitch_r17), 0, 0);
    }
    if (value.has_fdm_CodebookForMux_UnicastMulticastHARQ_ACK_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fdm_CodebookForMux_UnicastMulticastHARQ_ACK_r17), 0, 0);
    }
    if (value.has_mode2_TDM_CodebookForMux_UnicastMulticastHARQ_ACK_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mode2_TDM_CodebookForMux_UnicastMulticastHARQ_ACK_r17), 0, 0);
    }
    if (value.has_mode1_ForType1_CodebookGeneration_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mode1_ForType1_CodebookGeneration_r17), 0, 0);
    }
    if (value.has_nack_OnlyFeedbackSpecificResourceForSPS_Multicast_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nack_OnlyFeedbackSpecificResourceForSPS_Multicast_r17), 0, 0);
    }
    if (value.has_multiPUCCH_ConfigForMulticast_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multiPUCCH_ConfigForMulticast_r17), 0, 0);
    }
    if (value.has_pucch_ConfigForSPS_Multicast_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_ConfigForSPS_Multicast_r17), 0, 0);
    }
    if (value.has_maxNumberG_RNTI_HARQ_ACK_Codebook_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberG_RNTI_HARQ_ACK_Codebook_r17), 1, 4);
    }
    if (value.has_mux_HARQ_ACK_UnicastMulticast_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mux_HARQ_ACK_UnicastMulticast_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1730(Decoder& dec, CA_ParametersNR_v1730& value)
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
        value.dmrs_BundlingPUSCH_RepTypeAPerBC_r17 = (CA_ParametersNR_v1730_Dmrs_BundlingPUSCH_RepTypeAPerBC_r17)0;
    }
    if (present_1) {
        value.dmrs_BundlingPUSCH_RepTypeBPerBC_r17 = (CA_ParametersNR_v1730_Dmrs_BundlingPUSCH_RepTypeBPerBC_r17)0;
    }
    if (present_2) {
        value.dmrs_BundlingPUSCH_multiSlotPerBC_r17 = (CA_ParametersNR_v1730_Dmrs_BundlingPUSCH_multiSlotPerBC_r17)0;
    }
    if (present_3) {
        value.dmrs_BundlingPUCCH_RepPerBC_r17 = (CA_ParametersNR_v1730_Dmrs_BundlingPUCCH_RepPerBC_r17)0;
    }
    if (present_4) {
        value.dmrs_BundlingRestartPerBC_r17 = (CA_ParametersNR_v1730_Dmrs_BundlingRestartPerBC_r17)0;
    }
    if (present_5) {
        value.dmrs_BundlingNonBackToBackTX_PerBC_r17 = (CA_ParametersNR_v1730_Dmrs_BundlingNonBackToBackTX_PerBC_r17)0;
    }
    if (present_6) {
        value.stayOnTargetCC_SRS_CarrierSwitch_r17 = (CA_ParametersNR_v1730_StayOnTargetCC_SRS_CarrierSwitch_r17)0;
    }
    if (present_7) {
        value.fdm_CodebookForMux_UnicastMulticastHARQ_ACK_r17 = (CA_ParametersNR_v1730_Fdm_CodebookForMux_UnicastMulticastHARQ_ACK_r17)0;
    }
    if (present_8) {
        value.mode2_TDM_CodebookForMux_UnicastMulticastHARQ_ACK_r17 = (CA_ParametersNR_v1730_Mode2_TDM_CodebookForMux_UnicastMulticastHARQ_ACK_r17)0;
    }
    if (present_9) {
        value.mode1_ForType1_CodebookGeneration_r17 = (CA_ParametersNR_v1730_Mode1_ForType1_CodebookGeneration_r17)0;
    }
    if (present_10) {
        value.nack_OnlyFeedbackSpecificResourceForSPS_Multicast_r17 = (CA_ParametersNR_v1730_Nack_OnlyFeedbackSpecificResourceForSPS_Multicast_r17)0;
    }
    if (present_11) {
        value.multiPUCCH_ConfigForMulticast_r17 = (CA_ParametersNR_v1730_MultiPUCCH_ConfigForMulticast_r17)0;
    }
    if (present_12) {
        value.pucch_ConfigForSPS_Multicast_r17 = (CA_ParametersNR_v1730_Pucch_ConfigForSPS_Multicast_r17)0;
    }
    if (present_13) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.maxNumberG_RNTI_HARQ_ACK_Codebook_r17 = (int64_t)tmp_value;
    }
    if (present_14) {
        value.mux_HARQ_ACK_UnicastMulticast_r17 = (CA_ParametersNR_v1730_Mux_HARQ_ACK_UnicastMulticast_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1730(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1730(CA_ParametersNR_v1730& value)
{
    if (value.has_dmrs_BundlingPUSCH_RepTypeAPerBC_r17) {
    }
    if (value.has_dmrs_BundlingPUSCH_RepTypeBPerBC_r17) {
    }
    if (value.has_dmrs_BundlingPUSCH_multiSlotPerBC_r17) {
    }
    if (value.has_dmrs_BundlingPUCCH_RepPerBC_r17) {
    }
    if (value.has_dmrs_BundlingRestartPerBC_r17) {
    }
    if (value.has_dmrs_BundlingNonBackToBackTX_PerBC_r17) {
    }
    if (value.has_stayOnTargetCC_SRS_CarrierSwitch_r17) {
    }
    if (value.has_fdm_CodebookForMux_UnicastMulticastHARQ_ACK_r17) {
    }
    if (value.has_mode2_TDM_CodebookForMux_UnicastMulticastHARQ_ACK_r17) {
    }
    if (value.has_mode1_ForType1_CodebookGeneration_r17) {
    }
    if (value.has_nack_OnlyFeedbackSpecificResourceForSPS_Multicast_r17) {
    }
    if (value.has_multiPUCCH_ConfigForMulticast_r17) {
    }
    if (value.has_pucch_ConfigForSPS_Multicast_r17) {
    }
    if (value.has_maxNumberG_RNTI_HARQ_ACK_Codebook_r17) {
    }
    if (value.has_mux_HARQ_ACK_UnicastMulticast_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNRDC_v1730：ASN.1 CA-ParametersNRDC-v1730；源文件第 15510 行；SEQUENCE。
// Encode_CA_ParametersNRDC_v1730 只读不分配；Decode_CA_ParametersNRDC_v1730 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNRDC_v1730 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNRDC_v1730(Encoder& enc, const CA_ParametersNRDC_v1730& value)
{
    enc.WriteBit(value.has_ca_ParametersNR_ForDC_v1730);
    if (value.has_ca_ParametersNR_ForDC_v1730) {
        Encode_CA_ParametersNR_v1730(enc, value.ca_ParametersNR_ForDC_v1730);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNRDC_v1730(Decoder& dec, CA_ParametersNRDC_v1730& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_CA_ParametersNR_v1730(dec, value.ca_ParametersNR_ForDC_v1730) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNRDC_v1730(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNRDC_v1730(CA_ParametersNRDC_v1730& value)
{
    if (value.has_ca_ParametersNR_ForDC_v1730) {
        Free_CA_ParametersNR_v1730(value.ca_ParametersNR_ForDC_v1730);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_v1730：ASN.1 BandCombination-v1730；源文件第 14353 行；SEQUENCE。
// Encode_BandCombination_v1730 只读不分配；Decode_BandCombination_v1730 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_v1730 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_v1730(Encoder& enc, const BandCombination_v1730& value)
{
    enc.WriteBit(value.has_ca_ParametersNR_v1730);
    enc.WriteBit(value.has_ca_ParametersNRDC_v1730);
    enc.WriteBit(value.has_bandList_v1730);
    if (value.has_ca_ParametersNR_v1730) {
        Encode_CA_ParametersNR_v1730(enc, value.ca_ParametersNR_v1730);
    }
    if (value.has_ca_ParametersNRDC_v1730) {
        Encode_CA_ParametersNRDC_v1730(enc, value.ca_ParametersNRDC_v1730);
    }
    if (value.has_bandList_v1730) {
enc.WriteConstrainedLength(value.bandList_v1730_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.bandList_v1730_count; ++i) {
    Encode_BandParameters_v1730(enc, value.bandList_v1730_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_v1730(Decoder& dec, BandCombination_v1730& value)
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
        if (Decode_CA_ParametersNR_v1730(dec, value.ca_ParametersNR_v1730) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CA_ParametersNRDC_v1730(dec, value.ca_ParametersNRDC_v1730) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.bandList_v1730_count)) { goto fail; }
if (value.bandList_v1730_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.bandList_v1730_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.bandList_v1730_count > 0u) {
    value.bandList_v1730_items = (BandParameters_v1730*)std::malloc((std::size_t)value.bandList_v1730_count * sizeof(BandParameters_v1730));
    if (value.bandList_v1730_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.bandList_v1730_items, 0, (std::size_t)value.bandList_v1730_count * sizeof(BandParameters_v1730));
}
for (std::uint32_t i = 0; i < value.bandList_v1730_count; ++i) {
    if (Decode_BandParameters_v1730(dec, value.bandList_v1730_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_v1730(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_v1730(BandCombination_v1730& value)
{
    if (value.has_ca_ParametersNR_v1730) {
        Free_CA_ParametersNR_v1730(value.ca_ParametersNR_v1730);
    }
    if (value.has_ca_ParametersNRDC_v1730) {
        Free_CA_ParametersNRDC_v1730(value.ca_ParametersNRDC_v1730);
    }
    if (value.has_bandList_v1730) {
        if (value.bandList_v1730_items != nullptr) {
            for (std::uint32_t i = 0; i < value.bandList_v1730_count; ++i) {
                Free_BandParameters_v1730(value.bandList_v1730_items[i]);
            }
            std::free(value.bandList_v1730_items);
            value.bandList_v1730_items = nullptr;
        }
        value.bandList_v1730_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1740：ASN.1 CA-ParametersNR-v1740；源文件第 15079 行；SEQUENCE。
// Encode_CA_ParametersNR_v1740 只读不分配；Decode_CA_ParametersNR_v1740 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1740 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1740(Encoder& enc, const CA_ParametersNR_v1740& value)
{
    enc.WriteBit(value.has_nack_OnlyFeedbackForSPS_Multicast_r17);
    enc.WriteBit(value.has_singlePUCCH_ConfigForMulticast_r17);
    if (value.has_nack_OnlyFeedbackForSPS_Multicast_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nack_OnlyFeedbackForSPS_Multicast_r17), 0, 0);
    }
    if (value.has_singlePUCCH_ConfigForMulticast_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.singlePUCCH_ConfigForMulticast_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1740(Decoder& dec, CA_ParametersNR_v1740& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.nack_OnlyFeedbackForSPS_Multicast_r17 = (CA_ParametersNR_v1740_Nack_OnlyFeedbackForSPS_Multicast_r17)0;
    }
    if (present_1) {
        value.singlePUCCH_ConfigForMulticast_r17 = (CA_ParametersNR_v1740_SinglePUCCH_ConfigForMulticast_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1740(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1740(CA_ParametersNR_v1740& value)
{
    if (value.has_nack_OnlyFeedbackForSPS_Multicast_r17) {
    }
    if (value.has_singlePUCCH_ConfigForMulticast_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_v1740：ASN.1 BandCombination-v1740；源文件第 14359 行；SEQUENCE。
// Encode_BandCombination_v1740 只读不分配；Decode_BandCombination_v1740 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_v1740 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_v1740(Encoder& enc, const BandCombination_v1740& value)
{
    enc.WriteBit(value.has_ca_ParametersNR_v1740);
    if (value.has_ca_ParametersNR_v1740) {
        Encode_CA_ParametersNR_v1740(enc, value.ca_ParametersNR_v1740);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_v1740(Decoder& dec, BandCombination_v1740& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_CA_ParametersNR_v1740(dec, value.ca_ParametersNR_v1740) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_v1740(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_v1740(BandCombination_v1740& value)
{
    if (value.has_ca_ParametersNR_v1740) {
        Free_CA_ParametersNR_v1740(value.ca_ParametersNR_v1740);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1760：ASN.1 CA-ParametersNR-v1760；源文件第 15087 行；SEQUENCE。
// Encode_CA_ParametersNR_v1760 只读不分配；Decode_CA_ParametersNR_v1760 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1760 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1760(Encoder& enc, const CA_ParametersNR_v1760& value)
{
    enc.WriteBit(value.has_prioSCellPRACH_OverSP_PeriodicSRS_Support_r17);
    if (value.has_prioSCellPRACH_OverSP_PeriodicSRS_Support_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.prioSCellPRACH_OverSP_PeriodicSRS_Support_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1760(Decoder& dec, CA_ParametersNR_v1760& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.prioSCellPRACH_OverSP_PeriodicSRS_Support_r17 = (CA_ParametersNR_v1760_PrioSCellPRACH_OverSP_PeriodicSRS_Support_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1760(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1760(CA_ParametersNR_v1760& value)
{
    if (value.has_prioSCellPRACH_OverSP_PeriodicSRS_Support_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNRDC_v1760：ASN.1 CA-ParametersNRDC-v1760；源文件第 15514 行；SEQUENCE。
// Encode_CA_ParametersNRDC_v1760 只读不分配；Decode_CA_ParametersNRDC_v1760 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNRDC_v1760 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNRDC_v1760(Encoder& enc, const CA_ParametersNRDC_v1760& value)
{
    Encode_CA_ParametersNR_v1760(enc, value.ca_ParametersNR_ForDC_v1760);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNRDC_v1760(Decoder& dec, CA_ParametersNRDC_v1760& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CA_ParametersNR_v1760(dec, value.ca_ParametersNR_ForDC_v1760) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNRDC_v1760(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNRDC_v1760(CA_ParametersNRDC_v1760& value)
{
    Free_CA_ParametersNR_v1760(value.ca_ParametersNR_ForDC_v1760);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_v1760：ASN.1 BandCombination-v1760；源文件第 14363 行；SEQUENCE。
// Encode_BandCombination_v1760 只读不分配；Decode_BandCombination_v1760 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_v1760 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_v1760(Encoder& enc, const BandCombination_v1760& value)
{
    Encode_CA_ParametersNR_v1760(enc, value.ca_ParametersNR_v1760);
    Encode_CA_ParametersNRDC_v1760(enc, value.ca_ParametersNRDC_v1760);
    return enc.Error();
}

ErrorCode Decode_BandCombination_v1760(Decoder& dec, BandCombination_v1760& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CA_ParametersNR_v1760(dec, value.ca_ParametersNR_v1760) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_CA_ParametersNRDC_v1760(dec, value.ca_ParametersNRDC_v1760) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_v1760(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_v1760(BandCombination_v1760& value)
{
    Free_CA_ParametersNR_v1760(value.ca_ParametersNR_v1760);
    Free_CA_ParametersNRDC_v1760(value.ca_ParametersNRDC_v1760);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1770：ASN.1 CA-ParametersNR-v1770；源文件第 15091 行；SEQUENCE。
// Encode_CA_ParametersNR_v1770 只读不分配；Decode_CA_ParametersNR_v1770 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1770 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1770(Encoder& enc, const CA_ParametersNR_v1770& value)
{
    enc.WriteBit(value.has_parallelTxPUCCH_PUSCH_SamePriority_r17);
    if (value.has_parallelTxPUCCH_PUSCH_SamePriority_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.parallelTxPUCCH_PUSCH_SamePriority_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1770(Decoder& dec, CA_ParametersNR_v1770& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.parallelTxPUCCH_PUSCH_SamePriority_r17 = (CA_ParametersNR_v1770_ParallelTxPUCCH_PUSCH_SamePriority_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1770(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1770(CA_ParametersNR_v1770& value)
{
    if (value.has_parallelTxPUCCH_PUSCH_SamePriority_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MRDC_Parameters_v1770：ASN.1 MRDC-Parameters-v1770；源文件第 18596 行；SEQUENCE。
// Encode_MRDC_Parameters_v1770 只读不分配；Decode_MRDC_Parameters_v1770 可能 malloc（失败时内部已释放并清零）；Free_MRDC_Parameters_v1770 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MRDC_Parameters_v1770(Encoder& enc, const MRDC_Parameters_v1770& value)
{
    enc.WriteBit(value.has_higherPowerLimitMRDC_r17);
    if (value.has_higherPowerLimitMRDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.higherPowerLimitMRDC_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MRDC_Parameters_v1770(Decoder& dec, MRDC_Parameters_v1770& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.higherPowerLimitMRDC_r17 = (MRDC_Parameters_v1770_HigherPowerLimitMRDC_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MRDC_Parameters_v1770(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRDC_Parameters_v1770(MRDC_Parameters_v1770& value)
{
    if (value.has_higherPowerLimitMRDC_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_v1770：ASN.1 BandCombination-v1770；源文件第 14368 行；SEQUENCE。
// Encode_BandCombination_v1770 只读不分配；Decode_BandCombination_v1770 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_v1770 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_v1770(Encoder& enc, const BandCombination_v1770& value)
{
    enc.WriteBit(value.has_mrdc_Parameters_v1770);
    enc.WriteBit(value.has_ca_ParametersNR_v1770);
enc.WriteConstrainedLength(value.bandList_v1770_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.bandList_v1770_count; ++i) {
    Encode_BandParameters_v1770(enc, value.bandList_v1770_items[i]);
}
    if (value.has_mrdc_Parameters_v1770) {
        Encode_MRDC_Parameters_v1770(enc, value.mrdc_Parameters_v1770);
    }
    if (value.has_ca_ParametersNR_v1770) {
        Encode_CA_ParametersNR_v1770(enc, value.ca_ParametersNR_v1770);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_v1770(Decoder& dec, BandCombination_v1770& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.bandList_v1770_count)) { goto fail; }
if (value.bandList_v1770_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.bandList_v1770_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.bandList_v1770_count > 0u) {
    value.bandList_v1770_items = (BandParameters_v1770*)std::malloc((std::size_t)value.bandList_v1770_count * sizeof(BandParameters_v1770));
    if (value.bandList_v1770_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.bandList_v1770_items, 0, (std::size_t)value.bandList_v1770_count * sizeof(BandParameters_v1770));
}
for (std::uint32_t i = 0; i < value.bandList_v1770_count; ++i) {
    if (Decode_BandParameters_v1770(dec, value.bandList_v1770_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_0) {
        if (Decode_MRDC_Parameters_v1770(dec, value.mrdc_Parameters_v1770) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CA_ParametersNR_v1770(dec, value.ca_ParametersNR_v1770) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_v1770(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_v1770(BandCombination_v1770& value)
{
    if (value.bandList_v1770_items != nullptr) {
        for (std::uint32_t i = 0; i < value.bandList_v1770_count; ++i) {
            Free_BandParameters_v1770(value.bandList_v1770_items[i]);
        }
        std::free(value.bandList_v1770_items);
        value.bandList_v1770_items = nullptr;
    }
    value.bandList_v1770_count = 0;
    if (value.has_mrdc_Parameters_v1770) {
        Free_MRDC_Parameters_v1770(value.mrdc_Parameters_v1770);
    }
    if (value.has_ca_ParametersNR_v1770) {
        Free_CA_ParametersNR_v1770(value.ca_ParametersNR_v1770);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SupportedAggBandwidth_r17：ASN.1 SupportedAggBandwidth-r17；源文件第 20780 行；CHOICE。
// Encode_SupportedAggBandwidth_r17 只读不分配；Decode_SupportedAggBandwidth_r17 可能 malloc（失败时内部已释放并清零）；Free_SupportedAggBandwidth_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SupportedAggBandwidth_r17(Encoder& enc, const SupportedAggBandwidth_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SupportedAggBandwidth_r17_Tag_fr1_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.fr1_r17), 0, 31);
        break;
    case SupportedAggBandwidth_r17_Tag_fr2_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.fr2_r17), 0, 31);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SupportedAggBandwidth_r17(Decoder& dec, SupportedAggBandwidth_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SupportedAggBandwidth_r17_Tag)root_index;
    switch (value.tag) {
    case SupportedAggBandwidth_r17_Tag_fr1_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.fr1_r17 = (SupportedAggBandwidth_r17_Fr1_r17)tmp_value;
        break;
    }
    case SupportedAggBandwidth_r17_Tag_fr2_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.fr2_r17 = (SupportedAggBandwidth_r17_Fr2_r17)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SupportedAggBandwidth_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SupportedAggBandwidth_r17(SupportedAggBandwidth_r17& value)
{
    switch (value.tag) {
    case SupportedAggBandwidth_r17_Tag_fr1_r17:
        break;
    case SupportedAggBandwidth_r17_Tag_fr2_r17:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1780_SupportedAggBW_FR1_r17：ASN.1 supportedAggBW-FR1-r17；源文件第 15097 行；SEQUENCE。
// Encode_CA_ParametersNR_v1780_SupportedAggBW_FR1_r17 只读不分配；Decode_CA_ParametersNR_v1780_SupportedAggBW_FR1_r17 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1780_SupportedAggBW_FR1_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1780_SupportedAggBW_FR1_r17(Encoder& enc, const CA_ParametersNR_v1780_SupportedAggBW_FR1_r17& value)
{
    enc.WriteBit(value.has_scalingFactorSCS_r17);
    enc.WriteBit(value.has_supportedAggBW_FDD_DL_r17);
    enc.WriteBit(value.has_supportedAggBW_FDD_UL_r17);
    enc.WriteBit(value.has_supportedAggBW_TDD_DL_r17);
    enc.WriteBit(value.has_supportedAggBW_TDD_UL_r17);
    enc.WriteBit(value.has_supportedAggBW_TotalDL_r17);
    enc.WriteBit(value.has_supportedAggBW_TotalUL_r17);
    if (value.has_scalingFactorSCS_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scalingFactorSCS_r17), 0, 0);
    }
    if (value.has_supportedAggBW_FDD_DL_r17) {
        Encode_SupportedAggBandwidth_r17(enc, value.supportedAggBW_FDD_DL_r17);
    }
    if (value.has_supportedAggBW_FDD_UL_r17) {
        Encode_SupportedAggBandwidth_r17(enc, value.supportedAggBW_FDD_UL_r17);
    }
    if (value.has_supportedAggBW_TDD_DL_r17) {
        Encode_SupportedAggBandwidth_r17(enc, value.supportedAggBW_TDD_DL_r17);
    }
    if (value.has_supportedAggBW_TDD_UL_r17) {
        Encode_SupportedAggBandwidth_r17(enc, value.supportedAggBW_TDD_UL_r17);
    }
    if (value.has_supportedAggBW_TotalDL_r17) {
        Encode_SupportedAggBandwidth_r17(enc, value.supportedAggBW_TotalDL_r17);
    }
    if (value.has_supportedAggBW_TotalUL_r17) {
        Encode_SupportedAggBandwidth_r17(enc, value.supportedAggBW_TotalUL_r17);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1780_SupportedAggBW_FR1_r17(Decoder& dec, CA_ParametersNR_v1780_SupportedAggBW_FR1_r17& value)
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
        value.scalingFactorSCS_r17 = (CA_ParametersNR_v1780_SupportedAggBW_FR1_r17_ScalingFactorSCS_r17)0;
    }
    if (present_1) {
        if (Decode_SupportedAggBandwidth_r17(dec, value.supportedAggBW_FDD_DL_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SupportedAggBandwidth_r17(dec, value.supportedAggBW_FDD_UL_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SupportedAggBandwidth_r17(dec, value.supportedAggBW_TDD_DL_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SupportedAggBandwidth_r17(dec, value.supportedAggBW_TDD_UL_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_SupportedAggBandwidth_r17(dec, value.supportedAggBW_TotalDL_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_SupportedAggBandwidth_r17(dec, value.supportedAggBW_TotalUL_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1780_SupportedAggBW_FR1_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1780_SupportedAggBW_FR1_r17(CA_ParametersNR_v1780_SupportedAggBW_FR1_r17& value)
{
    if (value.has_scalingFactorSCS_r17) {
    }
    if (value.has_supportedAggBW_FDD_DL_r17) {
        Free_SupportedAggBandwidth_r17(value.supportedAggBW_FDD_DL_r17);
    }
    if (value.has_supportedAggBW_FDD_UL_r17) {
        Free_SupportedAggBandwidth_r17(value.supportedAggBW_FDD_UL_r17);
    }
    if (value.has_supportedAggBW_TDD_DL_r17) {
        Free_SupportedAggBandwidth_r17(value.supportedAggBW_TDD_DL_r17);
    }
    if (value.has_supportedAggBW_TDD_UL_r17) {
        Free_SupportedAggBandwidth_r17(value.supportedAggBW_TDD_UL_r17);
    }
    if (value.has_supportedAggBW_TotalDL_r17) {
        Free_SupportedAggBandwidth_r17(value.supportedAggBW_TotalDL_r17);
    }
    if (value.has_supportedAggBW_TotalUL_r17) {
        Free_SupportedAggBandwidth_r17(value.supportedAggBW_TotalUL_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1780：ASN.1 CA-ParametersNR-v1780；源文件第 15095 行；SEQUENCE。
// Encode_CA_ParametersNR_v1780 只读不分配；Decode_CA_ParametersNR_v1780 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1780 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1780(Encoder& enc, const CA_ParametersNR_v1780& value)
{
    enc.WriteBit(value.has_parallelTxPUCCH_PUSCH_SamePriority_r17);
    enc.WriteBit(value.has_supportedAggBW_FR1_r17);
    if (value.has_parallelTxPUCCH_PUSCH_SamePriority_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.parallelTxPUCCH_PUSCH_SamePriority_r17), 0, 0);
    }
    if (value.has_supportedAggBW_FR1_r17) {
        Encode_CA_ParametersNR_v1780_SupportedAggBW_FR1_r17(enc, value.supportedAggBW_FR1_r17);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1780(Decoder& dec, CA_ParametersNR_v1780& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.parallelTxPUCCH_PUSCH_SamePriority_r17 = (CA_ParametersNR_v1780_ParallelTxPUCCH_PUSCH_SamePriority_r17)0;
    }
    if (present_1) {
        if (Decode_CA_ParametersNR_v1780_SupportedAggBW_FR1_r17(dec, value.supportedAggBW_FR1_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1780(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1780(CA_ParametersNR_v1780& value)
{
    if (value.has_parallelTxPUCCH_PUSCH_SamePriority_r17) {
    }
    if (value.has_supportedAggBW_FR1_r17) {
        Free_CA_ParametersNR_v1780_SupportedAggBW_FR1_r17(value.supportedAggBW_FR1_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNRDC_v1780：ASN.1 CA-ParametersNRDC-v1780；源文件第 15518 行；SEQUENCE。
// Encode_CA_ParametersNRDC_v1780 只读不分配；Decode_CA_ParametersNRDC_v1780 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNRDC_v1780 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNRDC_v1780(Encoder& enc, const CA_ParametersNRDC_v1780& value)
{
    enc.WriteBit(value.has_ca_ParametersNR_ForDC_v1780);
    if (value.has_ca_ParametersNR_ForDC_v1780) {
        Encode_CA_ParametersNR_v1780(enc, value.ca_ParametersNR_ForDC_v1780);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNRDC_v1780(Decoder& dec, CA_ParametersNRDC_v1780& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_CA_ParametersNR_v1780(dec, value.ca_ParametersNR_ForDC_v1780) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNRDC_v1780(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNRDC_v1780(CA_ParametersNRDC_v1780& value)
{
    if (value.has_ca_ParametersNR_ForDC_v1780) {
        Free_CA_ParametersNR_v1780(value.ca_ParametersNR_ForDC_v1780);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_v1780：ASN.1 BandCombination-v1780；源文件第 14374 行；SEQUENCE。
// Encode_BandCombination_v1780 只读不分配；Decode_BandCombination_v1780 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_v1780 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_v1780(Encoder& enc, const BandCombination_v1780& value)
{
    enc.WriteBit(value.has_ca_ParametersNR_v1780);
    enc.WriteBit(value.has_ca_ParametersNRDC_v1780);
    enc.WriteBit(value.has_bandList_v1780);
    enc.WriteBit(value.has_mrdc_Parameters_v1780);
    if (value.has_ca_ParametersNR_v1780) {
        Encode_CA_ParametersNR_v1780(enc, value.ca_ParametersNR_v1780);
    }
    if (value.has_ca_ParametersNRDC_v1780) {
        Encode_CA_ParametersNRDC_v1780(enc, value.ca_ParametersNRDC_v1780);
    }
    if (value.has_bandList_v1780) {
enc.WriteConstrainedLength(value.bandList_v1780_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.bandList_v1780_count; ++i) {
    Encode_BandParameters_v1780(enc, value.bandList_v1780_items[i]);
}
    }
    if (value.has_mrdc_Parameters_v1780) {
        Encode_MRDC_Parameters_v1770(enc, value.mrdc_Parameters_v1780);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_v1780(Decoder& dec, BandCombination_v1780& value)
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
        if (Decode_CA_ParametersNR_v1780(dec, value.ca_ParametersNR_v1780) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CA_ParametersNRDC_v1780(dec, value.ca_ParametersNRDC_v1780) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.bandList_v1780_count)) { goto fail; }
if (value.bandList_v1780_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.bandList_v1780_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.bandList_v1780_count > 0u) {
    value.bandList_v1780_items = (BandParameters_v1780*)std::malloc((std::size_t)value.bandList_v1780_count * sizeof(BandParameters_v1780));
    if (value.bandList_v1780_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.bandList_v1780_items, 0, (std::size_t)value.bandList_v1780_count * sizeof(BandParameters_v1780));
}
for (std::uint32_t i = 0; i < value.bandList_v1780_count; ++i) {
    if (Decode_BandParameters_v1780(dec, value.bandList_v1780_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_3) {
        if (Decode_MRDC_Parameters_v1770(dec, value.mrdc_Parameters_v1780) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_v1780(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_v1780(BandCombination_v1780& value)
{
    if (value.has_ca_ParametersNR_v1780) {
        Free_CA_ParametersNR_v1780(value.ca_ParametersNR_v1780);
    }
    if (value.has_ca_ParametersNRDC_v1780) {
        Free_CA_ParametersNRDC_v1780(value.ca_ParametersNRDC_v1780);
    }
    if (value.has_bandList_v1780) {
        if (value.bandList_v1780_items != nullptr) {
            for (std::uint32_t i = 0; i < value.bandList_v1780_count; ++i) {
                Free_BandParameters_v1780(value.bandList_v1780_items[i]);
            }
            std::free(value.bandList_v1780_items);
            value.bandList_v1780_items = nullptr;
        }
        value.bandList_v1780_count = 0;
    }
    if (value.has_mrdc_Parameters_v1780) {
        Free_MRDC_Parameters_v1770(value.mrdc_Parameters_v1780);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18：ASN.1 eType2Doppler-r18；源文件第 15943 行；SEQUENCE。
// Encode_CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18 只读不分配；Decode_CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18 可能 malloc（失败时内部已释放并清零）；Free_CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18(Encoder& enc, const CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18& value)
{
enc.WriteConstrainedLength(value.supportedCSI_RS_ResourceList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedCSI_RS_ResourceList_r18_items[i]), 0, 511);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.valueY_P_SP_CSI_RS_r18), 1, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.valueY_A_CSI_RS_r18), 1, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.scalingfactor_r18), 0, 2);
    return enc.Error();
}

ErrorCode Decode_CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18(Decoder& dec, CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ResourceList_r18_count)) { goto fail; }
if (value.supportedCSI_RS_ResourceList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ResourceList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ResourceList_r18_count > 0u) {
    value.supportedCSI_RS_ResourceList_r18_items = (int64_t*)std::malloc((std::size_t)value.supportedCSI_RS_ResourceList_r18_count * sizeof(int64_t));
    if (value.supportedCSI_RS_ResourceList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ResourceList_r18_items, 0, (std::size_t)value.supportedCSI_RS_ResourceList_r18_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.supportedCSI_RS_ResourceList_r18_items[i] = (int64_t)tmp_value;
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 3, tmp_value)) { goto fail; }
        value.valueY_P_SP_CSI_RS_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 3, tmp_value)) { goto fail; }
        value.valueY_A_CSI_RS_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scalingfactor_r18 = (CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18_Scalingfactor_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18(CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18& value)
{
    if (value.supportedCSI_RS_ResourceList_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceList_r18_count; ++i) {
        }
        std::free(value.supportedCSI_RS_ResourceList_r18_items);
        value.supportedCSI_RS_ResourceList_r18_items = nullptr;
    }
    value.supportedCSI_RS_ResourceList_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookParametersetype2DopplerCSI_r18_EType2DopplerN4_r18：ASN.1 eType2DopplerN4-r18；源文件第 15951 行；SEQUENCE。
// Encode_CodebookParametersetype2DopplerCSI_r18_EType2DopplerN4_r18 只读不分配；Decode_CodebookParametersetype2DopplerCSI_r18_EType2DopplerN4_r18 可能 malloc（失败时内部已释放并清零）；Free_CodebookParametersetype2DopplerCSI_r18_EType2DopplerN4_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookParametersetype2DopplerCSI_r18_EType2DopplerN4_r18(Encoder& enc, const CodebookParametersetype2DopplerCSI_r18_EType2DopplerN4_r18& value)
{
enc.WriteConstrainedLength(value.supportedCSI_RS_ReportSettingList1_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ReportSettingList1_r18_count; ++i) {
    Encode_SupportedCSI_RS_ReportSetting_r18(enc, value.supportedCSI_RS_ReportSettingList1_r18_items[i]);
}
enc.WriteConstrainedLength(value.supportedCSI_RS_ReportSettingList2_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ReportSettingList2_r18_count; ++i) {
    Encode_SupportedCSI_RS_ReportSetting_r18(enc, value.supportedCSI_RS_ReportSettingList2_r18_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_CodebookParametersetype2DopplerCSI_r18_EType2DopplerN4_r18(Decoder& dec, CodebookParametersetype2DopplerCSI_r18_EType2DopplerN4_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ReportSettingList1_r18_count)) { goto fail; }
if (value.supportedCSI_RS_ReportSettingList1_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ReportSettingList1_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ReportSettingList1_r18_count > 0u) {
    value.supportedCSI_RS_ReportSettingList1_r18_items = (SupportedCSI_RS_ReportSetting_r18*)std::malloc((std::size_t)value.supportedCSI_RS_ReportSettingList1_r18_count * sizeof(SupportedCSI_RS_ReportSetting_r18));
    if (value.supportedCSI_RS_ReportSettingList1_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ReportSettingList1_r18_items, 0, (std::size_t)value.supportedCSI_RS_ReportSettingList1_r18_count * sizeof(SupportedCSI_RS_ReportSetting_r18));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ReportSettingList1_r18_count; ++i) {
    if (Decode_SupportedCSI_RS_ReportSetting_r18(dec, value.supportedCSI_RS_ReportSettingList1_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ReportSettingList2_r18_count)) { goto fail; }
if (value.supportedCSI_RS_ReportSettingList2_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ReportSettingList2_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ReportSettingList2_r18_count > 0u) {
    value.supportedCSI_RS_ReportSettingList2_r18_items = (SupportedCSI_RS_ReportSetting_r18*)std::malloc((std::size_t)value.supportedCSI_RS_ReportSettingList2_r18_count * sizeof(SupportedCSI_RS_ReportSetting_r18));
    if (value.supportedCSI_RS_ReportSettingList2_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ReportSettingList2_r18_items, 0, (std::size_t)value.supportedCSI_RS_ReportSettingList2_r18_count * sizeof(SupportedCSI_RS_ReportSetting_r18));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ReportSettingList2_r18_count; ++i) {
    if (Decode_SupportedCSI_RS_ReportSetting_r18(dec, value.supportedCSI_RS_ReportSettingList2_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParametersetype2DopplerCSI_r18_EType2DopplerN4_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParametersetype2DopplerCSI_r18_EType2DopplerN4_r18(CodebookParametersetype2DopplerCSI_r18_EType2DopplerN4_r18& value)
{
    if (value.supportedCSI_RS_ReportSettingList1_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ReportSettingList1_r18_count; ++i) {
            Free_SupportedCSI_RS_ReportSetting_r18(value.supportedCSI_RS_ReportSettingList1_r18_items[i]);
        }
        std::free(value.supportedCSI_RS_ReportSettingList1_r18_items);
        value.supportedCSI_RS_ReportSettingList1_r18_items = nullptr;
    }
    value.supportedCSI_RS_ReportSettingList1_r18_count = 0;
    if (value.supportedCSI_RS_ReportSettingList2_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ReportSettingList2_r18_count; ++i) {
            Free_SupportedCSI_RS_ReportSetting_r18(value.supportedCSI_RS_ReportSettingList2_r18_items[i]);
        }
        std::free(value.supportedCSI_RS_ReportSettingList2_r18_items);
        value.supportedCSI_RS_ReportSettingList2_r18_items = nullptr;
    }
    value.supportedCSI_RS_ReportSettingList2_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookParametersetype2DopplerCSI_r18：ASN.1 CodebookParametersetype2DopplerCSI-r18；源文件第 15941 行；SEQUENCE。
// Encode_CodebookParametersetype2DopplerCSI_r18 只读不分配；Decode_CodebookParametersetype2DopplerCSI_r18 可能 malloc（失败时内部已释放并清零）；Free_CodebookParametersetype2DopplerCSI_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookParametersetype2DopplerCSI_r18(Encoder& enc, const CodebookParametersetype2DopplerCSI_r18& value)
{
    enc.WriteBit(value.has_eType2DopplerN4_r18);
    enc.WriteBit(value.has_ddUnitSize_A_CSI_RS_CMR_r18);
    enc.WriteBit(value.has_maxNumberAperiodicCSI_RS_Resource_r18);
    enc.WriteBit(value.has_eType2DopplerR2_r18);
    enc.WriteBit(value.has_eType2DopplerX1_r18);
    enc.WriteBit(value.has_eType2DopplerX2_r18);
    enc.WriteBit(value.has_eType2DopplerL_N4D1_r18);
    enc.WriteBit(value.has_eType2DopplerL6_r18);
    enc.WriteBit(value.has_eType2DopplerR3R4_r18);
    Encode_CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18(enc, value.eType2Doppler_r18);
    if (value.has_eType2DopplerN4_r18) {
        Encode_CodebookParametersetype2DopplerCSI_r18_EType2DopplerN4_r18(enc, value.eType2DopplerN4_r18);
    }
    if (value.has_ddUnitSize_A_CSI_RS_CMR_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ddUnitSize_A_CSI_RS_CMR_r18), 0, 0);
    }
    if (value.has_maxNumberAperiodicCSI_RS_Resource_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberAperiodicCSI_RS_Resource_r18), 0, 2);
    }
    if (value.has_eType2DopplerR2_r18) {
enc.WriteConstrainedLength(value.eType2DopplerR2_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.eType2DopplerR2_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.eType2DopplerR2_r18_items[i]), 0, 511);
}
    }
    if (value.has_eType2DopplerX1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eType2DopplerX1_r18), 0, 0);
    }
    if (value.has_eType2DopplerX2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eType2DopplerX2_r18), 0, 0);
    }
    if (value.has_eType2DopplerL_N4D1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eType2DopplerL_N4D1_r18), 0, 0);
    }
    if (value.has_eType2DopplerL6_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eType2DopplerL6_r18), 0, 0);
    }
    if (value.has_eType2DopplerR3R4_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eType2DopplerR3R4_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookParametersetype2DopplerCSI_r18(Decoder& dec, CodebookParametersetype2DopplerCSI_r18& value)
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
    {
        if (Decode_CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18(dec, value.eType2Doppler_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_CodebookParametersetype2DopplerCSI_r18_EType2DopplerN4_r18(dec, value.eType2DopplerN4_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.ddUnitSize_A_CSI_RS_CMR_r18 = (CodebookParametersetype2DopplerCSI_r18_DdUnitSize_A_CSI_RS_CMR_r18)0;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.maxNumberAperiodicCSI_RS_Resource_r18 = (CodebookParametersetype2DopplerCSI_r18_MaxNumberAperiodicCSI_RS_Resource_r18)tmp_value;
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.eType2DopplerR2_r18_count)) { goto fail; }
if (value.eType2DopplerR2_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.eType2DopplerR2_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.eType2DopplerR2_r18_count > 0u) {
    value.eType2DopplerR2_r18_items = (int64_t*)std::malloc((std::size_t)value.eType2DopplerR2_r18_count * sizeof(int64_t));
    if (value.eType2DopplerR2_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.eType2DopplerR2_r18_items, 0, (std::size_t)value.eType2DopplerR2_r18_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.eType2DopplerR2_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.eType2DopplerR2_r18_items[i] = (int64_t)tmp_value;
}
    }
    if (present_4) {
        value.eType2DopplerX1_r18 = (CodebookParametersetype2DopplerCSI_r18_EType2DopplerX1_r18)0;
    }
    if (present_5) {
        value.eType2DopplerX2_r18 = (CodebookParametersetype2DopplerCSI_r18_EType2DopplerX2_r18)0;
    }
    if (present_6) {
        value.eType2DopplerL_N4D1_r18 = (CodebookParametersetype2DopplerCSI_r18_EType2DopplerL_N4D1_r18)0;
    }
    if (present_7) {
        value.eType2DopplerL6_r18 = (CodebookParametersetype2DopplerCSI_r18_EType2DopplerL6_r18)0;
    }
    if (present_8) {
        value.eType2DopplerR3R4_r18 = (CodebookParametersetype2DopplerCSI_r18_EType2DopplerR3R4_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParametersetype2DopplerCSI_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParametersetype2DopplerCSI_r18(CodebookParametersetype2DopplerCSI_r18& value)
{
    Free_CodebookParametersetype2DopplerCSI_r18_EType2Doppler_r18(value.eType2Doppler_r18);
    if (value.has_eType2DopplerN4_r18) {
        Free_CodebookParametersetype2DopplerCSI_r18_EType2DopplerN4_r18(value.eType2DopplerN4_r18);
    }
    if (value.has_ddUnitSize_A_CSI_RS_CMR_r18) {
    }
    if (value.has_maxNumberAperiodicCSI_RS_Resource_r18) {
    }
    if (value.has_eType2DopplerR2_r18) {
        if (value.eType2DopplerR2_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.eType2DopplerR2_r18_count; ++i) {
            }
            std::free(value.eType2DopplerR2_r18_items);
            value.eType2DopplerR2_r18_items = nullptr;
        }
        value.eType2DopplerR2_r18_count = 0;
    }
    if (value.has_eType2DopplerX1_r18) {
    }
    if (value.has_eType2DopplerX2_r18) {
    }
    if (value.has_eType2DopplerL_N4D1_r18) {
    }
    if (value.has_eType2DopplerL6_r18) {
    }
    if (value.has_eType2DopplerR3R4_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18：ASN.1 feType2Doppler-r18；源文件第 15979 行；SEQUENCE。
// Encode_CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18 只读不分配；Decode_CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18 可能 malloc（失败时内部已释放并清零）；Free_CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18(Encoder& enc, const CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18& value)
{
enc.WriteConstrainedLength(value.supportedCSI_RS_ResourceList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedCSI_RS_ResourceList_r18_items[i]), 0, 511);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.valueY_A_CSI_RS_r18), 1, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.scalingfactor_r18), 0, 2);
    return enc.Error();
}

ErrorCode Decode_CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18(Decoder& dec, CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ResourceList_r18_count)) { goto fail; }
if (value.supportedCSI_RS_ResourceList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ResourceList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ResourceList_r18_count > 0u) {
    value.supportedCSI_RS_ResourceList_r18_items = (int64_t*)std::malloc((std::size_t)value.supportedCSI_RS_ResourceList_r18_count * sizeof(int64_t));
    if (value.supportedCSI_RS_ResourceList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ResourceList_r18_items, 0, (std::size_t)value.supportedCSI_RS_ResourceList_r18_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.supportedCSI_RS_ResourceList_r18_items[i] = (int64_t)tmp_value;
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 3, tmp_value)) { goto fail; }
        value.valueY_A_CSI_RS_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scalingfactor_r18 = (CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18_Scalingfactor_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18(CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18& value)
{
    if (value.supportedCSI_RS_ResourceList_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceList_r18_count; ++i) {
        }
        std::free(value.supportedCSI_RS_ResourceList_r18_items);
        value.supportedCSI_RS_ResourceList_r18_items = nullptr;
    }
    value.supportedCSI_RS_ResourceList_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookParametersfetype2DopplerCSI_r18：ASN.1 CodebookParametersfetype2DopplerCSI-r18；源文件第 15977 行；SEQUENCE。
// Encode_CodebookParametersfetype2DopplerCSI_r18 只读不分配；Decode_CodebookParametersfetype2DopplerCSI_r18 可能 malloc（失败时内部已释放并清零）；Free_CodebookParametersfetype2DopplerCSI_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookParametersfetype2DopplerCSI_r18(Encoder& enc, const CodebookParametersfetype2DopplerCSI_r18& value)
{
    enc.WriteBit(value.has_maxNumberAperiodicCSI_RS_Resource_r18);
    enc.WriteBit(value.has_feType2DopplerM2R1_r18);
    enc.WriteBit(value.has_feType2DopplerR2_r18);
    enc.WriteBit(value.has_feType2DopplerL_N4D1_r18);
    enc.WriteBit(value.has_feType2DopplerR3R4_r18);
    Encode_CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18(enc, value.feType2Doppler_r18);
    if (value.has_maxNumberAperiodicCSI_RS_Resource_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberAperiodicCSI_RS_Resource_r18), 0, 2);
    }
    if (value.has_feType2DopplerM2R1_r18) {
enc.WriteConstrainedLength(value.feType2DopplerM2R1_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.feType2DopplerM2R1_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.feType2DopplerM2R1_r18_items[i]), 0, 511);
}
    }
    if (value.has_feType2DopplerR2_r18) {
enc.WriteConstrainedLength(value.feType2DopplerR2_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.feType2DopplerR2_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.feType2DopplerR2_r18_items[i]), 0, 511);
}
    }
    if (value.has_feType2DopplerL_N4D1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.feType2DopplerL_N4D1_r18), 0, 0);
    }
    if (value.has_feType2DopplerR3R4_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.feType2DopplerR3R4_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookParametersfetype2DopplerCSI_r18(Decoder& dec, CodebookParametersfetype2DopplerCSI_r18& value)
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
        if (Decode_CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18(dec, value.feType2Doppler_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.maxNumberAperiodicCSI_RS_Resource_r18 = (CodebookParametersfetype2DopplerCSI_r18_MaxNumberAperiodicCSI_RS_Resource_r18)tmp_value;
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.feType2DopplerM2R1_r18_count)) { goto fail; }
if (value.feType2DopplerM2R1_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.feType2DopplerM2R1_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.feType2DopplerM2R1_r18_count > 0u) {
    value.feType2DopplerM2R1_r18_items = (int64_t*)std::malloc((std::size_t)value.feType2DopplerM2R1_r18_count * sizeof(int64_t));
    if (value.feType2DopplerM2R1_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.feType2DopplerM2R1_r18_items, 0, (std::size_t)value.feType2DopplerM2R1_r18_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.feType2DopplerM2R1_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.feType2DopplerM2R1_r18_items[i] = (int64_t)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.feType2DopplerR2_r18_count)) { goto fail; }
if (value.feType2DopplerR2_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.feType2DopplerR2_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.feType2DopplerR2_r18_count > 0u) {
    value.feType2DopplerR2_r18_items = (int64_t*)std::malloc((std::size_t)value.feType2DopplerR2_r18_count * sizeof(int64_t));
    if (value.feType2DopplerR2_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.feType2DopplerR2_r18_items, 0, (std::size_t)value.feType2DopplerR2_r18_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.feType2DopplerR2_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.feType2DopplerR2_r18_items[i] = (int64_t)tmp_value;
}
    }
    if (present_3) {
        value.feType2DopplerL_N4D1_r18 = (CodebookParametersfetype2DopplerCSI_r18_FeType2DopplerL_N4D1_r18)0;
    }
    if (present_4) {
        value.feType2DopplerR3R4_r18 = (CodebookParametersfetype2DopplerCSI_r18_FeType2DopplerR3R4_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParametersfetype2DopplerCSI_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParametersfetype2DopplerCSI_r18(CodebookParametersfetype2DopplerCSI_r18& value)
{
    Free_CodebookParametersfetype2DopplerCSI_r18_FeType2Doppler_r18(value.feType2Doppler_r18);
    if (value.has_maxNumberAperiodicCSI_RS_Resource_r18) {
    }
    if (value.has_feType2DopplerM2R1_r18) {
        if (value.feType2DopplerM2R1_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.feType2DopplerM2R1_r18_count; ++i) {
            }
            std::free(value.feType2DopplerM2R1_r18_items);
            value.feType2DopplerM2R1_r18_items = nullptr;
        }
        value.feType2DopplerM2R1_r18_count = 0;
    }
    if (value.has_feType2DopplerR2_r18) {
        if (value.feType2DopplerR2_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.feType2DopplerR2_r18_count; ++i) {
            }
            std::free(value.feType2DopplerR2_r18_items);
            value.feType2DopplerR2_r18_items = nullptr;
        }
        value.feType2DopplerR2_r18_count = 0;
    }
    if (value.has_feType2DopplerL_N4D1_r18) {
    }
    if (value.has_feType2DopplerR3R4_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookParametersetype2CJT_r18_EType2CJT_r18：ASN.1 eType2CJT-r18；源文件第 16004 行；SEQUENCE。
// Encode_CodebookParametersetype2CJT_r18_EType2CJT_r18 只读不分配；Decode_CodebookParametersetype2CJT_r18_EType2CJT_r18 可能 malloc（失败时内部已释放并清零）；Free_CodebookParametersetype2CJT_r18_EType2CJT_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookParametersetype2CJT_r18_EType2CJT_r18(Encoder& enc, const CodebookParametersetype2CJT_r18_EType2CJT_r18& value)
{
enc.WriteConstrainedLength(value.supportedCSI_RS_ResourceList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedCSI_RS_ResourceList_r18_items[i]), 0, 511);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.scalingfactor_r18), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberNZP_CSI_RS_MultiTRP_CJT_r18), 2, 4);
    return enc.Error();
}

ErrorCode Decode_CodebookParametersetype2CJT_r18_EType2CJT_r18(Decoder& dec, CodebookParametersetype2CJT_r18_EType2CJT_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ResourceList_r18_count)) { goto fail; }
if (value.supportedCSI_RS_ResourceList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ResourceList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ResourceList_r18_count > 0u) {
    value.supportedCSI_RS_ResourceList_r18_items = (int64_t*)std::malloc((std::size_t)value.supportedCSI_RS_ResourceList_r18_count * sizeof(int64_t));
    if (value.supportedCSI_RS_ResourceList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ResourceList_r18_items, 0, (std::size_t)value.supportedCSI_RS_ResourceList_r18_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.supportedCSI_RS_ResourceList_r18_items[i] = (int64_t)tmp_value;
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scalingfactor_r18 = (CodebookParametersetype2CJT_r18_EType2CJT_r18_Scalingfactor_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.maxNumberNZP_CSI_RS_MultiTRP_CJT_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParametersetype2CJT_r18_EType2CJT_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParametersetype2CJT_r18_EType2CJT_r18(CodebookParametersetype2CJT_r18_EType2CJT_r18& value)
{
    if (value.supportedCSI_RS_ResourceList_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceList_r18_count; ++i) {
        }
        std::free(value.supportedCSI_RS_ResourceList_r18_items);
        value.supportedCSI_RS_ResourceList_r18_items = nullptr;
    }
    value.supportedCSI_RS_ResourceList_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookParametersetype2CJT_r18：ASN.1 CodebookParametersetype2CJT-r18；源文件第 16002 行；SEQUENCE。
// Encode_CodebookParametersetype2CJT_r18 只读不分配；Decode_CodebookParametersetype2CJT_r18 可能 malloc（失败时内部已释放并清零）；Free_CodebookParametersetype2CJT_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookParametersetype2CJT_r18(Encoder& enc, const CodebookParametersetype2CJT_r18& value)
{
    enc.WriteBit(value.has_eType2CJT_FD_IO_r18);
    enc.WriteBit(value.has_eType2CJT_FD_FO_r18);
    enc.WriteBit(value.has_eType2CJT_R2_r18);
    enc.WriteBit(value.has_eType2CJT_PV_Beta_r18);
    enc.WriteBit(value.has_eType2CJT_2NN1N2_r18);
    enc.WriteBit(value.has_eType2CJT_Rank3Rank4_r18);
    enc.WriteBit(value.has_eType2CJT_L6_r18);
    enc.WriteBit(value.has_eType2CJT_NN_r18);
    enc.WriteBit(value.has_eType2CJT_NL_SD_r18);
    enc.WriteBit(value.has_eType2CJT_Unequal_r18);
    Encode_CodebookParametersetype2CJT_r18_EType2CJT_r18(enc, value.eType2CJT_r18);
    if (value.has_eType2CJT_FD_IO_r18) {
enc.WriteConstrainedLength(value.eType2CJT_FD_IO_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.eType2CJT_FD_IO_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.eType2CJT_FD_IO_r18_items[i]), 0, 511);
}
    }
    if (value.has_eType2CJT_FD_FO_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eType2CJT_FD_FO_r18), 0, 0);
    }
    if (value.has_eType2CJT_R2_r18) {
enc.WriteConstrainedLength(value.eType2CJT_R2_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.eType2CJT_R2_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.eType2CJT_R2_r18_items[i]), 0, 511);
}
    }
    if (value.has_eType2CJT_PV_Beta_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eType2CJT_PV_Beta_r18), 0, 0);
    }
    if (value.has_eType2CJT_2NN1N2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eType2CJT_2NN1N2_r18), 0, 2);
    }
    if (value.has_eType2CJT_Rank3Rank4_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eType2CJT_Rank3Rank4_r18), 0, 0);
    }
    if (value.has_eType2CJT_L6_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eType2CJT_L6_r18), 0, 0);
    }
    if (value.has_eType2CJT_NN_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eType2CJT_NN_r18), 0, 0);
    }
    if (value.has_eType2CJT_NL_SD_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eType2CJT_NL_SD_r18), 0, 1);
    }
    if (value.has_eType2CJT_Unequal_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eType2CJT_Unequal_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookParametersetype2CJT_r18(Decoder& dec, CodebookParametersetype2CJT_r18& value)
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
    {
        if (Decode_CodebookParametersetype2CJT_r18_EType2CJT_r18(dec, value.eType2CJT_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.eType2CJT_FD_IO_r18_count)) { goto fail; }
if (value.eType2CJT_FD_IO_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.eType2CJT_FD_IO_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.eType2CJT_FD_IO_r18_count > 0u) {
    value.eType2CJT_FD_IO_r18_items = (int64_t*)std::malloc((std::size_t)value.eType2CJT_FD_IO_r18_count * sizeof(int64_t));
    if (value.eType2CJT_FD_IO_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.eType2CJT_FD_IO_r18_items, 0, (std::size_t)value.eType2CJT_FD_IO_r18_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.eType2CJT_FD_IO_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.eType2CJT_FD_IO_r18_items[i] = (int64_t)tmp_value;
}
    }
    if (present_1) {
        value.eType2CJT_FD_FO_r18 = (CodebookParametersetype2CJT_r18_EType2CJT_FD_FO_r18)0;
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.eType2CJT_R2_r18_count)) { goto fail; }
if (value.eType2CJT_R2_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.eType2CJT_R2_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.eType2CJT_R2_r18_count > 0u) {
    value.eType2CJT_R2_r18_items = (int64_t*)std::malloc((std::size_t)value.eType2CJT_R2_r18_count * sizeof(int64_t));
    if (value.eType2CJT_R2_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.eType2CJT_R2_r18_items, 0, (std::size_t)value.eType2CJT_R2_r18_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.eType2CJT_R2_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.eType2CJT_R2_r18_items[i] = (int64_t)tmp_value;
}
    }
    if (present_3) {
        value.eType2CJT_PV_Beta_r18 = (CodebookParametersetype2CJT_r18_EType2CJT_PV_Beta_r18)0;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.eType2CJT_2NN1N2_r18 = (CodebookParametersetype2CJT_r18_EType2CJT_2NN1N2_r18)tmp_value;
    }
    if (present_5) {
        value.eType2CJT_Rank3Rank4_r18 = (CodebookParametersetype2CJT_r18_EType2CJT_Rank3Rank4_r18)0;
    }
    if (present_6) {
        value.eType2CJT_L6_r18 = (CodebookParametersetype2CJT_r18_EType2CJT_L6_r18)0;
    }
    if (present_7) {
        value.eType2CJT_NN_r18 = (CodebookParametersetype2CJT_r18_EType2CJT_NN_r18)0;
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.eType2CJT_NL_SD_r18 = (CodebookParametersetype2CJT_r18_EType2CJT_NL_SD_r18)tmp_value;
    }
    if (present_9) {
        value.eType2CJT_Unequal_r18 = (CodebookParametersetype2CJT_r18_EType2CJT_Unequal_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParametersetype2CJT_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParametersetype2CJT_r18(CodebookParametersetype2CJT_r18& value)
{
    Free_CodebookParametersetype2CJT_r18_EType2CJT_r18(value.eType2CJT_r18);
    if (value.has_eType2CJT_FD_IO_r18) {
        if (value.eType2CJT_FD_IO_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.eType2CJT_FD_IO_r18_count; ++i) {
            }
            std::free(value.eType2CJT_FD_IO_r18_items);
            value.eType2CJT_FD_IO_r18_items = nullptr;
        }
        value.eType2CJT_FD_IO_r18_count = 0;
    }
    if (value.has_eType2CJT_FD_FO_r18) {
    }
    if (value.has_eType2CJT_R2_r18) {
        if (value.eType2CJT_R2_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.eType2CJT_R2_r18_count; ++i) {
            }
            std::free(value.eType2CJT_R2_r18_items);
            value.eType2CJT_R2_r18_items = nullptr;
        }
        value.eType2CJT_R2_r18_count = 0;
    }
    if (value.has_eType2CJT_PV_Beta_r18) {
    }
    if (value.has_eType2CJT_2NN1N2_r18) {
    }
    if (value.has_eType2CJT_Rank3Rank4_r18) {
    }
    if (value.has_eType2CJT_L6_r18) {
    }
    if (value.has_eType2CJT_NN_r18) {
    }
    if (value.has_eType2CJT_NL_SD_r18) {
    }
    if (value.has_eType2CJT_Unequal_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookParametersfetype2CJT_r18_FeType2CJT_r18：ASN.1 feType2CJT-r18；源文件第 16037 行；SEQUENCE。
// Encode_CodebookParametersfetype2CJT_r18_FeType2CJT_r18 只读不分配；Decode_CodebookParametersfetype2CJT_r18_FeType2CJT_r18 可能 malloc（失败时内部已释放并清零）；Free_CodebookParametersfetype2CJT_r18_FeType2CJT_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookParametersfetype2CJT_r18_FeType2CJT_r18(Encoder& enc, const CodebookParametersfetype2CJT_r18_FeType2CJT_r18& value)
{
enc.WriteConstrainedLength(value.supportedCSI_RS_ResourceList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedCSI_RS_ResourceList_r18_items[i]), 0, 511);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.scalingfactor_r18), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberNZP_CSI_RS_MultiTRP_CJT_r18), 2, 4);
    return enc.Error();
}

ErrorCode Decode_CodebookParametersfetype2CJT_r18_FeType2CJT_r18(Decoder& dec, CodebookParametersfetype2CJT_r18_FeType2CJT_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedCSI_RS_ResourceList_r18_count)) { goto fail; }
if (value.supportedCSI_RS_ResourceList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedCSI_RS_ResourceList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedCSI_RS_ResourceList_r18_count > 0u) {
    value.supportedCSI_RS_ResourceList_r18_items = (int64_t*)std::malloc((std::size_t)value.supportedCSI_RS_ResourceList_r18_count * sizeof(int64_t));
    if (value.supportedCSI_RS_ResourceList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedCSI_RS_ResourceList_r18_items, 0, (std::size_t)value.supportedCSI_RS_ResourceList_r18_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.supportedCSI_RS_ResourceList_r18_items[i] = (int64_t)tmp_value;
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scalingfactor_r18 = (CodebookParametersfetype2CJT_r18_FeType2CJT_r18_Scalingfactor_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.maxNumberNZP_CSI_RS_MultiTRP_CJT_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParametersfetype2CJT_r18_FeType2CJT_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParametersfetype2CJT_r18_FeType2CJT_r18(CodebookParametersfetype2CJT_r18_FeType2CJT_r18& value)
{
    if (value.supportedCSI_RS_ResourceList_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedCSI_RS_ResourceList_r18_count; ++i) {
        }
        std::free(value.supportedCSI_RS_ResourceList_r18_items);
        value.supportedCSI_RS_ResourceList_r18_items = nullptr;
    }
    value.supportedCSI_RS_ResourceList_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookParametersfetype2CJT_r18：ASN.1 CodebookParametersfetype2CJT-r18；源文件第 16035 行；SEQUENCE。
// Encode_CodebookParametersfetype2CJT_r18 只读不分配；Decode_CodebookParametersfetype2CJT_r18 可能 malloc（失败时内部已释放并清零）；Free_CodebookParametersfetype2CJT_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookParametersfetype2CJT_r18(Encoder& enc, const CodebookParametersfetype2CJT_r18& value)
{
    enc.WriteBit(value.has_feType2CJT_FD_IO_r18);
    enc.WriteBit(value.has_feType2CJT_FD_FO_r18);
    enc.WriteBit(value.has_feType2CJT_M2R1_r18);
    enc.WriteBit(value.has_feType2CJT_R2_r18);
    enc.WriteBit(value.has_feType2CJT_2NN1N2_r18);
    enc.WriteBit(value.has_feType2CJT_Rank3Rank4_r18);
    enc.WriteBit(value.has_feType2CJT_NN_r18);
    enc.WriteBit(value.has_feType2CJT_NL_r18);
    enc.WriteBit(value.has_feType2CJT_Unequal_r18);
    Encode_CodebookParametersfetype2CJT_r18_FeType2CJT_r18(enc, value.feType2CJT_r18);
    if (value.has_feType2CJT_FD_IO_r18) {
enc.WriteConstrainedLength(value.feType2CJT_FD_IO_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.feType2CJT_FD_IO_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.feType2CJT_FD_IO_r18_items[i]), 0, 511);
}
    }
    if (value.has_feType2CJT_FD_FO_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.feType2CJT_FD_FO_r18), 0, 0);
    }
    if (value.has_feType2CJT_M2R1_r18) {
enc.WriteConstrainedLength(value.feType2CJT_M2R1_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.feType2CJT_M2R1_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.feType2CJT_M2R1_r18_items[i]), 0, 511);
}
    }
    if (value.has_feType2CJT_R2_r18) {
enc.WriteConstrainedLength(value.feType2CJT_R2_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.feType2CJT_R2_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.feType2CJT_R2_r18_items[i]), 0, 511);
}
    }
    if (value.has_feType2CJT_2NN1N2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.feType2CJT_2NN1N2_r18), 0, 2);
    }
    if (value.has_feType2CJT_Rank3Rank4_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.feType2CJT_Rank3Rank4_r18), 0, 0);
    }
    if (value.has_feType2CJT_NN_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.feType2CJT_NN_r18), 0, 0);
    }
    if (value.has_feType2CJT_NL_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.feType2CJT_NL_r18), 0, 1);
    }
    if (value.has_feType2CJT_Unequal_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.feType2CJT_Unequal_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookParametersfetype2CJT_r18(Decoder& dec, CodebookParametersfetype2CJT_r18& value)
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
    {
        if (Decode_CodebookParametersfetype2CJT_r18_FeType2CJT_r18(dec, value.feType2CJT_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.feType2CJT_FD_IO_r18_count)) { goto fail; }
if (value.feType2CJT_FD_IO_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.feType2CJT_FD_IO_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.feType2CJT_FD_IO_r18_count > 0u) {
    value.feType2CJT_FD_IO_r18_items = (int64_t*)std::malloc((std::size_t)value.feType2CJT_FD_IO_r18_count * sizeof(int64_t));
    if (value.feType2CJT_FD_IO_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.feType2CJT_FD_IO_r18_items, 0, (std::size_t)value.feType2CJT_FD_IO_r18_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.feType2CJT_FD_IO_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.feType2CJT_FD_IO_r18_items[i] = (int64_t)tmp_value;
}
    }
    if (present_1) {
        value.feType2CJT_FD_FO_r18 = (CodebookParametersfetype2CJT_r18_FeType2CJT_FD_FO_r18)0;
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.feType2CJT_M2R1_r18_count)) { goto fail; }
if (value.feType2CJT_M2R1_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.feType2CJT_M2R1_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.feType2CJT_M2R1_r18_count > 0u) {
    value.feType2CJT_M2R1_r18_items = (int64_t*)std::malloc((std::size_t)value.feType2CJT_M2R1_r18_count * sizeof(int64_t));
    if (value.feType2CJT_M2R1_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.feType2CJT_M2R1_r18_items, 0, (std::size_t)value.feType2CJT_M2R1_r18_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.feType2CJT_M2R1_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.feType2CJT_M2R1_r18_items[i] = (int64_t)tmp_value;
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.feType2CJT_R2_r18_count)) { goto fail; }
if (value.feType2CJT_R2_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.feType2CJT_R2_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.feType2CJT_R2_r18_count > 0u) {
    value.feType2CJT_R2_r18_items = (int64_t*)std::malloc((std::size_t)value.feType2CJT_R2_r18_count * sizeof(int64_t));
    if (value.feType2CJT_R2_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.feType2CJT_R2_r18_items, 0, (std::size_t)value.feType2CJT_R2_r18_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.feType2CJT_R2_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.feType2CJT_R2_r18_items[i] = (int64_t)tmp_value;
}
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.feType2CJT_2NN1N2_r18 = (CodebookParametersfetype2CJT_r18_FeType2CJT_2NN1N2_r18)tmp_value;
    }
    if (present_5) {
        value.feType2CJT_Rank3Rank4_r18 = (CodebookParametersfetype2CJT_r18_FeType2CJT_Rank3Rank4_r18)0;
    }
    if (present_6) {
        value.feType2CJT_NN_r18 = (CodebookParametersfetype2CJT_r18_FeType2CJT_NN_r18)0;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.feType2CJT_NL_r18 = (CodebookParametersfetype2CJT_r18_FeType2CJT_NL_r18)tmp_value;
    }
    if (present_8) {
        value.feType2CJT_Unequal_r18 = (CodebookParametersfetype2CJT_r18_FeType2CJT_Unequal_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParametersfetype2CJT_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParametersfetype2CJT_r18(CodebookParametersfetype2CJT_r18& value)
{
    Free_CodebookParametersfetype2CJT_r18_FeType2CJT_r18(value.feType2CJT_r18);
    if (value.has_feType2CJT_FD_IO_r18) {
        if (value.feType2CJT_FD_IO_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.feType2CJT_FD_IO_r18_count; ++i) {
            }
            std::free(value.feType2CJT_FD_IO_r18_items);
            value.feType2CJT_FD_IO_r18_items = nullptr;
        }
        value.feType2CJT_FD_IO_r18_count = 0;
    }
    if (value.has_feType2CJT_FD_FO_r18) {
    }
    if (value.has_feType2CJT_M2R1_r18) {
        if (value.feType2CJT_M2R1_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.feType2CJT_M2R1_r18_count; ++i) {
            }
            std::free(value.feType2CJT_M2R1_r18_items);
            value.feType2CJT_M2R1_r18_items = nullptr;
        }
        value.feType2CJT_M2R1_r18_count = 0;
    }
    if (value.has_feType2CJT_R2_r18) {
        if (value.feType2CJT_R2_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.feType2CJT_R2_r18_count; ++i) {
            }
            std::free(value.feType2CJT_R2_r18_items);
            value.feType2CJT_R2_r18_items = nullptr;
        }
        value.feType2CJT_R2_r18_count = 0;
    }
    if (value.has_feType2CJT_2NN1N2_r18) {
    }
    if (value.has_feType2CJT_Rank3Rank4_r18) {
    }
    if (value.has_feType2CJT_NN_r18) {
    }
    if (value.has_feType2CJT_NL_r18) {
    }
    if (value.has_feType2CJT_Unequal_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookComboParametersCJT_r18：ASN.1 CodebookComboParametersCJT-r18；源文件第 16067 行；SEQUENCE。
// Encode_CodebookComboParametersCJT_r18 只读不分配；Decode_CodebookComboParametersCJT_r18 可能 malloc（失败时内部已释放并清零）；Free_CodebookComboParametersCJT_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookComboParametersCJT_r18(Encoder& enc, const CodebookComboParametersCJT_r18& value)
{
    enc.WriteBit(value.has_cjt_Type1SP_eType2R1_null);
    enc.WriteBit(value.has_cjt_Type1SP_eType2R2_null);
    enc.WriteBit(value.has_cjt_Type1SP_feType2R1M1_null);
    enc.WriteBit(value.has_cjt_Type1SP_feType2R1M2_null);
    enc.WriteBit(value.has_cjt_Type1SP_feType2R2M2_null);
    enc.WriteBit(value.has_cjt_Type1MP_eType2R1_null);
    enc.WriteBit(value.has_cjt_Type1MP_eType2R2_null);
    enc.WriteBit(value.has_cjt_Type1MP_feType2R1M1_null);
    enc.WriteBit(value.has_cjt_Type1MP_feType2R1M2_null);
    enc.WriteBit(value.has_cjt_Type1MP_feType2R2M2_null);
    if (value.has_cjt_Type1SP_eType2R1_null) {
enc.WriteConstrainedLength(value.cjt_Type1SP_eType2R1_null_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cjt_Type1SP_eType2R1_null_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.cjt_Type1SP_eType2R1_null_items[i]), 0, 511);
}
    }
    if (value.has_cjt_Type1SP_eType2R2_null) {
enc.WriteConstrainedLength(value.cjt_Type1SP_eType2R2_null_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cjt_Type1SP_eType2R2_null_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.cjt_Type1SP_eType2R2_null_items[i]), 0, 511);
}
    }
    if (value.has_cjt_Type1SP_feType2R1M1_null) {
enc.WriteConstrainedLength(value.cjt_Type1SP_feType2R1M1_null_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cjt_Type1SP_feType2R1M1_null_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.cjt_Type1SP_feType2R1M1_null_items[i]), 0, 511);
}
    }
    if (value.has_cjt_Type1SP_feType2R1M2_null) {
enc.WriteConstrainedLength(value.cjt_Type1SP_feType2R1M2_null_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cjt_Type1SP_feType2R1M2_null_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.cjt_Type1SP_feType2R1M2_null_items[i]), 0, 511);
}
    }
    if (value.has_cjt_Type1SP_feType2R2M2_null) {
enc.WriteConstrainedLength(value.cjt_Type1SP_feType2R2M2_null_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cjt_Type1SP_feType2R2M2_null_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.cjt_Type1SP_feType2R2M2_null_items[i]), 0, 511);
}
    }
    if (value.has_cjt_Type1MP_eType2R1_null) {
enc.WriteConstrainedLength(value.cjt_Type1MP_eType2R1_null_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cjt_Type1MP_eType2R1_null_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.cjt_Type1MP_eType2R1_null_items[i]), 0, 511);
}
    }
    if (value.has_cjt_Type1MP_eType2R2_null) {
enc.WriteConstrainedLength(value.cjt_Type1MP_eType2R2_null_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cjt_Type1MP_eType2R2_null_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.cjt_Type1MP_eType2R2_null_items[i]), 0, 511);
}
    }
    if (value.has_cjt_Type1MP_feType2R1M1_null) {
enc.WriteConstrainedLength(value.cjt_Type1MP_feType2R1M1_null_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cjt_Type1MP_feType2R1M1_null_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.cjt_Type1MP_feType2R1M1_null_items[i]), 0, 511);
}
    }
    if (value.has_cjt_Type1MP_feType2R1M2_null) {
enc.WriteConstrainedLength(value.cjt_Type1MP_feType2R1M2_null_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cjt_Type1MP_feType2R1M2_null_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.cjt_Type1MP_feType2R1M2_null_items[i]), 0, 511);
}
    }
    if (value.has_cjt_Type1MP_feType2R2M2_null) {
enc.WriteConstrainedLength(value.cjt_Type1MP_feType2R2M2_null_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cjt_Type1MP_feType2R2M2_null_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.cjt_Type1MP_feType2R2M2_null_items[i]), 0, 511);
}
    }
    return enc.Error();
}

ErrorCode Decode_CodebookComboParametersCJT_r18(Decoder& dec, CodebookComboParametersCJT_r18& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.cjt_Type1SP_eType2R1_null_count)) { goto fail; }
if (value.cjt_Type1SP_eType2R1_null_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cjt_Type1SP_eType2R1_null_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cjt_Type1SP_eType2R1_null_count > 0u) {
    value.cjt_Type1SP_eType2R1_null_items = (int64_t*)std::malloc((std::size_t)value.cjt_Type1SP_eType2R1_null_count * sizeof(int64_t));
    if (value.cjt_Type1SP_eType2R1_null_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cjt_Type1SP_eType2R1_null_items, 0, (std::size_t)value.cjt_Type1SP_eType2R1_null_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.cjt_Type1SP_eType2R1_null_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.cjt_Type1SP_eType2R1_null_items[i] = (int64_t)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.cjt_Type1SP_eType2R2_null_count)) { goto fail; }
if (value.cjt_Type1SP_eType2R2_null_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cjt_Type1SP_eType2R2_null_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cjt_Type1SP_eType2R2_null_count > 0u) {
    value.cjt_Type1SP_eType2R2_null_items = (int64_t*)std::malloc((std::size_t)value.cjt_Type1SP_eType2R2_null_count * sizeof(int64_t));
    if (value.cjt_Type1SP_eType2R2_null_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cjt_Type1SP_eType2R2_null_items, 0, (std::size_t)value.cjt_Type1SP_eType2R2_null_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.cjt_Type1SP_eType2R2_null_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.cjt_Type1SP_eType2R2_null_items[i] = (int64_t)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.cjt_Type1SP_feType2R1M1_null_count)) { goto fail; }
if (value.cjt_Type1SP_feType2R1M1_null_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cjt_Type1SP_feType2R1M1_null_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cjt_Type1SP_feType2R1M1_null_count > 0u) {
    value.cjt_Type1SP_feType2R1M1_null_items = (int64_t*)std::malloc((std::size_t)value.cjt_Type1SP_feType2R1M1_null_count * sizeof(int64_t));
    if (value.cjt_Type1SP_feType2R1M1_null_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cjt_Type1SP_feType2R1M1_null_items, 0, (std::size_t)value.cjt_Type1SP_feType2R1M1_null_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.cjt_Type1SP_feType2R1M1_null_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.cjt_Type1SP_feType2R1M1_null_items[i] = (int64_t)tmp_value;
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.cjt_Type1SP_feType2R1M2_null_count)) { goto fail; }
if (value.cjt_Type1SP_feType2R1M2_null_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cjt_Type1SP_feType2R1M2_null_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cjt_Type1SP_feType2R1M2_null_count > 0u) {
    value.cjt_Type1SP_feType2R1M2_null_items = (int64_t*)std::malloc((std::size_t)value.cjt_Type1SP_feType2R1M2_null_count * sizeof(int64_t));
    if (value.cjt_Type1SP_feType2R1M2_null_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cjt_Type1SP_feType2R1M2_null_items, 0, (std::size_t)value.cjt_Type1SP_feType2R1M2_null_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.cjt_Type1SP_feType2R1M2_null_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.cjt_Type1SP_feType2R1M2_null_items[i] = (int64_t)tmp_value;
}
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.cjt_Type1SP_feType2R2M2_null_count)) { goto fail; }
if (value.cjt_Type1SP_feType2R2M2_null_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cjt_Type1SP_feType2R2M2_null_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cjt_Type1SP_feType2R2M2_null_count > 0u) {
    value.cjt_Type1SP_feType2R2M2_null_items = (int64_t*)std::malloc((std::size_t)value.cjt_Type1SP_feType2R2M2_null_count * sizeof(int64_t));
    if (value.cjt_Type1SP_feType2R2M2_null_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cjt_Type1SP_feType2R2M2_null_items, 0, (std::size_t)value.cjt_Type1SP_feType2R2M2_null_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.cjt_Type1SP_feType2R2M2_null_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.cjt_Type1SP_feType2R2M2_null_items[i] = (int64_t)tmp_value;
}
    }
    if (present_5) {
if (!dec.ReadConstrainedLength(0u, 0u, value.cjt_Type1MP_eType2R1_null_count)) { goto fail; }
if (value.cjt_Type1MP_eType2R1_null_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cjt_Type1MP_eType2R1_null_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cjt_Type1MP_eType2R1_null_count > 0u) {
    value.cjt_Type1MP_eType2R1_null_items = (int64_t*)std::malloc((std::size_t)value.cjt_Type1MP_eType2R1_null_count * sizeof(int64_t));
    if (value.cjt_Type1MP_eType2R1_null_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cjt_Type1MP_eType2R1_null_items, 0, (std::size_t)value.cjt_Type1MP_eType2R1_null_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.cjt_Type1MP_eType2R1_null_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.cjt_Type1MP_eType2R1_null_items[i] = (int64_t)tmp_value;
}
    }
    if (present_6) {
if (!dec.ReadConstrainedLength(0u, 0u, value.cjt_Type1MP_eType2R2_null_count)) { goto fail; }
if (value.cjt_Type1MP_eType2R2_null_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cjt_Type1MP_eType2R2_null_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cjt_Type1MP_eType2R2_null_count > 0u) {
    value.cjt_Type1MP_eType2R2_null_items = (int64_t*)std::malloc((std::size_t)value.cjt_Type1MP_eType2R2_null_count * sizeof(int64_t));
    if (value.cjt_Type1MP_eType2R2_null_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cjt_Type1MP_eType2R2_null_items, 0, (std::size_t)value.cjt_Type1MP_eType2R2_null_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.cjt_Type1MP_eType2R2_null_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.cjt_Type1MP_eType2R2_null_items[i] = (int64_t)tmp_value;
}
    }
    if (present_7) {
if (!dec.ReadConstrainedLength(0u, 0u, value.cjt_Type1MP_feType2R1M1_null_count)) { goto fail; }
if (value.cjt_Type1MP_feType2R1M1_null_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cjt_Type1MP_feType2R1M1_null_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cjt_Type1MP_feType2R1M1_null_count > 0u) {
    value.cjt_Type1MP_feType2R1M1_null_items = (int64_t*)std::malloc((std::size_t)value.cjt_Type1MP_feType2R1M1_null_count * sizeof(int64_t));
    if (value.cjt_Type1MP_feType2R1M1_null_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cjt_Type1MP_feType2R1M1_null_items, 0, (std::size_t)value.cjt_Type1MP_feType2R1M1_null_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.cjt_Type1MP_feType2R1M1_null_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.cjt_Type1MP_feType2R1M1_null_items[i] = (int64_t)tmp_value;
}
    }
    if (present_8) {
if (!dec.ReadConstrainedLength(0u, 0u, value.cjt_Type1MP_feType2R1M2_null_count)) { goto fail; }
if (value.cjt_Type1MP_feType2R1M2_null_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cjt_Type1MP_feType2R1M2_null_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cjt_Type1MP_feType2R1M2_null_count > 0u) {
    value.cjt_Type1MP_feType2R1M2_null_items = (int64_t*)std::malloc((std::size_t)value.cjt_Type1MP_feType2R1M2_null_count * sizeof(int64_t));
    if (value.cjt_Type1MP_feType2R1M2_null_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cjt_Type1MP_feType2R1M2_null_items, 0, (std::size_t)value.cjt_Type1MP_feType2R1M2_null_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.cjt_Type1MP_feType2R1M2_null_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.cjt_Type1MP_feType2R1M2_null_items[i] = (int64_t)tmp_value;
}
    }
    if (present_9) {
if (!dec.ReadConstrainedLength(0u, 0u, value.cjt_Type1MP_feType2R2M2_null_count)) { goto fail; }
if (value.cjt_Type1MP_feType2R2M2_null_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cjt_Type1MP_feType2R2M2_null_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cjt_Type1MP_feType2R2M2_null_count > 0u) {
    value.cjt_Type1MP_feType2R2M2_null_items = (int64_t*)std::malloc((std::size_t)value.cjt_Type1MP_feType2R2M2_null_count * sizeof(int64_t));
    if (value.cjt_Type1MP_feType2R2M2_null_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cjt_Type1MP_feType2R2M2_null_items, 0, (std::size_t)value.cjt_Type1MP_feType2R2M2_null_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.cjt_Type1MP_feType2R2M2_null_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
    value.cjt_Type1MP_feType2R2M2_null_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookComboParametersCJT_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookComboParametersCJT_r18(CodebookComboParametersCJT_r18& value)
{
    if (value.has_cjt_Type1SP_eType2R1_null) {
        if (value.cjt_Type1SP_eType2R1_null_items != nullptr) {
            for (std::uint32_t i = 0; i < value.cjt_Type1SP_eType2R1_null_count; ++i) {
            }
            std::free(value.cjt_Type1SP_eType2R1_null_items);
            value.cjt_Type1SP_eType2R1_null_items = nullptr;
        }
        value.cjt_Type1SP_eType2R1_null_count = 0;
    }
    if (value.has_cjt_Type1SP_eType2R2_null) {
        if (value.cjt_Type1SP_eType2R2_null_items != nullptr) {
            for (std::uint32_t i = 0; i < value.cjt_Type1SP_eType2R2_null_count; ++i) {
            }
            std::free(value.cjt_Type1SP_eType2R2_null_items);
            value.cjt_Type1SP_eType2R2_null_items = nullptr;
        }
        value.cjt_Type1SP_eType2R2_null_count = 0;
    }
    if (value.has_cjt_Type1SP_feType2R1M1_null) {
        if (value.cjt_Type1SP_feType2R1M1_null_items != nullptr) {
            for (std::uint32_t i = 0; i < value.cjt_Type1SP_feType2R1M1_null_count; ++i) {
            }
            std::free(value.cjt_Type1SP_feType2R1M1_null_items);
            value.cjt_Type1SP_feType2R1M1_null_items = nullptr;
        }
        value.cjt_Type1SP_feType2R1M1_null_count = 0;
    }
    if (value.has_cjt_Type1SP_feType2R1M2_null) {
        if (value.cjt_Type1SP_feType2R1M2_null_items != nullptr) {
            for (std::uint32_t i = 0; i < value.cjt_Type1SP_feType2R1M2_null_count; ++i) {
            }
            std::free(value.cjt_Type1SP_feType2R1M2_null_items);
            value.cjt_Type1SP_feType2R1M2_null_items = nullptr;
        }
        value.cjt_Type1SP_feType2R1M2_null_count = 0;
    }
    if (value.has_cjt_Type1SP_feType2R2M2_null) {
        if (value.cjt_Type1SP_feType2R2M2_null_items != nullptr) {
            for (std::uint32_t i = 0; i < value.cjt_Type1SP_feType2R2M2_null_count; ++i) {
            }
            std::free(value.cjt_Type1SP_feType2R2M2_null_items);
            value.cjt_Type1SP_feType2R2M2_null_items = nullptr;
        }
        value.cjt_Type1SP_feType2R2M2_null_count = 0;
    }
    if (value.has_cjt_Type1MP_eType2R1_null) {
        if (value.cjt_Type1MP_eType2R1_null_items != nullptr) {
            for (std::uint32_t i = 0; i < value.cjt_Type1MP_eType2R1_null_count; ++i) {
            }
            std::free(value.cjt_Type1MP_eType2R1_null_items);
            value.cjt_Type1MP_eType2R1_null_items = nullptr;
        }
        value.cjt_Type1MP_eType2R1_null_count = 0;
    }
    if (value.has_cjt_Type1MP_eType2R2_null) {
        if (value.cjt_Type1MP_eType2R2_null_items != nullptr) {
            for (std::uint32_t i = 0; i < value.cjt_Type1MP_eType2R2_null_count; ++i) {
            }
            std::free(value.cjt_Type1MP_eType2R2_null_items);
            value.cjt_Type1MP_eType2R2_null_items = nullptr;
        }
        value.cjt_Type1MP_eType2R2_null_count = 0;
    }
    if (value.has_cjt_Type1MP_feType2R1M1_null) {
        if (value.cjt_Type1MP_feType2R1M1_null_items != nullptr) {
            for (std::uint32_t i = 0; i < value.cjt_Type1MP_feType2R1M1_null_count; ++i) {
            }
            std::free(value.cjt_Type1MP_feType2R1M1_null_items);
            value.cjt_Type1MP_feType2R1M1_null_items = nullptr;
        }
        value.cjt_Type1MP_feType2R1M1_null_count = 0;
    }
    if (value.has_cjt_Type1MP_feType2R1M2_null) {
        if (value.cjt_Type1MP_feType2R1M2_null_items != nullptr) {
            for (std::uint32_t i = 0; i < value.cjt_Type1MP_feType2R1M2_null_count; ++i) {
            }
            std::free(value.cjt_Type1MP_feType2R1M2_null_items);
            value.cjt_Type1MP_feType2R1M2_null_items = nullptr;
        }
        value.cjt_Type1MP_feType2R1M2_null_count = 0;
    }
    if (value.has_cjt_Type1MP_feType2R2M2_null) {
        if (value.cjt_Type1MP_feType2R2M2_null_items != nullptr) {
            for (std::uint32_t i = 0; i < value.cjt_Type1MP_feType2R2M2_null_count; ++i) {
            }
            std::free(value.cjt_Type1MP_feType2R2M2_null_items);
            value.cjt_Type1MP_feType2R2M2_null_items = nullptr;
        }
        value.cjt_Type1MP_feType2R2M2_null_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CodebookParametersHARQ_ACK_PUSCH_r18：ASN.1 CodebookParametersHARQ-ACK-PUSCH-r18；源文件第 16093 行；SEQUENCE。
// Encode_CodebookParametersHARQ_ACK_PUSCH_r18 只读不分配；Decode_CodebookParametersHARQ_ACK_PUSCH_r18 可能 malloc（失败时内部已释放并清零）；Free_CodebookParametersHARQ_ACK_PUSCH_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CodebookParametersHARQ_ACK_PUSCH_r18(Encoder& enc, const CodebookParametersHARQ_ACK_PUSCH_r18& value)
{
    enc.WriteBit(value.has_multiplexingType1_r18);
    enc.WriteBit(value.has_multiplexingType2_r18);
    enc.WriteBit(value.has_multiplexingType3_r18);
    enc.WriteBit(value.has_pucch_DiffResource_PDSCH_r18);
    enc.WriteBit(value.has_diffCB_Size_PDSCH_r18);
    if (value.has_multiplexingType1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multiplexingType1_r18), 0, 0);
    }
    if (value.has_multiplexingType2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multiplexingType2_r18), 0, 0);
    }
    if (value.has_multiplexingType3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multiplexingType3_r18), 0, 0);
    }
    if (value.has_pucch_DiffResource_PDSCH_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_DiffResource_PDSCH_r18), 0, 0);
    }
    if (value.has_diffCB_Size_PDSCH_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.diffCB_Size_PDSCH_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CodebookParametersHARQ_ACK_PUSCH_r18(Decoder& dec, CodebookParametersHARQ_ACK_PUSCH_r18& value)
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
        value.multiplexingType1_r18 = (CodebookParametersHARQ_ACK_PUSCH_r18_MultiplexingType1_r18)0;
    }
    if (present_1) {
        value.multiplexingType2_r18 = (CodebookParametersHARQ_ACK_PUSCH_r18_MultiplexingType2_r18)0;
    }
    if (present_2) {
        value.multiplexingType3_r18 = (CodebookParametersHARQ_ACK_PUSCH_r18_MultiplexingType3_r18)0;
    }
    if (present_3) {
        value.pucch_DiffResource_PDSCH_r18 = (CodebookParametersHARQ_ACK_PUSCH_r18_Pucch_DiffResource_PDSCH_r18)0;
    }
    if (present_4) {
        value.diffCB_Size_PDSCH_r18 = (CodebookParametersHARQ_ACK_PUSCH_r18_DiffCB_Size_PDSCH_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CodebookParametersHARQ_ACK_PUSCH_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CodebookParametersHARQ_ACK_PUSCH_r18(CodebookParametersHARQ_ACK_PUSCH_r18& value)
{
    if (value.has_multiplexingType1_r18) {
    }
    if (value.has_multiplexingType2_r18) {
    }
    if (value.has_multiplexingType3_r18) {
    }
    if (value.has_pucch_DiffResource_PDSCH_r18) {
    }
    if (value.has_diffCB_Size_PDSCH_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1800_Tdcp_ReportPerBC_r18：ASN.1 tdcp-ReportPerBC-r18；源文件第 15118 行；SEQUENCE。
// Encode_CA_ParametersNR_v1800_Tdcp_ReportPerBC_r18 只读不分配；Decode_CA_ParametersNR_v1800_Tdcp_ReportPerBC_r18 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1800_Tdcp_ReportPerBC_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1800_Tdcp_ReportPerBC_r18(Encoder& enc, const CA_ParametersNR_v1800_Tdcp_ReportPerBC_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.valueX_r18), 1, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberActiveResource_r18), 2, 32);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1800_Tdcp_ReportPerBC_r18(Decoder& dec, CA_ParametersNR_v1800_Tdcp_ReportPerBC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.valueX_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 32, tmp_value)) { goto fail; }
        value.maxNumberActiveResource_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1800_Tdcp_ReportPerBC_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1800_Tdcp_ReportPerBC_r18(CA_ParametersNR_v1800_Tdcp_ReportPerBC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18：ASN.1 tdcp-ResourcePerBC-r18；源文件第 15123 行；SEQUENCE。
// Encode_CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18 只读不分配；Decode_CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18(Encoder& enc, const CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberConfigPerCC_r18), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberConfigAcrossCC_r18), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSimultaneousPerCC_r18), 0, 9);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18(Decoder& dec, CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumberConfigPerCC_r18 = (CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberConfigPerCC_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.maxNumberConfigAcrossCC_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.maxNumberSimultaneousPerCC_r18 = (CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18_MaxNumberSimultaneousPerCC_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18(CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18：ASN.1 spatialAdaptation-CSI-FeedbackPerBC-r18/maxNumberCSI-ResourceAcrossCC-r18；源文件第 15132 行；SEQUENCE。
// Encode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18 只读不分配；Decode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18(Encoder& enc, const CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.sdType1_Resource_r18), 0, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.sdType2_Resource_r18), 0, 32);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18(Decoder& dec, CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 32, tmp_value)) { goto fail; }
        value.sdType1_Resource_r18 = (CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType1_Resource_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 32, tmp_value)) { goto fail; }
        value.sdType2_Resource_r18 = (CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18_SdType2_Resource_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18(CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberPortsAcrossCC_r18：ASN.1 spatialAdaptation-CSI-FeedbackPerBC-r18/maxNumberPortsAcrossCC-r18；源文件第 15140 行；SEQUENCE。
// Encode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberPortsAcrossCC_r18 只读不分配；Decode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberPortsAcrossCC_r18 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberPortsAcrossCC_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberPortsAcrossCC_r18(Encoder& enc, const CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberPortsAcrossCC_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.sdType1_Resource_r18), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.sdType2_Resource_r18), 1, 32);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberPortsAcrossCC_r18(Decoder& dec, CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberPortsAcrossCC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.sdType1_Resource_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.sdType2_Resource_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberPortsAcrossCC_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberPortsAcrossCC_r18(CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberPortsAcrossCC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18：ASN.1 spatialAdaptation-CSI-FeedbackPerBC-r18；源文件第 15131 行；SEQUENCE。
// Encode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18 只读不分配；Decode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18(Encoder& enc, const CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18& value)
{
    Encode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18(enc, value.maxNumberCSI_ResourceAcrossCC_r18);
    Encode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberPortsAcrossCC_r18(enc, value.maxNumberPortsAcrossCC_r18);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18(Decoder& dec, CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18(dec, value.maxNumberCSI_ResourceAcrossCC_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberPortsAcrossCC_r18(dec, value.maxNumberPortsAcrossCC_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18(CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18& value)
{
    Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18(value.maxNumberCSI_ResourceAcrossCC_r18);
    Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18_MaxNumberPortsAcrossCC_r18(value.maxNumberPortsAcrossCC_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18：ASN.1 spatialAdaptation-CSI-FeedbackPUSCH-PerBC-r18；源文件第 15147 行；SEQUENCE。
// Encode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18 只读不分配；Decode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18(Encoder& enc, const CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCSI_ResourceAcrossCC_r18), 0, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPortsAcrossCC_r18), 1, 32);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18(Decoder& dec, CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 32, tmp_value)) { goto fail; }
        value.maxNumberCSI_ResourceAcrossCC_r18 = (CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.maxNumberPortsAcrossCC_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18(CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18：ASN.1 spatialAdaptation-CSI-FeedbackAperiodicPerBC-r18/maxNumberCSI-ResourceAcrossCC-r18；源文件第 15155 行；SEQUENCE。
// Encode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18 只读不分配；Decode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18(Encoder& enc, const CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.sdType1_Resource_r18), 0, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.sdType2_Resource_r18), 0, 32);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18(Decoder& dec, CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 32, tmp_value)) { goto fail; }
        value.sdType1_Resource_r18 = (CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_e59984e6)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 32, tmp_value)) { goto fail; }
        value.sdType2_Resource_r18 = (CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_88c2abfa)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18(CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberPortsAcrossCC_r18：ASN.1 spatialAdaptation-CSI-FeedbackAperiodicPerBC-r18/maxNumberPortsAcrossCC-r18；源文件第 15163 行；SEQUENCE。
// Encode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberPortsAcrossCC_r18 只读不分配；Decode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberPortsAcrossCC_r18 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberPortsAcrossCC_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberPortsAcrossCC_r18(Encoder& enc, const CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberPortsAcrossCC_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.sdType1_Resource_r18), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.sdType2_Resource_r18), 1, 32);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberPortsAcrossCC_r18(Decoder& dec, CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberPortsAcrossCC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.sdType1_Resource_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.sdType2_Resource_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberPortsAcrossCC_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberPortsAcrossCC_r18(CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberPortsAcrossCC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18：ASN.1 spatialAdaptation-CSI-FeedbackAperiodicPerBC-r18；源文件第 15154 行；SEQUENCE。
// Encode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18 只读不分配；Decode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18(Encoder& enc, const CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18& value)
{
    Encode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18(enc, value.maxNumberCSI_ResourceAcrossCC_r18);
    Encode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberPortsAcrossCC_r18(enc, value.maxNumberPortsAcrossCC_r18);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18(Decoder& dec, CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18(dec, value.maxNumberCSI_ResourceAcrossCC_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberPortsAcrossCC_r18(dec, value.maxNumberPortsAcrossCC_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18(CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18& value)
{
    Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18(value.maxNumberCSI_ResourceAcrossCC_r18);
    Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberPortsAcrossCC_r18(value.maxNumberPortsAcrossCC_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18：ASN.1 spatialAdaptation-CSI-FeedbackPUCCH-PerBC-r18；源文件第 15169 行；SEQUENCE。
// Encode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18 只读不分配；Decode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18(Encoder& enc, const CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCSI_ResourceAcrossCC_r18), 0, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPortsAcrossCC_r18), 1, 32);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18(Decoder& dec, CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 32, tmp_value)) { goto fail; }
        value.maxNumberCSI_ResourceAcrossCC_r18 = (CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.maxNumberPortsAcrossCC_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18(CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18：ASN.1 powerAdaptation-CSI-FeedbackPerBC-r18；源文件第 15176 行；SEQUENCE。
// Encode_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18 只读不分配；Decode_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18(Encoder& enc, const CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCSI_ResourceAcrossCC_r18), 0, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPortsAcrossCC_r18), 1, 32);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18(Decoder& dec, CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 32, tmp_value)) { goto fail; }
        value.maxNumberCSI_ResourceAcrossCC_r18 = (CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.maxNumberPortsAcrossCC_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18(CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18：ASN.1 powerAdaptation-CSI-FeedbackPUSCH-PerBC-r18；源文件第 15183 行；SEQUENCE。
// Encode_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18 只读不分配；Decode_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18(Encoder& enc, const CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCSI_ResourceAcrossCC_r18), 0, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPortsAcrossCC_r18), 1, 32);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18(Decoder& dec, CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 32, tmp_value)) { goto fail; }
        value.maxNumberCSI_ResourceAcrossCC_r18 = (CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.maxNumberPortsAcrossCC_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18(CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18：ASN.1 powerAdaptation-CSI-FeedbackAperiodicPerBC-r18；源文件第 15190 行；SEQUENCE。
// Encode_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18 只读不分配；Decode_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18(Encoder& enc, const CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCSI_ResourceAcrossCC_r18), 0, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPortsAcrossCC_r18), 1, 32);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18(Decoder& dec, CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 32, tmp_value)) { goto fail; }
        value.maxNumberCSI_ResourceAcrossCC_r18 = (CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.maxNumberPortsAcrossCC_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18(CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18：ASN.1 powerAdaptation-CSI-FeedbackPUCCH-PerBC-r18；源文件第 15198 行；SEQUENCE。
// Encode_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18 只读不分配；Decode_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18(Encoder& enc, const CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCSI_ResourceAcrossCC_r18), 0, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPortsAcrossCC_r18), 1, 32);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18(Decoder& dec, CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 32, tmp_value)) { goto fail; }
        value.maxNumberCSI_ResourceAcrossCC_r18 = (CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18_MaxNumberCSI_ResourceAcrossCC_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.maxNumberPortsAcrossCC_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18(CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18：ASN.1 multiCell-PDSCH-DCI-1-3-SameSCS-r18/coScheduledCellSCS-r18；源文件第 15212 行；SEQUENCE。
// Encode_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18 只读不分配；Decode_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18(Encoder& enc, const CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18& value)
{
    enc.WriteBit(value.has_nonSharedSpectrum_fdd_fr1);
    enc.WriteBit(value.has_nonSharedSpectrum_tdd_fr1);
    enc.WriteBit(value.has_sharedSpectrum_tdd_fr1);
    enc.WriteBit(value.has_fr2_1);
    enc.WriteBit(value.has_fr2_2);
    if (value.has_nonSharedSpectrum_fdd_fr1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nonSharedSpectrum_fdd_fr1), 0, 0);
    }
    if (value.has_nonSharedSpectrum_tdd_fr1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nonSharedSpectrum_tdd_fr1), 0, 0);
    }
    if (value.has_sharedSpectrum_tdd_fr1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sharedSpectrum_tdd_fr1), 0, 0);
    }
    if (value.has_fr2_1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fr2_1), 0, 0);
    }
    if (value.has_fr2_2) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fr2_2), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18(Decoder& dec, CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18& value)
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
        value.nonSharedSpectrum_fdd_fr1 = (CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_NonSharedSpectrum_fdd_fr1)0;
    }
    if (present_1) {
        value.nonSharedSpectrum_tdd_fr1 = (CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_NonSharedSpectrum_tdd_fr1)0;
    }
    if (present_2) {
        value.sharedSpectrum_tdd_fr1 = (CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_SharedSpectrum_tdd_fr1)0;
    }
    if (present_3) {
        value.fr2_1 = (CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_Fr2_1)0;
    }
    if (present_4) {
        value.fr2_2 = (CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18_Fr2_2)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18(CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18& value)
{
    if (value.has_nonSharedSpectrum_fdd_fr1) {
    }
    if (value.has_nonSharedSpectrum_tdd_fr1) {
    }
    if (value.has_sharedSpectrum_tdd_fr1) {
    }
    if (value.has_fr2_1) {
    }
    if (value.has_fr2_2) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18：ASN.1 multiCell-PDSCH-DCI-1-3-SameSCS-r18；源文件第 15211 行；SEQUENCE。
// Encode_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18 只读不分配；Decode_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18(Encoder& enc, const CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18& value)
{
    enc.WriteBit(value.has_supportOfSearchSpace_r18);
    enc.WriteBit(value.has_licensed_fdd_tdd_fr1_r18);
    Encode_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18(enc, value.coScheduledCellSCS_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCoScheduledCell_r18), 2, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSetsOfCellAcrossPUCCH_Group_r18), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSetsOfCellScheduling_r18), 1, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.harqFeedbackType_r18), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.coScheduledCellIndicationScheme_r18), 0, 2);
    if (value.has_supportOfSearchSpace_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportOfSearchSpace_r18), 0, 0);
    }
    if (value.has_licensed_fdd_tdd_fr1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.licensed_fdd_tdd_fr1_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18(Decoder& dec, CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        if (Decode_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18(dec, value.coScheduledCellSCS_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.maxNumberCoScheduledCell_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumberSetsOfCellAcrossPUCCH_Group_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.maxNumberSetsOfCellScheduling_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.harqFeedbackType_r18 = (CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_HarqFeedbackType_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.coScheduledCellIndicationScheme_r18 = (CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellIndicationScheme_r18)tmp_value;
    }
    if (present_0) {
        value.supportOfSearchSpace_r18 = (CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_SupportOfSearchSpace_r18)0;
    }
    if (present_1) {
        value.licensed_fdd_tdd_fr1_r18 = (CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_Licensed_fdd_tdd_fr1_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18(CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18& value)
{
    Free_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18_CoScheduledCellSCS_r18(value.coScheduledCellSCS_r18);
    if (value.has_supportOfSearchSpace_r18) {
    }
    if (value.has_licensed_fdd_tdd_fr1_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18：ASN.1 multiCell-PDSCH-DCI-1-3-DiffSCS-r18；源文件第 15229 行；SEQUENCE。
// Encode_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18 只读不分配；Decode_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18(Encoder& enc, const CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.coScheduledCellSCS_r18), 0, 2);
enc.WriteConstrainedLength(value.combinationCarrierType_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.combinationCarrierType_r18_count; ++i) {
    Encode_CombinationCarrierType_r18(enc, value.combinationCarrierType_r18_items[i]);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCoScheduledCell_r18), 2, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSetsOfCellAcrossPUCCH_Group_r18), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSetsOfCellScheduling_r18), 1, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.harqFeedbackType_r18), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.coScheduledCellIndicationScheme_r18), 0, 2);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18(Decoder& dec, CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.coScheduledCellSCS_r18 = (CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18_CoScheduledCellSCS_r18)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.combinationCarrierType_r18_count)) { goto fail; }
if (value.combinationCarrierType_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.combinationCarrierType_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.combinationCarrierType_r18_count > 0u) {
    value.combinationCarrierType_r18_items = (CombinationCarrierType_r18*)std::malloc((std::size_t)value.combinationCarrierType_r18_count * sizeof(CombinationCarrierType_r18));
    if (value.combinationCarrierType_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.combinationCarrierType_r18_items, 0, (std::size_t)value.combinationCarrierType_r18_count * sizeof(CombinationCarrierType_r18));
}
for (std::uint32_t i = 0; i < value.combinationCarrierType_r18_count; ++i) {
    if (Decode_CombinationCarrierType_r18(dec, value.combinationCarrierType_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.maxNumberCoScheduledCell_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumberSetsOfCellAcrossPUCCH_Group_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.maxNumberSetsOfCellScheduling_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.harqFeedbackType_r18 = (CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18_HarqFeedbackType_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.coScheduledCellIndicationScheme_r18 = (CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18_CoScheduledCellIndicationScheme_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18(CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18& value)
{
    if (value.combinationCarrierType_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.combinationCarrierType_r18_count; ++i) {
            Free_CombinationCarrierType_r18(value.combinationCarrierType_r18_items[i]);
        }
        std::free(value.combinationCarrierType_r18_items);
        value.combinationCarrierType_r18_items = nullptr;
    }
    value.combinationCarrierType_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18：ASN.1 multiCell-PUSCH-DCI-0-3-SameSCS-r18/coScheduledCellSCS-r18；源文件第 15242 行；SEQUENCE。
// Encode_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18 只读不分配；Decode_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18(Encoder& enc, const CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18& value)
{
    enc.WriteBit(value.has_nonSharedSpectrum_fdd_fr1);
    enc.WriteBit(value.has_nonSharedSpectrum_tdd_fr1);
    enc.WriteBit(value.has_sharedSpectrum_tdd_fr1);
    enc.WriteBit(value.has_fr2_1);
    enc.WriteBit(value.has_fr2_2);
    if (value.has_nonSharedSpectrum_fdd_fr1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nonSharedSpectrum_fdd_fr1), 0, 0);
    }
    if (value.has_nonSharedSpectrum_tdd_fr1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nonSharedSpectrum_tdd_fr1), 0, 0);
    }
    if (value.has_sharedSpectrum_tdd_fr1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sharedSpectrum_tdd_fr1), 0, 0);
    }
    if (value.has_fr2_1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fr2_1), 0, 0);
    }
    if (value.has_fr2_2) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fr2_2), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18(Decoder& dec, CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18& value)
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
        value.nonSharedSpectrum_fdd_fr1 = (CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_NonSharedSpectrum_fdd_fr1)0;
    }
    if (present_1) {
        value.nonSharedSpectrum_tdd_fr1 = (CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_NonSharedSpectrum_tdd_fr1)0;
    }
    if (present_2) {
        value.sharedSpectrum_tdd_fr1 = (CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_SharedSpectrum_tdd_fr1)0;
    }
    if (present_3) {
        value.fr2_1 = (CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_Fr2_1)0;
    }
    if (present_4) {
        value.fr2_2 = (CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18_Fr2_2)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18(CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18& value)
{
    if (value.has_nonSharedSpectrum_fdd_fr1) {
    }
    if (value.has_nonSharedSpectrum_tdd_fr1) {
    }
    if (value.has_sharedSpectrum_tdd_fr1) {
    }
    if (value.has_fr2_1) {
    }
    if (value.has_fr2_2) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18：ASN.1 multiCell-PUSCH-DCI-0-3-SameSCS-r18；源文件第 15241 行；SEQUENCE。
// Encode_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18 只读不分配；Decode_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18(Encoder& enc, const CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18& value)
{
    enc.WriteBit(value.has_supportOfSearchSpace_r18);
    enc.WriteBit(value.has_licensed_fdd_tdd_fr1_r18);
    Encode_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18(enc, value.coScheduledCellSCS_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCoScheduledCell_r18), 2, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSetsOfCellAcrossPUCCH_Group_r18), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSetsOfCellScheduling_r18), 1, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.coScheduledCellIndicationScheme_r18), 0, 2);
    if (value.has_supportOfSearchSpace_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportOfSearchSpace_r18), 0, 0);
    }
    if (value.has_licensed_fdd_tdd_fr1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.licensed_fdd_tdd_fr1_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18(Decoder& dec, CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        if (Decode_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18(dec, value.coScheduledCellSCS_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.maxNumberCoScheduledCell_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumberSetsOfCellAcrossPUCCH_Group_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.maxNumberSetsOfCellScheduling_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.coScheduledCellIndicationScheme_r18 = (CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellIndicationScheme_r18)tmp_value;
    }
    if (present_0) {
        value.supportOfSearchSpace_r18 = (CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_SupportOfSearchSpace_r18)0;
    }
    if (present_1) {
        value.licensed_fdd_tdd_fr1_r18 = (CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_Licensed_fdd_tdd_fr1_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18(CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18& value)
{
    Free_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18_CoScheduledCellSCS_r18(value.coScheduledCellSCS_r18);
    if (value.has_supportOfSearchSpace_r18) {
    }
    if (value.has_licensed_fdd_tdd_fr1_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18：ASN.1 multiCell-PUSCH-DCI-0-3-DiffSCS-r18；源文件第 15257 行；SEQUENCE。
// Encode_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18 只读不分配；Decode_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18(Encoder& enc, const CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.coScheduledCellSCS_r18), 0, 2);
enc.WriteConstrainedLength(value.combinationCarrierType_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.combinationCarrierType_r18_count; ++i) {
    Encode_CombinationCarrierType_r18(enc, value.combinationCarrierType_r18_items[i]);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCoScheduledCell_r18), 2, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSetsOfCellAcrossPUCCH_Group_r18), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSetsOfCellScheduling_r18), 1, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.coScheduledCellIndicationScheme_r18), 0, 2);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18(Decoder& dec, CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.coScheduledCellSCS_r18 = (CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18_CoScheduledCellSCS_r18)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.combinationCarrierType_r18_count)) { goto fail; }
if (value.combinationCarrierType_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.combinationCarrierType_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.combinationCarrierType_r18_count > 0u) {
    value.combinationCarrierType_r18_items = (CombinationCarrierType_r18*)std::malloc((std::size_t)value.combinationCarrierType_r18_count * sizeof(CombinationCarrierType_r18));
    if (value.combinationCarrierType_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.combinationCarrierType_r18_items, 0, (std::size_t)value.combinationCarrierType_r18_count * sizeof(CombinationCarrierType_r18));
}
for (std::uint32_t i = 0; i < value.combinationCarrierType_r18_count; ++i) {
    if (Decode_CombinationCarrierType_r18(dec, value.combinationCarrierType_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.maxNumberCoScheduledCell_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumberSetsOfCellAcrossPUCCH_Group_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.maxNumberSetsOfCellScheduling_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.coScheduledCellIndicationScheme_r18 = (CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18_CoScheduledCellIndicationScheme_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18(CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18& value)
{
    if (value.combinationCarrierType_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.combinationCarrierType_r18_count; ++i) {
            Free_CombinationCarrierType_r18(value.combinationCarrierType_r18_items[i]);
        }
        std::free(value.combinationCarrierType_r18_items);
        value.combinationCarrierType_r18_items = nullptr;
    }
    value.combinationCarrierType_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18：ASN.1 advUnicastDCI-DL-r18；源文件第 15267 行；SEQUENCE。
// Encode_CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18 只读不分配；Decode_CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18(Encoder& enc, const CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18& value)
{
    enc.WriteBit(value.has_scs_15kHz_120kHz_r18);
    enc.WriteBit(value.has_scs_15kHz_60kHz_r18);
    enc.WriteBit(value.has_scs_30kHz_120kHz_r18);
    enc.WriteBit(value.has_scs_15kHz_30kHz_r18);
    enc.WriteBit(value.has_scs_30kHz_60kHz_r18);
    enc.WriteBit(value.has_scs_60kHz_120kHz_r18);
    if (value.has_scs_15kHz_120kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz_120kHz_r18), 0, 1);
    }
    if (value.has_scs_15kHz_60kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz_60kHz_r18), 0, 1);
    }
    if (value.has_scs_30kHz_120kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz_120kHz_r18), 0, 1);
    }
    if (value.has_scs_15kHz_30kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz_30kHz_r18), 0, 0);
    }
    if (value.has_scs_30kHz_60kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz_60kHz_r18), 0, 0);
    }
    if (value.has_scs_60kHz_120kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz_120kHz_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18(Decoder& dec, CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18& value)
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
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.scs_15kHz_120kHz_r18 = (CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_15kHz_120kHz_r18)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.scs_15kHz_60kHz_r18 = (CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_15kHz_60kHz_r18)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.scs_30kHz_120kHz_r18 = (CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_30kHz_120kHz_r18)tmp_value;
    }
    if (present_3) {
        value.scs_15kHz_30kHz_r18 = (CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_15kHz_30kHz_r18)0;
    }
    if (present_4) {
        value.scs_30kHz_60kHz_r18 = (CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_30kHz_60kHz_r18)0;
    }
    if (present_5) {
        value.scs_60kHz_120kHz_r18 = (CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18_Scs_60kHz_120kHz_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18(CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18& value)
{
    if (value.has_scs_15kHz_120kHz_r18) {
    }
    if (value.has_scs_15kHz_60kHz_r18) {
    }
    if (value.has_scs_30kHz_120kHz_r18) {
    }
    if (value.has_scs_15kHz_30kHz_r18) {
    }
    if (value.has_scs_30kHz_60kHz_r18) {
    }
    if (value.has_scs_60kHz_120kHz_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18：ASN.1 advUnicastDCI-UL-r18；源文件第 15276 行；SEQUENCE。
// Encode_CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18 只读不分配；Decode_CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18(Encoder& enc, const CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18& value)
{
    enc.WriteBit(value.has_scs_15kHz_120kHz_r18);
    enc.WriteBit(value.has_scs_15kHz_60kHz_r18);
    enc.WriteBit(value.has_scs_30kHz_120kHz_r18);
    enc.WriteBit(value.has_scs_15kHz_30kHz_r18);
    enc.WriteBit(value.has_scs_30kHz_60kHz_r18);
    enc.WriteBit(value.has_scs_60kHz_120kHz_r18);
    if (value.has_scs_15kHz_120kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz_120kHz_r18), 0, 1);
    }
    if (value.has_scs_15kHz_60kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz_60kHz_r18), 0, 1);
    }
    if (value.has_scs_30kHz_120kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz_120kHz_r18), 0, 1);
    }
    if (value.has_scs_15kHz_30kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz_30kHz_r18), 0, 0);
    }
    if (value.has_scs_30kHz_60kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz_60kHz_r18), 0, 0);
    }
    if (value.has_scs_60kHz_120kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz_120kHz_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18(Decoder& dec, CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18& value)
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
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.scs_15kHz_120kHz_r18 = (CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_15kHz_120kHz_r18)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.scs_15kHz_60kHz_r18 = (CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_15kHz_60kHz_r18)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.scs_30kHz_120kHz_r18 = (CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_30kHz_120kHz_r18)tmp_value;
    }
    if (present_3) {
        value.scs_15kHz_30kHz_r18 = (CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_15kHz_30kHz_r18)0;
    }
    if (present_4) {
        value.scs_30kHz_60kHz_r18 = (CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_30kHz_60kHz_r18)0;
    }
    if (present_5) {
        value.scs_60kHz_120kHz_r18 = (CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18_Scs_60kHz_120kHz_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18(CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18& value)
{
    if (value.has_scs_15kHz_120kHz_r18) {
    }
    if (value.has_scs_15kHz_60kHz_r18) {
    }
    if (value.has_scs_30kHz_120kHz_r18) {
    }
    if (value.has_scs_15kHz_30kHz_r18) {
    }
    if (value.has_scs_30kHz_60kHz_r18) {
    }
    if (value.has_scs_60kHz_120kHz_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18：ASN.1 type3EnhHARQ-CB-DCI-1-3-r18；源文件第 15287 行；SEQUENCE。
// Encode_CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18 只读不分配；Decode_CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18(Encoder& enc, const CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.numberOfCodebook_r18), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPUCCH_Trans_r18), 1, 7);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18(Decoder& dec, CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.numberOfCodebook_r18 = (CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18_NumberOfCodebook_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 7, tmp_value)) { goto fail; }
        value.maxNumberPUCCH_Trans_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18(CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1800_Pdcch_MonitoringCA_r18：ASN.1 pdcch-MonitoringCA-r18；源文件第 15293 行；SEQUENCE。
// Encode_CA_ParametersNR_v1800_Pdcch_MonitoringCA_r18 只读不分配；Decode_CA_ParametersNR_v1800_Pdcch_MonitoringCA_r18 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1800_Pdcch_MonitoringCA_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1800_Pdcch_MonitoringCA_r18(Encoder& enc, const CA_ParametersNR_v1800_Pdcch_MonitoringCA_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberOfMonitoringCC_r18), 2, 16);
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedSpanArrangement_r18), 0, 1);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1800_Pdcch_MonitoringCA_r18(Decoder& dec, CA_ParametersNR_v1800_Pdcch_MonitoringCA_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 16, tmp_value)) { goto fail; }
        value.maxNumberOfMonitoringCC_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.supportedSpanArrangement_r18 = (CA_ParametersNR_v1800_Pdcch_MonitoringCA_r18_SupportedSpanArrangement_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1800_Pdcch_MonitoringCA_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1800_Pdcch_MonitoringCA_r18(CA_ParametersNR_v1800_Pdcch_MonitoringCA_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1800_Pdcch_BlindDetectionCA_Mixed_r18：ASN.1 pdcch-BlindDetectionCA-Mixed-r18；源文件第 15299 行；SEQUENCE。
// Encode_CA_ParametersNR_v1800_Pdcch_BlindDetectionCA_Mixed_r18 只读不分配；Decode_CA_ParametersNR_v1800_Pdcch_BlindDetectionCA_Mixed_r18 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1800_Pdcch_BlindDetectionCA_Mixed_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1800_Pdcch_BlindDetectionCA_Mixed_r18(Encoder& enc, const CA_ParametersNR_v1800_Pdcch_BlindDetectionCA_Mixed_r18& value)
{
enc.WriteConstrainedLength(value.blindDetectionCA_Mixed_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.blindDetectionCA_Mixed_r18_count; ++i) {
    Encode_PDCCH_BlindDetectionCA_Mixed_r18(enc, value.blindDetectionCA_Mixed_r18_items[i]);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedSpanArrangement_r18), 0, 1);
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1800_Pdcch_BlindDetectionCA_Mixed_r18(Decoder& dec, CA_ParametersNR_v1800_Pdcch_BlindDetectionCA_Mixed_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.blindDetectionCA_Mixed_r18_count)) { goto fail; }
if (value.blindDetectionCA_Mixed_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.blindDetectionCA_Mixed_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.blindDetectionCA_Mixed_r18_count > 0u) {
    value.blindDetectionCA_Mixed_r18_items = (PDCCH_BlindDetectionCA_Mixed_r18*)std::malloc((std::size_t)value.blindDetectionCA_Mixed_r18_count * sizeof(PDCCH_BlindDetectionCA_Mixed_r18));
    if (value.blindDetectionCA_Mixed_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.blindDetectionCA_Mixed_r18_items, 0, (std::size_t)value.blindDetectionCA_Mixed_r18_count * sizeof(PDCCH_BlindDetectionCA_Mixed_r18));
}
for (std::uint32_t i = 0; i < value.blindDetectionCA_Mixed_r18_count; ++i) {
    if (Decode_PDCCH_BlindDetectionCA_Mixed_r18(dec, value.blindDetectionCA_Mixed_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.supportedSpanArrangement_r18 = (CA_ParametersNR_v1800_Pdcch_BlindDetectionCA_Mixed_r18_SupportedSpanArrangement_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1800_Pdcch_BlindDetectionCA_Mixed_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1800_Pdcch_BlindDetectionCA_Mixed_r18(CA_ParametersNR_v1800_Pdcch_BlindDetectionCA_Mixed_r18& value)
{
    if (value.blindDetectionCA_Mixed_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.blindDetectionCA_Mixed_r18_count; ++i) {
            Free_PDCCH_BlindDetectionCA_Mixed_r18(value.blindDetectionCA_Mixed_r18_items[i]);
        }
        std::free(value.blindDetectionCA_Mixed_r18_items);
        value.blindDetectionCA_Mixed_r18_items = nullptr;
    }
    value.blindDetectionCA_Mixed_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNR_v1800：ASN.1 CA-ParametersNR-v1800；源文件第 15108 行；SEQUENCE。
// Encode_CA_ParametersNR_v1800 只读不分配；Decode_CA_ParametersNR_v1800 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNR_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNR_v1800(Encoder& enc, const CA_ParametersNR_v1800& value)
{
    enc.WriteBit(value.has_codebookParametersetype2DopplerCSI_PerBC_r18);
    enc.WriteBit(value.has_codebookParametersfetype2DopplerCSI_PerBC_r18);
    enc.WriteBit(value.has_codebookParametersetype2CJT_PerBC_r18);
    enc.WriteBit(value.has_codebookParametersfetype2CJT_PerBC_r18);
    enc.WriteBit(value.has_codebookComboParametersCJT_PerBC_r18);
    enc.WriteBit(value.has_codebookParametersHARQ_ACK_PUSCH_PerBC_r18);
    enc.WriteBit(value.has_maxNumberTAG_AcrossCC_r18);
    enc.WriteBit(value.has_tdcp_ReportPerBC_r18);
    enc.WriteBit(value.has_tdcp_ResourcePerBC_r18);
    enc.WriteBit(value.has_timelineRelax_CJT_CSI_CA_r18);
    enc.WriteBit(value.has_spatialAdaptation_CSI_FeedbackPerBC_r18);
    enc.WriteBit(value.has_spatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18);
    enc.WriteBit(value.has_spatialAdaptation_CSI_FeedbackAperiodicPerBC_r18);
    enc.WriteBit(value.has_spatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18);
    enc.WriteBit(value.has_powerAdaptation_CSI_FeedbackPerBC_r18);
    enc.WriteBit(value.has_powerAdaptation_CSI_FeedbackPUSCH_PerBC_r18);
    enc.WriteBit(value.has_powerAdaptation_CSI_FeedbackAperiodicPerBC_r18);
    enc.WriteBit(value.has_powerAdaptation_CSI_FeedbackPUCCH_PerBC_r18);
    enc.WriteBit(value.has_mixCodeBookSpatialAdaptationPerBC_r18);
    enc.WriteBit(value.has_multiCell_PDSCH_DCI_1_3_SameSCS_r18);
    enc.WriteBit(value.has_multiCell_PDSCH_DCI_1_3_DiffSCS_r18);
    enc.WriteBit(value.has_multiCell_PUSCH_DCI_0_3_SameSCS_r18);
    enc.WriteBit(value.has_multiCell_PUSCH_DCI_0_3_DiffSCS_r18);
    enc.WriteBit(value.has_advUnicastDCI_DL_r18);
    enc.WriteBit(value.has_advUnicastDCI_UL_r18);
    enc.WriteBit(value.has_type3HARQ_CB_DCI_1_3_r18);
    enc.WriteBit(value.has_type3EnhHARQ_CB_DCI_1_3_r18);
    enc.WriteBit(value.has_pdcch_MonitoringCA_r18);
    enc.WriteBit(value.has_pdcch_BlindDetectionCA_Mixed_r18);
    enc.WriteBit(value.has_pdcch_BlindDetectionMCG_SCG_List_r18);
    enc.WriteBit(value.has_pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r18);
    enc.WriteBit(value.has_pdcch_MonitoringCA_NonAlignedSpan_r18);
    enc.WriteBit(value.has_intraBandNR_CA_non_collocated_r18);
    if (value.has_codebookParametersetype2DopplerCSI_PerBC_r18) {
        Encode_CodebookParametersetype2DopplerCSI_r18(enc, value.codebookParametersetype2DopplerCSI_PerBC_r18);
    }
    if (value.has_codebookParametersfetype2DopplerCSI_PerBC_r18) {
        Encode_CodebookParametersfetype2DopplerCSI_r18(enc, value.codebookParametersfetype2DopplerCSI_PerBC_r18);
    }
    if (value.has_codebookParametersetype2CJT_PerBC_r18) {
        Encode_CodebookParametersetype2CJT_r18(enc, value.codebookParametersetype2CJT_PerBC_r18);
    }
    if (value.has_codebookParametersfetype2CJT_PerBC_r18) {
        Encode_CodebookParametersfetype2CJT_r18(enc, value.codebookParametersfetype2CJT_PerBC_r18);
    }
    if (value.has_codebookComboParametersCJT_PerBC_r18) {
        Encode_CodebookComboParametersCJT_r18(enc, value.codebookComboParametersCJT_PerBC_r18);
    }
    if (value.has_codebookParametersHARQ_ACK_PUSCH_PerBC_r18) {
        Encode_CodebookParametersHARQ_ACK_PUSCH_r18(enc, value.codebookParametersHARQ_ACK_PUSCH_PerBC_r18);
    }
    if (value.has_maxNumberTAG_AcrossCC_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberTAG_AcrossCC_r18), 2, 4);
    }
    if (value.has_tdcp_ReportPerBC_r18) {
        Encode_CA_ParametersNR_v1800_Tdcp_ReportPerBC_r18(enc, value.tdcp_ReportPerBC_r18);
    }
    if (value.has_tdcp_ResourcePerBC_r18) {
        Encode_CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18(enc, value.tdcp_ResourcePerBC_r18);
    }
    if (value.has_timelineRelax_CJT_CSI_CA_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.timelineRelax_CJT_CSI_CA_r18), 0, 1);
    }
    if (value.has_spatialAdaptation_CSI_FeedbackPerBC_r18) {
        Encode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18(enc, value.spatialAdaptation_CSI_FeedbackPerBC_r18);
    }
    if (value.has_spatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18) {
        Encode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18(enc, value.spatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18);
    }
    if (value.has_spatialAdaptation_CSI_FeedbackAperiodicPerBC_r18) {
        Encode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18(enc, value.spatialAdaptation_CSI_FeedbackAperiodicPerBC_r18);
    }
    if (value.has_spatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18) {
        Encode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18(enc, value.spatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18);
    }
    if (value.has_powerAdaptation_CSI_FeedbackPerBC_r18) {
        Encode_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18(enc, value.powerAdaptation_CSI_FeedbackPerBC_r18);
    }
    if (value.has_powerAdaptation_CSI_FeedbackPUSCH_PerBC_r18) {
        Encode_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18(enc, value.powerAdaptation_CSI_FeedbackPUSCH_PerBC_r18);
    }
    if (value.has_powerAdaptation_CSI_FeedbackAperiodicPerBC_r18) {
        Encode_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18(enc, value.powerAdaptation_CSI_FeedbackAperiodicPerBC_r18);
    }
    if (value.has_powerAdaptation_CSI_FeedbackPUCCH_PerBC_r18) {
        Encode_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18(enc, value.powerAdaptation_CSI_FeedbackPUCCH_PerBC_r18);
    }
    if (value.has_mixCodeBookSpatialAdaptationPerBC_r18) {
enc.WriteConstrainedLength(value.mixCodeBookSpatialAdaptationPerBC_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.mixCodeBookSpatialAdaptationPerBC_r18_count; ++i) {
    Encode_SupportedCSI_RS_Resource(enc, value.mixCodeBookSpatialAdaptationPerBC_r18_items[i]);
}
    }
    if (value.has_multiCell_PDSCH_DCI_1_3_SameSCS_r18) {
        Encode_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18(enc, value.multiCell_PDSCH_DCI_1_3_SameSCS_r18);
    }
    if (value.has_multiCell_PDSCH_DCI_1_3_DiffSCS_r18) {
        Encode_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18(enc, value.multiCell_PDSCH_DCI_1_3_DiffSCS_r18);
    }
    if (value.has_multiCell_PUSCH_DCI_0_3_SameSCS_r18) {
        Encode_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18(enc, value.multiCell_PUSCH_DCI_0_3_SameSCS_r18);
    }
    if (value.has_multiCell_PUSCH_DCI_0_3_DiffSCS_r18) {
        Encode_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18(enc, value.multiCell_PUSCH_DCI_0_3_DiffSCS_r18);
    }
    if (value.has_advUnicastDCI_DL_r18) {
        Encode_CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18(enc, value.advUnicastDCI_DL_r18);
    }
    if (value.has_advUnicastDCI_UL_r18) {
        Encode_CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18(enc, value.advUnicastDCI_UL_r18);
    }
    if (value.has_type3HARQ_CB_DCI_1_3_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.type3HARQ_CB_DCI_1_3_r18), 0, 0);
    }
    if (value.has_type3EnhHARQ_CB_DCI_1_3_r18) {
        Encode_CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18(enc, value.type3EnhHARQ_CB_DCI_1_3_r18);
    }
    if (value.has_pdcch_MonitoringCA_r18) {
        Encode_CA_ParametersNR_v1800_Pdcch_MonitoringCA_r18(enc, value.pdcch_MonitoringCA_r18);
    }
    if (value.has_pdcch_BlindDetectionCA_Mixed_r18) {
        Encode_CA_ParametersNR_v1800_Pdcch_BlindDetectionCA_Mixed_r18(enc, value.pdcch_BlindDetectionCA_Mixed_r18);
    }
    if (value.has_pdcch_BlindDetectionMCG_SCG_List_r18) {
enc.WriteConstrainedLength(value.pdcch_BlindDetectionMCG_SCG_List_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pdcch_BlindDetectionMCG_SCG_List_r18_count; ++i) {
    Encode_PDCCH_BlindDetectionMCG_SCG_r18(enc, value.pdcch_BlindDetectionMCG_SCG_List_r18_items[i]);
}
    }
    if (value.has_pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r18) {
enc.WriteConstrainedLength(value.pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r18_count; ++i) {
    Encode_PDCCH_BlindDetectionCA_Mixed_r18(enc, value.pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r18_items[i]);
}
    }
    if (value.has_pdcch_MonitoringCA_NonAlignedSpan_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_MonitoringCA_NonAlignedSpan_r18), 2, 16);
    }
    if (value.has_intraBandNR_CA_non_collocated_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.intraBandNR_CA_non_collocated_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNR_v1800(Decoder& dec, CA_ParametersNR_v1800& value)
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
    bool present_32 = false;
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
    if (!dec.ReadBit(present_32)) { goto fail; }
    if (present_0) {
        if (Decode_CodebookParametersetype2DopplerCSI_r18(dec, value.codebookParametersetype2DopplerCSI_PerBC_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CodebookParametersfetype2DopplerCSI_r18(dec, value.codebookParametersfetype2DopplerCSI_PerBC_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_CodebookParametersetype2CJT_r18(dec, value.codebookParametersetype2CJT_PerBC_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_CodebookParametersfetype2CJT_r18(dec, value.codebookParametersfetype2CJT_PerBC_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_CodebookComboParametersCJT_r18(dec, value.codebookComboParametersCJT_PerBC_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_CodebookParametersHARQ_ACK_PUSCH_r18(dec, value.codebookParametersHARQ_ACK_PUSCH_PerBC_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.maxNumberTAG_AcrossCC_r18 = (int64_t)tmp_value;
    }
    if (present_7) {
        if (Decode_CA_ParametersNR_v1800_Tdcp_ReportPerBC_r18(dec, value.tdcp_ReportPerBC_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        if (Decode_CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18(dec, value.tdcp_ResourcePerBC_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.timelineRelax_CJT_CSI_CA_r18 = (CA_ParametersNR_v1800_TimelineRelax_CJT_CSI_CA_r18)tmp_value;
    }
    if (present_10) {
        if (Decode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18(dec, value.spatialAdaptation_CSI_FeedbackPerBC_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_11) {
        if (Decode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18(dec, value.spatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_12) {
        if (Decode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18(dec, value.spatialAdaptation_CSI_FeedbackAperiodicPerBC_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_13) {
        if (Decode_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18(dec, value.spatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_14) {
        if (Decode_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18(dec, value.powerAdaptation_CSI_FeedbackPerBC_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_15) {
        if (Decode_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18(dec, value.powerAdaptation_CSI_FeedbackPUSCH_PerBC_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_16) {
        if (Decode_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18(dec, value.powerAdaptation_CSI_FeedbackAperiodicPerBC_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_17) {
        if (Decode_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18(dec, value.powerAdaptation_CSI_FeedbackPUCCH_PerBC_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_18) {
if (!dec.ReadConstrainedLength(0u, 0u, value.mixCodeBookSpatialAdaptationPerBC_r18_count)) { goto fail; }
if (value.mixCodeBookSpatialAdaptationPerBC_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.mixCodeBookSpatialAdaptationPerBC_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.mixCodeBookSpatialAdaptationPerBC_r18_count > 0u) {
    value.mixCodeBookSpatialAdaptationPerBC_r18_items = (SupportedCSI_RS_Resource*)std::malloc((std::size_t)value.mixCodeBookSpatialAdaptationPerBC_r18_count * sizeof(SupportedCSI_RS_Resource));
    if (value.mixCodeBookSpatialAdaptationPerBC_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.mixCodeBookSpatialAdaptationPerBC_r18_items, 0, (std::size_t)value.mixCodeBookSpatialAdaptationPerBC_r18_count * sizeof(SupportedCSI_RS_Resource));
}
for (std::uint32_t i = 0; i < value.mixCodeBookSpatialAdaptationPerBC_r18_count; ++i) {
    if (Decode_SupportedCSI_RS_Resource(dec, value.mixCodeBookSpatialAdaptationPerBC_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_19) {
        if (Decode_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18(dec, value.multiCell_PDSCH_DCI_1_3_SameSCS_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_20) {
        if (Decode_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18(dec, value.multiCell_PDSCH_DCI_1_3_DiffSCS_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_21) {
        if (Decode_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18(dec, value.multiCell_PUSCH_DCI_0_3_SameSCS_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_22) {
        if (Decode_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18(dec, value.multiCell_PUSCH_DCI_0_3_DiffSCS_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_23) {
        if (Decode_CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18(dec, value.advUnicastDCI_DL_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_24) {
        if (Decode_CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18(dec, value.advUnicastDCI_UL_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_25) {
        value.type3HARQ_CB_DCI_1_3_r18 = (CA_ParametersNR_v1800_Type3HARQ_CB_DCI_1_3_r18)0;
    }
    if (present_26) {
        if (Decode_CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18(dec, value.type3EnhHARQ_CB_DCI_1_3_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_27) {
        if (Decode_CA_ParametersNR_v1800_Pdcch_MonitoringCA_r18(dec, value.pdcch_MonitoringCA_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_28) {
        if (Decode_CA_ParametersNR_v1800_Pdcch_BlindDetectionCA_Mixed_r18(dec, value.pdcch_BlindDetectionCA_Mixed_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_29) {
if (!dec.ReadConstrainedLength(0u, 0u, value.pdcch_BlindDetectionMCG_SCG_List_r18_count)) { goto fail; }
if (value.pdcch_BlindDetectionMCG_SCG_List_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pdcch_BlindDetectionMCG_SCG_List_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pdcch_BlindDetectionMCG_SCG_List_r18_count > 0u) {
    value.pdcch_BlindDetectionMCG_SCG_List_r18_items = (PDCCH_BlindDetectionMCG_SCG_r18*)std::malloc((std::size_t)value.pdcch_BlindDetectionMCG_SCG_List_r18_count * sizeof(PDCCH_BlindDetectionMCG_SCG_r18));
    if (value.pdcch_BlindDetectionMCG_SCG_List_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pdcch_BlindDetectionMCG_SCG_List_r18_items, 0, (std::size_t)value.pdcch_BlindDetectionMCG_SCG_List_r18_count * sizeof(PDCCH_BlindDetectionMCG_SCG_r18));
}
for (std::uint32_t i = 0; i < value.pdcch_BlindDetectionMCG_SCG_List_r18_count; ++i) {
    if (Decode_PDCCH_BlindDetectionMCG_SCG_r18(dec, value.pdcch_BlindDetectionMCG_SCG_List_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_30) {
if (!dec.ReadConstrainedLength(0u, 0u, value.pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r18_count)) { goto fail; }
if (value.pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r18_count > 0u) {
    value.pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r18_items = (PDCCH_BlindDetectionCA_Mixed_r18*)std::malloc((std::size_t)value.pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r18_count * sizeof(PDCCH_BlindDetectionCA_Mixed_r18));
    if (value.pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r18_items, 0, (std::size_t)value.pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r18_count * sizeof(PDCCH_BlindDetectionCA_Mixed_r18));
}
for (std::uint32_t i = 0; i < value.pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r18_count; ++i) {
    if (Decode_PDCCH_BlindDetectionCA_Mixed_r18(dec, value.pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_31) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 16, tmp_value)) { goto fail; }
        value.pdcch_MonitoringCA_NonAlignedSpan_r18 = (int64_t)tmp_value;
    }
    if (present_32) {
        value.intraBandNR_CA_non_collocated_r18 = (CA_ParametersNR_v1800_IntraBandNR_CA_non_collocated_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNR_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNR_v1800(CA_ParametersNR_v1800& value)
{
    if (value.has_codebookParametersetype2DopplerCSI_PerBC_r18) {
        Free_CodebookParametersetype2DopplerCSI_r18(value.codebookParametersetype2DopplerCSI_PerBC_r18);
    }
    if (value.has_codebookParametersfetype2DopplerCSI_PerBC_r18) {
        Free_CodebookParametersfetype2DopplerCSI_r18(value.codebookParametersfetype2DopplerCSI_PerBC_r18);
    }
    if (value.has_codebookParametersetype2CJT_PerBC_r18) {
        Free_CodebookParametersetype2CJT_r18(value.codebookParametersetype2CJT_PerBC_r18);
    }
    if (value.has_codebookParametersfetype2CJT_PerBC_r18) {
        Free_CodebookParametersfetype2CJT_r18(value.codebookParametersfetype2CJT_PerBC_r18);
    }
    if (value.has_codebookComboParametersCJT_PerBC_r18) {
        Free_CodebookComboParametersCJT_r18(value.codebookComboParametersCJT_PerBC_r18);
    }
    if (value.has_codebookParametersHARQ_ACK_PUSCH_PerBC_r18) {
        Free_CodebookParametersHARQ_ACK_PUSCH_r18(value.codebookParametersHARQ_ACK_PUSCH_PerBC_r18);
    }
    if (value.has_maxNumberTAG_AcrossCC_r18) {
    }
    if (value.has_tdcp_ReportPerBC_r18) {
        Free_CA_ParametersNR_v1800_Tdcp_ReportPerBC_r18(value.tdcp_ReportPerBC_r18);
    }
    if (value.has_tdcp_ResourcePerBC_r18) {
        Free_CA_ParametersNR_v1800_Tdcp_ResourcePerBC_r18(value.tdcp_ResourcePerBC_r18);
    }
    if (value.has_timelineRelax_CJT_CSI_CA_r18) {
    }
    if (value.has_spatialAdaptation_CSI_FeedbackPerBC_r18) {
        Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPerBC_r18(value.spatialAdaptation_CSI_FeedbackPerBC_r18);
    }
    if (value.has_spatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18) {
        Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18(value.spatialAdaptation_CSI_FeedbackPUSCH_PerBC_r18);
    }
    if (value.has_spatialAdaptation_CSI_FeedbackAperiodicPerBC_r18) {
        Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackAperiodicPerBC_r18(value.spatialAdaptation_CSI_FeedbackAperiodicPerBC_r18);
    }
    if (value.has_spatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18) {
        Free_CA_ParametersNR_v1800_SpatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18(value.spatialAdaptation_CSI_FeedbackPUCCH_PerBC_r18);
    }
    if (value.has_powerAdaptation_CSI_FeedbackPerBC_r18) {
        Free_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPerBC_r18(value.powerAdaptation_CSI_FeedbackPerBC_r18);
    }
    if (value.has_powerAdaptation_CSI_FeedbackPUSCH_PerBC_r18) {
        Free_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUSCH_PerBC_r18(value.powerAdaptation_CSI_FeedbackPUSCH_PerBC_r18);
    }
    if (value.has_powerAdaptation_CSI_FeedbackAperiodicPerBC_r18) {
        Free_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackAperiodicPerBC_r18(value.powerAdaptation_CSI_FeedbackAperiodicPerBC_r18);
    }
    if (value.has_powerAdaptation_CSI_FeedbackPUCCH_PerBC_r18) {
        Free_CA_ParametersNR_v1800_PowerAdaptation_CSI_FeedbackPUCCH_PerBC_r18(value.powerAdaptation_CSI_FeedbackPUCCH_PerBC_r18);
    }
    if (value.has_mixCodeBookSpatialAdaptationPerBC_r18) {
        if (value.mixCodeBookSpatialAdaptationPerBC_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.mixCodeBookSpatialAdaptationPerBC_r18_count; ++i) {
                Free_SupportedCSI_RS_Resource(value.mixCodeBookSpatialAdaptationPerBC_r18_items[i]);
            }
            std::free(value.mixCodeBookSpatialAdaptationPerBC_r18_items);
            value.mixCodeBookSpatialAdaptationPerBC_r18_items = nullptr;
        }
        value.mixCodeBookSpatialAdaptationPerBC_r18_count = 0;
    }
    if (value.has_multiCell_PDSCH_DCI_1_3_SameSCS_r18) {
        Free_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_SameSCS_r18(value.multiCell_PDSCH_DCI_1_3_SameSCS_r18);
    }
    if (value.has_multiCell_PDSCH_DCI_1_3_DiffSCS_r18) {
        Free_CA_ParametersNR_v1800_MultiCell_PDSCH_DCI_1_3_DiffSCS_r18(value.multiCell_PDSCH_DCI_1_3_DiffSCS_r18);
    }
    if (value.has_multiCell_PUSCH_DCI_0_3_SameSCS_r18) {
        Free_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_SameSCS_r18(value.multiCell_PUSCH_DCI_0_3_SameSCS_r18);
    }
    if (value.has_multiCell_PUSCH_DCI_0_3_DiffSCS_r18) {
        Free_CA_ParametersNR_v1800_MultiCell_PUSCH_DCI_0_3_DiffSCS_r18(value.multiCell_PUSCH_DCI_0_3_DiffSCS_r18);
    }
    if (value.has_advUnicastDCI_DL_r18) {
        Free_CA_ParametersNR_v1800_AdvUnicastDCI_DL_r18(value.advUnicastDCI_DL_r18);
    }
    if (value.has_advUnicastDCI_UL_r18) {
        Free_CA_ParametersNR_v1800_AdvUnicastDCI_UL_r18(value.advUnicastDCI_UL_r18);
    }
    if (value.has_type3HARQ_CB_DCI_1_3_r18) {
    }
    if (value.has_type3EnhHARQ_CB_DCI_1_3_r18) {
        Free_CA_ParametersNR_v1800_Type3EnhHARQ_CB_DCI_1_3_r18(value.type3EnhHARQ_CB_DCI_1_3_r18);
    }
    if (value.has_pdcch_MonitoringCA_r18) {
        Free_CA_ParametersNR_v1800_Pdcch_MonitoringCA_r18(value.pdcch_MonitoringCA_r18);
    }
    if (value.has_pdcch_BlindDetectionCA_Mixed_r18) {
        Free_CA_ParametersNR_v1800_Pdcch_BlindDetectionCA_Mixed_r18(value.pdcch_BlindDetectionCA_Mixed_r18);
    }
    if (value.has_pdcch_BlindDetectionMCG_SCG_List_r18) {
        if (value.pdcch_BlindDetectionMCG_SCG_List_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pdcch_BlindDetectionMCG_SCG_List_r18_count; ++i) {
                Free_PDCCH_BlindDetectionMCG_SCG_r18(value.pdcch_BlindDetectionMCG_SCG_List_r18_items[i]);
            }
            std::free(value.pdcch_BlindDetectionMCG_SCG_List_r18_items);
            value.pdcch_BlindDetectionMCG_SCG_List_r18_items = nullptr;
        }
        value.pdcch_BlindDetectionMCG_SCG_List_r18_count = 0;
    }
    if (value.has_pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r18) {
        if (value.pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r18_count; ++i) {
                Free_PDCCH_BlindDetectionCA_Mixed_r18(value.pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r18_items[i]);
            }
            std::free(value.pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r18_items);
            value.pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r18_items = nullptr;
        }
        value.pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r18_count = 0;
    }
    if (value.has_pdcch_MonitoringCA_NonAlignedSpan_r18) {
    }
    if (value.has_intraBandNR_CA_non_collocated_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CA_ParametersNRDC_v1800：ASN.1 CA-ParametersNRDC-v1800；源文件第 15522 行；SEQUENCE。
// Encode_CA_ParametersNRDC_v1800 只读不分配；Decode_CA_ParametersNRDC_v1800 可能 malloc（失败时内部已释放并清零）；Free_CA_ParametersNRDC_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CA_ParametersNRDC_v1800(Encoder& enc, const CA_ParametersNRDC_v1800& value)
{
    enc.WriteBit(value.has_ca_ParametersNR_ForDC_v1800);
    enc.WriteBit(value.has_pdcch_BlindDetectionNRDC_r18);
    if (value.has_ca_ParametersNR_ForDC_v1800) {
        Encode_CA_ParametersNR_v1800(enc, value.ca_ParametersNR_ForDC_v1800);
    }
    if (value.has_pdcch_BlindDetectionNRDC_r18) {
enc.WriteConstrainedLength(value.pdcch_BlindDetectionNRDC_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pdcch_BlindDetectionNRDC_r18_count; ++i) {
    Encode_PDCCH_BlindDetectionMixed1_r18(enc, value.pdcch_BlindDetectionNRDC_r18_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_CA_ParametersNRDC_v1800(Decoder& dec, CA_ParametersNRDC_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_CA_ParametersNR_v1800(dec, value.ca_ParametersNR_ForDC_v1800) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.pdcch_BlindDetectionNRDC_r18_count)) { goto fail; }
if (value.pdcch_BlindDetectionNRDC_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pdcch_BlindDetectionNRDC_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pdcch_BlindDetectionNRDC_r18_count > 0u) {
    value.pdcch_BlindDetectionNRDC_r18_items = (PDCCH_BlindDetectionMixed1_r18*)std::malloc((std::size_t)value.pdcch_BlindDetectionNRDC_r18_count * sizeof(PDCCH_BlindDetectionMixed1_r18));
    if (value.pdcch_BlindDetectionNRDC_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pdcch_BlindDetectionNRDC_r18_items, 0, (std::size_t)value.pdcch_BlindDetectionNRDC_r18_count * sizeof(PDCCH_BlindDetectionMixed1_r18));
}
for (std::uint32_t i = 0; i < value.pdcch_BlindDetectionNRDC_r18_count; ++i) {
    if (Decode_PDCCH_BlindDetectionMixed1_r18(dec, value.pdcch_BlindDetectionNRDC_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CA_ParametersNRDC_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CA_ParametersNRDC_v1800(CA_ParametersNRDC_v1800& value)
{
    if (value.has_ca_ParametersNR_ForDC_v1800) {
        Free_CA_ParametersNR_v1800(value.ca_ParametersNR_ForDC_v1800);
    }
    if (value.has_pdcch_BlindDetectionNRDC_r18) {
        if (value.pdcch_BlindDetectionNRDC_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pdcch_BlindDetectionNRDC_r18_count; ++i) {
                Free_PDCCH_BlindDetectionMixed1_r18(value.pdcch_BlindDetectionNRDC_r18_items[i]);
            }
            std::free(value.pdcch_BlindDetectionNRDC_r18_items);
            value.pdcch_BlindDetectionNRDC_r18_items = nullptr;
        }
        value.pdcch_BlindDetectionNRDC_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_v1800：ASN.1 BandCombination-v1800；源文件第 14381 行；SEQUENCE。
// Encode_BandCombination_v1800 只读不分配；Decode_BandCombination_v1800 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_v1800(Encoder& enc, const BandCombination_v1800& value)
{
    enc.WriteBit(value.has_ca_ParametersNR_v1800);
    enc.WriteBit(value.has_ca_ParametersNRDC_v1800);
    enc.WriteBit(value.has_supportedBandCombListPerBC_SL_U2U_RelayDiscovery_r18);
    enc.WriteBit(value.has_bandList_v1810);
    if (value.has_ca_ParametersNR_v1800) {
        Encode_CA_ParametersNR_v1800(enc, value.ca_ParametersNR_v1800);
    }
    if (value.has_ca_ParametersNRDC_v1800) {
        Encode_CA_ParametersNRDC_v1800(enc, value.ca_ParametersNRDC_v1800);
    }
    if (value.has_supportedBandCombListPerBC_SL_U2U_RelayDiscovery_r18) {
        enc.WriteSemiConstrainedBitString(value.supportedBandCombListPerBC_SL_U2U_RelayDiscovery_r18.bytes, value.supportedBandCombListPerBC_SL_U2U_RelayDiscovery_r18.bitLength, 1, 4294967295u);
    }
    if (value.has_bandList_v1810) {
enc.WriteConstrainedLength(value.bandList_v1810_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.bandList_v1810_count; ++i) {
    Encode_BandParameters_v1810(enc, value.bandList_v1810_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_v1800(Decoder& dec, BandCombination_v1800& value)
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
        if (Decode_CA_ParametersNR_v1800(dec, value.ca_ParametersNR_v1800) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CA_ParametersNRDC_v1800(dec, value.ca_ParametersNRDC_v1800) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedBitString(string_bytes, string_length, 1, 0xFFFFFFFFu)) { goto fail; }
        value.supportedBandCombListPerBC_SL_U2U_RelayDiscovery_r18.bytes = string_bytes;
        value.supportedBandCombListPerBC_SL_U2U_RelayDiscovery_r18.bitLength = string_length;
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.bandList_v1810_count)) { goto fail; }
if (value.bandList_v1810_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.bandList_v1810_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.bandList_v1810_count > 0u) {
    value.bandList_v1810_items = (BandParameters_v1810*)std::malloc((std::size_t)value.bandList_v1810_count * sizeof(BandParameters_v1810));
    if (value.bandList_v1810_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.bandList_v1810_items, 0, (std::size_t)value.bandList_v1810_count * sizeof(BandParameters_v1810));
}
for (std::uint32_t i = 0; i < value.bandList_v1810_count; ++i) {
    if (Decode_BandParameters_v1810(dec, value.bandList_v1810_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_v1800(BandCombination_v1800& value)
{
    if (value.has_ca_ParametersNR_v1800) {
        Free_CA_ParametersNR_v1800(value.ca_ParametersNR_v1800);
    }
    if (value.has_ca_ParametersNRDC_v1800) {
        Free_CA_ParametersNRDC_v1800(value.ca_ParametersNRDC_v1800);
    }
    if (value.has_supportedBandCombListPerBC_SL_U2U_RelayDiscovery_r18) {
        std::free(value.supportedBandCombListPerBC_SL_U2U_RelayDiscovery_r18.bytes);
        value.supportedBandCombListPerBC_SL_U2U_RelayDiscovery_r18.bytes = nullptr;
        value.supportedBandCombListPerBC_SL_U2U_RelayDiscovery_r18.bitLength = 0;
    }
    if (value.has_bandList_v1810) {
        if (value.bandList_v1810_items != nullptr) {
            for (std::uint32_t i = 0; i < value.bandList_v1810_count; ++i) {
                Free_BandParameters_v1810(value.bandList_v1810_items[i]);
            }
            std::free(value.bandList_v1810_items);
            value.bandList_v1810_items = nullptr;
        }
        value.bandList_v1810_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_UplinkTxSwitch_r16_ExtGroup1：ASN.1 BandCombination_UplinkTxSwitch_r16_ExtGroup1；源文件第 14400 行；扩展添加组 [[ ]]。
// Encode_BandCombination_UplinkTxSwitch_r16_ExtGroup1 只读不分配；Decode_BandCombination_UplinkTxSwitch_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_UplinkTxSwitch_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_UplinkTxSwitch_r16_ExtGroup1(Encoder& enc, const BandCombination_UplinkTxSwitch_r16_ExtGroup1& value)
{
    enc.WriteBit(value.has_uplinkTxSwitching_PUSCH_TransCoherence_r16);
    if (value.has_uplinkTxSwitching_PUSCH_TransCoherence_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uplinkTxSwitching_PUSCH_TransCoherence_r16), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_UplinkTxSwitch_r16_ExtGroup1(Decoder& dec, BandCombination_UplinkTxSwitch_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.uplinkTxSwitching_PUSCH_TransCoherence_r16 = (BandCombination_UplinkTxSwitch_r16_ExtGroup1_UplinkTxSwitching_PUSCH_TransCoherence_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_UplinkTxSwitch_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_UplinkTxSwitch_r16_ExtGroup1(BandCombination_UplinkTxSwitch_r16_ExtGroup1& value)
{
    if (value.has_uplinkTxSwitching_PUSCH_TransCoherence_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_UplinkTxSwitch_r16：ASN.1 BandCombination-UplinkTxSwitch-r16；源文件第 14388 行；SEQUENCE。
// Encode_BandCombination_UplinkTxSwitch_r16 只读不分配；Decode_BandCombination_UplinkTxSwitch_r16 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_UplinkTxSwitch_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_UplinkTxSwitch_r16(Encoder& enc, const BandCombination_UplinkTxSwitch_r16& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_bandCombination_v1540);
    enc.WriteBit(value.has_bandCombination_v1560);
    enc.WriteBit(value.has_bandCombination_v1570);
    enc.WriteBit(value.has_bandCombination_v1580);
    enc.WriteBit(value.has_bandCombination_v1590);
    enc.WriteBit(value.has_bandCombination_v1610);
    enc.WriteBit(value.has_uplinkTxSwitching_OptionSupport_r16);
    enc.WriteBit(value.has_uplinkTxSwitching_PowerBoosting_r16);
    Encode_BandCombination(enc, value.bandCombination_r16);
    if (value.has_bandCombination_v1540) {
        Encode_BandCombination_v1540(enc, value.bandCombination_v1540);
    }
    if (value.has_bandCombination_v1560) {
        Encode_BandCombination_v1560(enc, value.bandCombination_v1560);
    }
    if (value.has_bandCombination_v1570) {
        Encode_BandCombination_v1570(enc, value.bandCombination_v1570);
    }
    if (value.has_bandCombination_v1580) {
        Encode_BandCombination_v1580(enc, value.bandCombination_v1580);
    }
    if (value.has_bandCombination_v1590) {
        Encode_BandCombination_v1590(enc, value.bandCombination_v1590);
    }
    if (value.has_bandCombination_v1610) {
        Encode_BandCombination_v1610(enc, value.bandCombination_v1610);
    }
enc.WriteConstrainedLength(value.supportedBandPairListNR_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedBandPairListNR_r16_count; ++i) {
    Encode_ULTxSwitchingBandPair_r16(enc, value.supportedBandPairListNR_r16_items[i]);
}
    if (value.has_uplinkTxSwitching_OptionSupport_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uplinkTxSwitching_OptionSupport_r16), 0, 2);
    }
    if (value.has_uplinkTxSwitching_PowerBoosting_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uplinkTxSwitching_PowerBoosting_r16), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_BandCombination_UplinkTxSwitch_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_UplinkTxSwitch_r16(Decoder& dec, BandCombination_UplinkTxSwitch_r16& value)
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
        if (Decode_BandCombination(dec, value.bandCombination_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_BandCombination_v1540(dec, value.bandCombination_v1540) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombination_v1560(dec, value.bandCombination_v1560) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_BandCombination_v1570(dec, value.bandCombination_v1570) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_BandCombination_v1580(dec, value.bandCombination_v1580) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_BandCombination_v1590(dec, value.bandCombination_v1590) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_BandCombination_v1610(dec, value.bandCombination_v1610) != ErrorCode_Ok) { goto fail; }
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedBandPairListNR_r16_count)) { goto fail; }
if (value.supportedBandPairListNR_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedBandPairListNR_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedBandPairListNR_r16_count > 0u) {
    value.supportedBandPairListNR_r16_items = (ULTxSwitchingBandPair_r16*)std::malloc((std::size_t)value.supportedBandPairListNR_r16_count * sizeof(ULTxSwitchingBandPair_r16));
    if (value.supportedBandPairListNR_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedBandPairListNR_r16_items, 0, (std::size_t)value.supportedBandPairListNR_r16_count * sizeof(ULTxSwitchingBandPair_r16));
}
for (std::uint32_t i = 0; i < value.supportedBandPairListNR_r16_count; ++i) {
    if (Decode_ULTxSwitchingBandPair_r16(dec, value.supportedBandPairListNR_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.uplinkTxSwitching_OptionSupport_r16 = (BandCombination_UplinkTxSwitch_r16_UplinkTxSwitching_OptionSupport_r16)tmp_value;
    }
    if (present_7) {
        value.uplinkTxSwitching_PowerBoosting_r16 = (BandCombination_UplinkTxSwitch_r16_UplinkTxSwitching_PowerBoosting_r16)0;
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
    if (Decode_BandCombination_UplinkTxSwitch_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_BandCombination_UplinkTxSwitch_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_UplinkTxSwitch_r16(BandCombination_UplinkTxSwitch_r16& value)
{
    Free_BandCombination(value.bandCombination_r16);
    if (value.has_bandCombination_v1540) {
        Free_BandCombination_v1540(value.bandCombination_v1540);
    }
    if (value.has_bandCombination_v1560) {
        Free_BandCombination_v1560(value.bandCombination_v1560);
    }
    if (value.has_bandCombination_v1570) {
        Free_BandCombination_v1570(value.bandCombination_v1570);
    }
    if (value.has_bandCombination_v1580) {
        Free_BandCombination_v1580(value.bandCombination_v1580);
    }
    if (value.has_bandCombination_v1590) {
        Free_BandCombination_v1590(value.bandCombination_v1590);
    }
    if (value.has_bandCombination_v1610) {
        Free_BandCombination_v1610(value.bandCombination_v1610);
    }
    if (value.supportedBandPairListNR_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedBandPairListNR_r16_count; ++i) {
            Free_ULTxSwitchingBandPair_r16(value.supportedBandPairListNR_r16_items[i]);
        }
        std::free(value.supportedBandPairListNR_r16_items);
        value.supportedBandPairListNR_r16_items = nullptr;
    }
    value.supportedBandPairListNR_r16_count = 0;
    if (value.has_uplinkTxSwitching_OptionSupport_r16) {
    }
    if (value.has_uplinkTxSwitching_PowerBoosting_r16) {
    }
    if (value.has_extGroup1) {
        Free_BandCombination_UplinkTxSwitch_r16_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_UplinkTxSwitch_v1630：ASN.1 BandCombination-UplinkTxSwitch-v1630；源文件第 14406 行；SEQUENCE。
// Encode_BandCombination_UplinkTxSwitch_v1630 只读不分配；Decode_BandCombination_UplinkTxSwitch_v1630 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_UplinkTxSwitch_v1630 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_UplinkTxSwitch_v1630(Encoder& enc, const BandCombination_UplinkTxSwitch_v1630& value)
{
    enc.WriteBit(value.has_bandCombination_v1630);
    if (value.has_bandCombination_v1630) {
        Encode_BandCombination_v1630(enc, value.bandCombination_v1630);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_UplinkTxSwitch_v1630(Decoder& dec, BandCombination_UplinkTxSwitch_v1630& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombination_v1630(dec, value.bandCombination_v1630) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_UplinkTxSwitch_v1630(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_UplinkTxSwitch_v1630(BandCombination_UplinkTxSwitch_v1630& value)
{
    if (value.has_bandCombination_v1630) {
        Free_BandCombination_v1630(value.bandCombination_v1630);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_UplinkTxSwitch_v1640：ASN.1 BandCombination-UplinkTxSwitch-v1640；源文件第 14410 行；SEQUENCE。
// Encode_BandCombination_UplinkTxSwitch_v1640 只读不分配；Decode_BandCombination_UplinkTxSwitch_v1640 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_UplinkTxSwitch_v1640 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_UplinkTxSwitch_v1640(Encoder& enc, const BandCombination_UplinkTxSwitch_v1640& value)
{
    enc.WriteBit(value.has_bandCombination_v1640);
    if (value.has_bandCombination_v1640) {
        Encode_BandCombination_v1640(enc, value.bandCombination_v1640);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_UplinkTxSwitch_v1640(Decoder& dec, BandCombination_UplinkTxSwitch_v1640& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombination_v1640(dec, value.bandCombination_v1640) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_UplinkTxSwitch_v1640(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_UplinkTxSwitch_v1640(BandCombination_UplinkTxSwitch_v1640& value)
{
    if (value.has_bandCombination_v1640) {
        Free_BandCombination_v1640(value.bandCombination_v1640);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_UplinkTxSwitch_v1650：ASN.1 BandCombination-UplinkTxSwitch-v1650；源文件第 14414 行；SEQUENCE。
// Encode_BandCombination_UplinkTxSwitch_v1650 只读不分配；Decode_BandCombination_UplinkTxSwitch_v1650 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_UplinkTxSwitch_v1650 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_UplinkTxSwitch_v1650(Encoder& enc, const BandCombination_UplinkTxSwitch_v1650& value)
{
    enc.WriteBit(value.has_bandCombination_v1650);
    if (value.has_bandCombination_v1650) {
        Encode_BandCombination_v1650(enc, value.bandCombination_v1650);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_UplinkTxSwitch_v1650(Decoder& dec, BandCombination_UplinkTxSwitch_v1650& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombination_v1650(dec, value.bandCombination_v1650) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_UplinkTxSwitch_v1650(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_UplinkTxSwitch_v1650(BandCombination_UplinkTxSwitch_v1650& value)
{
    if (value.has_bandCombination_v1650) {
        Free_BandCombination_v1650(value.bandCombination_v1650);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_UplinkTxSwitch_v1670：ASN.1 BandCombination-UplinkTxSwitch-v1670；源文件第 14418 行；SEQUENCE。
// Encode_BandCombination_UplinkTxSwitch_v1670 只读不分配；Decode_BandCombination_UplinkTxSwitch_v1670 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_UplinkTxSwitch_v1670 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_UplinkTxSwitch_v1670(Encoder& enc, const BandCombination_UplinkTxSwitch_v1670& value)
{
    enc.WriteBit(value.has_bandCombination_v15g0);
    if (value.has_bandCombination_v15g0) {
        Encode_BandCombination_v15g0(enc, value.bandCombination_v15g0);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_UplinkTxSwitch_v1670(Decoder& dec, BandCombination_UplinkTxSwitch_v1670& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombination_v15g0(dec, value.bandCombination_v15g0) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_UplinkTxSwitch_v1670(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_UplinkTxSwitch_v1670(BandCombination_UplinkTxSwitch_v1670& value)
{
    if (value.has_bandCombination_v15g0) {
        Free_BandCombination_v15g0(value.bandCombination_v15g0);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_UplinkTxSwitch_v1690：ASN.1 BandCombination-UplinkTxSwitch-v1690；源文件第 14422 行；SEQUENCE。
// Encode_BandCombination_UplinkTxSwitch_v1690 只读不分配；Decode_BandCombination_UplinkTxSwitch_v1690 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_UplinkTxSwitch_v1690 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_UplinkTxSwitch_v1690(Encoder& enc, const BandCombination_UplinkTxSwitch_v1690& value)
{
    enc.WriteBit(value.has_bandCombination_v1690);
    if (value.has_bandCombination_v1690) {
        Encode_BandCombination_v1690(enc, value.bandCombination_v1690);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_UplinkTxSwitch_v1690(Decoder& dec, BandCombination_UplinkTxSwitch_v1690& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombination_v1690(dec, value.bandCombination_v1690) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_UplinkTxSwitch_v1690(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_UplinkTxSwitch_v1690(BandCombination_UplinkTxSwitch_v1690& value)
{
    if (value.has_bandCombination_v1690) {
        Free_BandCombination_v1690(value.bandCombination_v1690);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_UplinkTxSwitch_v16a0：ASN.1 BandCombination-UplinkTxSwitch-v16a0；源文件第 14426 行；SEQUENCE。
// Encode_BandCombination_UplinkTxSwitch_v16a0 只读不分配；Decode_BandCombination_UplinkTxSwitch_v16a0 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_UplinkTxSwitch_v16a0 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_UplinkTxSwitch_v16a0(Encoder& enc, const BandCombination_UplinkTxSwitch_v16a0& value)
{
    enc.WriteBit(value.has_bandCombination_v16a0);
    if (value.has_bandCombination_v16a0) {
        Encode_BandCombination_v16a0(enc, value.bandCombination_v16a0);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_UplinkTxSwitch_v16a0(Decoder& dec, BandCombination_UplinkTxSwitch_v16a0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombination_v16a0(dec, value.bandCombination_v16a0) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_UplinkTxSwitch_v16a0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_UplinkTxSwitch_v16a0(BandCombination_UplinkTxSwitch_v16a0& value)
{
    if (value.has_bandCombination_v16a0) {
        Free_BandCombination_v16a0(value.bandCombination_v16a0);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_UplinkTxSwitch_v16e0：ASN.1 BandCombination-UplinkTxSwitch-v16e0；源文件第 14430 行；SEQUENCE。
// Encode_BandCombination_UplinkTxSwitch_v16e0 只读不分配；Decode_BandCombination_UplinkTxSwitch_v16e0 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_UplinkTxSwitch_v16e0 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_UplinkTxSwitch_v16e0(Encoder& enc, const BandCombination_UplinkTxSwitch_v16e0& value)
{
    enc.WriteBit(value.has_bandCombination_v15n0);
    if (value.has_bandCombination_v15n0) {
        Encode_BandCombination_v15n0(enc, value.bandCombination_v15n0);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_UplinkTxSwitch_v16e0(Decoder& dec, BandCombination_UplinkTxSwitch_v16e0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombination_v15n0(dec, value.bandCombination_v15n0) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_UplinkTxSwitch_v16e0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_UplinkTxSwitch_v16e0(BandCombination_UplinkTxSwitch_v16e0& value)
{
    if (value.has_bandCombination_v15n0) {
        Free_BandCombination_v15n0(value.bandCombination_v15n0);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_UplinkTxSwitch_v1700：ASN.1 BandCombination-UplinkTxSwitch-v1700；源文件第 14434 行；SEQUENCE。
// Encode_BandCombination_UplinkTxSwitch_v1700 只读不分配；Decode_BandCombination_UplinkTxSwitch_v1700 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_UplinkTxSwitch_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_UplinkTxSwitch_v1700(Encoder& enc, const BandCombination_UplinkTxSwitch_v1700& value)
{
    enc.WriteBit(value.has_bandCombination_v1700);
    enc.WriteBit(value.has_supportedBandPairListNR_v1700);
    enc.WriteBit(value.has_uplinkTxSwitchingBandParametersList_v1700);
    if (value.has_bandCombination_v1700) {
        Encode_BandCombination_v1700(enc, value.bandCombination_v1700);
    }
    if (value.has_supportedBandPairListNR_v1700) {
enc.WriteConstrainedLength(value.supportedBandPairListNR_v1700_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedBandPairListNR_v1700_count; ++i) {
    Encode_ULTxSwitchingBandPair_v1700(enc, value.supportedBandPairListNR_v1700_items[i]);
}
    }
    if (value.has_uplinkTxSwitchingBandParametersList_v1700) {
enc.WriteConstrainedLength(value.uplinkTxSwitchingBandParametersList_v1700_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.uplinkTxSwitchingBandParametersList_v1700_count; ++i) {
    Encode_UplinkTxSwitchingBandParameters_v1700(enc, value.uplinkTxSwitchingBandParametersList_v1700_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_UplinkTxSwitch_v1700(Decoder& dec, BandCombination_UplinkTxSwitch_v1700& value)
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
        if (Decode_BandCombination_v1700(dec, value.bandCombination_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedBandPairListNR_v1700_count)) { goto fail; }
if (value.supportedBandPairListNR_v1700_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedBandPairListNR_v1700_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedBandPairListNR_v1700_count > 0u) {
    value.supportedBandPairListNR_v1700_items = (ULTxSwitchingBandPair_v1700*)std::malloc((std::size_t)value.supportedBandPairListNR_v1700_count * sizeof(ULTxSwitchingBandPair_v1700));
    if (value.supportedBandPairListNR_v1700_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedBandPairListNR_v1700_items, 0, (std::size_t)value.supportedBandPairListNR_v1700_count * sizeof(ULTxSwitchingBandPair_v1700));
}
for (std::uint32_t i = 0; i < value.supportedBandPairListNR_v1700_count; ++i) {
    if (Decode_ULTxSwitchingBandPair_v1700(dec, value.supportedBandPairListNR_v1700_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.uplinkTxSwitchingBandParametersList_v1700_count)) { goto fail; }
if (value.uplinkTxSwitchingBandParametersList_v1700_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.uplinkTxSwitchingBandParametersList_v1700_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.uplinkTxSwitchingBandParametersList_v1700_count > 0u) {
    value.uplinkTxSwitchingBandParametersList_v1700_items = (UplinkTxSwitchingBandParameters_v1700*)std::malloc((std::size_t)value.uplinkTxSwitchingBandParametersList_v1700_count * sizeof(UplinkTxSwitchingBandParameters_v1700));
    if (value.uplinkTxSwitchingBandParametersList_v1700_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.uplinkTxSwitchingBandParametersList_v1700_items, 0, (std::size_t)value.uplinkTxSwitchingBandParametersList_v1700_count * sizeof(UplinkTxSwitchingBandParameters_v1700));
}
for (std::uint32_t i = 0; i < value.uplinkTxSwitchingBandParametersList_v1700_count; ++i) {
    if (Decode_UplinkTxSwitchingBandParameters_v1700(dec, value.uplinkTxSwitchingBandParametersList_v1700_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_UplinkTxSwitch_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_UplinkTxSwitch_v1700(BandCombination_UplinkTxSwitch_v1700& value)
{
    if (value.has_bandCombination_v1700) {
        Free_BandCombination_v1700(value.bandCombination_v1700);
    }
    if (value.has_supportedBandPairListNR_v1700) {
        if (value.supportedBandPairListNR_v1700_items != nullptr) {
            for (std::uint32_t i = 0; i < value.supportedBandPairListNR_v1700_count; ++i) {
                Free_ULTxSwitchingBandPair_v1700(value.supportedBandPairListNR_v1700_items[i]);
            }
            std::free(value.supportedBandPairListNR_v1700_items);
            value.supportedBandPairListNR_v1700_items = nullptr;
        }
        value.supportedBandPairListNR_v1700_count = 0;
    }
    if (value.has_uplinkTxSwitchingBandParametersList_v1700) {
        if (value.uplinkTxSwitchingBandParametersList_v1700_items != nullptr) {
            for (std::uint32_t i = 0; i < value.uplinkTxSwitchingBandParametersList_v1700_count; ++i) {
                Free_UplinkTxSwitchingBandParameters_v1700(value.uplinkTxSwitchingBandParametersList_v1700_items[i]);
            }
            std::free(value.uplinkTxSwitchingBandParametersList_v1700_items);
            value.uplinkTxSwitchingBandParametersList_v1700_items = nullptr;
        }
        value.uplinkTxSwitchingBandParametersList_v1700_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_UplinkTxSwitch_v1720：ASN.1 BandCombination-UplinkTxSwitch-v1720；源文件第 14442 行；SEQUENCE。
// Encode_BandCombination_UplinkTxSwitch_v1720 只读不分配；Decode_BandCombination_UplinkTxSwitch_v1720 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_UplinkTxSwitch_v1720 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_UplinkTxSwitch_v1720(Encoder& enc, const BandCombination_UplinkTxSwitch_v1720& value)
{
    enc.WriteBit(value.has_bandCombination_v1720);
    enc.WriteBit(value.has_uplinkTxSwitching_OptionSupport2T2T_r17);
    if (value.has_bandCombination_v1720) {
        Encode_BandCombination_v1720(enc, value.bandCombination_v1720);
    }
    if (value.has_uplinkTxSwitching_OptionSupport2T2T_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uplinkTxSwitching_OptionSupport2T2T_r17), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_UplinkTxSwitch_v1720(Decoder& dec, BandCombination_UplinkTxSwitch_v1720& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombination_v1720(dec, value.bandCombination_v1720) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.uplinkTxSwitching_OptionSupport2T2T_r17 = (BandCombination_UplinkTxSwitch_v1720_UplinkTxSwitching_OptionSupport2T2T_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_UplinkTxSwitch_v1720(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_UplinkTxSwitch_v1720(BandCombination_UplinkTxSwitch_v1720& value)
{
    if (value.has_bandCombination_v1720) {
        Free_BandCombination_v1720(value.bandCombination_v1720);
    }
    if (value.has_uplinkTxSwitching_OptionSupport2T2T_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_UplinkTxSwitch_v1730：ASN.1 BandCombination-UplinkTxSwitch-v1730；源文件第 14447 行；SEQUENCE。
// Encode_BandCombination_UplinkTxSwitch_v1730 只读不分配；Decode_BandCombination_UplinkTxSwitch_v1730 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_UplinkTxSwitch_v1730 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_UplinkTxSwitch_v1730(Encoder& enc, const BandCombination_UplinkTxSwitch_v1730& value)
{
    enc.WriteBit(value.has_bandCombination_v1730);
    if (value.has_bandCombination_v1730) {
        Encode_BandCombination_v1730(enc, value.bandCombination_v1730);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_UplinkTxSwitch_v1730(Decoder& dec, BandCombination_UplinkTxSwitch_v1730& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombination_v1730(dec, value.bandCombination_v1730) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_UplinkTxSwitch_v1730(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_UplinkTxSwitch_v1730(BandCombination_UplinkTxSwitch_v1730& value)
{
    if (value.has_bandCombination_v1730) {
        Free_BandCombination_v1730(value.bandCombination_v1730);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_UplinkTxSwitch_v1740：ASN.1 BandCombination-UplinkTxSwitch-v1740；源文件第 14451 行；SEQUENCE。
// Encode_BandCombination_UplinkTxSwitch_v1740 只读不分配；Decode_BandCombination_UplinkTxSwitch_v1740 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_UplinkTxSwitch_v1740 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_UplinkTxSwitch_v1740(Encoder& enc, const BandCombination_UplinkTxSwitch_v1740& value)
{
    enc.WriteBit(value.has_bandCombination_v1740);
    if (value.has_bandCombination_v1740) {
        Encode_BandCombination_v1740(enc, value.bandCombination_v1740);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_UplinkTxSwitch_v1740(Decoder& dec, BandCombination_UplinkTxSwitch_v1740& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombination_v1740(dec, value.bandCombination_v1740) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_UplinkTxSwitch_v1740(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_UplinkTxSwitch_v1740(BandCombination_UplinkTxSwitch_v1740& value)
{
    if (value.has_bandCombination_v1740) {
        Free_BandCombination_v1740(value.bandCombination_v1740);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_UplinkTxSwitch_v1760：ASN.1 BandCombination-UplinkTxSwitch-v1760；源文件第 14455 行；SEQUENCE。
// Encode_BandCombination_UplinkTxSwitch_v1760 只读不分配；Decode_BandCombination_UplinkTxSwitch_v1760 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_UplinkTxSwitch_v1760 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_UplinkTxSwitch_v1760(Encoder& enc, const BandCombination_UplinkTxSwitch_v1760& value)
{
    enc.WriteBit(value.has_bandCombination_v1760);
    if (value.has_bandCombination_v1760) {
        Encode_BandCombination_v1760(enc, value.bandCombination_v1760);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_UplinkTxSwitch_v1760(Decoder& dec, BandCombination_UplinkTxSwitch_v1760& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombination_v1760(dec, value.bandCombination_v1760) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_UplinkTxSwitch_v1760(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_UplinkTxSwitch_v1760(BandCombination_UplinkTxSwitch_v1760& value)
{
    if (value.has_bandCombination_v1760) {
        Free_BandCombination_v1760(value.bandCombination_v1760);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_UplinkTxSwitch_v1770：ASN.1 BandCombination-UplinkTxSwitch-v1770；源文件第 14459 行；SEQUENCE。
// Encode_BandCombination_UplinkTxSwitch_v1770 只读不分配；Decode_BandCombination_UplinkTxSwitch_v1770 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_UplinkTxSwitch_v1770 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_UplinkTxSwitch_v1770(Encoder& enc, const BandCombination_UplinkTxSwitch_v1770& value)
{
    enc.WriteBit(value.has_bandCombination_v1770);
    if (value.has_bandCombination_v1770) {
        Encode_BandCombination_v1770(enc, value.bandCombination_v1770);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_UplinkTxSwitch_v1770(Decoder& dec, BandCombination_UplinkTxSwitch_v1770& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombination_v1770(dec, value.bandCombination_v1770) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_UplinkTxSwitch_v1770(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_UplinkTxSwitch_v1770(BandCombination_UplinkTxSwitch_v1770& value)
{
    if (value.has_bandCombination_v1770) {
        Free_BandCombination_v1770(value.bandCombination_v1770);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_UplinkTxSwitch_v1780：ASN.1 BandCombination-UplinkTxSwitch-v1780；源文件第 14463 行；SEQUENCE。
// Encode_BandCombination_UplinkTxSwitch_v1780 只读不分配；Decode_BandCombination_UplinkTxSwitch_v1780 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_UplinkTxSwitch_v1780 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_UplinkTxSwitch_v1780(Encoder& enc, const BandCombination_UplinkTxSwitch_v1780& value)
{
    enc.WriteBit(value.has_bandCombination_v1780);
    if (value.has_bandCombination_v1780) {
        Encode_BandCombination_v1780(enc, value.bandCombination_v1780);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_UplinkTxSwitch_v1780(Decoder& dec, BandCombination_UplinkTxSwitch_v1780& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombination_v1780(dec, value.bandCombination_v1780) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_UplinkTxSwitch_v1780(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_UplinkTxSwitch_v1780(BandCombination_UplinkTxSwitch_v1780& value)
{
    if (value.has_bandCombination_v1780) {
        Free_BandCombination_v1780(value.bandCombination_v1780);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandCombination_UplinkTxSwitch_v1800：ASN.1 BandCombination-UplinkTxSwitch-v1800；源文件第 14467 行；SEQUENCE。
// Encode_BandCombination_UplinkTxSwitch_v1800 只读不分配；Decode_BandCombination_UplinkTxSwitch_v1800 可能 malloc（失败时内部已释放并清零）；Free_BandCombination_UplinkTxSwitch_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandCombination_UplinkTxSwitch_v1800(Encoder& enc, const BandCombination_UplinkTxSwitch_v1800& value)
{
    enc.WriteBit(value.has_bandCombination_v1800);
    enc.WriteBit(value.has_supportedBandPairListNR_r18);
    enc.WriteBit(value.has_uplinkTxSwitchingMinimumSeparationTime_r18);
    enc.WriteBit(value.has_uplinkTxSwitchingAdditionalPeriodDualUL_List_r18);
    enc.WriteBit(value.has_switchingPeriodRestriction_r18);
    if (value.has_bandCombination_v1800) {
        Encode_BandCombination_v1800(enc, value.bandCombination_v1800);
    }
    if (value.has_supportedBandPairListNR_r18) {
enc.WriteConstrainedLength(value.supportedBandPairListNR_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedBandPairListNR_r18_count; ++i) {
    Encode_ULTxSwitchingBandPair_r18(enc, value.supportedBandPairListNR_r18_items[i]);
}
    }
    if (value.has_uplinkTxSwitchingMinimumSeparationTime_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uplinkTxSwitchingMinimumSeparationTime_r18), 0, 1);
    }
    if (value.has_uplinkTxSwitchingAdditionalPeriodDualUL_List_r18) {
enc.WriteConstrainedLength(value.uplinkTxSwitchingAdditionalPeriodDualUL_List_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.uplinkTxSwitchingAdditionalPeriodDualUL_List_r18_count; ++i) {
    Encode_UplinkTxSwitchingAdditionalPeriodDualUL_r18(enc, value.uplinkTxSwitchingAdditionalPeriodDualUL_List_r18_items[i]);
}
    }
    if (value.has_switchingPeriodRestriction_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.switchingPeriodRestriction_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandCombination_UplinkTxSwitch_v1800(Decoder& dec, BandCombination_UplinkTxSwitch_v1800& value)
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
        if (Decode_BandCombination_v1800(dec, value.bandCombination_v1800) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedBandPairListNR_r18_count)) { goto fail; }
if (value.supportedBandPairListNR_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedBandPairListNR_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedBandPairListNR_r18_count > 0u) {
    value.supportedBandPairListNR_r18_items = (ULTxSwitchingBandPair_r18*)std::malloc((std::size_t)value.supportedBandPairListNR_r18_count * sizeof(ULTxSwitchingBandPair_r18));
    if (value.supportedBandPairListNR_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedBandPairListNR_r18_items, 0, (std::size_t)value.supportedBandPairListNR_r18_count * sizeof(ULTxSwitchingBandPair_r18));
}
for (std::uint32_t i = 0; i < value.supportedBandPairListNR_r18_count; ++i) {
    if (Decode_ULTxSwitchingBandPair_r18(dec, value.supportedBandPairListNR_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.uplinkTxSwitchingMinimumSeparationTime_r18 = (BandCombination_UplinkTxSwitch_v1800_UplinkTxSwitchingMinimumSeparationTime_r18)tmp_value;
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.uplinkTxSwitchingAdditionalPeriodDualUL_List_r18_count)) { goto fail; }
if (value.uplinkTxSwitchingAdditionalPeriodDualUL_List_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.uplinkTxSwitchingAdditionalPeriodDualUL_List_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.uplinkTxSwitchingAdditionalPeriodDualUL_List_r18_count > 0u) {
    value.uplinkTxSwitchingAdditionalPeriodDualUL_List_r18_items = (UplinkTxSwitchingAdditionalPeriodDualUL_r18*)std::malloc((std::size_t)value.uplinkTxSwitchingAdditionalPeriodDualUL_List_r18_count * sizeof(UplinkTxSwitchingAdditionalPeriodDualUL_r18));
    if (value.uplinkTxSwitchingAdditionalPeriodDualUL_List_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.uplinkTxSwitchingAdditionalPeriodDualUL_List_r18_items, 0, (std::size_t)value.uplinkTxSwitchingAdditionalPeriodDualUL_List_r18_count * sizeof(UplinkTxSwitchingAdditionalPeriodDualUL_r18));
}
for (std::uint32_t i = 0; i < value.uplinkTxSwitchingAdditionalPeriodDualUL_List_r18_count; ++i) {
    if (Decode_UplinkTxSwitchingAdditionalPeriodDualUL_r18(dec, value.uplinkTxSwitchingAdditionalPeriodDualUL_List_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_4) {
        value.switchingPeriodRestriction_r18 = (BandCombination_UplinkTxSwitch_v1800_SwitchingPeriodRestriction_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandCombination_UplinkTxSwitch_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandCombination_UplinkTxSwitch_v1800(BandCombination_UplinkTxSwitch_v1800& value)
{
    if (value.has_bandCombination_v1800) {
        Free_BandCombination_v1800(value.bandCombination_v1800);
    }
    if (value.has_supportedBandPairListNR_r18) {
        if (value.supportedBandPairListNR_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.supportedBandPairListNR_r18_count; ++i) {
                Free_ULTxSwitchingBandPair_r18(value.supportedBandPairListNR_r18_items[i]);
            }
            std::free(value.supportedBandPairListNR_r18_items);
            value.supportedBandPairListNR_r18_items = nullptr;
        }
        value.supportedBandPairListNR_r18_count = 0;
    }
    if (value.has_uplinkTxSwitchingMinimumSeparationTime_r18) {
    }
    if (value.has_uplinkTxSwitchingAdditionalPeriodDualUL_List_r18) {
        if (value.uplinkTxSwitchingAdditionalPeriodDualUL_List_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.uplinkTxSwitchingAdditionalPeriodDualUL_List_r18_count; ++i) {
                Free_UplinkTxSwitchingAdditionalPeriodDualUL_r18(value.uplinkTxSwitchingAdditionalPeriodDualUL_List_r18_items[i]);
            }
            std::free(value.uplinkTxSwitchingAdditionalPeriodDualUL_List_r18_items);
            value.uplinkTxSwitchingAdditionalPeriodDualUL_List_r18_items = nullptr;
        }
        value.uplinkTxSwitchingAdditionalPeriodDualUL_List_r18_count = 0;
    }
    if (value.has_switchingPeriodRestriction_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ULTxSwitchingBandPair_r16：ASN.1 ULTxSwitchingBandPair-r16；源文件第 14478 行；SEQUENCE。
// Encode_ULTxSwitchingBandPair_r16 只读不分配；Decode_ULTxSwitchingBandPair_r16 可能 malloc（失败时内部已释放并清零）；Free_ULTxSwitchingBandPair_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ULTxSwitchingBandPair_r16(Encoder& enc, const ULTxSwitchingBandPair_r16& value)
{
    enc.WriteBit(value.has_uplinkTxSwitching_DL_Interruption_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.bandIndexUL1_r16), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.bandIndexUL2_r16), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.uplinkTxSwitchingPeriod_r16), 0, 2);
    if (value.has_uplinkTxSwitching_DL_Interruption_r16) {
        enc.WriteConstrainedBitString(value.uplinkTxSwitching_DL_Interruption_r16.bytes, value.uplinkTxSwitching_DL_Interruption_r16.bitLength, 1, 32);
    }
    return enc.Error();
}

ErrorCode Decode_ULTxSwitchingBandPair_r16(Decoder& dec, ULTxSwitchingBandPair_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.bandIndexUL1_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.bandIndexUL2_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.uplinkTxSwitchingPeriod_r16 = (ULTxSwitchingBandPair_r16_UplinkTxSwitchingPeriod_r16)tmp_value;
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 1, 32)) { goto fail; }
        value.uplinkTxSwitching_DL_Interruption_r16.bytes = string_bytes;
        value.uplinkTxSwitching_DL_Interruption_r16.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ULTxSwitchingBandPair_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ULTxSwitchingBandPair_r16(ULTxSwitchingBandPair_r16& value)
{
    if (value.has_uplinkTxSwitching_DL_Interruption_r16) {
        std::free(value.uplinkTxSwitching_DL_Interruption_r16.bytes);
        value.uplinkTxSwitching_DL_Interruption_r16.bytes = nullptr;
        value.uplinkTxSwitching_DL_Interruption_r16.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ULTxSwitchingBandPair_v1700：ASN.1 ULTxSwitchingBandPair-v1700；源文件第 14485 行；SEQUENCE。
// Encode_ULTxSwitchingBandPair_v1700 只读不分配；Decode_ULTxSwitchingBandPair_v1700 可能 malloc（失败时内部已释放并清零）；Free_ULTxSwitchingBandPair_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ULTxSwitchingBandPair_v1700(Encoder& enc, const ULTxSwitchingBandPair_v1700& value)
{
    enc.WriteBit(value.has_uplinkTxSwitchingPeriod2T2T_r17);
    if (value.has_uplinkTxSwitchingPeriod2T2T_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uplinkTxSwitchingPeriod2T2T_r17), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_ULTxSwitchingBandPair_v1700(Decoder& dec, ULTxSwitchingBandPair_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.uplinkTxSwitchingPeriod2T2T_r17 = (ULTxSwitchingBandPair_v1700_UplinkTxSwitchingPeriod2T2T_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ULTxSwitchingBandPair_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ULTxSwitchingBandPair_v1700(ULTxSwitchingBandPair_v1700& value)
{
    if (value.has_uplinkTxSwitchingPeriod2T2T_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18：ASN.1 uplinkTxSwitchingPeriodForBandPair-r18；源文件第 14495 行；SEQUENCE。
// Encode_ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18 只读不分配；Decode_ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18 可能 malloc（失败时内部已释放并清零）；Free_ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18(Encoder& enc, const ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18& value)
{
    enc.WriteBit(value.has_switchingPeriodFor2T_r18);
    if (value.has_switchingPeriodFor2T_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.switchingPeriodFor2T_r18), 0, 2);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.switchingPeriodFor1T_r18), 0, 2);
    return enc.Error();
}

ErrorCode Decode_ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18(Decoder& dec, ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.switchingPeriodFor2T_r18 = (ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18_SwitchingPeriodFor2T_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.switchingPeriodFor1T_r18 = (ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18_SwitchingPeriodFor1T_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18(ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18& value)
{
    if (value.has_switchingPeriodFor2T_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ULTxSwitchingBandPair_r18：ASN.1 ULTxSwitchingBandPair-r18；源文件第 14489 行；SEQUENCE。
// Encode_ULTxSwitchingBandPair_r18 只读不分配；Decode_ULTxSwitchingBandPair_r18 可能 malloc（失败时内部已释放并清零）；Free_ULTxSwitchingBandPair_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ULTxSwitchingBandPair_r18(Encoder& enc, const ULTxSwitchingBandPair_r18& value)
{
    enc.WriteBit(value.has_uplinkTxSwitching_DL_Interruption_r18);
    enc.WriteBit(value.has_uplinkTxSwitchingPeriodUnaffectedBandDualUL_List_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.bandIndexUL1_r18), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.bandIndexUL2_r18), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.uplinkTxSwitchingOptionForBandPair_r18), 0, 2);
    Encode_ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18(enc, value.uplinkTxSwitchingPeriodForBandPair_r18);
    if (value.has_uplinkTxSwitching_DL_Interruption_r18) {
        enc.WriteConstrainedBitString(value.uplinkTxSwitching_DL_Interruption_r18.bytes, value.uplinkTxSwitching_DL_Interruption_r18.bitLength, 1, 32);
    }
    if (value.has_uplinkTxSwitchingPeriodUnaffectedBandDualUL_List_r18) {
enc.WriteConstrainedLength(value.uplinkTxSwitchingPeriodUnaffectedBandDualUL_List_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.uplinkTxSwitchingPeriodUnaffectedBandDualUL_List_r18_count; ++i) {
    Encode_SwitchingPeriodUnaffectedBandDualUL_r18(enc, value.uplinkTxSwitchingPeriodUnaffectedBandDualUL_List_r18_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_ULTxSwitchingBandPair_r18(Decoder& dec, ULTxSwitchingBandPair_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.bandIndexUL1_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.bandIndexUL2_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.uplinkTxSwitchingOptionForBandPair_r18 = (ULTxSwitchingBandPair_r18_UplinkTxSwitchingOptionForBandPair_r18)tmp_value;
    }
    {
        if (Decode_ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18(dec, value.uplinkTxSwitchingPeriodForBandPair_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 1, 32)) { goto fail; }
        value.uplinkTxSwitching_DL_Interruption_r18.bytes = string_bytes;
        value.uplinkTxSwitching_DL_Interruption_r18.bitLength = string_length;
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.uplinkTxSwitchingPeriodUnaffectedBandDualUL_List_r18_count)) { goto fail; }
if (value.uplinkTxSwitchingPeriodUnaffectedBandDualUL_List_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.uplinkTxSwitchingPeriodUnaffectedBandDualUL_List_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.uplinkTxSwitchingPeriodUnaffectedBandDualUL_List_r18_count > 0u) {
    value.uplinkTxSwitchingPeriodUnaffectedBandDualUL_List_r18_items = (SwitchingPeriodUnaffectedBandDualUL_r18*)std::malloc((std::size_t)value.uplinkTxSwitchingPeriodUnaffectedBandDualUL_List_r18_count * sizeof(SwitchingPeriodUnaffectedBandDualUL_r18));
    if (value.uplinkTxSwitchingPeriodUnaffectedBandDualUL_List_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.uplinkTxSwitchingPeriodUnaffectedBandDualUL_List_r18_items, 0, (std::size_t)value.uplinkTxSwitchingPeriodUnaffectedBandDualUL_List_r18_count * sizeof(SwitchingPeriodUnaffectedBandDualUL_r18));
}
for (std::uint32_t i = 0; i < value.uplinkTxSwitchingPeriodUnaffectedBandDualUL_List_r18_count; ++i) {
    if (Decode_SwitchingPeriodUnaffectedBandDualUL_r18(dec, value.uplinkTxSwitchingPeriodUnaffectedBandDualUL_List_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_ULTxSwitchingBandPair_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ULTxSwitchingBandPair_r18(ULTxSwitchingBandPair_r18& value)
{
    Free_ULTxSwitchingBandPair_r18_UplinkTxSwitchingPeriodForBandPair_r18(value.uplinkTxSwitchingPeriodForBandPair_r18);
    if (value.has_uplinkTxSwitching_DL_Interruption_r18) {
        std::free(value.uplinkTxSwitching_DL_Interruption_r18.bytes);
        value.uplinkTxSwitching_DL_Interruption_r18.bytes = nullptr;
        value.uplinkTxSwitching_DL_Interruption_r18.bitLength = 0;
    }
    if (value.has_uplinkTxSwitchingPeriodUnaffectedBandDualUL_List_r18) {
        if (value.uplinkTxSwitchingPeriodUnaffectedBandDualUL_List_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.uplinkTxSwitchingPeriodUnaffectedBandDualUL_List_r18_count; ++i) {
                Free_SwitchingPeriodUnaffectedBandDualUL_r18(value.uplinkTxSwitchingPeriodUnaffectedBandDualUL_List_r18_items[i]);
            }
            std::free(value.uplinkTxSwitchingPeriodUnaffectedBandDualUL_List_r18_items);
            value.uplinkTxSwitchingPeriodUnaffectedBandDualUL_List_r18_items = nullptr;
        }
        value.uplinkTxSwitchingPeriodUnaffectedBandDualUL_List_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UplinkTxSwitchingBandParameters_v1700：ASN.1 UplinkTxSwitchingBandParameters-v1700；源文件第 14506 行；SEQUENCE。
// Encode_UplinkTxSwitchingBandParameters_v1700 只读不分配；Decode_UplinkTxSwitchingBandParameters_v1700 可能 malloc（失败时内部已释放并清零）；Free_UplinkTxSwitchingBandParameters_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UplinkTxSwitchingBandParameters_v1700(Encoder& enc, const UplinkTxSwitchingBandParameters_v1700& value)
{
    enc.WriteBit(value.has_uplinkTxSwitching2T2T_PUSCH_TransCoherence_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.bandIndex_r17), 1, 32);
    if (value.has_uplinkTxSwitching2T2T_PUSCH_TransCoherence_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uplinkTxSwitching2T2T_PUSCH_TransCoherence_r17), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_UplinkTxSwitchingBandParameters_v1700(Decoder& dec, UplinkTxSwitchingBandParameters_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.bandIndex_r17 = (int64_t)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.uplinkTxSwitching2T2T_PUSCH_TransCoherence_r17 = (UplinkTxSwitchingBandParameters_v1700_UplinkTxSwitching2T2T_PUSCH_TransCoherence_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UplinkTxSwitchingBandParameters_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkTxSwitchingBandParameters_v1700(UplinkTxSwitchingBandParameters_v1700& value)
{
    if (value.has_uplinkTxSwitching2T2T_PUSCH_TransCoherence_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18：ASN.1 uplinkTxSwitchingBetweenBandPairs-r18/anotherBandPairOrBand-r18；源文件第 14515 行；CHOICE。
// Encode_UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18 只读不分配；Decode_UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18 可能 malloc（失败时内部已释放并清零）；Free_UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18(Encoder& enc, const UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18_Tag_bandPairIndex2_r18:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.bandPairIndex2_r18), 1, 32);
        break;
    case UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18_Tag_bandIndex_r18:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.bandIndex_r18), 1, 32);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18(Decoder& dec, UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18_Tag)root_index;
    switch (value.tag) {
    case UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18_Tag_bandPairIndex2_r18: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.u.bandPairIndex2_r18 = (int64_t)tmp_value;
        break;
    }
    case UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18_Tag_bandIndex_r18: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.u.bandIndex_r18 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18(UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18& value)
{
    switch (value.tag) {
    case UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18_Tag_bandPairIndex2_r18:
        break;
    case UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18_Tag_bandIndex_r18:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18：ASN.1 uplinkTxSwitchingBetweenBandPairs-r18；源文件第 14513 行；SEQUENCE。
// Encode_UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18 只读不分配；Decode_UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18 可能 malloc（失败时内部已释放并清零）；Free_UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18(Encoder& enc, const UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.bandPairIndex1_r18), 1, 32);
    Encode_UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18(enc, value.anotherBandPairOrBand_r18);
    return enc.Error();
}

ErrorCode Decode_UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18(Decoder& dec, UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.bandPairIndex1_r18 = (int64_t)tmp_value;
    }
    {
        if (Decode_UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18(dec, value.anotherBandPairOrBand_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18(UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18& value)
{
    Free_UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18_AnotherBandPairOrBand_r18(value.anotherBandPairOrBand_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UplinkTxSwitchingAdditionalPeriodDualUL_r18：ASN.1 UplinkTxSwitchingAdditionalPeriodDualUL-r18；源文件第 14512 行；SEQUENCE。
// Encode_UplinkTxSwitchingAdditionalPeriodDualUL_r18 只读不分配；Decode_UplinkTxSwitchingAdditionalPeriodDualUL_r18 可能 malloc（失败时内部已释放并清零）；Free_UplinkTxSwitchingAdditionalPeriodDualUL_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UplinkTxSwitchingAdditionalPeriodDualUL_r18(Encoder& enc, const UplinkTxSwitchingAdditionalPeriodDualUL_r18& value)
{
    Encode_UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18(enc, value.uplinkTxSwitchingBetweenBandPairs_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.switchingAdditionalPeriodDualUL_r18), 0, 2);
    return enc.Error();
}

ErrorCode Decode_UplinkTxSwitchingAdditionalPeriodDualUL_r18(Decoder& dec, UplinkTxSwitchingAdditionalPeriodDualUL_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18(dec, value.uplinkTxSwitchingBetweenBandPairs_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.switchingAdditionalPeriodDualUL_r18 = (UplinkTxSwitchingAdditionalPeriodDualUL_r18_SwitchingAdditionalPeriodDualUL_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UplinkTxSwitchingAdditionalPeriodDualUL_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkTxSwitchingAdditionalPeriodDualUL_r18(UplinkTxSwitchingAdditionalPeriodDualUL_r18& value)
{
    Free_UplinkTxSwitchingAdditionalPeriodDualUL_r18_UplinkTxSwitchingBetweenBandPairs_r18(value.uplinkTxSwitchingBetweenBandPairs_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18：ASN.1 periodUnaffectedBandDualUL-r18；源文件第 14526 行；CHOICE。
// Encode_SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18 只读不分配；Decode_SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18 可能 malloc（失败时内部已释放并清零）；Free_SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18(Encoder& enc, const SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18_Tag_maintainedUL_Trans_r18:
        (void)0;
        break;
    case SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18_Tag_periodOnULBands_r18:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.periodOnULBands_r18), 0, 2);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18(Decoder& dec, SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18_Tag)root_index;
    switch (value.tag) {
    case SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18_Tag_maintainedUL_Trans_r18: {
        (void)0;
        break;
    }
    case SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18_Tag_periodOnULBands_r18: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.u.periodOnULBands_r18 = (SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18_PeriodOnULBands_r18)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18(SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18& value)
{
    switch (value.tag) {
    case SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18_Tag_maintainedUL_Trans_r18:
        break;
    case SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18_Tag_periodOnULBands_r18:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SwitchingPeriodUnaffectedBandDualUL_r18：ASN.1 SwitchingPeriodUnaffectedBandDualUL-r18；源文件第 14524 行；SEQUENCE。
// Encode_SwitchingPeriodUnaffectedBandDualUL_r18 只读不分配；Decode_SwitchingPeriodUnaffectedBandDualUL_r18 可能 malloc（失败时内部已释放并清零）；Free_SwitchingPeriodUnaffectedBandDualUL_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SwitchingPeriodUnaffectedBandDualUL_r18(Encoder& enc, const SwitchingPeriodUnaffectedBandDualUL_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.bandIndexUnaffected_r18), 1, 32);
    Encode_SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18(enc, value.periodUnaffectedBandDualUL_r18);
    return enc.Error();
}

ErrorCode Decode_SwitchingPeriodUnaffectedBandDualUL_r18(Decoder& dec, SwitchingPeriodUnaffectedBandDualUL_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.bandIndexUnaffected_r18 = (int64_t)tmp_value;
    }
    {
        if (Decode_SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18(dec, value.periodUnaffectedBandDualUL_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SwitchingPeriodUnaffectedBandDualUL_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SwitchingPeriodUnaffectedBandDualUL_r18(SwitchingPeriodUnaffectedBandDualUL_r18& value)
{
    Free_SwitchingPeriodUnaffectedBandDualUL_r18_PeriodUnaffectedBandDualUL_r18(value.periodUnaffectedBandDualUL_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParameters_Eutra：ASN.1 eutra；源文件第 14534 行；SEQUENCE。
// Encode_BandParameters_Eutra 只读不分配；Decode_BandParameters_Eutra 可能 malloc（失败时内部已释放并清零）；Free_BandParameters_Eutra 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParameters_Eutra(Encoder& enc, const BandParameters_Eutra& value)
{
    enc.WriteBit(value.has_ca_BandwidthClassDL_EUTRA);
    enc.WriteBit(value.has_ca_BandwidthClassUL_EUTRA);
    enc.WriteConstrainedInteger((std::int64_t)(value.bandEUTRA), 1, 256);
    if (value.has_ca_BandwidthClassDL_EUTRA) {
        {
            const std::int64_t enum_value = (std::int64_t)(value.ca_BandwidthClassDL_EUTRA);
            if (enum_value < 0) {
                return enc.Fail(ErrorCode_InvalidEnumValue);
            }
            if (enum_value < 6) {
                enc.WriteBit(false);
                enc.WriteConstrainedInteger(enum_value, 0, 5);
            } else {
                enc.WriteBit(true);
                enc.WriteNormallySmallNonNegative((std::uint32_t)(enum_value - 6));
            }
        }
    }
    if (value.has_ca_BandwidthClassUL_EUTRA) {
        {
            const std::int64_t enum_value = (std::int64_t)(value.ca_BandwidthClassUL_EUTRA);
            if (enum_value < 0) {
                return enc.Fail(ErrorCode_InvalidEnumValue);
            }
            if (enum_value < 6) {
                enc.WriteBit(false);
                enc.WriteConstrainedInteger(enum_value, 0, 5);
            } else {
                enc.WriteBit(true);
                enc.WriteNormallySmallNonNegative((std::uint32_t)(enum_value - 6));
            }
        }
    }
    return enc.Error();
}

ErrorCode Decode_BandParameters_Eutra(Decoder& dec, BandParameters_Eutra& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 256, tmp_value)) { goto fail; }
        value.bandEUTRA = (FreqBandIndicatorEUTRA)tmp_value;
    }
    if (present_0) {
        bool enum_extension = false;
        if (!dec.ReadBit(enum_extension)) { goto fail; }
        std::int64_t enum_value = 0;
        if (!enum_extension) {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 5, root_index)) { goto fail; }
    enum_value = root_index;
        } else {
    std::uint32_t extension_index = 0;
    if (!dec.ReadNormallySmallNonNegative(extension_index)) { goto fail; }
    enum_value = (std::int64_t)6 + (std::int64_t)extension_index;
        }
        value.ca_BandwidthClassDL_EUTRA = (CA_BandwidthClassEUTRA)enum_value;
    }
    if (present_1) {
        bool enum_extension = false;
        if (!dec.ReadBit(enum_extension)) { goto fail; }
        std::int64_t enum_value = 0;
        if (!enum_extension) {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 5, root_index)) { goto fail; }
    enum_value = root_index;
        } else {
    std::uint32_t extension_index = 0;
    if (!dec.ReadNormallySmallNonNegative(extension_index)) { goto fail; }
    enum_value = (std::int64_t)6 + (std::int64_t)extension_index;
        }
        value.ca_BandwidthClassUL_EUTRA = (CA_BandwidthClassEUTRA)enum_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParameters_Eutra(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParameters_Eutra(BandParameters_Eutra& value)
{
    if (value.has_ca_BandwidthClassDL_EUTRA) {
    }
    if (value.has_ca_BandwidthClassUL_EUTRA) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParameters_Nr：ASN.1 nr；源文件第 14539 行；SEQUENCE。
// Encode_BandParameters_Nr 只读不分配；Decode_BandParameters_Nr 可能 malloc（失败时内部已释放并清零）；Free_BandParameters_Nr 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParameters_Nr(Encoder& enc, const BandParameters_Nr& value)
{
    enc.WriteBit(value.has_ca_BandwidthClassDL_NR);
    enc.WriteBit(value.has_ca_BandwidthClassUL_NR);
    enc.WriteConstrainedInteger((std::int64_t)(value.bandNR), 1, 1024);
    if (value.has_ca_BandwidthClassDL_NR) {
        {
            const std::int64_t enum_value = (std::int64_t)(value.ca_BandwidthClassDL_NR);
            if (enum_value < 0) {
                return enc.Fail(ErrorCode_InvalidEnumValue);
            }
            if (enum_value < 17) {
                enc.WriteBit(false);
                enc.WriteConstrainedInteger(enum_value, 0, 16);
            } else {
                enc.WriteBit(true);
                enc.WriteNormallySmallNonNegative((std::uint32_t)(enum_value - 17));
            }
        }
    }
    if (value.has_ca_BandwidthClassUL_NR) {
        {
            const std::int64_t enum_value = (std::int64_t)(value.ca_BandwidthClassUL_NR);
            if (enum_value < 0) {
                return enc.Fail(ErrorCode_InvalidEnumValue);
            }
            if (enum_value < 17) {
                enc.WriteBit(false);
                enc.WriteConstrainedInteger(enum_value, 0, 16);
            } else {
                enc.WriteBit(true);
                enc.WriteNormallySmallNonNegative((std::uint32_t)(enum_value - 17));
            }
        }
    }
    return enc.Error();
}

ErrorCode Decode_BandParameters_Nr(Decoder& dec, BandParameters_Nr& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 1024, tmp_value)) { goto fail; }
        value.bandNR = (FreqBandIndicatorNR)tmp_value;
    }
    if (present_0) {
        bool enum_extension = false;
        if (!dec.ReadBit(enum_extension)) { goto fail; }
        std::int64_t enum_value = 0;
        if (!enum_extension) {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 16, root_index)) { goto fail; }
    enum_value = root_index;
        } else {
    std::uint32_t extension_index = 0;
    if (!dec.ReadNormallySmallNonNegative(extension_index)) { goto fail; }
    enum_value = (std::int64_t)17 + (std::int64_t)extension_index;
        }
        value.ca_BandwidthClassDL_NR = (CA_BandwidthClassNR)enum_value;
    }
    if (present_1) {
        bool enum_extension = false;
        if (!dec.ReadBit(enum_extension)) { goto fail; }
        std::int64_t enum_value = 0;
        if (!enum_extension) {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 16, root_index)) { goto fail; }
    enum_value = root_index;
        } else {
    std::uint32_t extension_index = 0;
    if (!dec.ReadNormallySmallNonNegative(extension_index)) { goto fail; }
    enum_value = (std::int64_t)17 + (std::int64_t)extension_index;
        }
        value.ca_BandwidthClassUL_NR = (CA_BandwidthClassNR)enum_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParameters_Nr(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParameters_Nr(BandParameters_Nr& value)
{
    if (value.has_ca_BandwidthClassDL_NR) {
    }
    if (value.has_ca_BandwidthClassUL_NR) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParameters：ASN.1 BandParameters；源文件第 14533 行；CHOICE。
// Encode_BandParameters 只读不分配；Decode_BandParameters 可能 malloc（失败时内部已释放并清零）；Free_BandParameters 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParameters(Encoder& enc, const BandParameters& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case BandParameters_Tag_eutra:
        Encode_BandParameters_Eutra(enc, value.u.eutra);
        break;
    case BandParameters_Tag_nr:
        Encode_BandParameters_Nr(enc, value.u.nr);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_BandParameters(Decoder& dec, BandParameters& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (BandParameters_Tag)root_index;
    switch (value.tag) {
    case BandParameters_Tag_eutra: {
        if (Decode_BandParameters_Eutra(dec, value.u.eutra) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case BandParameters_Tag_nr: {
        if (Decode_BandParameters_Nr(dec, value.u.nr) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParameters(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParameters(BandParameters& value)
{
    switch (value.tag) {
    case BandParameters_Tag_eutra:
        Free_BandParameters_Eutra(value.u.eutra);
        break;
    case BandParameters_Tag_nr:
        Free_BandParameters_Nr(value.u.nr);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParameters_v1540_Srs_CarrierSwitch_Nr：ASN.1 srs-CarrierSwitch/nr；源文件第 14548 行；SEQUENCE。
// Encode_BandParameters_v1540_Srs_CarrierSwitch_Nr 只读不分配；Decode_BandParameters_v1540_Srs_CarrierSwitch_Nr 可能 malloc（失败时内部已释放并清零）；Free_BandParameters_v1540_Srs_CarrierSwitch_Nr 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParameters_v1540_Srs_CarrierSwitch_Nr(Encoder& enc, const BandParameters_v1540_Srs_CarrierSwitch_Nr& value)
{
enc.WriteConstrainedLength(value.srs_SwitchingTimesListNR_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.srs_SwitchingTimesListNR_count; ++i) {
    Encode_SRS_SwitchingTimeNR(enc, value.srs_SwitchingTimesListNR_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_BandParameters_v1540_Srs_CarrierSwitch_Nr(Decoder& dec, BandParameters_v1540_Srs_CarrierSwitch_Nr& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.srs_SwitchingTimesListNR_count)) { goto fail; }
if (value.srs_SwitchingTimesListNR_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.srs_SwitchingTimesListNR_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.srs_SwitchingTimesListNR_count > 0u) {
    value.srs_SwitchingTimesListNR_items = (SRS_SwitchingTimeNR*)std::malloc((std::size_t)value.srs_SwitchingTimesListNR_count * sizeof(SRS_SwitchingTimeNR));
    if (value.srs_SwitchingTimesListNR_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.srs_SwitchingTimesListNR_items, 0, (std::size_t)value.srs_SwitchingTimesListNR_count * sizeof(SRS_SwitchingTimeNR));
}
for (std::uint32_t i = 0; i < value.srs_SwitchingTimesListNR_count; ++i) {
    if (Decode_SRS_SwitchingTimeNR(dec, value.srs_SwitchingTimesListNR_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParameters_v1540_Srs_CarrierSwitch_Nr(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParameters_v1540_Srs_CarrierSwitch_Nr(BandParameters_v1540_Srs_CarrierSwitch_Nr& value)
{
    if (value.srs_SwitchingTimesListNR_items != nullptr) {
        for (std::uint32_t i = 0; i < value.srs_SwitchingTimesListNR_count; ++i) {
            Free_SRS_SwitchingTimeNR(value.srs_SwitchingTimesListNR_items[i]);
        }
        std::free(value.srs_SwitchingTimesListNR_items);
        value.srs_SwitchingTimesListNR_items = nullptr;
    }
    value.srs_SwitchingTimesListNR_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParameters_v1540_Srs_CarrierSwitch_Eutra：ASN.1 srs-CarrierSwitch/eutra；源文件第 14551 行；SEQUENCE。
// Encode_BandParameters_v1540_Srs_CarrierSwitch_Eutra 只读不分配；Decode_BandParameters_v1540_Srs_CarrierSwitch_Eutra 可能 malloc（失败时内部已释放并清零）；Free_BandParameters_v1540_Srs_CarrierSwitch_Eutra 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParameters_v1540_Srs_CarrierSwitch_Eutra(Encoder& enc, const BandParameters_v1540_Srs_CarrierSwitch_Eutra& value)
{
enc.WriteConstrainedLength(value.srs_SwitchingTimesListEUTRA_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.srs_SwitchingTimesListEUTRA_count; ++i) {
    Encode_SRS_SwitchingTimeEUTRA(enc, value.srs_SwitchingTimesListEUTRA_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_BandParameters_v1540_Srs_CarrierSwitch_Eutra(Decoder& dec, BandParameters_v1540_Srs_CarrierSwitch_Eutra& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.srs_SwitchingTimesListEUTRA_count)) { goto fail; }
if (value.srs_SwitchingTimesListEUTRA_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.srs_SwitchingTimesListEUTRA_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.srs_SwitchingTimesListEUTRA_count > 0u) {
    value.srs_SwitchingTimesListEUTRA_items = (SRS_SwitchingTimeEUTRA*)std::malloc((std::size_t)value.srs_SwitchingTimesListEUTRA_count * sizeof(SRS_SwitchingTimeEUTRA));
    if (value.srs_SwitchingTimesListEUTRA_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.srs_SwitchingTimesListEUTRA_items, 0, (std::size_t)value.srs_SwitchingTimesListEUTRA_count * sizeof(SRS_SwitchingTimeEUTRA));
}
for (std::uint32_t i = 0; i < value.srs_SwitchingTimesListEUTRA_count; ++i) {
    if (Decode_SRS_SwitchingTimeEUTRA(dec, value.srs_SwitchingTimesListEUTRA_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParameters_v1540_Srs_CarrierSwitch_Eutra(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParameters_v1540_Srs_CarrierSwitch_Eutra(BandParameters_v1540_Srs_CarrierSwitch_Eutra& value)
{
    if (value.srs_SwitchingTimesListEUTRA_items != nullptr) {
        for (std::uint32_t i = 0; i < value.srs_SwitchingTimesListEUTRA_count; ++i) {
            Free_SRS_SwitchingTimeEUTRA(value.srs_SwitchingTimesListEUTRA_items[i]);
        }
        std::free(value.srs_SwitchingTimesListEUTRA_items);
        value.srs_SwitchingTimesListEUTRA_items = nullptr;
    }
    value.srs_SwitchingTimesListEUTRA_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParameters_v1540_Srs_CarrierSwitch：ASN.1 srs-CarrierSwitch；源文件第 14547 行；CHOICE。
// Encode_BandParameters_v1540_Srs_CarrierSwitch 只读不分配；Decode_BandParameters_v1540_Srs_CarrierSwitch 可能 malloc（失败时内部已释放并清零）；Free_BandParameters_v1540_Srs_CarrierSwitch 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParameters_v1540_Srs_CarrierSwitch(Encoder& enc, const BandParameters_v1540_Srs_CarrierSwitch& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case BandParameters_v1540_Srs_CarrierSwitch_Tag_nr:
        Encode_BandParameters_v1540_Srs_CarrierSwitch_Nr(enc, value.u.nr);
        break;
    case BandParameters_v1540_Srs_CarrierSwitch_Tag_eutra:
        Encode_BandParameters_v1540_Srs_CarrierSwitch_Eutra(enc, value.u.eutra);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_BandParameters_v1540_Srs_CarrierSwitch(Decoder& dec, BandParameters_v1540_Srs_CarrierSwitch& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (BandParameters_v1540_Srs_CarrierSwitch_Tag)root_index;
    switch (value.tag) {
    case BandParameters_v1540_Srs_CarrierSwitch_Tag_nr: {
        if (Decode_BandParameters_v1540_Srs_CarrierSwitch_Nr(dec, value.u.nr) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case BandParameters_v1540_Srs_CarrierSwitch_Tag_eutra: {
        if (Decode_BandParameters_v1540_Srs_CarrierSwitch_Eutra(dec, value.u.eutra) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParameters_v1540_Srs_CarrierSwitch(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParameters_v1540_Srs_CarrierSwitch(BandParameters_v1540_Srs_CarrierSwitch& value)
{
    switch (value.tag) {
    case BandParameters_v1540_Srs_CarrierSwitch_Tag_nr:
        Free_BandParameters_v1540_Srs_CarrierSwitch_Nr(value.u.nr);
        break;
    case BandParameters_v1540_Srs_CarrierSwitch_Tag_eutra:
        Free_BandParameters_v1540_Srs_CarrierSwitch_Eutra(value.u.eutra);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParameters_v1540_Srs_TxSwitch：ASN.1 srs-TxSwitch；源文件第 14555 行；SEQUENCE。
// Encode_BandParameters_v1540_Srs_TxSwitch 只读不分配；Decode_BandParameters_v1540_Srs_TxSwitch 可能 malloc（失败时内部已释放并清零）；Free_BandParameters_v1540_Srs_TxSwitch 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParameters_v1540_Srs_TxSwitch(Encoder& enc, const BandParameters_v1540_Srs_TxSwitch& value)
{
    enc.WriteBit(value.has_txSwitchImpactToRx);
    enc.WriteBit(value.has_txSwitchWithAnotherBand);
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedSRS_TxPortSwitch), 0, 7);
    if (value.has_txSwitchImpactToRx) {
        enc.WriteConstrainedInteger((std::int64_t)(value.txSwitchImpactToRx), 1, 32);
    }
    if (value.has_txSwitchWithAnotherBand) {
        enc.WriteConstrainedInteger((std::int64_t)(value.txSwitchWithAnotherBand), 1, 32);
    }
    return enc.Error();
}

ErrorCode Decode_BandParameters_v1540_Srs_TxSwitch(Decoder& dec, BandParameters_v1540_Srs_TxSwitch& value)
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
        value.supportedSRS_TxPortSwitch = (BandParameters_v1540_Srs_TxSwitch_SupportedSRS_TxPortSwitch)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.txSwitchImpactToRx = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.txSwitchWithAnotherBand = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParameters_v1540_Srs_TxSwitch(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParameters_v1540_Srs_TxSwitch(BandParameters_v1540_Srs_TxSwitch& value)
{
    if (value.has_txSwitchImpactToRx) {
    }
    if (value.has_txSwitchWithAnotherBand) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParameters_v1540：ASN.1 BandParameters-v1540；源文件第 14546 行；SEQUENCE。
// Encode_BandParameters_v1540 只读不分配；Decode_BandParameters_v1540 可能 malloc（失败时内部已释放并清零）；Free_BandParameters_v1540 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParameters_v1540(Encoder& enc, const BandParameters_v1540& value)
{
    enc.WriteBit(value.has_srs_CarrierSwitch);
    enc.WriteBit(value.has_srs_TxSwitch);
    if (value.has_srs_CarrierSwitch) {
        Encode_BandParameters_v1540_Srs_CarrierSwitch(enc, value.srs_CarrierSwitch);
    }
    if (value.has_srs_TxSwitch) {
        Encode_BandParameters_v1540_Srs_TxSwitch(enc, value.srs_TxSwitch);
    }
    return enc.Error();
}

ErrorCode Decode_BandParameters_v1540(Decoder& dec, BandParameters_v1540& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_BandParameters_v1540_Srs_CarrierSwitch(dec, value.srs_CarrierSwitch) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandParameters_v1540_Srs_TxSwitch(dec, value.srs_TxSwitch) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParameters_v1540(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParameters_v1540(BandParameters_v1540& value)
{
    if (value.has_srs_CarrierSwitch) {
        Free_BandParameters_v1540_Srs_CarrierSwitch(value.srs_CarrierSwitch);
    }
    if (value.has_srs_TxSwitch) {
        Free_BandParameters_v1540_Srs_TxSwitch(value.srs_TxSwitch);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParameters_v1610_Srs_TxSwitch_v1610：ASN.1 srs-TxSwitch-v1610；源文件第 14563 行；SEQUENCE。
// Encode_BandParameters_v1610_Srs_TxSwitch_v1610 只读不分配；Decode_BandParameters_v1610_Srs_TxSwitch_v1610 可能 malloc（失败时内部已释放并清零）；Free_BandParameters_v1610_Srs_TxSwitch_v1610 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParameters_v1610_Srs_TxSwitch_v1610(Encoder& enc, const BandParameters_v1610_Srs_TxSwitch_v1610& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedSRS_TxPortSwitch_v1610), 0, 5);
    return enc.Error();
}

ErrorCode Decode_BandParameters_v1610_Srs_TxSwitch_v1610(Decoder& dec, BandParameters_v1610_Srs_TxSwitch_v1610& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.supportedSRS_TxPortSwitch_v1610 = (BandParameters_v1610_Srs_TxSwitch_v1610_SupportedSRS_TxPortSwitch_v1610)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParameters_v1610_Srs_TxSwitch_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParameters_v1610_Srs_TxSwitch_v1610(BandParameters_v1610_Srs_TxSwitch_v1610& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParameters_v1610：ASN.1 BandParameters-v1610；源文件第 14562 行；SEQUENCE。
// Encode_BandParameters_v1610 只读不分配；Decode_BandParameters_v1610 可能 malloc（失败时内部已释放并清零）；Free_BandParameters_v1610 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParameters_v1610(Encoder& enc, const BandParameters_v1610& value)
{
    enc.WriteBit(value.has_srs_TxSwitch_v1610);
    if (value.has_srs_TxSwitch_v1610) {
        Encode_BandParameters_v1610_Srs_TxSwitch_v1610(enc, value.srs_TxSwitch_v1610);
    }
    return enc.Error();
}

ErrorCode Decode_BandParameters_v1610(Decoder& dec, BandParameters_v1610& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BandParameters_v1610_Srs_TxSwitch_v1610(dec, value.srs_TxSwitch_v1610) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParameters_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParameters_v1610(BandParameters_v1610& value)
{
    if (value.has_srs_TxSwitch_v1610) {
        Free_BandParameters_v1610_Srs_TxSwitch_v1610(value.srs_TxSwitch_v1610);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandParameters_v1710_Srs_AntennaSwitchingBeyond4RX_r17：ASN.1 srs-AntennaSwitchingBeyond4RX-r17；源文件第 14571 行；SEQUENCE。
// Encode_BandParameters_v1710_Srs_AntennaSwitchingBeyond4RX_r17 只读不分配；Decode_BandParameters_v1710_Srs_AntennaSwitchingBeyond4RX_r17 可能 malloc（失败时内部已释放并清零）；Free_BandParameters_v1710_Srs_AntennaSwitchingBeyond4RX_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandParameters_v1710_Srs_AntennaSwitchingBeyond4RX_r17(Encoder& enc, const BandParameters_v1710_Srs_AntennaSwitchingBeyond4RX_r17& value)
{
    enc.WriteBit(value.has_entryNumberAffectBeyond4Rx_r17);
    enc.WriteBit(value.has_entryNumberSwitchBeyond4Rx_r17);
    enc.WriteFixedBitString(value.supportedSRS_TxPortSwitchBeyond4Rx_r17.bytes, value.supportedSRS_TxPortSwitchBeyond4Rx_r17.bitLength, 11, 11);
    if (value.has_entryNumberAffectBeyond4Rx_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.entryNumberAffectBeyond4Rx_r17), 1, 32);
    }
    if (value.has_entryNumberSwitchBeyond4Rx_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.entryNumberSwitchBeyond4Rx_r17), 1, 32);
    }
    return enc.Error();
}

ErrorCode Decode_BandParameters_v1710_Srs_AntennaSwitchingBeyond4RX_r17(Decoder& dec, BandParameters_v1710_Srs_AntennaSwitchingBeyond4RX_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 11)) { goto fail; }
        string_length = 11;
        value.supportedSRS_TxPortSwitchBeyond4Rx_r17.bytes = string_bytes;
        value.supportedSRS_TxPortSwitchBeyond4Rx_r17.bitLength = string_length;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.entryNumberAffectBeyond4Rx_r17 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.entryNumberSwitchBeyond4Rx_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandParameters_v1710_Srs_AntennaSwitchingBeyond4RX_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandParameters_v1710_Srs_AntennaSwitchingBeyond4RX_r17(BandParameters_v1710_Srs_AntennaSwitchingBeyond4RX_r17& value)
{
    std::free(value.supportedSRS_TxPortSwitchBeyond4Rx_r17.bytes);
    value.supportedSRS_TxPortSwitchBeyond4Rx_r17.bytes = nullptr;
    value.supportedSRS_TxPortSwitchBeyond4Rx_r17.bitLength = 0;
    if (value.has_entryNumberAffectBeyond4Rx_r17) {
    }
    if (value.has_entryNumberSwitchBeyond4Rx_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
