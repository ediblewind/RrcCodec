/* ============================================================================
 * src/generated/codec_part013.cpp — 生成的编解码函数
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
// SL_QuantityConfig_r16：ASN.1 SL-QuantityConfig-r16；源文件第 22844 行；SEQUENCE。
// Encode_SL_QuantityConfig_r16 只读不分配；Decode_SL_QuantityConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_QuantityConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_QuantityConfig_r16(Encoder& enc, const SL_QuantityConfig_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.sl_FilterCoefficientDMRS_r16 != FilterCoefficient_fc4);
    if (value.sl_FilterCoefficientDMRS_r16 != FilterCoefficient_fc4) {
        {
            const std::int64_t enum_value = (std::int64_t)(value.sl_FilterCoefficientDMRS_r16);
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
    }
    return enc.Error();
}

ErrorCode Decode_SL_QuantityConfig_r16(Decoder& dec, SL_QuantityConfig_r16& value)
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
        value.sl_FilterCoefficientDMRS_r16 = (FilterCoefficient)enum_value;
    } else {
        value.sl_FilterCoefficientDMRS_r16 = FilterCoefficient_fc4;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_QuantityConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_QuantityConfig_r16(SL_QuantityConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ReportConfigList_r16：ASN.1 SL-ReportConfigList-r16；源文件第 22925 行；SEQUENCE OF。
// Encode_SL_ReportConfigList_r16 只读不分配；Decode_SL_ReportConfigList_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_ReportConfigList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ReportConfigList_r16(Encoder& enc, const SL_ReportConfigList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 64u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SL_ReportConfigInfo_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SL_ReportConfigList_r16(Decoder& dec, SL_ReportConfigList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 64u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 64u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_ReportConfigInfo_r16*)std::malloc((std::size_t)value.count * sizeof(SL_ReportConfigInfo_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_ReportConfigInfo_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SL_ReportConfigInfo_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_ReportConfigList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ReportConfigList_r16(SL_ReportConfigList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SL_ReportConfigInfo_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_MeasConfigCommon_r16：ASN.1 SL-MeasConfigCommon-r16；源文件第 22587 行；SEQUENCE。
// Encode_SL_MeasConfigCommon_r16 只读不分配；Decode_SL_MeasConfigCommon_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_MeasConfigCommon_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_MeasConfigCommon_r16(Encoder& enc, const SL_MeasConfigCommon_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_MeasObjectListCommon_r16);
    enc.WriteBit(value.has_sl_ReportConfigListCommon_r16);
    enc.WriteBit(value.has_sl_MeasIdListCommon_r16);
    enc.WriteBit(value.has_sl_QuantityConfigCommon_r16);
    if (value.has_sl_MeasObjectListCommon_r16) {
        Encode_SL_MeasObjectList_r16(enc, value.sl_MeasObjectListCommon_r16);
    }
    if (value.has_sl_ReportConfigListCommon_r16) {
        Encode_SL_ReportConfigList_r16(enc, value.sl_ReportConfigListCommon_r16);
    }
    if (value.has_sl_MeasIdListCommon_r16) {
        Encode_SL_MeasIdList_r16(enc, value.sl_MeasIdListCommon_r16);
    }
    if (value.has_sl_QuantityConfigCommon_r16) {
        Encode_SL_QuantityConfig_r16(enc, value.sl_QuantityConfigCommon_r16);
    }
    return enc.Error();
}

ErrorCode Decode_SL_MeasConfigCommon_r16(Decoder& dec, SL_MeasConfigCommon_r16& value)
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
        if (Decode_SL_MeasObjectList_r16(dec, value.sl_MeasObjectListCommon_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SL_ReportConfigList_r16(dec, value.sl_ReportConfigListCommon_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SL_MeasIdList_r16(dec, value.sl_MeasIdListCommon_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SL_QuantityConfig_r16(dec, value.sl_QuantityConfigCommon_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_MeasConfigCommon_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_MeasConfigCommon_r16(SL_MeasConfigCommon_r16& value)
{
    if (value.has_sl_MeasObjectListCommon_r16) {
        Free_SL_MeasObjectList_r16(value.sl_MeasObjectListCommon_r16);
    }
    if (value.has_sl_ReportConfigListCommon_r16) {
        Free_SL_ReportConfigList_r16(value.sl_ReportConfigListCommon_r16);
    }
    if (value.has_sl_MeasIdListCommon_r16) {
        Free_SL_MeasIdList_r16(value.sl_MeasIdListCommon_r16);
    }
    if (value.has_sl_QuantityConfigCommon_r16) {
        Free_SL_QuantityConfig_r16(value.sl_QuantityConfigCommon_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ConfigCommonNR_r16：ASN.1 SL-ConfigCommonNR-r16；源文件第 3817 行；SEQUENCE。
// Encode_SL_ConfigCommonNR_r16 只读不分配；Decode_SL_ConfigCommonNR_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_ConfigCommonNR_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ConfigCommonNR_r16(Encoder& enc, const SL_ConfigCommonNR_r16& value)
{
    enc.WriteBit(value.has_sl_FreqInfoList_r16);
    enc.WriteBit(value.has_sl_UE_SelectedConfig_r16);
    enc.WriteBit(value.has_sl_NR_AnchorCarrierFreqList_r16);
    enc.WriteBit(value.has_sl_EUTRA_AnchorCarrierFreqList_r16);
    enc.WriteBit(value.has_sl_RadioBearerConfigList_r16);
    enc.WriteBit(value.has_sl_RLC_BearerConfigList_r16);
    enc.WriteBit(value.has_sl_MeasConfigCommon_r16);
    enc.WriteBit(value.has_sl_CSI_Acquisition_r16);
    enc.WriteBit(value.has_sl_OffsetDFN_r16);
    enc.WriteBit(value.has_t400_r16);
    enc.WriteBit(value.has_sl_MaxNumConsecutiveDTX_r16);
    enc.WriteBit(value.has_sl_SSB_PriorityNR_r16);
    if (value.has_sl_FreqInfoList_r16) {
enc.WriteConstrainedLength(value.sl_FreqInfoList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_FreqInfoList_r16_count; ++i) {
    Encode_SL_FreqConfigCommon_r16(enc, value.sl_FreqInfoList_r16_items[i]);
}
    }
    if (value.has_sl_UE_SelectedConfig_r16) {
        Encode_SL_UE_SelectedConfig_r16(enc, value.sl_UE_SelectedConfig_r16);
    }
    if (value.has_sl_NR_AnchorCarrierFreqList_r16) {
        Encode_SL_NR_AnchorCarrierFreqList_r16(enc, value.sl_NR_AnchorCarrierFreqList_r16);
    }
    if (value.has_sl_EUTRA_AnchorCarrierFreqList_r16) {
        Encode_SL_EUTRA_AnchorCarrierFreqList_r16(enc, value.sl_EUTRA_AnchorCarrierFreqList_r16);
    }
    if (value.has_sl_RadioBearerConfigList_r16) {
enc.WriteConstrainedLength(value.sl_RadioBearerConfigList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_RadioBearerConfigList_r16_count; ++i) {
    Encode_SL_RadioBearerConfig_r16(enc, value.sl_RadioBearerConfigList_r16_items[i]);
}
    }
    if (value.has_sl_RLC_BearerConfigList_r16) {
enc.WriteConstrainedLength(value.sl_RLC_BearerConfigList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_RLC_BearerConfigList_r16_count; ++i) {
    Encode_SL_RLC_BearerConfig_r16(enc, value.sl_RLC_BearerConfigList_r16_items[i]);
}
    }
    if (value.has_sl_MeasConfigCommon_r16) {
        Encode_SL_MeasConfigCommon_r16(enc, value.sl_MeasConfigCommon_r16);
    }
    if (value.has_sl_CSI_Acquisition_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_CSI_Acquisition_r16), 0, 0);
    }
    if (value.has_sl_OffsetDFN_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_OffsetDFN_r16), 1, 1000);
    }
    if (value.has_t400_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.t400_r16), 0, 7);
    }
    if (value.has_sl_MaxNumConsecutiveDTX_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_MaxNumConsecutiveDTX_r16), 0, 7);
    }
    if (value.has_sl_SSB_PriorityNR_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_SSB_PriorityNR_r16), 1, 8);
    }
    return enc.Error();
}

ErrorCode Decode_SL_ConfigCommonNR_r16(Decoder& dec, SL_ConfigCommonNR_r16& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_FreqInfoList_r16_count)) { goto fail; }
if (value.sl_FreqInfoList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_FreqInfoList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_FreqInfoList_r16_count > 0u) {
    value.sl_FreqInfoList_r16_items = (SL_FreqConfigCommon_r16*)std::malloc((std::size_t)value.sl_FreqInfoList_r16_count * sizeof(SL_FreqConfigCommon_r16));
    if (value.sl_FreqInfoList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_FreqInfoList_r16_items, 0, (std::size_t)value.sl_FreqInfoList_r16_count * sizeof(SL_FreqConfigCommon_r16));
}
for (std::uint32_t i = 0; i < value.sl_FreqInfoList_r16_count; ++i) {
    if (Decode_SL_FreqConfigCommon_r16(dec, value.sl_FreqInfoList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
        if (Decode_SL_UE_SelectedConfig_r16(dec, value.sl_UE_SelectedConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SL_NR_AnchorCarrierFreqList_r16(dec, value.sl_NR_AnchorCarrierFreqList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SL_EUTRA_AnchorCarrierFreqList_r16(dec, value.sl_EUTRA_AnchorCarrierFreqList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_RadioBearerConfigList_r16_count)) { goto fail; }
if (value.sl_RadioBearerConfigList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_RadioBearerConfigList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_RadioBearerConfigList_r16_count > 0u) {
    value.sl_RadioBearerConfigList_r16_items = (SL_RadioBearerConfig_r16*)std::malloc((std::size_t)value.sl_RadioBearerConfigList_r16_count * sizeof(SL_RadioBearerConfig_r16));
    if (value.sl_RadioBearerConfigList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_RadioBearerConfigList_r16_items, 0, (std::size_t)value.sl_RadioBearerConfigList_r16_count * sizeof(SL_RadioBearerConfig_r16));
}
for (std::uint32_t i = 0; i < value.sl_RadioBearerConfigList_r16_count; ++i) {
    if (Decode_SL_RadioBearerConfig_r16(dec, value.sl_RadioBearerConfigList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_5) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_RLC_BearerConfigList_r16_count)) { goto fail; }
if (value.sl_RLC_BearerConfigList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_RLC_BearerConfigList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_RLC_BearerConfigList_r16_count > 0u) {
    value.sl_RLC_BearerConfigList_r16_items = (SL_RLC_BearerConfig_r16*)std::malloc((std::size_t)value.sl_RLC_BearerConfigList_r16_count * sizeof(SL_RLC_BearerConfig_r16));
    if (value.sl_RLC_BearerConfigList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_RLC_BearerConfigList_r16_items, 0, (std::size_t)value.sl_RLC_BearerConfigList_r16_count * sizeof(SL_RLC_BearerConfig_r16));
}
for (std::uint32_t i = 0; i < value.sl_RLC_BearerConfigList_r16_count; ++i) {
    if (Decode_SL_RLC_BearerConfig_r16(dec, value.sl_RLC_BearerConfigList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_6) {
        if (Decode_SL_MeasConfigCommon_r16(dec, value.sl_MeasConfigCommon_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        value.sl_CSI_Acquisition_r16 = (SL_ConfigCommonNR_r16_Sl_CSI_Acquisition_r16)0;
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 1000, tmp_value)) { goto fail; }
        value.sl_OffsetDFN_r16 = (int64_t)tmp_value;
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.t400_r16 = (SL_ConfigCommonNR_r16_T400_r16)tmp_value;
    }
    if (present_10) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sl_MaxNumConsecutiveDTX_r16 = (SL_ConfigCommonNR_r16_Sl_MaxNumConsecutiveDTX_r16)tmp_value;
    }
    if (present_11) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.sl_SSB_PriorityNR_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ConfigCommonNR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ConfigCommonNR_r16(SL_ConfigCommonNR_r16& value)
{
    if (value.has_sl_FreqInfoList_r16) {
        if (value.sl_FreqInfoList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_FreqInfoList_r16_count; ++i) {
                Free_SL_FreqConfigCommon_r16(value.sl_FreqInfoList_r16_items[i]);
            }
            std::free(value.sl_FreqInfoList_r16_items);
            value.sl_FreqInfoList_r16_items = nullptr;
        }
        value.sl_FreqInfoList_r16_count = 0;
    }
    if (value.has_sl_UE_SelectedConfig_r16) {
        Free_SL_UE_SelectedConfig_r16(value.sl_UE_SelectedConfig_r16);
    }
    if (value.has_sl_NR_AnchorCarrierFreqList_r16) {
        Free_SL_NR_AnchorCarrierFreqList_r16(value.sl_NR_AnchorCarrierFreqList_r16);
    }
    if (value.has_sl_EUTRA_AnchorCarrierFreqList_r16) {
        Free_SL_EUTRA_AnchorCarrierFreqList_r16(value.sl_EUTRA_AnchorCarrierFreqList_r16);
    }
    if (value.has_sl_RadioBearerConfigList_r16) {
        if (value.sl_RadioBearerConfigList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_RadioBearerConfigList_r16_count; ++i) {
                Free_SL_RadioBearerConfig_r16(value.sl_RadioBearerConfigList_r16_items[i]);
            }
            std::free(value.sl_RadioBearerConfigList_r16_items);
            value.sl_RadioBearerConfigList_r16_items = nullptr;
        }
        value.sl_RadioBearerConfigList_r16_count = 0;
    }
    if (value.has_sl_RLC_BearerConfigList_r16) {
        if (value.sl_RLC_BearerConfigList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_RLC_BearerConfigList_r16_count; ++i) {
                Free_SL_RLC_BearerConfig_r16(value.sl_RLC_BearerConfigList_r16_items[i]);
            }
            std::free(value.sl_RLC_BearerConfigList_r16_items);
            value.sl_RLC_BearerConfigList_r16_items = nullptr;
        }
        value.sl_RLC_BearerConfigList_r16_count = 0;
    }
    if (value.has_sl_MeasConfigCommon_r16) {
        Free_SL_MeasConfigCommon_r16(value.sl_MeasConfigCommon_r16);
    }
    if (value.has_sl_CSI_Acquisition_r16) {
    }
    if (value.has_sl_OffsetDFN_r16) {
    }
    if (value.has_t400_r16) {
    }
    if (value.has_sl_MaxNumConsecutiveDTX_r16) {
    }
    if (value.has_sl_SSB_PriorityNR_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB12_IEs_r16：ASN.1 SIB12-IEs-r16；源文件第 3794 行；SEQUENCE。
// Encode_SIB12_IEs_r16 只读不分配；Decode_SIB12_IEs_r16 可能 malloc（失败时内部已释放并清零）；Free_SIB12_IEs_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB12_IEs_r16(Encoder& enc, const SIB12_IEs_r16& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    Encode_SL_ConfigCommonNR_r16(enc, value.sl_ConfigCommonNR_r16);
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SIB12_IEs_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SIB12_IEs_r16_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SIB12_IEs_r16(Decoder& dec, SIB12_IEs_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_SL_ConfigCommonNR_r16(dec, value.sl_ConfigCommonNR_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
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
    if (Decode_SIB12_IEs_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_SIB12_IEs_r16_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_SIB12_IEs_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB12_IEs_r16(SIB12_IEs_r16& value)
{
    Free_SL_ConfigCommonNR_r16(value.sl_ConfigCommonNR_r16);
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_extGroup1) {
        Free_SIB12_IEs_r16_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SIB12_IEs_r16_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB13_r16：ASN.1 SIB13-r16；源文件第 3849 行；SEQUENCE。
// Encode_SIB13_r16 只读不分配；Decode_SIB13_r16 可能 malloc（失败时内部已释放并清零）；Free_SIB13_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB13_r16(Encoder& enc, const SIB13_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteSemiConstrainedOctetString(value.sl_V2X_ConfigCommon_r16.bytes, value.sl_V2X_ConfigCommon_r16.length, 0, 0xFFFFFFFFu);
    enc.WriteSemiConstrainedOctetString(value.dummy.bytes, value.dummy.length, 0, 0xFFFFFFFFu);
    enc.WriteSemiConstrainedOctetString(value.tdd_Config_r16.bytes, value.tdd_Config_r16.length, 0, 0xFFFFFFFFu);
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    return enc.Error();
}

ErrorCode Decode_SIB13_r16(Decoder& dec, SIB13_r16& value)
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
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.sl_V2X_ConfigCommon_r16.bytes = string_bytes;
        value.sl_V2X_ConfigCommon_r16.length = string_length;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.dummy.bytes = string_bytes;
        value.dummy.length = string_length;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.tdd_Config_r16.bytes = string_bytes;
        value.tdd_Config_r16.length = string_length;
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB13_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB13_r16(SIB13_r16& value)
{
    std::free(value.sl_V2X_ConfigCommon_r16.bytes);
    value.sl_V2X_ConfigCommon_r16.bytes = nullptr;
    value.sl_V2X_ConfigCommon_r16.length = 0;
    std::free(value.dummy.bytes);
    value.dummy.bytes = nullptr;
    value.dummy.length = 0;
    std::free(value.tdd_Config_r16.bytes);
    value.tdd_Config_r16.bytes = nullptr;
    value.tdd_Config_r16.length = 0;
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB14_r16：ASN.1 SIB14-r16；源文件第 3860 行；SEQUENCE。
// Encode_SIB14_r16 只读不分配；Decode_SIB14_r16 可能 malloc（失败时内部已释放并清零）；Free_SIB14_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB14_r16(Encoder& enc, const SIB14_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteSemiConstrainedOctetString(value.sl_V2X_ConfigCommonExt_r16.bytes, value.sl_V2X_ConfigCommonExt_r16.length, 0, 0xFFFFFFFFu);
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    return enc.Error();
}

ErrorCode Decode_SIB14_r16(Decoder& dec, SIB14_r16& value)
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
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.sl_V2X_ConfigCommonExt_r16.bytes = string_bytes;
        value.sl_V2X_ConfigCommonExt_r16.length = string_length;
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB14_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB14_r16(SIB14_r16& value)
{
    std::free(value.sl_V2X_ConfigCommonExt_r16.bytes);
    value.sl_V2X_ConfigCommonExt_r16.bytes = nullptr;
    value.sl_V2X_ConfigCommonExt_r16.length = 0;
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB15_r17：ASN.1 SIB15-r17；源文件第 3869 行；SEQUENCE。
// Encode_SIB15_r17 只读不分配；Decode_SIB15_r17 可能 malloc（失败时内部已释放并清零）；Free_SIB15_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB15_r17(Encoder& enc, const SIB15_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_commonPLMNsWithDisasterCondition_r17);
    enc.WriteBit(value.has_applicableDisasterInfoList_r17);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    if (value.has_commonPLMNsWithDisasterCondition_r17) {
enc.WriteConstrainedLength(value.commonPLMNsWithDisasterCondition_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.commonPLMNsWithDisasterCondition_r17_count; ++i) {
    Encode_PLMN_Identity(enc, value.commonPLMNsWithDisasterCondition_r17_items[i]);
}
    }
    if (value.has_applicableDisasterInfoList_r17) {
enc.WriteConstrainedLength(value.applicableDisasterInfoList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.applicableDisasterInfoList_r17_count; ++i) {
    Encode_ApplicableDisasterInfo_r17(enc, value.applicableDisasterInfoList_r17_items[i]);
}
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    return enc.Error();
}

ErrorCode Decode_SIB15_r17(Decoder& dec, SIB15_r17& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.commonPLMNsWithDisasterCondition_r17_count)) { goto fail; }
if (value.commonPLMNsWithDisasterCondition_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.commonPLMNsWithDisasterCondition_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.commonPLMNsWithDisasterCondition_r17_count > 0u) {
    value.commonPLMNsWithDisasterCondition_r17_items = (PLMN_Identity*)std::malloc((std::size_t)value.commonPLMNsWithDisasterCondition_r17_count * sizeof(PLMN_Identity));
    if (value.commonPLMNsWithDisasterCondition_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.commonPLMNsWithDisasterCondition_r17_items, 0, (std::size_t)value.commonPLMNsWithDisasterCondition_r17_count * sizeof(PLMN_Identity));
}
for (std::uint32_t i = 0; i < value.commonPLMNsWithDisasterCondition_r17_count; ++i) {
    if (Decode_PLMN_Identity(dec, value.commonPLMNsWithDisasterCondition_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.applicableDisasterInfoList_r17_count)) { goto fail; }
if (value.applicableDisasterInfoList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.applicableDisasterInfoList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.applicableDisasterInfoList_r17_count > 0u) {
    value.applicableDisasterInfoList_r17_items = (ApplicableDisasterInfo_r17*)std::malloc((std::size_t)value.applicableDisasterInfoList_r17_count * sizeof(ApplicableDisasterInfo_r17));
    if (value.applicableDisasterInfoList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.applicableDisasterInfoList_r17_items, 0, (std::size_t)value.applicableDisasterInfoList_r17_count * sizeof(ApplicableDisasterInfo_r17));
}
for (std::uint32_t i = 0; i < value.applicableDisasterInfoList_r17_count; ++i) {
    if (Decode_ApplicableDisasterInfo_r17(dec, value.applicableDisasterInfoList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB15_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB15_r17(SIB15_r17& value)
{
    if (value.has_commonPLMNsWithDisasterCondition_r17) {
        if (value.commonPLMNsWithDisasterCondition_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.commonPLMNsWithDisasterCondition_r17_count; ++i) {
                Free_PLMN_Identity(value.commonPLMNsWithDisasterCondition_r17_items[i]);
            }
            std::free(value.commonPLMNsWithDisasterCondition_r17_items);
            value.commonPLMNsWithDisasterCondition_r17_items = nullptr;
        }
        value.commonPLMNsWithDisasterCondition_r17_count = 0;
    }
    if (value.has_applicableDisasterInfoList_r17) {
        if (value.applicableDisasterInfoList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.applicableDisasterInfoList_r17_count; ++i) {
                Free_ApplicableDisasterInfo_r17(value.applicableDisasterInfoList_r17_items[i]);
            }
            std::free(value.applicableDisasterInfoList_r17_items);
            value.applicableDisasterInfoList_r17_items = nullptr;
        }
        value.applicableDisasterInfoList_r17_count = 0;
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ApplicableDisasterInfo_r17_DedicatedPLMNs_r17：ASN.1 dedicatedPLMNs-r17；源文件第 3880 行；SEQUENCE OF。
// Encode_ApplicableDisasterInfo_r17_DedicatedPLMNs_r17 只读不分配；Decode_ApplicableDisasterInfo_r17_DedicatedPLMNs_r17 可能 malloc（失败时内部已释放并清零）；Free_ApplicableDisasterInfo_r17_DedicatedPLMNs_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ApplicableDisasterInfo_r17_DedicatedPLMNs_r17(Encoder& enc, const ApplicableDisasterInfo_r17_DedicatedPLMNs_r17& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 12u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PLMN_Identity(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_ApplicableDisasterInfo_r17_DedicatedPLMNs_r17(Decoder& dec, ApplicableDisasterInfo_r17_DedicatedPLMNs_r17& value)
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
    Free_ApplicableDisasterInfo_r17_DedicatedPLMNs_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ApplicableDisasterInfo_r17_DedicatedPLMNs_r17(ApplicableDisasterInfo_r17_DedicatedPLMNs_r17& value)
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
// ApplicableDisasterInfo_r17：ASN.1 ApplicableDisasterInfo-r17；源文件第 3876 行；CHOICE。
// Encode_ApplicableDisasterInfo_r17 只读不分配；Decode_ApplicableDisasterInfo_r17 可能 malloc（失败时内部已释放并清零）；Free_ApplicableDisasterInfo_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ApplicableDisasterInfo_r17(Encoder& enc, const ApplicableDisasterInfo_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 3);
    switch (value.tag) {
    case ApplicableDisasterInfo_r17_Tag_noDisasterRoaming_r17:
        (void)0;
        break;
    case ApplicableDisasterInfo_r17_Tag_disasterRelatedIndication_r17:
        (void)0;
        break;
    case ApplicableDisasterInfo_r17_Tag_commonPLMNs_r17:
        (void)0;
        break;
    case ApplicableDisasterInfo_r17_Tag_dedicatedPLMNs_r17:
        Encode_ApplicableDisasterInfo_r17_DedicatedPLMNs_r17(enc, value.u.dedicatedPLMNs_r17);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_ApplicableDisasterInfo_r17(Decoder& dec, ApplicableDisasterInfo_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 3, root_index)) {
        goto fail;
    }
    value.tag = (ApplicableDisasterInfo_r17_Tag)root_index;
    switch (value.tag) {
    case ApplicableDisasterInfo_r17_Tag_noDisasterRoaming_r17: {
        (void)0;
        break;
    }
    case ApplicableDisasterInfo_r17_Tag_disasterRelatedIndication_r17: {
        (void)0;
        break;
    }
    case ApplicableDisasterInfo_r17_Tag_commonPLMNs_r17: {
        (void)0;
        break;
    }
    case ApplicableDisasterInfo_r17_Tag_dedicatedPLMNs_r17: {
        if (Decode_ApplicableDisasterInfo_r17_DedicatedPLMNs_r17(dec, value.u.dedicatedPLMNs_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ApplicableDisasterInfo_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ApplicableDisasterInfo_r17(ApplicableDisasterInfo_r17& value)
{
    switch (value.tag) {
    case ApplicableDisasterInfo_r17_Tag_noDisasterRoaming_r17:
        break;
    case ApplicableDisasterInfo_r17_Tag_disasterRelatedIndication_r17:
        break;
    case ApplicableDisasterInfo_r17_Tag_commonPLMNs_r17:
        break;
    case ApplicableDisasterInfo_r17_Tag_dedicatedPLMNs_r17:
        Free_ApplicableDisasterInfo_r17_DedicatedPLMNs_r17(value.u.dedicatedPLMNs_r17);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FreqPriorityListSlicing_r17：ASN.1 FreqPriorityListSlicing-r17；源文件第 6890 行；SEQUENCE OF。
// Encode_FreqPriorityListSlicing_r17 只读不分配；Decode_FreqPriorityListSlicing_r17 可能 malloc（失败时内部已释放并清零）；Free_FreqPriorityListSlicing_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FreqPriorityListSlicing_r17(Encoder& enc, const FreqPriorityListSlicing_r17& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 9u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_FreqPrioritySlicing_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_FreqPriorityListSlicing_r17(Decoder& dec, FreqPriorityListSlicing_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 9u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 9u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (FreqPrioritySlicing_r17*)std::malloc((std::size_t)value.count * sizeof(FreqPrioritySlicing_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(FreqPrioritySlicing_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_FreqPrioritySlicing_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_FreqPriorityListSlicing_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FreqPriorityListSlicing_r17(FreqPriorityListSlicing_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_FreqPrioritySlicing_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB16_r17：ASN.1 SIB16-r17；源文件第 3886 行；SEQUENCE。
// Encode_SIB16_r17 只读不分配；Decode_SIB16_r17 可能 malloc（失败时内部已释放并清零）；Free_SIB16_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB16_r17(Encoder& enc, const SIB16_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_freqPriorityListSlicing_r17);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    if (value.has_freqPriorityListSlicing_r17) {
        Encode_FreqPriorityListSlicing_r17(enc, value.freqPriorityListSlicing_r17);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    return enc.Error();
}

ErrorCode Decode_SIB16_r17(Decoder& dec, SIB16_r17& value)
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
        if (Decode_FreqPriorityListSlicing_r17(dec, value.freqPriorityListSlicing_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB16_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB16_r17(SIB16_r17& value)
{
    if (value.has_freqPriorityListSlicing_r17) {
        Free_FreqPriorityListSlicing_r17(value.freqPriorityListSlicing_r17);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB17_r17：ASN.1 SIB17-r17；源文件第 3895 行；SEQUENCE。
// Encode_SIB17_r17 只读不分配；Decode_SIB17_r17 可能 malloc（失败时内部已释放并清零）；Free_SIB17_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB17_r17(Encoder& enc, const SIB17_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.segmentNumber_r17), 0, 63);
    enc.WriteConstrainedInteger((std::int64_t)(value.segmentType_r17), 0, 1);
    enc.WriteSemiConstrainedOctetString(value.segmentContainer_r17.bytes, value.segmentContainer_r17.length, 0, 0xFFFFFFFFu);
    return enc.Error();
}

ErrorCode Decode_SIB17_r17(Decoder& dec, SIB17_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.segmentNumber_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.segmentType_r17 = (SIB17_r17_SegmentType_r17)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.segmentContainer_r17.bytes = string_bytes;
        value.segmentContainer_r17.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB17_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB17_r17(SIB17_r17& value)
{
    std::free(value.segmentContainer_r17.bytes);
    value.segmentContainer_r17.bytes = nullptr;
    value.segmentContainer_r17.length = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB17_IEs_r17：ASN.1 SIB17-IEs-r17；源文件第 3901 行；SEQUENCE。
// Encode_SIB17_IEs_r17 只读不分配；Decode_SIB17_IEs_r17 可能 malloc（失败时内部已释放并清零）；Free_SIB17_IEs_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB17_IEs_r17(Encoder& enc, const SIB17_IEs_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_validityDuration_r17);
    enc.WriteBit(value.has_lateNonCriticalExtension);
enc.WriteConstrainedLength(value.trs_ResourceSetConfig_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.trs_ResourceSetConfig_r17_count; ++i) {
    Encode_TRS_ResourceSet_r17(enc, value.trs_ResourceSetConfig_r17_items[i]);
}
    if (value.has_validityDuration_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.validityDuration_r17), 0, 15);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    return enc.Error();
}

ErrorCode Decode_SIB17_IEs_r17(Decoder& dec, SIB17_IEs_r17& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.trs_ResourceSetConfig_r17_count)) { goto fail; }
if (value.trs_ResourceSetConfig_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.trs_ResourceSetConfig_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.trs_ResourceSetConfig_r17_count > 0u) {
    value.trs_ResourceSetConfig_r17_items = (TRS_ResourceSet_r17*)std::malloc((std::size_t)value.trs_ResourceSetConfig_r17_count * sizeof(TRS_ResourceSet_r17));
    if (value.trs_ResourceSetConfig_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.trs_ResourceSetConfig_r17_items, 0, (std::size_t)value.trs_ResourceSetConfig_r17_count * sizeof(TRS_ResourceSet_r17));
}
for (std::uint32_t i = 0; i < value.trs_ResourceSetConfig_r17_count; ++i) {
    if (Decode_TRS_ResourceSet_r17(dec, value.trs_ResourceSetConfig_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.validityDuration_r17 = (SIB17_IEs_r17_ValidityDuration_r17)tmp_value;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB17_IEs_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB17_IEs_r17(SIB17_IEs_r17& value)
{
    if (value.trs_ResourceSetConfig_r17_items != nullptr) {
        for (std::uint32_t i = 0; i < value.trs_ResourceSetConfig_r17_count; ++i) {
            Free_TRS_ResourceSet_r17(value.trs_ResourceSetConfig_r17_items[i]);
        }
        std::free(value.trs_ResourceSetConfig_r17_items);
        value.trs_ResourceSetConfig_r17_items = nullptr;
    }
    value.trs_ResourceSetConfig_r17_count = 0;
    if (value.has_validityDuration_r17) {
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith2_r17：ASN.1 scramblingID-Info-r17/scramblingIDperResourceListWith2-r17；源文件第 3913 行；SEQUENCE OF。
// Encode_TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith2_r17 只读不分配；Decode_TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith2_r17 可能 malloc（失败时内部已释放并清零）；Free_TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith2_r17(Encoder& enc, const TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith2_r17& value)
{
    if (value.count != 2u) {
        enc.Fail(ErrorCode_ValueOutOfRange);
    } else {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 1023);
        }
    }
    return enc.Error();
}

ErrorCode Decode_TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith2_r17(Decoder& dec, TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
value.count = 2u;
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (ScramblingId*)std::malloc((std::size_t)value.count * sizeof(ScramblingId));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(ScramblingId));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
    value.items[i] = (ScramblingId)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith2_r17(TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith2_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith4_r17：ASN.1 scramblingID-Info-r17/scramblingIDperResourceListWith4-r17；源文件第 3914 行；SEQUENCE OF。
// Encode_TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith4_r17 只读不分配；Decode_TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith4_r17 可能 malloc（失败时内部已释放并清零）；Free_TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith4_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith4_r17(Encoder& enc, const TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith4_r17& value)
{
    if (value.count != 4u) {
        enc.Fail(ErrorCode_ValueOutOfRange);
    } else {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 1023);
        }
    }
    return enc.Error();
}

ErrorCode Decode_TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith4_r17(Decoder& dec, TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith4_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
value.count = 4u;
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (ScramblingId*)std::malloc((std::size_t)value.count * sizeof(ScramblingId));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(ScramblingId));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
    value.items[i] = (ScramblingId)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith4_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith4_r17(TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith4_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TRS_ResourceSet_r17_ScramblingID_Info_r17：ASN.1 scramblingID-Info-r17；源文件第 3911 行；CHOICE。
// Encode_TRS_ResourceSet_r17_ScramblingID_Info_r17 只读不分配；Decode_TRS_ResourceSet_r17_ScramblingID_Info_r17 可能 malloc（失败时内部已释放并清零）；Free_TRS_ResourceSet_r17_ScramblingID_Info_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TRS_ResourceSet_r17_ScramblingID_Info_r17(Encoder& enc, const TRS_ResourceSet_r17_ScramblingID_Info_r17& value)
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
    case TRS_ResourceSet_r17_ScramblingID_Info_r17_Tag_scramblingIDforCommon_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.scramblingIDforCommon_r17), 0, 1023);
        break;
    case TRS_ResourceSet_r17_ScramblingID_Info_r17_Tag_scramblingIDperResourceListWith2_r17:
        Encode_TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith2_r17(enc, value.u.scramblingIDperResourceListWith2_r17);
        break;
    case TRS_ResourceSet_r17_ScramblingID_Info_r17_Tag_scramblingIDperResourceListWith4_r17:
        Encode_TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith4_r17(enc, value.u.scramblingIDperResourceListWith4_r17);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_TRS_ResourceSet_r17_ScramblingID_Info_r17(Decoder& dec, TRS_ResourceSet_r17_ScramblingID_Info_r17& value)
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
        value.tag = (TRS_ResourceSet_r17_ScramblingID_Info_r17_Tag)(3 + extension_index);
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
    value.tag = (TRS_ResourceSet_r17_ScramblingID_Info_r17_Tag)root_index;
    switch (value.tag) {
    case TRS_ResourceSet_r17_ScramblingID_Info_r17_Tag_scramblingIDforCommon_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.u.scramblingIDforCommon_r17 = (ScramblingId)tmp_value;
        break;
    }
    case TRS_ResourceSet_r17_ScramblingID_Info_r17_Tag_scramblingIDperResourceListWith2_r17: {
        if (Decode_TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith2_r17(dec, value.u.scramblingIDperResourceListWith2_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case TRS_ResourceSet_r17_ScramblingID_Info_r17_Tag_scramblingIDperResourceListWith4_r17: {
        if (Decode_TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith4_r17(dec, value.u.scramblingIDperResourceListWith4_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_TRS_ResourceSet_r17_ScramblingID_Info_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TRS_ResourceSet_r17_ScramblingID_Info_r17(TRS_ResourceSet_r17_ScramblingID_Info_r17& value)
{
    switch (value.tag) {
    case TRS_ResourceSet_r17_ScramblingID_Info_r17_Tag_scramblingIDforCommon_r17:
        break;
    case TRS_ResourceSet_r17_ScramblingID_Info_r17_Tag_scramblingIDperResourceListWith2_r17:
        Free_TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith2_r17(value.u.scramblingIDperResourceListWith2_r17);
        break;
    case TRS_ResourceSet_r17_ScramblingID_Info_r17_Tag_scramblingIDperResourceListWith4_r17:
        Free_TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith4_r17(value.u.scramblingIDperResourceListWith4_r17);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TRS_ResourceSet_r17_PeriodicityAndOffset_r17：ASN.1 periodicityAndOffset-r17；源文件第 3921 行；CHOICE。
// Encode_TRS_ResourceSet_r17_PeriodicityAndOffset_r17 只读不分配；Decode_TRS_ResourceSet_r17_PeriodicityAndOffset_r17 可能 malloc（失败时内部已释放并清零）；Free_TRS_ResourceSet_r17_PeriodicityAndOffset_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TRS_ResourceSet_r17_PeriodicityAndOffset_r17(Encoder& enc, const TRS_ResourceSet_r17_PeriodicityAndOffset_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 3);
    switch (value.tag) {
    case TRS_ResourceSet_r17_PeriodicityAndOffset_r17_Tag_slots10:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.slots10), 0, 9);
        break;
    case TRS_ResourceSet_r17_PeriodicityAndOffset_r17_Tag_slots20:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.slots20), 0, 19);
        break;
    case TRS_ResourceSet_r17_PeriodicityAndOffset_r17_Tag_slots40:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.slots40), 0, 39);
        break;
    case TRS_ResourceSet_r17_PeriodicityAndOffset_r17_Tag_slots80:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.slots80), 0, 79);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_TRS_ResourceSet_r17_PeriodicityAndOffset_r17(Decoder& dec, TRS_ResourceSet_r17_PeriodicityAndOffset_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 3, root_index)) {
        goto fail;
    }
    value.tag = (TRS_ResourceSet_r17_PeriodicityAndOffset_r17_Tag)root_index;
    switch (value.tag) {
    case TRS_ResourceSet_r17_PeriodicityAndOffset_r17_Tag_slots10: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.u.slots10 = (int64_t)tmp_value;
        break;
    }
    case TRS_ResourceSet_r17_PeriodicityAndOffset_r17_Tag_slots20: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 19, tmp_value)) { goto fail; }
        value.u.slots20 = (int64_t)tmp_value;
        break;
    }
    case TRS_ResourceSet_r17_PeriodicityAndOffset_r17_Tag_slots40: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.slots40 = (int64_t)tmp_value;
        break;
    }
    case TRS_ResourceSet_r17_PeriodicityAndOffset_r17_Tag_slots80: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.slots80 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_TRS_ResourceSet_r17_PeriodicityAndOffset_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TRS_ResourceSet_r17_PeriodicityAndOffset_r17(TRS_ResourceSet_r17_PeriodicityAndOffset_r17& value)
{
    switch (value.tag) {
    case TRS_ResourceSet_r17_PeriodicityAndOffset_r17_Tag_slots10:
        break;
    case TRS_ResourceSet_r17_PeriodicityAndOffset_r17_Tag_slots20:
        break;
    case TRS_ResourceSet_r17_PeriodicityAndOffset_r17_Tag_slots40:
        break;
    case TRS_ResourceSet_r17_PeriodicityAndOffset_r17_Tag_slots80:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TRS_ResourceSet_r17：ASN.1 TRS-ResourceSet-r17；源文件第 3909 行；SEQUENCE。
// Encode_TRS_ResourceSet_r17 只读不分配；Decode_TRS_ResourceSet_r17 可能 malloc（失败时内部已释放并清零）；Free_TRS_ResourceSet_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TRS_ResourceSet_r17(Encoder& enc, const TRS_ResourceSet_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.powerControlOffsetSS_r17), 0, 3);
    Encode_TRS_ResourceSet_r17_ScramblingID_Info_r17(enc, value.scramblingID_Info_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.firstOFDMSymbolInTimeDomain_r17), 0, 9);
    enc.WriteConstrainedInteger((std::int64_t)(value.startingRB_r17), 0, 274);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofRBs_r17), 24, 276);
    enc.WriteConstrainedInteger((std::int64_t)(value.ssb_Index_r17), 0, 63);
    Encode_TRS_ResourceSet_r17_PeriodicityAndOffset_r17(enc, value.periodicityAndOffset_r17);
    enc.WriteFixedBitString(value.frequencyDomainAllocation_r17.bytes, value.frequencyDomainAllocation_r17.bitLength, 4, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.indBitID_r17), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofResources_r17), 0, 1);
    return enc.Error();
}

ErrorCode Decode_TRS_ResourceSet_r17(Decoder& dec, TRS_ResourceSet_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.powerControlOffsetSS_r17 = (TRS_ResourceSet_r17_PowerControlOffsetSS_r17)tmp_value;
    }
    {
        if (Decode_TRS_ResourceSet_r17_ScramblingID_Info_r17(dec, value.scramblingID_Info_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.firstOFDMSymbolInTimeDomain_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 274, tmp_value)) { goto fail; }
        value.startingRB_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(24, 276, tmp_value)) { goto fail; }
        value.nrofRBs_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.ssb_Index_r17 = (SSB_Index)tmp_value;
    }
    {
        if (Decode_TRS_ResourceSet_r17_PeriodicityAndOffset_r17(dec, value.periodicityAndOffset_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 4)) { goto fail; }
        string_length = 4;
        value.frequencyDomainAllocation_r17.bytes = string_bytes;
        value.frequencyDomainAllocation_r17.bitLength = string_length;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.indBitID_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.nrofResources_r17 = (TRS_ResourceSet_r17_NrofResources_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_TRS_ResourceSet_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TRS_ResourceSet_r17(TRS_ResourceSet_r17& value)
{
    Free_TRS_ResourceSet_r17_ScramblingID_Info_r17(value.scramblingID_Info_r17);
    Free_TRS_ResourceSet_r17_PeriodicityAndOffset_r17(value.periodicityAndOffset_r17);
    std::free(value.frequencyDomainAllocation_r17.bytes);
    value.frequencyDomainAllocation_r17.bytes = nullptr;
    value.frequencyDomainAllocation_r17.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB18_r17：ASN.1 SIB18-r17；源文件第 3935 行；SEQUENCE。
// Encode_SIB18_r17 只读不分配；Decode_SIB18_r17 可能 malloc（失败时内部已释放并清零）；Free_SIB18_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB18_r17(Encoder& enc, const SIB18_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_gin_ElementList_r17);
    enc.WriteBit(value.has_gins_PerSNPN_List_r17);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    if (value.has_gin_ElementList_r17) {
enc.WriteConstrainedLength(value.gin_ElementList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.gin_ElementList_r17_count; ++i) {
    Encode_GIN_Element_r17(enc, value.gin_ElementList_r17_items[i]);
}
    }
    if (value.has_gins_PerSNPN_List_r17) {
enc.WriteConstrainedLength(value.gins_PerSNPN_List_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.gins_PerSNPN_List_r17_count; ++i) {
    Encode_GINs_PerSNPN_r17(enc, value.gins_PerSNPN_List_r17_items[i]);
}
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    return enc.Error();
}

ErrorCode Decode_SIB18_r17(Decoder& dec, SIB18_r17& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.gin_ElementList_r17_count)) { goto fail; }
if (value.gin_ElementList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.gin_ElementList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.gin_ElementList_r17_count > 0u) {
    value.gin_ElementList_r17_items = (GIN_Element_r17*)std::malloc((std::size_t)value.gin_ElementList_r17_count * sizeof(GIN_Element_r17));
    if (value.gin_ElementList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.gin_ElementList_r17_items, 0, (std::size_t)value.gin_ElementList_r17_count * sizeof(GIN_Element_r17));
}
for (std::uint32_t i = 0; i < value.gin_ElementList_r17_count; ++i) {
    if (Decode_GIN_Element_r17(dec, value.gin_ElementList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.gins_PerSNPN_List_r17_count)) { goto fail; }
if (value.gins_PerSNPN_List_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.gins_PerSNPN_List_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.gins_PerSNPN_List_r17_count > 0u) {
    value.gins_PerSNPN_List_r17_items = (GINs_PerSNPN_r17*)std::malloc((std::size_t)value.gins_PerSNPN_List_r17_count * sizeof(GINs_PerSNPN_r17));
    if (value.gins_PerSNPN_List_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.gins_PerSNPN_List_r17_items, 0, (std::size_t)value.gins_PerSNPN_List_r17_count * sizeof(GINs_PerSNPN_r17));
}
for (std::uint32_t i = 0; i < value.gins_PerSNPN_List_r17_count; ++i) {
    if (Decode_GINs_PerSNPN_r17(dec, value.gins_PerSNPN_List_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB18_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB18_r17(SIB18_r17& value)
{
    if (value.has_gin_ElementList_r17) {
        if (value.gin_ElementList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.gin_ElementList_r17_count; ++i) {
                Free_GIN_Element_r17(value.gin_ElementList_r17_items[i]);
            }
            std::free(value.gin_ElementList_r17_items);
            value.gin_ElementList_r17_items = nullptr;
        }
        value.gin_ElementList_r17_count = 0;
    }
    if (value.has_gins_PerSNPN_List_r17) {
        if (value.gins_PerSNPN_List_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.gins_PerSNPN_List_r17_count; ++i) {
                Free_GINs_PerSNPN_r17(value.gins_PerSNPN_List_r17_items[i]);
            }
            std::free(value.gins_PerSNPN_List_r17_items);
            value.gins_PerSNPN_List_r17_items = nullptr;
        }
        value.gins_PerSNPN_List_r17_count = 0;
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// GIN_Element_r17：ASN.1 GIN-Element-r17；源文件第 3942 行；SEQUENCE。
// Encode_GIN_Element_r17 只读不分配；Decode_GIN_Element_r17 可能 malloc（失败时内部已释放并清零）；Free_GIN_Element_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_GIN_Element_r17(Encoder& enc, const GIN_Element_r17& value)
{
    Encode_PLMN_Identity(enc, value.plmn_Identity_r17);
enc.WriteConstrainedLength(value.nid_List_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nid_List_r17_count; ++i) {
    enc.WriteFixedBitString(value.nid_List_r17_items[i].bytes, value.nid_List_r17_items[i].bitLength, 44, 44);
}
    return enc.Error();
}

ErrorCode Decode_GIN_Element_r17(Decoder& dec, GIN_Element_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_PLMN_Identity(dec, value.plmn_Identity_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.nid_List_r17_count)) { goto fail; }
if (value.nid_List_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nid_List_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nid_List_r17_count > 0u) {
    value.nid_List_r17_items = (NID_r16*)std::malloc((std::size_t)value.nid_List_r17_count * sizeof(NID_r16));
    if (value.nid_List_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nid_List_r17_items, 0, (std::size_t)value.nid_List_r17_count * sizeof(NID_r16));
}
for (std::uint32_t i = 0; i < value.nid_List_r17_count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadFixedBitString(string_bytes, 44)) { goto fail; }
    string_length = 44;
    value.nid_List_r17_items[i].bytes = string_bytes;
    value.nid_List_r17_items[i].bitLength = string_length;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_GIN_Element_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_GIN_Element_r17(GIN_Element_r17& value)
{
    Free_PLMN_Identity(value.plmn_Identity_r17);
    if (value.nid_List_r17_items != nullptr) {
        for (std::uint32_t i = 0; i < value.nid_List_r17_count; ++i) {
            std::free(value.nid_List_r17_items[i].bytes);
            value.nid_List_r17_items[i].bytes = nullptr;
            value.nid_List_r17_items[i].bitLength = 0;
        }
        std::free(value.nid_List_r17_items);
        value.nid_List_r17_items = nullptr;
    }
    value.nid_List_r17_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// GINs_PerSNPN_r17：ASN.1 GINs-PerSNPN-r17；源文件第 3947 行；SEQUENCE。
// Encode_GINs_PerSNPN_r17 只读不分配；Decode_GINs_PerSNPN_r17 可能 malloc（失败时内部已释放并清零）；Free_GINs_PerSNPN_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_GINs_PerSNPN_r17(Encoder& enc, const GINs_PerSNPN_r17& value)
{
    enc.WriteBit(value.has_supportedGINs_r17);
    if (value.has_supportedGINs_r17) {
        enc.WriteConstrainedBitString(value.supportedGINs_r17.bytes, value.supportedGINs_r17.bitLength, 1, 24);
    }
    return enc.Error();
}

ErrorCode Decode_GINs_PerSNPN_r17(Decoder& dec, GINs_PerSNPN_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 1, 24)) { goto fail; }
        value.supportedGINs_r17.bytes = string_bytes;
        value.supportedGINs_r17.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_GINs_PerSNPN_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_GINs_PerSNPN_r17(GINs_PerSNPN_r17& value)
{
    if (value.has_supportedGINs_r17) {
        std::free(value.supportedGINs_r17.bytes);
        value.supportedGINs_r17.bytes = nullptr;
        value.supportedGINs_r17.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NTN_NeighCellConfigList_r17：ASN.1 NTN-NeighCellConfigList-r17；源文件第 3972 行；SEQUENCE OF。
// Encode_NTN_NeighCellConfigList_r17 只读不分配；Decode_NTN_NeighCellConfigList_r17 可能 malloc（失败时内部已释放并清零）；Free_NTN_NeighCellConfigList_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NTN_NeighCellConfigList_r17(Encoder& enc, const NTN_NeighCellConfigList_r17& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_NTN_NeighCellConfig_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_NTN_NeighCellConfigList_r17(Decoder& dec, NTN_NeighCellConfigList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (NTN_NeighCellConfig_r17*)std::malloc((std::size_t)value.count * sizeof(NTN_NeighCellConfig_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(NTN_NeighCellConfig_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_NTN_NeighCellConfig_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_NTN_NeighCellConfigList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NTN_NeighCellConfigList_r17(NTN_NeighCellConfigList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_NTN_NeighCellConfig_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB19_r17_ExtGroup1：ASN.1 SIB19_r17_ExtGroup1；源文件第 3961 行；扩展添加组 [[ ]]。
// Encode_SIB19_r17_ExtGroup1 只读不分配；Decode_SIB19_r17_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SIB19_r17_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB19_r17_ExtGroup1(Encoder& enc, const SIB19_r17_ExtGroup1& value)
{
    enc.WriteBit(value.has_ntn_NeighCellConfigListExt_v1720);
    if (value.has_ntn_NeighCellConfigListExt_v1720) {
        Encode_NTN_NeighCellConfigList_r17(enc, value.ntn_NeighCellConfigListExt_v1720);
    }
    return enc.Error();
}

ErrorCode Decode_SIB19_r17_ExtGroup1(Decoder& dec, SIB19_r17_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_NTN_NeighCellConfigList_r17(dec, value.ntn_NeighCellConfigListExt_v1720) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB19_r17_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB19_r17_ExtGroup1(SIB19_r17_ExtGroup1& value)
{
    if (value.has_ntn_NeighCellConfigListExt_v1720) {
        Free_NTN_NeighCellConfigList_r17(value.ntn_NeighCellConfigListExt_v1720);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NTN_CovEnh_r18：ASN.1 NTN-CovEnh-r18；源文件第 3980 行；SEQUENCE。
// Encode_NTN_CovEnh_r18 只读不分配；Decode_NTN_CovEnh_r18 可能 malloc（失败时内部已释放并清零）；Free_NTN_CovEnh_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NTN_CovEnh_r18(Encoder& enc, const NTN_CovEnh_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_rsrp_ThresholdMsg4_r18);
    enc.WriteBit(value.has_numberOfMsg4_RepetitionsList_r18);
    if (value.has_rsrp_ThresholdMsg4_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrp_ThresholdMsg4_r18), 0, 127);
    }
    if (value.has_numberOfMsg4_RepetitionsList_r18) {
enc.WriteConstrainedLength(value.numberOfMsg4_RepetitionsList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.numberOfMsg4_RepetitionsList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.numberOfMsg4_RepetitionsList_r18_items[i]), 0, 3);
}
    }
    return enc.Error();
}

ErrorCode Decode_NTN_CovEnh_r18(Decoder& dec, NTN_CovEnh_r18& value)
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
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.rsrp_ThresholdMsg4_r18 = (RSRP_Range)tmp_value;
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.numberOfMsg4_RepetitionsList_r18_count)) { goto fail; }
if (value.numberOfMsg4_RepetitionsList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.numberOfMsg4_RepetitionsList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.numberOfMsg4_RepetitionsList_r18_count > 0u) {
    value.numberOfMsg4_RepetitionsList_r18_items = (NumberOfMsg4_Repetitions_r18*)std::malloc((std::size_t)value.numberOfMsg4_RepetitionsList_r18_count * sizeof(NumberOfMsg4_Repetitions_r18));
    if (value.numberOfMsg4_RepetitionsList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.numberOfMsg4_RepetitionsList_r18_items, 0, (std::size_t)value.numberOfMsg4_RepetitionsList_r18_count * sizeof(NumberOfMsg4_Repetitions_r18));
}
for (std::uint32_t i = 0; i < value.numberOfMsg4_RepetitionsList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
    value.numberOfMsg4_RepetitionsList_r18_items[i] = (NumberOfMsg4_Repetitions_r18)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_NTN_CovEnh_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NTN_CovEnh_r18(NTN_CovEnh_r18& value)
{
    if (value.has_rsrp_ThresholdMsg4_r18) {
    }
    if (value.has_numberOfMsg4_RepetitionsList_r18) {
        if (value.numberOfMsg4_RepetitionsList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.numberOfMsg4_RepetitionsList_r18_count; ++i) {
            }
            std::free(value.numberOfMsg4_RepetitionsList_r18_items);
            value.numberOfMsg4_RepetitionsList_r18_items = nullptr;
        }
        value.numberOfMsg4_RepetitionsList_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PositionVelocity_r17：ASN.1 PositionVelocity-r17；源文件第 6783 行；SEQUENCE。
// Encode_PositionVelocity_r17 只读不分配；Decode_PositionVelocity_r17 可能 malloc（失败时内部已释放并清零）；Free_PositionVelocity_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PositionVelocity_r17(Encoder& enc, const PositionVelocity_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.positionX_r17), -33554432, 33554431);
    enc.WriteConstrainedInteger((std::int64_t)(value.positionY_r17), -33554432, 33554431);
    enc.WriteConstrainedInteger((std::int64_t)(value.positionZ_r17), -33554432, 33554431);
    enc.WriteConstrainedInteger((std::int64_t)(value.velocityVX_r17), -131072, 131071);
    enc.WriteConstrainedInteger((std::int64_t)(value.velocityVY_r17), -131072, 131071);
    enc.WriteConstrainedInteger((std::int64_t)(value.velocityVZ_r17), -131072, 131071);
    return enc.Error();
}

ErrorCode Decode_PositionVelocity_r17(Decoder& dec, PositionVelocity_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-33554432, 33554431, tmp_value)) { goto fail; }
        value.positionX_r17 = (PositionStateVector_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-33554432, 33554431, tmp_value)) { goto fail; }
        value.positionY_r17 = (PositionStateVector_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-33554432, 33554431, tmp_value)) { goto fail; }
        value.positionZ_r17 = (PositionStateVector_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-131072, 131071, tmp_value)) { goto fail; }
        value.velocityVX_r17 = (VelocityStateVector_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-131072, 131071, tmp_value)) { goto fail; }
        value.velocityVY_r17 = (VelocityStateVector_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-131072, 131071, tmp_value)) { goto fail; }
        value.velocityVZ_r17 = (VelocityStateVector_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PositionVelocity_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PositionVelocity_r17(PositionVelocity_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// Orbital_r17：ASN.1 Orbital-r17；源文件第 6792 行；SEQUENCE。
// Encode_Orbital_r17 只读不分配；Decode_Orbital_r17 可能 malloc（失败时内部已释放并清零）；Free_Orbital_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_Orbital_r17(Encoder& enc, const Orbital_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.semiMajorAxis_r17), 0, 8589934591);
    enc.WriteConstrainedInteger((std::int64_t)(value.eccentricity_r17), 0, 1048575);
    enc.WriteConstrainedInteger((std::int64_t)(value.periapsis_r17), 0, 268435455);
    enc.WriteConstrainedInteger((std::int64_t)(value.longitude_r17), 0, 268435455);
    enc.WriteConstrainedInteger((std::int64_t)(value.inclination_r17), -67108864, 67108863);
    enc.WriteConstrainedInteger((std::int64_t)(value.meanAnomaly_r17), 0, 268435455);
    return enc.Error();
}

ErrorCode Decode_Orbital_r17(Decoder& dec, Orbital_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 8589934591, tmp_value)) { goto fail; }
        value.semiMajorAxis_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1048575, tmp_value)) { goto fail; }
        value.eccentricity_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 268435455, tmp_value)) { goto fail; }
        value.periapsis_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 268435455, tmp_value)) { goto fail; }
        value.longitude_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-67108864, 67108863, tmp_value)) { goto fail; }
        value.inclination_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 268435455, tmp_value)) { goto fail; }
        value.meanAnomaly_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Orbital_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Orbital_r17(Orbital_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EphemerisInfo_r17：ASN.1 EphemerisInfo-r17；源文件第 6778 行；CHOICE。
// Encode_EphemerisInfo_r17 只读不分配；Decode_EphemerisInfo_r17 可能 malloc（失败时内部已释放并清零）；Free_EphemerisInfo_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EphemerisInfo_r17(Encoder& enc, const EphemerisInfo_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case EphemerisInfo_r17_Tag_positionVelocity_r17:
        Encode_PositionVelocity_r17(enc, value.u.positionVelocity_r17);
        break;
    case EphemerisInfo_r17_Tag_orbital_r17:
        Encode_Orbital_r17(enc, value.u.orbital_r17);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_EphemerisInfo_r17(Decoder& dec, EphemerisInfo_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (EphemerisInfo_r17_Tag)root_index;
    switch (value.tag) {
    case EphemerisInfo_r17_Tag_positionVelocity_r17: {
        if (Decode_PositionVelocity_r17(dec, value.u.positionVelocity_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case EphemerisInfo_r17_Tag_orbital_r17: {
        if (Decode_Orbital_r17(dec, value.u.orbital_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EphemerisInfo_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EphemerisInfo_r17(EphemerisInfo_r17& value)
{
    switch (value.tag) {
    case EphemerisInfo_r17_Tag_positionVelocity_r17:
        Free_PositionVelocity_r17(value.u.positionVelocity_r17);
        break;
    case EphemerisInfo_r17_Tag_orbital_r17:
        Free_Orbital_r17(value.u.orbital_r17);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EpochTime_r17：ASN.1 EpochTime-r17；源文件第 6808 行；SEQUENCE。
// Encode_EpochTime_r17 只读不分配；Decode_EpochTime_r17 可能 malloc（失败时内部已释放并清零）；Free_EpochTime_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EpochTime_r17(Encoder& enc, const EpochTime_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.sfn_r17), 0, 1023);
    enc.WriteConstrainedInteger((std::int64_t)(value.subFrameNR_r17), 0, 9);
    return enc.Error();
}

ErrorCode Decode_EpochTime_r17(Decoder& dec, EpochTime_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.sfn_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.subFrameNR_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EpochTime_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EpochTime_r17(EpochTime_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TA_Info_r17：ASN.1 TA-Info-r17；源文件第 9000 行；SEQUENCE。
// Encode_TA_Info_r17 只读不分配；Decode_TA_Info_r17 可能 malloc（失败时内部已释放并清零）；Free_TA_Info_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TA_Info_r17(Encoder& enc, const TA_Info_r17& value)
{
    enc.WriteBit(value.has_ta_CommonDrift_r17);
    enc.WriteBit(value.has_ta_CommonDriftVariant_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.ta_Common_r17), 0, 66485757);
    if (value.has_ta_CommonDrift_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ta_CommonDrift_r17), -257303, 257303);
    }
    if (value.has_ta_CommonDriftVariant_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ta_CommonDriftVariant_r17), 0, 28949);
    }
    return enc.Error();
}

ErrorCode Decode_TA_Info_r17(Decoder& dec, TA_Info_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 66485757, tmp_value)) { goto fail; }
        value.ta_Common_r17 = (int64_t)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-257303, 257303, tmp_value)) { goto fail; }
        value.ta_CommonDrift_r17 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 28949, tmp_value)) { goto fail; }
        value.ta_CommonDriftVariant_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_TA_Info_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TA_Info_r17(TA_Info_r17& value)
{
    if (value.has_ta_CommonDrift_r17) {
    }
    if (value.has_ta_CommonDriftVariant_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NTN_Config_r17：ASN.1 NTN-Config-r17；源文件第 8986 行；SEQUENCE。
// Encode_NTN_Config_r17 只读不分配；Decode_NTN_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_NTN_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NTN_Config_r17(Encoder& enc, const NTN_Config_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_epochTime_r17);
    enc.WriteBit(value.has_ntn_UlSyncValidityDuration_r17);
    enc.WriteBit(value.has_cellSpecificKoffset_r17);
    enc.WriteBit(value.has_kmac_r17);
    enc.WriteBit(value.has_ta_Info_r17);
    enc.WriteBit(value.has_ntn_PolarizationDL_r17);
    enc.WriteBit(value.has_ntn_PolarizationUL_r17);
    enc.WriteBit(value.has_ephemerisInfo_r17);
    enc.WriteBit(value.has_ta_Report_r17);
    if (value.has_epochTime_r17) {
        Encode_EpochTime_r17(enc, value.epochTime_r17);
    }
    if (value.has_ntn_UlSyncValidityDuration_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ntn_UlSyncValidityDuration_r17), 0, 15);
    }
    if (value.has_cellSpecificKoffset_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cellSpecificKoffset_r17), 1, 1023);
    }
    if (value.has_kmac_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.kmac_r17), 1, 512);
    }
    if (value.has_ta_Info_r17) {
        Encode_TA_Info_r17(enc, value.ta_Info_r17);
    }
    if (value.has_ntn_PolarizationDL_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ntn_PolarizationDL_r17), 0, 2);
    }
    if (value.has_ntn_PolarizationUL_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ntn_PolarizationUL_r17), 0, 2);
    }
    if (value.has_ephemerisInfo_r17) {
        Encode_EphemerisInfo_r17(enc, value.ephemerisInfo_r17);
    }
    if (value.has_ta_Report_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ta_Report_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_NTN_Config_r17(Decoder& dec, NTN_Config_r17& value)
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
    if (!dec.ReadBit(present_8)) { goto fail; }
    if (present_0) {
        if (Decode_EpochTime_r17(dec, value.epochTime_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.ntn_UlSyncValidityDuration_r17 = (NTN_Config_r17_Ntn_UlSyncValidityDuration_r17)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 1023, tmp_value)) { goto fail; }
        value.cellSpecificKoffset_r17 = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 512, tmp_value)) { goto fail; }
        value.kmac_r17 = (int64_t)tmp_value;
    }
    if (present_4) {
        if (Decode_TA_Info_r17(dec, value.ta_Info_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.ntn_PolarizationDL_r17 = (NTN_Config_r17_Ntn_PolarizationDL_r17)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.ntn_PolarizationUL_r17 = (NTN_Config_r17_Ntn_PolarizationUL_r17)tmp_value;
    }
    if (present_7) {
        if (Decode_EphemerisInfo_r17(dec, value.ephemerisInfo_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        value.ta_Report_r17 = (NTN_Config_r17_Ta_Report_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NTN_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NTN_Config_r17(NTN_Config_r17& value)
{
    if (value.has_epochTime_r17) {
        Free_EpochTime_r17(value.epochTime_r17);
    }
    if (value.has_ntn_UlSyncValidityDuration_r17) {
    }
    if (value.has_cellSpecificKoffset_r17) {
    }
    if (value.has_kmac_r17) {
    }
    if (value.has_ta_Info_r17) {
        Free_TA_Info_r17(value.ta_Info_r17);
    }
    if (value.has_ntn_PolarizationDL_r17) {
    }
    if (value.has_ntn_PolarizationUL_r17) {
    }
    if (value.has_ephemerisInfo_r17) {
        Free_EphemerisInfo_r17(value.ephemerisInfo_r17);
    }
    if (value.has_ta_Report_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SatSwitchWithReSync_r18：ASN.1 SatSwitchWithReSync-r18；源文件第 3988 行；SEQUENCE。
// Encode_SatSwitchWithReSync_r18 只读不分配；Decode_SatSwitchWithReSync_r18 可能 malloc（失败时内部已释放并清零）；Free_SatSwitchWithReSync_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SatSwitchWithReSync_r18(Encoder& enc, const SatSwitchWithReSync_r18& value)
{
    enc.WriteBit(value.has_t_ServiceStart_r18);
    enc.WriteBit(value.has_ssb_TimeOffset_r18);
    Encode_NTN_Config_r17(enc, value.ntn_Config_r18);
    if (value.has_t_ServiceStart_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.t_ServiceStart_r18), 0, 549755813887);
    }
    if (value.has_ssb_TimeOffset_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_TimeOffset_r18), 0, 159);
    }
    return enc.Error();
}

ErrorCode Decode_SatSwitchWithReSync_r18(Decoder& dec, SatSwitchWithReSync_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        if (Decode_NTN_Config_r17(dec, value.ntn_Config_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 549755813887, tmp_value)) { goto fail; }
        value.t_ServiceStart_r18 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.ssb_TimeOffset_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SatSwitchWithReSync_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SatSwitchWithReSync_r18(SatSwitchWithReSync_r18& value)
{
    Free_NTN_Config_r17(value.ntn_Config_r18);
    if (value.has_t_ServiceStart_r18) {
    }
    if (value.has_ssb_TimeOffset_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB19_r17_ExtGroup2：ASN.1 SIB19_r17_ExtGroup2；源文件第 3964 行；扩展添加组 [[ ]]。
// Encode_SIB19_r17_ExtGroup2 只读不分配；Decode_SIB19_r17_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_SIB19_r17_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB19_r17_ExtGroup2(Encoder& enc, const SIB19_r17_ExtGroup2& value)
{
    enc.WriteBit(value.has_movingReferenceLocation_r18);
    enc.WriteBit(value.has_ntnCovEnh_r18);
    enc.WriteBit(value.has_satSwitchWithReSync_r18);
    if (value.has_movingReferenceLocation_r18) {
        enc.WriteSemiConstrainedOctetString(value.movingReferenceLocation_r18.bytes, value.movingReferenceLocation_r18.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_ntnCovEnh_r18) {
        Encode_NTN_CovEnh_r18(enc, value.ntnCovEnh_r18);
    }
    if (value.has_satSwitchWithReSync_r18) {
        Encode_SatSwitchWithReSync_r18(enc, value.satSwitchWithReSync_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SIB19_r17_ExtGroup2(Decoder& dec, SIB19_r17_ExtGroup2& value)
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
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.movingReferenceLocation_r18.bytes = string_bytes;
        value.movingReferenceLocation_r18.length = string_length;
    }
    if (present_1) {
        if (Decode_NTN_CovEnh_r18(dec, value.ntnCovEnh_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SatSwitchWithReSync_r18(dec, value.satSwitchWithReSync_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB19_r17_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB19_r17_ExtGroup2(SIB19_r17_ExtGroup2& value)
{
    if (value.has_movingReferenceLocation_r18) {
        std::free(value.movingReferenceLocation_r18.bytes);
        value.movingReferenceLocation_r18.bytes = nullptr;
        value.movingReferenceLocation_r18.length = 0;
    }
    if (value.has_ntnCovEnh_r18) {
        Free_NTN_CovEnh_r18(value.ntnCovEnh_r18);
    }
    if (value.has_satSwitchWithReSync_r18) {
        Free_SatSwitchWithReSync_r18(value.satSwitchWithReSync_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB19_r17：ASN.1 SIB19-r17；源文件第 3953 行；SEQUENCE。
// Encode_SIB19_r17 只读不分配；Decode_SIB19_r17 可能 malloc（失败时内部已释放并清零）；Free_SIB19_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB19_r17(Encoder& enc, const SIB19_r17& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_ntn_Config_r17);
    enc.WriteBit(value.has_t_Service_r17);
    enc.WriteBit(value.has_referenceLocation_r17);
    enc.WriteBit(value.has_distanceThresh_r17);
    enc.WriteBit(value.has_ntn_NeighCellConfigList_r17);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    if (value.has_ntn_Config_r17) {
        Encode_NTN_Config_r17(enc, value.ntn_Config_r17);
    }
    if (value.has_t_Service_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.t_Service_r17), 0, 549755813887);
    }
    if (value.has_referenceLocation_r17) {
        enc.WriteSemiConstrainedOctetString(value.referenceLocation_r17.bytes, value.referenceLocation_r17.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_distanceThresh_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.distanceThresh_r17), 0, 65525);
    }
    if (value.has_ntn_NeighCellConfigList_r17) {
        Encode_NTN_NeighCellConfigList_r17(enc, value.ntn_NeighCellConfigList_r17);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SIB19_r17_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SIB19_r17_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SIB19_r17(Decoder& dec, SIB19_r17& value)
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
        if (Decode_NTN_Config_r17(dec, value.ntn_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 549755813887, tmp_value)) { goto fail; }
        value.t_Service_r17 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.referenceLocation_r17.bytes = string_bytes;
        value.referenceLocation_r17.length = string_length;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65525, tmp_value)) { goto fail; }
        value.distanceThresh_r17 = (int64_t)tmp_value;
    }
    if (present_4) {
        if (Decode_NTN_NeighCellConfigList_r17(dec, value.ntn_NeighCellConfigList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
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
    if (Decode_SIB19_r17_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_SIB19_r17_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_SIB19_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB19_r17(SIB19_r17& value)
{
    if (value.has_ntn_Config_r17) {
        Free_NTN_Config_r17(value.ntn_Config_r17);
    }
    if (value.has_t_Service_r17) {
    }
    if (value.has_referenceLocation_r17) {
        std::free(value.referenceLocation_r17.bytes);
        value.referenceLocation_r17.bytes = nullptr;
        value.referenceLocation_r17.length = 0;
    }
    if (value.has_distanceThresh_r17) {
    }
    if (value.has_ntn_NeighCellConfigList_r17) {
        Free_NTN_NeighCellConfigList_r17(value.ntn_NeighCellConfigList_r17);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_extGroup1) {
        Free_SIB19_r17_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SIB19_r17_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NTN_NeighCellConfig_r17：ASN.1 NTN-NeighCellConfig-r17；源文件第 3974 行；SEQUENCE。
// Encode_NTN_NeighCellConfig_r17 只读不分配；Decode_NTN_NeighCellConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_NTN_NeighCellConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NTN_NeighCellConfig_r17(Encoder& enc, const NTN_NeighCellConfig_r17& value)
{
    enc.WriteBit(value.has_ntn_Config_r17);
    enc.WriteBit(value.has_carrierFreq_r17);
    enc.WriteBit(value.has_physCellId_r17);
    if (value.has_ntn_Config_r17) {
        Encode_NTN_Config_r17(enc, value.ntn_Config_r17);
    }
    if (value.has_carrierFreq_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.carrierFreq_r17), 0, 3279165);
    }
    if (value.has_physCellId_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.physCellId_r17), 0, 1007);
    }
    return enc.Error();
}

ErrorCode Decode_NTN_NeighCellConfig_r17(Decoder& dec, NTN_NeighCellConfig_r17& value)
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
        if (Decode_NTN_Config_r17(dec, value.ntn_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.carrierFreq_r17 = (ARFCN_ValueNR)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
        value.physCellId_r17 = (PhysCellId)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NTN_NeighCellConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NTN_NeighCellConfig_r17(NTN_NeighCellConfig_r17& value)
{
    if (value.has_ntn_Config_r17) {
        Free_NTN_Config_r17(value.ntn_Config_r17);
    }
    if (value.has_carrierFreq_r17) {
    }
    if (value.has_physCellId_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MCCH_RepetitionPeriodAndOffset_r17：ASN.1 MCCH-RepetitionPeriodAndOffset-r17；源文件第 4016 行；CHOICE。
// Encode_MCCH_RepetitionPeriodAndOffset_r17 只读不分配；Decode_MCCH_RepetitionPeriodAndOffset_r17 可能 malloc（失败时内部已释放并清零）；Free_MCCH_RepetitionPeriodAndOffset_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MCCH_RepetitionPeriodAndOffset_r17(Encoder& enc, const MCCH_RepetitionPeriodAndOffset_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 8);
    switch (value.tag) {
    case MCCH_RepetitionPeriodAndOffset_r17_Tag_rf1_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.rf1_r17), 0, 0);
        break;
    case MCCH_RepetitionPeriodAndOffset_r17_Tag_rf2_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.rf2_r17), 0, 1);
        break;
    case MCCH_RepetitionPeriodAndOffset_r17_Tag_rf4_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.rf4_r17), 0, 3);
        break;
    case MCCH_RepetitionPeriodAndOffset_r17_Tag_rf8_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.rf8_r17), 0, 7);
        break;
    case MCCH_RepetitionPeriodAndOffset_r17_Tag_rf16_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.rf16_r17), 0, 15);
        break;
    case MCCH_RepetitionPeriodAndOffset_r17_Tag_rf32_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.rf32_r17), 0, 31);
        break;
    case MCCH_RepetitionPeriodAndOffset_r17_Tag_rf64_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.rf64_r17), 0, 63);
        break;
    case MCCH_RepetitionPeriodAndOffset_r17_Tag_rf128_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.rf128_r17), 0, 127);
        break;
    case MCCH_RepetitionPeriodAndOffset_r17_Tag_rf256_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.rf256_r17), 0, 255);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MCCH_RepetitionPeriodAndOffset_r17(Decoder& dec, MCCH_RepetitionPeriodAndOffset_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 8, root_index)) {
        goto fail;
    }
    value.tag = (MCCH_RepetitionPeriodAndOffset_r17_Tag)root_index;
    switch (value.tag) {
    case MCCH_RepetitionPeriodAndOffset_r17_Tag_rf1_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 0, tmp_value)) { goto fail; }
        value.u.rf1_r17 = (int64_t)tmp_value;
        break;
    }
    case MCCH_RepetitionPeriodAndOffset_r17_Tag_rf2_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.u.rf2_r17 = (int64_t)tmp_value;
        break;
    }
    case MCCH_RepetitionPeriodAndOffset_r17_Tag_rf4_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.rf4_r17 = (int64_t)tmp_value;
        break;
    }
    case MCCH_RepetitionPeriodAndOffset_r17_Tag_rf8_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.u.rf8_r17 = (int64_t)tmp_value;
        break;
    }
    case MCCH_RepetitionPeriodAndOffset_r17_Tag_rf16_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.rf16_r17 = (int64_t)tmp_value;
        break;
    }
    case MCCH_RepetitionPeriodAndOffset_r17_Tag_rf32_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.rf32_r17 = (int64_t)tmp_value;
        break;
    }
    case MCCH_RepetitionPeriodAndOffset_r17_Tag_rf64_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.rf64_r17 = (int64_t)tmp_value;
        break;
    }
    case MCCH_RepetitionPeriodAndOffset_r17_Tag_rf128_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.u.rf128_r17 = (int64_t)tmp_value;
        break;
    }
    case MCCH_RepetitionPeriodAndOffset_r17_Tag_rf256_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
        value.u.rf256_r17 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MCCH_RepetitionPeriodAndOffset_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MCCH_RepetitionPeriodAndOffset_r17(MCCH_RepetitionPeriodAndOffset_r17& value)
{
    switch (value.tag) {
    case MCCH_RepetitionPeriodAndOffset_r17_Tag_rf1_r17:
        break;
    case MCCH_RepetitionPeriodAndOffset_r17_Tag_rf2_r17:
        break;
    case MCCH_RepetitionPeriodAndOffset_r17_Tag_rf4_r17:
        break;
    case MCCH_RepetitionPeriodAndOffset_r17_Tag_rf8_r17:
        break;
    case MCCH_RepetitionPeriodAndOffset_r17_Tag_rf16_r17:
        break;
    case MCCH_RepetitionPeriodAndOffset_r17_Tag_rf32_r17:
        break;
    case MCCH_RepetitionPeriodAndOffset_r17_Tag_rf64_r17:
        break;
    case MCCH_RepetitionPeriodAndOffset_r17_Tag_rf128_r17:
        break;
    case MCCH_RepetitionPeriodAndOffset_r17_Tag_rf256_r17:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MCCH_Config_r17：ASN.1 MCCH-Config-r17；源文件第 4008 行；SEQUENCE。
// Encode_MCCH_Config_r17 只读不分配；Decode_MCCH_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_MCCH_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MCCH_Config_r17(Encoder& enc, const MCCH_Config_r17& value)
{
    enc.WriteBit(value.has_mcch_WindowDuration_r17);
    Encode_MCCH_RepetitionPeriodAndOffset_r17(enc, value.mcch_RepetitionPeriodAndOffset_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.mcch_WindowStartSlot_r17), 0, 79);
    if (value.has_mcch_WindowDuration_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mcch_WindowDuration_r17), 0, 7);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.mcch_ModificationPeriod_r17), 0, 15);
    return enc.Error();
}

ErrorCode Decode_MCCH_Config_r17(Decoder& dec, MCCH_Config_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_MCCH_RepetitionPeriodAndOffset_r17(dec, value.mcch_RepetitionPeriodAndOffset_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.mcch_WindowStartSlot_r17 = (int64_t)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.mcch_WindowDuration_r17 = (MCCH_Config_r17_Mcch_WindowDuration_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.mcch_ModificationPeriod_r17 = (MCCH_Config_r17_Mcch_ModificationPeriod_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MCCH_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MCCH_Config_r17(MCCH_Config_r17& value)
{
    Free_MCCH_RepetitionPeriodAndOffset_r17(value.mcch_RepetitionPeriodAndOffset_r17);
    if (value.has_mcch_WindowDuration_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LocationAndBandwidthBroadcast_r17：ASN.1 LocationAndBandwidthBroadcast-r17；源文件第 23442 行；CHOICE。
// Encode_LocationAndBandwidthBroadcast_r17 只读不分配；Decode_LocationAndBandwidthBroadcast_r17 可能 malloc（失败时内部已释放并清零）；Free_LocationAndBandwidthBroadcast_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LocationAndBandwidthBroadcast_r17(Encoder& enc, const LocationAndBandwidthBroadcast_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case LocationAndBandwidthBroadcast_r17_Tag_sameAsSib1ConfiguredLocationAndBW:
        (void)0;
        break;
    case LocationAndBandwidthBroadcast_r17_Tag_locationAndBandwidth:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.locationAndBandwidth), 0, 37949);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_LocationAndBandwidthBroadcast_r17(Decoder& dec, LocationAndBandwidthBroadcast_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (LocationAndBandwidthBroadcast_r17_Tag)root_index;
    switch (value.tag) {
    case LocationAndBandwidthBroadcast_r17_Tag_sameAsSib1ConfiguredLocationAndBW: {
        (void)0;
        break;
    }
    case LocationAndBandwidthBroadcast_r17_Tag_locationAndBandwidth: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 37949, tmp_value)) { goto fail; }
        value.u.locationAndBandwidth = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_LocationAndBandwidthBroadcast_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LocationAndBandwidthBroadcast_r17(LocationAndBandwidthBroadcast_r17& value)
{
    switch (value.tag) {
    case LocationAndBandwidthBroadcast_r17_Tag_sameAsSib1ConfiguredLocationAndBW:
        break;
    case LocationAndBandwidthBroadcast_r17_Tag_locationAndBandwidth:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CFR_ConfigMCCH_MTCH_r17：ASN.1 CFR-ConfigMCCH-MTCH-r17；源文件第 23436 行；SEQUENCE。
// Encode_CFR_ConfigMCCH_MTCH_r17 只读不分配；Decode_CFR_ConfigMCCH_MTCH_r17 可能 malloc（失败时内部已释放并清零）；Free_CFR_ConfigMCCH_MTCH_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CFR_ConfigMCCH_MTCH_r17(Encoder& enc, const CFR_ConfigMCCH_MTCH_r17& value)
{
    enc.WriteBit(value.has_locationAndBandwidthBroadcast_r17);
    enc.WriteBit(value.has_pdsch_ConfigMCCH_r17);
    enc.WriteBit(value.has_commonControlResourceSetExt_r17);
    if (value.has_locationAndBandwidthBroadcast_r17) {
        Encode_LocationAndBandwidthBroadcast_r17(enc, value.locationAndBandwidthBroadcast_r17);
    }
    if (value.has_pdsch_ConfigMCCH_r17) {
        Encode_PDSCH_ConfigBroadcast_r17(enc, value.pdsch_ConfigMCCH_r17);
    }
    if (value.has_commonControlResourceSetExt_r17) {
        Encode_ControlResourceSet(enc, value.commonControlResourceSetExt_r17);
    }
    return enc.Error();
}

ErrorCode Decode_CFR_ConfigMCCH_MTCH_r17(Decoder& dec, CFR_ConfigMCCH_MTCH_r17& value)
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
        if (Decode_LocationAndBandwidthBroadcast_r17(dec, value.locationAndBandwidthBroadcast_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_PDSCH_ConfigBroadcast_r17(dec, value.pdsch_ConfigMCCH_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_ControlResourceSet(dec, value.commonControlResourceSetExt_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CFR_ConfigMCCH_MTCH_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CFR_ConfigMCCH_MTCH_r17(CFR_ConfigMCCH_MTCH_r17& value)
{
    if (value.has_locationAndBandwidthBroadcast_r17) {
        Free_LocationAndBandwidthBroadcast_r17(value.locationAndBandwidthBroadcast_r17);
    }
    if (value.has_pdsch_ConfigMCCH_r17) {
        Free_PDSCH_ConfigBroadcast_r17(value.pdsch_ConfigMCCH_r17);
    }
    if (value.has_commonControlResourceSetExt_r17) {
        Free_ControlResourceSet(value.commonControlResourceSetExt_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB20_r17_ExtGroup1：ASN.1 SIB20_r17_ExtGroup1；源文件第 4002 行；扩展添加组 [[ ]]。
// Encode_SIB20_r17_ExtGroup1 只读不分配；Decode_SIB20_r17_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SIB20_r17_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB20_r17_ExtGroup1(Encoder& enc, const SIB20_r17_ExtGroup1& value)
{
    enc.WriteBit(value.has_cfr_ConfigMCCH_MTCH_RedCap_r18);
    enc.WriteBit(value.has_mcch_ConfigRedCap_r18);
    if (value.has_cfr_ConfigMCCH_MTCH_RedCap_r18) {
        Encode_CFR_ConfigMCCH_MTCH_r17(enc, value.cfr_ConfigMCCH_MTCH_RedCap_r18);
    }
    if (value.has_mcch_ConfigRedCap_r18) {
        Encode_MCCH_Config_r17(enc, value.mcch_ConfigRedCap_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SIB20_r17_ExtGroup1(Decoder& dec, SIB20_r17_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_CFR_ConfigMCCH_MTCH_r17(dec, value.cfr_ConfigMCCH_MTCH_RedCap_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MCCH_Config_r17(dec, value.mcch_ConfigRedCap_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB20_r17_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB20_r17_ExtGroup1(SIB20_r17_ExtGroup1& value)
{
    if (value.has_cfr_ConfigMCCH_MTCH_RedCap_r18) {
        Free_CFR_ConfigMCCH_MTCH_r17(value.cfr_ConfigMCCH_MTCH_RedCap_r18);
    }
    if (value.has_mcch_ConfigRedCap_r18) {
        Free_MCCH_Config_r17(value.mcch_ConfigRedCap_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB20_r17：ASN.1 SIB20-r17；源文件第 3997 行；SEQUENCE。
// Encode_SIB20_r17 只读不分配；Decode_SIB20_r17 可能 malloc（失败时内部已释放并清零）；Free_SIB20_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB20_r17(Encoder& enc, const SIB20_r17& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_cfr_ConfigMCCH_MTCH_r17);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    Encode_MCCH_Config_r17(enc, value.mcch_Config_r17);
    if (value.has_cfr_ConfigMCCH_MTCH_r17) {
        Encode_CFR_ConfigMCCH_MTCH_r17(enc, value.cfr_ConfigMCCH_MTCH_r17);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SIB20_r17_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SIB20_r17(Decoder& dec, SIB20_r17& value)
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
        if (Decode_MCCH_Config_r17(dec, value.mcch_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_CFR_ConfigMCCH_MTCH_r17(dec, value.cfr_ConfigMCCH_MTCH_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
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
    if (Decode_SIB20_r17_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_SIB20_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB20_r17(SIB20_r17& value)
{
    Free_MCCH_Config_r17(value.mcch_Config_r17);
    if (value.has_cfr_ConfigMCCH_MTCH_r17) {
        Free_CFR_ConfigMCCH_MTCH_r17(value.cfr_ConfigMCCH_MTCH_r17);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_extGroup1) {
        Free_SIB20_r17_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MBS_FSAI_List_r17：ASN.1 MBS-FSAI-List-r17；源文件第 4038 行；SEQUENCE OF。
// Encode_MBS_FSAI_List_r17 只读不分配；Decode_MBS_FSAI_List_r17 可能 malloc（失败时内部已释放并清零）；Free_MBS_FSAI_List_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MBS_FSAI_List_r17(Encoder& enc, const MBS_FSAI_List_r17& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 64u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteFixedOctetString(value.items[i].bytes, value.items[i].length, 3, 3);
    }
    return enc.Error();
}

ErrorCode Decode_MBS_FSAI_List_r17(Decoder& dec, MBS_FSAI_List_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 64u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 64u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MBS_FSAI_r17*)std::malloc((std::size_t)value.count * sizeof(MBS_FSAI_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MBS_FSAI_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadFixedOctetString(string_bytes, 3)) { goto fail; }
    string_length = 3;
    value.items[i].bytes = string_bytes;
    value.items[i].length = string_length;
}
    return dec.Error();
    } while (false);
fail:
    Free_MBS_FSAI_List_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBS_FSAI_List_r17(MBS_FSAI_List_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            std::free(value.items[i].bytes);
            value.items[i].bytes = nullptr;
            value.items[i].length = 0;
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MBS_FSAI_InterFreqList_r17：ASN.1 MBS-FSAI-InterFreqList-r17；源文件第 4040 行；SEQUENCE OF。
// Encode_MBS_FSAI_InterFreqList_r17 只读不分配；Decode_MBS_FSAI_InterFreqList_r17 可能 malloc（失败时内部已释放并清零）；Free_MBS_FSAI_InterFreqList_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MBS_FSAI_InterFreqList_r17(Encoder& enc, const MBS_FSAI_InterFreqList_r17& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MBS_FSAI_InterFreq_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MBS_FSAI_InterFreqList_r17(Decoder& dec, MBS_FSAI_InterFreqList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MBS_FSAI_InterFreq_r17*)std::malloc((std::size_t)value.count * sizeof(MBS_FSAI_InterFreq_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MBS_FSAI_InterFreq_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MBS_FSAI_InterFreq_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MBS_FSAI_InterFreqList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBS_FSAI_InterFreqList_r17(MBS_FSAI_InterFreqList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MBS_FSAI_InterFreq_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB21_r17：ASN.1 SIB21-r17；源文件第 4031 行；SEQUENCE。
// Encode_SIB21_r17 只读不分配；Decode_SIB21_r17 可能 malloc（失败时内部已释放并清零）；Free_SIB21_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB21_r17(Encoder& enc, const SIB21_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_mbs_FSAI_IntraFreq_r17);
    enc.WriteBit(value.has_mbs_FSAI_InterFreqList_r17);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    if (value.has_mbs_FSAI_IntraFreq_r17) {
        Encode_MBS_FSAI_List_r17(enc, value.mbs_FSAI_IntraFreq_r17);
    }
    if (value.has_mbs_FSAI_InterFreqList_r17) {
        Encode_MBS_FSAI_InterFreqList_r17(enc, value.mbs_FSAI_InterFreqList_r17);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    return enc.Error();
}

ErrorCode Decode_SIB21_r17(Decoder& dec, SIB21_r17& value)
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
        if (Decode_MBS_FSAI_List_r17(dec, value.mbs_FSAI_IntraFreq_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MBS_FSAI_InterFreqList_r17(dec, value.mbs_FSAI_InterFreqList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB21_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB21_r17(SIB21_r17& value)
{
    if (value.has_mbs_FSAI_IntraFreq_r17) {
        Free_MBS_FSAI_List_r17(value.mbs_FSAI_IntraFreq_r17);
    }
    if (value.has_mbs_FSAI_InterFreqList_r17) {
        Free_MBS_FSAI_InterFreqList_r17(value.mbs_FSAI_InterFreqList_r17);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MBS_FSAI_InterFreq_r17：ASN.1 MBS-FSAI-InterFreq-r17；源文件第 4042 行；SEQUENCE。
// Encode_MBS_FSAI_InterFreq_r17 只读不分配；Decode_MBS_FSAI_InterFreq_r17 可能 malloc（失败时内部已释放并清零）；Free_MBS_FSAI_InterFreq_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MBS_FSAI_InterFreq_r17(Encoder& enc, const MBS_FSAI_InterFreq_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.dl_CarrierFreq_r17), 0, 3279165);
    Encode_MBS_FSAI_List_r17(enc, value.mbs_FSAI_List_r17);
    return enc.Error();
}

ErrorCode Decode_MBS_FSAI_InterFreq_r17(Decoder& dec, MBS_FSAI_InterFreq_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.dl_CarrierFreq_r17 = (ARFCN_ValueNR)tmp_value;
    }
    {
        if (Decode_MBS_FSAI_List_r17(dec, value.mbs_FSAI_List_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MBS_FSAI_InterFreq_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBS_FSAI_InterFreq_r17(MBS_FSAI_InterFreq_r17& value)
{
    Free_MBS_FSAI_List_r17(value.mbs_FSAI_List_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ATG_NeighCellConfigList_r18：ASN.1 ATG-NeighCellConfigList-r18；源文件第 4060 行；SEQUENCE OF。
// Encode_ATG_NeighCellConfigList_r18 只读不分配；Decode_ATG_NeighCellConfigList_r18 可能 malloc（失败时内部已释放并清零）；Free_ATG_NeighCellConfigList_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ATG_NeighCellConfigList_r18(Encoder& enc, const ATG_NeighCellConfigList_r18& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_ATG_NeighCellConfig_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_ATG_NeighCellConfigList_r18(Decoder& dec, ATG_NeighCellConfigList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (ATG_NeighCellConfig_r18*)std::malloc((std::size_t)value.count * sizeof(ATG_NeighCellConfig_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(ATG_NeighCellConfig_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_ATG_NeighCellConfig_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_ATG_NeighCellConfigList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ATG_NeighCellConfigList_r18(ATG_NeighCellConfigList_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_ATG_NeighCellConfig_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ATG_Config_r18：ASN.1 ATG-Config-r18；源文件第 4320 行；SEQUENCE。
// Encode_ATG_Config_r18 只读不分配；Decode_ATG_Config_r18 可能 malloc（失败时内部已释放并清零）；Free_ATG_Config_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ATG_Config_r18(Encoder& enc, const ATG_Config_r18& value)
{
    enc.WriteBit(value.has_atg_gNB_Location_r18);
    enc.WriteBit(value.has_heightgNB_r18);
    enc.WriteBit(value.has_cellSpecificKoffset_r18);
    enc.WriteBit(value.has_ta_ReportATG_r18);
    if (value.has_atg_gNB_Location_r18) {
        enc.WriteSemiConstrainedOctetString(value.atg_gNB_Location_r18.bytes, value.atg_gNB_Location_r18.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_heightgNB_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.heightgNB_r18), -16384, 16383);
    }
    if (value.has_cellSpecificKoffset_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cellSpecificKoffset_r18), 1, 3);
    }
    if (value.has_ta_ReportATG_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ta_ReportATG_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_ATG_Config_r18(Decoder& dec, ATG_Config_r18& value)
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
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.atg_gNB_Location_r18.bytes = string_bytes;
        value.atg_gNB_Location_r18.length = string_length;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-16384, 16383, tmp_value)) { goto fail; }
        value.heightgNB_r18 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 3, tmp_value)) { goto fail; }
        value.cellSpecificKoffset_r18 = (int64_t)tmp_value;
    }
    if (present_3) {
        value.ta_ReportATG_r18 = (ATG_Config_r18_Ta_ReportATG_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ATG_Config_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ATG_Config_r18(ATG_Config_r18& value)
{
    if (value.has_atg_gNB_Location_r18) {
        std::free(value.atg_gNB_Location_r18.bytes);
        value.atg_gNB_Location_r18.bytes = nullptr;
        value.atg_gNB_Location_r18.length = 0;
    }
    if (value.has_heightgNB_r18) {
    }
    if (value.has_cellSpecificKoffset_r18) {
    }
    if (value.has_ta_ReportATG_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB22_r18：ASN.1 SIB22-r18；源文件第 4052 行；SEQUENCE。
// Encode_SIB22_r18 只读不分配；Decode_SIB22_r18 可能 malloc（失败时内部已释放并清零）；Free_SIB22_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB22_r18(Encoder& enc, const SIB22_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_atg_Config_r18);
    enc.WriteBit(value.has_hs_ATG_cellReselectionSet_r18);
    enc.WriteBit(value.has_atg_NeighCellConfigList_r18);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    if (value.has_atg_Config_r18) {
        Encode_ATG_Config_r18(enc, value.atg_Config_r18);
    }
    if (value.has_hs_ATG_cellReselectionSet_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.hs_ATG_cellReselectionSet_r18), 0, 0);
    }
    if (value.has_atg_NeighCellConfigList_r18) {
        Encode_ATG_NeighCellConfigList_r18(enc, value.atg_NeighCellConfigList_r18);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    return enc.Error();
}

ErrorCode Decode_SIB22_r18(Decoder& dec, SIB22_r18& value)
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
        if (Decode_ATG_Config_r18(dec, value.atg_Config_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.hs_ATG_cellReselectionSet_r18 = (SIB22_r18_Hs_ATG_cellReselectionSet_r18)0;
    }
    if (present_2) {
        if (Decode_ATG_NeighCellConfigList_r18(dec, value.atg_NeighCellConfigList_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB22_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB22_r18(SIB22_r18& value)
{
    if (value.has_atg_Config_r18) {
        Free_ATG_Config_r18(value.atg_Config_r18);
    }
    if (value.has_hs_ATG_cellReselectionSet_r18) {
    }
    if (value.has_atg_NeighCellConfigList_r18) {
        Free_ATG_NeighCellConfigList_r18(value.atg_NeighCellConfigList_r18);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ATG_NeighCellConfig_r18：ASN.1 ATG-NeighCellConfig-r18；源文件第 4062 行；SEQUENCE。
// Encode_ATG_NeighCellConfig_r18 只读不分配；Decode_ATG_NeighCellConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_ATG_NeighCellConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ATG_NeighCellConfig_r18(Encoder& enc, const ATG_NeighCellConfig_r18& value)
{
    enc.WriteBit(value.has_atg_gNB_Location_r18);
    enc.WriteBit(value.has_heightgNB_r18);
    enc.WriteBit(value.has_carrierFreq_r18);
    enc.WriteBit(value.has_physCellId_r18);
    if (value.has_atg_gNB_Location_r18) {
        enc.WriteSemiConstrainedOctetString(value.atg_gNB_Location_r18.bytes, value.atg_gNB_Location_r18.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_heightgNB_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.heightgNB_r18), -16384, 16383);
    }
    if (value.has_carrierFreq_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.carrierFreq_r18), 0, 3279165);
    }
    if (value.has_physCellId_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.physCellId_r18), 0, 1007);
    }
    return enc.Error();
}

ErrorCode Decode_ATG_NeighCellConfig_r18(Decoder& dec, ATG_NeighCellConfig_r18& value)
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
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.atg_gNB_Location_r18.bytes = string_bytes;
        value.atg_gNB_Location_r18.length = string_length;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-16384, 16383, tmp_value)) { goto fail; }
        value.heightgNB_r18 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.carrierFreq_r18 = (ARFCN_ValueNR)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
        value.physCellId_r18 = (PhysCellId)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ATG_NeighCellConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ATG_NeighCellConfig_r18(ATG_NeighCellConfig_r18& value)
{
    if (value.has_atg_gNB_Location_r18) {
        std::free(value.atg_gNB_Location_r18.bytes);
        value.atg_gNB_Location_r18.bytes = nullptr;
        value.atg_gNB_Location_r18.length = 0;
    }
    if (value.has_heightgNB_r18) {
    }
    if (value.has_carrierFreq_r18) {
    }
    if (value.has_physCellId_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB23_r18：ASN.1 SIB23-r18；源文件第 4073 行；SEQUENCE。
// Encode_SIB23_r18 只读不分配；Decode_SIB23_r18 可能 malloc（失败时内部已释放并清零）；Free_SIB23_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB23_r18(Encoder& enc, const SIB23_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.segmentNumber_r18), 0, 63);
    enc.WriteConstrainedInteger((std::int64_t)(value.segmentType_r18), 0, 1);
    enc.WriteSemiConstrainedOctetString(value.segmentContainer_r18.bytes, value.segmentContainer_r18.length, 0, 0xFFFFFFFFu);
    return enc.Error();
}

ErrorCode Decode_SIB23_r18(Decoder& dec, SIB23_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.segmentNumber_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.segmentType_r18 = (SIB23_r18_SegmentType_r18)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.segmentContainer_r18.bytes = string_bytes;
        value.segmentContainer_r18.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB23_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB23_r18(SIB23_r18& value)
{
    std::free(value.segmentContainer_r18.bytes);
    value.segmentContainer_r18.bytes = nullptr;
    value.segmentContainer_r18.length = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PosConfigCommonNR_r18：ASN.1 SL-PosConfigCommonNR-r18；源文件第 4085 行；SEQUENCE。
// Encode_SL_PosConfigCommonNR_r18 只读不分配；Decode_SL_PosConfigCommonNR_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_PosConfigCommonNR_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PosConfigCommonNR_r18(Encoder& enc, const SL_PosConfigCommonNR_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_PosFreqInfoList_r18);
    enc.WriteBit(value.has_sl_PosUE_SelectedConfig_r18);
    enc.WriteBit(value.has_sl_PosNR_AnchorCarrierFreqList_r18);
    enc.WriteBit(value.has_sl_PosMeasConfigCommon_r18);
    enc.WriteBit(value.has_sl_PosOffsetDFN_r18);
    enc.WriteBit(value.has_sl_PosSSB_PriorityNR_r18);
    if (value.has_sl_PosFreqInfoList_r18) {
enc.WriteConstrainedLength(value.sl_PosFreqInfoList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_PosFreqInfoList_r18_count; ++i) {
    Encode_SL_FreqConfigCommon_r16(enc, value.sl_PosFreqInfoList_r18_items[i]);
}
    }
    if (value.has_sl_PosUE_SelectedConfig_r18) {
        Encode_SL_UE_SelectedConfig_r16(enc, value.sl_PosUE_SelectedConfig_r18);
    }
    if (value.has_sl_PosNR_AnchorCarrierFreqList_r18) {
        Encode_SL_NR_AnchorCarrierFreqList_r16(enc, value.sl_PosNR_AnchorCarrierFreqList_r18);
    }
    if (value.has_sl_PosMeasConfigCommon_r18) {
        Encode_SL_MeasConfigCommon_r16(enc, value.sl_PosMeasConfigCommon_r18);
    }
    if (value.has_sl_PosOffsetDFN_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PosOffsetDFN_r18), 1, 1000);
    }
    if (value.has_sl_PosSSB_PriorityNR_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PosSSB_PriorityNR_r18), 1, 8);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PosConfigCommonNR_r18(Decoder& dec, SL_PosConfigCommonNR_r18& value)
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
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_PosFreqInfoList_r18_count)) { goto fail; }
if (value.sl_PosFreqInfoList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_PosFreqInfoList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_PosFreqInfoList_r18_count > 0u) {
    value.sl_PosFreqInfoList_r18_items = (SL_FreqConfigCommon_r16*)std::malloc((std::size_t)value.sl_PosFreqInfoList_r18_count * sizeof(SL_FreqConfigCommon_r16));
    if (value.sl_PosFreqInfoList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_PosFreqInfoList_r18_items, 0, (std::size_t)value.sl_PosFreqInfoList_r18_count * sizeof(SL_FreqConfigCommon_r16));
}
for (std::uint32_t i = 0; i < value.sl_PosFreqInfoList_r18_count; ++i) {
    if (Decode_SL_FreqConfigCommon_r16(dec, value.sl_PosFreqInfoList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
        if (Decode_SL_UE_SelectedConfig_r16(dec, value.sl_PosUE_SelectedConfig_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SL_NR_AnchorCarrierFreqList_r16(dec, value.sl_PosNR_AnchorCarrierFreqList_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SL_MeasConfigCommon_r16(dec, value.sl_PosMeasConfigCommon_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 1000, tmp_value)) { goto fail; }
        value.sl_PosOffsetDFN_r18 = (int64_t)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.sl_PosSSB_PriorityNR_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PosConfigCommonNR_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PosConfigCommonNR_r18(SL_PosConfigCommonNR_r18& value)
{
    if (value.has_sl_PosFreqInfoList_r18) {
        if (value.sl_PosFreqInfoList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_PosFreqInfoList_r18_count; ++i) {
                Free_SL_FreqConfigCommon_r16(value.sl_PosFreqInfoList_r18_items[i]);
            }
            std::free(value.sl_PosFreqInfoList_r18_items);
            value.sl_PosFreqInfoList_r18_items = nullptr;
        }
        value.sl_PosFreqInfoList_r18_count = 0;
    }
    if (value.has_sl_PosUE_SelectedConfig_r18) {
        Free_SL_UE_SelectedConfig_r16(value.sl_PosUE_SelectedConfig_r18);
    }
    if (value.has_sl_PosNR_AnchorCarrierFreqList_r18) {
        Free_SL_NR_AnchorCarrierFreqList_r16(value.sl_PosNR_AnchorCarrierFreqList_r18);
    }
    if (value.has_sl_PosMeasConfigCommon_r18) {
        Free_SL_MeasConfigCommon_r16(value.sl_PosMeasConfigCommon_r18);
    }
    if (value.has_sl_PosOffsetDFN_r18) {
    }
    if (value.has_sl_PosSSB_PriorityNR_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB23_IEs_r18：ASN.1 SIB23-IEs-r18；源文件第 4079 行；SEQUENCE。
// Encode_SIB23_IEs_r18 只读不分配；Decode_SIB23_IEs_r18 可能 malloc（失败时内部已释放并清零）；Free_SIB23_IEs_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB23_IEs_r18(Encoder& enc, const SIB23_IEs_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    Encode_SL_PosConfigCommonNR_r18(enc, value.sl_PosConfigCommonNR_r18);
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    return enc.Error();
}

ErrorCode Decode_SIB23_IEs_r18(Decoder& dec, SIB23_IEs_r18& value)
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
        if (Decode_SL_PosConfigCommonNR_r18(dec, value.sl_PosConfigCommonNR_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB23_IEs_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB23_IEs_r18(SIB23_IEs_r18& value)
{
    Free_SL_PosConfigCommonNR_r18(value.sl_PosConfigCommonNR_r18);
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB24_r18：ASN.1 SIB24-r18；源文件第 4098 行；SEQUENCE。
// Encode_SIB24_r18 只读不分配；Decode_SIB24_r18 可能 malloc（失败时内部已释放并清零）；Free_SIB24_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB24_r18(Encoder& enc, const SIB24_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_multicastMCCH_Config_r18);
    enc.WriteBit(value.has_cfr_ConfigMCCH_MTCH_r18);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    if (value.has_multicastMCCH_Config_r18) {
        Encode_MCCH_Config_r17(enc, value.multicastMCCH_Config_r18);
    }
    if (value.has_cfr_ConfigMCCH_MTCH_r18) {
        Encode_CFR_ConfigMCCH_MTCH_r17(enc, value.cfr_ConfigMCCH_MTCH_r18);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    return enc.Error();
}

ErrorCode Decode_SIB24_r18(Decoder& dec, SIB24_r18& value)
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
        if (Decode_MCCH_Config_r17(dec, value.multicastMCCH_Config_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CFR_ConfigMCCH_MTCH_r17(dec, value.cfr_ConfigMCCH_MTCH_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB24_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB24_r18(SIB24_r18& value)
{
    if (value.has_multicastMCCH_Config_r18) {
        Free_MCCH_Config_r17(value.multicastMCCH_Config_r18);
    }
    if (value.has_cfr_ConfigMCCH_MTCH_r18) {
        Free_CFR_ConfigMCCH_MTCH_r17(value.cfr_ConfigMCCH_MTCH_r18);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CoverageAreaInfoList_r18：ASN.1 CoverageAreaInfoList-r18；源文件第 4114 行；SEQUENCE OF。
// Encode_CoverageAreaInfoList_r18 只读不分配；Decode_CoverageAreaInfoList_r18 可能 malloc（失败时内部已释放并清零）；Free_CoverageAreaInfoList_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CoverageAreaInfoList_r18(Encoder& enc, const CoverageAreaInfoList_r18& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_CoverageAreaInfo_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_CoverageAreaInfoList_r18(Decoder& dec, CoverageAreaInfoList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (CoverageAreaInfo_r18*)std::malloc((std::size_t)value.count * sizeof(CoverageAreaInfo_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(CoverageAreaInfo_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_CoverageAreaInfo_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_CoverageAreaInfoList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CoverageAreaInfoList_r18(CoverageAreaInfoList_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_CoverageAreaInfo_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB25_r18：ASN.1 SIB25-r18；源文件第 4108 行；SEQUENCE。
// Encode_SIB25_r18 只读不分配；Decode_SIB25_r18 可能 malloc（失败时内部已释放并清零）；Free_SIB25_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB25_r18(Encoder& enc, const SIB25_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_coverageAreaInfoList_r18);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    if (value.has_coverageAreaInfoList_r18) {
        Encode_CoverageAreaInfoList_r18(enc, value.coverageAreaInfoList_r18);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    return enc.Error();
}

ErrorCode Decode_SIB25_r18(Decoder& dec, SIB25_r18& value)
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
        if (Decode_CoverageAreaInfoList_r18(dec, value.coverageAreaInfoList_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB25_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB25_r18(SIB25_r18& value)
{
    if (value.has_coverageAreaInfoList_r18) {
        Free_CoverageAreaInfoList_r18(value.coverageAreaInfoList_r18);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CoverageAreaInfo_r18：ASN.1 CoverageAreaInfo-r18；源文件第 4116 行；SEQUENCE。
// Encode_CoverageAreaInfo_r18 只读不分配；Decode_CoverageAreaInfo_r18 可能 malloc（失败时内部已释放并清零）；Free_CoverageAreaInfo_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CoverageAreaInfo_r18(Encoder& enc, const CoverageAreaInfo_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tn_AreaId_r18), 1, 32);
    enc.WriteSemiConstrainedOctetString(value.tn_ReferenceLocation_r18.bytes, value.tn_ReferenceLocation_r18.length, 0, 0xFFFFFFFFu);
    enc.WriteConstrainedInteger((std::int64_t)(value.tn_DistanceRadius_r18), 0, 65535);
    return enc.Error();
}

ErrorCode Decode_CoverageAreaInfo_r18(Decoder& dec, CoverageAreaInfo_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.tn_AreaId_r18 = (TN_AreaId_r18)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.tn_ReferenceLocation_r18.bytes = string_bytes;
        value.tn_ReferenceLocation_r18.length = string_length;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.tn_DistanceRadius_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CoverageAreaInfo_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CoverageAreaInfo_r18(CoverageAreaInfo_r18& value)
{
    std::free(value.tn_ReferenceLocation_r18.bytes);
    value.tn_ReferenceLocation_r18.bytes = nullptr;
    value.tn_ReferenceLocation_r18.length = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PosSIB_MappingInfo_r16：ASN.1 PosSIB-MappingInfo-r16；源文件第 4216 行；SEQUENCE OF。
// Encode_PosSIB_MappingInfo_r16 只读不分配；Decode_PosSIB_MappingInfo_r16 可能 malloc（失败时内部已释放并清零）；Free_PosSIB_MappingInfo_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PosSIB_MappingInfo_r16(Encoder& enc, const PosSIB_MappingInfo_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PosSIB_Type_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_PosSIB_MappingInfo_r16(Decoder& dec, PosSIB_MappingInfo_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PosSIB_Type_r16*)std::malloc((std::size_t)value.count * sizeof(PosSIB_Type_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PosSIB_Type_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PosSIB_Type_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_PosSIB_MappingInfo_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PosSIB_MappingInfo_r16(PosSIB_MappingInfo_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PosSIB_Type_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PosSchedulingInfo_r16：ASN.1 PosSchedulingInfo-r16；源文件第 4208 行；SEQUENCE。
// Encode_PosSchedulingInfo_r16 只读不分配；Decode_PosSchedulingInfo_r16 可能 malloc（失败时内部已释放并清零）；Free_PosSchedulingInfo_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PosSchedulingInfo_r16(Encoder& enc, const PosSchedulingInfo_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_offsetToSI_Used_r16);
    if (value.has_offsetToSI_Used_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.offsetToSI_Used_r16), 0, 0);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.posSI_Periodicity_r16), 0, 6);
    enc.WriteConstrainedInteger((std::int64_t)(value.posSI_BroadcastStatus_r16), 0, 1);
    Encode_PosSIB_MappingInfo_r16(enc, value.posSIB_MappingInfo_r16);
    return enc.Error();
}

ErrorCode Decode_PosSchedulingInfo_r16(Decoder& dec, PosSchedulingInfo_r16& value)
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
        value.offsetToSI_Used_r16 = (PosSchedulingInfo_r16_OffsetToSI_Used_r16)0;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.posSI_Periodicity_r16 = (PosSchedulingInfo_r16_PosSI_Periodicity_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.posSI_BroadcastStatus_r16 = (PosSchedulingInfo_r16_PosSI_BroadcastStatus_r16)tmp_value;
    }
    {
        if (Decode_PosSIB_MappingInfo_r16(dec, value.posSIB_MappingInfo_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PosSchedulingInfo_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PosSchedulingInfo_r16(PosSchedulingInfo_r16& value)
{
    if (value.has_offsetToSI_Used_r16) {
    }
    Free_PosSIB_MappingInfo_r16(value.posSIB_MappingInfo_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PosSIB_Type_r16：ASN.1 PosSIB-Type-r16；源文件第 4218 行；SEQUENCE。
// Encode_PosSIB_Type_r16 只读不分配；Decode_PosSIB_Type_r16 可能 malloc（失败时内部已释放并清零）；Free_PosSIB_Type_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PosSIB_Type_r16(Encoder& enc, const PosSIB_Type_r16& value)
{
    enc.WriteBit(value.has_encrypted_r16);
    enc.WriteBit(value.has_gnss_id_r16);
    enc.WriteBit(value.has_sbas_id_r16);
    enc.WriteBit(value.has_areaScope_r16);
    if (value.has_encrypted_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.encrypted_r16), 0, 0);
    }
    if (value.has_gnss_id_r16) {
        Encode_GNSS_ID_r16(enc, value.gnss_id_r16);
    }
    if (value.has_sbas_id_r16) {
        Encode_SBAS_ID_r16(enc, value.sbas_id_r16);
    }
    {
        const std::int64_t enum_value = (std::int64_t)(value.posSibType_r16);
        if (enum_value < 0) {
            return enc.Fail(ErrorCode_InvalidEnumValue);
        }
        if (enum_value < 37) {
            enc.WriteBit(false);
            enc.WriteConstrainedInteger(enum_value, 0, 36);
        } else {
            enc.WriteBit(true);
            enc.WriteNormallySmallNonNegative((std::uint32_t)(enum_value - 37));
        }
    }
    if (value.has_areaScope_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.areaScope_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PosSIB_Type_r16(Decoder& dec, PosSIB_Type_r16& value)
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
        value.encrypted_r16 = (PosSIB_Type_r16_Encrypted_r16)0;
    }
    if (present_1) {
        if (Decode_GNSS_ID_r16(dec, value.gnss_id_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SBAS_ID_r16(dec, value.sbas_id_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool enum_extension = false;
        if (!dec.ReadBit(enum_extension)) { goto fail; }
        std::int64_t enum_value = 0;
        if (!enum_extension) {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 36, root_index)) { goto fail; }
    enum_value = root_index;
        } else {
    std::uint32_t extension_index = 0;
    if (!dec.ReadNormallySmallNonNegative(extension_index)) { goto fail; }
    enum_value = (std::int64_t)37 + (std::int64_t)extension_index;
        }
        value.posSibType_r16 = (PosSIB_Type_r16_PosSibType_r16)enum_value;
    }
    if (present_3) {
        value.areaScope_r16 = (PosSIB_Type_r16_AreaScope_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PosSIB_Type_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PosSIB_Type_r16(PosSIB_Type_r16& value)
{
    if (value.has_encrypted_r16) {
    }
    if (value.has_gnss_id_r16) {
        Free_GNSS_ID_r16(value.gnss_id_r16);
    }
    if (value.has_sbas_id_r16) {
        Free_SBAS_ID_r16(value.sbas_id_r16);
    }
    if (value.has_areaScope_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIBpos_r16：ASN.1 SIBpos-r16；源文件第 4245 行；SEQUENCE。
// Encode_SIBpos_r16 只读不分配；Decode_SIBpos_r16 可能 malloc（失败时内部已释放并清零）；Free_SIBpos_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIBpos_r16(Encoder& enc, const SIBpos_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteSemiConstrainedOctetString(value.assistanceDataSIB_Element_r16.bytes, value.assistanceDataSIB_Element_r16.length, 0, 0xFFFFFFFFu);
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    return enc.Error();
}

ErrorCode Decode_SIBpos_r16(Decoder& dec, SIBpos_r16& value)
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
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.assistanceDataSIB_Element_r16.bytes = string_bytes;
        value.assistanceDataSIB_Element_r16.length = string_length;
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIBpos_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIBpos_r16(SIBpos_r16& value)
{
    std::free(value.assistanceDataSIB_Element_r16.bytes);
    value.assistanceDataSIB_Element_r16.bytes = nullptr;
    value.assistanceDataSIB_Element_r16.length = 0;
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// AvailabilityCombinationsPerCell_r16_ExtGroup1：ASN.1 AvailabilityCombinationsPerCell_r16_ExtGroup1；源文件第 4336 行；扩展添加组 [[ ]]。
// Encode_AvailabilityCombinationsPerCell_r16_ExtGroup1 只读不分配；Decode_AvailabilityCombinationsPerCell_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_AvailabilityCombinationsPerCell_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_AvailabilityCombinationsPerCell_r16_ExtGroup1(Encoder& enc, const AvailabilityCombinationsPerCell_r16_ExtGroup1& value)
{
    enc.WriteBit(value.has_availabilityCombinationsRB_Groups_r17);
    if (value.has_availabilityCombinationsRB_Groups_r17) {
enc.WriteConstrainedLength(value.availabilityCombinationsRB_Groups_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.availabilityCombinationsRB_Groups_r17_count; ++i) {
    Encode_AvailabilityCombinationRB_Groups_r17(enc, value.availabilityCombinationsRB_Groups_r17_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_AvailabilityCombinationsPerCell_r16_ExtGroup1(Decoder& dec, AvailabilityCombinationsPerCell_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.availabilityCombinationsRB_Groups_r17_count)) { goto fail; }
if (value.availabilityCombinationsRB_Groups_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.availabilityCombinationsRB_Groups_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.availabilityCombinationsRB_Groups_r17_count > 0u) {
    value.availabilityCombinationsRB_Groups_r17_items = (AvailabilityCombinationRB_Groups_r17*)std::malloc((std::size_t)value.availabilityCombinationsRB_Groups_r17_count * sizeof(AvailabilityCombinationRB_Groups_r17));
    if (value.availabilityCombinationsRB_Groups_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.availabilityCombinationsRB_Groups_r17_items, 0, (std::size_t)value.availabilityCombinationsRB_Groups_r17_count * sizeof(AvailabilityCombinationRB_Groups_r17));
}
for (std::uint32_t i = 0; i < value.availabilityCombinationsRB_Groups_r17_count; ++i) {
    if (Decode_AvailabilityCombinationRB_Groups_r17(dec, value.availabilityCombinationsRB_Groups_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_AvailabilityCombinationsPerCell_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AvailabilityCombinationsPerCell_r16_ExtGroup1(AvailabilityCombinationsPerCell_r16_ExtGroup1& value)
{
    if (value.has_availabilityCombinationsRB_Groups_r17) {
        if (value.availabilityCombinationsRB_Groups_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.availabilityCombinationsRB_Groups_r17_count; ++i) {
                Free_AvailabilityCombinationRB_Groups_r17(value.availabilityCombinationsRB_Groups_r17_items[i]);
            }
            std::free(value.availabilityCombinationsRB_Groups_r17_items);
            value.availabilityCombinationsRB_Groups_r17_items = nullptr;
        }
        value.availabilityCombinationsRB_Groups_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// AvailabilityCombinationsPerCell_r16_ExtGroup2：ASN.1 AvailabilityCombinationsPerCell_r16_ExtGroup2；源文件第 4339 行；扩展添加组 [[ ]]。
// Encode_AvailabilityCombinationsPerCell_r16_ExtGroup2 只读不分配；Decode_AvailabilityCombinationsPerCell_r16_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_AvailabilityCombinationsPerCell_r16_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_AvailabilityCombinationsPerCell_r16_ExtGroup2(Encoder& enc, const AvailabilityCombinationsPerCell_r16_ExtGroup2& value)
{
    enc.WriteBit(value.has_positionInDCI_AI_RBGroups_v1720);
    if (value.has_positionInDCI_AI_RBGroups_v1720) {
        enc.WriteConstrainedInteger((std::int64_t)(value.positionInDCI_AI_RBGroups_v1720), 0, 127);
    }
    return enc.Error();
}

ErrorCode Decode_AvailabilityCombinationsPerCell_r16_ExtGroup2(Decoder& dec, AvailabilityCombinationsPerCell_r16_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.positionInDCI_AI_RBGroups_v1720 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_AvailabilityCombinationsPerCell_r16_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AvailabilityCombinationsPerCell_r16_ExtGroup2(AvailabilityCombinationsPerCell_r16_ExtGroup2& value)
{
    if (value.has_positionInDCI_AI_RBGroups_v1720) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// AvailabilityCombinationsPerCell_r16：ASN.1 AvailabilityCombinationsPerCell-r16；源文件第 4330 行；SEQUENCE。
// Encode_AvailabilityCombinationsPerCell_r16 只读不分配；Decode_AvailabilityCombinationsPerCell_r16 可能 malloc（失败时内部已释放并清零）；Free_AvailabilityCombinationsPerCell_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_AvailabilityCombinationsPerCell_r16(Encoder& enc, const AvailabilityCombinationsPerCell_r16& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_positionInDCI_AI_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.availabilityCombinationsPerCellIndex_r16), 0, 512);
    enc.WriteFixedBitString(value.iab_DU_CellIdentity_r16.bytes, value.iab_DU_CellIdentity_r16.bitLength, 36, 36);
    if (value.has_positionInDCI_AI_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.positionInDCI_AI_r16), 0, 127);
    }
enc.WriteConstrainedLength(value.availabilityCombinations_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.availabilityCombinations_r16_count; ++i) {
    Encode_AvailabilityCombination_r16(enc, value.availabilityCombinations_r16_items[i]);
}
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_AvailabilityCombinationsPerCell_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_AvailabilityCombinationsPerCell_r16_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_AvailabilityCombinationsPerCell_r16(Decoder& dec, AvailabilityCombinationsPerCell_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 512, tmp_value)) { goto fail; }
        value.availabilityCombinationsPerCellIndex_r16 = (AvailabilityCombinationsPerCellIndex_r16)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 36)) { goto fail; }
        string_length = 36;
        value.iab_DU_CellIdentity_r16.bytes = string_bytes;
        value.iab_DU_CellIdentity_r16.bitLength = string_length;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.positionInDCI_AI_r16 = (int64_t)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.availabilityCombinations_r16_count)) { goto fail; }
if (value.availabilityCombinations_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.availabilityCombinations_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.availabilityCombinations_r16_count > 0u) {
    value.availabilityCombinations_r16_items = (AvailabilityCombination_r16*)std::malloc((std::size_t)value.availabilityCombinations_r16_count * sizeof(AvailabilityCombination_r16));
    if (value.availabilityCombinations_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.availabilityCombinations_r16_items, 0, (std::size_t)value.availabilityCombinations_r16_count * sizeof(AvailabilityCombination_r16));
}
for (std::uint32_t i = 0; i < value.availabilityCombinations_r16_count; ++i) {
    if (Decode_AvailabilityCombination_r16(dec, value.availabilityCombinations_r16_items[i]) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_AvailabilityCombinationsPerCell_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_AvailabilityCombinationsPerCell_r16_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_AvailabilityCombinationsPerCell_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AvailabilityCombinationsPerCell_r16(AvailabilityCombinationsPerCell_r16& value)
{
    std::free(value.iab_DU_CellIdentity_r16.bytes);
    value.iab_DU_CellIdentity_r16.bytes = nullptr;
    value.iab_DU_CellIdentity_r16.bitLength = 0;
    if (value.has_positionInDCI_AI_r16) {
    }
    if (value.availabilityCombinations_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.availabilityCombinations_r16_count; ++i) {
            Free_AvailabilityCombination_r16(value.availabilityCombinations_r16_items[i]);
        }
        std::free(value.availabilityCombinations_r16_items);
        value.availabilityCombinations_r16_items = nullptr;
    }
    value.availabilityCombinations_r16_count = 0;
    if (value.has_extGroup1) {
        Free_AvailabilityCombinationsPerCell_r16_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_AvailabilityCombinationsPerCell_r16_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// AvailabilityCombination_r16：ASN.1 AvailabilityCombination-r16；源文件第 4346 行；SEQUENCE。
// Encode_AvailabilityCombination_r16 只读不分配；Decode_AvailabilityCombination_r16 可能 malloc（失败时内部已释放并清零）；Free_AvailabilityCombination_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_AvailabilityCombination_r16(Encoder& enc, const AvailabilityCombination_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.availabilityCombinationId_r16), 0, 511);
enc.WriteConstrainedLength(value.resourceAvailability_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.resourceAvailability_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.resourceAvailability_r16_items[i]), 0, 7);
}
    return enc.Error();
}

ErrorCode Decode_AvailabilityCombination_r16(Decoder& dec, AvailabilityCombination_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
        value.availabilityCombinationId_r16 = (AvailabilityCombinationId_r16)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.resourceAvailability_r16_count)) { goto fail; }
if (value.resourceAvailability_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.resourceAvailability_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.resourceAvailability_r16_count > 0u) {
    value.resourceAvailability_r16_items = (int64_t*)std::malloc((std::size_t)value.resourceAvailability_r16_count * sizeof(int64_t));
    if (value.resourceAvailability_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.resourceAvailability_r16_items, 0, (std::size_t)value.resourceAvailability_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.resourceAvailability_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.resourceAvailability_r16_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_AvailabilityCombination_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AvailabilityCombination_r16(AvailabilityCombination_r16& value)
{
    if (value.resourceAvailability_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.resourceAvailability_r16_count; ++i) {
        }
        std::free(value.resourceAvailability_r16_items);
        value.resourceAvailability_r16_items = nullptr;
    }
    value.resourceAvailability_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// AvailabilityCombinationRB_Groups_r17：ASN.1 AvailabilityCombinationRB-Groups-r17；源文件第 4353 行；SEQUENCE。
// Encode_AvailabilityCombinationRB_Groups_r17 只读不分配；Decode_AvailabilityCombinationRB_Groups_r17 可能 malloc（失败时内部已释放并清零）；Free_AvailabilityCombinationRB_Groups_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_AvailabilityCombinationRB_Groups_r17(Encoder& enc, const AvailabilityCombinationRB_Groups_r17& value)
{
    enc.WriteBit(value.has_rb_SetGroups_r17);
    enc.WriteBit(value.has_resourceAvailability_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.availabilityCombinationId_r17), 0, 511);
    if (value.has_rb_SetGroups_r17) {
enc.WriteConstrainedLength(value.rb_SetGroups_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.rb_SetGroups_r17_count; ++i) {
    Encode_RB_SetGroup_r17(enc, value.rb_SetGroups_r17_items[i]);
}
    }
    if (value.has_resourceAvailability_r17) {
enc.WriteConstrainedLength(value.resourceAvailability_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.resourceAvailability_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.resourceAvailability_r17_items[i]), 0, 7);
}
    }
    return enc.Error();
}

ErrorCode Decode_AvailabilityCombinationRB_Groups_r17(Decoder& dec, AvailabilityCombinationRB_Groups_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
        value.availabilityCombinationId_r17 = (AvailabilityCombinationId_r16)tmp_value;
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.rb_SetGroups_r17_count)) { goto fail; }
if (value.rb_SetGroups_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.rb_SetGroups_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.rb_SetGroups_r17_count > 0u) {
    value.rb_SetGroups_r17_items = (RB_SetGroup_r17*)std::malloc((std::size_t)value.rb_SetGroups_r17_count * sizeof(RB_SetGroup_r17));
    if (value.rb_SetGroups_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.rb_SetGroups_r17_items, 0, (std::size_t)value.rb_SetGroups_r17_count * sizeof(RB_SetGroup_r17));
}
for (std::uint32_t i = 0; i < value.rb_SetGroups_r17_count; ++i) {
    if (Decode_RB_SetGroup_r17(dec, value.rb_SetGroups_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.resourceAvailability_r17_count)) { goto fail; }
if (value.resourceAvailability_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.resourceAvailability_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.resourceAvailability_r17_count > 0u) {
    value.resourceAvailability_r17_items = (int64_t*)std::malloc((std::size_t)value.resourceAvailability_r17_count * sizeof(int64_t));
    if (value.resourceAvailability_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.resourceAvailability_r17_items, 0, (std::size_t)value.resourceAvailability_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.resourceAvailability_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.resourceAvailability_r17_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_AvailabilityCombinationRB_Groups_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AvailabilityCombinationRB_Groups_r17(AvailabilityCombinationRB_Groups_r17& value)
{
    if (value.has_rb_SetGroups_r17) {
        if (value.rb_SetGroups_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.rb_SetGroups_r17_count; ++i) {
                Free_RB_SetGroup_r17(value.rb_SetGroups_r17_items[i]);
            }
            std::free(value.rb_SetGroups_r17_items);
            value.rb_SetGroups_r17_items = nullptr;
        }
        value.rb_SetGroups_r17_count = 0;
    }
    if (value.has_resourceAvailability_r17) {
        if (value.resourceAvailability_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.resourceAvailability_r17_count; ++i) {
            }
            std::free(value.resourceAvailability_r17_items);
            value.resourceAvailability_r17_items = nullptr;
        }
        value.resourceAvailability_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RB_SetGroup_r17：ASN.1 RB-SetGroup-r17；源文件第 4359 行；SEQUENCE。
// Encode_RB_SetGroup_r17 只读不分配；Decode_RB_SetGroup_r17 可能 malloc（失败时内部已释放并清零）；Free_RB_SetGroup_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RB_SetGroup_r17(Encoder& enc, const RB_SetGroup_r17& value)
{
    enc.WriteBit(value.has_resourceAvailability_r17);
    enc.WriteBit(value.has_rb_Sets_r17);
    if (value.has_resourceAvailability_r17) {
enc.WriteConstrainedLength(value.resourceAvailability_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.resourceAvailability_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.resourceAvailability_r17_items[i]), 0, 7);
}
    }
    if (value.has_rb_Sets_r17) {
enc.WriteConstrainedLength(value.rb_Sets_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.rb_Sets_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.rb_Sets_r17_items[i]), 0, 7);
}
    }
    return enc.Error();
}

ErrorCode Decode_RB_SetGroup_r17(Decoder& dec, RB_SetGroup_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.resourceAvailability_r17_count)) { goto fail; }
if (value.resourceAvailability_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.resourceAvailability_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.resourceAvailability_r17_count > 0u) {
    value.resourceAvailability_r17_items = (int64_t*)std::malloc((std::size_t)value.resourceAvailability_r17_count * sizeof(int64_t));
    if (value.resourceAvailability_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.resourceAvailability_r17_items, 0, (std::size_t)value.resourceAvailability_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.resourceAvailability_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.resourceAvailability_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.rb_Sets_r17_count)) { goto fail; }
if (value.rb_Sets_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.rb_Sets_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.rb_Sets_r17_count > 0u) {
    value.rb_Sets_r17_items = (int64_t*)std::malloc((std::size_t)value.rb_Sets_r17_count * sizeof(int64_t));
    if (value.rb_Sets_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.rb_Sets_r17_items, 0, (std::size_t)value.rb_Sets_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.rb_Sets_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.rb_Sets_r17_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_RB_SetGroup_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RB_SetGroup_r17(RB_SetGroup_r17& value)
{
    if (value.has_resourceAvailability_r17) {
        if (value.resourceAvailability_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.resourceAvailability_r17_count; ++i) {
            }
            std::free(value.resourceAvailability_r17_items);
            value.resourceAvailability_r17_items = nullptr;
        }
        value.resourceAvailability_r17_count = 0;
    }
    if (value.has_rb_Sets_r17) {
        if (value.rb_Sets_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.rb_Sets_r17_count; ++i) {
            }
            std::free(value.rb_Sets_r17_items);
            value.rb_Sets_r17_items = nullptr;
        }
        value.rb_Sets_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// AvailabilityIndicator_r16：ASN.1 AvailabilityIndicator-r16；源文件第 4367 行；SEQUENCE。
// Encode_AvailabilityIndicator_r16 只读不分配；Decode_AvailabilityIndicator_r16 可能 malloc（失败时内部已释放并清零）；Free_AvailabilityIndicator_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_AvailabilityIndicator_r16(Encoder& enc, const AvailabilityIndicator_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_availableCombToAddModList_r16);
    enc.WriteBit(value.has_availableCombToReleaseList_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.ai_RNTI_r16), 0, 65535);
    enc.WriteConstrainedInteger((std::int64_t)(value.dci_PayloadSizeAI_r16), 1, 128);
    if (value.has_availableCombToAddModList_r16) {
enc.WriteConstrainedLength(value.availableCombToAddModList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.availableCombToAddModList_r16_count; ++i) {
    Encode_AvailabilityCombinationsPerCell_r16(enc, value.availableCombToAddModList_r16_items[i]);
}
    }
    if (value.has_availableCombToReleaseList_r16) {
enc.WriteConstrainedLength(value.availableCombToReleaseList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.availableCombToReleaseList_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.availableCombToReleaseList_r16_items[i]), 0, 512);
}
    }
    return enc.Error();
}

ErrorCode Decode_AvailabilityIndicator_r16(Decoder& dec, AvailabilityIndicator_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.ai_RNTI_r16 = (RNTI_Value)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 128, tmp_value)) { goto fail; }
        value.dci_PayloadSizeAI_r16 = (int64_t)tmp_value;
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.availableCombToAddModList_r16_count)) { goto fail; }
if (value.availableCombToAddModList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.availableCombToAddModList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.availableCombToAddModList_r16_count > 0u) {
    value.availableCombToAddModList_r16_items = (AvailabilityCombinationsPerCell_r16*)std::malloc((std::size_t)value.availableCombToAddModList_r16_count * sizeof(AvailabilityCombinationsPerCell_r16));
    if (value.availableCombToAddModList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.availableCombToAddModList_r16_items, 0, (std::size_t)value.availableCombToAddModList_r16_count * sizeof(AvailabilityCombinationsPerCell_r16));
}
for (std::uint32_t i = 0; i < value.availableCombToAddModList_r16_count; ++i) {
    if (Decode_AvailabilityCombinationsPerCell_r16(dec, value.availableCombToAddModList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.availableCombToReleaseList_r16_count)) { goto fail; }
if (value.availableCombToReleaseList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.availableCombToReleaseList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.availableCombToReleaseList_r16_count > 0u) {
    value.availableCombToReleaseList_r16_items = (AvailabilityCombinationsPerCellIndex_r16*)std::malloc((std::size_t)value.availableCombToReleaseList_r16_count * sizeof(AvailabilityCombinationsPerCellIndex_r16));
    if (value.availableCombToReleaseList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.availableCombToReleaseList_r16_items, 0, (std::size_t)value.availableCombToReleaseList_r16_count * sizeof(AvailabilityCombinationsPerCellIndex_r16));
}
for (std::uint32_t i = 0; i < value.availableCombToReleaseList_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 512, tmp_value)) { goto fail; }
    value.availableCombToReleaseList_r16_items[i] = (AvailabilityCombinationsPerCellIndex_r16)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_AvailabilityIndicator_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AvailabilityIndicator_r16(AvailabilityIndicator_r16& value)
{
    if (value.has_availableCombToAddModList_r16) {
        if (value.availableCombToAddModList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.availableCombToAddModList_r16_count; ++i) {
                Free_AvailabilityCombinationsPerCell_r16(value.availableCombToAddModList_r16_items[i]);
            }
            std::free(value.availableCombToAddModList_r16_items);
            value.availableCombToAddModList_r16_items = nullptr;
        }
        value.availableCombToAddModList_r16_count = 0;
    }
    if (value.has_availableCombToReleaseList_r16) {
        if (value.availableCombToReleaseList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.availableCombToReleaseList_r16_count; ++i) {
            }
            std::free(value.availableCombToReleaseList_r16_items);
            value.availableCombToReleaseList_r16_items = nullptr;
        }
        value.availableCombToReleaseList_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BeamFailureRecoveryConfig_ExtGroup1：ASN.1 BeamFailureRecoveryConfig_ExtGroup1；源文件第 4400 行；扩展添加组 [[ ]]。
// Encode_BeamFailureRecoveryConfig_ExtGroup1 只读不分配；Decode_BeamFailureRecoveryConfig_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_BeamFailureRecoveryConfig_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BeamFailureRecoveryConfig_ExtGroup1(Encoder& enc, const BeamFailureRecoveryConfig_ExtGroup1& value)
{
    enc.WriteBit(value.has_msg1_SubcarrierSpacing);
    if (value.has_msg1_SubcarrierSpacing) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msg1_SubcarrierSpacing), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_BeamFailureRecoveryConfig_ExtGroup1(Decoder& dec, BeamFailureRecoveryConfig_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.msg1_SubcarrierSpacing = (SubcarrierSpacing)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BeamFailureRecoveryConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BeamFailureRecoveryConfig_ExtGroup1(BeamFailureRecoveryConfig_ExtGroup1& value)
{
    if (value.has_msg1_SubcarrierSpacing) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CandidateBeamRSListExt_r16：ASN.1 CandidateBeamRSListExt-r16；源文件第 4430 行；SEQUENCE OF。
// Encode_CandidateBeamRSListExt_r16 只读不分配；Decode_CandidateBeamRSListExt_r16 可能 malloc（失败时内部已释放并清零）；Free_CandidateBeamRSListExt_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CandidateBeamRSListExt_r16(Encoder& enc, const CandidateBeamRSListExt_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 48u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PRACH_ResourceDedicatedBFR(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_CandidateBeamRSListExt_r16(Decoder& dec, CandidateBeamRSListExt_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 48u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 48u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PRACH_ResourceDedicatedBFR*)std::malloc((std::size_t)value.count * sizeof(PRACH_ResourceDedicatedBFR));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PRACH_ResourceDedicatedBFR));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PRACH_ResourceDedicatedBFR(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_CandidateBeamRSListExt_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CandidateBeamRSListExt_r16(CandidateBeamRSListExt_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PRACH_ResourceDedicatedBFR(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_CandidateBeamRSListExt_r16：ASN.1 SetupRelease<CandidateBeamRSListExt-r16>；源文件第 4405 行；CHOICE。
// Encode_SetupRelease_CandidateBeamRSListExt_r16 只读不分配；Decode_SetupRelease_CandidateBeamRSListExt_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_CandidateBeamRSListExt_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_CandidateBeamRSListExt_r16(Encoder& enc, const SetupRelease_CandidateBeamRSListExt_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_CandidateBeamRSListExt_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_CandidateBeamRSListExt_r16_Tag_setup:
        Encode_CandidateBeamRSListExt_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_CandidateBeamRSListExt_r16(Decoder& dec, SetupRelease_CandidateBeamRSListExt_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_CandidateBeamRSListExt_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_CandidateBeamRSListExt_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_CandidateBeamRSListExt_r16_Tag_setup: {
        if (Decode_CandidateBeamRSListExt_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_CandidateBeamRSListExt_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_CandidateBeamRSListExt_r16(SetupRelease_CandidateBeamRSListExt_r16& value)
{
    switch (value.tag) {
    case SetupRelease_CandidateBeamRSListExt_r16_Tag_release:
        break;
    case SetupRelease_CandidateBeamRSListExt_r16_Tag_setup:
        Free_CandidateBeamRSListExt_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BeamFailureRecoveryConfig_ExtGroup2：ASN.1 BeamFailureRecoveryConfig_ExtGroup2；源文件第 4403 行；扩展添加组 [[ ]]。
// Encode_BeamFailureRecoveryConfig_ExtGroup2 只读不分配；Decode_BeamFailureRecoveryConfig_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_BeamFailureRecoveryConfig_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BeamFailureRecoveryConfig_ExtGroup2(Encoder& enc, const BeamFailureRecoveryConfig_ExtGroup2& value)
{
    enc.WriteBit(value.has_ra_PrioritizationTwoStep_r16);
    enc.WriteBit(value.has_candidateBeamRSListExt_v1610);
    if (value.has_ra_PrioritizationTwoStep_r16) {
        Encode_RA_Prioritization(enc, value.ra_PrioritizationTwoStep_r16);
    }
    if (value.has_candidateBeamRSListExt_v1610) {
        Encode_SetupRelease_CandidateBeamRSListExt_r16(enc, value.candidateBeamRSListExt_v1610);
    }
    return enc.Error();
}

ErrorCode Decode_BeamFailureRecoveryConfig_ExtGroup2(Decoder& dec, BeamFailureRecoveryConfig_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_RA_Prioritization(dec, value.ra_PrioritizationTwoStep_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_CandidateBeamRSListExt_r16(dec, value.candidateBeamRSListExt_v1610) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BeamFailureRecoveryConfig_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BeamFailureRecoveryConfig_ExtGroup2(BeamFailureRecoveryConfig_ExtGroup2& value)
{
    if (value.has_ra_PrioritizationTwoStep_r16) {
        Free_RA_Prioritization(value.ra_PrioritizationTwoStep_r16);
    }
    if (value.has_candidateBeamRSListExt_v1610) {
        Free_SetupRelease_CandidateBeamRSListExt_r16(value.candidateBeamRSListExt_v1610);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BeamFailureRecoveryConfig_ExtGroup3：ASN.1 BeamFailureRecoveryConfig_ExtGroup3；源文件第 4407 行；扩展添加组 [[ ]]。
// Encode_BeamFailureRecoveryConfig_ExtGroup3 只读不分配；Decode_BeamFailureRecoveryConfig_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_BeamFailureRecoveryConfig_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BeamFailureRecoveryConfig_ExtGroup3(Encoder& enc, const BeamFailureRecoveryConfig_ExtGroup3& value)
{
    enc.WriteBit(value.has_spCell_BFR_CBRA_r16);
    if (value.has_spCell_BFR_CBRA_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.spCell_BFR_CBRA_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BeamFailureRecoveryConfig_ExtGroup3(Decoder& dec, BeamFailureRecoveryConfig_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.spCell_BFR_CBRA_r16 = (BeamFailureRecoveryConfig_ExtGroup3_SpCell_BFR_CBRA_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BeamFailureRecoveryConfig_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BeamFailureRecoveryConfig_ExtGroup3(BeamFailureRecoveryConfig_ExtGroup3& value)
{
    if (value.has_spCell_BFR_CBRA_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BeamFailureRecoveryConfig：ASN.1 BeamFailureRecoveryConfig；源文件第 4388 行；SEQUENCE。
// Encode_BeamFailureRecoveryConfig 只读不分配；Decode_BeamFailureRecoveryConfig 可能 malloc（失败时内部已释放并清零）；Free_BeamFailureRecoveryConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BeamFailureRecoveryConfig(Encoder& enc, const BeamFailureRecoveryConfig& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_rootSequenceIndex_BFR);
    enc.WriteBit(value.has_rach_ConfigBFR);
    enc.WriteBit(value.has_rsrp_ThresholdSSB);
    enc.WriteBit(value.has_candidateBeamRSList);
    enc.WriteBit(value.has_ssb_perRACH_Occasion);
    enc.WriteBit(value.has_ra_ssb_OccasionMaskIndex);
    enc.WriteBit(value.has_recoverySearchSpaceId);
    enc.WriteBit(value.has_ra_Prioritization);
    enc.WriteBit(value.has_beamFailureRecoveryTimer);
    if (value.has_rootSequenceIndex_BFR) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rootSequenceIndex_BFR), 0, 137);
    }
    if (value.has_rach_ConfigBFR) {
        Encode_RACH_ConfigGeneric(enc, value.rach_ConfigBFR);
    }
    if (value.has_rsrp_ThresholdSSB) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrp_ThresholdSSB), 0, 127);
    }
    if (value.has_candidateBeamRSList) {
enc.WriteConstrainedLength(value.candidateBeamRSList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.candidateBeamRSList_count; ++i) {
    Encode_PRACH_ResourceDedicatedBFR(enc, value.candidateBeamRSList_items[i]);
}
    }
    if (value.has_ssb_perRACH_Occasion) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_perRACH_Occasion), 0, 7);
    }
    if (value.has_ra_ssb_OccasionMaskIndex) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ra_ssb_OccasionMaskIndex), 0, 15);
    }
    if (value.has_recoverySearchSpaceId) {
        enc.WriteConstrainedInteger((std::int64_t)(value.recoverySearchSpaceId), 0, 39);
    }
    if (value.has_ra_Prioritization) {
        Encode_RA_Prioritization(enc, value.ra_Prioritization);
    }
    if (value.has_beamFailureRecoveryTimer) {
        enc.WriteConstrainedInteger((std::int64_t)(value.beamFailureRecoveryTimer), 0, 7);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_BeamFailureRecoveryConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_BeamFailureRecoveryConfig_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_BeamFailureRecoveryConfig_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_BeamFailureRecoveryConfig(Decoder& dec, BeamFailureRecoveryConfig& value)
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
        if (!dec.ReadConstrainedInteger(0, 137, tmp_value)) { goto fail; }
        value.rootSequenceIndex_BFR = (int64_t)tmp_value;
    }
    if (present_1) {
        if (Decode_RACH_ConfigGeneric(dec, value.rach_ConfigBFR) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.rsrp_ThresholdSSB = (RSRP_Range)tmp_value;
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.candidateBeamRSList_count)) { goto fail; }
if (value.candidateBeamRSList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.candidateBeamRSList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.candidateBeamRSList_count > 0u) {
    value.candidateBeamRSList_items = (PRACH_ResourceDedicatedBFR*)std::malloc((std::size_t)value.candidateBeamRSList_count * sizeof(PRACH_ResourceDedicatedBFR));
    if (value.candidateBeamRSList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.candidateBeamRSList_items, 0, (std::size_t)value.candidateBeamRSList_count * sizeof(PRACH_ResourceDedicatedBFR));
}
for (std::uint32_t i = 0; i < value.candidateBeamRSList_count; ++i) {
    if (Decode_PRACH_ResourceDedicatedBFR(dec, value.candidateBeamRSList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.ssb_perRACH_Occasion = (BeamFailureRecoveryConfig_Ssb_perRACH_Occasion)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.ra_ssb_OccasionMaskIndex = (int64_t)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.recoverySearchSpaceId = (SearchSpaceId)tmp_value;
    }
    if (present_7) {
        if (Decode_RA_Prioritization(dec, value.ra_Prioritization) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.beamFailureRecoveryTimer = (BeamFailureRecoveryConfig_BeamFailureRecoveryTimer)tmp_value;
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
    if (Decode_BeamFailureRecoveryConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_BeamFailureRecoveryConfig_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_BeamFailureRecoveryConfig_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    Free_BeamFailureRecoveryConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BeamFailureRecoveryConfig(BeamFailureRecoveryConfig& value)
{
    if (value.has_rootSequenceIndex_BFR) {
    }
    if (value.has_rach_ConfigBFR) {
        Free_RACH_ConfigGeneric(value.rach_ConfigBFR);
    }
    if (value.has_rsrp_ThresholdSSB) {
    }
    if (value.has_candidateBeamRSList) {
        if (value.candidateBeamRSList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.candidateBeamRSList_count; ++i) {
                Free_PRACH_ResourceDedicatedBFR(value.candidateBeamRSList_items[i]);
            }
            std::free(value.candidateBeamRSList_items);
            value.candidateBeamRSList_items = nullptr;
        }
        value.candidateBeamRSList_count = 0;
    }
    if (value.has_ssb_perRACH_Occasion) {
    }
    if (value.has_ra_ssb_OccasionMaskIndex) {
    }
    if (value.has_recoverySearchSpaceId) {
    }
    if (value.has_ra_Prioritization) {
        Free_RA_Prioritization(value.ra_Prioritization);
    }
    if (value.has_beamFailureRecoveryTimer) {
    }
    if (value.has_extGroup1) {
        Free_BeamFailureRecoveryConfig_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_BeamFailureRecoveryConfig_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_BeamFailureRecoveryConfig_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BFR_SSB_Resource：ASN.1 BFR-SSB-Resource；源文件第 4417 行；SEQUENCE。
// Encode_BFR_SSB_Resource 只读不分配；Decode_BFR_SSB_Resource 可能 malloc（失败时内部已释放并清零）；Free_BFR_SSB_Resource 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BFR_SSB_Resource(Encoder& enc, const BFR_SSB_Resource& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.ssb), 0, 63);
    enc.WriteConstrainedInteger((std::int64_t)(value.ra_PreambleIndex), 0, 63);
    return enc.Error();
}

ErrorCode Decode_BFR_SSB_Resource(Decoder& dec, BFR_SSB_Resource& value)
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
        value.ssb = (SSB_Index)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.ra_PreambleIndex = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BFR_SSB_Resource(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BFR_SSB_Resource(BFR_SSB_Resource& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BFR_CSIRS_Resource：ASN.1 BFR-CSIRS-Resource；源文件第 4423 行；SEQUENCE。
// Encode_BFR_CSIRS_Resource 只读不分配；Decode_BFR_CSIRS_Resource 可能 malloc（失败时内部已释放并清零）；Free_BFR_CSIRS_Resource 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BFR_CSIRS_Resource(Encoder& enc, const BFR_CSIRS_Resource& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_ra_OccasionList);
    enc.WriteBit(value.has_ra_PreambleIndex);
    enc.WriteConstrainedInteger((std::int64_t)(value.csi_RS), 0, 191);
    if (value.has_ra_OccasionList) {
enc.WriteConstrainedLength(value.ra_OccasionList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.ra_OccasionList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.ra_OccasionList_items[i]), 0, 511);
}
    }
    if (value.has_ra_PreambleIndex) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ra_PreambleIndex), 0, 63);
    }
    return enc.Error();
}

ErrorCode Decode_BFR_CSIRS_Resource(Decoder& dec, BFR_CSIRS_Resource& value)
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
        if (!dec.ReadConstrainedInteger(0, 191, tmp_value)) { goto fail; }
        value.csi_RS = (NZP_CSI_RS_ResourceId)tmp_value;
    }
    if (present_0) {
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
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.ra_PreambleIndex = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BFR_CSIRS_Resource(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BFR_CSIRS_Resource(BFR_CSIRS_Resource& value)
{
    if (value.has_ra_OccasionList) {
        if (value.ra_OccasionList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.ra_OccasionList_count; ++i) {
            }
            std::free(value.ra_OccasionList_items);
            value.ra_OccasionList_items = nullptr;
        }
        value.ra_OccasionList_count = 0;
    }
    if (value.has_ra_PreambleIndex) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PRACH_ResourceDedicatedBFR：ASN.1 PRACH-ResourceDedicatedBFR；源文件第 4412 行；CHOICE。
// Encode_PRACH_ResourceDedicatedBFR 只读不分配；Decode_PRACH_ResourceDedicatedBFR 可能 malloc（失败时内部已释放并清零）；Free_PRACH_ResourceDedicatedBFR 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PRACH_ResourceDedicatedBFR(Encoder& enc, const PRACH_ResourceDedicatedBFR& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case PRACH_ResourceDedicatedBFR_Tag_ssb:
        Encode_BFR_SSB_Resource(enc, value.u.ssb);
        break;
    case PRACH_ResourceDedicatedBFR_Tag_csi_RS:
        Encode_BFR_CSIRS_Resource(enc, value.u.csi_RS);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PRACH_ResourceDedicatedBFR(Decoder& dec, PRACH_ResourceDedicatedBFR& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (PRACH_ResourceDedicatedBFR_Tag)root_index;
    switch (value.tag) {
    case PRACH_ResourceDedicatedBFR_Tag_ssb: {
        if (Decode_BFR_SSB_Resource(dec, value.u.ssb) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PRACH_ResourceDedicatedBFR_Tag_csi_RS: {
        if (Decode_BFR_CSIRS_Resource(dec, value.u.csi_RS) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PRACH_ResourceDedicatedBFR(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PRACH_ResourceDedicatedBFR(PRACH_ResourceDedicatedBFR& value)
{
    switch (value.tag) {
    case PRACH_ResourceDedicatedBFR_Tag_ssb:
        Free_BFR_SSB_Resource(value.u.ssb);
        break;
    case PRACH_ResourceDedicatedBFR_Tag_csi_RS:
        Free_BFR_CSIRS_Resource(value.u.csi_RS);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BeamFailureRecoveryRSConfig_r16_ExtGroup1：ASN.1 BeamFailureRecoveryRSConfig_r16_ExtGroup1；源文件第 4439 行；扩展添加组 [[ ]]。
// Encode_BeamFailureRecoveryRSConfig_r16_ExtGroup1 只读不分配；Decode_BeamFailureRecoveryRSConfig_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_BeamFailureRecoveryRSConfig_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BeamFailureRecoveryRSConfig_r16_ExtGroup1(Encoder& enc, const BeamFailureRecoveryRSConfig_r16_ExtGroup1& value)
{
    enc.WriteBit(value.has_candidateBeamRS_List2_r17);
    if (value.has_candidateBeamRS_List2_r17) {
enc.WriteConstrainedLength(value.candidateBeamRS_List2_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.candidateBeamRS_List2_r17_count; ++i) {
    Encode_CandidateBeamRS_r16(enc, value.candidateBeamRS_List2_r17_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_BeamFailureRecoveryRSConfig_r16_ExtGroup1(Decoder& dec, BeamFailureRecoveryRSConfig_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.candidateBeamRS_List2_r17_count)) { goto fail; }
if (value.candidateBeamRS_List2_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.candidateBeamRS_List2_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.candidateBeamRS_List2_r17_count > 0u) {
    value.candidateBeamRS_List2_r17_items = (CandidateBeamRS_r16*)std::malloc((std::size_t)value.candidateBeamRS_List2_r17_count * sizeof(CandidateBeamRS_r16));
    if (value.candidateBeamRS_List2_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.candidateBeamRS_List2_r17_items, 0, (std::size_t)value.candidateBeamRS_List2_r17_count * sizeof(CandidateBeamRS_r16));
}
for (std::uint32_t i = 0; i < value.candidateBeamRS_List2_r17_count; ++i) {
    if (Decode_CandidateBeamRS_r16(dec, value.candidateBeamRS_List2_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_BeamFailureRecoveryRSConfig_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BeamFailureRecoveryRSConfig_r16_ExtGroup1(BeamFailureRecoveryRSConfig_r16_ExtGroup1& value)
{
    if (value.has_candidateBeamRS_List2_r17) {
        if (value.candidateBeamRS_List2_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.candidateBeamRS_List2_r17_count; ++i) {
                Free_CandidateBeamRS_r16(value.candidateBeamRS_List2_r17_items[i]);
            }
            std::free(value.candidateBeamRS_List2_r17_items);
            value.candidateBeamRS_List2_r17_items = nullptr;
        }
        value.candidateBeamRS_List2_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BeamFailureRecoveryRSConfig_r16：ASN.1 BeamFailureRecoveryRSConfig-r16；源文件第 4435 行；SEQUENCE。
// Encode_BeamFailureRecoveryRSConfig_r16 只读不分配；Decode_BeamFailureRecoveryRSConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_BeamFailureRecoveryRSConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BeamFailureRecoveryRSConfig_r16(Encoder& enc, const BeamFailureRecoveryRSConfig_r16& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_rsrp_ThresholdBFR_r16);
    enc.WriteBit(value.has_candidateBeamRS_List_r16);
    if (value.has_rsrp_ThresholdBFR_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrp_ThresholdBFR_r16), 0, 127);
    }
    if (value.has_candidateBeamRS_List_r16) {
enc.WriteConstrainedLength(value.candidateBeamRS_List_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.candidateBeamRS_List_r16_count; ++i) {
    Encode_CandidateBeamRS_r16(enc, value.candidateBeamRS_List_r16_items[i]);
}
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_BeamFailureRecoveryRSConfig_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_BeamFailureRecoveryRSConfig_r16(Decoder& dec, BeamFailureRecoveryRSConfig_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.rsrp_ThresholdBFR_r16 = (RSRP_Range)tmp_value;
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.candidateBeamRS_List_r16_count)) { goto fail; }
if (value.candidateBeamRS_List_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.candidateBeamRS_List_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.candidateBeamRS_List_r16_count > 0u) {
    value.candidateBeamRS_List_r16_items = (CandidateBeamRS_r16*)std::malloc((std::size_t)value.candidateBeamRS_List_r16_count * sizeof(CandidateBeamRS_r16));
    if (value.candidateBeamRS_List_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.candidateBeamRS_List_r16_items, 0, (std::size_t)value.candidateBeamRS_List_r16_count * sizeof(CandidateBeamRS_r16));
}
for (std::uint32_t i = 0; i < value.candidateBeamRS_List_r16_count; ++i) {
    if (Decode_CandidateBeamRS_r16(dec, value.candidateBeamRS_List_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
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
    if (Decode_BeamFailureRecoveryRSConfig_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_BeamFailureRecoveryRSConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BeamFailureRecoveryRSConfig_r16(BeamFailureRecoveryRSConfig_r16& value)
{
    if (value.has_rsrp_ThresholdBFR_r16) {
    }
    if (value.has_candidateBeamRS_List_r16) {
        if (value.candidateBeamRS_List_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.candidateBeamRS_List_r16_count; ++i) {
                Free_CandidateBeamRS_r16(value.candidateBeamRS_List_r16_items[i]);
            }
            std::free(value.candidateBeamRS_List_r16_items);
            value.candidateBeamRS_List_r16_items = nullptr;
        }
        value.candidateBeamRS_List_r16_count = 0;
    }
    if (value.has_extGroup1) {
        Free_BeamFailureRecoveryRSConfig_r16_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BH_LogicalChannelIdentity_r16：ASN.1 BH-LogicalChannelIdentity-r16；源文件第 4465 行；CHOICE。
// Encode_BH_LogicalChannelIdentity_r16 只读不分配；Decode_BH_LogicalChannelIdentity_r16 可能 malloc（失败时内部已释放并清零）；Free_BH_LogicalChannelIdentity_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BH_LogicalChannelIdentity_r16(Encoder& enc, const BH_LogicalChannelIdentity_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case BH_LogicalChannelIdentity_r16_Tag_bh_LogicalChannelIdentity_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.bh_LogicalChannelIdentity_r16), 1, 32);
        break;
    case BH_LogicalChannelIdentity_r16_Tag_bh_LogicalChannelIdentityExt_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.bh_LogicalChannelIdentityExt_r16), 320, 65855);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_BH_LogicalChannelIdentity_r16(Decoder& dec, BH_LogicalChannelIdentity_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (BH_LogicalChannelIdentity_r16_Tag)root_index;
    switch (value.tag) {
    case BH_LogicalChannelIdentity_r16_Tag_bh_LogicalChannelIdentity_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.u.bh_LogicalChannelIdentity_r16 = (LogicalChannelIdentity)tmp_value;
        break;
    }
    case BH_LogicalChannelIdentity_r16_Tag_bh_LogicalChannelIdentityExt_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(320, 65855, tmp_value)) { goto fail; }
        value.u.bh_LogicalChannelIdentityExt_r16 = (BH_LogicalChannelIdentity_Ext_r16)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BH_LogicalChannelIdentity_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BH_LogicalChannelIdentity_r16(BH_LogicalChannelIdentity_r16& value)
{
    switch (value.tag) {
    case BH_LogicalChannelIdentity_r16_Tag_bh_LogicalChannelIdentity_r16:
        break;
    case BH_LogicalChannelIdentity_r16_Tag_bh_LogicalChannelIdentityExt_r16:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LogicalChannelConfig_ExtGroup1：ASN.1 LogicalChannelConfig_ExtGroup1；源文件第 7134 行；扩展添加组 [[ ]]。
// Encode_LogicalChannelConfig_ExtGroup1 只读不分配；Decode_LogicalChannelConfig_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_LogicalChannelConfig_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LogicalChannelConfig_ExtGroup1(Encoder& enc, const LogicalChannelConfig_ExtGroup1& value)
{
    enc.WriteBit(value.has_channelAccessPriority_r16);
    enc.WriteBit(value.has_bitRateMultiplier_r16);
    if (value.has_channelAccessPriority_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.channelAccessPriority_r16), 1, 4);
    }
    if (value.has_bitRateMultiplier_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.bitRateMultiplier_r16), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_LogicalChannelConfig_ExtGroup1(Decoder& dec, LogicalChannelConfig_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.channelAccessPriority_r16 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.bitRateMultiplier_r16 = (LogicalChannelConfig_ExtGroup1_BitRateMultiplier_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_LogicalChannelConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LogicalChannelConfig_ExtGroup1(LogicalChannelConfig_ExtGroup1& value)
{
    if (value.has_channelAccessPriority_r16) {
    }
    if (value.has_bitRateMultiplier_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LogicalChannelConfig_Ul_SpecificParameters_ExtGroup1：ASN.1 LogicalChannelConfig_Ul_SpecificParameters_ExtGroup1；源文件第 7123 行；扩展添加组 [[ ]]。
// Encode_LogicalChannelConfig_Ul_SpecificParameters_ExtGroup1 只读不分配；Decode_LogicalChannelConfig_Ul_SpecificParameters_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_LogicalChannelConfig_Ul_SpecificParameters_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LogicalChannelConfig_Ul_SpecificParameters_ExtGroup1(Encoder& enc, const LogicalChannelConfig_Ul_SpecificParameters_ExtGroup1& value)
{
    enc.WriteBit(value.has_allowedCG_List_r16);
    enc.WriteBit(value.has_allowedPHY_PriorityIndex_r16);
    if (value.has_allowedCG_List_r16) {
enc.WriteConstrainedLength(value.allowedCG_List_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.allowedCG_List_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.allowedCG_List_r16_items[i]), 0, 31);
}
    }
    if (value.has_allowedPHY_PriorityIndex_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.allowedPHY_PriorityIndex_r16), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_LogicalChannelConfig_Ul_SpecificParameters_ExtGroup1(Decoder& dec, LogicalChannelConfig_Ul_SpecificParameters_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.allowedCG_List_r16_count)) { goto fail; }
if (value.allowedCG_List_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.allowedCG_List_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.allowedCG_List_r16_count > 0u) {
    value.allowedCG_List_r16_items = (ConfiguredGrantConfigIndexMAC_r16*)std::malloc((std::size_t)value.allowedCG_List_r16_count * sizeof(ConfiguredGrantConfigIndexMAC_r16));
    if (value.allowedCG_List_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.allowedCG_List_r16_items, 0, (std::size_t)value.allowedCG_List_r16_count * sizeof(ConfiguredGrantConfigIndexMAC_r16));
}
for (std::uint32_t i = 0; i < value.allowedCG_List_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.allowedCG_List_r16_items[i] = (ConfiguredGrantConfigIndexMAC_r16)tmp_value;
}
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.allowedPHY_PriorityIndex_r16 = (LogicalChannelConfig_Ul_SpecificParameters_ExtGroup1_AllowedPHY_PriorityIndex_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_LogicalChannelConfig_Ul_SpecificParameters_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LogicalChannelConfig_Ul_SpecificParameters_ExtGroup1(LogicalChannelConfig_Ul_SpecificParameters_ExtGroup1& value)
{
    if (value.has_allowedCG_List_r16) {
        if (value.allowedCG_List_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.allowedCG_List_r16_count; ++i) {
            }
            std::free(value.allowedCG_List_r16_items);
            value.allowedCG_List_r16_items = nullptr;
        }
        value.allowedCG_List_r16_count = 0;
    }
    if (value.has_allowedPHY_PriorityIndex_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LogicalChannelConfig_Ul_SpecificParameters_ExtGroup2：ASN.1 LogicalChannelConfig_Ul_SpecificParameters_ExtGroup2；源文件第 7128 行；扩展添加组 [[ ]]。
// Encode_LogicalChannelConfig_Ul_SpecificParameters_ExtGroup2 只读不分配；Decode_LogicalChannelConfig_Ul_SpecificParameters_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_LogicalChannelConfig_Ul_SpecificParameters_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LogicalChannelConfig_Ul_SpecificParameters_ExtGroup2(Encoder& enc, const LogicalChannelConfig_Ul_SpecificParameters_ExtGroup2& value)
{
    enc.WriteBit(value.has_logicalChannelGroupIAB_Ext_r17);
    enc.WriteBit(value.has_allowedHARQ_mode_r17);
    if (value.has_logicalChannelGroupIAB_Ext_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.logicalChannelGroupIAB_Ext_r17), 0, 255);
    }
    if (value.has_allowedHARQ_mode_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.allowedHARQ_mode_r17), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_LogicalChannelConfig_Ul_SpecificParameters_ExtGroup2(Decoder& dec, LogicalChannelConfig_Ul_SpecificParameters_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
        value.logicalChannelGroupIAB_Ext_r17 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.allowedHARQ_mode_r17 = (LogicalChannelConfig_Ul_SpecificParameters_ExtGroup2_AllowedHARQ_mode_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_LogicalChannelConfig_Ul_SpecificParameters_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LogicalChannelConfig_Ul_SpecificParameters_ExtGroup2(LogicalChannelConfig_Ul_SpecificParameters_ExtGroup2& value)
{
    if (value.has_logicalChannelGroupIAB_Ext_r17) {
    }
    if (value.has_allowedHARQ_mode_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LogicalChannelConfig_Ul_SpecificParameters：ASN.1 ul-SpecificParameters；源文件第 7105 行；SEQUENCE。
// Encode_LogicalChannelConfig_Ul_SpecificParameters 只读不分配；Decode_LogicalChannelConfig_Ul_SpecificParameters 可能 malloc（失败时内部已释放并清零）；Free_LogicalChannelConfig_Ul_SpecificParameters 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LogicalChannelConfig_Ul_SpecificParameters(Encoder& enc, const LogicalChannelConfig_Ul_SpecificParameters& value)
{
    const bool any_extension = value.has_bitRateQueryProhibitTimer || value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_allowedServingCells);
    enc.WriteBit(value.has_allowedSCS_List);
    enc.WriteBit(value.has_maxPUSCH_Duration);
    enc.WriteBit(value.has_configuredGrantType1Allowed);
    enc.WriteBit(value.has_logicalChannelGroup);
    enc.WriteBit(value.has_schedulingRequestID);
    enc.WriteConstrainedInteger((std::int64_t)(value.priority), 1, 16);
    enc.WriteConstrainedInteger((std::int64_t)(value.prioritisedBitRate), 0, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.bucketSizeDuration), 0, 15);
    if (value.has_allowedServingCells) {
enc.WriteConstrainedLength(value.allowedServingCells_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.allowedServingCells_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.allowedServingCells_items[i]), 0, 31);
}
    }
    if (value.has_allowedSCS_List) {
enc.WriteConstrainedLength(value.allowedSCS_List_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.allowedSCS_List_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.allowedSCS_List_items[i]), 0, 7);
}
    }
    if (value.has_maxPUSCH_Duration) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxPUSCH_Duration), 0, 7);
    }
    if (value.has_configuredGrantType1Allowed) {
        enc.WriteConstrainedInteger((std::int64_t)(value.configuredGrantType1Allowed), 0, 0);
    }
    if (value.has_logicalChannelGroup) {
        enc.WriteConstrainedInteger((std::int64_t)(value.logicalChannelGroup), 0, 7);
    }
    if (value.has_schedulingRequestID) {
        enc.WriteConstrainedInteger((std::int64_t)(value.schedulingRequestID), 0, 7);
    }
    enc.WriteBool(value.logicalChannelSR_Mask);
    enc.WriteBool(value.logicalChannelSR_DelayTimerApplied);
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_bitRateQueryProhibitTimer);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_bitRateQueryProhibitTimer) {
    Encoder sub;
    sub.WriteConstrainedInteger((std::int64_t)(value.bitRateQueryProhibitTimer), 0, 7);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_LogicalChannelConfig_Ul_SpecificParameters_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_LogicalChannelConfig_Ul_SpecificParameters_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_LogicalChannelConfig_Ul_SpecificParameters(Decoder& dec, LogicalChannelConfig_Ul_SpecificParameters& value)
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
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.priority = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.prioritisedBitRate = (LogicalChannelConfig_Ul_SpecificParameters_PrioritisedBitRate)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.bucketSizeDuration = (LogicalChannelConfig_Ul_SpecificParameters_BucketSizeDuration)tmp_value;
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.allowedServingCells_count)) { goto fail; }
if (value.allowedServingCells_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.allowedServingCells_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.allowedServingCells_count > 0u) {
    value.allowedServingCells_items = (ServCellIndex*)std::malloc((std::size_t)value.allowedServingCells_count * sizeof(ServCellIndex));
    if (value.allowedServingCells_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.allowedServingCells_items, 0, (std::size_t)value.allowedServingCells_count * sizeof(ServCellIndex));
}
for (std::uint32_t i = 0; i < value.allowedServingCells_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.allowedServingCells_items[i] = (ServCellIndex)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.allowedSCS_List_count)) { goto fail; }
if (value.allowedSCS_List_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.allowedSCS_List_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.allowedSCS_List_count > 0u) {
    value.allowedSCS_List_items = (SubcarrierSpacing*)std::malloc((std::size_t)value.allowedSCS_List_count * sizeof(SubcarrierSpacing));
    if (value.allowedSCS_List_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.allowedSCS_List_items, 0, (std::size_t)value.allowedSCS_List_count * sizeof(SubcarrierSpacing));
}
for (std::uint32_t i = 0; i < value.allowedSCS_List_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.allowedSCS_List_items[i] = (SubcarrierSpacing)tmp_value;
}
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maxPUSCH_Duration = (LogicalChannelConfig_Ul_SpecificParameters_MaxPUSCH_Duration)tmp_value;
    }
    if (present_3) {
        value.configuredGrantType1Allowed = (LogicalChannelConfig_Ul_SpecificParameters_ConfiguredGrantType1Allowed)0;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.logicalChannelGroup = (int64_t)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.schedulingRequestID = (SchedulingRequestId)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.logicalChannelSR_Mask = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.logicalChannelSR_DelayTimerApplied = tmp_value;
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
    std::int64_t tmp_value = 0;
    if (!sub.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.bitRateQueryProhibitTimer = (LogicalChannelConfig_Ul_SpecificParameters_BitRateQueryProhibitTimer)tmp_value;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[1]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_LogicalChannelConfig_Ul_SpecificParameters_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup1 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[2]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_LogicalChannelConfig_Ul_SpecificParameters_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_LogicalChannelConfig_Ul_SpecificParameters(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LogicalChannelConfig_Ul_SpecificParameters(LogicalChannelConfig_Ul_SpecificParameters& value)
{
    if (value.has_allowedServingCells) {
        if (value.allowedServingCells_items != nullptr) {
            for (std::uint32_t i = 0; i < value.allowedServingCells_count; ++i) {
            }
            std::free(value.allowedServingCells_items);
            value.allowedServingCells_items = nullptr;
        }
        value.allowedServingCells_count = 0;
    }
    if (value.has_allowedSCS_List) {
        if (value.allowedSCS_List_items != nullptr) {
            for (std::uint32_t i = 0; i < value.allowedSCS_List_count; ++i) {
            }
            std::free(value.allowedSCS_List_items);
            value.allowedSCS_List_items = nullptr;
        }
        value.allowedSCS_List_count = 0;
    }
    if (value.has_maxPUSCH_Duration) {
    }
    if (value.has_configuredGrantType1Allowed) {
    }
    if (value.has_logicalChannelGroup) {
    }
    if (value.has_schedulingRequestID) {
    }
    if (value.has_bitRateQueryProhibitTimer) {
    }
    if (value.has_extGroup1) {
        Free_LogicalChannelConfig_Ul_SpecificParameters_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_LogicalChannelConfig_Ul_SpecificParameters_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LogicalChannelConfig：ASN.1 LogicalChannelConfig；源文件第 7104 行；SEQUENCE。
// Encode_LogicalChannelConfig 只读不分配；Decode_LogicalChannelConfig 可能 malloc（失败时内部已释放并清零）；Free_LogicalChannelConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LogicalChannelConfig(Encoder& enc, const LogicalChannelConfig& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_ul_SpecificParameters);
    if (value.has_ul_SpecificParameters) {
        Encode_LogicalChannelConfig_Ul_SpecificParameters(enc, value.ul_SpecificParameters);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_LogicalChannelConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_LogicalChannelConfig(Decoder& dec, LogicalChannelConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_LogicalChannelConfig_Ul_SpecificParameters(dec, value.ul_SpecificParameters) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_LogicalChannelConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_LogicalChannelConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LogicalChannelConfig(LogicalChannelConfig& value)
{
    if (value.has_ul_SpecificParameters) {
        Free_LogicalChannelConfig_Ul_SpecificParameters(value.ul_SpecificParameters);
    }
    if (value.has_extGroup1) {
        Free_LogicalChannelConfig_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UL_AM_RLC：ASN.1 UL-AM-RLC；源文件第 11900 行；SEQUENCE。
// Encode_UL_AM_RLC 只读不分配；Decode_UL_AM_RLC 可能 malloc（失败时内部已释放并清零）；Free_UL_AM_RLC 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UL_AM_RLC(Encoder& enc, const UL_AM_RLC& value)
{
    enc.WriteBit(value.has_sn_FieldLength);
    if (value.has_sn_FieldLength) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sn_FieldLength), 0, 1);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.t_PollRetransmit), 0, 63);
    enc.WriteConstrainedInteger((std::int64_t)(value.pollPDU), 0, 31);
    enc.WriteConstrainedInteger((std::int64_t)(value.pollByte), 0, 63);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxRetxThreshold), 0, 7);
    return enc.Error();
}

ErrorCode Decode_UL_AM_RLC(Decoder& dec, UL_AM_RLC& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sn_FieldLength = (SN_FieldLengthAM)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.t_PollRetransmit = (T_PollRetransmit)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.pollPDU = (PollPDU)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.pollByte = (PollByte)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maxRetxThreshold = (UL_AM_RLC_MaxRetxThreshold)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UL_AM_RLC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UL_AM_RLC(UL_AM_RLC& value)
{
    if (value.has_sn_FieldLength) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DL_AM_RLC：ASN.1 DL-AM-RLC；源文件第 11908 行；SEQUENCE。
// Encode_DL_AM_RLC 只读不分配；Decode_DL_AM_RLC 可能 malloc（失败时内部已释放并清零）；Free_DL_AM_RLC 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DL_AM_RLC(Encoder& enc, const DL_AM_RLC& value)
{
    enc.WriteBit(value.has_sn_FieldLength);
    if (value.has_sn_FieldLength) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sn_FieldLength), 0, 1);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.t_Reassembly), 0, 31);
    enc.WriteConstrainedInteger((std::int64_t)(value.t_StatusProhibit), 0, 63);
    return enc.Error();
}

ErrorCode Decode_DL_AM_RLC(Decoder& dec, DL_AM_RLC& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sn_FieldLength = (SN_FieldLengthAM)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.t_Reassembly = (T_Reassembly)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.t_StatusProhibit = (T_StatusProhibit)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DL_AM_RLC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DL_AM_RLC(DL_AM_RLC& value)
{
    if (value.has_sn_FieldLength) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLC_Config_Am：ASN.1 am；源文件第 11883 行；SEQUENCE。
// Encode_RLC_Config_Am 只读不分配；Decode_RLC_Config_Am 可能 malloc（失败时内部已释放并清零）；Free_RLC_Config_Am 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLC_Config_Am(Encoder& enc, const RLC_Config_Am& value)
{
    Encode_UL_AM_RLC(enc, value.ul_AM_RLC);
    Encode_DL_AM_RLC(enc, value.dl_AM_RLC);
    return enc.Error();
}

ErrorCode Decode_RLC_Config_Am(Decoder& dec, RLC_Config_Am& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_UL_AM_RLC(dec, value.ul_AM_RLC) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_DL_AM_RLC(dec, value.dl_AM_RLC) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLC_Config_Am(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLC_Config_Am(RLC_Config_Am& value)
{
    Free_UL_AM_RLC(value.ul_AM_RLC);
    Free_DL_AM_RLC(value.dl_AM_RLC);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UL_UM_RLC：ASN.1 UL-UM-RLC；源文件第 11914 行；SEQUENCE。
// Encode_UL_UM_RLC 只读不分配；Decode_UL_UM_RLC 可能 malloc（失败时内部已释放并清零）；Free_UL_UM_RLC 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UL_UM_RLC(Encoder& enc, const UL_UM_RLC& value)
{
    enc.WriteBit(value.has_sn_FieldLength);
    if (value.has_sn_FieldLength) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sn_FieldLength), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_UL_UM_RLC(Decoder& dec, UL_UM_RLC& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sn_FieldLength = (SN_FieldLengthUM)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UL_UM_RLC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UL_UM_RLC(UL_UM_RLC& value)
{
    if (value.has_sn_FieldLength) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DL_UM_RLC：ASN.1 DL-UM-RLC；源文件第 11918 行；SEQUENCE。
// Encode_DL_UM_RLC 只读不分配；Decode_DL_UM_RLC 可能 malloc（失败时内部已释放并清零）；Free_DL_UM_RLC 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DL_UM_RLC(Encoder& enc, const DL_UM_RLC& value)
{
    enc.WriteBit(value.has_sn_FieldLength);
    if (value.has_sn_FieldLength) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sn_FieldLength), 0, 1);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.t_Reassembly), 0, 31);
    return enc.Error();
}

ErrorCode Decode_DL_UM_RLC(Decoder& dec, DL_UM_RLC& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sn_FieldLength = (SN_FieldLengthUM)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.t_Reassembly = (T_Reassembly)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DL_UM_RLC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DL_UM_RLC(DL_UM_RLC& value)
{
    if (value.has_sn_FieldLength) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLC_Config_Um_Bi_Directional：ASN.1 um-Bi-Directional；源文件第 11887 行；SEQUENCE。
// Encode_RLC_Config_Um_Bi_Directional 只读不分配；Decode_RLC_Config_Um_Bi_Directional 可能 malloc（失败时内部已释放并清零）；Free_RLC_Config_Um_Bi_Directional 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLC_Config_Um_Bi_Directional(Encoder& enc, const RLC_Config_Um_Bi_Directional& value)
{
    Encode_UL_UM_RLC(enc, value.ul_UM_RLC);
    Encode_DL_UM_RLC(enc, value.dl_UM_RLC);
    return enc.Error();
}

ErrorCode Decode_RLC_Config_Um_Bi_Directional(Decoder& dec, RLC_Config_Um_Bi_Directional& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_UL_UM_RLC(dec, value.ul_UM_RLC) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_DL_UM_RLC(dec, value.dl_UM_RLC) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLC_Config_Um_Bi_Directional(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLC_Config_Um_Bi_Directional(RLC_Config_Um_Bi_Directional& value)
{
    Free_UL_UM_RLC(value.ul_UM_RLC);
    Free_DL_UM_RLC(value.dl_UM_RLC);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLC_Config_Um_Uni_Directional_UL：ASN.1 um-Uni-Directional-UL；源文件第 11891 行；SEQUENCE。
// Encode_RLC_Config_Um_Uni_Directional_UL 只读不分配；Decode_RLC_Config_Um_Uni_Directional_UL 可能 malloc（失败时内部已释放并清零）；Free_RLC_Config_Um_Uni_Directional_UL 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLC_Config_Um_Uni_Directional_UL(Encoder& enc, const RLC_Config_Um_Uni_Directional_UL& value)
{
    Encode_UL_UM_RLC(enc, value.ul_UM_RLC);
    return enc.Error();
}

ErrorCode Decode_RLC_Config_Um_Uni_Directional_UL(Decoder& dec, RLC_Config_Um_Uni_Directional_UL& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_UL_UM_RLC(dec, value.ul_UM_RLC) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLC_Config_Um_Uni_Directional_UL(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLC_Config_Um_Uni_Directional_UL(RLC_Config_Um_Uni_Directional_UL& value)
{
    Free_UL_UM_RLC(value.ul_UM_RLC);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLC_Config_Um_Uni_Directional_DL：ASN.1 um-Uni-Directional-DL；源文件第 11894 行；SEQUENCE。
// Encode_RLC_Config_Um_Uni_Directional_DL 只读不分配；Decode_RLC_Config_Um_Uni_Directional_DL 可能 malloc（失败时内部已释放并清零）；Free_RLC_Config_Um_Uni_Directional_DL 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLC_Config_Um_Uni_Directional_DL(Encoder& enc, const RLC_Config_Um_Uni_Directional_DL& value)
{
    Encode_DL_UM_RLC(enc, value.dl_UM_RLC);
    return enc.Error();
}

ErrorCode Decode_RLC_Config_Um_Uni_Directional_DL(Decoder& dec, RLC_Config_Um_Uni_Directional_DL& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_DL_UM_RLC(dec, value.dl_UM_RLC) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLC_Config_Um_Uni_Directional_DL(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLC_Config_Um_Uni_Directional_DL(RLC_Config_Um_Uni_Directional_DL& value)
{
    Free_DL_UM_RLC(value.dl_UM_RLC);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLC_Config：ASN.1 RLC-Config；源文件第 11882 行；CHOICE。
// Encode_RLC_Config 只读不分配；Decode_RLC_Config 可能 malloc（失败时内部已释放并清零）；Free_RLC_Config 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLC_Config(Encoder& enc, const RLC_Config& value)
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
    case RLC_Config_Tag_am:
        Encode_RLC_Config_Am(enc, value.u.am);
        break;
    case RLC_Config_Tag_um_Bi_Directional:
        Encode_RLC_Config_Um_Bi_Directional(enc, value.u.um_Bi_Directional);
        break;
    case RLC_Config_Tag_um_Uni_Directional_UL:
        Encode_RLC_Config_Um_Uni_Directional_UL(enc, value.u.um_Uni_Directional_UL);
        break;
    case RLC_Config_Tag_um_Uni_Directional_DL:
        Encode_RLC_Config_Um_Uni_Directional_DL(enc, value.u.um_Uni_Directional_DL);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RLC_Config(Decoder& dec, RLC_Config& value)
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
        value.tag = (RLC_Config_Tag)(4 + extension_index);
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
    value.tag = (RLC_Config_Tag)root_index;
    switch (value.tag) {
    case RLC_Config_Tag_am: {
        if (Decode_RLC_Config_Am(dec, value.u.am) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RLC_Config_Tag_um_Bi_Directional: {
        if (Decode_RLC_Config_Um_Bi_Directional(dec, value.u.um_Bi_Directional) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RLC_Config_Tag_um_Uni_Directional_UL: {
        if (Decode_RLC_Config_Um_Uni_Directional_UL(dec, value.u.um_Uni_Directional_UL) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RLC_Config_Tag_um_Uni_Directional_DL: {
        if (Decode_RLC_Config_Um_Uni_Directional_DL(dec, value.u.um_Uni_Directional_DL) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLC_Config(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLC_Config(RLC_Config& value)
{
    switch (value.tag) {
    case RLC_Config_Tag_am:
        Free_RLC_Config_Am(value.u.am);
        break;
    case RLC_Config_Tag_um_Bi_Directional:
        Free_RLC_Config_Um_Bi_Directional(value.u.um_Bi_Directional);
        break;
    case RLC_Config_Tag_um_Uni_Directional_UL:
        Free_RLC_Config_Um_Uni_Directional_UL(value.u.um_Uni_Directional_UL);
        break;
    case RLC_Config_Tag_um_Uni_Directional_DL:
        Free_RLC_Config_Um_Uni_Directional_DL(value.u.um_Uni_Directional_DL);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BH_RLC_ChannelConfig_r16：ASN.1 BH-RLC-ChannelConfig-r16；源文件第 4478 行；SEQUENCE。
// Encode_BH_RLC_ChannelConfig_r16 只读不分配；Decode_BH_RLC_ChannelConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_BH_RLC_ChannelConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BH_RLC_ChannelConfig_r16(Encoder& enc, const BH_RLC_ChannelConfig_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_bh_LogicalChannelIdentity_r16);
    enc.WriteBit(value.has_reestablishRLC_r16);
    enc.WriteBit(value.has_rlc_Config_r16);
    enc.WriteBit(value.has_mac_LogicalChannelConfig_r16);
    if (value.has_bh_LogicalChannelIdentity_r16) {
        Encode_BH_LogicalChannelIdentity_r16(enc, value.bh_LogicalChannelIdentity_r16);
    }
    enc.WriteFixedBitString(value.bh_RLC_ChannelID_r16.bytes, value.bh_RLC_ChannelID_r16.bitLength, 16, 16);
    if (value.has_reestablishRLC_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.reestablishRLC_r16), 0, 0);
    }
    if (value.has_rlc_Config_r16) {
        Encode_RLC_Config(enc, value.rlc_Config_r16);
    }
    if (value.has_mac_LogicalChannelConfig_r16) {
        Encode_LogicalChannelConfig(enc, value.mac_LogicalChannelConfig_r16);
    }
    return enc.Error();
}

ErrorCode Decode_BH_RLC_ChannelConfig_r16(Decoder& dec, BH_RLC_ChannelConfig_r16& value)
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
        if (Decode_BH_LogicalChannelIdentity_r16(dec, value.bh_LogicalChannelIdentity_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.bh_RLC_ChannelID_r16.bytes = string_bytes;
        value.bh_RLC_ChannelID_r16.bitLength = string_length;
    }
    if (present_1) {
        value.reestablishRLC_r16 = (BH_RLC_ChannelConfig_r16_ReestablishRLC_r16)0;
    }
    if (present_2) {
        if (Decode_RLC_Config(dec, value.rlc_Config_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_LogicalChannelConfig(dec, value.mac_LogicalChannelConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BH_RLC_ChannelConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BH_RLC_ChannelConfig_r16(BH_RLC_ChannelConfig_r16& value)
{
    if (value.has_bh_LogicalChannelIdentity_r16) {
        Free_BH_LogicalChannelIdentity_r16(value.bh_LogicalChannelIdentity_r16);
    }
    std::free(value.bh_RLC_ChannelID_r16.bytes);
    value.bh_RLC_ChannelID_r16.bytes = nullptr;
    value.bh_RLC_ChannelID_r16.bitLength = 0;
    if (value.has_reestablishRLC_r16) {
    }
    if (value.has_rlc_Config_r16) {
        Free_RLC_Config(value.rlc_Config_r16);
    }
    if (value.has_mac_LogicalChannelConfig_r16) {
        Free_LogicalChannelConfig(value.mac_LogicalChannelConfig_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SPS_ConfigToAddModList_r16：ASN.1 SPS-ConfigToAddModList-r16；源文件第 4565 行；SEQUENCE OF。
// Encode_SPS_ConfigToAddModList_r16 只读不分配；Decode_SPS_ConfigToAddModList_r16 可能 malloc（失败时内部已释放并清零）；Free_SPS_ConfigToAddModList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SPS_ConfigToAddModList_r16(Encoder& enc, const SPS_ConfigToAddModList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SPS_Config(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SPS_ConfigToAddModList_r16(Decoder& dec, SPS_ConfigToAddModList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SPS_Config*)std::malloc((std::size_t)value.count * sizeof(SPS_Config));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SPS_Config));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SPS_Config(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SPS_ConfigToAddModList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SPS_ConfigToAddModList_r16(SPS_ConfigToAddModList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SPS_Config(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SPS_ConfigToReleaseList_r16：ASN.1 SPS-ConfigToReleaseList-r16；源文件第 4567 行；SEQUENCE OF。
// Encode_SPS_ConfigToReleaseList_r16 只读不分配；Decode_SPS_ConfigToReleaseList_r16 可能 malloc（失败时内部已释放并清零）；Free_SPS_ConfigToReleaseList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SPS_ConfigToReleaseList_r16(Encoder& enc, const SPS_ConfigToReleaseList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_SPS_ConfigToReleaseList_r16(Decoder& dec, SPS_ConfigToReleaseList_r16& value)
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
    Free_SPS_ConfigToReleaseList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SPS_ConfigToReleaseList_r16(SPS_ConfigToReleaseList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SPS_ConfigDeactivationStateList_r16：ASN.1 SPS-ConfigDeactivationStateList-r16；源文件第 4571 行；SEQUENCE OF。
// Encode_SPS_ConfigDeactivationStateList_r16 只读不分配；Decode_SPS_ConfigDeactivationStateList_r16 可能 malloc（失败时内部已释放并清零）；Free_SPS_ConfigDeactivationStateList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SPS_ConfigDeactivationStateList_r16(Encoder& enc, const SPS_ConfigDeactivationStateList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SPS_ConfigDeactivationState_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SPS_ConfigDeactivationStateList_r16(Decoder& dec, SPS_ConfigDeactivationStateList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SPS_ConfigDeactivationState_r16*)std::malloc((std::size_t)value.count * sizeof(SPS_ConfigDeactivationState_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SPS_ConfigDeactivationState_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SPS_ConfigDeactivationState_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SPS_ConfigDeactivationStateList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SPS_ConfigDeactivationStateList_r16(SPS_ConfigDeactivationStateList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SPS_ConfigDeactivationState_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_BeamFailureRecoveryRSConfig_r16：ASN.1 SetupRelease<BeamFailureRecoveryRSConfig-r16>；源文件第 4546 行；CHOICE。
// Encode_SetupRelease_BeamFailureRecoveryRSConfig_r16 只读不分配；Decode_SetupRelease_BeamFailureRecoveryRSConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_BeamFailureRecoveryRSConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_BeamFailureRecoveryRSConfig_r16(Encoder& enc, const SetupRelease_BeamFailureRecoveryRSConfig_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_BeamFailureRecoveryRSConfig_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_BeamFailureRecoveryRSConfig_r16_Tag_setup:
        Encode_BeamFailureRecoveryRSConfig_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_BeamFailureRecoveryRSConfig_r16(Decoder& dec, SetupRelease_BeamFailureRecoveryRSConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_BeamFailureRecoveryRSConfig_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_BeamFailureRecoveryRSConfig_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_BeamFailureRecoveryRSConfig_r16_Tag_setup: {
        if (Decode_BeamFailureRecoveryRSConfig_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_BeamFailureRecoveryRSConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_BeamFailureRecoveryRSConfig_r16(SetupRelease_BeamFailureRecoveryRSConfig_r16& value)
{
    switch (value.tag) {
    case SetupRelease_BeamFailureRecoveryRSConfig_r16_Tag_release:
        break;
    case SetupRelease_BeamFailureRecoveryRSConfig_r16_Tag_setup:
        Free_BeamFailureRecoveryRSConfig_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BWP_DownlinkDedicated_ExtGroup1：ASN.1 BWP_DownlinkDedicated_ExtGroup1；源文件第 4542 行；扩展添加组 [[ ]]。
// Encode_BWP_DownlinkDedicated_ExtGroup1 只读不分配；Decode_BWP_DownlinkDedicated_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_BWP_DownlinkDedicated_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BWP_DownlinkDedicated_ExtGroup1(Encoder& enc, const BWP_DownlinkDedicated_ExtGroup1& value)
{
    enc.WriteBit(value.has_sps_ConfigToAddModList_r16);
    enc.WriteBit(value.has_sps_ConfigToReleaseList_r16);
    enc.WriteBit(value.has_sps_ConfigDeactivationStateList_r16);
    enc.WriteBit(value.has_beamFailureRecoverySCellConfig_r16);
    enc.WriteBit(value.has_sl_PDCCH_Config_r16);
    enc.WriteBit(value.has_sl_V2X_PDCCH_Config_r16);
    if (value.has_sps_ConfigToAddModList_r16) {
        Encode_SPS_ConfigToAddModList_r16(enc, value.sps_ConfigToAddModList_r16);
    }
    if (value.has_sps_ConfigToReleaseList_r16) {
        Encode_SPS_ConfigToReleaseList_r16(enc, value.sps_ConfigToReleaseList_r16);
    }
    if (value.has_sps_ConfigDeactivationStateList_r16) {
        Encode_SPS_ConfigDeactivationStateList_r16(enc, value.sps_ConfigDeactivationStateList_r16);
    }
    if (value.has_beamFailureRecoverySCellConfig_r16) {
        Encode_SetupRelease_BeamFailureRecoveryRSConfig_r16(enc, value.beamFailureRecoverySCellConfig_r16);
    }
    if (value.has_sl_PDCCH_Config_r16) {
        Encode_SetupRelease_PDCCH_Config(enc, value.sl_PDCCH_Config_r16);
    }
    if (value.has_sl_V2X_PDCCH_Config_r16) {
        Encode_SetupRelease_PDCCH_Config(enc, value.sl_V2X_PDCCH_Config_r16);
    }
    return enc.Error();
}

ErrorCode Decode_BWP_DownlinkDedicated_ExtGroup1(Decoder& dec, BWP_DownlinkDedicated_ExtGroup1& value)
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
        if (Decode_SPS_ConfigToAddModList_r16(dec, value.sps_ConfigToAddModList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SPS_ConfigToReleaseList_r16(dec, value.sps_ConfigToReleaseList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SPS_ConfigDeactivationStateList_r16(dec, value.sps_ConfigDeactivationStateList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SetupRelease_BeamFailureRecoveryRSConfig_r16(dec, value.beamFailureRecoverySCellConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SetupRelease_PDCCH_Config(dec, value.sl_PDCCH_Config_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_SetupRelease_PDCCH_Config(dec, value.sl_V2X_PDCCH_Config_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BWP_DownlinkDedicated_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BWP_DownlinkDedicated_ExtGroup1(BWP_DownlinkDedicated_ExtGroup1& value)
{
    if (value.has_sps_ConfigToAddModList_r16) {
        Free_SPS_ConfigToAddModList_r16(value.sps_ConfigToAddModList_r16);
    }
    if (value.has_sps_ConfigToReleaseList_r16) {
        Free_SPS_ConfigToReleaseList_r16(value.sps_ConfigToReleaseList_r16);
    }
    if (value.has_sps_ConfigDeactivationStateList_r16) {
        Free_SPS_ConfigDeactivationStateList_r16(value.sps_ConfigDeactivationStateList_r16);
    }
    if (value.has_beamFailureRecoverySCellConfig_r16) {
        Free_SetupRelease_BeamFailureRecoveryRSConfig_r16(value.beamFailureRecoverySCellConfig_r16);
    }
    if (value.has_sl_PDCCH_Config_r16) {
        Free_SetupRelease_PDCCH_Config(value.sl_PDCCH_Config_r16);
    }
    if (value.has_sl_V2X_PDCCH_Config_r16) {
        Free_SetupRelease_PDCCH_Config(value.sl_V2X_PDCCH_Config_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DL_PPW_PreConfigToAddModList_r17：ASN.1 DL-PPW-PreConfigToAddModList-r17；源文件第 4573 行；SEQUENCE OF。
// Encode_DL_PPW_PreConfigToAddModList_r17 只读不分配；Decode_DL_PPW_PreConfigToAddModList_r17 可能 malloc（失败时内部已释放并清零）；Free_DL_PPW_PreConfigToAddModList_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DL_PPW_PreConfigToAddModList_r17(Encoder& enc, const DL_PPW_PreConfigToAddModList_r17& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_DL_PPW_PreConfig_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_DL_PPW_PreConfigToAddModList_r17(Decoder& dec, DL_PPW_PreConfigToAddModList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (DL_PPW_PreConfig_r17*)std::malloc((std::size_t)value.count * sizeof(DL_PPW_PreConfig_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(DL_PPW_PreConfig_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_DL_PPW_PreConfig_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_DL_PPW_PreConfigToAddModList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DL_PPW_PreConfigToAddModList_r17(DL_PPW_PreConfigToAddModList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_DL_PPW_PreConfig_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DL_PPW_PreConfigToReleaseList_r17：ASN.1 DL-PPW-PreConfigToReleaseList-r17；源文件第 4575 行；SEQUENCE OF。
// Encode_DL_PPW_PreConfigToReleaseList_r17 只读不分配；Decode_DL_PPW_PreConfigToReleaseList_r17 可能 malloc（失败时内部已释放并清零）；Free_DL_PPW_PreConfigToReleaseList_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DL_PPW_PreConfigToReleaseList_r17(Encoder& enc, const DL_PPW_PreConfigToReleaseList_r17& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 15);
    }
    return enc.Error();
}

ErrorCode Decode_DL_PPW_PreConfigToReleaseList_r17(Decoder& dec, DL_PPW_PreConfigToReleaseList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (DL_PPW_ID_r17*)std::malloc((std::size_t)value.count * sizeof(DL_PPW_ID_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(DL_PPW_ID_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
    value.items[i] = (DL_PPW_ID_r17)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_DL_PPW_PreConfigToReleaseList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DL_PPW_PreConfigToReleaseList_r17(DL_PPW_PreConfigToReleaseList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SPS_ConfigMulticastToAddModList_r17：ASN.1 SPS-ConfigMulticastToAddModList-r17；源文件第 5086 行；SEQUENCE OF。
// Encode_SPS_ConfigMulticastToAddModList_r17 只读不分配；Decode_SPS_ConfigMulticastToAddModList_r17 可能 malloc（失败时内部已释放并清零）；Free_SPS_ConfigMulticastToAddModList_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SPS_ConfigMulticastToAddModList_r17(Encoder& enc, const SPS_ConfigMulticastToAddModList_r17& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SPS_Config(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SPS_ConfigMulticastToAddModList_r17(Decoder& dec, SPS_ConfigMulticastToAddModList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SPS_Config*)std::malloc((std::size_t)value.count * sizeof(SPS_Config));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SPS_Config));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SPS_Config(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SPS_ConfigMulticastToAddModList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SPS_ConfigMulticastToAddModList_r17(SPS_ConfigMulticastToAddModList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SPS_Config(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SPS_ConfigMulticastToReleaseList_r17：ASN.1 SPS-ConfigMulticastToReleaseList-r17；源文件第 5088 行；SEQUENCE OF。
// Encode_SPS_ConfigMulticastToReleaseList_r17 只读不分配；Decode_SPS_ConfigMulticastToReleaseList_r17 可能 malloc（失败时内部已释放并清零）；Free_SPS_ConfigMulticastToReleaseList_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SPS_ConfigMulticastToReleaseList_r17(Encoder& enc, const SPS_ConfigMulticastToReleaseList_r17& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_SPS_ConfigMulticastToReleaseList_r17(Decoder& dec, SPS_ConfigMulticastToReleaseList_r17& value)
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
    Free_SPS_ConfigMulticastToReleaseList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SPS_ConfigMulticastToReleaseList_r17(SPS_ConfigMulticastToReleaseList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CFR_ConfigMulticast_r17：ASN.1 CFR-ConfigMulticast-r17；源文件第 5078 行；SEQUENCE。
// Encode_CFR_ConfigMulticast_r17 只读不分配；Decode_CFR_ConfigMulticast_r17 可能 malloc（失败时内部已释放并清零）；Free_CFR_ConfigMulticast_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CFR_ConfigMulticast_r17(Encoder& enc, const CFR_ConfigMulticast_r17& value)
{
    enc.WriteBit(value.has_locationAndBandwidthMulticast_r17);
    enc.WriteBit(value.has_pdcch_ConfigMulticast_r17);
    enc.WriteBit(value.has_pdsch_ConfigMulticast_r17);
    enc.WriteBit(value.has_sps_ConfigMulticastToAddModList_r17);
    enc.WriteBit(value.has_sps_ConfigMulticastToReleaseList_r17);
    if (value.has_locationAndBandwidthMulticast_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.locationAndBandwidthMulticast_r17), 0, 37949);
    }
    if (value.has_pdcch_ConfigMulticast_r17) {
        Encode_PDCCH_Config(enc, value.pdcch_ConfigMulticast_r17);
    }
    if (value.has_pdsch_ConfigMulticast_r17) {
        Encode_PDSCH_Config(enc, value.pdsch_ConfigMulticast_r17);
    }
    if (value.has_sps_ConfigMulticastToAddModList_r17) {
        Encode_SPS_ConfigMulticastToAddModList_r17(enc, value.sps_ConfigMulticastToAddModList_r17);
    }
    if (value.has_sps_ConfigMulticastToReleaseList_r17) {
        Encode_SPS_ConfigMulticastToReleaseList_r17(enc, value.sps_ConfigMulticastToReleaseList_r17);
    }
    return enc.Error();
}

ErrorCode Decode_CFR_ConfigMulticast_r17(Decoder& dec, CFR_ConfigMulticast_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 37949, tmp_value)) { goto fail; }
        value.locationAndBandwidthMulticast_r17 = (int64_t)tmp_value;
    }
    if (present_1) {
        if (Decode_PDCCH_Config(dec, value.pdcch_ConfigMulticast_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_PDSCH_Config(dec, value.pdsch_ConfigMulticast_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SPS_ConfigMulticastToAddModList_r17(dec, value.sps_ConfigMulticastToAddModList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SPS_ConfigMulticastToReleaseList_r17(dec, value.sps_ConfigMulticastToReleaseList_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CFR_ConfigMulticast_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CFR_ConfigMulticast_r17(CFR_ConfigMulticast_r17& value)
{
    if (value.has_locationAndBandwidthMulticast_r17) {
    }
    if (value.has_pdcch_ConfigMulticast_r17) {
        Free_PDCCH_Config(value.pdcch_ConfigMulticast_r17);
    }
    if (value.has_pdsch_ConfigMulticast_r17) {
        Free_PDSCH_Config(value.pdsch_ConfigMulticast_r17);
    }
    if (value.has_sps_ConfigMulticastToAddModList_r17) {
        Free_SPS_ConfigMulticastToAddModList_r17(value.sps_ConfigMulticastToAddModList_r17);
    }
    if (value.has_sps_ConfigMulticastToReleaseList_r17) {
        Free_SPS_ConfigMulticastToReleaseList_r17(value.sps_ConfigMulticastToReleaseList_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_CFR_ConfigMulticast_r17：ASN.1 SetupRelease<CFR-ConfigMulticast-r17>；源文件第 4554 行；CHOICE。
// Encode_SetupRelease_CFR_ConfigMulticast_r17 只读不分配；Decode_SetupRelease_CFR_ConfigMulticast_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_CFR_ConfigMulticast_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_CFR_ConfigMulticast_r17(Encoder& enc, const SetupRelease_CFR_ConfigMulticast_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_CFR_ConfigMulticast_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_CFR_ConfigMulticast_r17_Tag_setup:
        Encode_CFR_ConfigMulticast_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_CFR_ConfigMulticast_r17(Decoder& dec, SetupRelease_CFR_ConfigMulticast_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_CFR_ConfigMulticast_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_CFR_ConfigMulticast_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_CFR_ConfigMulticast_r17_Tag_setup: {
        if (Decode_CFR_ConfigMulticast_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_CFR_ConfigMulticast_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_CFR_ConfigMulticast_r17(SetupRelease_CFR_ConfigMulticast_r17& value)
{
    switch (value.tag) {
    case SetupRelease_CFR_ConfigMulticast_r17_Tag_release:
        break;
    case SetupRelease_CFR_ConfigMulticast_r17_Tag_setup:
        Free_CFR_ConfigMulticast_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BWP_DownlinkDedicated_ExtGroup2：ASN.1 BWP_DownlinkDedicated_ExtGroup2；源文件第 4550 行；扩展添加组 [[ ]]。
// Encode_BWP_DownlinkDedicated_ExtGroup2 只读不分配；Decode_BWP_DownlinkDedicated_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_BWP_DownlinkDedicated_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BWP_DownlinkDedicated_ExtGroup2(Encoder& enc, const BWP_DownlinkDedicated_ExtGroup2& value)
{
    enc.WriteBit(value.has_preConfGapStatus_r17);
    enc.WriteBit(value.has_beamFailureRecoverySpCellConfig_r17);
    enc.WriteBit(value.has_harq_FeedbackEnablingforSPSactive_r17);
    enc.WriteBit(value.has_cfr_ConfigMulticast_r17);
    enc.WriteBit(value.has_dl_PPW_PreConfigToAddModList_r17);
    enc.WriteBit(value.has_dl_PPW_PreConfigToReleaseList_r17);
    enc.WriteBit(value.has_nonCellDefiningSSB_r17);
    enc.WriteBit(value.has_servingCellMO_r17);
    if (value.has_preConfGapStatus_r17) {
        enc.WriteFixedBitString(value.preConfGapStatus_r17.bytes, value.preConfGapStatus_r17.bitLength, 8, 8);
    }
    if (value.has_beamFailureRecoverySpCellConfig_r17) {
        Encode_SetupRelease_BeamFailureRecoveryRSConfig_r16(enc, value.beamFailureRecoverySpCellConfig_r17);
    }
    if (value.has_harq_FeedbackEnablingforSPSactive_r17) {
        enc.WriteBool(value.harq_FeedbackEnablingforSPSactive_r17);
    }
    if (value.has_cfr_ConfigMulticast_r17) {
        Encode_SetupRelease_CFR_ConfigMulticast_r17(enc, value.cfr_ConfigMulticast_r17);
    }
    if (value.has_dl_PPW_PreConfigToAddModList_r17) {
        Encode_DL_PPW_PreConfigToAddModList_r17(enc, value.dl_PPW_PreConfigToAddModList_r17);
    }
    if (value.has_dl_PPW_PreConfigToReleaseList_r17) {
        Encode_DL_PPW_PreConfigToReleaseList_r17(enc, value.dl_PPW_PreConfigToReleaseList_r17);
    }
    if (value.has_nonCellDefiningSSB_r17) {
        Encode_NonCellDefiningSSB_r17(enc, value.nonCellDefiningSSB_r17);
    }
    if (value.has_servingCellMO_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.servingCellMO_r17), 1, 64);
    }
    return enc.Error();
}

ErrorCode Decode_BWP_DownlinkDedicated_ExtGroup2(Decoder& dec, BWP_DownlinkDedicated_ExtGroup2& value)
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
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.preConfGapStatus_r17.bytes = string_bytes;
        value.preConfGapStatus_r17.bitLength = string_length;
    }
    if (present_1) {
        if (Decode_SetupRelease_BeamFailureRecoveryRSConfig_r16(dec, value.beamFailureRecoverySpCellConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.harq_FeedbackEnablingforSPSactive_r17 = tmp_value;
    }
    if (present_3) {
        if (Decode_SetupRelease_CFR_ConfigMulticast_r17(dec, value.cfr_ConfigMulticast_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_DL_PPW_PreConfigToAddModList_r17(dec, value.dl_PPW_PreConfigToAddModList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_DL_PPW_PreConfigToReleaseList_r17(dec, value.dl_PPW_PreConfigToReleaseList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_NonCellDefiningSSB_r17(dec, value.nonCellDefiningSSB_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.servingCellMO_r17 = (MeasObjectId)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BWP_DownlinkDedicated_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BWP_DownlinkDedicated_ExtGroup2(BWP_DownlinkDedicated_ExtGroup2& value)
{
    if (value.has_preConfGapStatus_r17) {
        std::free(value.preConfGapStatus_r17.bytes);
        value.preConfGapStatus_r17.bytes = nullptr;
        value.preConfGapStatus_r17.bitLength = 0;
    }
    if (value.has_beamFailureRecoverySpCellConfig_r17) {
        Free_SetupRelease_BeamFailureRecoveryRSConfig_r16(value.beamFailureRecoverySpCellConfig_r17);
    }
    if (value.has_harq_FeedbackEnablingforSPSactive_r17) {
    }
    if (value.has_cfr_ConfigMulticast_r17) {
        Free_SetupRelease_CFR_ConfigMulticast_r17(value.cfr_ConfigMulticast_r17);
    }
    if (value.has_dl_PPW_PreConfigToAddModList_r17) {
        Free_DL_PPW_PreConfigToAddModList_r17(value.dl_PPW_PreConfigToAddModList_r17);
    }
    if (value.has_dl_PPW_PreConfigToReleaseList_r17) {
        Free_DL_PPW_PreConfigToReleaseList_r17(value.dl_PPW_PreConfigToReleaseList_r17);
    }
    if (value.has_nonCellDefiningSSB_r17) {
        Free_NonCellDefiningSSB_r17(value.nonCellDefiningSSB_r17);
    }
    if (value.has_servingCellMO_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TCI_inDCI_r18：ASN.1 TCI-inDCI-r18；源文件第 4577 行；SEQUENCE。
// Encode_TCI_inDCI_r18 只读不分配；Decode_TCI_inDCI_r18 可能 malloc（失败时内部已释放并清零）；Free_TCI_inDCI_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TCI_inDCI_r18(Encoder& enc, const TCI_inDCI_r18& value)
{
    enc.WriteBit(value.has_tci_SelectionPresentInDCI_r18);
    enc.WriteBit(value.has_applyIndicatedTCI_StateDCI_1_0_r18);
    if (value.has_tci_SelectionPresentInDCI_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tci_SelectionPresentInDCI_r18), 0, 0);
    }
    if (value.has_applyIndicatedTCI_StateDCI_1_0_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.applyIndicatedTCI_StateDCI_1_0_r18), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_TCI_inDCI_r18(Decoder& dec, TCI_inDCI_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.tci_SelectionPresentInDCI_r18 = (TCI_inDCI_r18_Tci_SelectionPresentInDCI_r18)0;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.applyIndicatedTCI_StateDCI_1_0_r18 = (TCI_inDCI_r18_ApplyIndicatedTCI_StateDCI_1_0_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_TCI_inDCI_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TCI_inDCI_r18(TCI_inDCI_r18& value)
{
    if (value.has_tci_SelectionPresentInDCI_r18) {
    }
    if (value.has_applyIndicatedTCI_StateDCI_1_0_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_TCI_inDCI_r18：ASN.1 SetupRelease<TCI-inDCI-r18>；源文件第 4561 行；CHOICE。
// Encode_SetupRelease_TCI_inDCI_r18 只读不分配；Decode_SetupRelease_TCI_inDCI_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_TCI_inDCI_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_TCI_inDCI_r18(Encoder& enc, const SetupRelease_TCI_inDCI_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_TCI_inDCI_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_TCI_inDCI_r18_Tag_setup:
        Encode_TCI_inDCI_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_TCI_inDCI_r18(Decoder& dec, SetupRelease_TCI_inDCI_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_TCI_inDCI_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_TCI_inDCI_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_TCI_inDCI_r18_Tag_setup: {
        if (Decode_TCI_inDCI_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_TCI_inDCI_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_TCI_inDCI_r18(SetupRelease_TCI_inDCI_r18& value)
{
    switch (value.tag) {
    case SetupRelease_TCI_inDCI_r18_Tag_release:
        break;
    case SetupRelease_TCI_inDCI_r18_Tag_setup:
        Free_TCI_inDCI_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BWP_DownlinkDedicated_ExtGroup3：ASN.1 BWP_DownlinkDedicated_ExtGroup3；源文件第 4560 行；扩展添加组 [[ ]]。
// Encode_BWP_DownlinkDedicated_ExtGroup3 只读不分配；Decode_BWP_DownlinkDedicated_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_BWP_DownlinkDedicated_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BWP_DownlinkDedicated_ExtGroup3(Encoder& enc, const BWP_DownlinkDedicated_ExtGroup3& value)
{
    enc.WriteBit(value.has_tci_inDCI_18);
    if (value.has_tci_inDCI_18) {
        Encode_SetupRelease_TCI_inDCI_r18(enc, value.tci_inDCI_18);
    }
    return enc.Error();
}

ErrorCode Decode_BWP_DownlinkDedicated_ExtGroup3(Decoder& dec, BWP_DownlinkDedicated_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_TCI_inDCI_r18(dec, value.tci_inDCI_18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BWP_DownlinkDedicated_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BWP_DownlinkDedicated_ExtGroup3(BWP_DownlinkDedicated_ExtGroup3& value)
{
    if (value.has_tci_inDCI_18) {
        Free_SetupRelease_TCI_inDCI_r18(value.tci_inDCI_18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SPS_Config_ExtGroup1：ASN.1 SPS_Config_ExtGroup1；源文件第 12987 行；扩展添加组 [[ ]]。
// Encode_SPS_Config_ExtGroup1 只读不分配；Decode_SPS_Config_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SPS_Config_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SPS_Config_ExtGroup1(Encoder& enc, const SPS_Config_ExtGroup1& value)
{
    enc.WriteBit(value.has_sps_ConfigIndex_r16);
    enc.WriteBit(value.has_harq_ProcID_Offset_r16);
    enc.WriteBit(value.has_periodicityExt_r16);
    enc.WriteBit(value.has_harq_CodebookID_r16);
    enc.WriteBit(value.has_pdsch_AggregationFactor_r16);
    if (value.has_sps_ConfigIndex_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sps_ConfigIndex_r16), 0, 7);
    }
    if (value.has_harq_ProcID_Offset_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.harq_ProcID_Offset_r16), 0, 15);
    }
    if (value.has_periodicityExt_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.periodicityExt_r16), 1, 5120);
    }
    if (value.has_harq_CodebookID_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.harq_CodebookID_r16), 1, 2);
    }
    if (value.has_pdsch_AggregationFactor_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_AggregationFactor_r16), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_SPS_Config_ExtGroup1(Decoder& dec, SPS_Config_ExtGroup1& value)
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
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sps_ConfigIndex_r16 = (SPS_ConfigIndex_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.harq_ProcID_Offset_r16 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 5120, tmp_value)) { goto fail; }
        value.periodicityExt_r16 = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.harq_CodebookID_r16 = (int64_t)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.pdsch_AggregationFactor_r16 = (SPS_Config_ExtGroup1_Pdsch_AggregationFactor_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SPS_Config_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SPS_Config_ExtGroup1(SPS_Config_ExtGroup1& value)
{
    if (value.has_sps_ConfigIndex_r16) {
    }
    if (value.has_harq_ProcID_Offset_r16) {
    }
    if (value.has_periodicityExt_r16) {
    }
    if (value.has_harq_CodebookID_r16) {
    }
    if (value.has_pdsch_AggregationFactor_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SPS_Config_ExtGroup2：ASN.1 SPS_Config_ExtGroup2；源文件第 12994 行；扩展添加组 [[ ]]。
// Encode_SPS_Config_ExtGroup2 只读不分配；Decode_SPS_Config_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_SPS_Config_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SPS_Config_ExtGroup2(Encoder& enc, const SPS_Config_ExtGroup2& value)
{
    enc.WriteBit(value.has_sps_HARQ_Deferral_r17);
    enc.WriteBit(value.has_n1PUCCH_AN_PUCCHsSCell_r17);
    enc.WriteBit(value.has_periodicityExt_r17);
    enc.WriteBit(value.has_nrofHARQ_Processes_v1710);
    enc.WriteBit(value.has_harq_ProcID_Offset_v1700);
    if (value.has_sps_HARQ_Deferral_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sps_HARQ_Deferral_r17), 1, 32);
    }
    if (value.has_n1PUCCH_AN_PUCCHsSCell_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.n1PUCCH_AN_PUCCHsSCell_r17), 0, 127);
    }
    if (value.has_periodicityExt_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.periodicityExt_r17), 1, 40960);
    }
    if (value.has_nrofHARQ_Processes_v1710) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrofHARQ_Processes_v1710), 9, 32);
    }
    if (value.has_harq_ProcID_Offset_v1700) {
        enc.WriteConstrainedInteger((std::int64_t)(value.harq_ProcID_Offset_v1700), 16, 31);
    }
    return enc.Error();
}

ErrorCode Decode_SPS_Config_ExtGroup2(Decoder& dec, SPS_Config_ExtGroup2& value)
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
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.sps_HARQ_Deferral_r17 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.n1PUCCH_AN_PUCCHsSCell_r17 = (PUCCH_ResourceId)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 40960, tmp_value)) { goto fail; }
        value.periodicityExt_r17 = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(9, 32, tmp_value)) { goto fail; }
        value.nrofHARQ_Processes_v1710 = (int64_t)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(16, 31, tmp_value)) { goto fail; }
        value.harq_ProcID_Offset_v1700 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SPS_Config_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SPS_Config_ExtGroup2(SPS_Config_ExtGroup2& value)
{
    if (value.has_sps_HARQ_Deferral_r17) {
    }
    if (value.has_n1PUCCH_AN_PUCCHsSCell_r17) {
    }
    if (value.has_periodicityExt_r17) {
    }
    if (value.has_nrofHARQ_Processes_v1710) {
    }
    if (value.has_harq_ProcID_Offset_v1700) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SPS_Config：ASN.1 SPS-Config；源文件第 12980 行；SEQUENCE。
// Encode_SPS_Config 只读不分配；Decode_SPS_Config 可能 malloc（失败时内部已释放并清零）；Free_SPS_Config 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SPS_Config(Encoder& enc, const SPS_Config& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_n1PUCCH_AN);
    enc.WriteBit(value.has_mcs_Table);
    enc.WriteConstrainedInteger((std::int64_t)(value.periodicity), 0, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofHARQ_Processes), 1, 8);
    if (value.has_n1PUCCH_AN) {
        enc.WriteConstrainedInteger((std::int64_t)(value.n1PUCCH_AN), 0, 127);
    }
    if (value.has_mcs_Table) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mcs_Table), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SPS_Config_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SPS_Config_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SPS_Config(Decoder& dec, SPS_Config& value)
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
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.periodicity = (SPS_Config_Periodicity)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.nrofHARQ_Processes = (int64_t)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.n1PUCCH_AN = (PUCCH_ResourceId)tmp_value;
    }
    if (present_1) {
        value.mcs_Table = (SPS_Config_Mcs_Table)0;
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
    if (Decode_SPS_Config_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_SPS_Config_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_SPS_Config(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SPS_Config(SPS_Config& value)
{
    if (value.has_n1PUCCH_AN) {
    }
    if (value.has_mcs_Table) {
    }
    if (value.has_extGroup1) {
        Free_SPS_Config_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SPS_Config_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SPS_Config：ASN.1 SetupRelease<SPS-Config>；源文件第 4539 行；CHOICE。
// Encode_SetupRelease_SPS_Config 只读不分配；Decode_SetupRelease_SPS_Config 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SPS_Config 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SPS_Config(Encoder& enc, const SetupRelease_SPS_Config& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SPS_Config_Tag_release:
        (void)0;
        break;
    case SetupRelease_SPS_Config_Tag_setup:
        Encode_SPS_Config(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SPS_Config(Decoder& dec, SetupRelease_SPS_Config& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SPS_Config_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SPS_Config_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SPS_Config_Tag_setup: {
        if (Decode_SPS_Config(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SPS_Config(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SPS_Config(SetupRelease_SPS_Config& value)
{
    switch (value.tag) {
    case SetupRelease_SPS_Config_Tag_release:
        break;
    case SetupRelease_SPS_Config_Tag_setup:
        Free_SPS_Config(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BeamFailureDetectionSet_r17：ASN.1 BeamFailureDetectionSet-r17；源文件第 11081 行；SEQUENCE。
// Encode_BeamFailureDetectionSet_r17 只读不分配；Decode_BeamFailureDetectionSet_r17 可能 malloc（失败时内部已释放并清零）；Free_BeamFailureDetectionSet_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BeamFailureDetectionSet_r17(Encoder& enc, const BeamFailureDetectionSet_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_bfdResourcesToAddModList_r17);
    enc.WriteBit(value.has_bfdResourcesToReleaseList_r17);
    enc.WriteBit(value.has_beamFailureInstanceMaxCount_r17);
    enc.WriteBit(value.has_beamFailureDetectionTimer_r17);
    if (value.has_bfdResourcesToAddModList_r17) {
enc.WriteConstrainedLength(value.bfdResourcesToAddModList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.bfdResourcesToAddModList_r17_count; ++i) {
    Encode_BeamLinkMonitoringRS_r17(enc, value.bfdResourcesToAddModList_r17_items[i]);
}
    }
    if (value.has_bfdResourcesToReleaseList_r17) {
enc.WriteConstrainedLength(value.bfdResourcesToReleaseList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.bfdResourcesToReleaseList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.bfdResourcesToReleaseList_r17_items[i]), 0, 63);
}
    }
    if (value.has_beamFailureInstanceMaxCount_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.beamFailureInstanceMaxCount_r17), 0, 7);
    }
    if (value.has_beamFailureDetectionTimer_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.beamFailureDetectionTimer_r17), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_BeamFailureDetectionSet_r17(Decoder& dec, BeamFailureDetectionSet_r17& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.bfdResourcesToAddModList_r17_count)) { goto fail; }
if (value.bfdResourcesToAddModList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.bfdResourcesToAddModList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.bfdResourcesToAddModList_r17_count > 0u) {
    value.bfdResourcesToAddModList_r17_items = (BeamLinkMonitoringRS_r17*)std::malloc((std::size_t)value.bfdResourcesToAddModList_r17_count * sizeof(BeamLinkMonitoringRS_r17));
    if (value.bfdResourcesToAddModList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.bfdResourcesToAddModList_r17_items, 0, (std::size_t)value.bfdResourcesToAddModList_r17_count * sizeof(BeamLinkMonitoringRS_r17));
}
for (std::uint32_t i = 0; i < value.bfdResourcesToAddModList_r17_count; ++i) {
    if (Decode_BeamLinkMonitoringRS_r17(dec, value.bfdResourcesToAddModList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.bfdResourcesToReleaseList_r17_count)) { goto fail; }
if (value.bfdResourcesToReleaseList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.bfdResourcesToReleaseList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.bfdResourcesToReleaseList_r17_count > 0u) {
    value.bfdResourcesToReleaseList_r17_items = (BeamLinkMonitoringRS_Id_r17*)std::malloc((std::size_t)value.bfdResourcesToReleaseList_r17_count * sizeof(BeamLinkMonitoringRS_Id_r17));
    if (value.bfdResourcesToReleaseList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.bfdResourcesToReleaseList_r17_items, 0, (std::size_t)value.bfdResourcesToReleaseList_r17_count * sizeof(BeamLinkMonitoringRS_Id_r17));
}
for (std::uint32_t i = 0; i < value.bfdResourcesToReleaseList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.bfdResourcesToReleaseList_r17_items[i] = (BeamLinkMonitoringRS_Id_r17)tmp_value;
}
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.beamFailureInstanceMaxCount_r17 = (BeamFailureDetectionSet_r17_BeamFailureInstanceMaxCount_r17)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.beamFailureDetectionTimer_r17 = (BeamFailureDetectionSet_r17_BeamFailureDetectionTimer_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BeamFailureDetectionSet_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BeamFailureDetectionSet_r17(BeamFailureDetectionSet_r17& value)
{
    if (value.has_bfdResourcesToAddModList_r17) {
        if (value.bfdResourcesToAddModList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.bfdResourcesToAddModList_r17_count; ++i) {
                Free_BeamLinkMonitoringRS_r17(value.bfdResourcesToAddModList_r17_items[i]);
            }
            std::free(value.bfdResourcesToAddModList_r17_items);
            value.bfdResourcesToAddModList_r17_items = nullptr;
        }
        value.bfdResourcesToAddModList_r17_count = 0;
    }
    if (value.has_bfdResourcesToReleaseList_r17) {
        if (value.bfdResourcesToReleaseList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.bfdResourcesToReleaseList_r17_count; ++i) {
            }
            std::free(value.bfdResourcesToReleaseList_r17_items);
            value.bfdResourcesToReleaseList_r17_items = nullptr;
        }
        value.bfdResourcesToReleaseList_r17_count = 0;
    }
    if (value.has_beamFailureInstanceMaxCount_r17) {
    }
    if (value.has_beamFailureDetectionTimer_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BeamFailureDetection_r17：ASN.1 BeamFailureDetection-r17；源文件第 11065 行；SEQUENCE。
// Encode_BeamFailureDetection_r17 只读不分配；Decode_BeamFailureDetection_r17 可能 malloc（失败时内部已释放并清零）；Free_BeamFailureDetection_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BeamFailureDetection_r17(Encoder& enc, const BeamFailureDetection_r17& value)
{
    enc.WriteBit(value.has_failureDetectionSet1_r17);
    enc.WriteBit(value.has_failureDetectionSet2_r17);
    enc.WriteBit(value.has_additionalPCI_r17);
    if (value.has_failureDetectionSet1_r17) {
        Encode_BeamFailureDetectionSet_r17(enc, value.failureDetectionSet1_r17);
    }
    if (value.has_failureDetectionSet2_r17) {
        Encode_BeamFailureDetectionSet_r17(enc, value.failureDetectionSet2_r17);
    }
    if (value.has_additionalPCI_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.additionalPCI_r17), 1, 7);
    }
    return enc.Error();
}

ErrorCode Decode_BeamFailureDetection_r17(Decoder& dec, BeamFailureDetection_r17& value)
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
        if (Decode_BeamFailureDetectionSet_r17(dec, value.failureDetectionSet1_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BeamFailureDetectionSet_r17(dec, value.failureDetectionSet2_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 7, tmp_value)) { goto fail; }
        value.additionalPCI_r17 = (AdditionalPCIIndex_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BeamFailureDetection_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BeamFailureDetection_r17(BeamFailureDetection_r17& value)
{
    if (value.has_failureDetectionSet1_r17) {
        Free_BeamFailureDetectionSet_r17(value.failureDetectionSet1_r17);
    }
    if (value.has_failureDetectionSet2_r17) {
        Free_BeamFailureDetectionSet_r17(value.failureDetectionSet2_r17);
    }
    if (value.has_additionalPCI_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RadioLinkMonitoringConfig_ExtGroup1：ASN.1 RadioLinkMonitoringConfig_ExtGroup1；源文件第 11060 行；扩展添加组 [[ ]]。
// Encode_RadioLinkMonitoringConfig_ExtGroup1 只读不分配；Decode_RadioLinkMonitoringConfig_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_RadioLinkMonitoringConfig_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RadioLinkMonitoringConfig_ExtGroup1(Encoder& enc, const RadioLinkMonitoringConfig_ExtGroup1& value)
{
    enc.WriteBit(value.has_beamFailure_r17);
    if (value.has_beamFailure_r17) {
        Encode_BeamFailureDetection_r17(enc, value.beamFailure_r17);
    }
    return enc.Error();
}

ErrorCode Decode_RadioLinkMonitoringConfig_ExtGroup1(Decoder& dec, RadioLinkMonitoringConfig_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BeamFailureDetection_r17(dec, value.beamFailure_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RadioLinkMonitoringConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RadioLinkMonitoringConfig_ExtGroup1(RadioLinkMonitoringConfig_ExtGroup1& value)
{
    if (value.has_beamFailure_r17) {
        Free_BeamFailureDetection_r17(value.beamFailure_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RadioLinkMonitoringConfig：ASN.1 RadioLinkMonitoringConfig；源文件第 11052 行；SEQUENCE。
// Encode_RadioLinkMonitoringConfig 只读不分配；Decode_RadioLinkMonitoringConfig 可能 malloc（失败时内部已释放并清零）；Free_RadioLinkMonitoringConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RadioLinkMonitoringConfig(Encoder& enc, const RadioLinkMonitoringConfig& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_failureDetectionResourcesToAddModList);
    enc.WriteBit(value.has_failureDetectionResourcesToReleaseList);
    enc.WriteBit(value.has_beamFailureInstanceMaxCount);
    enc.WriteBit(value.has_beamFailureDetectionTimer);
    if (value.has_failureDetectionResourcesToAddModList) {
enc.WriteConstrainedLength(value.failureDetectionResourcesToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.failureDetectionResourcesToAddModList_count; ++i) {
    Encode_RadioLinkMonitoringRS(enc, value.failureDetectionResourcesToAddModList_items[i]);
}
    }
    if (value.has_failureDetectionResourcesToReleaseList) {
enc.WriteConstrainedLength(value.failureDetectionResourcesToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.failureDetectionResourcesToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.failureDetectionResourcesToReleaseList_items[i]), 0, 9);
}
    }
    if (value.has_beamFailureInstanceMaxCount) {
        enc.WriteConstrainedInteger((std::int64_t)(value.beamFailureInstanceMaxCount), 0, 7);
    }
    if (value.has_beamFailureDetectionTimer) {
        enc.WriteConstrainedInteger((std::int64_t)(value.beamFailureDetectionTimer), 0, 7);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_RadioLinkMonitoringConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_RadioLinkMonitoringConfig(Decoder& dec, RadioLinkMonitoringConfig& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.failureDetectionResourcesToAddModList_count)) { goto fail; }
if (value.failureDetectionResourcesToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.failureDetectionResourcesToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.failureDetectionResourcesToAddModList_count > 0u) {
    value.failureDetectionResourcesToAddModList_items = (RadioLinkMonitoringRS*)std::malloc((std::size_t)value.failureDetectionResourcesToAddModList_count * sizeof(RadioLinkMonitoringRS));
    if (value.failureDetectionResourcesToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.failureDetectionResourcesToAddModList_items, 0, (std::size_t)value.failureDetectionResourcesToAddModList_count * sizeof(RadioLinkMonitoringRS));
}
for (std::uint32_t i = 0; i < value.failureDetectionResourcesToAddModList_count; ++i) {
    if (Decode_RadioLinkMonitoringRS(dec, value.failureDetectionResourcesToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.failureDetectionResourcesToReleaseList_count)) { goto fail; }
if (value.failureDetectionResourcesToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.failureDetectionResourcesToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.failureDetectionResourcesToReleaseList_count > 0u) {
    value.failureDetectionResourcesToReleaseList_items = (RadioLinkMonitoringRS_Id*)std::malloc((std::size_t)value.failureDetectionResourcesToReleaseList_count * sizeof(RadioLinkMonitoringRS_Id));
    if (value.failureDetectionResourcesToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.failureDetectionResourcesToReleaseList_items, 0, (std::size_t)value.failureDetectionResourcesToReleaseList_count * sizeof(RadioLinkMonitoringRS_Id));
}
for (std::uint32_t i = 0; i < value.failureDetectionResourcesToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
    value.failureDetectionResourcesToReleaseList_items[i] = (RadioLinkMonitoringRS_Id)tmp_value;
}
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.beamFailureInstanceMaxCount = (RadioLinkMonitoringConfig_BeamFailureInstanceMaxCount)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.beamFailureDetectionTimer = (RadioLinkMonitoringConfig_BeamFailureDetectionTimer)tmp_value;
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
    if (Decode_RadioLinkMonitoringConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_RadioLinkMonitoringConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RadioLinkMonitoringConfig(RadioLinkMonitoringConfig& value)
{
    if (value.has_failureDetectionResourcesToAddModList) {
        if (value.failureDetectionResourcesToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.failureDetectionResourcesToAddModList_count; ++i) {
                Free_RadioLinkMonitoringRS(value.failureDetectionResourcesToAddModList_items[i]);
            }
            std::free(value.failureDetectionResourcesToAddModList_items);
            value.failureDetectionResourcesToAddModList_items = nullptr;
        }
        value.failureDetectionResourcesToAddModList_count = 0;
    }
    if (value.has_failureDetectionResourcesToReleaseList) {
        if (value.failureDetectionResourcesToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.failureDetectionResourcesToReleaseList_count; ++i) {
            }
            std::free(value.failureDetectionResourcesToReleaseList_items);
            value.failureDetectionResourcesToReleaseList_items = nullptr;
        }
        value.failureDetectionResourcesToReleaseList_count = 0;
    }
    if (value.has_beamFailureInstanceMaxCount) {
    }
    if (value.has_beamFailureDetectionTimer) {
    }
    if (value.has_extGroup1) {
        Free_RadioLinkMonitoringConfig_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_RadioLinkMonitoringConfig：ASN.1 SetupRelease<RadioLinkMonitoringConfig>；源文件第 4540 行；CHOICE。
// Encode_SetupRelease_RadioLinkMonitoringConfig 只读不分配；Decode_SetupRelease_RadioLinkMonitoringConfig 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_RadioLinkMonitoringConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_RadioLinkMonitoringConfig(Encoder& enc, const SetupRelease_RadioLinkMonitoringConfig& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_RadioLinkMonitoringConfig_Tag_release:
        (void)0;
        break;
    case SetupRelease_RadioLinkMonitoringConfig_Tag_setup:
        Encode_RadioLinkMonitoringConfig(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_RadioLinkMonitoringConfig(Decoder& dec, SetupRelease_RadioLinkMonitoringConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_RadioLinkMonitoringConfig_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_RadioLinkMonitoringConfig_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_RadioLinkMonitoringConfig_Tag_setup: {
        if (Decode_RadioLinkMonitoringConfig(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_RadioLinkMonitoringConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_RadioLinkMonitoringConfig(SetupRelease_RadioLinkMonitoringConfig& value)
{
    switch (value.tag) {
    case SetupRelease_RadioLinkMonitoringConfig_Tag_release:
        break;
    case SetupRelease_RadioLinkMonitoringConfig_Tag_setup:
        Free_RadioLinkMonitoringConfig(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BWP_DownlinkDedicated：ASN.1 BWP-DownlinkDedicated；源文件第 4536 行；SEQUENCE。
// Encode_BWP_DownlinkDedicated 只读不分配；Decode_BWP_DownlinkDedicated 可能 malloc（失败时内部已释放并清零）；Free_BWP_DownlinkDedicated 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BWP_DownlinkDedicated(Encoder& enc, const BWP_DownlinkDedicated& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_pdcch_Config);
    enc.WriteBit(value.has_pdsch_Config);
    enc.WriteBit(value.has_sps_Config);
    enc.WriteBit(value.has_radioLinkMonitoringConfig);
    if (value.has_pdcch_Config) {
        Encode_SetupRelease_PDCCH_Config(enc, value.pdcch_Config);
    }
    if (value.has_pdsch_Config) {
        Encode_SetupRelease_PDSCH_Config(enc, value.pdsch_Config);
    }
    if (value.has_sps_Config) {
        Encode_SetupRelease_SPS_Config(enc, value.sps_Config);
    }
    if (value.has_radioLinkMonitoringConfig) {
        Encode_SetupRelease_RadioLinkMonitoringConfig(enc, value.radioLinkMonitoringConfig);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_BWP_DownlinkDedicated_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_BWP_DownlinkDedicated_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_BWP_DownlinkDedicated_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_BWP_DownlinkDedicated(Decoder& dec, BWP_DownlinkDedicated& value)
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
        if (Decode_SetupRelease_PDCCH_Config(dec, value.pdcch_Config) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_PDSCH_Config(dec, value.pdsch_Config) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SetupRelease_SPS_Config(dec, value.sps_Config) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SetupRelease_RadioLinkMonitoringConfig(dec, value.radioLinkMonitoringConfig) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_BWP_DownlinkDedicated_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_BWP_DownlinkDedicated_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_BWP_DownlinkDedicated_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    Free_BWP_DownlinkDedicated(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BWP_DownlinkDedicated(BWP_DownlinkDedicated& value)
{
    if (value.has_pdcch_Config) {
        Free_SetupRelease_PDCCH_Config(value.pdcch_Config);
    }
    if (value.has_pdsch_Config) {
        Free_SetupRelease_PDSCH_Config(value.pdsch_Config);
    }
    if (value.has_sps_Config) {
        Free_SetupRelease_SPS_Config(value.sps_Config);
    }
    if (value.has_radioLinkMonitoringConfig) {
        Free_SetupRelease_RadioLinkMonitoringConfig(value.radioLinkMonitoringConfig);
    }
    if (value.has_extGroup1) {
        Free_BWP_DownlinkDedicated_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_BWP_DownlinkDedicated_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_BWP_DownlinkDedicated_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BWP_Downlink：ASN.1 BWP-Downlink；源文件第 4516 行；SEQUENCE。
// Encode_BWP_Downlink 只读不分配；Decode_BWP_Downlink 可能 malloc（失败时内部已释放并清零）；Free_BWP_Downlink 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BWP_Downlink(Encoder& enc, const BWP_Downlink& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_bwp_Common);
    enc.WriteBit(value.has_bwp_Dedicated);
    enc.WriteConstrainedInteger((std::int64_t)(value.bwp_Id), 0, 4);
    if (value.has_bwp_Common) {
        Encode_BWP_DownlinkCommon(enc, value.bwp_Common);
    }
    if (value.has_bwp_Dedicated) {
        Encode_BWP_DownlinkDedicated(enc, value.bwp_Dedicated);
    }
    return enc.Error();
}

ErrorCode Decode_BWP_Downlink(Decoder& dec, BWP_Downlink& value)
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
        if (Decode_BWP_DownlinkCommon(dec, value.bwp_Common) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BWP_DownlinkDedicated(dec, value.bwp_Dedicated) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BWP_Downlink(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BWP_Downlink(BWP_Downlink& value)
{
    if (value.has_bwp_Common) {
        Free_BWP_DownlinkCommon(value.bwp_Common);
    }
    if (value.has_bwp_Dedicated) {
        Free_BWP_DownlinkDedicated(value.bwp_Dedicated);
    }
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
