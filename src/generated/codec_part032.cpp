/* ============================================================================
 * src/generated/codec_part032.cpp — 生成的编解码函数
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
// SL_ReportConfigToRemoveList_r16：ASN.1 SL-ReportConfigToRemoveList-r16；源文件第 22617 行；SEQUENCE OF。
// Encode_SL_ReportConfigToRemoveList_r16 只读不分配；Decode_SL_ReportConfigToRemoveList_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_ReportConfigToRemoveList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ReportConfigToRemoveList_r16(Encoder& enc, const SL_ReportConfigToRemoveList_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 64u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 1, 64);
    }
    return enc.Error();
}

ErrorCode Decode_SL_ReportConfigToRemoveList_r16(Decoder& dec, SL_ReportConfigToRemoveList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 64u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 64u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_ReportConfigId_r16*)std::malloc((std::size_t)value.count * sizeof(SL_ReportConfigId_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_ReportConfigId_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
    value.items[i] = (SL_ReportConfigId_r16)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_ReportConfigToRemoveList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ReportConfigToRemoveList_r16(SL_ReportConfigToRemoveList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_MeasIdToRemoveList_r16：ASN.1 SL-MeasIdToRemoveList-r16；源文件第 22619 行；SEQUENCE OF。
// Encode_SL_MeasIdToRemoveList_r16 只读不分配；Decode_SL_MeasIdToRemoveList_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_MeasIdToRemoveList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_MeasIdToRemoveList_r16(Encoder& enc, const SL_MeasIdToRemoveList_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 64u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 1, 64);
    }
    return enc.Error();
}

ErrorCode Decode_SL_MeasIdToRemoveList_r16(Decoder& dec, SL_MeasIdToRemoveList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 64u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 64u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_MeasId_r16*)std::malloc((std::size_t)value.count * sizeof(SL_MeasId_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_MeasId_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
    value.items[i] = (SL_MeasId_r16)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_MeasIdToRemoveList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_MeasIdToRemoveList_r16(SL_MeasIdToRemoveList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_MeasConfig_r16：ASN.1 SL-MeasConfig-r16；源文件第 22604 行；SEQUENCE。
// Encode_SL_MeasConfig_r16 只读不分配；Decode_SL_MeasConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_MeasConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_MeasConfig_r16(Encoder& enc, const SL_MeasConfig_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_MeasObjectToRemoveList_r16);
    enc.WriteBit(value.has_sl_MeasObjectToAddModList_r16);
    enc.WriteBit(value.has_sl_ReportConfigToRemoveList_r16);
    enc.WriteBit(value.has_sl_ReportConfigToAddModList_r16);
    enc.WriteBit(value.has_sl_MeasIdToRemoveList_r16);
    enc.WriteBit(value.has_sl_MeasIdToAddModList_r16);
    enc.WriteBit(value.has_sl_QuantityConfig_r16);
    if (value.has_sl_MeasObjectToRemoveList_r16) {
        Encode_SL_MeasObjectToRemoveList_r16(enc, value.sl_MeasObjectToRemoveList_r16);
    }
    if (value.has_sl_MeasObjectToAddModList_r16) {
        Encode_SL_MeasObjectList_r16(enc, value.sl_MeasObjectToAddModList_r16);
    }
    if (value.has_sl_ReportConfigToRemoveList_r16) {
        Encode_SL_ReportConfigToRemoveList_r16(enc, value.sl_ReportConfigToRemoveList_r16);
    }
    if (value.has_sl_ReportConfigToAddModList_r16) {
        Encode_SL_ReportConfigList_r16(enc, value.sl_ReportConfigToAddModList_r16);
    }
    if (value.has_sl_MeasIdToRemoveList_r16) {
        Encode_SL_MeasIdToRemoveList_r16(enc, value.sl_MeasIdToRemoveList_r16);
    }
    if (value.has_sl_MeasIdToAddModList_r16) {
        Encode_SL_MeasIdList_r16(enc, value.sl_MeasIdToAddModList_r16);
    }
    if (value.has_sl_QuantityConfig_r16) {
        Encode_SL_QuantityConfig_r16(enc, value.sl_QuantityConfig_r16);
    }
    return enc.Error();
}

ErrorCode Decode_SL_MeasConfig_r16(Decoder& dec, SL_MeasConfig_r16& value)
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
        if (Decode_SL_MeasObjectToRemoveList_r16(dec, value.sl_MeasObjectToRemoveList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SL_MeasObjectList_r16(dec, value.sl_MeasObjectToAddModList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SL_ReportConfigToRemoveList_r16(dec, value.sl_ReportConfigToRemoveList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SL_ReportConfigList_r16(dec, value.sl_ReportConfigToAddModList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SL_MeasIdToRemoveList_r16(dec, value.sl_MeasIdToRemoveList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_SL_MeasIdList_r16(dec, value.sl_MeasIdToAddModList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_SL_QuantityConfig_r16(dec, value.sl_QuantityConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_MeasConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_MeasConfig_r16(SL_MeasConfig_r16& value)
{
    if (value.has_sl_MeasObjectToRemoveList_r16) {
        Free_SL_MeasObjectToRemoveList_r16(value.sl_MeasObjectToRemoveList_r16);
    }
    if (value.has_sl_MeasObjectToAddModList_r16) {
        Free_SL_MeasObjectList_r16(value.sl_MeasObjectToAddModList_r16);
    }
    if (value.has_sl_ReportConfigToRemoveList_r16) {
        Free_SL_ReportConfigToRemoveList_r16(value.sl_ReportConfigToRemoveList_r16);
    }
    if (value.has_sl_ReportConfigToAddModList_r16) {
        Free_SL_ReportConfigList_r16(value.sl_ReportConfigToAddModList_r16);
    }
    if (value.has_sl_MeasIdToRemoveList_r16) {
        Free_SL_MeasIdToRemoveList_r16(value.sl_MeasIdToRemoveList_r16);
    }
    if (value.has_sl_MeasIdToAddModList_r16) {
        Free_SL_MeasIdList_r16(value.sl_MeasIdToAddModList_r16);
    }
    if (value.has_sl_QuantityConfig_r16) {
        Free_SL_QuantityConfig_r16(value.sl_QuantityConfig_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_MeasConfigInfo_r16：ASN.1 SL-MeasConfigInfo-r16；源文件第 22598 行；SEQUENCE。
// Encode_SL_MeasConfigInfo_r16 只读不分配；Decode_SL_MeasConfigInfo_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_MeasConfigInfo_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_MeasConfigInfo_r16(Encoder& enc, const SL_MeasConfigInfo_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_DestinationIndex_r16), 0, 31);
    Encode_SL_MeasConfig_r16(enc, value.sl_MeasConfig_r16);
    return enc.Error();
}

ErrorCode Decode_SL_MeasConfigInfo_r16(Decoder& dec, SL_MeasConfigInfo_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.sl_DestinationIndex_r16 = (SL_DestinationIndex_r16)tmp_value;
    }
    {
        if (Decode_SL_MeasConfig_r16(dec, value.sl_MeasConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_MeasConfigInfo_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_MeasConfigInfo_r16(SL_MeasConfigInfo_r16& value)
{
    Free_SL_MeasConfig_r16(value.sl_MeasConfig_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_MeasIdInfo_r16：ASN.1 SL-MeasIdInfo-r16；源文件第 22626 行；SEQUENCE。
// Encode_SL_MeasIdInfo_r16 只读不分配；Decode_SL_MeasIdInfo_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_MeasIdInfo_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_MeasIdInfo_r16(Encoder& enc, const SL_MeasIdInfo_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_MeasId_r16), 1, 64);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_MeasObjectId_r16), 1, 64);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_ReportConfigId_r16), 1, 64);
    return enc.Error();
}

ErrorCode Decode_SL_MeasIdInfo_r16(Decoder& dec, SL_MeasIdInfo_r16& value)
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
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.sl_MeasId_r16 = (SL_MeasId_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.sl_MeasObjectId_r16 = (SL_MeasObjectId_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.sl_ReportConfigId_r16 = (SL_ReportConfigId_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_MeasIdInfo_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_MeasIdInfo_r16(SL_MeasIdInfo_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_MeasObjectInfo_r16：ASN.1 SL-MeasObjectInfo-r16；源文件第 22640 行；SEQUENCE。
// Encode_SL_MeasObjectInfo_r16 只读不分配；Decode_SL_MeasObjectInfo_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_MeasObjectInfo_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_MeasObjectInfo_r16(Encoder& enc, const SL_MeasObjectInfo_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_MeasObjectId_r16), 1, 64);
    Encode_SL_MeasObject_r16(enc, value.sl_MeasObject_r16);
    return enc.Error();
}

ErrorCode Decode_SL_MeasObjectInfo_r16(Decoder& dec, SL_MeasObjectInfo_r16& value)
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
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.sl_MeasObjectId_r16 = (SL_MeasObjectId_r16)tmp_value;
    }
    {
        if (Decode_SL_MeasObject_r16(dec, value.sl_MeasObject_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_MeasObjectInfo_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_MeasObjectInfo_r16(SL_MeasObjectInfo_r16& value)
{
    Free_SL_MeasObject_r16(value.sl_MeasObject_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PDCP_Config_r16：ASN.1 SL-PDCP-Config-r16；源文件第 22682 行；SEQUENCE。
// Encode_SL_PDCP_Config_r16 只读不分配；Decode_SL_PDCP_Config_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_PDCP_Config_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PDCP_Config_r16(Encoder& enc, const SL_PDCP_Config_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_DiscardTimer_r16);
    enc.WriteBit(value.has_sl_PDCP_SN_Size_r16);
    enc.WriteBit(value.has_sl_OutOfOrderDelivery);
    if (value.has_sl_DiscardTimer_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_DiscardTimer_r16), 0, 17);
    }
    if (value.has_sl_PDCP_SN_Size_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PDCP_SN_Size_r16), 0, 1);
    }
    if (value.has_sl_OutOfOrderDelivery) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_OutOfOrderDelivery), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PDCP_Config_r16(Decoder& dec, SL_PDCP_Config_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 17, tmp_value)) { goto fail; }
        value.sl_DiscardTimer_r16 = (SL_PDCP_Config_r16_Sl_DiscardTimer_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_PDCP_SN_Size_r16 = (SL_PDCP_Config_r16_Sl_PDCP_SN_Size_r16)tmp_value;
    }
    if (present_2) {
        value.sl_OutOfOrderDelivery = (SL_PDCP_Config_r16_Sl_OutOfOrderDelivery)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PDCP_Config_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PDCP_Config_r16(SL_PDCP_Config_r16& value)
{
    if (value.has_sl_DiscardTimer_r16) {
    }
    if (value.has_sl_PDCP_SN_Size_r16) {
    }
    if (value.has_sl_OutOfOrderDelivery) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PosBWP_ConfigCommon_r18：ASN.1 SL-PosBWP-ConfigCommon-r18；源文件第 22693 行；SEQUENCE。
// Encode_SL_PosBWP_ConfigCommon_r18 只读不分配；Decode_SL_PosBWP_ConfigCommon_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_PosBWP_ConfigCommon_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PosBWP_ConfigCommon_r18(Encoder& enc, const SL_PosBWP_ConfigCommon_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_BWP_Generic_r18);
    enc.WriteBit(value.has_sl_BWP_PRS_PoolConfigCommon_r18);
    if (value.has_sl_BWP_Generic_r18) {
        Encode_SL_BWP_Generic_r16(enc, value.sl_BWP_Generic_r18);
    }
    if (value.has_sl_BWP_PRS_PoolConfigCommon_r18) {
        Encode_SL_BWP_PRS_PoolConfigCommon_r18(enc, value.sl_BWP_PRS_PoolConfigCommon_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PosBWP_ConfigCommon_r18(Decoder& dec, SL_PosBWP_ConfigCommon_r18& value)
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
        if (Decode_SL_BWP_Generic_r16(dec, value.sl_BWP_Generic_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SL_BWP_PRS_PoolConfigCommon_r18(dec, value.sl_BWP_PRS_PoolConfigCommon_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PosBWP_ConfigCommon_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PosBWP_ConfigCommon_r18(SL_PosBWP_ConfigCommon_r18& value)
{
    if (value.has_sl_BWP_Generic_r18) {
        Free_SL_BWP_Generic_r16(value.sl_BWP_Generic_r18);
    }
    if (value.has_sl_BWP_PRS_PoolConfigCommon_r18) {
        Free_SL_BWP_PRS_PoolConfigCommon_r18(value.sl_BWP_PRS_PoolConfigCommon_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18：ASN.1 SL-ReservationPeriodAllowedDedicatedSL-PRS-RP-r18；源文件第 22737 行；CHOICE。
// Encode_SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18 只读不分配；Decode_SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18(Encoder& enc, const SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Tag_sl_ResourceReservePeriod1_r18:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl_ResourceReservePeriod1_r18), 0, 10);
        break;
    case SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Tag_sl_ResourceReservePeriod2_r18:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl_ResourceReservePeriod2_r18), 1, 99);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18(Decoder& dec, SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Tag)root_index;
    switch (value.tag) {
    case SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Tag_sl_ResourceReservePeriod1_r18: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.u.sl_ResourceReservePeriod1_r18 = (SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Sl_ResourceReservePeriod1_r18)tmp_value;
        break;
    }
    case SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Tag_sl_ResourceReservePeriod2_r18: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 99, tmp_value)) { goto fail; }
        value.u.sl_ResourceReservePeriod2_r18 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18(SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18& value)
{
    switch (value.tag) {
    case SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Tag_sl_ResourceReservePeriod1_r18:
        break;
    case SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Tag_sl_ResourceReservePeriod2_r18:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PRS_ResourceDedicatedSL_PRS_RP_r18：ASN.1 SL-PRS-ResourceDedicatedSL-PRS-RP-r18；源文件第 22742 行；SEQUENCE。
// Encode_SL_PRS_ResourceDedicatedSL_PRS_RP_r18 只读不分配；Decode_SL_PRS_ResourceDedicatedSL_PRS_RP_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_PRS_ResourceDedicatedSL_PRS_RP_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PRS_ResourceDedicatedSL_PRS_RP_r18(Encoder& enc, const SL_PRS_ResourceDedicatedSL_PRS_RP_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_PRS_ResourceID_r18);
    enc.WriteBit(value.has_sl_NumberOfSymbols_r18);
    enc.WriteBit(value.has_sl_CombSize_r18);
    enc.WriteBit(value.has_sl_PRS_starting_symbol_r18);
    enc.WriteBit(value.has_sl_PRS_comb_offset_r18);
    if (value.has_sl_PRS_ResourceID_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PRS_ResourceID_r18), 0, 11);
    }
    if (value.has_sl_NumberOfSymbols_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_NumberOfSymbols_r18), 1, 9);
    }
    if (value.has_sl_CombSize_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_CombSize_r18), 0, 2);
    }
    if (value.has_sl_PRS_starting_symbol_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PRS_starting_symbol_r18), 4, 12);
    }
    if (value.has_sl_PRS_comb_offset_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PRS_comb_offset_r18), 1, 5);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PRS_ResourceDedicatedSL_PRS_RP_r18(Decoder& dec, SL_PRS_ResourceDedicatedSL_PRS_RP_r18& value)
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
        if (!dec.ReadConstrainedInteger(0, 11, tmp_value)) { goto fail; }
        value.sl_PRS_ResourceID_r18 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 9, tmp_value)) { goto fail; }
        value.sl_NumberOfSymbols_r18 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.sl_CombSize_r18 = (SL_PRS_ResourceDedicatedSL_PRS_RP_r18_Sl_CombSize_r18)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(4, 12, tmp_value)) { goto fail; }
        value.sl_PRS_starting_symbol_r18 = (int64_t)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 5, tmp_value)) { goto fail; }
        value.sl_PRS_comb_offset_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PRS_ResourceDedicatedSL_PRS_RP_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PRS_ResourceDedicatedSL_PRS_RP_r18(SL_PRS_ResourceDedicatedSL_PRS_RP_r18& value)
{
    if (value.has_sl_PRS_ResourceID_r18) {
    }
    if (value.has_sl_NumberOfSymbols_r18) {
    }
    if (value.has_sl_CombSize_r18) {
    }
    if (value.has_sl_PRS_starting_symbol_r18) {
    }
    if (value.has_sl_PRS_comb_offset_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_TxPercentageDedicatedSL_PRS_RP_Config_r18：ASN.1 SL-TxPercentageDedicatedSL-PRS-RP-Config-r18；源文件第 22757 行；SEQUENCE。
// Encode_SL_TxPercentageDedicatedSL_PRS_RP_Config_r18 只读不分配；Decode_SL_TxPercentageDedicatedSL_PRS_RP_Config_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_TxPercentageDedicatedSL_PRS_RP_Config_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_TxPercentageDedicatedSL_PRS_RP_Config_r18(Encoder& enc, const SL_TxPercentageDedicatedSL_PRS_RP_Config_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_TxPercentageDedicatedSL_PRS_RP_r18);
    enc.WriteBit(value.has_sl_Priority_DedicatedSL_PRS_RP);
    if (value.has_sl_TxPercentageDedicatedSL_PRS_RP_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_TxPercentageDedicatedSL_PRS_RP_r18), 1, 8);
    }
    if (value.has_sl_Priority_DedicatedSL_PRS_RP) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_Priority_DedicatedSL_PRS_RP), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_SL_TxPercentageDedicatedSL_PRS_RP_Config_r18(Decoder& dec, SL_TxPercentageDedicatedSL_PRS_RP_Config_r18& value)
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
        value.sl_TxPercentageDedicatedSL_PRS_RP_r18 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.sl_Priority_DedicatedSL_PRS_RP = (SL_TxPercentageDedicatedSL_PRS_RP_Config_r18_Sl_Priority_DedicatedSL_PRS_RP)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_TxPercentageDedicatedSL_PRS_RP_Config_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_TxPercentageDedicatedSL_PRS_RP_Config_r18(SL_TxPercentageDedicatedSL_PRS_RP_Config_r18& value)
{
    if (value.has_sl_TxPercentageDedicatedSL_PRS_RP_r18) {
    }
    if (value.has_sl_Priority_DedicatedSL_PRS_RP) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PriorityTxConfigIndexDedicatedSL_PRS_RP_r18：ASN.1 SL-PriorityTxConfigIndexDedicatedSL-PRS-RP-r18；源文件第 22762 行；SEQUENCE。
// Encode_SL_PriorityTxConfigIndexDedicatedSL_PRS_RP_r18 只读不分配；Decode_SL_PriorityTxConfigIndexDedicatedSL_PRS_RP_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_PriorityTxConfigIndexDedicatedSL_PRS_RP_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PriorityTxConfigIndexDedicatedSL_PRS_RP_r18(Encoder& enc, const SL_PriorityTxConfigIndexDedicatedSL_PRS_RP_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_PriorityThresholdDedicatedSL_PRS_RP_r18);
    enc.WriteBit(value.has_sl_DefaultTxConfigIndexDedicatedSL_PRS_RP_r18);
    enc.WriteBit(value.has_sl_CBR_ConfigIndexDedicatedSL_PRS_RP_r18);
    enc.WriteBit(value.has_sl_PRS_TxConfigIndexList_r18);
    if (value.has_sl_PriorityThresholdDedicatedSL_PRS_RP_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PriorityThresholdDedicatedSL_PRS_RP_r18), 1, 8);
    }
    if (value.has_sl_DefaultTxConfigIndexDedicatedSL_PRS_RP_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_DefaultTxConfigIndexDedicatedSL_PRS_RP_r18), 0, 15);
    }
    if (value.has_sl_CBR_ConfigIndexDedicatedSL_PRS_RP_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_CBR_ConfigIndexDedicatedSL_PRS_RP_r18), 0, 7);
    }
    if (value.has_sl_PRS_TxConfigIndexList_r18) {
enc.WriteConstrainedLength(value.sl_PRS_TxConfigIndexList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_PRS_TxConfigIndexList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_PRS_TxConfigIndexList_r18_items[i]), 0, 64);
}
    }
    return enc.Error();
}

ErrorCode Decode_SL_PriorityTxConfigIndexDedicatedSL_PRS_RP_r18(Decoder& dec, SL_PriorityTxConfigIndexDedicatedSL_PRS_RP_r18& value)
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
        value.sl_PriorityThresholdDedicatedSL_PRS_RP_r18 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.sl_DefaultTxConfigIndexDedicatedSL_PRS_RP_r18 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sl_CBR_ConfigIndexDedicatedSL_PRS_RP_r18 = (int64_t)tmp_value;
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_PRS_TxConfigIndexList_r18_count)) { goto fail; }
if (value.sl_PRS_TxConfigIndexList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_PRS_TxConfigIndexList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_PRS_TxConfigIndexList_r18_count > 0u) {
    value.sl_PRS_TxConfigIndexList_r18_items = (SL_PRS_TxConfigIndex_r18*)std::malloc((std::size_t)value.sl_PRS_TxConfigIndexList_r18_count * sizeof(SL_PRS_TxConfigIndex_r18));
    if (value.sl_PRS_TxConfigIndexList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_PRS_TxConfigIndexList_r18_items, 0, (std::size_t)value.sl_PRS_TxConfigIndexList_r18_count * sizeof(SL_PRS_TxConfigIndex_r18));
}
for (std::uint32_t i = 0; i < value.sl_PRS_TxConfigIndexList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 64, tmp_value)) { goto fail; }
    value.sl_PRS_TxConfigIndexList_r18_items[i] = (SL_PRS_TxConfigIndex_r18)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PriorityTxConfigIndexDedicatedSL_PRS_RP_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PriorityTxConfigIndexDedicatedSL_PRS_RP_r18(SL_PriorityTxConfigIndexDedicatedSL_PRS_RP_r18& value)
{
    if (value.has_sl_PriorityThresholdDedicatedSL_PRS_RP_r18) {
    }
    if (value.has_sl_DefaultTxConfigIndexDedicatedSL_PRS_RP_r18) {
    }
    if (value.has_sl_CBR_ConfigIndexDedicatedSL_PRS_RP_r18) {
    }
    if (value.has_sl_PRS_TxConfigIndexList_r18) {
        if (value.sl_PRS_TxConfigIndexList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_PRS_TxConfigIndexList_r18_count; ++i) {
            }
            std::free(value.sl_PRS_TxConfigIndexList_r18_items);
            value.sl_PRS_TxConfigIndexList_r18_items = nullptr;
        }
        value.sl_PRS_TxConfigIndexList_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PSSCH_TxConfig_r16_ExtGroup1：ASN.1 SL_PSSCH_TxConfig_r16_ExtGroup1；源文件第 22796 行；扩展添加组 [[ ]]。
// Encode_SL_PSSCH_TxConfig_r16_ExtGroup1 只读不分配；Decode_SL_PSSCH_TxConfig_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SL_PSSCH_TxConfig_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PSSCH_TxConfig_r16_ExtGroup1(Encoder& enc, const SL_PSSCH_TxConfig_r16_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_ParametersAboveThres_v1650);
    enc.WriteBit(value.has_sl_ParametersBelowThres_v1650);
    if (value.has_sl_ParametersAboveThres_v1650) {
        Encode_SL_MinMaxMCS_List_r16(enc, value.sl_ParametersAboveThres_v1650);
    }
    if (value.has_sl_ParametersBelowThres_v1650) {
        Encode_SL_MinMaxMCS_List_r16(enc, value.sl_ParametersBelowThres_v1650);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PSSCH_TxConfig_r16_ExtGroup1(Decoder& dec, SL_PSSCH_TxConfig_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SL_MinMaxMCS_List_r16(dec, value.sl_ParametersAboveThres_v1650) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SL_MinMaxMCS_List_r16(dec, value.sl_ParametersBelowThres_v1650) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PSSCH_TxConfig_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PSSCH_TxConfig_r16_ExtGroup1(SL_PSSCH_TxConfig_r16_ExtGroup1& value)
{
    if (value.has_sl_ParametersAboveThres_v1650) {
        Free_SL_MinMaxMCS_List_r16(value.sl_ParametersAboveThres_v1650);
    }
    if (value.has_sl_ParametersBelowThres_v1650) {
        Free_SL_MinMaxMCS_List_r16(value.sl_ParametersBelowThres_v1650);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PSSCH_TxConfig_r16：ASN.1 SL-PSSCH-TxConfig-r16；源文件第 22789 行；SEQUENCE。
// Encode_SL_PSSCH_TxConfig_r16 只读不分配；Decode_SL_PSSCH_TxConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_PSSCH_TxConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PSSCH_TxConfig_r16(Encoder& enc, const SL_PSSCH_TxConfig_r16& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_TypeTxSync_r16);
    if (value.has_sl_TypeTxSync_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_TypeTxSync_r16), 0, 2);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_ThresUE_Speed_r16), 0, 7);
    Encode_SL_PSSCH_TxParameters_r16(enc, value.sl_ParametersAboveThres_r16);
    Encode_SL_PSSCH_TxParameters_r16(enc, value.sl_ParametersBelowThres_r16);
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SL_PSSCH_TxConfig_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SL_PSSCH_TxConfig_r16(Decoder& dec, SL_PSSCH_TxConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.sl_TypeTxSync_r16 = (SL_TypeTxSync_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sl_ThresUE_Speed_r16 = (SL_PSSCH_TxConfig_r16_Sl_ThresUE_Speed_r16)tmp_value;
    }
    {
        if (Decode_SL_PSSCH_TxParameters_r16(dec, value.sl_ParametersAboveThres_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_SL_PSSCH_TxParameters_r16(dec, value.sl_ParametersBelowThres_r16) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_SL_PSSCH_TxConfig_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_SL_PSSCH_TxConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PSSCH_TxConfig_r16(SL_PSSCH_TxConfig_r16& value)
{
    if (value.has_sl_TypeTxSync_r16) {
    }
    Free_SL_PSSCH_TxParameters_r16(value.sl_ParametersAboveThres_r16);
    Free_SL_PSSCH_TxParameters_r16(value.sl_ParametersBelowThres_r16);
    if (value.has_extGroup1) {
        Free_SL_PSSCH_TxConfig_r16_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_MappedQoS_FlowsListDedicated_r16：ASN.1 SL-MappedQoS-FlowsListDedicated-r16；源文件第 23294 行；SEQUENCE。
// Encode_SL_MappedQoS_FlowsListDedicated_r16 只读不分配；Decode_SL_MappedQoS_FlowsListDedicated_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_MappedQoS_FlowsListDedicated_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_MappedQoS_FlowsListDedicated_r16(Encoder& enc, const SL_MappedQoS_FlowsListDedicated_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_MappedQoS_FlowsToAddList_r16);
    enc.WriteBit(value.has_sl_MappedQoS_FlowsToReleaseList_r16);
    if (value.has_sl_MappedQoS_FlowsToAddList_r16) {
enc.WriteConstrainedLength(value.sl_MappedQoS_FlowsToAddList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_MappedQoS_FlowsToAddList_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_MappedQoS_FlowsToAddList_r16_items[i]), 1, 2048);
}
    }
    if (value.has_sl_MappedQoS_FlowsToReleaseList_r16) {
enc.WriteConstrainedLength(value.sl_MappedQoS_FlowsToReleaseList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_MappedQoS_FlowsToReleaseList_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_MappedQoS_FlowsToReleaseList_r16_items[i]), 1, 2048);
}
    }
    return enc.Error();
}

ErrorCode Decode_SL_MappedQoS_FlowsListDedicated_r16(Decoder& dec, SL_MappedQoS_FlowsListDedicated_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_MappedQoS_FlowsToAddList_r16_count)) { goto fail; }
if (value.sl_MappedQoS_FlowsToAddList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_MappedQoS_FlowsToAddList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_MappedQoS_FlowsToAddList_r16_count > 0u) {
    value.sl_MappedQoS_FlowsToAddList_r16_items = (SL_QoS_FlowIdentity_r16*)std::malloc((std::size_t)value.sl_MappedQoS_FlowsToAddList_r16_count * sizeof(SL_QoS_FlowIdentity_r16));
    if (value.sl_MappedQoS_FlowsToAddList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_MappedQoS_FlowsToAddList_r16_items, 0, (std::size_t)value.sl_MappedQoS_FlowsToAddList_r16_count * sizeof(SL_QoS_FlowIdentity_r16));
}
for (std::uint32_t i = 0; i < value.sl_MappedQoS_FlowsToAddList_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 2048, tmp_value)) { goto fail; }
    value.sl_MappedQoS_FlowsToAddList_r16_items[i] = (SL_QoS_FlowIdentity_r16)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_MappedQoS_FlowsToReleaseList_r16_count)) { goto fail; }
if (value.sl_MappedQoS_FlowsToReleaseList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_MappedQoS_FlowsToReleaseList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_MappedQoS_FlowsToReleaseList_r16_count > 0u) {
    value.sl_MappedQoS_FlowsToReleaseList_r16_items = (SL_QoS_FlowIdentity_r16*)std::malloc((std::size_t)value.sl_MappedQoS_FlowsToReleaseList_r16_count * sizeof(SL_QoS_FlowIdentity_r16));
    if (value.sl_MappedQoS_FlowsToReleaseList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_MappedQoS_FlowsToReleaseList_r16_items, 0, (std::size_t)value.sl_MappedQoS_FlowsToReleaseList_r16_count * sizeof(SL_QoS_FlowIdentity_r16));
}
for (std::uint32_t i = 0; i < value.sl_MappedQoS_FlowsToReleaseList_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 2048, tmp_value)) { goto fail; }
    value.sl_MappedQoS_FlowsToReleaseList_r16_items[i] = (SL_QoS_FlowIdentity_r16)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_MappedQoS_FlowsListDedicated_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_MappedQoS_FlowsListDedicated_r16(SL_MappedQoS_FlowsListDedicated_r16& value)
{
    if (value.has_sl_MappedQoS_FlowsToAddList_r16) {
        if (value.sl_MappedQoS_FlowsToAddList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_MappedQoS_FlowsToAddList_r16_count; ++i) {
            }
            std::free(value.sl_MappedQoS_FlowsToAddList_r16_items);
            value.sl_MappedQoS_FlowsToAddList_r16_items = nullptr;
        }
        value.sl_MappedQoS_FlowsToAddList_r16_count = 0;
    }
    if (value.has_sl_MappedQoS_FlowsToReleaseList_r16) {
        if (value.sl_MappedQoS_FlowsToReleaseList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_MappedQoS_FlowsToReleaseList_r16_count; ++i) {
            }
            std::free(value.sl_MappedQoS_FlowsToReleaseList_r16_items);
            value.sl_MappedQoS_FlowsToReleaseList_r16_items = nullptr;
        }
        value.sl_MappedQoS_FlowsToReleaseList_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Sl_MappedQoS_FlowsList_r16：ASN.1 sl-MappedQoS-Flows-r16/sl-MappedQoS-FlowsList-r16；源文件第 23287 行；SEQUENCE OF。
// Encode_SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Sl_MappedQoS_FlowsList_r16 只读不分配；Decode_SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Sl_MappedQoS_FlowsList_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Sl_MappedQoS_FlowsList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Sl_MappedQoS_FlowsList_r16(Encoder& enc, const SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Sl_MappedQoS_FlowsList_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 2048u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SL_QoS_Profile_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Sl_MappedQoS_FlowsList_r16(Decoder& dec, SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Sl_MappedQoS_FlowsList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 2048u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 2048u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_QoS_Profile_r16*)std::malloc((std::size_t)value.count * sizeof(SL_QoS_Profile_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_QoS_Profile_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SL_QoS_Profile_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Sl_MappedQoS_FlowsList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Sl_MappedQoS_FlowsList_r16(SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Sl_MappedQoS_FlowsList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SL_QoS_Profile_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16：ASN.1 sl-MappedQoS-Flows-r16；源文件第 23286 行；CHOICE。
// Encode_SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16 只读不分配；Decode_SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16(Encoder& enc, const SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Tag_sl_MappedQoS_FlowsList_r16:
        Encode_SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Sl_MappedQoS_FlowsList_r16(enc, value.u.sl_MappedQoS_FlowsList_r16);
        break;
    case SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Tag_sl_MappedQoS_FlowsListDedicated_r16:
        Encode_SL_MappedQoS_FlowsListDedicated_r16(enc, value.u.sl_MappedQoS_FlowsListDedicated_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16(Decoder& dec, SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Tag)root_index;
    switch (value.tag) {
    case SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Tag_sl_MappedQoS_FlowsList_r16: {
        if (Decode_SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Sl_MappedQoS_FlowsList_r16(dec, value.u.sl_MappedQoS_FlowsList_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Tag_sl_MappedQoS_FlowsListDedicated_r16: {
        if (Decode_SL_MappedQoS_FlowsListDedicated_r16(dec, value.u.sl_MappedQoS_FlowsListDedicated_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16(SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16& value)
{
    switch (value.tag) {
    case SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Tag_sl_MappedQoS_FlowsList_r16:
        Free_SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Sl_MappedQoS_FlowsList_r16(value.u.sl_MappedQoS_FlowsList_r16);
        break;
    case SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Tag_sl_MappedQoS_FlowsListDedicated_r16:
        Free_SL_MappedQoS_FlowsListDedicated_r16(value.u.sl_MappedQoS_FlowsListDedicated_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_SDAP_Config_r16：ASN.1 SL-SDAP-Config-r16；源文件第 23283 行；SEQUENCE。
// Encode_SL_SDAP_Config_r16 只读不分配；Decode_SL_SDAP_Config_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_SDAP_Config_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_SDAP_Config_r16(Encoder& enc, const SL_SDAP_Config_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_MappedQoS_Flows_r16);
    enc.WriteBit(value.has_sl_CastType_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_SDAP_Header_r16), 0, 1);
    enc.WriteBool(value.sl_DefaultRB_r16);
    if (value.has_sl_MappedQoS_Flows_r16) {
        Encode_SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16(enc, value.sl_MappedQoS_Flows_r16);
    }
    if (value.has_sl_CastType_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_CastType_r16), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_SL_SDAP_Config_r16(Decoder& dec, SL_SDAP_Config_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_SDAP_Header_r16 = (SL_SDAP_Config_r16_Sl_SDAP_Header_r16)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.sl_DefaultRB_r16 = tmp_value;
    }
    if (present_0) {
        if (Decode_SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16(dec, value.sl_MappedQoS_Flows_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.sl_CastType_r16 = (SL_SDAP_Config_r16_Sl_CastType_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_SDAP_Config_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_SDAP_Config_r16(SL_SDAP_Config_r16& value)
{
    if (value.has_sl_MappedQoS_Flows_r16) {
        Free_SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16(value.sl_MappedQoS_Flows_r16);
    }
    if (value.has_sl_CastType_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_RadioBearerConfig_r16：ASN.1 SL-RadioBearerConfig-r16；源文件第 22852 行；SEQUENCE。
// Encode_SL_RadioBearerConfig_r16 只读不分配；Decode_SL_RadioBearerConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_RadioBearerConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_RadioBearerConfig_r16(Encoder& enc, const SL_RadioBearerConfig_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_SDAP_Config_r16);
    enc.WriteBit(value.has_sl_PDCP_Config_r16);
    enc.WriteBit(value.has_sl_TransRange_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.slrb_Uu_ConfigIndex_r16), 1, 512);
    if (value.has_sl_SDAP_Config_r16) {
        Encode_SL_SDAP_Config_r16(enc, value.sl_SDAP_Config_r16);
    }
    if (value.has_sl_PDCP_Config_r16) {
        Encode_SL_PDCP_Config_r16(enc, value.sl_PDCP_Config_r16);
    }
    if (value.has_sl_TransRange_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_TransRange_r16), 0, 31);
    }
    return enc.Error();
}

ErrorCode Decode_SL_RadioBearerConfig_r16(Decoder& dec, SL_RadioBearerConfig_r16& value)
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
        if (!dec.ReadConstrainedInteger(1, 512, tmp_value)) { goto fail; }
        value.slrb_Uu_ConfigIndex_r16 = (SLRB_Uu_ConfigIndex_r16)tmp_value;
    }
    if (present_0) {
        if (Decode_SL_SDAP_Config_r16(dec, value.sl_SDAP_Config_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SL_PDCP_Config_r16(dec, value.sl_PDCP_Config_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.sl_TransRange_r16 = (SL_RadioBearerConfig_r16_Sl_TransRange_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_RadioBearerConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_RadioBearerConfig_r16(SL_RadioBearerConfig_r16& value)
{
    if (value.has_sl_SDAP_Config_r16) {
        Free_SL_SDAP_Config_r16(value.sl_SDAP_Config_r16);
    }
    if (value.has_sl_PDCP_Config_r16) {
        Free_SL_PDCP_Config_r16(value.sl_PDCP_Config_r16);
    }
    if (value.has_sl_TransRange_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_RBSetConfig_r18：ASN.1 SL-RBSetConfig-r18；源文件第 22865 行；SEQUENCE。
// Encode_SL_RBSetConfig_r18 只读不分配；Decode_SL_RBSetConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_RBSetConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_RBSetConfig_r18(Encoder& enc, const SL_RBSetConfig_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_NumOfSSSBRepetition_r18);
    enc.WriteBit(value.has_sl_GapBetweenSSSBRepetition_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_RBSetIndex_r18), 0, 4);
    if (value.has_sl_NumOfSSSBRepetition_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_NumOfSSSBRepetition_r18), 2, 9);
    }
    if (value.has_sl_GapBetweenSSSBRepetition_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_GapBetweenSSSBRepetition_r18), 1, 84);
    }
    return enc.Error();
}

ErrorCode Decode_SL_RBSetConfig_r18(Decoder& dec, SL_RBSetConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.sl_RBSetIndex_r18 = (int64_t)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 9, tmp_value)) { goto fail; }
        value.sl_NumOfSSSBRepetition_r18 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 84, tmp_value)) { goto fail; }
        value.sl_GapBetweenSSSBRepetition_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_RBSetConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_RBSetConfig_r18(SL_RBSetConfig_r18& value)
{
    if (value.has_sl_NumOfSSSBRepetition_r18) {
    }
    if (value.has_sl_GapBetweenSSSBRepetition_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PeriodicalReportConfig_r16：ASN.1 SL-PeriodicalReportConfig-r16；源文件第 22944 行；SEQUENCE。
// Encode_SL_PeriodicalReportConfig_r16 只读不分配；Decode_SL_PeriodicalReportConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_PeriodicalReportConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PeriodicalReportConfig_r16(Encoder& enc, const SL_PeriodicalReportConfig_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_ReportInterval_r16), 0, 13);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_ReportAmount_r16), 0, 7);
    Encode_SL_MeasReportQuantity_r16(enc, value.sl_ReportQuantity_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_RS_Type_r16), 0, 3);
    return enc.Error();
}

ErrorCode Decode_SL_PeriodicalReportConfig_r16(Decoder& dec, SL_PeriodicalReportConfig_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.sl_ReportInterval_r16 = (ReportInterval)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sl_ReportAmount_r16 = (SL_PeriodicalReportConfig_r16_Sl_ReportAmount_r16)tmp_value;
    }
    {
        if (Decode_SL_MeasReportQuantity_r16(dec, value.sl_ReportQuantity_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.sl_RS_Type_r16 = (SL_RS_Type_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PeriodicalReportConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PeriodicalReportConfig_r16(SL_PeriodicalReportConfig_r16& value)
{
    Free_SL_MeasReportQuantity_r16(value.sl_ReportQuantity_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS1_r16：ASN.1 sl-EventId-r16/eventS1-r16；源文件第 22954 行；SEQUENCE。
// Encode_SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS1_r16 只读不分配；Decode_SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS1_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS1_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS1_r16(Encoder& enc, const SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS1_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_SL_MeasTriggerQuantity_r16(enc, value.s1_Threshold_r16);
    enc.WriteBool(value.sl_ReportOnLeave_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_Hysteresis_r16), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_TimeToTrigger_r16), 0, 15);
    return enc.Error();
}

ErrorCode Decode_SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS1_r16(Decoder& dec, SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS1_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_SL_MeasTriggerQuantity_r16(dec, value.s1_Threshold_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.sl_ReportOnLeave_r16 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.sl_Hysteresis_r16 = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.sl_TimeToTrigger_r16 = (TimeToTrigger)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS1_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS1_r16(SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS1_r16& value)
{
    Free_SL_MeasTriggerQuantity_r16(value.s1_Threshold_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS2_r16：ASN.1 sl-EventId-r16/eventS2-r16；源文件第 22961 行；SEQUENCE。
// Encode_SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS2_r16 只读不分配；Decode_SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS2_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS2_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS2_r16(Encoder& enc, const SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS2_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_SL_MeasTriggerQuantity_r16(enc, value.s2_Threshold_r16);
    enc.WriteBool(value.sl_ReportOnLeave_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_Hysteresis_r16), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_TimeToTrigger_r16), 0, 15);
    return enc.Error();
}

ErrorCode Decode_SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS2_r16(Decoder& dec, SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS2_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_SL_MeasTriggerQuantity_r16(dec, value.s2_Threshold_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.sl_ReportOnLeave_r16 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.sl_Hysteresis_r16 = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.sl_TimeToTrigger_r16 = (TimeToTrigger)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS2_r16(SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS2_r16& value)
{
    Free_SL_MeasTriggerQuantity_r16(value.s2_Threshold_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_EventTriggerConfig_r16_Sl_EventId_r16：ASN.1 sl-EventId-r16；源文件第 22953 行；CHOICE。
// Encode_SL_EventTriggerConfig_r16_Sl_EventId_r16 只读不分配；Decode_SL_EventTriggerConfig_r16_Sl_EventId_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_EventTriggerConfig_r16_Sl_EventId_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_EventTriggerConfig_r16_Sl_EventId_r16(Encoder& enc, const SL_EventTriggerConfig_r16_Sl_EventId_r16& value)
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
    case SL_EventTriggerConfig_r16_Sl_EventId_r16_Tag_eventS1_r16:
        Encode_SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS1_r16(enc, value.u.eventS1_r16);
        break;
    case SL_EventTriggerConfig_r16_Sl_EventId_r16_Tag_eventS2_r16:
        Encode_SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS2_r16(enc, value.u.eventS2_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SL_EventTriggerConfig_r16_Sl_EventId_r16(Decoder& dec, SL_EventTriggerConfig_r16_Sl_EventId_r16& value)
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
        value.tag = (SL_EventTriggerConfig_r16_Sl_EventId_r16_Tag)(2 + extension_index);
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
    value.tag = (SL_EventTriggerConfig_r16_Sl_EventId_r16_Tag)root_index;
    switch (value.tag) {
    case SL_EventTriggerConfig_r16_Sl_EventId_r16_Tag_eventS1_r16: {
        if (Decode_SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS1_r16(dec, value.u.eventS1_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SL_EventTriggerConfig_r16_Sl_EventId_r16_Tag_eventS2_r16: {
        if (Decode_SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS2_r16(dec, value.u.eventS2_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_EventTriggerConfig_r16_Sl_EventId_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_EventTriggerConfig_r16_Sl_EventId_r16(SL_EventTriggerConfig_r16_Sl_EventId_r16& value)
{
    switch (value.tag) {
    case SL_EventTriggerConfig_r16_Sl_EventId_r16_Tag_eventS1_r16:
        Free_SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS1_r16(value.u.eventS1_r16);
        break;
    case SL_EventTriggerConfig_r16_Sl_EventId_r16_Tag_eventS2_r16:
        Free_SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS2_r16(value.u.eventS2_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_EventTriggerConfig_r16：ASN.1 SL-EventTriggerConfig-r16；源文件第 22952 行；SEQUENCE。
// Encode_SL_EventTriggerConfig_r16 只读不分配；Decode_SL_EventTriggerConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_EventTriggerConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_EventTriggerConfig_r16(Encoder& enc, const SL_EventTriggerConfig_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_SL_EventTriggerConfig_r16_Sl_EventId_r16(enc, value.sl_EventId_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_ReportInterval_r16), 0, 13);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_ReportAmount_r16), 0, 7);
    Encode_SL_MeasReportQuantity_r16(enc, value.sl_ReportQuantity_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_RS_Type_r16), 0, 3);
    return enc.Error();
}

ErrorCode Decode_SL_EventTriggerConfig_r16(Decoder& dec, SL_EventTriggerConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_SL_EventTriggerConfig_r16_Sl_EventId_r16(dec, value.sl_EventId_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.sl_ReportInterval_r16 = (ReportInterval)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sl_ReportAmount_r16 = (SL_EventTriggerConfig_r16_Sl_ReportAmount_r16)tmp_value;
    }
    {
        if (Decode_SL_MeasReportQuantity_r16(dec, value.sl_ReportQuantity_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.sl_RS_Type_r16 = (SL_RS_Type_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_EventTriggerConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_EventTriggerConfig_r16(SL_EventTriggerConfig_r16& value)
{
    Free_SL_EventTriggerConfig_r16_Sl_EventId_r16(value.sl_EventId_r16);
    Free_SL_MeasReportQuantity_r16(value.sl_ReportQuantity_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ReportConfig_r16_Sl_ReportType_r16：ASN.1 sl-ReportType-r16；源文件第 22936 行；CHOICE。
// Encode_SL_ReportConfig_r16_Sl_ReportType_r16 只读不分配；Decode_SL_ReportConfig_r16_Sl_ReportType_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_ReportConfig_r16_Sl_ReportType_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ReportConfig_r16_Sl_ReportType_r16(Encoder& enc, const SL_ReportConfig_r16_Sl_ReportType_r16& value)
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
    case SL_ReportConfig_r16_Sl_ReportType_r16_Tag_sl_Periodical_r16:
        Encode_SL_PeriodicalReportConfig_r16(enc, value.u.sl_Periodical_r16);
        break;
    case SL_ReportConfig_r16_Sl_ReportType_r16_Tag_sl_EventTriggered_r16:
        Encode_SL_EventTriggerConfig_r16(enc, value.u.sl_EventTriggered_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SL_ReportConfig_r16_Sl_ReportType_r16(Decoder& dec, SL_ReportConfig_r16_Sl_ReportType_r16& value)
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
        value.tag = (SL_ReportConfig_r16_Sl_ReportType_r16_Tag)(2 + extension_index);
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
    value.tag = (SL_ReportConfig_r16_Sl_ReportType_r16_Tag)root_index;
    switch (value.tag) {
    case SL_ReportConfig_r16_Sl_ReportType_r16_Tag_sl_Periodical_r16: {
        if (Decode_SL_PeriodicalReportConfig_r16(dec, value.u.sl_Periodical_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SL_ReportConfig_r16_Sl_ReportType_r16_Tag_sl_EventTriggered_r16: {
        if (Decode_SL_EventTriggerConfig_r16(dec, value.u.sl_EventTriggered_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ReportConfig_r16_Sl_ReportType_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ReportConfig_r16_Sl_ReportType_r16(SL_ReportConfig_r16_Sl_ReportType_r16& value)
{
    switch (value.tag) {
    case SL_ReportConfig_r16_Sl_ReportType_r16_Tag_sl_Periodical_r16:
        Free_SL_PeriodicalReportConfig_r16(value.u.sl_Periodical_r16);
        break;
    case SL_ReportConfig_r16_Sl_ReportType_r16_Tag_sl_EventTriggered_r16:
        Free_SL_EventTriggerConfig_r16(value.u.sl_EventTriggered_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ReportConfig_r16：ASN.1 SL-ReportConfig-r16；源文件第 22935 行；SEQUENCE。
// Encode_SL_ReportConfig_r16 只读不分配；Decode_SL_ReportConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_ReportConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ReportConfig_r16(Encoder& enc, const SL_ReportConfig_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_SL_ReportConfig_r16_Sl_ReportType_r16(enc, value.sl_ReportType_r16);
    return enc.Error();
}

ErrorCode Decode_SL_ReportConfig_r16(Decoder& dec, SL_ReportConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_SL_ReportConfig_r16_Sl_ReportType_r16(dec, value.sl_ReportType_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ReportConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ReportConfig_r16(SL_ReportConfig_r16& value)
{
    Free_SL_ReportConfig_r16_Sl_ReportType_r16(value.sl_ReportType_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ReportConfigInfo_r16：ASN.1 SL-ReportConfigInfo-r16；源文件第 22927 行；SEQUENCE。
// Encode_SL_ReportConfigInfo_r16 只读不分配；Decode_SL_ReportConfigInfo_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_ReportConfigInfo_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ReportConfigInfo_r16(Encoder& enc, const SL_ReportConfigInfo_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_ReportConfigId_r16), 1, 64);
    Encode_SL_ReportConfig_r16(enc, value.sl_ReportConfig_r16);
    return enc.Error();
}

ErrorCode Decode_SL_ReportConfigInfo_r16(Decoder& dec, SL_ReportConfigInfo_r16& value)
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
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.sl_ReportConfigId_r16 = (SL_ReportConfigId_r16)tmp_value;
    }
    {
        if (Decode_SL_ReportConfig_r16(dec, value.sl_ReportConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ReportConfigInfo_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ReportConfigInfo_r16(SL_ReportConfigInfo_r16& value)
{
    Free_SL_ReportConfig_r16(value.sl_ReportConfig_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_CPE_StartingPositionsPSCCH_PSSCH_r18：ASN.1 SL-CPE-StartingPositionsPSCCH-PSSCH-r18；源文件第 23060 行；SEQUENCE。
// Encode_SL_CPE_StartingPositionsPSCCH_PSSCH_r18 只读不分配；Decode_SL_CPE_StartingPositionsPSCCH_PSSCH_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_CPE_StartingPositionsPSCCH_PSSCH_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_CPE_StartingPositionsPSCCH_PSSCH_r18(Encoder& enc, const SL_CPE_StartingPositionsPSCCH_PSSCH_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_Priority_r18), 1, 8);
enc.WriteConstrainedLength(value.sl_CPE_StartingPositions_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_CPE_StartingPositions_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_CPE_StartingPositions_r18_items[i]), 1, 9);
}
    return enc.Error();
}

ErrorCode Decode_SL_CPE_StartingPositionsPSCCH_PSSCH_r18(Decoder& dec, SL_CPE_StartingPositionsPSCCH_PSSCH_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.sl_Priority_r18 = (int64_t)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_CPE_StartingPositions_r18_count)) { goto fail; }
if (value.sl_CPE_StartingPositions_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_CPE_StartingPositions_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_CPE_StartingPositions_r18_count > 0u) {
    value.sl_CPE_StartingPositions_r18_items = (int64_t*)std::malloc((std::size_t)value.sl_CPE_StartingPositions_r18_count * sizeof(int64_t));
    if (value.sl_CPE_StartingPositions_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_CPE_StartingPositions_r18_items, 0, (std::size_t)value.sl_CPE_StartingPositions_r18_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.sl_CPE_StartingPositions_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 9, tmp_value)) { goto fail; }
    value.sl_CPE_StartingPositions_r18_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_CPE_StartingPositionsPSCCH_PSSCH_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_CPE_StartingPositionsPSCCH_PSSCH_r18(SL_CPE_StartingPositionsPSCCH_PSSCH_r18& value)
{
    if (value.sl_CPE_StartingPositions_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.sl_CPE_StartingPositions_r18_count; ++i) {
        }
        std::free(value.sl_CPE_StartingPositions_r18_items);
        value.sl_CPE_StartingPositions_r18_items = nullptr;
    }
    value.sl_CPE_StartingPositions_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ZoneConfig_r16：ASN.1 SL-ZoneConfig-r16；源文件第 23418 行；SEQUENCE。
// Encode_SL_ZoneConfig_r16 只读不分配；Decode_SL_ZoneConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_ZoneConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ZoneConfig_r16(Encoder& enc, const SL_ZoneConfig_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_ZoneLength_r16), 0, 7);
    return enc.Error();
}

ErrorCode Decode_SL_ZoneConfig_r16(Decoder& dec, SL_ZoneConfig_r16& value)
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
        value.sl_ZoneLength_r16 = (SL_ZoneConfig_r16_Sl_ZoneLength_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ZoneConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ZoneConfig_r16(SL_ZoneConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ZoneConfigMCR_r16：ASN.1 SL-ZoneConfigMCR-r16；源文件第 23065 行；SEQUENCE。
// Encode_SL_ZoneConfigMCR_r16 只读不分配；Decode_SL_ZoneConfigMCR_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_ZoneConfigMCR_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ZoneConfigMCR_r16(Encoder& enc, const SL_ZoneConfigMCR_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_TransRange_r16);
    enc.WriteBit(value.has_sl_ZoneConfig_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_ZoneConfigMCR_Index_r16), 0, 15);
    if (value.has_sl_TransRange_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_TransRange_r16), 0, 31);
    }
    if (value.has_sl_ZoneConfig_r16) {
        Encode_SL_ZoneConfig_r16(enc, value.sl_ZoneConfig_r16);
    }
    return enc.Error();
}

ErrorCode Decode_SL_ZoneConfigMCR_r16(Decoder& dec, SL_ZoneConfigMCR_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.sl_ZoneConfigMCR_Index_r16 = (int64_t)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.sl_TransRange_r16 = (SL_ZoneConfigMCR_r16_Sl_TransRange_r16)tmp_value;
    }
    if (present_1) {
        if (Decode_SL_ZoneConfig_r16(dec, value.sl_ZoneConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ZoneConfigMCR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ZoneConfigMCR_r16(SL_ZoneConfigMCR_r16& value)
{
    if (value.has_sl_TransRange_r16) {
    }
    if (value.has_sl_ZoneConfig_r16) {
        Free_SL_ZoneConfig_r16(value.sl_ZoneConfig_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ResourceReservePeriod_r16：ASN.1 SL-ResourceReservePeriod-r16；源文件第 23131 行；CHOICE。
// Encode_SL_ResourceReservePeriod_r16 只读不分配；Decode_SL_ResourceReservePeriod_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_ResourceReservePeriod_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ResourceReservePeriod_r16(Encoder& enc, const SL_ResourceReservePeriod_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SL_ResourceReservePeriod_r16_Tag_sl_ResourceReservePeriod1_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl_ResourceReservePeriod1_r16), 0, 10);
        break;
    case SL_ResourceReservePeriod_r16_Tag_sl_ResourceReservePeriod2_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl_ResourceReservePeriod2_r16), 1, 99);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SL_ResourceReservePeriod_r16(Decoder& dec, SL_ResourceReservePeriod_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SL_ResourceReservePeriod_r16_Tag)root_index;
    switch (value.tag) {
    case SL_ResourceReservePeriod_r16_Tag_sl_ResourceReservePeriod1_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.u.sl_ResourceReservePeriod1_r16 = (SL_ResourceReservePeriod_r16_Sl_ResourceReservePeriod1_r16)tmp_value;
        break;
    }
    case SL_ResourceReservePeriod_r16_Tag_sl_ResourceReservePeriod2_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 99, tmp_value)) { goto fail; }
        value.u.sl_ResourceReservePeriod2_r16 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ResourceReservePeriod_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ResourceReservePeriod_r16(SL_ResourceReservePeriod_r16& value)
{
    switch (value.tag) {
    case SL_ResourceReservePeriod_r16_Tag_sl_ResourceReservePeriod1_r16:
        break;
    case SL_ResourceReservePeriod_r16_Tag_sl_ResourceReservePeriod2_r16:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_SelectionWindowConfig_r16：ASN.1 SL-SelectionWindowConfig-r16；源文件第 23138 行；SEQUENCE。
// Encode_SL_SelectionWindowConfig_r16 只读不分配；Decode_SL_SelectionWindowConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_SelectionWindowConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_SelectionWindowConfig_r16(Encoder& enc, const SL_SelectionWindowConfig_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_Priority_r16), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_SelectionWindow_r16), 0, 3);
    return enc.Error();
}

ErrorCode Decode_SL_SelectionWindowConfig_r16(Decoder& dec, SL_SelectionWindowConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.sl_Priority_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.sl_SelectionWindow_r16 = (SL_SelectionWindowConfig_r16_Sl_SelectionWindow_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_SelectionWindowConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_SelectionWindowConfig_r16(SL_SelectionWindowConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_TxPercentageConfig_r16：ASN.1 SL-TxPercentageConfig-r16；源文件第 23145 行；SEQUENCE。
// Encode_SL_TxPercentageConfig_r16 只读不分配；Decode_SL_TxPercentageConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_TxPercentageConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_TxPercentageConfig_r16(Encoder& enc, const SL_TxPercentageConfig_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_Priority_r16), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_TxPercentage_r16), 0, 2);
    return enc.Error();
}

ErrorCode Decode_SL_TxPercentageConfig_r16(Decoder& dec, SL_TxPercentageConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.sl_Priority_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.sl_TxPercentage_r16 = (SL_TxPercentageConfig_r16_Sl_TxPercentage_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_TxPercentageConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_TxPercentageConfig_r16(SL_TxPercentageConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_MinMaxMCS_Config_r16：ASN.1 SL-MinMaxMCS-Config-r16；源文件第 23152 行；SEQUENCE。
// Encode_SL_MinMaxMCS_Config_r16 只读不分配；Decode_SL_MinMaxMCS_Config_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_MinMaxMCS_Config_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_MinMaxMCS_Config_r16(Encoder& enc, const SL_MinMaxMCS_Config_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_MCS_Table_r16), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_MinMCS_PSSCH_r16), 0, 27);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_MaxMCS_PSSCH_r16), 0, 31);
    return enc.Error();
}

ErrorCode Decode_SL_MinMaxMCS_Config_r16(Decoder& dec, SL_MinMaxMCS_Config_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.sl_MCS_Table_r16 = (SL_MinMaxMCS_Config_r16_Sl_MCS_Table_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 27, tmp_value)) { goto fail; }
        value.sl_MinMCS_PSSCH_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.sl_MaxMCS_PSSCH_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_MinMaxMCS_Config_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_MinMaxMCS_Config_r16(SL_MinMaxMCS_Config_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18：ASN.1 sl-PRS-CombSizeN-AndReOffset-r18；源文件第 23180 行；CHOICE。
// Encode_SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18 只读不分配；Decode_SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18(Encoder& enc, const SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18& value)
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
    case SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18_Tag_n2_r18:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n2_r18), 0, 1);
        break;
    case SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18_Tag_n4_r18:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n4_r18), 0, 3);
        break;
    case SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18_Tag_n6_r18:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n6_r18), 0, 5);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18(Decoder& dec, SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18& value)
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
        value.tag = (SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18_Tag)(3 + extension_index);
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
    value.tag = (SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18_Tag)root_index;
    switch (value.tag) {
    case SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18_Tag_n2_r18: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.u.n2_r18 = (int64_t)tmp_value;
        break;
    }
    case SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18_Tag_n4_r18: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.n4_r18 = (int64_t)tmp_value;
        break;
    }
    case SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18_Tag_n6_r18: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.u.n6_r18 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18(SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18& value)
{
    switch (value.tag) {
    case SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18_Tag_n2_r18:
        break;
    case SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18_Tag_n4_r18:
        break;
    case SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18_Tag_n6_r18:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PRS_ResourceSharedSL_PRS_RP_r18：ASN.1 SL-PRS-ResourceSharedSL-PRS-RP-r18；源文件第 23176 行；SEQUENCE。
// Encode_SL_PRS_ResourceSharedSL_PRS_RP_r18 只读不分配；Decode_SL_PRS_ResourceSharedSL_PRS_RP_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_PRS_ResourceSharedSL_PRS_RP_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PRS_ResourceSharedSL_PRS_RP_r18(Encoder& enc, const SL_PRS_ResourceSharedSL_PRS_RP_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_PRS_CombSizeN_AndReOffset_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_PRS_ResourceID_r18), 0, 16);
    enc.WriteConstrainedInteger((std::int64_t)(value.mNumberOfSymbols_r18), 1, 9);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_PRS_starting_symbol_r18), 4, 12);
    if (value.has_sl_PRS_CombSizeN_AndReOffset_r18) {
        Encode_SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18(enc, value.sl_PRS_CombSizeN_AndReOffset_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PRS_ResourceSharedSL_PRS_RP_r18(Decoder& dec, SL_PRS_ResourceSharedSL_PRS_RP_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 16, tmp_value)) { goto fail; }
        value.sl_PRS_ResourceID_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 9, tmp_value)) { goto fail; }
        value.mNumberOfSymbols_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(4, 12, tmp_value)) { goto fail; }
        value.sl_PRS_starting_symbol_r18 = (int64_t)tmp_value;
    }
    if (present_0) {
        if (Decode_SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18(dec, value.sl_PRS_CombSizeN_AndReOffset_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PRS_ResourceSharedSL_PRS_RP_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PRS_ResourceSharedSL_PRS_RP_r18(SL_PRS_ResourceSharedSL_PRS_RP_r18& value)
{
    if (value.has_sl_PRS_CombSizeN_AndReOffset_r18) {
        Free_SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18(value.sl_PRS_CombSizeN_AndReOffset_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_RLC_BearerConfig_r16_ExtGroup1：ASN.1 SL_RLC_BearerConfig_r16_ExtGroup1；源文件第 23197 行；扩展添加组 [[ ]]。
// Encode_SL_RLC_BearerConfig_r16_ExtGroup1 只读不分配；Decode_SL_RLC_BearerConfig_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SL_RLC_BearerConfig_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_RLC_BearerConfig_r16_ExtGroup1(Encoder& enc, const SL_RLC_BearerConfig_r16_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_RLC_BearerConfigIndex_v1800);
    if (value.has_sl_RLC_BearerConfigIndex_v1800) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_RLC_BearerConfigIndex_v1800), 513, 1024);
    }
    return enc.Error();
}

ErrorCode Decode_SL_RLC_BearerConfig_r16_ExtGroup1(Decoder& dec, SL_RLC_BearerConfig_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(513, 1024, tmp_value)) { goto fail; }
        value.sl_RLC_BearerConfigIndex_v1800 = (SL_RLC_BearerConfigIndex_v1800)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_RLC_BearerConfig_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_RLC_BearerConfig_r16_ExtGroup1(SL_RLC_BearerConfig_r16_ExtGroup1& value)
{
    if (value.has_sl_RLC_BearerConfigIndex_v1800) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_RLC_Config_r16_Sl_AM_RLC_r16：ASN.1 sl-AM-RLC-r16；源文件第 23228 行；SEQUENCE。
// Encode_SL_RLC_Config_r16_Sl_AM_RLC_r16 只读不分配；Decode_SL_RLC_Config_r16_Sl_AM_RLC_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_RLC_Config_r16_Sl_AM_RLC_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_RLC_Config_r16_Sl_AM_RLC_r16(Encoder& enc, const SL_RLC_Config_r16_Sl_AM_RLC_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_SN_FieldLengthAM_r16);
    if (value.has_sl_SN_FieldLengthAM_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_SN_FieldLengthAM_r16), 0, 1);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_T_PollRetransmit_r16), 0, 63);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_PollPDU_r16), 0, 31);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_PollByte_r16), 0, 63);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_MaxRetxThreshold_r16), 0, 7);
    return enc.Error();
}

ErrorCode Decode_SL_RLC_Config_r16_Sl_AM_RLC_r16(Decoder& dec, SL_RLC_Config_r16_Sl_AM_RLC_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_SN_FieldLengthAM_r16 = (SN_FieldLengthAM)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.sl_T_PollRetransmit_r16 = (T_PollRetransmit)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.sl_PollPDU_r16 = (PollPDU)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.sl_PollByte_r16 = (PollByte)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sl_MaxRetxThreshold_r16 = (SL_RLC_Config_r16_Sl_AM_RLC_r16_Sl_MaxRetxThreshold_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_RLC_Config_r16_Sl_AM_RLC_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_RLC_Config_r16_Sl_AM_RLC_r16(SL_RLC_Config_r16_Sl_AM_RLC_r16& value)
{
    if (value.has_sl_SN_FieldLengthAM_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_RLC_Config_r16_Sl_UM_RLC_r16：ASN.1 sl-UM-RLC-r16；源文件第 23236 行；SEQUENCE。
// Encode_SL_RLC_Config_r16_Sl_UM_RLC_r16 只读不分配；Decode_SL_RLC_Config_r16_Sl_UM_RLC_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_RLC_Config_r16_Sl_UM_RLC_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_RLC_Config_r16_Sl_UM_RLC_r16(Encoder& enc, const SL_RLC_Config_r16_Sl_UM_RLC_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_SN_FieldLengthUM_r16);
    if (value.has_sl_SN_FieldLengthUM_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_SN_FieldLengthUM_r16), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_SL_RLC_Config_r16_Sl_UM_RLC_r16(Decoder& dec, SL_RLC_Config_r16_Sl_UM_RLC_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_SN_FieldLengthUM_r16 = (SN_FieldLengthUM)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_RLC_Config_r16_Sl_UM_RLC_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_RLC_Config_r16_Sl_UM_RLC_r16(SL_RLC_Config_r16_Sl_UM_RLC_r16& value)
{
    if (value.has_sl_SN_FieldLengthUM_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_RLC_Config_r16：ASN.1 SL-RLC-Config-r16；源文件第 23227 行；CHOICE。
// Encode_SL_RLC_Config_r16 只读不分配；Decode_SL_RLC_Config_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_RLC_Config_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_RLC_Config_r16(Encoder& enc, const SL_RLC_Config_r16& value)
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
    case SL_RLC_Config_r16_Tag_sl_AM_RLC_r16:
        Encode_SL_RLC_Config_r16_Sl_AM_RLC_r16(enc, value.u.sl_AM_RLC_r16);
        break;
    case SL_RLC_Config_r16_Tag_sl_UM_RLC_r16:
        Encode_SL_RLC_Config_r16_Sl_UM_RLC_r16(enc, value.u.sl_UM_RLC_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SL_RLC_Config_r16(Decoder& dec, SL_RLC_Config_r16& value)
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
        value.tag = (SL_RLC_Config_r16_Tag)(2 + extension_index);
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
    value.tag = (SL_RLC_Config_r16_Tag)root_index;
    switch (value.tag) {
    case SL_RLC_Config_r16_Tag_sl_AM_RLC_r16: {
        if (Decode_SL_RLC_Config_r16_Sl_AM_RLC_r16(dec, value.u.sl_AM_RLC_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SL_RLC_Config_r16_Tag_sl_UM_RLC_r16: {
        if (Decode_SL_RLC_Config_r16_Sl_UM_RLC_r16(dec, value.u.sl_UM_RLC_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_RLC_Config_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_RLC_Config_r16(SL_RLC_Config_r16& value)
{
    switch (value.tag) {
    case SL_RLC_Config_r16_Tag_sl_AM_RLC_r16:
        Free_SL_RLC_Config_r16_Sl_AM_RLC_r16(value.u.sl_AM_RLC_r16);
        break;
    case SL_RLC_Config_r16_Tag_sl_UM_RLC_r16:
        Free_SL_RLC_Config_r16_Sl_UM_RLC_r16(value.u.sl_UM_RLC_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_RLC_BearerConfig_r16：ASN.1 SL-RLC-BearerConfig-r16；源文件第 23191 行；SEQUENCE。
// Encode_SL_RLC_BearerConfig_r16 只读不分配；Decode_SL_RLC_BearerConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_RLC_BearerConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_RLC_BearerConfig_r16(Encoder& enc, const SL_RLC_BearerConfig_r16& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_ServedRadioBearer_r16);
    enc.WriteBit(value.has_sl_RLC_Config_r16);
    enc.WriteBit(value.has_sl_MAC_LogicalChannelConfig_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_RLC_BearerConfigIndex_r16), 1, 512);
    if (value.has_sl_ServedRadioBearer_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_ServedRadioBearer_r16), 1, 512);
    }
    if (value.has_sl_RLC_Config_r16) {
        Encode_SL_RLC_Config_r16(enc, value.sl_RLC_Config_r16);
    }
    if (value.has_sl_MAC_LogicalChannelConfig_r16) {
        Encode_SL_LogicalChannelConfig_r16(enc, value.sl_MAC_LogicalChannelConfig_r16);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SL_RLC_BearerConfig_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SL_RLC_BearerConfig_r16(Decoder& dec, SL_RLC_BearerConfig_r16& value)
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
        if (!dec.ReadConstrainedInteger(1, 512, tmp_value)) { goto fail; }
        value.sl_RLC_BearerConfigIndex_r16 = (SL_RLC_BearerConfigIndex_r16)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 512, tmp_value)) { goto fail; }
        value.sl_ServedRadioBearer_r16 = (SLRB_Uu_ConfigIndex_r16)tmp_value;
    }
    if (present_1) {
        if (Decode_SL_RLC_Config_r16(dec, value.sl_RLC_Config_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SL_LogicalChannelConfig_r16(dec, value.sl_MAC_LogicalChannelConfig_r16) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_SL_RLC_BearerConfig_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_SL_RLC_BearerConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_RLC_BearerConfig_r16(SL_RLC_BearerConfig_r16& value)
{
    if (value.has_sl_ServedRadioBearer_r16) {
    }
    if (value.has_sl_RLC_Config_r16) {
        Free_SL_RLC_Config_r16(value.sl_RLC_Config_r16);
    }
    if (value.has_sl_MAC_LogicalChannelConfig_r16) {
        Free_SL_LogicalChannelConfig_r16(value.sl_MAC_LogicalChannelConfig_r16);
    }
    if (value.has_extGroup1) {
        Free_SL_RLC_BearerConfig_r16_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_RLC_ChannelConfig_r17：ASN.1 SL-RLC-ChannelConfig-r17；源文件第 23212 行；SEQUENCE。
// Encode_SL_RLC_ChannelConfig_r17 只读不分配；Decode_SL_RLC_ChannelConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_SL_RLC_ChannelConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_RLC_ChannelConfig_r17(Encoder& enc, const SL_RLC_ChannelConfig_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_RLC_Config_r17);
    enc.WriteBit(value.has_sl_MAC_LogicalChannelConfig_r17);
    enc.WriteBit(value.has_sl_PacketDelayBudget_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_RLC_ChannelID_r17), 1, 512);
    if (value.has_sl_RLC_Config_r17) {
        Encode_SL_RLC_Config_r16(enc, value.sl_RLC_Config_r17);
    }
    if (value.has_sl_MAC_LogicalChannelConfig_r17) {
        Encode_SL_LogicalChannelConfig_r16(enc, value.sl_MAC_LogicalChannelConfig_r17);
    }
    if (value.has_sl_PacketDelayBudget_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PacketDelayBudget_r17), 0, 1023);
    }
    return enc.Error();
}

ErrorCode Decode_SL_RLC_ChannelConfig_r17(Decoder& dec, SL_RLC_ChannelConfig_r17& value)
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
        if (!dec.ReadConstrainedInteger(1, 512, tmp_value)) { goto fail; }
        value.sl_RLC_ChannelID_r17 = (SL_RLC_ChannelID_r17)tmp_value;
    }
    if (present_0) {
        if (Decode_SL_RLC_Config_r16(dec, value.sl_RLC_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SL_LogicalChannelConfig_r16(dec, value.sl_MAC_LogicalChannelConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.sl_PacketDelayBudget_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_RLC_ChannelConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_RLC_ChannelConfig_r17(SL_RLC_ChannelConfig_r17& value)
{
    if (value.has_sl_RLC_Config_r17) {
        Free_SL_RLC_Config_r16(value.sl_RLC_Config_r17);
    }
    if (value.has_sl_MAC_LogicalChannelConfig_r17) {
        Free_SL_LogicalChannelConfig_r16(value.sl_MAC_LogicalChannelConfig_r17);
    }
    if (value.has_sl_PacketDelayBudget_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ServingCellInfo_r17：ASN.1 SL-ServingCellInfo-r17；源文件第 23302 行；SEQUENCE。
// Encode_SL_ServingCellInfo_r17 只读不分配；Decode_SL_ServingCellInfo_r17 可能 malloc（失败时内部已释放并清零）；Free_SL_ServingCellInfo_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ServingCellInfo_r17(Encoder& enc, const SL_ServingCellInfo_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_PhysCellId_r17), 0, 1007);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_CarrierFreqNR_r17), 0, 3279165);
    return enc.Error();
}

ErrorCode Decode_SL_ServingCellInfo_r17(Decoder& dec, SL_ServingCellInfo_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
        value.sl_PhysCellId_r17 = (PhysCellId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.sl_CarrierFreqNR_r17 = (ARFCN_ValueNR)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ServingCellInfo_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ServingCellInfo_r17(SL_ServingCellInfo_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_MappingToAddMod_r17：ASN.1 SL-MappingToAddMod-r17；源文件第 23322 行；SEQUENCE。
// Encode_SL_MappingToAddMod_r17 只读不分配；Decode_SL_MappingToAddMod_r17 可能 malloc（失败时内部已释放并清零）；Free_SL_MappingToAddMod_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_MappingToAddMod_r17(Encoder& enc, const SL_MappingToAddMod_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_EgressRLC_ChannelUu_r17);
    enc.WriteBit(value.has_sl_EgressRLC_ChannelPC5_r17);
    Encode_SL_RemoteUE_RB_Identity_r17(enc, value.sl_RemoteUE_RB_Identity_r17);
    if (value.has_sl_EgressRLC_ChannelUu_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_EgressRLC_ChannelUu_r17), 1, 32);
    }
    if (value.has_sl_EgressRLC_ChannelPC5_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_EgressRLC_ChannelPC5_r17), 1, 512);
    }
    return enc.Error();
}

ErrorCode Decode_SL_MappingToAddMod_r17(Decoder& dec, SL_MappingToAddMod_r17& value)
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
        if (Decode_SL_RemoteUE_RB_Identity_r17(dec, value.sl_RemoteUE_RB_Identity_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.sl_EgressRLC_ChannelUu_r17 = (Uu_RelayRLC_ChannelID_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 512, tmp_value)) { goto fail; }
        value.sl_EgressRLC_ChannelPC5_r17 = (SL_RLC_ChannelID_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_MappingToAddMod_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_MappingToAddMod_r17(SL_MappingToAddMod_r17& value)
{
    Free_SL_RemoteUE_RB_Identity_r17(value.sl_RemoteUE_RB_Identity_r17);
    if (value.has_sl_EgressRLC_ChannelUu_r17) {
    }
    if (value.has_sl_EgressRLC_ChannelPC5_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_MappingConfig_U2U_r18：ASN.1 SL-MappingConfig-U2U-r18；源文件第 23343 行；SEQUENCE。
// Encode_SL_MappingConfig_U2U_r18 只读不分配；Decode_SL_MappingConfig_U2U_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_MappingConfig_U2U_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_MappingConfig_U2U_r18(Encoder& enc, const SL_MappingConfig_U2U_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_RemoteUE_SLRB_Identity_r18), 1, 512);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_EgressRLC_ChannelPC5_r18), 1, 512);
    return enc.Error();
}

ErrorCode Decode_SL_MappingConfig_U2U_r18(Decoder& dec, SL_MappingConfig_U2U_r18& value)
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
        if (!dec.ReadConstrainedInteger(1, 512, tmp_value)) { goto fail; }
        value.sl_RemoteUE_SLRB_Identity_r18 = (SLRB_Uu_ConfigIndex_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 512, tmp_value)) { goto fail; }
        value.sl_EgressRLC_ChannelPC5_r18 = (SL_RLC_ChannelID_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_MappingConfig_U2U_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_MappingConfig_U2U_r18(SL_MappingConfig_U2U_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_SSB_TimeAllocation_r16：ASN.1 SL-SSB-TimeAllocation-r16；源文件第 23373 行；SEQUENCE。
// Encode_SL_SSB_TimeAllocation_r16 只读不分配；Decode_SL_SSB_TimeAllocation_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_SSB_TimeAllocation_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_SSB_TimeAllocation_r16(Encoder& enc, const SL_SSB_TimeAllocation_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_NumSSB_WithinPeriod_r16);
    enc.WriteBit(value.has_sl_TimeOffsetSSB_r16);
    enc.WriteBit(value.has_sl_TimeInterval_r16);
    if (value.has_sl_NumSSB_WithinPeriod_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_NumSSB_WithinPeriod_r16), 0, 6);
    }
    if (value.has_sl_TimeOffsetSSB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_TimeOffsetSSB_r16), 0, 1279);
    }
    if (value.has_sl_TimeInterval_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_TimeInterval_r16), 0, 639);
    }
    return enc.Error();
}

ErrorCode Decode_SL_SSB_TimeAllocation_r16(Decoder& dec, SL_SSB_TimeAllocation_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.sl_NumSSB_WithinPeriod_r16 = (SL_SSB_TimeAllocation_r16_Sl_NumSSB_WithinPeriod_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1279, tmp_value)) { goto fail; }
        value.sl_TimeOffsetSSB_r16 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.sl_TimeInterval_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_SSB_TimeAllocation_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_SSB_TimeAllocation_r16(SL_SSB_TimeAllocation_r16& value)
{
    if (value.has_sl_NumSSB_WithinPeriod_r16) {
    }
    if (value.has_sl_TimeOffsetSSB_r16) {
    }
    if (value.has_sl_TimeInterval_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_SyncConfig_r16_TxParameters_r16：ASN.1 txParameters-r16；源文件第 23362 行；SEQUENCE。
// Encode_SL_SyncConfig_r16_TxParameters_r16 只读不分配；Decode_SL_SyncConfig_r16_TxParameters_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_SyncConfig_r16_TxParameters_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_SyncConfig_r16_TxParameters_r16(Encoder& enc, const SL_SyncConfig_r16_TxParameters_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_syncTxThreshIC_r16);
    enc.WriteBit(value.has_syncTxThreshOoC_r16);
    enc.WriteBit(value.has_syncInfoReserved_r16);
    if (value.has_syncTxThreshIC_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.syncTxThreshIC_r16), 0, 13);
    }
    if (value.has_syncTxThreshOoC_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.syncTxThreshOoC_r16), 0, 13);
    }
    if (value.has_syncInfoReserved_r16) {
        enc.WriteFixedBitString(value.syncInfoReserved_r16.bytes, value.syncInfoReserved_r16.bitLength, 2, 2);
    }
    return enc.Error();
}

ErrorCode Decode_SL_SyncConfig_r16_TxParameters_r16(Decoder& dec, SL_SyncConfig_r16_TxParameters_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.syncTxThreshIC_r16 = (SL_RSRP_Range_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.syncTxThreshOoC_r16 = (SL_RSRP_Range_r16)tmp_value;
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 2)) { goto fail; }
        string_length = 2;
        value.syncInfoReserved_r16.bytes = string_bytes;
        value.syncInfoReserved_r16.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_SyncConfig_r16_TxParameters_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_SyncConfig_r16_TxParameters_r16(SL_SyncConfig_r16_TxParameters_r16& value)
{
    if (value.has_syncTxThreshIC_r16) {
    }
    if (value.has_syncTxThreshOoC_r16) {
    }
    if (value.has_syncInfoReserved_r16) {
        std::free(value.syncInfoReserved_r16.bytes);
        value.syncInfoReserved_r16.bytes = nullptr;
        value.syncInfoReserved_r16.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_SyncConfig_r16：ASN.1 SL-SyncConfig-r16；源文件第 23354 行；SEQUENCE。
// Encode_SL_SyncConfig_r16 只读不分配；Decode_SL_SyncConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_SyncConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_SyncConfig_r16(Encoder& enc, const SL_SyncConfig_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_SyncRefMinHyst_r16);
    enc.WriteBit(value.has_sl_SyncRefDiffHyst_r16);
    enc.WriteBit(value.has_sl_FilterCoefficient_r16);
    enc.WriteBit(value.has_sl_SSB_TimeAllocation1_r16);
    enc.WriteBit(value.has_sl_SSB_TimeAllocation2_r16);
    enc.WriteBit(value.has_sl_SSB_TimeAllocation3_r16);
    enc.WriteBit(value.has_sl_SSID_r16);
    enc.WriteBit(value.has_gnss_Sync_r16);
    if (value.has_sl_SyncRefMinHyst_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_SyncRefMinHyst_r16), 0, 4);
    }
    if (value.has_sl_SyncRefDiffHyst_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_SyncRefDiffHyst_r16), 0, 5);
    }
    if (value.has_sl_FilterCoefficient_r16) {
        {
            const std::int64_t enum_value = (std::int64_t)(value.sl_FilterCoefficient_r16);
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
    if (value.has_sl_SSB_TimeAllocation1_r16) {
        Encode_SL_SSB_TimeAllocation_r16(enc, value.sl_SSB_TimeAllocation1_r16);
    }
    if (value.has_sl_SSB_TimeAllocation2_r16) {
        Encode_SL_SSB_TimeAllocation_r16(enc, value.sl_SSB_TimeAllocation2_r16);
    }
    if (value.has_sl_SSB_TimeAllocation3_r16) {
        Encode_SL_SSB_TimeAllocation_r16(enc, value.sl_SSB_TimeAllocation3_r16);
    }
    if (value.has_sl_SSID_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_SSID_r16), 0, 671);
    }
    Encode_SL_SyncConfig_r16_TxParameters_r16(enc, value.txParameters_r16);
    if (value.has_gnss_Sync_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.gnss_Sync_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SL_SyncConfig_r16(Decoder& dec, SL_SyncConfig_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.sl_SyncRefMinHyst_r16 = (SL_SyncConfig_r16_Sl_SyncRefMinHyst_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.sl_SyncRefDiffHyst_r16 = (SL_SyncConfig_r16_Sl_SyncRefDiffHyst_r16)tmp_value;
    }
    if (present_2) {
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
        value.sl_FilterCoefficient_r16 = (FilterCoefficient)enum_value;
    }
    if (present_3) {
        if (Decode_SL_SSB_TimeAllocation_r16(dec, value.sl_SSB_TimeAllocation1_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SL_SSB_TimeAllocation_r16(dec, value.sl_SSB_TimeAllocation2_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_SL_SSB_TimeAllocation_r16(dec, value.sl_SSB_TimeAllocation3_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 671, tmp_value)) { goto fail; }
        value.sl_SSID_r16 = (int64_t)tmp_value;
    }
    {
        if (Decode_SL_SyncConfig_r16_TxParameters_r16(dec, value.txParameters_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        value.gnss_Sync_r16 = (SL_SyncConfig_r16_Gnss_Sync_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_SyncConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_SyncConfig_r16(SL_SyncConfig_r16& value)
{
    if (value.has_sl_SyncRefMinHyst_r16) {
    }
    if (value.has_sl_SyncRefDiffHyst_r16) {
    }
    if (value.has_sl_FilterCoefficient_r16) {
    }
    if (value.has_sl_SSB_TimeAllocation1_r16) {
        Free_SL_SSB_TimeAllocation_r16(value.sl_SSB_TimeAllocation1_r16);
    }
    if (value.has_sl_SSB_TimeAllocation2_r16) {
        Free_SL_SSB_TimeAllocation_r16(value.sl_SSB_TimeAllocation2_r16);
    }
    if (value.has_sl_SSB_TimeAllocation3_r16) {
        Free_SL_SSB_TimeAllocation_r16(value.sl_SSB_TimeAllocation3_r16);
    }
    if (value.has_sl_SSID_r16) {
    }
    Free_SL_SyncConfig_r16_TxParameters_r16(value.txParameters_r16);
    if (value.has_gnss_Sync_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MBS_NeighbourCell_r17：ASN.1 MBS-NeighbourCell-r17；源文件第 23500 行；SEQUENCE。
// Encode_MBS_NeighbourCell_r17 只读不分配；Decode_MBS_NeighbourCell_r17 可能 malloc（失败时内部已释放并清零）；Free_MBS_NeighbourCell_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MBS_NeighbourCell_r17(Encoder& enc, const MBS_NeighbourCell_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_carrierFreq_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.physCellId_r17), 0, 1007);
    if (value.has_carrierFreq_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.carrierFreq_r17), 0, 3279165);
    }
    return enc.Error();
}

ErrorCode Decode_MBS_NeighbourCell_r17(Decoder& dec, MBS_NeighbourCell_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
        value.physCellId_r17 = (PhysCellId)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.carrierFreq_r17 = (ARFCN_ValueNR)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MBS_NeighbourCell_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBS_NeighbourCell_r17(MBS_NeighbourCell_r17& value)
{
    if (value.has_carrierFreq_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FreqInfoMBS_r18：ASN.1 FreqInfoMBS-r18；源文件第 23519 行；SEQUENCE。
// Encode_FreqInfoMBS_r18 只读不分配；Decode_FreqInfoMBS_r18 可能 malloc（失败时内部已释放并清零）；Free_FreqInfoMBS_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FreqInfoMBS_r18(Encoder& enc, const FreqInfoMBS_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierFreqMBS_r18), 0, 3279165);
    enc.WriteConstrainedInteger((std::int64_t)(value.freqBandIndicatorMBS_r18), 1, 1024);
    return enc.Error();
}

ErrorCode Decode_FreqInfoMBS_r18(Decoder& dec, FreqInfoMBS_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.carrierFreqMBS_r18 = (ARFCN_ValueNR)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 1024, tmp_value)) { goto fail; }
        value.freqBandIndicatorMBS_r18 = (FreqBandIndicatorNR)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FreqInfoMBS_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FreqInfoMBS_r18(FreqInfoMBS_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CFR_LocationAndBW_r18：ASN.1 CFR-LocationAndBW-r18；源文件第 23524 行；SEQUENCE。
// Encode_CFR_LocationAndBW_r18 只读不分配；Decode_CFR_LocationAndBW_r18 可能 malloc（失败时内部已释放并清零）；Free_CFR_LocationAndBW_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CFR_LocationAndBW_r18(Encoder& enc, const CFR_LocationAndBW_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_locationAndBandwidthMBS_r18);
    enc.WriteBit(value.has_absoluteFrequencyPointA_MBS_r18);
    enc.WriteBit(value.has_offsetToCarrierMBS_r18);
    if (value.has_locationAndBandwidthMBS_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.locationAndBandwidthMBS_r18), 0, 37949);
    }
    if (value.has_absoluteFrequencyPointA_MBS_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.absoluteFrequencyPointA_MBS_r18), 0, 3279165);
    }
    if (value.has_offsetToCarrierMBS_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.offsetToCarrierMBS_r18), 0, 2199);
    }
    return enc.Error();
}

ErrorCode Decode_CFR_LocationAndBW_r18(Decoder& dec, CFR_LocationAndBW_r18& value)
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
        if (!dec.ReadConstrainedInteger(0, 37949, tmp_value)) { goto fail; }
        value.locationAndBandwidthMBS_r18 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.absoluteFrequencyPointA_MBS_r18 = (ARFCN_ValueNR)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2199, tmp_value)) { goto fail; }
        value.offsetToCarrierMBS_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CFR_LocationAndBW_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CFR_LocationAndBW_r18(CFR_LocationAndBW_r18& value)
{
    if (value.has_locationAndBandwidthMBS_r18) {
    }
    if (value.has_absoluteFrequencyPointA_MBS_r18) {
    }
    if (value.has_offsetToCarrierMBS_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NonServingInfo_r18_Cfr_InfoMBS_r18：ASN.1 cfr-InfoMBS-r18；源文件第 23512 行；CHOICE。
// Encode_NonServingInfo_r18_Cfr_InfoMBS_r18 只读不分配；Decode_NonServingInfo_r18_Cfr_InfoMBS_r18 可能 malloc（失败时内部已释放并清零）；Free_NonServingInfo_r18_Cfr_InfoMBS_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NonServingInfo_r18_Cfr_InfoMBS_r18(Encoder& enc, const NonServingInfo_r18_Cfr_InfoMBS_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case NonServingInfo_r18_Cfr_InfoMBS_r18_Tag_cfr_Bandwidth_r18:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.cfr_Bandwidth_r18), 1, 275);
        break;
    case NonServingInfo_r18_Cfr_InfoMBS_r18_Tag_cfr_LocationAndBW_r18:
        Encode_CFR_LocationAndBW_r18(enc, value.u.cfr_LocationAndBW_r18);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_NonServingInfo_r18_Cfr_InfoMBS_r18(Decoder& dec, NonServingInfo_r18_Cfr_InfoMBS_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (NonServingInfo_r18_Cfr_InfoMBS_r18_Tag)root_index;
    switch (value.tag) {
    case NonServingInfo_r18_Cfr_InfoMBS_r18_Tag_cfr_Bandwidth_r18: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 275, tmp_value)) { goto fail; }
        value.u.cfr_Bandwidth_r18 = (int64_t)tmp_value;
        break;
    }
    case NonServingInfo_r18_Cfr_InfoMBS_r18_Tag_cfr_LocationAndBW_r18: {
        if (Decode_CFR_LocationAndBW_r18(dec, value.u.cfr_LocationAndBW_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NonServingInfo_r18_Cfr_InfoMBS_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NonServingInfo_r18_Cfr_InfoMBS_r18(NonServingInfo_r18_Cfr_InfoMBS_r18& value)
{
    switch (value.tag) {
    case NonServingInfo_r18_Cfr_InfoMBS_r18_Tag_cfr_Bandwidth_r18:
        break;
    case NonServingInfo_r18_Cfr_InfoMBS_r18_Tag_cfr_LocationAndBW_r18:
        Free_CFR_LocationAndBW_r18(value.u.cfr_LocationAndBW_r18);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NonServingInfo_r18：ASN.1 NonServingInfo-r18；源文件第 23510 行；SEQUENCE。
// Encode_NonServingInfo_r18 只读不分配；Decode_NonServingInfo_r18 可能 malloc（失败时内部已释放并清零）；Free_NonServingInfo_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NonServingInfo_r18(Encoder& enc, const NonServingInfo_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_freqInfoMBS_r18);
    enc.WriteBit(value.has_cfr_InfoMBS_r18);
    enc.WriteBit(value.has_subcarrierSpacing_r18);
    if (value.has_freqInfoMBS_r18) {
        Encode_FreqInfoMBS_r18(enc, value.freqInfoMBS_r18);
    }
    if (value.has_cfr_InfoMBS_r18) {
        Encode_NonServingInfo_r18_Cfr_InfoMBS_r18(enc, value.cfr_InfoMBS_r18);
    }
    if (value.has_subcarrierSpacing_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.subcarrierSpacing_r18), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_NonServingInfo_r18(Decoder& dec, NonServingInfo_r18& value)
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
        if (Decode_FreqInfoMBS_r18(dec, value.freqInfoMBS_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_NonServingInfo_r18_Cfr_InfoMBS_r18(dec, value.cfr_InfoMBS_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.subcarrierSpacing_r18 = (SubcarrierSpacing)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NonServingInfo_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NonServingInfo_r18(NonServingInfo_r18& value)
{
    if (value.has_freqInfoMBS_r18) {
        Free_FreqInfoMBS_r18(value.freqInfoMBS_r18);
    }
    if (value.has_cfr_InfoMBS_r18) {
        Free_NonServingInfo_r18_Cfr_InfoMBS_r18(value.cfr_InfoMBS_r18);
    }
    if (value.has_subcarrierSpacing_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MBS_ServiceInfo_r17：ASN.1 MBS-ServiceInfo-r17；源文件第 23535 行；SEQUENCE。
// Encode_MBS_ServiceInfo_r17 只读不分配；Decode_MBS_ServiceInfo_r17 可能 malloc（失败时内部已释放并清零）；Free_MBS_ServiceInfo_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MBS_ServiceInfo_r17(Encoder& enc, const MBS_ServiceInfo_r17& value)
{
    (void)value;
    Encode_TMGI_r17(enc, value.tmgi_r17);
    return enc.Error();
}

ErrorCode Decode_MBS_ServiceInfo_r17(Decoder& dec, MBS_ServiceInfo_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_TMGI_r17(dec, value.tmgi_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MBS_ServiceInfo_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBS_ServiceInfo_r17(MBS_ServiceInfo_r17& value)
{
    Free_TMGI_r17(value.tmgi_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MRB_ListBroadcast_r17：ASN.1 MRB-ListBroadcast-r17；源文件第 23560 行；SEQUENCE OF。
// Encode_MRB_ListBroadcast_r17 只读不分配；Decode_MRB_ListBroadcast_r17 可能 malloc（失败时内部已释放并清零）；Free_MRB_ListBroadcast_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MRB_ListBroadcast_r17(Encoder& enc, const MRB_ListBroadcast_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MRB_InfoBroadcast_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MRB_ListBroadcast_r17(Decoder& dec, MRB_ListBroadcast_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MRB_InfoBroadcast_r17*)std::malloc((std::size_t)value.count * sizeof(MRB_InfoBroadcast_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MRB_InfoBroadcast_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MRB_InfoBroadcast_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MRB_ListBroadcast_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRB_ListBroadcast_r17(MRB_ListBroadcast_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MRB_InfoBroadcast_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MBS_SessionInfo_r17：ASN.1 MBS-SessionInfo-r17；源文件第 23544 行；SEQUENCE。
// Encode_MBS_SessionInfo_r17 只读不分配；Decode_MBS_SessionInfo_r17 可能 malloc（失败时内部已释放并清零）；Free_MBS_SessionInfo_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MBS_SessionInfo_r17(Encoder& enc, const MBS_SessionInfo_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_mtch_SchedulingInfo_r17);
    enc.WriteBit(value.has_mtch_NeighbourCell_r17);
    enc.WriteBit(value.has_pdsch_ConfigIndex_r17);
    enc.WriteBit(value.has_mtch_SSB_MappingWindowIndex_r17);
    Encode_TMGI_r17(enc, value.mbs_SessionId_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.g_RNTI_r17), 0, 65535);
    Encode_MRB_ListBroadcast_r17(enc, value.mrb_ListBroadcast_r17);
    if (value.has_mtch_SchedulingInfo_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mtch_SchedulingInfo_r17), 0, 63);
    }
    if (value.has_mtch_NeighbourCell_r17) {
        enc.WriteFixedBitString(value.mtch_NeighbourCell_r17.bytes, value.mtch_NeighbourCell_r17.bitLength, 8, 8);
    }
    if (value.has_pdsch_ConfigIndex_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_ConfigIndex_r17), 0, 15);
    }
    if (value.has_mtch_SSB_MappingWindowIndex_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mtch_SSB_MappingWindowIndex_r17), 0, 15);
    }
    return enc.Error();
}

ErrorCode Decode_MBS_SessionInfo_r17(Decoder& dec, MBS_SessionInfo_r17& value)
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
        if (Decode_TMGI_r17(dec, value.mbs_SessionId_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.g_RNTI_r17 = (RNTI_Value)tmp_value;
    }
    {
        if (Decode_MRB_ListBroadcast_r17(dec, value.mrb_ListBroadcast_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.mtch_SchedulingInfo_r17 = (DRX_ConfigPTM_Index_r17)tmp_value;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.mtch_NeighbourCell_r17.bytes = string_bytes;
        value.mtch_NeighbourCell_r17.bitLength = string_length;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.pdsch_ConfigIndex_r17 = (PDSCH_ConfigIndex_r17)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.mtch_SSB_MappingWindowIndex_r17 = (MTCH_SSB_MappingWindowIndex_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MBS_SessionInfo_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBS_SessionInfo_r17(MBS_SessionInfo_r17& value)
{
    Free_TMGI_r17(value.mbs_SessionId_r17);
    Free_MRB_ListBroadcast_r17(value.mrb_ListBroadcast_r17);
    if (value.has_mtch_SchedulingInfo_r17) {
    }
    if (value.has_mtch_NeighbourCell_r17) {
        std::free(value.mtch_NeighbourCell_r17.bytes);
        value.mtch_NeighbourCell_r17.bytes = nullptr;
        value.mtch_NeighbourCell_r17.bitLength = 0;
    }
    if (value.has_pdsch_ConfigIndex_r17) {
    }
    if (value.has_mtch_SSB_MappingWindowIndex_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc_Profiles_r17：ASN.1 headerCompression-r17/rohc/profiles-r17；源文件第 23574 行；SEQUENCE。
// Encode_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc_Profiles_r17 只读不分配；Decode_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc_Profiles_r17 可能 malloc（失败时内部已释放并清零）；Free_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc_Profiles_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc_Profiles_r17(Encoder& enc, const MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc_Profiles_r17& value)
{
    (void)value;
    enc.WriteBool(value.profile0x0000_r17);
    enc.WriteBool(value.profile0x0001_r17);
    enc.WriteBool(value.profile0x0002_r17);
    return enc.Error();
}

ErrorCode Decode_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc_Profiles_r17(Decoder& dec, MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc_Profiles_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.profile0x0000_r17 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.profile0x0001_r17 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.profile0x0002_r17 = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc_Profiles_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc_Profiles_r17(MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc_Profiles_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc：ASN.1 headerCompression-r17/rohc；源文件第 23572 行；SEQUENCE。
// Encode_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc 只读不分配；Decode_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc 可能 malloc（失败时内部已释放并清零）；Free_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc(Encoder& enc, const MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc& value)
{
    (void)value;
    enc.WriteBit(value.maxCID_r17 != 15);
    if (value.maxCID_r17 != 15) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxCID_r17), 1, 16);
    }
    Encode_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc_Profiles_r17(enc, value.profiles_r17);
    return enc.Error();
}

ErrorCode Decode_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc(Decoder& dec, MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.maxCID_r17 = (int64_t)tmp_value;
    } else {
        value.maxCID_r17 = 15;
    }
    {
        if (Decode_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc_Profiles_r17(dec, value.profiles_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc(MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc& value)
{
    Free_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc_Profiles_r17(value.profiles_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17：ASN.1 headerCompression-r17；源文件第 23570 行；CHOICE。
// Encode_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17 只读不分配；Decode_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17 可能 malloc（失败时内部已释放并清零）；Free_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17(Encoder& enc, const MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Tag_notUsed:
        (void)0;
        break;
    case MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Tag_rohc:
        Encode_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc(enc, value.u.rohc);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17(Decoder& dec, MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Tag)root_index;
    switch (value.tag) {
    case MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Tag_notUsed: {
        (void)0;
        break;
    }
    case MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Tag_rohc: {
        if (Decode_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc(dec, value.u.rohc) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17(MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17& value)
{
    switch (value.tag) {
    case MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Tag_notUsed:
        break;
    case MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Tag_rohc:
        Free_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc(value.u.rohc);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MRB_PDCP_ConfigBroadcast_r17：ASN.1 MRB-PDCP-ConfigBroadcast-r17；源文件第 23568 行；SEQUENCE。
// Encode_MRB_PDCP_ConfigBroadcast_r17 只读不分配；Decode_MRB_PDCP_ConfigBroadcast_r17 可能 malloc（失败时内部已释放并清零）；Free_MRB_PDCP_ConfigBroadcast_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MRB_PDCP_ConfigBroadcast_r17(Encoder& enc, const MRB_PDCP_ConfigBroadcast_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_pdcp_SN_SizeDL_r17);
    enc.WriteBit(value.has_t_Reordering_r17);
    if (value.has_pdcp_SN_SizeDL_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcp_SN_SizeDL_r17), 0, 0);
    }
    Encode_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17(enc, value.headerCompression_r17);
    if (value.has_t_Reordering_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.t_Reordering_r17), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_MRB_PDCP_ConfigBroadcast_r17(Decoder& dec, MRB_PDCP_ConfigBroadcast_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.pdcp_SN_SizeDL_r17 = (MRB_PDCP_ConfigBroadcast_r17_Pdcp_SN_SizeDL_r17)0;
    }
    {
        if (Decode_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17(dec, value.headerCompression_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.t_Reordering_r17 = (MRB_PDCP_ConfigBroadcast_r17_T_Reordering_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MRB_PDCP_ConfigBroadcast_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRB_PDCP_ConfigBroadcast_r17(MRB_PDCP_ConfigBroadcast_r17& value)
{
    if (value.has_pdcp_SN_SizeDL_r17) {
    }
    Free_MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17(value.headerCompression_r17);
    if (value.has_t_Reordering_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MRB_RLC_ConfigBroadcast_r17：ASN.1 MRB-RLC-ConfigBroadcast-r17；源文件第 23584 行；SEQUENCE。
// Encode_MRB_RLC_ConfigBroadcast_r17 只读不分配；Decode_MRB_RLC_ConfigBroadcast_r17 可能 malloc（失败时内部已释放并清零）；Free_MRB_RLC_ConfigBroadcast_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MRB_RLC_ConfigBroadcast_r17(Encoder& enc, const MRB_RLC_ConfigBroadcast_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_sn_FieldLength_r17);
    enc.WriteBit(value.has_t_Reassembly_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.logicalChannelIdentity_r17), 1, 32);
    if (value.has_sn_FieldLength_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sn_FieldLength_r17), 0, 0);
    }
    if (value.has_t_Reassembly_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.t_Reassembly_r17), 0, 31);
    }
    return enc.Error();
}

ErrorCode Decode_MRB_RLC_ConfigBroadcast_r17(Decoder& dec, MRB_RLC_ConfigBroadcast_r17& value)
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
        value.logicalChannelIdentity_r17 = (LogicalChannelIdentity)tmp_value;
    }
    if (present_0) {
        value.sn_FieldLength_r17 = (MRB_RLC_ConfigBroadcast_r17_Sn_FieldLength_r17)0;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.t_Reassembly_r17 = (T_Reassembly)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MRB_RLC_ConfigBroadcast_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRB_RLC_ConfigBroadcast_r17(MRB_RLC_ConfigBroadcast_r17& value)
{
    if (value.has_sn_FieldLength_r17) {
    }
    if (value.has_t_Reassembly_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MRB_InfoBroadcast_r17：ASN.1 MRB-InfoBroadcast-r17；源文件第 23562 行；SEQUENCE。
// Encode_MRB_InfoBroadcast_r17 只读不分配；Decode_MRB_InfoBroadcast_r17 可能 malloc（失败时内部已释放并清零）；Free_MRB_InfoBroadcast_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MRB_InfoBroadcast_r17(Encoder& enc, const MRB_InfoBroadcast_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_MRB_PDCP_ConfigBroadcast_r17(enc, value.pdcp_Config_r17);
    Encode_MRB_RLC_ConfigBroadcast_r17(enc, value.rlc_Config_r17);
    return enc.Error();
}

ErrorCode Decode_MRB_InfoBroadcast_r17(Decoder& dec, MRB_InfoBroadcast_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_MRB_PDCP_ConfigBroadcast_r17(dec, value.pdcp_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_MRB_RLC_ConfigBroadcast_r17(dec, value.rlc_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MRB_InfoBroadcast_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRB_InfoBroadcast_r17(MRB_InfoBroadcast_r17& value)
{
    Free_MRB_PDCP_ConfigBroadcast_r17(value.pdcp_Config_r17);
    Free_MRB_RLC_ConfigBroadcast_r17(value.rlc_Config_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MRB_ListMulticast_r18：ASN.1 MRB-ListMulticast-r18；源文件第 23609 行；SEQUENCE OF。
// Encode_MRB_ListMulticast_r18 只读不分配；Decode_MRB_ListMulticast_r18 可能 malloc（失败时内部已释放并清零）；Free_MRB_ListMulticast_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MRB_ListMulticast_r18(Encoder& enc, const MRB_ListMulticast_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MRB_InfoMulticast_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MRB_ListMulticast_r18(Decoder& dec, MRB_ListMulticast_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MRB_InfoMulticast_r18*)std::malloc((std::size_t)value.count * sizeof(MRB_InfoMulticast_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MRB_InfoMulticast_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MRB_InfoMulticast_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MRB_ListMulticast_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRB_ListMulticast_r18(MRB_ListMulticast_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MRB_InfoMulticast_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MBS_SessionInfoMulticast_r18：ASN.1 MBS-SessionInfoMulticast-r18；源文件第 23595 行；SEQUENCE。
// Encode_MBS_SessionInfoMulticast_r18 只读不分配；Decode_MBS_SessionInfoMulticast_r18 可能 malloc（失败时内部已释放并清零）；Free_MBS_SessionInfoMulticast_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MBS_SessionInfoMulticast_r18(Encoder& enc, const MBS_SessionInfoMulticast_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_g_RNTI_r18);
    enc.WriteBit(value.has_mrb_ListMulticast_r18);
    enc.WriteBit(value.has_mtch_SchedulingInfo_r18);
    enc.WriteBit(value.has_mtch_NeighbourCell_r18);
    enc.WriteBit(value.has_pdsch_ConfigIndex_r18);
    enc.WriteBit(value.has_mtch_SSB_MappingWindowIndex_r18);
    enc.WriteBit(value.has_thresholdIndex_r18);
    enc.WriteBit(value.has_pdcp_SyncIndicator_r18);
    enc.WriteBit(value.has_stopMonitoringRNTI_r18);
    Encode_TMGI_r17(enc, value.mbs_SessionId_r18);
    if (value.has_g_RNTI_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.g_RNTI_r18), 0, 65535);
    }
    if (value.has_mrb_ListMulticast_r18) {
        Encode_MRB_ListMulticast_r18(enc, value.mrb_ListMulticast_r18);
    }
    if (value.has_mtch_SchedulingInfo_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mtch_SchedulingInfo_r18), 0, 63);
    }
    if (value.has_mtch_NeighbourCell_r18) {
        enc.WriteFixedBitString(value.mtch_NeighbourCell_r18.bytes, value.mtch_NeighbourCell_r18.bitLength, 8, 8);
    }
    if (value.has_pdsch_ConfigIndex_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_ConfigIndex_r18), 0, 15);
    }
    if (value.has_mtch_SSB_MappingWindowIndex_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mtch_SSB_MappingWindowIndex_r18), 0, 15);
    }
    if (value.has_thresholdIndex_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.thresholdIndex_r18), 0, 7);
    }
    if (value.has_pdcp_SyncIndicator_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcp_SyncIndicator_r18), 0, 0);
    }
    if (value.has_stopMonitoringRNTI_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.stopMonitoringRNTI_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MBS_SessionInfoMulticast_r18(Decoder& dec, MBS_SessionInfoMulticast_r18& value)
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
    {
        if (Decode_TMGI_r17(dec, value.mbs_SessionId_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.g_RNTI_r18 = (RNTI_Value)tmp_value;
    }
    if (present_1) {
        if (Decode_MRB_ListMulticast_r18(dec, value.mrb_ListMulticast_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.mtch_SchedulingInfo_r18 = (DRX_ConfigPTM_Index_r17)tmp_value;
    }
    if (present_3) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.mtch_NeighbourCell_r18.bytes = string_bytes;
        value.mtch_NeighbourCell_r18.bitLength = string_length;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.pdsch_ConfigIndex_r18 = (PDSCH_ConfigIndex_r17)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.mtch_SSB_MappingWindowIndex_r18 = (MTCH_SSB_MappingWindowIndex_r17)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.thresholdIndex_r18 = (int64_t)tmp_value;
    }
    if (present_7) {
        value.pdcp_SyncIndicator_r18 = (MBS_SessionInfoMulticast_r18_Pdcp_SyncIndicator_r18)0;
    }
    if (present_8) {
        value.stopMonitoringRNTI_r18 = (MBS_SessionInfoMulticast_r18_StopMonitoringRNTI_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MBS_SessionInfoMulticast_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBS_SessionInfoMulticast_r18(MBS_SessionInfoMulticast_r18& value)
{
    Free_TMGI_r17(value.mbs_SessionId_r18);
    if (value.has_g_RNTI_r18) {
    }
    if (value.has_mrb_ListMulticast_r18) {
        Free_MRB_ListMulticast_r18(value.mrb_ListMulticast_r18);
    }
    if (value.has_mtch_SchedulingInfo_r18) {
    }
    if (value.has_mtch_NeighbourCell_r18) {
        std::free(value.mtch_NeighbourCell_r18.bytes);
        value.mtch_NeighbourCell_r18.bytes = nullptr;
        value.mtch_NeighbourCell_r18.bitLength = 0;
    }
    if (value.has_pdsch_ConfigIndex_r18) {
    }
    if (value.has_mtch_SSB_MappingWindowIndex_r18) {
    }
    if (value.has_thresholdIndex_r18) {
    }
    if (value.has_pdcp_SyncIndicator_r18) {
    }
    if (value.has_stopMonitoringRNTI_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc_Profiles_r18：ASN.1 headerCompression-r18/rohc/profiles-r18；源文件第 23623 行；SEQUENCE。
// Encode_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc_Profiles_r18 只读不分配；Decode_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc_Profiles_r18 可能 malloc（失败时内部已释放并清零）；Free_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc_Profiles_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc_Profiles_r18(Encoder& enc, const MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc_Profiles_r18& value)
{
    (void)value;
    enc.WriteBool(value.profile0x0000_r18);
    enc.WriteBool(value.profile0x0001_r18);
    enc.WriteBool(value.profile0x0002_r18);
    return enc.Error();
}

ErrorCode Decode_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc_Profiles_r18(Decoder& dec, MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc_Profiles_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.profile0x0000_r18 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.profile0x0001_r18 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.profile0x0002_r18 = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc_Profiles_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc_Profiles_r18(MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc_Profiles_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc：ASN.1 headerCompression-r18/rohc；源文件第 23621 行；SEQUENCE。
// Encode_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc 只读不分配；Decode_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc 可能 malloc（失败时内部已释放并清零）；Free_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc(Encoder& enc, const MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc& value)
{
    (void)value;
    enc.WriteBit(value.maxCID_r18 != 15);
    if (value.maxCID_r18 != 15) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxCID_r18), 1, 16);
    }
    Encode_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc_Profiles_r18(enc, value.profiles_r18);
    return enc.Error();
}

ErrorCode Decode_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc(Decoder& dec, MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.maxCID_r18 = (int64_t)tmp_value;
    } else {
        value.maxCID_r18 = 15;
    }
    {
        if (Decode_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc_Profiles_r18(dec, value.profiles_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc(MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc& value)
{
    Free_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc_Profiles_r18(value.profiles_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18：ASN.1 headerCompression-r18；源文件第 23619 行；CHOICE。
// Encode_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18 只读不分配；Decode_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18 可能 malloc（失败时内部已释放并清零）；Free_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18(Encoder& enc, const MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Tag_notUsed:
        (void)0;
        break;
    case MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Tag_rohc:
        Encode_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc(enc, value.u.rohc);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18(Decoder& dec, MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Tag)root_index;
    switch (value.tag) {
    case MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Tag_notUsed: {
        (void)0;
        break;
    }
    case MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Tag_rohc: {
        if (Decode_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc(dec, value.u.rohc) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18(MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18& value)
{
    switch (value.tag) {
    case MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Tag_notUsed:
        break;
    case MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Tag_rohc:
        Free_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc(value.u.rohc);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MRB_PDCP_ConfigMulticast_r18：ASN.1 MRB-PDCP-ConfigMulticast-r18；源文件第 23617 行；SEQUENCE。
// Encode_MRB_PDCP_ConfigMulticast_r18 只读不分配；Decode_MRB_PDCP_ConfigMulticast_r18 可能 malloc（失败时内部已释放并清零）；Free_MRB_PDCP_ConfigMulticast_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MRB_PDCP_ConfigMulticast_r18(Encoder& enc, const MRB_PDCP_ConfigMulticast_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_t_Reordering_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcp_SN_SizeDL_r18), 0, 1);
    Encode_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18(enc, value.headerCompression_r18);
    if (value.has_t_Reordering_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.t_Reordering_r17), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_MRB_PDCP_ConfigMulticast_r18(Decoder& dec, MRB_PDCP_ConfigMulticast_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.pdcp_SN_SizeDL_r18 = (MRB_PDCP_ConfigMulticast_r18_Pdcp_SN_SizeDL_r18)tmp_value;
    }
    {
        if (Decode_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18(dec, value.headerCompression_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.t_Reordering_r17 = (MRB_PDCP_ConfigMulticast_r18_T_Reordering_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MRB_PDCP_ConfigMulticast_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRB_PDCP_ConfigMulticast_r18(MRB_PDCP_ConfigMulticast_r18& value)
{
    Free_MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18(value.headerCompression_r18);
    if (value.has_t_Reordering_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18：ASN.1 logicalChannelIdentity-r18；源文件第 23634 行；CHOICE。
// Encode_MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18 只读不分配；Decode_MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18 可能 malloc（失败时内部已释放并清零）；Free_MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18(Encoder& enc, const MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18_Tag_logicalChannelIdentitymulticast_r18:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.logicalChannelIdentitymulticast_r18), 1, 32);
        break;
    case MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18_Tag_logicalChannelIdentityExt_r18:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.logicalChannelIdentityExt_r18), 320, 65855);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18(Decoder& dec, MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18_Tag)root_index;
    switch (value.tag) {
    case MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18_Tag_logicalChannelIdentitymulticast_r18: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.u.logicalChannelIdentitymulticast_r18 = (LogicalChannelIdentity)tmp_value;
        break;
    }
    case MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18_Tag_logicalChannelIdentityExt_r18: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(320, 65855, tmp_value)) { goto fail; }
        value.u.logicalChannelIdentityExt_r18 = (LogicalChannelIdentityExt_r17)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18(MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18& value)
{
    switch (value.tag) {
    case MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18_Tag_logicalChannelIdentitymulticast_r18:
        break;
    case MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18_Tag_logicalChannelIdentityExt_r18:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MRB_RLC_ConfigMulticast_r18：ASN.1 MRB-RLC-ConfigMulticast-r18；源文件第 23633 行；SEQUENCE。
// Encode_MRB_RLC_ConfigMulticast_r18 只读不分配；Decode_MRB_RLC_ConfigMulticast_r18 可能 malloc（失败时内部已释放并清零）；Free_MRB_RLC_ConfigMulticast_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MRB_RLC_ConfigMulticast_r18(Encoder& enc, const MRB_RLC_ConfigMulticast_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_t_Reassembly_r18);
    Encode_MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18(enc, value.logicalChannelIdentity_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.sn_FieldLength_r18), 0, 1);
    if (value.has_t_Reassembly_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.t_Reassembly_r18), 0, 31);
    }
    return enc.Error();
}

ErrorCode Decode_MRB_RLC_ConfigMulticast_r18(Decoder& dec, MRB_RLC_ConfigMulticast_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18(dec, value.logicalChannelIdentity_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sn_FieldLength_r18 = (MRB_RLC_ConfigMulticast_r18_Sn_FieldLength_r18)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.t_Reassembly_r18 = (T_Reassembly)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MRB_RLC_ConfigMulticast_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRB_RLC_ConfigMulticast_r18(MRB_RLC_ConfigMulticast_r18& value)
{
    Free_MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18(value.logicalChannelIdentity_r18);
    if (value.has_t_Reassembly_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MRB_InfoMulticast_r18：ASN.1 MRB-InfoMulticast-r18；源文件第 23611 行；SEQUENCE。
// Encode_MRB_InfoMulticast_r18 只读不分配；Decode_MRB_InfoMulticast_r18 可能 malloc（失败时内部已释放并清零）；Free_MRB_InfoMulticast_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MRB_InfoMulticast_r18(Encoder& enc, const MRB_InfoMulticast_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_MRB_PDCP_ConfigMulticast_r18(enc, value.pdcp_Config_r18);
    Encode_MRB_RLC_ConfigMulticast_r18(enc, value.rlc_Config_r18);
    return enc.Error();
}

ErrorCode Decode_MRB_InfoMulticast_r18(Decoder& dec, MRB_InfoMulticast_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_MRB_PDCP_ConfigMulticast_r18(dec, value.pdcp_Config_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_MRB_RLC_ConfigMulticast_r18(dec, value.rlc_Config_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MRB_InfoMulticast_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRB_InfoMulticast_r18(MRB_InfoMulticast_r18& value)
{
    Free_MRB_PDCP_ConfigMulticast_r18(value.pdcp_Config_r18);
    Free_MRB_RLC_ConfigMulticast_r18(value.rlc_Config_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MTCH_SSB_MappingWindowCycleOffset_r17：ASN.1 MTCH-SSB-MappingWindowCycleOffset-r17；源文件第 23647 行；CHOICE。
// Encode_MTCH_SSB_MappingWindowCycleOffset_r17 只读不分配；Decode_MTCH_SSB_MappingWindowCycleOffset_r17 可能 malloc（失败时内部已释放并清零）；Free_MTCH_SSB_MappingWindowCycleOffset_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MTCH_SSB_MappingWindowCycleOffset_r17(Encoder& enc, const MTCH_SSB_MappingWindowCycleOffset_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 5);
    switch (value.tag) {
    case MTCH_SSB_MappingWindowCycleOffset_r17_Tag_ms10:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms10), 0, 9);
        break;
    case MTCH_SSB_MappingWindowCycleOffset_r17_Tag_ms20:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms20), 0, 19);
        break;
    case MTCH_SSB_MappingWindowCycleOffset_r17_Tag_ms32:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms32), 0, 31);
        break;
    case MTCH_SSB_MappingWindowCycleOffset_r17_Tag_ms64:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms64), 0, 63);
        break;
    case MTCH_SSB_MappingWindowCycleOffset_r17_Tag_ms128:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms128), 0, 127);
        break;
    case MTCH_SSB_MappingWindowCycleOffset_r17_Tag_ms256:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms256), 0, 255);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MTCH_SSB_MappingWindowCycleOffset_r17(Decoder& dec, MTCH_SSB_MappingWindowCycleOffset_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 5, root_index)) {
        goto fail;
    }
    value.tag = (MTCH_SSB_MappingWindowCycleOffset_r17_Tag)root_index;
    switch (value.tag) {
    case MTCH_SSB_MappingWindowCycleOffset_r17_Tag_ms10: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.u.ms10 = (int64_t)tmp_value;
        break;
    }
    case MTCH_SSB_MappingWindowCycleOffset_r17_Tag_ms20: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 19, tmp_value)) { goto fail; }
        value.u.ms20 = (int64_t)tmp_value;
        break;
    }
    case MTCH_SSB_MappingWindowCycleOffset_r17_Tag_ms32: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.ms32 = (int64_t)tmp_value;
        break;
    }
    case MTCH_SSB_MappingWindowCycleOffset_r17_Tag_ms64: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.ms64 = (int64_t)tmp_value;
        break;
    }
    case MTCH_SSB_MappingWindowCycleOffset_r17_Tag_ms128: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.u.ms128 = (int64_t)tmp_value;
        break;
    }
    case MTCH_SSB_MappingWindowCycleOffset_r17_Tag_ms256: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
        value.u.ms256 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MTCH_SSB_MappingWindowCycleOffset_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MTCH_SSB_MappingWindowCycleOffset_r17(MTCH_SSB_MappingWindowCycleOffset_r17& value)
{
    switch (value.tag) {
    case MTCH_SSB_MappingWindowCycleOffset_r17_Tag_ms10:
        break;
    case MTCH_SSB_MappingWindowCycleOffset_r17_Tag_ms20:
        break;
    case MTCH_SSB_MappingWindowCycleOffset_r17_Tag_ms32:
        break;
    case MTCH_SSB_MappingWindowCycleOffset_r17_Tag_ms64:
        break;
    case MTCH_SSB_MappingWindowCycleOffset_r17_Tag_ms128:
        break;
    case MTCH_SSB_MappingWindowCycleOffset_r17_Tag_ms256:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDSCH_ConfigPTM_r17：ASN.1 PDSCH-ConfigPTM-r17；源文件第 23668 行；SEQUENCE。
// Encode_PDSCH_ConfigPTM_r17 只读不分配；Decode_PDSCH_ConfigPTM_r17 可能 malloc（失败时内部已释放并清零）；Free_PDSCH_ConfigPTM_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDSCH_ConfigPTM_r17(Encoder& enc, const PDSCH_ConfigPTM_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_dataScramblingIdentityPDSCH_r17);
    enc.WriteBit(value.has_dmrs_ScramblingID0_r17);
    enc.WriteBit(value.has_pdsch_AggregationFactor_r17);
    if (value.has_dataScramblingIdentityPDSCH_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dataScramblingIdentityPDSCH_r17), 0, 1023);
    }
    if (value.has_dmrs_ScramblingID0_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_ScramblingID0_r17), 0, 65535);
    }
    if (value.has_pdsch_AggregationFactor_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_AggregationFactor_r17), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_ConfigPTM_r17(Decoder& dec, PDSCH_ConfigPTM_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.dataScramblingIdentityPDSCH_r17 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.dmrs_ScramblingID0_r17 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.pdsch_AggregationFactor_r17 = (PDSCH_ConfigPTM_r17_Pdsch_AggregationFactor_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_ConfigPTM_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_ConfigPTM_r17(PDSCH_ConfigPTM_r17& value)
{
    if (value.has_dataScramblingIdentityPDSCH_r17) {
    }
    if (value.has_dmrs_ScramblingID0_r17) {
    }
    if (value.has_pdsch_AggregationFactor_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SystemInformation_IEs_Sib_TypeAndInfo_Item：ASN.1 sib-TypeAndInfo/Item；源文件第 2174 行；CHOICE。
// Encode_SystemInformation_IEs_Sib_TypeAndInfo_Item 只读不分配；Decode_SystemInformation_IEs_Sib_TypeAndInfo_Item 可能 malloc（失败时内部已释放并清零）；Free_SystemInformation_IEs_Sib_TypeAndInfo_Item 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SystemInformation_IEs_Sib_TypeAndInfo_Item(Encoder& enc, const SystemInformation_IEs_Sib_TypeAndInfo_Item& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 8) {
        if (choice_index >= 24) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 8));
        Encoder sub;
        switch (value.tag) {
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib10_v1610:
            Encode_SIB10_r16(sub, value.u.sib10_v1610);
            break;
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib11_v1610:
            Encode_SIB11_r16(sub, value.u.sib11_v1610);
            break;
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib12_v1610:
            Encode_SIB12_r16(sub, value.u.sib12_v1610);
            break;
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib13_v1610:
            Encode_SIB13_r16(sub, value.u.sib13_v1610);
            break;
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib14_v1610:
            Encode_SIB14_r16(sub, value.u.sib14_v1610);
            break;
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib15_v1700:
            Encode_SIB15_r17(sub, value.u.sib15_v1700);
            break;
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib16_v1700:
            Encode_SIB16_r17(sub, value.u.sib16_v1700);
            break;
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib17_v1700:
            Encode_SIB17_r17(sub, value.u.sib17_v1700);
            break;
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib18_v1700:
            Encode_SIB18_r17(sub, value.u.sib18_v1700);
            break;
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib19_v1700:
            Encode_SIB19_r17(sub, value.u.sib19_v1700);
            break;
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib20_v1700:
            Encode_SIB20_r17(sub, value.u.sib20_v1700);
            break;
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib21_v1700:
            Encode_SIB21_r17(sub, value.u.sib21_v1700);
            break;
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib22_v1800:
            Encode_SIB22_r18(sub, value.u.sib22_v1800);
            break;
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib23_v1800:
            Encode_SIB23_r18(sub, value.u.sib23_v1800);
            break;
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib24_v1800:
            Encode_SIB24_r18(sub, value.u.sib24_v1800);
            break;
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib25_v1800:
            Encode_SIB25_r18(sub, value.u.sib25_v1800);
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
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 7);
    switch (value.tag) {
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib2:
        Encode_SIB2(enc, value.u.sib2);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib3:
        Encode_SIB3(enc, value.u.sib3);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib4:
        Encode_SIB4(enc, value.u.sib4);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib5:
        Encode_SIB5(enc, value.u.sib5);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib6:
        Encode_SIB6(enc, value.u.sib6);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib7:
        Encode_SIB7(enc, value.u.sib7);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib8:
        Encode_SIB8(enc, value.u.sib8);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib9:
        Encode_SIB9(enc, value.u.sib9);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SystemInformation_IEs_Sib_TypeAndInfo_Item(Decoder& dec, SystemInformation_IEs_Sib_TypeAndInfo_Item& value)
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
        if (extension_index >= 16u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        value.tag = (SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag)(8 + extension_index);
        std::vector<std::uint8_t> open_bytes;
        if (!dec.ReadOpenType(open_bytes)) { goto fail; }
        Decoder sub(open_bytes.data(), open_bytes.size());
        switch (value.tag) {
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib10_v1610: {
            if (Decode_SIB10_r16(sub, value.u.sib10_v1610) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib11_v1610: {
            if (Decode_SIB11_r16(sub, value.u.sib11_v1610) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib12_v1610: {
            if (Decode_SIB12_r16(sub, value.u.sib12_v1610) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib13_v1610: {
            if (Decode_SIB13_r16(sub, value.u.sib13_v1610) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib14_v1610: {
            if (Decode_SIB14_r16(sub, value.u.sib14_v1610) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib15_v1700: {
            if (Decode_SIB15_r17(sub, value.u.sib15_v1700) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib16_v1700: {
            if (Decode_SIB16_r17(sub, value.u.sib16_v1700) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib17_v1700: {
            if (Decode_SIB17_r17(sub, value.u.sib17_v1700) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib18_v1700: {
            if (Decode_SIB18_r17(sub, value.u.sib18_v1700) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib19_v1700: {
            if (Decode_SIB19_r17(sub, value.u.sib19_v1700) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib20_v1700: {
            if (Decode_SIB20_r17(sub, value.u.sib20_v1700) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib21_v1700: {
            if (Decode_SIB21_r17(sub, value.u.sib21_v1700) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib22_v1800: {
            if (Decode_SIB22_r18(sub, value.u.sib22_v1800) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib23_v1800: {
            if (Decode_SIB23_r18(sub, value.u.sib23_v1800) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib24_v1800: {
            if (Decode_SIB24_r18(sub, value.u.sib24_v1800) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib25_v1800: {
            if (Decode_SIB25_r18(sub, value.u.sib25_v1800) != ErrorCode_Ok) { goto fail; }
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
    if (!dec.ReadConstrainedInteger(0, 7, root_index)) {
        goto fail;
    }
    value.tag = (SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag)root_index;
    switch (value.tag) {
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib2: {
        if (Decode_SIB2(dec, value.u.sib2) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib3: {
        if (Decode_SIB3(dec, value.u.sib3) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib4: {
        if (Decode_SIB4(dec, value.u.sib4) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib5: {
        if (Decode_SIB5(dec, value.u.sib5) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib6: {
        if (Decode_SIB6(dec, value.u.sib6) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib7: {
        if (Decode_SIB7(dec, value.u.sib7) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib8: {
        if (Decode_SIB8(dec, value.u.sib8) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib9: {
        if (Decode_SIB9(dec, value.u.sib9) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SystemInformation_IEs_Sib_TypeAndInfo_Item(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SystemInformation_IEs_Sib_TypeAndInfo_Item(SystemInformation_IEs_Sib_TypeAndInfo_Item& value)
{
    switch (value.tag) {
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib2:
        Free_SIB2(value.u.sib2);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib3:
        Free_SIB3(value.u.sib3);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib4:
        Free_SIB4(value.u.sib4);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib5:
        Free_SIB5(value.u.sib5);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib6:
        Free_SIB6(value.u.sib6);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib7:
        Free_SIB7(value.u.sib7);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib8:
        Free_SIB8(value.u.sib8);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib9:
        Free_SIB9(value.u.sib9);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib10_v1610:
        Free_SIB10_r16(value.u.sib10_v1610);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib11_v1610:
        Free_SIB11_r16(value.u.sib11_v1610);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib12_v1610:
        Free_SIB12_r16(value.u.sib12_v1610);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib13_v1610:
        Free_SIB13_r16(value.u.sib13_v1610);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib14_v1610:
        Free_SIB14_r16(value.u.sib14_v1610);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib15_v1700:
        Free_SIB15_r17(value.u.sib15_v1700);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib16_v1700:
        Free_SIB16_r17(value.u.sib16_v1700);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib17_v1700:
        Free_SIB17_r17(value.u.sib17_v1700);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib18_v1700:
        Free_SIB18_r17(value.u.sib18_v1700);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib19_v1700:
        Free_SIB19_r17(value.u.sib19_v1700);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib20_v1700:
        Free_SIB20_r17(value.u.sib20_v1700);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib21_v1700:
        Free_SIB21_r17(value.u.sib21_v1700);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib22_v1800:
        Free_SIB22_r18(value.u.sib22_v1800);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib23_v1800:
        Free_SIB23_r18(value.u.sib23_v1800);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib24_v1800:
        Free_SIB24_r18(value.u.sib24_v1800);
        break;
    case SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib25_v1800:
        Free_SIB25_r18(value.u.sib25_v1800);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item：ASN.1 posSIB-TypeAndInfo-r16/Item；源文件第 4126 行；CHOICE。
// Encode_PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item 只读不分配；Decode_PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item 可能 malloc（失败时内部已释放并清零）；Free_PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item(Encoder& enc, const PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 37) {
        if (choice_index >= 56) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 37));
        Encoder sub;
        switch (value.tag) {
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_9_v1700:
            Encode_SIBpos_r16(sub, value.u.posSib1_9_v1700);
            break;
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_10_v1700:
            Encode_SIBpos_r16(sub, value.u.posSib1_10_v1700);
            break;
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_24_v1700:
            Encode_SIBpos_r16(sub, value.u.posSib2_24_v1700);
            break;
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_25_v1700:
            Encode_SIBpos_r16(sub, value.u.posSib2_25_v1700);
            break;
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_4_v1700:
            Encode_SIBpos_r16(sub, value.u.posSib6_4_v1700);
            break;
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_5_v1700:
            Encode_SIBpos_r16(sub, value.u.posSib6_5_v1700);
            break;
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_6_v1700:
            Encode_SIBpos_r16(sub, value.u.posSib6_6_v1700);
            break;
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_17a_v1770:
            Encode_SIBpos_r16(sub, value.u.posSib2_17a_v1770);
            break;
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_18a_v1770:
            Encode_SIBpos_r16(sub, value.u.posSib2_18a_v1770);
            break;
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_20a_v1770:
            Encode_SIBpos_r16(sub, value.u.posSib2_20a_v1770);
            break;
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_11_v1800:
            Encode_SIBpos_r16(sub, value.u.posSib1_11_v1800);
            break;
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_12_v1800:
            Encode_SIBpos_r16(sub, value.u.posSib1_12_v1800);
            break;
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_26_v1800:
            Encode_SIBpos_r16(sub, value.u.posSib2_26_v1800);
            break;
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_27_v1800:
            Encode_SIBpos_r16(sub, value.u.posSib2_27_v1800);
            break;
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_7_v1800:
            Encode_SIBpos_r16(sub, value.u.posSib6_7_v1800);
            break;
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib7_1_v1800:
            Encode_SIBpos_r16(sub, value.u.posSib7_1_v1800);
            break;
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib7_2_v1800:
            Encode_SIBpos_r16(sub, value.u.posSib7_2_v1800);
            break;
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib7_3_v1800:
            Encode_SIBpos_r16(sub, value.u.posSib7_3_v1800);
            break;
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib7_4_v1800:
            Encode_SIBpos_r16(sub, value.u.posSib7_4_v1800);
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
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 36);
    switch (value.tag) {
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_1_r16:
        Encode_SIBpos_r16(enc, value.u.posSib1_1_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_2_r16:
        Encode_SIBpos_r16(enc, value.u.posSib1_2_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_3_r16:
        Encode_SIBpos_r16(enc, value.u.posSib1_3_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_4_r16:
        Encode_SIBpos_r16(enc, value.u.posSib1_4_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_5_r16:
        Encode_SIBpos_r16(enc, value.u.posSib1_5_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_6_r16:
        Encode_SIBpos_r16(enc, value.u.posSib1_6_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_7_r16:
        Encode_SIBpos_r16(enc, value.u.posSib1_7_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_8_r16:
        Encode_SIBpos_r16(enc, value.u.posSib1_8_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_1_r16:
        Encode_SIBpos_r16(enc, value.u.posSib2_1_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_2_r16:
        Encode_SIBpos_r16(enc, value.u.posSib2_2_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_3_r16:
        Encode_SIBpos_r16(enc, value.u.posSib2_3_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_4_r16:
        Encode_SIBpos_r16(enc, value.u.posSib2_4_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_5_r16:
        Encode_SIBpos_r16(enc, value.u.posSib2_5_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_6_r16:
        Encode_SIBpos_r16(enc, value.u.posSib2_6_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_7_r16:
        Encode_SIBpos_r16(enc, value.u.posSib2_7_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_8_r16:
        Encode_SIBpos_r16(enc, value.u.posSib2_8_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_9_r16:
        Encode_SIBpos_r16(enc, value.u.posSib2_9_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_10_r16:
        Encode_SIBpos_r16(enc, value.u.posSib2_10_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_11_r16:
        Encode_SIBpos_r16(enc, value.u.posSib2_11_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_12_r16:
        Encode_SIBpos_r16(enc, value.u.posSib2_12_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_13_r16:
        Encode_SIBpos_r16(enc, value.u.posSib2_13_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_14_r16:
        Encode_SIBpos_r16(enc, value.u.posSib2_14_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_15_r16:
        Encode_SIBpos_r16(enc, value.u.posSib2_15_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_16_r16:
        Encode_SIBpos_r16(enc, value.u.posSib2_16_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_17_r16:
        Encode_SIBpos_r16(enc, value.u.posSib2_17_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_18_r16:
        Encode_SIBpos_r16(enc, value.u.posSib2_18_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_19_r16:
        Encode_SIBpos_r16(enc, value.u.posSib2_19_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_20_r16:
        Encode_SIBpos_r16(enc, value.u.posSib2_20_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_21_r16:
        Encode_SIBpos_r16(enc, value.u.posSib2_21_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_22_r16:
        Encode_SIBpos_r16(enc, value.u.posSib2_22_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_23_r16:
        Encode_SIBpos_r16(enc, value.u.posSib2_23_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib3_1_r16:
        Encode_SIBpos_r16(enc, value.u.posSib3_1_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib4_1_r16:
        Encode_SIBpos_r16(enc, value.u.posSib4_1_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib5_1_r16:
        Encode_SIBpos_r16(enc, value.u.posSib5_1_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_1_r16:
        Encode_SIBpos_r16(enc, value.u.posSib6_1_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_2_r16:
        Encode_SIBpos_r16(enc, value.u.posSib6_2_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_3_r16:
        Encode_SIBpos_r16(enc, value.u.posSib6_3_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item(Decoder& dec, PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item& value)
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
        if (extension_index >= 19u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        value.tag = (PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag)(37 + extension_index);
        std::vector<std::uint8_t> open_bytes;
        if (!dec.ReadOpenType(open_bytes)) { goto fail; }
        Decoder sub(open_bytes.data(), open_bytes.size());
        switch (value.tag) {
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_9_v1700: {
            if (Decode_SIBpos_r16(sub, value.u.posSib1_9_v1700) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_10_v1700: {
            if (Decode_SIBpos_r16(sub, value.u.posSib1_10_v1700) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_24_v1700: {
            if (Decode_SIBpos_r16(sub, value.u.posSib2_24_v1700) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_25_v1700: {
            if (Decode_SIBpos_r16(sub, value.u.posSib2_25_v1700) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_4_v1700: {
            if (Decode_SIBpos_r16(sub, value.u.posSib6_4_v1700) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_5_v1700: {
            if (Decode_SIBpos_r16(sub, value.u.posSib6_5_v1700) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_6_v1700: {
            if (Decode_SIBpos_r16(sub, value.u.posSib6_6_v1700) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_17a_v1770: {
            if (Decode_SIBpos_r16(sub, value.u.posSib2_17a_v1770) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_18a_v1770: {
            if (Decode_SIBpos_r16(sub, value.u.posSib2_18a_v1770) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_20a_v1770: {
            if (Decode_SIBpos_r16(sub, value.u.posSib2_20a_v1770) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_11_v1800: {
            if (Decode_SIBpos_r16(sub, value.u.posSib1_11_v1800) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_12_v1800: {
            if (Decode_SIBpos_r16(sub, value.u.posSib1_12_v1800) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_26_v1800: {
            if (Decode_SIBpos_r16(sub, value.u.posSib2_26_v1800) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_27_v1800: {
            if (Decode_SIBpos_r16(sub, value.u.posSib2_27_v1800) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_7_v1800: {
            if (Decode_SIBpos_r16(sub, value.u.posSib6_7_v1800) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib7_1_v1800: {
            if (Decode_SIBpos_r16(sub, value.u.posSib7_1_v1800) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib7_2_v1800: {
            if (Decode_SIBpos_r16(sub, value.u.posSib7_2_v1800) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib7_3_v1800: {
            if (Decode_SIBpos_r16(sub, value.u.posSib7_3_v1800) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib7_4_v1800: {
            if (Decode_SIBpos_r16(sub, value.u.posSib7_4_v1800) != ErrorCode_Ok) { goto fail; }
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
    if (!dec.ReadConstrainedInteger(0, 36, root_index)) {
        goto fail;
    }
    value.tag = (PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag)root_index;
    switch (value.tag) {
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_1_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib1_1_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_2_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib1_2_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_3_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib1_3_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_4_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib1_4_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_5_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib1_5_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_6_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib1_6_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_7_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib1_7_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_8_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib1_8_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_1_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib2_1_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_2_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib2_2_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_3_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib2_3_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_4_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib2_4_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_5_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib2_5_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_6_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib2_6_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_7_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib2_7_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_8_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib2_8_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_9_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib2_9_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_10_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib2_10_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_11_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib2_11_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_12_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib2_12_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_13_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib2_13_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_14_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib2_14_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_15_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib2_15_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_16_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib2_16_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_17_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib2_17_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_18_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib2_18_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_19_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib2_19_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_20_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib2_20_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_21_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib2_21_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_22_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib2_22_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_23_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib2_23_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib3_1_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib3_1_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib4_1_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib4_1_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib5_1_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib5_1_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_1_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib6_1_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_2_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib6_2_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_3_r16: {
        if (Decode_SIBpos_r16(dec, value.u.posSib6_3_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item(PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item& value)
{
    switch (value.tag) {
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_1_r16:
        Free_SIBpos_r16(value.u.posSib1_1_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_2_r16:
        Free_SIBpos_r16(value.u.posSib1_2_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_3_r16:
        Free_SIBpos_r16(value.u.posSib1_3_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_4_r16:
        Free_SIBpos_r16(value.u.posSib1_4_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_5_r16:
        Free_SIBpos_r16(value.u.posSib1_5_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_6_r16:
        Free_SIBpos_r16(value.u.posSib1_6_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_7_r16:
        Free_SIBpos_r16(value.u.posSib1_7_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_8_r16:
        Free_SIBpos_r16(value.u.posSib1_8_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_1_r16:
        Free_SIBpos_r16(value.u.posSib2_1_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_2_r16:
        Free_SIBpos_r16(value.u.posSib2_2_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_3_r16:
        Free_SIBpos_r16(value.u.posSib2_3_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_4_r16:
        Free_SIBpos_r16(value.u.posSib2_4_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_5_r16:
        Free_SIBpos_r16(value.u.posSib2_5_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_6_r16:
        Free_SIBpos_r16(value.u.posSib2_6_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_7_r16:
        Free_SIBpos_r16(value.u.posSib2_7_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_8_r16:
        Free_SIBpos_r16(value.u.posSib2_8_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_9_r16:
        Free_SIBpos_r16(value.u.posSib2_9_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_10_r16:
        Free_SIBpos_r16(value.u.posSib2_10_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_11_r16:
        Free_SIBpos_r16(value.u.posSib2_11_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_12_r16:
        Free_SIBpos_r16(value.u.posSib2_12_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_13_r16:
        Free_SIBpos_r16(value.u.posSib2_13_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_14_r16:
        Free_SIBpos_r16(value.u.posSib2_14_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_15_r16:
        Free_SIBpos_r16(value.u.posSib2_15_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_16_r16:
        Free_SIBpos_r16(value.u.posSib2_16_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_17_r16:
        Free_SIBpos_r16(value.u.posSib2_17_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_18_r16:
        Free_SIBpos_r16(value.u.posSib2_18_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_19_r16:
        Free_SIBpos_r16(value.u.posSib2_19_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_20_r16:
        Free_SIBpos_r16(value.u.posSib2_20_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_21_r16:
        Free_SIBpos_r16(value.u.posSib2_21_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_22_r16:
        Free_SIBpos_r16(value.u.posSib2_22_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_23_r16:
        Free_SIBpos_r16(value.u.posSib2_23_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib3_1_r16:
        Free_SIBpos_r16(value.u.posSib3_1_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib4_1_r16:
        Free_SIBpos_r16(value.u.posSib4_1_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib5_1_r16:
        Free_SIBpos_r16(value.u.posSib5_1_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_1_r16:
        Free_SIBpos_r16(value.u.posSib6_1_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_2_r16:
        Free_SIBpos_r16(value.u.posSib6_2_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_3_r16:
        Free_SIBpos_r16(value.u.posSib6_3_r16);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_9_v1700:
        Free_SIBpos_r16(value.u.posSib1_9_v1700);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_10_v1700:
        Free_SIBpos_r16(value.u.posSib1_10_v1700);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_24_v1700:
        Free_SIBpos_r16(value.u.posSib2_24_v1700);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_25_v1700:
        Free_SIBpos_r16(value.u.posSib2_25_v1700);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_4_v1700:
        Free_SIBpos_r16(value.u.posSib6_4_v1700);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_5_v1700:
        Free_SIBpos_r16(value.u.posSib6_5_v1700);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_6_v1700:
        Free_SIBpos_r16(value.u.posSib6_6_v1700);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_17a_v1770:
        Free_SIBpos_r16(value.u.posSib2_17a_v1770);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_18a_v1770:
        Free_SIBpos_r16(value.u.posSib2_18a_v1770);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_20a_v1770:
        Free_SIBpos_r16(value.u.posSib2_20a_v1770);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_11_v1800:
        Free_SIBpos_r16(value.u.posSib1_11_v1800);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_12_v1800:
        Free_SIBpos_r16(value.u.posSib1_12_v1800);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_26_v1800:
        Free_SIBpos_r16(value.u.posSib2_26_v1800);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_27_v1800:
        Free_SIBpos_r16(value.u.posSib2_27_v1800);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_7_v1800:
        Free_SIBpos_r16(value.u.posSib6_7_v1800);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib7_1_v1800:
        Free_SIBpos_r16(value.u.posSib7_1_v1800);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib7_2_v1800:
        Free_SIBpos_r16(value.u.posSib7_2_v1800);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib7_3_v1800:
        Free_SIBpos_r16(value.u.posSib7_3_v1800);
        break;
    case PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib7_4_v1800:
        Free_SIBpos_r16(value.u.posSib7_4_v1800);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RateMatchPatternGroup_Item：ASN.1 Item；源文件第 9526 行；CHOICE。
// Encode_RateMatchPatternGroup_Item 只读不分配；Decode_RateMatchPatternGroup_Item 可能 malloc（失败时内部已释放并清零）；Free_RateMatchPatternGroup_Item 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RateMatchPatternGroup_Item(Encoder& enc, const RateMatchPatternGroup_Item& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RateMatchPatternGroup_Item_Tag_cellLevel:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.cellLevel), 0, 3);
        break;
    case RateMatchPatternGroup_Item_Tag_bwpLevel:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.bwpLevel), 0, 3);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RateMatchPatternGroup_Item(Decoder& dec, RateMatchPatternGroup_Item& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RateMatchPatternGroup_Item_Tag)root_index;
    switch (value.tag) {
    case RateMatchPatternGroup_Item_Tag_cellLevel: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.cellLevel = (RateMatchPatternId)tmp_value;
        break;
    }
    case RateMatchPatternGroup_Item_Tag_bwpLevel: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.bwpLevel = (RateMatchPatternId)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RateMatchPatternGroup_Item(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RateMatchPatternGroup_Item(RateMatchPatternGroup_Item& value)
{
    switch (value.tag) {
    case RateMatchPatternGroup_Item_Tag_cellLevel:
        break;
    case RateMatchPatternGroup_Item_Tag_bwpLevel:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
