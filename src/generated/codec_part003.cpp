/* ============================================================================
 * src/generated/codec_part003.cpp — 生成的编解码函数
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
// SetupRelease_SL_L2RemoteUE_Config_r17：ASN.1 SetupRelease<SL-L2RemoteUE-Config-r17>；源文件第 874 行；CHOICE。
// Encode_SetupRelease_SL_L2RemoteUE_Config_r17 只读不分配；Decode_SetupRelease_SL_L2RemoteUE_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SL_L2RemoteUE_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SL_L2RemoteUE_Config_r17(Encoder& enc, const SetupRelease_SL_L2RemoteUE_Config_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SL_L2RemoteUE_Config_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_SL_L2RemoteUE_Config_r17_Tag_setup:
        Encode_SL_L2RemoteUE_Config_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SL_L2RemoteUE_Config_r17(Decoder& dec, SetupRelease_SL_L2RemoteUE_Config_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SL_L2RemoteUE_Config_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SL_L2RemoteUE_Config_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SL_L2RemoteUE_Config_r17_Tag_setup: {
        if (Decode_SL_L2RemoteUE_Config_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SL_L2RemoteUE_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SL_L2RemoteUE_Config_r17(SetupRelease_SL_L2RemoteUE_Config_r17& value)
{
    switch (value.tag) {
    case SetupRelease_SL_L2RemoteUE_Config_r17_Tag_release:
        break;
    case SetupRelease_SL_L2RemoteUE_Config_r17_Tag_setup:
        Free_SL_L2RemoteUE_Config_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReestablishment_v1700_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 875 行；空 SEQUENCE{}。
// Encode_RRCReestablishment_v1700_IEs_NonCriticalExtension 只读不分配；Decode_RRCReestablishment_v1700_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_RRCReestablishment_v1700_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReestablishment_v1700_IEs_NonCriticalExtension(Encoder& enc, const RRCReestablishment_v1700_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_RRCReestablishment_v1700_IEs_NonCriticalExtension(Decoder& dec, RRCReestablishment_v1700_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReestablishment_v1700_IEs_NonCriticalExtension(RRCReestablishment_v1700_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReestablishment_v1700_IEs：ASN.1 RRCReestablishment-v1700-IEs；源文件第 873 行；SEQUENCE。
// Encode_RRCReestablishment_v1700_IEs 只读不分配；Decode_RRCReestablishment_v1700_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCReestablishment_v1700_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReestablishment_v1700_IEs(Encoder& enc, const RRCReestablishment_v1700_IEs& value)
{
    enc.WriteBit(value.has_sl_L2RemoteUE_Config_r17);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_sl_L2RemoteUE_Config_r17) {
        Encode_SetupRelease_SL_L2RemoteUE_Config_r17(enc, value.sl_L2RemoteUE_Config_r17);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCReestablishment_v1700_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCReestablishment_v1700_IEs(Decoder& dec, RRCReestablishment_v1700_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_SL_L2RemoteUE_Config_r17(dec, value.sl_L2RemoteUE_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_RRCReestablishment_v1700_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReestablishment_v1700_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReestablishment_v1700_IEs(RRCReestablishment_v1700_IEs& value)
{
    if (value.has_sl_L2RemoteUE_Config_r17) {
        Free_SetupRelease_SL_L2RemoteUE_Config_r17(value.sl_L2RemoteUE_Config_r17);
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCReestablishment_v1700_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReestablishment_IEs：ASN.1 RRCReestablishment-IEs；源文件第 867 行；SEQUENCE。
// Encode_RRCReestablishment_IEs 只读不分配；Decode_RRCReestablishment_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCReestablishment_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReestablishment_IEs(Encoder& enc, const RRCReestablishment_IEs& value)
{
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    enc.WriteConstrainedInteger((std::int64_t)(value.nextHopChainingCount), 0, 7);
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCReestablishment_v1700_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCReestablishment_IEs(Decoder& dec, RRCReestablishment_IEs& value)
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
        value.nextHopChainingCount = (NextHopChainingCount)tmp_value;
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_1) {
        if (Decode_RRCReestablishment_v1700_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReestablishment_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReestablishment_IEs(RRCReestablishment_IEs& value)
{
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCReestablishment_v1700_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReestablishment_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 863 行；空 SEQUENCE{}。
// Encode_RRCReestablishment_CriticalExtensionsFuture 只读不分配；Decode_RRCReestablishment_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_RRCReestablishment_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReestablishment_CriticalExtensionsFuture(Encoder& enc, const RRCReestablishment_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_RRCReestablishment_CriticalExtensionsFuture(Decoder& dec, RRCReestablishment_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReestablishment_CriticalExtensionsFuture(RRCReestablishment_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReestablishment_CriticalExtensions：ASN.1 criticalExtensions；源文件第 861 行；CHOICE。
// Encode_RRCReestablishment_CriticalExtensions 只读不分配；Decode_RRCReestablishment_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_RRCReestablishment_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReestablishment_CriticalExtensions(Encoder& enc, const RRCReestablishment_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RRCReestablishment_CriticalExtensions_Tag_rrcReestablishment:
        Encode_RRCReestablishment_IEs(enc, value.u.rrcReestablishment);
        break;
    case RRCReestablishment_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_RRCReestablishment_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RRCReestablishment_CriticalExtensions(Decoder& dec, RRCReestablishment_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RRCReestablishment_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case RRCReestablishment_CriticalExtensions_Tag_rrcReestablishment: {
        if (Decode_RRCReestablishment_IEs(dec, value.u.rrcReestablishment) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RRCReestablishment_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_RRCReestablishment_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReestablishment_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReestablishment_CriticalExtensions(RRCReestablishment_CriticalExtensions& value)
{
    switch (value.tag) {
    case RRCReestablishment_CriticalExtensions_Tag_rrcReestablishment:
        Free_RRCReestablishment_IEs(value.u.rrcReestablishment);
        break;
    case RRCReestablishment_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_RRCReestablishment_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReestablishment：ASN.1 RRCReestablishment；源文件第 859 行；SEQUENCE。
// Encode_RRCReestablishment 只读不分配；Decode_RRCReestablishment 可能 malloc（失败时内部已释放并清零）；Free_RRCReestablishment 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReestablishment(Encoder& enc, const RRCReestablishment& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.rrc_TransactionIdentifier), 0, 3);
    Encode_RRCReestablishment_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_RRCReestablishment(Decoder& dec, RRCReestablishment& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.rrc_TransactionIdentifier = (RRC_TransactionIdentifier)tmp_value;
    }
    {
        if (Decode_RRCReestablishment_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReestablishment(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReestablishment(RRCReestablishment& value)
{
    Free_RRCReestablishment_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReestablishmentComplete_v1800_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 902 行；空 SEQUENCE{}。
// Encode_RRCReestablishmentComplete_v1800_IEs_NonCriticalExtension 只读不分配；Decode_RRCReestablishmentComplete_v1800_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_RRCReestablishmentComplete_v1800_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReestablishmentComplete_v1800_IEs_NonCriticalExtension(Encoder& enc, const RRCReestablishmentComplete_v1800_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_RRCReestablishmentComplete_v1800_IEs_NonCriticalExtension(Decoder& dec, RRCReestablishmentComplete_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReestablishmentComplete_v1800_IEs_NonCriticalExtension(RRCReestablishmentComplete_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReestablishmentComplete_v1800_IEs：ASN.1 RRCReestablishmentComplete-v1800-IEs；源文件第 899 行；SEQUENCE。
// Encode_RRCReestablishmentComplete_v1800_IEs 只读不分配；Decode_RRCReestablishmentComplete_v1800_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCReestablishmentComplete_v1800_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReestablishmentComplete_v1800_IEs(Encoder& enc, const RRCReestablishmentComplete_v1800_IEs& value)
{
    enc.WriteBit(value.has_flightPathInfoAvailable_r18);
    enc.WriteBit(value.has_measConfigReportAppLayerAvailable_r18);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_flightPathInfoAvailable_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.flightPathInfoAvailable_r18), 0, 0);
    }
    if (value.has_measConfigReportAppLayerAvailable_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.measConfigReportAppLayerAvailable_r18), 0, 0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCReestablishmentComplete_v1800_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCReestablishmentComplete_v1800_IEs(Decoder& dec, RRCReestablishmentComplete_v1800_IEs& value)
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
        value.flightPathInfoAvailable_r18 = (RRCReestablishmentComplete_v1800_IEs_FlightPathInfoAvailable_r18)0;
    }
    if (present_1) {
        value.measConfigReportAppLayerAvailable_r18 = (RRCReestablishmentComplete_v1800_IEs_MeasConfigReportAppLayerAvailable_r18)0;
    }
    if (present_2) {
        if (Decode_RRCReestablishmentComplete_v1800_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReestablishmentComplete_v1800_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReestablishmentComplete_v1800_IEs(RRCReestablishmentComplete_v1800_IEs& value)
{
    if (value.has_flightPathInfoAvailable_r18) {
    }
    if (value.has_measConfigReportAppLayerAvailable_r18) {
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCReestablishmentComplete_v1800_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UE_MeasurementsAvailable_r16_ExtGroup1：ASN.1 UE_MeasurementsAvailable_r16_ExtGroup1；源文件第 21824 行；扩展添加组 [[ ]]。
// Encode_UE_MeasurementsAvailable_r16_ExtGroup1 只读不分配；Decode_UE_MeasurementsAvailable_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_UE_MeasurementsAvailable_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UE_MeasurementsAvailable_r16_ExtGroup1(Encoder& enc, const UE_MeasurementsAvailable_r16_ExtGroup1& value)
{
    enc.WriteBit(value.has_successHO_InfoAvailable_r17);
    enc.WriteBit(value.has_sigLogMeasConfigAvailable_r17);
    if (value.has_successHO_InfoAvailable_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.successHO_InfoAvailable_r17), 0, 0);
    }
    if (value.has_sigLogMeasConfigAvailable_r17) {
        enc.WriteBool(value.sigLogMeasConfigAvailable_r17);
    }
    return enc.Error();
}

ErrorCode Decode_UE_MeasurementsAvailable_r16_ExtGroup1(Decoder& dec, UE_MeasurementsAvailable_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.successHO_InfoAvailable_r17 = (UE_MeasurementsAvailable_r16_ExtGroup1_SuccessHO_InfoAvailable_r17)0;
    }
    if (present_1) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.sigLogMeasConfigAvailable_r17 = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_MeasurementsAvailable_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_MeasurementsAvailable_r16_ExtGroup1(UE_MeasurementsAvailable_r16_ExtGroup1& value)
{
    if (value.has_successHO_InfoAvailable_r17) {
    }
    if (value.has_sigLogMeasConfigAvailable_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UE_MeasurementsAvailable_r16_ExtGroup2：ASN.1 UE_MeasurementsAvailable_r16_ExtGroup2；源文件第 21828 行；扩展添加组 [[ ]]。
// Encode_UE_MeasurementsAvailable_r16_ExtGroup2 只读不分配；Decode_UE_MeasurementsAvailable_r16_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_UE_MeasurementsAvailable_r16_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UE_MeasurementsAvailable_r16_ExtGroup2(Encoder& enc, const UE_MeasurementsAvailable_r16_ExtGroup2& value)
{
    enc.WriteBit(value.has_successPSCell_InfoAvailable_r18);
    if (value.has_successPSCell_InfoAvailable_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.successPSCell_InfoAvailable_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_UE_MeasurementsAvailable_r16_ExtGroup2(Decoder& dec, UE_MeasurementsAvailable_r16_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.successPSCell_InfoAvailable_r18 = (UE_MeasurementsAvailable_r16_ExtGroup2_SuccessPSCell_InfoAvailable_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_MeasurementsAvailable_r16_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_MeasurementsAvailable_r16_ExtGroup2(UE_MeasurementsAvailable_r16_ExtGroup2& value)
{
    if (value.has_successPSCell_InfoAvailable_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UE_MeasurementsAvailable_r16：ASN.1 UE-MeasurementsAvailable-r16；源文件第 21817 行；SEQUENCE。
// Encode_UE_MeasurementsAvailable_r16 只读不分配；Decode_UE_MeasurementsAvailable_r16 可能 malloc（失败时内部已释放并清零）；Free_UE_MeasurementsAvailable_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UE_MeasurementsAvailable_r16(Encoder& enc, const UE_MeasurementsAvailable_r16& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_logMeasAvailable_r16);
    enc.WriteBit(value.has_logMeasAvailableBT_r16);
    enc.WriteBit(value.has_logMeasAvailableWLAN_r16);
    enc.WriteBit(value.has_connEstFailInfoAvailable_r16);
    enc.WriteBit(value.has_rlf_InfoAvailable_r16);
    if (value.has_logMeasAvailable_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.logMeasAvailable_r16), 0, 0);
    }
    if (value.has_logMeasAvailableBT_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.logMeasAvailableBT_r16), 0, 0);
    }
    if (value.has_logMeasAvailableWLAN_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.logMeasAvailableWLAN_r16), 0, 0);
    }
    if (value.has_connEstFailInfoAvailable_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.connEstFailInfoAvailable_r16), 0, 0);
    }
    if (value.has_rlf_InfoAvailable_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rlf_InfoAvailable_r16), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_UE_MeasurementsAvailable_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_UE_MeasurementsAvailable_r16_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_UE_MeasurementsAvailable_r16(Decoder& dec, UE_MeasurementsAvailable_r16& value)
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
        value.logMeasAvailable_r16 = (UE_MeasurementsAvailable_r16_LogMeasAvailable_r16)0;
    }
    if (present_1) {
        value.logMeasAvailableBT_r16 = (UE_MeasurementsAvailable_r16_LogMeasAvailableBT_r16)0;
    }
    if (present_2) {
        value.logMeasAvailableWLAN_r16 = (UE_MeasurementsAvailable_r16_LogMeasAvailableWLAN_r16)0;
    }
    if (present_3) {
        value.connEstFailInfoAvailable_r16 = (UE_MeasurementsAvailable_r16_ConnEstFailInfoAvailable_r16)0;
    }
    if (present_4) {
        value.rlf_InfoAvailable_r16 = (UE_MeasurementsAvailable_r16_Rlf_InfoAvailable_r16)0;
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
    if (Decode_UE_MeasurementsAvailable_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_UE_MeasurementsAvailable_r16_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_UE_MeasurementsAvailable_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_MeasurementsAvailable_r16(UE_MeasurementsAvailable_r16& value)
{
    if (value.has_logMeasAvailable_r16) {
    }
    if (value.has_logMeasAvailableBT_r16) {
    }
    if (value.has_logMeasAvailableWLAN_r16) {
    }
    if (value.has_connEstFailInfoAvailable_r16) {
    }
    if (value.has_rlf_InfoAvailable_r16) {
    }
    if (value.has_extGroup1) {
        Free_UE_MeasurementsAvailable_r16_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_UE_MeasurementsAvailable_r16_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReestablishmentComplete_v1610_IEs：ASN.1 RRCReestablishmentComplete-v1610-IEs；源文件第 894 行；SEQUENCE。
// Encode_RRCReestablishmentComplete_v1610_IEs 只读不分配；Decode_RRCReestablishmentComplete_v1610_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCReestablishmentComplete_v1610_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReestablishmentComplete_v1610_IEs(Encoder& enc, const RRCReestablishmentComplete_v1610_IEs& value)
{
    enc.WriteBit(value.has_ue_MeasurementsAvailable_r16);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_ue_MeasurementsAvailable_r16) {
        Encode_UE_MeasurementsAvailable_r16(enc, value.ue_MeasurementsAvailable_r16);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCReestablishmentComplete_v1800_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCReestablishmentComplete_v1610_IEs(Decoder& dec, RRCReestablishmentComplete_v1610_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_UE_MeasurementsAvailable_r16(dec, value.ue_MeasurementsAvailable_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_RRCReestablishmentComplete_v1800_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReestablishmentComplete_v1610_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReestablishmentComplete_v1610_IEs(RRCReestablishmentComplete_v1610_IEs& value)
{
    if (value.has_ue_MeasurementsAvailable_r16) {
        Free_UE_MeasurementsAvailable_r16(value.ue_MeasurementsAvailable_r16);
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCReestablishmentComplete_v1800_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReestablishmentComplete_IEs：ASN.1 RRCReestablishmentComplete-IEs；源文件第 889 行；SEQUENCE。
// Encode_RRCReestablishmentComplete_IEs 只读不分配；Decode_RRCReestablishmentComplete_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCReestablishmentComplete_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReestablishmentComplete_IEs(Encoder& enc, const RRCReestablishmentComplete_IEs& value)
{
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCReestablishmentComplete_v1610_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCReestablishmentComplete_IEs(Decoder& dec, RRCReestablishmentComplete_IEs& value)
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
        if (Decode_RRCReestablishmentComplete_v1610_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReestablishmentComplete_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReestablishmentComplete_IEs(RRCReestablishmentComplete_IEs& value)
{
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCReestablishmentComplete_v1610_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReestablishmentComplete_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 885 行；空 SEQUENCE{}。
// Encode_RRCReestablishmentComplete_CriticalExtensionsFuture 只读不分配；Decode_RRCReestablishmentComplete_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_RRCReestablishmentComplete_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReestablishmentComplete_CriticalExtensionsFuture(Encoder& enc, const RRCReestablishmentComplete_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_RRCReestablishmentComplete_CriticalExtensionsFuture(Decoder& dec, RRCReestablishmentComplete_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReestablishmentComplete_CriticalExtensionsFuture(RRCReestablishmentComplete_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReestablishmentComplete_CriticalExtensions：ASN.1 criticalExtensions；源文件第 883 行；CHOICE。
// Encode_RRCReestablishmentComplete_CriticalExtensions 只读不分配；Decode_RRCReestablishmentComplete_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_RRCReestablishmentComplete_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReestablishmentComplete_CriticalExtensions(Encoder& enc, const RRCReestablishmentComplete_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RRCReestablishmentComplete_CriticalExtensions_Tag_rrcReestablishmentComplete:
        Encode_RRCReestablishmentComplete_IEs(enc, value.u.rrcReestablishmentComplete);
        break;
    case RRCReestablishmentComplete_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_RRCReestablishmentComplete_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RRCReestablishmentComplete_CriticalExtensions(Decoder& dec, RRCReestablishmentComplete_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RRCReestablishmentComplete_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case RRCReestablishmentComplete_CriticalExtensions_Tag_rrcReestablishmentComplete: {
        if (Decode_RRCReestablishmentComplete_IEs(dec, value.u.rrcReestablishmentComplete) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RRCReestablishmentComplete_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_RRCReestablishmentComplete_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReestablishmentComplete_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReestablishmentComplete_CriticalExtensions(RRCReestablishmentComplete_CriticalExtensions& value)
{
    switch (value.tag) {
    case RRCReestablishmentComplete_CriticalExtensions_Tag_rrcReestablishmentComplete:
        Free_RRCReestablishmentComplete_IEs(value.u.rrcReestablishmentComplete);
        break;
    case RRCReestablishmentComplete_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_RRCReestablishmentComplete_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReestablishmentComplete：ASN.1 RRCReestablishmentComplete；源文件第 881 行；SEQUENCE。
// Encode_RRCReestablishmentComplete 只读不分配；Decode_RRCReestablishmentComplete 可能 malloc（失败时内部已释放并清零）；Free_RRCReestablishmentComplete 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReestablishmentComplete(Encoder& enc, const RRCReestablishmentComplete& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.rrc_TransactionIdentifier), 0, 3);
    Encode_RRCReestablishmentComplete_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_RRCReestablishmentComplete(Decoder& dec, RRCReestablishmentComplete& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.rrc_TransactionIdentifier = (RRC_TransactionIdentifier)tmp_value;
    }
    {
        if (Decode_RRCReestablishmentComplete_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReestablishmentComplete(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReestablishmentComplete(RRCReestablishmentComplete& value)
{
    Free_RRCReestablishmentComplete_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ReestabUE_Identity：ASN.1 ReestabUE-Identity；源文件第 919 行；SEQUENCE。
// Encode_ReestabUE_Identity 只读不分配；Decode_ReestabUE_Identity 可能 malloc（失败时内部已释放并清零）；Free_ReestabUE_Identity 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ReestabUE_Identity(Encoder& enc, const ReestabUE_Identity& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.c_RNTI), 0, 65535);
    enc.WriteConstrainedInteger((std::int64_t)(value.physCellId), 0, 1007);
    enc.WriteFixedBitString(value.shortMAC_I.bytes, value.shortMAC_I.bitLength, 16, 16);
    return enc.Error();
}

ErrorCode Decode_ReestabUE_Identity(Decoder& dec, ReestabUE_Identity& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.c_RNTI = (RNTI_Value)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
        value.physCellId = (PhysCellId)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.shortMAC_I.bytes = string_bytes;
        value.shortMAC_I.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReestabUE_Identity(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReestabUE_Identity(ReestabUE_Identity& value)
{
    std::free(value.shortMAC_I.bytes);
    value.shortMAC_I.bytes = nullptr;
    value.shortMAC_I.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReestablishmentRequest_IEs：ASN.1 RRCReestablishmentRequest-IEs；源文件第 913 行；SEQUENCE。
// Encode_RRCReestablishmentRequest_IEs 只读不分配；Decode_RRCReestablishmentRequest_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCReestablishmentRequest_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReestablishmentRequest_IEs(Encoder& enc, const RRCReestablishmentRequest_IEs& value)
{
    Encode_ReestabUE_Identity(enc, value.ue_Identity);
    enc.WriteConstrainedInteger((std::int64_t)(value.reestablishmentCause), 0, 3);
    enc.WriteFixedBitString(value.spare.bytes, value.spare.bitLength, 1, 1);
    return enc.Error();
}

ErrorCode Decode_RRCReestablishmentRequest_IEs(Decoder& dec, RRCReestablishmentRequest_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_ReestabUE_Identity(dec, value.ue_Identity) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.reestablishmentCause = (ReestablishmentCause)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 1)) { goto fail; }
        string_length = 1;
        value.spare.bytes = string_bytes;
        value.spare.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReestablishmentRequest_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReestablishmentRequest_IEs(RRCReestablishmentRequest_IEs& value)
{
    Free_ReestabUE_Identity(value.ue_Identity);
    std::free(value.spare.bytes);
    value.spare.bytes = nullptr;
    value.spare.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReestablishmentRequest：ASN.1 RRCReestablishmentRequest；源文件第 909 行；SEQUENCE。
// Encode_RRCReestablishmentRequest 只读不分配；Decode_RRCReestablishmentRequest 可能 malloc（失败时内部已释放并清零）；Free_RRCReestablishmentRequest 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReestablishmentRequest(Encoder& enc, const RRCReestablishmentRequest& value)
{
    Encode_RRCReestablishmentRequest_IEs(enc, value.rrcReestablishmentRequest);
    return enc.Error();
}

ErrorCode Decode_RRCReestablishmentRequest(Decoder& dec, RRCReestablishmentRequest& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_RRCReestablishmentRequest_IEs(dec, value.rrcReestablishmentRequest) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReestablishmentRequest(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReestablishmentRequest(RRCReestablishmentRequest& value)
{
    Free_RRCReestablishmentRequest_IEs(value.rrcReestablishmentRequest);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CandidateServingFreqRangeListNR_r18：ASN.1 CandidateServingFreqRangeListNR-r18；源文件第 21765 行；SEQUENCE OF。
// Encode_CandidateServingFreqRangeListNR_r18 只读不分配；Decode_CandidateServingFreqRangeListNR_r18 可能 malloc（失败时内部已释放并清零）；Free_CandidateServingFreqRangeListNR_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CandidateServingFreqRangeListNR_r18(Encoder& enc, const CandidateServingFreqRangeListNR_r18& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 128u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_CandidateServingFreqRangeNR_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_CandidateServingFreqRangeListNR_r18(Decoder& dec, CandidateServingFreqRangeListNR_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 128u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 128u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (CandidateServingFreqRangeNR_r18*)std::malloc((std::size_t)value.count * sizeof(CandidateServingFreqRangeNR_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(CandidateServingFreqRangeNR_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_CandidateServingFreqRangeNR_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_CandidateServingFreqRangeListNR_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CandidateServingFreqRangeListNR_r18(CandidateServingFreqRangeListNR_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_CandidateServingFreqRangeNR_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IDC_FDM_AssistanceConfig_r18：ASN.1 IDC-FDM-AssistanceConfig-r18；源文件第 21760 行；SEQUENCE。
// Encode_IDC_FDM_AssistanceConfig_r18 只读不分配；Decode_IDC_FDM_AssistanceConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_IDC_FDM_AssistanceConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IDC_FDM_AssistanceConfig_r18(Encoder& enc, const IDC_FDM_AssistanceConfig_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_candidateServingFreqRangeListNR_r18);
    if (value.has_candidateServingFreqRangeListNR_r18) {
        Encode_CandidateServingFreqRangeListNR_r18(enc, value.candidateServingFreqRangeListNR_r18);
    }
    return enc.Error();
}

ErrorCode Decode_IDC_FDM_AssistanceConfig_r18(Decoder& dec, IDC_FDM_AssistanceConfig_r18& value)
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
        if (Decode_CandidateServingFreqRangeListNR_r18(dec, value.candidateServingFreqRangeListNR_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_IDC_FDM_AssistanceConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IDC_FDM_AssistanceConfig_r18(IDC_FDM_AssistanceConfig_r18& value)
{
    if (value.has_candidateServingFreqRangeListNR_r18) {
        Free_CandidateServingFreqRangeListNR_r18(value.candidateServingFreqRangeListNR_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_IDC_FDM_AssistanceConfig_r18：ASN.1 SetupRelease<IDC-FDM-AssistanceConfig-r18>；源文件第 21636 行；CHOICE。
// Encode_SetupRelease_IDC_FDM_AssistanceConfig_r18 只读不分配；Decode_SetupRelease_IDC_FDM_AssistanceConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_IDC_FDM_AssistanceConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_IDC_FDM_AssistanceConfig_r18(Encoder& enc, const SetupRelease_IDC_FDM_AssistanceConfig_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_IDC_FDM_AssistanceConfig_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_IDC_FDM_AssistanceConfig_r18_Tag_setup:
        Encode_IDC_FDM_AssistanceConfig_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_IDC_FDM_AssistanceConfig_r18(Decoder& dec, SetupRelease_IDC_FDM_AssistanceConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_IDC_FDM_AssistanceConfig_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_IDC_FDM_AssistanceConfig_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_IDC_FDM_AssistanceConfig_r18_Tag_setup: {
        if (Decode_IDC_FDM_AssistanceConfig_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_IDC_FDM_AssistanceConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_IDC_FDM_AssistanceConfig_r18(SetupRelease_IDC_FDM_AssistanceConfig_r18& value)
{
    switch (value.tag) {
    case SetupRelease_IDC_FDM_AssistanceConfig_r18_Tag_release:
        break;
    case SetupRelease_IDC_FDM_AssistanceConfig_r18_Tag_setup:
        Free_IDC_FDM_AssistanceConfig_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IDC_AssistanceConfig_v1800：ASN.1 IDC-AssistanceConfig-v1800；源文件第 21635 行；SEQUENCE。
// Encode_IDC_AssistanceConfig_v1800 只读不分配；Decode_IDC_AssistanceConfig_v1800 可能 malloc（失败时内部已释放并清零）；Free_IDC_AssistanceConfig_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IDC_AssistanceConfig_v1800(Encoder& enc, const IDC_AssistanceConfig_v1800& value)
{
    enc.WriteBit(value.has_idc_FDM_AssistanceConfig_r18);
    enc.WriteBit(value.has_idc_TDM_AssistanceConfig_r18);
    if (value.has_idc_FDM_AssistanceConfig_r18) {
        Encode_SetupRelease_IDC_FDM_AssistanceConfig_r18(enc, value.idc_FDM_AssistanceConfig_r18);
    }
    if (value.has_idc_TDM_AssistanceConfig_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.idc_TDM_AssistanceConfig_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_IDC_AssistanceConfig_v1800(Decoder& dec, IDC_AssistanceConfig_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_IDC_FDM_AssistanceConfig_r18(dec, value.idc_FDM_AssistanceConfig_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.idc_TDM_AssistanceConfig_r18 = (IDC_AssistanceConfig_v1800_Idc_TDM_AssistanceConfig_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_IDC_AssistanceConfig_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IDC_AssistanceConfig_v1800(IDC_AssistanceConfig_v1800& value)
{
    if (value.has_idc_FDM_AssistanceConfig_r18) {
        Free_SetupRelease_IDC_FDM_AssistanceConfig_r18(value.idc_FDM_AssistanceConfig_r18);
    }
    if (value.has_idc_TDM_AssistanceConfig_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_IDC_AssistanceConfig_v1800：ASN.1 SetupRelease<IDC-AssistanceConfig-v1800>；源文件第 21624 行；CHOICE。
// Encode_SetupRelease_IDC_AssistanceConfig_v1800 只读不分配；Decode_SetupRelease_IDC_AssistanceConfig_v1800 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_IDC_AssistanceConfig_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_IDC_AssistanceConfig_v1800(Encoder& enc, const SetupRelease_IDC_AssistanceConfig_v1800& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_IDC_AssistanceConfig_v1800_Tag_release:
        (void)0;
        break;
    case SetupRelease_IDC_AssistanceConfig_v1800_Tag_setup:
        Encode_IDC_AssistanceConfig_v1800(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_IDC_AssistanceConfig_v1800(Decoder& dec, SetupRelease_IDC_AssistanceConfig_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_IDC_AssistanceConfig_v1800_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_IDC_AssistanceConfig_v1800_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_IDC_AssistanceConfig_v1800_Tag_setup: {
        if (Decode_IDC_AssistanceConfig_v1800(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_IDC_AssistanceConfig_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_IDC_AssistanceConfig_v1800(SetupRelease_IDC_AssistanceConfig_v1800& value)
{
    switch (value.tag) {
    case SetupRelease_IDC_AssistanceConfig_v1800_Tag_release:
        break;
    case SetupRelease_IDC_AssistanceConfig_v1800_Tag_setup:
        Free_IDC_AssistanceConfig_v1800(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MultiRx_PreferenceReportingConfigFR2_r18：ASN.1 MultiRx-PreferenceReportingConfigFR2-r18；源文件第 21640 行；SEQUENCE。
// Encode_MultiRx_PreferenceReportingConfigFR2_r18 只读不分配；Decode_MultiRx_PreferenceReportingConfigFR2_r18 可能 malloc（失败时内部已释放并清零）；Free_MultiRx_PreferenceReportingConfigFR2_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MultiRx_PreferenceReportingConfigFR2_r18(Encoder& enc, const MultiRx_PreferenceReportingConfigFR2_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.multiRx_PreferenceReportingConfigFR2ProhibitTimer_r18), 0, 15);
    return enc.Error();
}

ErrorCode Decode_MultiRx_PreferenceReportingConfigFR2_r18(Decoder& dec, MultiRx_PreferenceReportingConfigFR2_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.multiRx_PreferenceReportingConfigFR2ProhibitTimer_r18 = (MultiRx_PreferenceReportingConfigFR2_r18_MultiRx_PreferenceReportingConfigFR2ProhibitTimer_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MultiRx_PreferenceReportingConfigFR2_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MultiRx_PreferenceReportingConfigFR2_r18(MultiRx_PreferenceReportingConfigFR2_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18：ASN.1 SetupRelease<MultiRx-PreferenceReportingConfigFR2-r18>；源文件第 21625 行；CHOICE。
// Encode_SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18 只读不分配；Decode_SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18(Encoder& enc, const SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18_Tag_setup:
        Encode_MultiRx_PreferenceReportingConfigFR2_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18(Decoder& dec, SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18_Tag_setup: {
        if (Decode_MultiRx_PreferenceReportingConfigFR2_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18(SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18& value)
{
    switch (value.tag) {
    case SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18_Tag_release:
        break;
    case SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18_Tag_setup:
        Free_MultiRx_PreferenceReportingConfigFR2_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UL_TrafficInfoReportingConfig_r18：ASN.1 UL-TrafficInfoReportingConfig-r18；源文件第 21774 行；SEQUENCE。
// Encode_UL_TrafficInfoReportingConfig_r18 只读不分配；Decode_UL_TrafficInfoReportingConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_UL_TrafficInfoReportingConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UL_TrafficInfoReportingConfig_r18(Encoder& enc, const UL_TrafficInfoReportingConfig_r18& value)
{
enc.WriteConstrainedLength(value.pdu_SessionsToReportUL_TrafficInfoList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pdu_SessionsToReportUL_TrafficInfoList_r18_count; ++i) {
    Encode_PDU_SessionToReportUL_TrafficInfo_r18(enc, value.pdu_SessionsToReportUL_TrafficInfoList_r18_items[i]);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.ul_TrafficInfoProhibitTimer_r18), 0, 15);
    return enc.Error();
}

ErrorCode Decode_UL_TrafficInfoReportingConfig_r18(Decoder& dec, UL_TrafficInfoReportingConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.pdu_SessionsToReportUL_TrafficInfoList_r18_count)) { goto fail; }
if (value.pdu_SessionsToReportUL_TrafficInfoList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pdu_SessionsToReportUL_TrafficInfoList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pdu_SessionsToReportUL_TrafficInfoList_r18_count > 0u) {
    value.pdu_SessionsToReportUL_TrafficInfoList_r18_items = (PDU_SessionToReportUL_TrafficInfo_r18*)std::malloc((std::size_t)value.pdu_SessionsToReportUL_TrafficInfoList_r18_count * sizeof(PDU_SessionToReportUL_TrafficInfo_r18));
    if (value.pdu_SessionsToReportUL_TrafficInfoList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pdu_SessionsToReportUL_TrafficInfoList_r18_items, 0, (std::size_t)value.pdu_SessionsToReportUL_TrafficInfoList_r18_count * sizeof(PDU_SessionToReportUL_TrafficInfo_r18));
}
for (std::uint32_t i = 0; i < value.pdu_SessionsToReportUL_TrafficInfoList_r18_count; ++i) {
    if (Decode_PDU_SessionToReportUL_TrafficInfo_r18(dec, value.pdu_SessionsToReportUL_TrafficInfoList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.ul_TrafficInfoProhibitTimer_r18 = (UL_TrafficInfoReportingConfig_r18_Ul_TrafficInfoProhibitTimer_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UL_TrafficInfoReportingConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UL_TrafficInfoReportingConfig_r18(UL_TrafficInfoReportingConfig_r18& value)
{
    if (value.pdu_SessionsToReportUL_TrafficInfoList_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.pdu_SessionsToReportUL_TrafficInfoList_r18_count; ++i) {
            Free_PDU_SessionToReportUL_TrafficInfo_r18(value.pdu_SessionsToReportUL_TrafficInfoList_r18_items[i]);
        }
        std::free(value.pdu_SessionsToReportUL_TrafficInfoList_r18_items);
        value.pdu_SessionsToReportUL_TrafficInfoList_r18_items = nullptr;
    }
    value.pdu_SessionsToReportUL_TrafficInfoList_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_UL_TrafficInfoReportingConfig_r18：ASN.1 SetupRelease<UL-TrafficInfoReportingConfig-r18>；源文件第 21627 行；CHOICE。
// Encode_SetupRelease_UL_TrafficInfoReportingConfig_r18 只读不分配；Decode_SetupRelease_UL_TrafficInfoReportingConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_UL_TrafficInfoReportingConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_UL_TrafficInfoReportingConfig_r18(Encoder& enc, const SetupRelease_UL_TrafficInfoReportingConfig_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_UL_TrafficInfoReportingConfig_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_UL_TrafficInfoReportingConfig_r18_Tag_setup:
        Encode_UL_TrafficInfoReportingConfig_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_UL_TrafficInfoReportingConfig_r18(Decoder& dec, SetupRelease_UL_TrafficInfoReportingConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_UL_TrafficInfoReportingConfig_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_UL_TrafficInfoReportingConfig_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_UL_TrafficInfoReportingConfig_r18_Tag_setup: {
        if (Decode_UL_TrafficInfoReportingConfig_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_UL_TrafficInfoReportingConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_UL_TrafficInfoReportingConfig_r18(SetupRelease_UL_TrafficInfoReportingConfig_r18& value)
{
    switch (value.tag) {
    case SetupRelease_UL_TrafficInfoReportingConfig_r18_Tag_release:
        break;
    case SetupRelease_UL_TrafficInfoReportingConfig_r18_Tag_setup:
        Free_UL_TrafficInfoReportingConfig_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SuccessPSCell_Config_r18：ASN.1 SuccessPSCell-Config-r18；源文件第 21672 行；SEQUENCE。
// Encode_SuccessPSCell_Config_r18 只读不分配；Decode_SuccessPSCell_Config_r18 可能 malloc（失败时内部已释放并清零）；Free_SuccessPSCell_Config_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SuccessPSCell_Config_r18(Encoder& enc, const SuccessPSCell_Config_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_thresholdPercentageT304_SCG_r18);
    enc.WriteBit(value.has_thresholdPercentageT310_SCG_r18);
    enc.WriteBit(value.has_thresholdPercentageT312_SCG_r18);
    if (value.has_thresholdPercentageT304_SCG_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.thresholdPercentageT304_SCG_r18), 0, 7);
    }
    if (value.has_thresholdPercentageT310_SCG_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.thresholdPercentageT310_SCG_r18), 0, 7);
    }
    if (value.has_thresholdPercentageT312_SCG_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.thresholdPercentageT312_SCG_r18), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_SuccessPSCell_Config_r18(Decoder& dec, SuccessPSCell_Config_r18& value)
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
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.thresholdPercentageT304_SCG_r18 = (SuccessPSCell_Config_r18_ThresholdPercentageT304_SCG_r18)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.thresholdPercentageT310_SCG_r18 = (SuccessPSCell_Config_r18_ThresholdPercentageT310_SCG_r18)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.thresholdPercentageT312_SCG_r18 = (SuccessPSCell_Config_r18_ThresholdPercentageT312_SCG_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SuccessPSCell_Config_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SuccessPSCell_Config_r18(SuccessPSCell_Config_r18& value)
{
    if (value.has_thresholdPercentageT304_SCG_r18) {
    }
    if (value.has_thresholdPercentageT310_SCG_r18) {
    }
    if (value.has_thresholdPercentageT312_SCG_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SuccessPSCell_Config_r18：ASN.1 SetupRelease<SuccessPSCell-Config-r18>；源文件第 21629 行；CHOICE。
// Encode_SetupRelease_SuccessPSCell_Config_r18 只读不分配；Decode_SetupRelease_SuccessPSCell_Config_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SuccessPSCell_Config_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SuccessPSCell_Config_r18(Encoder& enc, const SetupRelease_SuccessPSCell_Config_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SuccessPSCell_Config_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_SuccessPSCell_Config_r18_Tag_setup:
        Encode_SuccessPSCell_Config_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SuccessPSCell_Config_r18(Decoder& dec, SetupRelease_SuccessPSCell_Config_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SuccessPSCell_Config_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SuccessPSCell_Config_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SuccessPSCell_Config_r18_Tag_setup: {
        if (Decode_SuccessPSCell_Config_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SuccessPSCell_Config_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SuccessPSCell_Config_r18(SetupRelease_SuccessPSCell_Config_r18& value)
{
    switch (value.tag) {
    case SetupRelease_SuccessPSCell_Config_r18_Tag_release:
        break;
    case SetupRelease_SuccessPSCell_Config_r18_Tag_setup:
        Free_SuccessPSCell_Config_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MUSIM_CandidateBandList_r18：ASN.1 MUSIM-CandidateBandList-r18；源文件第 21662 行；SEQUENCE OF。
// Encode_MUSIM_CandidateBandList_r18 只读不分配；Decode_MUSIM_CandidateBandList_r18 可能 malloc（失败时内部已释放并清零）；Free_MUSIM_CandidateBandList_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MUSIM_CandidateBandList_r18(Encoder& enc, const MUSIM_CandidateBandList_r18& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 1, 1024);
    }
    return enc.Error();
}

ErrorCode Decode_MUSIM_CandidateBandList_r18(Decoder& dec, MUSIM_CandidateBandList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (FreqBandIndicatorNR*)std::malloc((std::size_t)value.count * sizeof(FreqBandIndicatorNR));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(FreqBandIndicatorNR));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 1024, tmp_value)) { goto fail; }
    value.items[i] = (FreqBandIndicatorNR)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_MUSIM_CandidateBandList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MUSIM_CandidateBandList_r18(MUSIM_CandidateBandList_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MUSIM_CapabilityRestrictionConfig_r18：ASN.1 MUSIM-CapabilityRestrictionConfig-r18；源文件第 21656 行；SEQUENCE。
// Encode_MUSIM_CapabilityRestrictionConfig_r18 只读不分配；Decode_MUSIM_CapabilityRestrictionConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_MUSIM_CapabilityRestrictionConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MUSIM_CapabilityRestrictionConfig_r18(Encoder& enc, const MUSIM_CapabilityRestrictionConfig_r18& value)
{
    enc.WriteBit(value.has_musim_CandidateBandList_r18);
    if (value.has_musim_CandidateBandList_r18) {
        Encode_MUSIM_CandidateBandList_r18(enc, value.musim_CandidateBandList_r18);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.musim_WaitTimer_r18), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.musim_ProhibitTimer_r18), 0, 7);
    return enc.Error();
}

ErrorCode Decode_MUSIM_CapabilityRestrictionConfig_r18(Decoder& dec, MUSIM_CapabilityRestrictionConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_MUSIM_CandidateBandList_r18(dec, value.musim_CandidateBandList_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.musim_WaitTimer_r18 = (MUSIM_CapabilityRestrictionConfig_r18_Musim_WaitTimer_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.musim_ProhibitTimer_r18 = (MUSIM_CapabilityRestrictionConfig_r18_Musim_ProhibitTimer_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MUSIM_CapabilityRestrictionConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MUSIM_CapabilityRestrictionConfig_r18(MUSIM_CapabilityRestrictionConfig_r18& value)
{
    if (value.has_musim_CandidateBandList_r18) {
        Free_MUSIM_CandidateBandList_r18(value.musim_CandidateBandList_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_MUSIM_CapabilityRestrictionConfig_r18：ASN.1 SetupRelease<MUSIM-CapabilityRestrictionConfig-r18>；源文件第 21632 行；CHOICE。
// Encode_SetupRelease_MUSIM_CapabilityRestrictionConfig_r18 只读不分配；Decode_SetupRelease_MUSIM_CapabilityRestrictionConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_MUSIM_CapabilityRestrictionConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_MUSIM_CapabilityRestrictionConfig_r18(Encoder& enc, const SetupRelease_MUSIM_CapabilityRestrictionConfig_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_MUSIM_CapabilityRestrictionConfig_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_MUSIM_CapabilityRestrictionConfig_r18_Tag_setup:
        Encode_MUSIM_CapabilityRestrictionConfig_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_MUSIM_CapabilityRestrictionConfig_r18(Decoder& dec, SetupRelease_MUSIM_CapabilityRestrictionConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_MUSIM_CapabilityRestrictionConfig_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_MUSIM_CapabilityRestrictionConfig_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_MUSIM_CapabilityRestrictionConfig_r18_Tag_setup: {
        if (Decode_MUSIM_CapabilityRestrictionConfig_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_MUSIM_CapabilityRestrictionConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_MUSIM_CapabilityRestrictionConfig_r18(SetupRelease_MUSIM_CapabilityRestrictionConfig_r18& value)
{
    switch (value.tag) {
    case SetupRelease_MUSIM_CapabilityRestrictionConfig_r18_Tag_release:
        break;
    case SetupRelease_MUSIM_CapabilityRestrictionConfig_r18_Tag_setup:
        Free_MUSIM_CapabilityRestrictionConfig_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// OtherConfig_v1800：ASN.1 OtherConfig-v1800；源文件第 21623 行；SEQUENCE。
// Encode_OtherConfig_v1800 只读不分配；Decode_OtherConfig_v1800 可能 malloc（失败时内部已释放并清零）；Free_OtherConfig_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_OtherConfig_v1800(Encoder& enc, const OtherConfig_v1800& value)
{
    enc.WriteBit(value.has_idc_AssistanceConfig_v1800);
    enc.WriteBit(value.has_multiRx_PreferenceReportingConfigFR2_r18);
    enc.WriteBit(value.has_aerial_FlightPathAvailabilityConfig_r18);
    enc.WriteBit(value.has_ul_TrafficInfoReportingConfig_r18);
    enc.WriteBit(value.has_n3c_RelayUE_InfoReportConfig_r18);
    enc.WriteBit(value.has_successPSCell_Config_r18);
    enc.WriteBit(value.has_sn_InitiatedPSCellChange_r18);
    enc.WriteBit(value.has_musim_GapPriorityAssistanceConfig_r18);
    enc.WriteBit(value.has_musim_CapabilityRestrictionConfig_r18);
    if (value.has_idc_AssistanceConfig_v1800) {
        Encode_SetupRelease_IDC_AssistanceConfig_v1800(enc, value.idc_AssistanceConfig_v1800);
    }
    if (value.has_multiRx_PreferenceReportingConfigFR2_r18) {
        Encode_SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18(enc, value.multiRx_PreferenceReportingConfigFR2_r18);
    }
    if (value.has_aerial_FlightPathAvailabilityConfig_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aerial_FlightPathAvailabilityConfig_r18), 0, 0);
    }
    if (value.has_ul_TrafficInfoReportingConfig_r18) {
        Encode_SetupRelease_UL_TrafficInfoReportingConfig_r18(enc, value.ul_TrafficInfoReportingConfig_r18);
    }
    if (value.has_n3c_RelayUE_InfoReportConfig_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.n3c_RelayUE_InfoReportConfig_r18), 0, 0);
    }
    if (value.has_successPSCell_Config_r18) {
        Encode_SetupRelease_SuccessPSCell_Config_r18(enc, value.successPSCell_Config_r18);
    }
    if (value.has_sn_InitiatedPSCellChange_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sn_InitiatedPSCellChange_r18), 0, 0);
    }
    if (value.has_musim_GapPriorityAssistanceConfig_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.musim_GapPriorityAssistanceConfig_r18), 0, 0);
    }
    if (value.has_musim_CapabilityRestrictionConfig_r18) {
        Encode_SetupRelease_MUSIM_CapabilityRestrictionConfig_r18(enc, value.musim_CapabilityRestrictionConfig_r18);
    }
    return enc.Error();
}

ErrorCode Decode_OtherConfig_v1800(Decoder& dec, OtherConfig_v1800& value)
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
        if (Decode_SetupRelease_IDC_AssistanceConfig_v1800(dec, value.idc_AssistanceConfig_v1800) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18(dec, value.multiRx_PreferenceReportingConfigFR2_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        value.aerial_FlightPathAvailabilityConfig_r18 = (OtherConfig_v1800_Aerial_FlightPathAvailabilityConfig_r18)0;
    }
    if (present_3) {
        if (Decode_SetupRelease_UL_TrafficInfoReportingConfig_r18(dec, value.ul_TrafficInfoReportingConfig_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        value.n3c_RelayUE_InfoReportConfig_r18 = (OtherConfig_v1800_N3c_RelayUE_InfoReportConfig_r18)0;
    }
    if (present_5) {
        if (Decode_SetupRelease_SuccessPSCell_Config_r18(dec, value.successPSCell_Config_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        value.sn_InitiatedPSCellChange_r18 = (OtherConfig_v1800_Sn_InitiatedPSCellChange_r18)0;
    }
    if (present_7) {
        value.musim_GapPriorityAssistanceConfig_r18 = (OtherConfig_v1800_Musim_GapPriorityAssistanceConfig_r18)0;
    }
    if (present_8) {
        if (Decode_SetupRelease_MUSIM_CapabilityRestrictionConfig_r18(dec, value.musim_CapabilityRestrictionConfig_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_OtherConfig_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_OtherConfig_v1800(OtherConfig_v1800& value)
{
    if (value.has_idc_AssistanceConfig_v1800) {
        Free_SetupRelease_IDC_AssistanceConfig_v1800(value.idc_AssistanceConfig_v1800);
    }
    if (value.has_multiRx_PreferenceReportingConfigFR2_r18) {
        Free_SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18(value.multiRx_PreferenceReportingConfigFR2_r18);
    }
    if (value.has_aerial_FlightPathAvailabilityConfig_r18) {
    }
    if (value.has_ul_TrafficInfoReportingConfig_r18) {
        Free_SetupRelease_UL_TrafficInfoReportingConfig_r18(value.ul_TrafficInfoReportingConfig_r18);
    }
    if (value.has_n3c_RelayUE_InfoReportConfig_r18) {
    }
    if (value.has_successPSCell_Config_r18) {
        Free_SetupRelease_SuccessPSCell_Config_r18(value.successPSCell_Config_r18);
    }
    if (value.has_sn_InitiatedPSCellChange_r18) {
    }
    if (value.has_musim_GapPriorityAssistanceConfig_r18) {
    }
    if (value.has_musim_CapabilityRestrictionConfig_r18) {
        Free_SetupRelease_MUSIM_CapabilityRestrictionConfig_r18(value.musim_CapabilityRestrictionConfig_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_FlightPathUpdateDistanceThr_r18：ASN.1 SetupRelease<FlightPathUpdateDistanceThr-r18>；源文件第 4277 行；CHOICE。
// Encode_SetupRelease_FlightPathUpdateDistanceThr_r18 只读不分配；Decode_SetupRelease_FlightPathUpdateDistanceThr_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_FlightPathUpdateDistanceThr_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_FlightPathUpdateDistanceThr_r18(Encoder& enc, const SetupRelease_FlightPathUpdateDistanceThr_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_FlightPathUpdateDistanceThr_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_FlightPathUpdateDistanceThr_r18_Tag_setup:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.setup), 0, 1023);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_FlightPathUpdateDistanceThr_r18(Decoder& dec, SetupRelease_FlightPathUpdateDistanceThr_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_FlightPathUpdateDistanceThr_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_FlightPathUpdateDistanceThr_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_FlightPathUpdateDistanceThr_r18_Tag_setup: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.u.setup = (FlightPathUpdateDistanceThr_r18)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_FlightPathUpdateDistanceThr_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_FlightPathUpdateDistanceThr_r18(SetupRelease_FlightPathUpdateDistanceThr_r18& value)
{
    switch (value.tag) {
    case SetupRelease_FlightPathUpdateDistanceThr_r18_Tag_release:
        break;
    case SetupRelease_FlightPathUpdateDistanceThr_r18_Tag_setup:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_FlightPathUpdateTimeThr_r18：ASN.1 SetupRelease<FlightPathUpdateTimeThr-r18>；源文件第 4278 行；CHOICE。
// Encode_SetupRelease_FlightPathUpdateTimeThr_r18 只读不分配；Decode_SetupRelease_FlightPathUpdateTimeThr_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_FlightPathUpdateTimeThr_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_FlightPathUpdateTimeThr_r18(Encoder& enc, const SetupRelease_FlightPathUpdateTimeThr_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_FlightPathUpdateTimeThr_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_FlightPathUpdateTimeThr_r18_Tag_setup:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.setup), 0, 16383);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_FlightPathUpdateTimeThr_r18(Decoder& dec, SetupRelease_FlightPathUpdateTimeThr_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_FlightPathUpdateTimeThr_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_FlightPathUpdateTimeThr_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_FlightPathUpdateTimeThr_r18_Tag_setup: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 16383, tmp_value)) { goto fail; }
        value.u.setup = (FlightPathUpdateTimeThr_r18)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_FlightPathUpdateTimeThr_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_FlightPathUpdateTimeThr_r18(SetupRelease_FlightPathUpdateTimeThr_r18& value)
{
    switch (value.tag) {
    case SetupRelease_FlightPathUpdateTimeThr_r18_Tag_release:
        break;
    case SetupRelease_FlightPathUpdateTimeThr_r18_Tag_setup:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// Aerial_Config_r18_FlightPathUpdateThrConfig_r18：ASN.1 flightPathUpdateThrConfig-r18；源文件第 4276 行；SEQUENCE。
// Encode_Aerial_Config_r18_FlightPathUpdateThrConfig_r18 只读不分配；Decode_Aerial_Config_r18_FlightPathUpdateThrConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_Aerial_Config_r18_FlightPathUpdateThrConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_Aerial_Config_r18_FlightPathUpdateThrConfig_r18(Encoder& enc, const Aerial_Config_r18_FlightPathUpdateThrConfig_r18& value)
{
    enc.WriteBit(value.has_flightPathUpdateDistanceThr_r18);
    enc.WriteBit(value.has_flightPathUpdateTimeThr_r18);
    if (value.has_flightPathUpdateDistanceThr_r18) {
        Encode_SetupRelease_FlightPathUpdateDistanceThr_r18(enc, value.flightPathUpdateDistanceThr_r18);
    }
    if (value.has_flightPathUpdateTimeThr_r18) {
        Encode_SetupRelease_FlightPathUpdateTimeThr_r18(enc, value.flightPathUpdateTimeThr_r18);
    }
    return enc.Error();
}

ErrorCode Decode_Aerial_Config_r18_FlightPathUpdateThrConfig_r18(Decoder& dec, Aerial_Config_r18_FlightPathUpdateThrConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_FlightPathUpdateDistanceThr_r18(dec, value.flightPathUpdateDistanceThr_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_FlightPathUpdateTimeThr_r18(dec, value.flightPathUpdateTimeThr_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_Aerial_Config_r18_FlightPathUpdateThrConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Aerial_Config_r18_FlightPathUpdateThrConfig_r18(Aerial_Config_r18_FlightPathUpdateThrConfig_r18& value)
{
    if (value.has_flightPathUpdateDistanceThr_r18) {
        Free_SetupRelease_FlightPathUpdateDistanceThr_r18(value.flightPathUpdateDistanceThr_r18);
    }
    if (value.has_flightPathUpdateTimeThr_r18) {
        Free_SetupRelease_FlightPathUpdateTimeThr_r18(value.flightPathUpdateTimeThr_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// Aerial_Config_r18：ASN.1 Aerial-Config-r18；源文件第 4275 行；SEQUENCE。
// Encode_Aerial_Config_r18 只读不分配；Decode_Aerial_Config_r18 可能 malloc（失败时内部已释放并清零）；Free_Aerial_Config_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_Aerial_Config_r18(Encoder& enc, const Aerial_Config_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_flightPathUpdateThrConfig_r18);
    if (value.has_flightPathUpdateThrConfig_r18) {
        Encode_Aerial_Config_r18_FlightPathUpdateThrConfig_r18(enc, value.flightPathUpdateThrConfig_r18);
    }
    return enc.Error();
}

ErrorCode Decode_Aerial_Config_r18(Decoder& dec, Aerial_Config_r18& value)
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
        if (Decode_Aerial_Config_r18_FlightPathUpdateThrConfig_r18(dec, value.flightPathUpdateThrConfig_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_Aerial_Config_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Aerial_Config_r18(Aerial_Config_r18& value)
{
    if (value.has_flightPathUpdateThrConfig_r18) {
        Free_Aerial_Config_r18_FlightPathUpdateThrConfig_r18(value.flightPathUpdateThrConfig_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_Aerial_Config_r18：ASN.1 SetupRelease<Aerial-Config-r18>；源文件第 1001 行；CHOICE。
// Encode_SetupRelease_Aerial_Config_r18 只读不分配；Decode_SetupRelease_Aerial_Config_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_Aerial_Config_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_Aerial_Config_r18(Encoder& enc, const SetupRelease_Aerial_Config_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_Aerial_Config_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_Aerial_Config_r18_Tag_setup:
        Encode_Aerial_Config_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_Aerial_Config_r18(Decoder& dec, SetupRelease_Aerial_Config_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_Aerial_Config_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_Aerial_Config_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_Aerial_Config_r18_Tag_setup: {
        if (Decode_Aerial_Config_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_Aerial_Config_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_Aerial_Config_r18(SetupRelease_Aerial_Config_r18& value)
{
    switch (value.tag) {
    case SetupRelease_Aerial_Config_r18_Tag_release:
        break;
    case SetupRelease_Aerial_Config_r18_Tag_setup:
        Free_Aerial_Config_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_IndirectPathAddChange_r18：ASN.1 SL-IndirectPathAddChange-r18；源文件第 22433 行；SEQUENCE。
// Encode_SL_IndirectPathAddChange_r18 只读不分配；Decode_SL_IndirectPathAddChange_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_IndirectPathAddChange_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_IndirectPathAddChange_r18(Encoder& enc, const SL_IndirectPathAddChange_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_t421_r18);
    enc.WriteFixedBitString(value.sl_IndirectPathRelayUE_Identity_r18.bytes, value.sl_IndirectPathRelayUE_Identity_r18.bitLength, 24, 24);
    enc.WriteFixedBitString(value.sl_IndirectPathCellIdentity_r18.bytes, value.sl_IndirectPathCellIdentity_r18.bitLength, 36, 36);
    if (value.has_t421_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.t421_r18), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_SL_IndirectPathAddChange_r18(Decoder& dec, SL_IndirectPathAddChange_r18& value)
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
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.sl_IndirectPathRelayUE_Identity_r18.bytes = string_bytes;
        value.sl_IndirectPathRelayUE_Identity_r18.bitLength = string_length;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 36)) { goto fail; }
        string_length = 36;
        value.sl_IndirectPathCellIdentity_r18.bytes = string_bytes;
        value.sl_IndirectPathCellIdentity_r18.bitLength = string_length;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.t421_r18 = (SL_IndirectPathAddChange_r18_T421_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_IndirectPathAddChange_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_IndirectPathAddChange_r18(SL_IndirectPathAddChange_r18& value)
{
    std::free(value.sl_IndirectPathRelayUE_Identity_r18.bytes);
    value.sl_IndirectPathRelayUE_Identity_r18.bytes = nullptr;
    value.sl_IndirectPathRelayUE_Identity_r18.bitLength = 0;
    std::free(value.sl_IndirectPathCellIdentity_r18.bytes);
    value.sl_IndirectPathCellIdentity_r18.bytes = nullptr;
    value.sl_IndirectPathCellIdentity_r18.bitLength = 0;
    if (value.has_t421_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SL_IndirectPathAddChange_r18：ASN.1 SetupRelease<SL-IndirectPathAddChange-r18>；源文件第 1002 行；CHOICE。
// Encode_SetupRelease_SL_IndirectPathAddChange_r18 只读不分配；Decode_SetupRelease_SL_IndirectPathAddChange_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SL_IndirectPathAddChange_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SL_IndirectPathAddChange_r18(Encoder& enc, const SetupRelease_SL_IndirectPathAddChange_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SL_IndirectPathAddChange_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_SL_IndirectPathAddChange_r18_Tag_setup:
        Encode_SL_IndirectPathAddChange_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SL_IndirectPathAddChange_r18(Decoder& dec, SetupRelease_SL_IndirectPathAddChange_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SL_IndirectPathAddChange_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SL_IndirectPathAddChange_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SL_IndirectPathAddChange_r18_Tag_setup: {
        if (Decode_SL_IndirectPathAddChange_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SL_IndirectPathAddChange_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SL_IndirectPathAddChange_r18(SetupRelease_SL_IndirectPathAddChange_r18& value)
{
    switch (value.tag) {
    case SetupRelease_SL_IndirectPathAddChange_r18_Tag_release:
        break;
    case SetupRelease_SL_IndirectPathAddChange_r18_Tag_setup:
        Free_SL_IndirectPathAddChange_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// N3C_RelayUE_Info_r18_N3c_CellGlobalId_r18：ASN.1 n3c-CellGlobalId-r18；源文件第 8476 行；SEQUENCE。
// Encode_N3C_RelayUE_Info_r18_N3c_CellGlobalId_r18 只读不分配；Decode_N3C_RelayUE_Info_r18_N3c_CellGlobalId_r18 可能 malloc（失败时内部已释放并清零）；Free_N3C_RelayUE_Info_r18_N3c_CellGlobalId_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_N3C_RelayUE_Info_r18_N3c_CellGlobalId_r18(Encoder& enc, const N3C_RelayUE_Info_r18_N3c_CellGlobalId_r18& value)
{
    Encode_PLMN_Identity(enc, value.n3c_PLMN_Id_r18);
    enc.WriteFixedBitString(value.n3c_CellIdentity_r18.bytes, value.n3c_CellIdentity_r18.bitLength, 36, 36);
    return enc.Error();
}

ErrorCode Decode_N3C_RelayUE_Info_r18_N3c_CellGlobalId_r18(Decoder& dec, N3C_RelayUE_Info_r18_N3c_CellGlobalId_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_PLMN_Identity(dec, value.n3c_PLMN_Id_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 36)) { goto fail; }
        string_length = 36;
        value.n3c_CellIdentity_r18.bytes = string_bytes;
        value.n3c_CellIdentity_r18.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_N3C_RelayUE_Info_r18_N3c_CellGlobalId_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_N3C_RelayUE_Info_r18_N3c_CellGlobalId_r18(N3C_RelayUE_Info_r18_N3c_CellGlobalId_r18& value)
{
    Free_PLMN_Identity(value.n3c_PLMN_Id_r18);
    std::free(value.n3c_CellIdentity_r18.bytes);
    value.n3c_CellIdentity_r18.bytes = nullptr;
    value.n3c_CellIdentity_r18.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// N3C_RelayUE_Info_r18：ASN.1 N3C-RelayUE-Info-r18；源文件第 8475 行；SEQUENCE。
// Encode_N3C_RelayUE_Info_r18 只读不分配；Decode_N3C_RelayUE_Info_r18 可能 malloc（失败时内部已释放并清零）；Free_N3C_RelayUE_Info_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_N3C_RelayUE_Info_r18(Encoder& enc, const N3C_RelayUE_Info_r18& value)
{
    Encode_N3C_RelayUE_Info_r18_N3c_CellGlobalId_r18(enc, value.n3c_CellGlobalId_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.n3c_C_RNTI_r18), 0, 65535);
    return enc.Error();
}

ErrorCode Decode_N3C_RelayUE_Info_r18(Decoder& dec, N3C_RelayUE_Info_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_N3C_RelayUE_Info_r18_N3c_CellGlobalId_r18(dec, value.n3c_CellGlobalId_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.n3c_C_RNTI_r18 = (RNTI_Value)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_N3C_RelayUE_Info_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_N3C_RelayUE_Info_r18(N3C_RelayUE_Info_r18& value)
{
    Free_N3C_RelayUE_Info_r18_N3c_CellGlobalId_r18(value.n3c_CellGlobalId_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// N3C_IndirectPathAddChange_r18：ASN.1 N3C-IndirectPathAddChange-r18；源文件第 8467 行；SEQUENCE。
// Encode_N3C_IndirectPathAddChange_r18 只读不分配；Decode_N3C_IndirectPathAddChange_r18 可能 malloc（失败时内部已释放并清零）；Free_N3C_IndirectPathAddChange_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_N3C_IndirectPathAddChange_r18(Encoder& enc, const N3C_IndirectPathAddChange_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_N3C_RelayUE_Info_r18(enc, value.n3c_RelayIdentification_r18);
    return enc.Error();
}

ErrorCode Decode_N3C_IndirectPathAddChange_r18(Decoder& dec, N3C_IndirectPathAddChange_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_N3C_RelayUE_Info_r18(dec, value.n3c_RelayIdentification_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_N3C_IndirectPathAddChange_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_N3C_IndirectPathAddChange_r18(N3C_IndirectPathAddChange_r18& value)
{
    Free_N3C_RelayUE_Info_r18(value.n3c_RelayIdentification_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_N3C_IndirectPathAddChange_r18：ASN.1 SetupRelease<N3C-IndirectPathAddChange-r18>；源文件第 1003 行；CHOICE。
// Encode_SetupRelease_N3C_IndirectPathAddChange_r18 只读不分配；Decode_SetupRelease_N3C_IndirectPathAddChange_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_N3C_IndirectPathAddChange_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_N3C_IndirectPathAddChange_r18(Encoder& enc, const SetupRelease_N3C_IndirectPathAddChange_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_N3C_IndirectPathAddChange_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_N3C_IndirectPathAddChange_r18_Tag_setup:
        Encode_N3C_IndirectPathAddChange_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_N3C_IndirectPathAddChange_r18(Decoder& dec, SetupRelease_N3C_IndirectPathAddChange_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_N3C_IndirectPathAddChange_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_N3C_IndirectPathAddChange_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_N3C_IndirectPathAddChange_r18_Tag_setup: {
        if (Decode_N3C_IndirectPathAddChange_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_N3C_IndirectPathAddChange_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_N3C_IndirectPathAddChange_r18(SetupRelease_N3C_IndirectPathAddChange_r18& value)
{
    switch (value.tag) {
    case SetupRelease_N3C_IndirectPathAddChange_r18_Tag_release:
        break;
    case SetupRelease_N3C_IndirectPathAddChange_r18_Tag_setup:
        Free_N3C_IndirectPathAddChange_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// N3C_IndirectPathConfigRelay_r18：ASN.1 N3C-IndirectPathConfigRelay-r18；源文件第 8452 行；SEQUENCE。
// Encode_N3C_IndirectPathConfigRelay_r18 只读不分配；Decode_N3C_IndirectPathConfigRelay_r18 可能 malloc（失败时内部已释放并清零）；Free_N3C_IndirectPathConfigRelay_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_N3C_IndirectPathConfigRelay_r18(Encoder& enc, const N3C_IndirectPathConfigRelay_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_n3c_MappingToReleaseList_r18);
    enc.WriteBit(value.has_n3c_MappingToAddModList_r18);
    if (value.has_n3c_MappingToReleaseList_r18) {
enc.WriteConstrainedLength(value.n3c_MappingToReleaseList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.n3c_MappingToReleaseList_r18_count; ++i) {
    Encode_SL_RemoteUE_RB_Identity_r17(enc, value.n3c_MappingToReleaseList_r18_items[i]);
}
    }
    if (value.has_n3c_MappingToAddModList_r18) {
enc.WriteConstrainedLength(value.n3c_MappingToAddModList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.n3c_MappingToAddModList_r18_count; ++i) {
    Encode_N3C_MappingConfig_r18(enc, value.n3c_MappingToAddModList_r18_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_N3C_IndirectPathConfigRelay_r18(Decoder& dec, N3C_IndirectPathConfigRelay_r18& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.n3c_MappingToReleaseList_r18_count)) { goto fail; }
if (value.n3c_MappingToReleaseList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.n3c_MappingToReleaseList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.n3c_MappingToReleaseList_r18_count > 0u) {
    value.n3c_MappingToReleaseList_r18_items = (SL_RemoteUE_RB_Identity_r17*)std::malloc((std::size_t)value.n3c_MappingToReleaseList_r18_count * sizeof(SL_RemoteUE_RB_Identity_r17));
    if (value.n3c_MappingToReleaseList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.n3c_MappingToReleaseList_r18_items, 0, (std::size_t)value.n3c_MappingToReleaseList_r18_count * sizeof(SL_RemoteUE_RB_Identity_r17));
}
for (std::uint32_t i = 0; i < value.n3c_MappingToReleaseList_r18_count; ++i) {
    if (Decode_SL_RemoteUE_RB_Identity_r17(dec, value.n3c_MappingToReleaseList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.n3c_MappingToAddModList_r18_count)) { goto fail; }
if (value.n3c_MappingToAddModList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.n3c_MappingToAddModList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.n3c_MappingToAddModList_r18_count > 0u) {
    value.n3c_MappingToAddModList_r18_items = (N3C_MappingConfig_r18*)std::malloc((std::size_t)value.n3c_MappingToAddModList_r18_count * sizeof(N3C_MappingConfig_r18));
    if (value.n3c_MappingToAddModList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.n3c_MappingToAddModList_r18_items, 0, (std::size_t)value.n3c_MappingToAddModList_r18_count * sizeof(N3C_MappingConfig_r18));
}
for (std::uint32_t i = 0; i < value.n3c_MappingToAddModList_r18_count; ++i) {
    if (Decode_N3C_MappingConfig_r18(dec, value.n3c_MappingToAddModList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_N3C_IndirectPathConfigRelay_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_N3C_IndirectPathConfigRelay_r18(N3C_IndirectPathConfigRelay_r18& value)
{
    if (value.has_n3c_MappingToReleaseList_r18) {
        if (value.n3c_MappingToReleaseList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.n3c_MappingToReleaseList_r18_count; ++i) {
                Free_SL_RemoteUE_RB_Identity_r17(value.n3c_MappingToReleaseList_r18_items[i]);
            }
            std::free(value.n3c_MappingToReleaseList_r18_items);
            value.n3c_MappingToReleaseList_r18_items = nullptr;
        }
        value.n3c_MappingToReleaseList_r18_count = 0;
    }
    if (value.has_n3c_MappingToAddModList_r18) {
        if (value.n3c_MappingToAddModList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.n3c_MappingToAddModList_r18_count; ++i) {
                Free_N3C_MappingConfig_r18(value.n3c_MappingToAddModList_r18_items[i]);
            }
            std::free(value.n3c_MappingToAddModList_r18_items);
            value.n3c_MappingToAddModList_r18_items = nullptr;
        }
        value.n3c_MappingToAddModList_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_N3C_IndirectPathConfigRelay_r18：ASN.1 SetupRelease<N3C-IndirectPathConfigRelay-r18>；源文件第 1004 行；CHOICE。
// Encode_SetupRelease_N3C_IndirectPathConfigRelay_r18 只读不分配；Decode_SetupRelease_N3C_IndirectPathConfigRelay_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_N3C_IndirectPathConfigRelay_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_N3C_IndirectPathConfigRelay_r18(Encoder& enc, const SetupRelease_N3C_IndirectPathConfigRelay_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_N3C_IndirectPathConfigRelay_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_N3C_IndirectPathConfigRelay_r18_Tag_setup:
        Encode_N3C_IndirectPathConfigRelay_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_N3C_IndirectPathConfigRelay_r18(Decoder& dec, SetupRelease_N3C_IndirectPathConfigRelay_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_N3C_IndirectPathConfigRelay_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_N3C_IndirectPathConfigRelay_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_N3C_IndirectPathConfigRelay_r18_Tag_setup: {
        if (Decode_N3C_IndirectPathConfigRelay_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_N3C_IndirectPathConfigRelay_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_N3C_IndirectPathConfigRelay_r18(SetupRelease_N3C_IndirectPathConfigRelay_r18& value)
{
    switch (value.tag) {
    case SetupRelease_N3C_IndirectPathConfigRelay_r18_Tag_release:
        break;
    case SetupRelease_N3C_IndirectPathConfigRelay_r18_Tag_setup:
        Free_N3C_IndirectPathConfigRelay_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PosResourceSetLinkedForAggBWList_r18：ASN.1 SRS-PosResourceSetLinkedForAggBWList-r18；源文件第 1067 行；SEQUENCE OF。
// Encode_SRS_PosResourceSetLinkedForAggBWList_r18 只读不分配；Decode_SRS_PosResourceSetLinkedForAggBWList_r18 可能 malloc（失败时内部已释放并清零）；Free_SRS_PosResourceSetLinkedForAggBWList_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PosResourceSetLinkedForAggBWList_r18(Encoder& enc, const SRS_PosResourceSetLinkedForAggBWList_r18& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 2u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SRS_PosResourceSetLinkedForAggBW_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_PosResourceSetLinkedForAggBWList_r18(Decoder& dec, SRS_PosResourceSetLinkedForAggBWList_r18& value)
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
    Free_SRS_PosResourceSetLinkedForAggBWList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosResourceSetLinkedForAggBWList_r18(SRS_PosResourceSetLinkedForAggBWList_r18& value)
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
// SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18：ASN.1 SetupRelease<SRS-PosResourceSetLinkedForAggBWList-r18>；源文件第 1006 行；CHOICE。
// Encode_SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18 只读不分配；Decode_SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18(Encoder& enc, const SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18_Tag_setup:
        Encode_SRS_PosResourceSetLinkedForAggBWList_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18(Decoder& dec, SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18_Tag_setup: {
        if (Decode_SRS_PosResourceSetLinkedForAggBWList_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18(SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18& value)
{
    switch (value.tag) {
    case SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18_Tag_release:
        break;
    case SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18_Tag_setup:
        Free_SRS_PosResourceSetLinkedForAggBWList_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_ReferenceConfiguration_r18：ASN.1 SetupRelease<ReferenceConfiguration-r18>；源文件第 5487 行；CHOICE。
// Encode_SetupRelease_ReferenceConfiguration_r18 只读不分配；Decode_SetupRelease_ReferenceConfiguration_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_ReferenceConfiguration_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_ReferenceConfiguration_r18(Encoder& enc, const SetupRelease_ReferenceConfiguration_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_ReferenceConfiguration_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_ReferenceConfiguration_r18_Tag_setup:
        if (value.u.setup == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_RRCReconfiguration(enc, *value.u.setup);
        }
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_ReferenceConfiguration_r18(Decoder& dec, SetupRelease_ReferenceConfiguration_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_ReferenceConfiguration_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_ReferenceConfiguration_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_ReferenceConfiguration_r18_Tag_setup: {
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
        value.u.setup = containing_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_ReferenceConfiguration_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_ReferenceConfiguration_r18(SetupRelease_ReferenceConfiguration_r18& value)
{
    switch (value.tag) {
    case SetupRelease_ReferenceConfiguration_r18_Tag_release:
        break;
    case SetupRelease_ReferenceConfiguration_r18_Tag_setup:
        if (value.u.setup != nullptr) {
            Free_RRCReconfiguration(*value.u.setup);
            std::free(value.u.setup);
        }
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LTM_Config_r18：ASN.1 LTM-Config-r18；源文件第 7198 行；SEQUENCE。
// Encode_LTM_Config_r18 只读不分配；Decode_LTM_Config_r18 可能 malloc（失败时内部已释放并清零）；Free_LTM_Config_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LTM_Config_r18(Encoder& enc, const LTM_Config_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_ltm_ReferenceConfiguration_r18);
    enc.WriteBit(value.has_ltm_CandidateToReleaseList_r18);
    enc.WriteBit(value.has_ltm_CandidateToAddModList_r18);
    enc.WriteBit(value.has_ltm_ServingCellNoResetID_r18);
    enc.WriteBit(value.has_ltm_CSI_ResourceConfigToAddModList_r18);
    enc.WriteBit(value.has_ltm_CSI_ResourceConfigToReleaseList_r18);
    enc.WriteBit(value.has_attemptLTM_Switch_r18);
    enc.WriteBit(value.has_ltm_ServingCellUE_MeasuredTA_ID_r18);
    if (value.has_ltm_ReferenceConfiguration_r18) {
        Encode_SetupRelease_ReferenceConfiguration_r18(enc, value.ltm_ReferenceConfiguration_r18);
    }
    if (value.has_ltm_CandidateToReleaseList_r18) {
enc.WriteConstrainedLength(value.ltm_CandidateToReleaseList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.ltm_CandidateToReleaseList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.ltm_CandidateToReleaseList_r18_items[i]), 1, 8);
}
    }
    if (value.has_ltm_CandidateToAddModList_r18) {
enc.WriteConstrainedLength(value.ltm_CandidateToAddModList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.ltm_CandidateToAddModList_r18_count; ++i) {
    Encode_LTM_Candidate_r18(enc, value.ltm_CandidateToAddModList_r18_items[i]);
}
    }
    if (value.has_ltm_ServingCellNoResetID_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ltm_ServingCellNoResetID_r18), 1, 9);
    }
    if (value.has_ltm_CSI_ResourceConfigToAddModList_r18) {
enc.WriteConstrainedLength(value.ltm_CSI_ResourceConfigToAddModList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.ltm_CSI_ResourceConfigToAddModList_r18_count; ++i) {
    Encode_LTM_CSI_ResourceConfig_r18(enc, value.ltm_CSI_ResourceConfigToAddModList_r18_items[i]);
}
    }
    if (value.has_ltm_CSI_ResourceConfigToReleaseList_r18) {
enc.WriteConstrainedLength(value.ltm_CSI_ResourceConfigToReleaseList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.ltm_CSI_ResourceConfigToReleaseList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.ltm_CSI_ResourceConfigToReleaseList_r18_items[i]), 0, 111);
}
    }
    if (value.has_attemptLTM_Switch_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.attemptLTM_Switch_r18), 0, 0);
    }
    if (value.has_ltm_ServingCellUE_MeasuredTA_ID_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ltm_ServingCellUE_MeasuredTA_ID_r18), 1, 9);
    }
    return enc.Error();
}

ErrorCode Decode_LTM_Config_r18(Decoder& dec, LTM_Config_r18& value)
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
        if (Decode_SetupRelease_ReferenceConfiguration_r18(dec, value.ltm_ReferenceConfiguration_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.ltm_CandidateToReleaseList_r18_count)) { goto fail; }
if (value.ltm_CandidateToReleaseList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.ltm_CandidateToReleaseList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.ltm_CandidateToReleaseList_r18_count > 0u) {
    value.ltm_CandidateToReleaseList_r18_items = (LTM_CandidateId_r18*)std::malloc((std::size_t)value.ltm_CandidateToReleaseList_r18_count * sizeof(LTM_CandidateId_r18));
    if (value.ltm_CandidateToReleaseList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.ltm_CandidateToReleaseList_r18_items, 0, (std::size_t)value.ltm_CandidateToReleaseList_r18_count * sizeof(LTM_CandidateId_r18));
}
for (std::uint32_t i = 0; i < value.ltm_CandidateToReleaseList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
    value.ltm_CandidateToReleaseList_r18_items[i] = (LTM_CandidateId_r18)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.ltm_CandidateToAddModList_r18_count)) { goto fail; }
if (value.ltm_CandidateToAddModList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.ltm_CandidateToAddModList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.ltm_CandidateToAddModList_r18_count > 0u) {
    value.ltm_CandidateToAddModList_r18_items = (LTM_Candidate_r18*)std::malloc((std::size_t)value.ltm_CandidateToAddModList_r18_count * sizeof(LTM_Candidate_r18));
    if (value.ltm_CandidateToAddModList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.ltm_CandidateToAddModList_r18_items, 0, (std::size_t)value.ltm_CandidateToAddModList_r18_count * sizeof(LTM_Candidate_r18));
}
for (std::uint32_t i = 0; i < value.ltm_CandidateToAddModList_r18_count; ++i) {
    if (Decode_LTM_Candidate_r18(dec, value.ltm_CandidateToAddModList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 9, tmp_value)) { goto fail; }
        value.ltm_ServingCellNoResetID_r18 = (int64_t)tmp_value;
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.ltm_CSI_ResourceConfigToAddModList_r18_count)) { goto fail; }
if (value.ltm_CSI_ResourceConfigToAddModList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.ltm_CSI_ResourceConfigToAddModList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.ltm_CSI_ResourceConfigToAddModList_r18_count > 0u) {
    value.ltm_CSI_ResourceConfigToAddModList_r18_items = (LTM_CSI_ResourceConfig_r18*)std::malloc((std::size_t)value.ltm_CSI_ResourceConfigToAddModList_r18_count * sizeof(LTM_CSI_ResourceConfig_r18));
    if (value.ltm_CSI_ResourceConfigToAddModList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.ltm_CSI_ResourceConfigToAddModList_r18_items, 0, (std::size_t)value.ltm_CSI_ResourceConfigToAddModList_r18_count * sizeof(LTM_CSI_ResourceConfig_r18));
}
for (std::uint32_t i = 0; i < value.ltm_CSI_ResourceConfigToAddModList_r18_count; ++i) {
    if (Decode_LTM_CSI_ResourceConfig_r18(dec, value.ltm_CSI_ResourceConfigToAddModList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_5) {
if (!dec.ReadConstrainedLength(0u, 0u, value.ltm_CSI_ResourceConfigToReleaseList_r18_count)) { goto fail; }
if (value.ltm_CSI_ResourceConfigToReleaseList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.ltm_CSI_ResourceConfigToReleaseList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.ltm_CSI_ResourceConfigToReleaseList_r18_count > 0u) {
    value.ltm_CSI_ResourceConfigToReleaseList_r18_items = (LTM_CSI_ResourceConfigId_r18*)std::malloc((std::size_t)value.ltm_CSI_ResourceConfigToReleaseList_r18_count * sizeof(LTM_CSI_ResourceConfigId_r18));
    if (value.ltm_CSI_ResourceConfigToReleaseList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.ltm_CSI_ResourceConfigToReleaseList_r18_items, 0, (std::size_t)value.ltm_CSI_ResourceConfigToReleaseList_r18_count * sizeof(LTM_CSI_ResourceConfigId_r18));
}
for (std::uint32_t i = 0; i < value.ltm_CSI_ResourceConfigToReleaseList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 111, tmp_value)) { goto fail; }
    value.ltm_CSI_ResourceConfigToReleaseList_r18_items[i] = (LTM_CSI_ResourceConfigId_r18)tmp_value;
}
    }
    if (present_6) {
        value.attemptLTM_Switch_r18 = (LTM_Config_r18_AttemptLTM_Switch_r18)0;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 9, tmp_value)) { goto fail; }
        value.ltm_ServingCellUE_MeasuredTA_ID_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_LTM_Config_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LTM_Config_r18(LTM_Config_r18& value)
{
    if (value.has_ltm_ReferenceConfiguration_r18) {
        Free_SetupRelease_ReferenceConfiguration_r18(value.ltm_ReferenceConfiguration_r18);
    }
    if (value.has_ltm_CandidateToReleaseList_r18) {
        if (value.ltm_CandidateToReleaseList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.ltm_CandidateToReleaseList_r18_count; ++i) {
            }
            std::free(value.ltm_CandidateToReleaseList_r18_items);
            value.ltm_CandidateToReleaseList_r18_items = nullptr;
        }
        value.ltm_CandidateToReleaseList_r18_count = 0;
    }
    if (value.has_ltm_CandidateToAddModList_r18) {
        if (value.ltm_CandidateToAddModList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.ltm_CandidateToAddModList_r18_count; ++i) {
                Free_LTM_Candidate_r18(value.ltm_CandidateToAddModList_r18_items[i]);
            }
            std::free(value.ltm_CandidateToAddModList_r18_items);
            value.ltm_CandidateToAddModList_r18_items = nullptr;
        }
        value.ltm_CandidateToAddModList_r18_count = 0;
    }
    if (value.has_ltm_ServingCellNoResetID_r18) {
    }
    if (value.has_ltm_CSI_ResourceConfigToAddModList_r18) {
        if (value.ltm_CSI_ResourceConfigToAddModList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.ltm_CSI_ResourceConfigToAddModList_r18_count; ++i) {
                Free_LTM_CSI_ResourceConfig_r18(value.ltm_CSI_ResourceConfigToAddModList_r18_items[i]);
            }
            std::free(value.ltm_CSI_ResourceConfigToAddModList_r18_items);
            value.ltm_CSI_ResourceConfigToAddModList_r18_items = nullptr;
        }
        value.ltm_CSI_ResourceConfigToAddModList_r18_count = 0;
    }
    if (value.has_ltm_CSI_ResourceConfigToReleaseList_r18) {
        if (value.ltm_CSI_ResourceConfigToReleaseList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.ltm_CSI_ResourceConfigToReleaseList_r18_count; ++i) {
            }
            std::free(value.ltm_CSI_ResourceConfigToReleaseList_r18_items);
            value.ltm_CSI_ResourceConfigToReleaseList_r18_items = nullptr;
        }
        value.ltm_CSI_ResourceConfigToReleaseList_r18_count = 0;
    }
    if (value.has_attemptLTM_Switch_r18) {
    }
    if (value.has_ltm_ServingCellUE_MeasuredTA_ID_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_LTM_Config_r18：ASN.1 SetupRelease<LTM-Config-r18>；源文件第 1007 行；CHOICE。
// Encode_SetupRelease_LTM_Config_r18 只读不分配；Decode_SetupRelease_LTM_Config_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_LTM_Config_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_LTM_Config_r18(Encoder& enc, const SetupRelease_LTM_Config_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_LTM_Config_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_LTM_Config_r18_Tag_setup:
        Encode_LTM_Config_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_LTM_Config_r18(Decoder& dec, SetupRelease_LTM_Config_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_LTM_Config_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_LTM_Config_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_LTM_Config_r18_Tag_setup: {
        if (Decode_LTM_Config_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_LTM_Config_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_LTM_Config_r18(SetupRelease_LTM_Config_r18& value)
{
    switch (value.tag) {
    case SetupRelease_LTM_Config_r18_Tag_release:
        break;
    case SetupRelease_LTM_Config_r18_Tag_setup:
        Free_LTM_Config_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReconfiguration_v1800_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 1008 行；空 SEQUENCE{}。
// Encode_RRCReconfiguration_v1800_IEs_NonCriticalExtension 只读不分配；Decode_RRCReconfiguration_v1800_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_RRCReconfiguration_v1800_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReconfiguration_v1800_IEs_NonCriticalExtension(Encoder& enc, const RRCReconfiguration_v1800_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_RRCReconfiguration_v1800_IEs_NonCriticalExtension(Decoder& dec, RRCReconfiguration_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReconfiguration_v1800_IEs_NonCriticalExtension(RRCReconfiguration_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReconfiguration_v1800_IEs：ASN.1 RRCReconfiguration-v1800-IEs；源文件第 999 行；SEQUENCE。
// Encode_RRCReconfiguration_v1800_IEs 只读不分配；Decode_RRCReconfiguration_v1800_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCReconfiguration_v1800_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReconfiguration_v1800_IEs(Encoder& enc, const RRCReconfiguration_v1800_IEs& value)
{
    enc.WriteBit(value.has_needForInterruptionConfigNR_r18);
    enc.WriteBit(value.has_aerial_Config_r18);
    enc.WriteBit(value.has_sl_IndirectPathAddChange_r18);
    enc.WriteBit(value.has_n3c_IndirectPathAddChange_r18);
    enc.WriteBit(value.has_n3c_IndirectPathConfigRelay_r18);
    enc.WriteBit(value.has_otherConfig_v1800);
    enc.WriteBit(value.has_srs_PosResourceSetLinkedForAggBWList_r18);
    enc.WriteBit(value.has_ltm_Config_r18);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_needForInterruptionConfigNR_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.needForInterruptionConfigNR_r18), 0, 1);
    }
    if (value.has_aerial_Config_r18) {
        Encode_SetupRelease_Aerial_Config_r18(enc, value.aerial_Config_r18);
    }
    if (value.has_sl_IndirectPathAddChange_r18) {
        Encode_SetupRelease_SL_IndirectPathAddChange_r18(enc, value.sl_IndirectPathAddChange_r18);
    }
    if (value.has_n3c_IndirectPathAddChange_r18) {
        Encode_SetupRelease_N3C_IndirectPathAddChange_r18(enc, value.n3c_IndirectPathAddChange_r18);
    }
    if (value.has_n3c_IndirectPathConfigRelay_r18) {
        Encode_SetupRelease_N3C_IndirectPathConfigRelay_r18(enc, value.n3c_IndirectPathConfigRelay_r18);
    }
    if (value.has_otherConfig_v1800) {
        Encode_OtherConfig_v1800(enc, value.otherConfig_v1800);
    }
    if (value.has_srs_PosResourceSetLinkedForAggBWList_r18) {
        Encode_SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18(enc, value.srs_PosResourceSetLinkedForAggBWList_r18);
    }
    if (value.has_ltm_Config_r18) {
        Encode_SetupRelease_LTM_Config_r18(enc, value.ltm_Config_r18);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCReconfiguration_v1800_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCReconfiguration_v1800_IEs(Decoder& dec, RRCReconfiguration_v1800_IEs& value)
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
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.needForInterruptionConfigNR_r18 = (RRCReconfiguration_v1800_IEs_NeedForInterruptionConfigNR_r18)tmp_value;
    }
    if (present_1) {
        if (Decode_SetupRelease_Aerial_Config_r18(dec, value.aerial_Config_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SetupRelease_SL_IndirectPathAddChange_r18(dec, value.sl_IndirectPathAddChange_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SetupRelease_N3C_IndirectPathAddChange_r18(dec, value.n3c_IndirectPathAddChange_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SetupRelease_N3C_IndirectPathConfigRelay_r18(dec, value.n3c_IndirectPathConfigRelay_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_OtherConfig_v1800(dec, value.otherConfig_v1800) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18(dec, value.srs_PosResourceSetLinkedForAggBWList_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        if (Decode_SetupRelease_LTM_Config_r18(dec, value.ltm_Config_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        if (Decode_RRCReconfiguration_v1800_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReconfiguration_v1800_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReconfiguration_v1800_IEs(RRCReconfiguration_v1800_IEs& value)
{
    if (value.has_needForInterruptionConfigNR_r18) {
    }
    if (value.has_aerial_Config_r18) {
        Free_SetupRelease_Aerial_Config_r18(value.aerial_Config_r18);
    }
    if (value.has_sl_IndirectPathAddChange_r18) {
        Free_SetupRelease_SL_IndirectPathAddChange_r18(value.sl_IndirectPathAddChange_r18);
    }
    if (value.has_n3c_IndirectPathAddChange_r18) {
        Free_SetupRelease_N3C_IndirectPathAddChange_r18(value.n3c_IndirectPathAddChange_r18);
    }
    if (value.has_n3c_IndirectPathConfigRelay_r18) {
        Free_SetupRelease_N3C_IndirectPathConfigRelay_r18(value.n3c_IndirectPathConfigRelay_r18);
    }
    if (value.has_otherConfig_v1800) {
        Free_OtherConfig_v1800(value.otherConfig_v1800);
    }
    if (value.has_srs_PosResourceSetLinkedForAggBWList_r18) {
        Free_SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18(value.srs_PosResourceSetLinkedForAggBWList_r18);
    }
    if (value.has_ltm_Config_r18) {
        Free_SetupRelease_LTM_Config_r18(value.ltm_Config_r18);
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCReconfiguration_v1800_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// AppLayerMeasConfig_r17_ExtGroup1：ASN.1 AppLayerMeasConfig_r17_ExtGroup1；源文件第 21293 行；扩展添加组 [[ ]]。
// Encode_AppLayerMeasConfig_r17_ExtGroup1 只读不分配；Decode_AppLayerMeasConfig_r17_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_AppLayerMeasConfig_r17_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_AppLayerMeasConfig_r17_ExtGroup1(Encoder& enc, const AppLayerMeasConfig_r17_ExtGroup1& value)
{
    enc.WriteBit(value.has_rrc_SegAllowedSRB5_r18);
    enc.WriteBit(value.has_idleInactiveReportAllowed_r18);
    if (value.has_rrc_SegAllowedSRB5_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rrc_SegAllowedSRB5_r18), 0, 0);
    }
    if (value.has_idleInactiveReportAllowed_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.idleInactiveReportAllowed_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_AppLayerMeasConfig_r17_ExtGroup1(Decoder& dec, AppLayerMeasConfig_r17_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.rrc_SegAllowedSRB5_r18 = (AppLayerMeasConfig_r17_ExtGroup1_Rrc_SegAllowedSRB5_r18)0;
    }
    if (present_1) {
        value.idleInactiveReportAllowed_r18 = (AppLayerMeasConfig_r17_ExtGroup1_IdleInactiveReportAllowed_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_AppLayerMeasConfig_r17_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AppLayerMeasConfig_r17_ExtGroup1(AppLayerMeasConfig_r17_ExtGroup1& value)
{
    if (value.has_rrc_SegAllowedSRB5_r18) {
    }
    if (value.has_idleInactiveReportAllowed_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// AppLayerMeasConfig_r17：ASN.1 AppLayerMeasConfig-r17；源文件第 21288 行；SEQUENCE。
// Encode_AppLayerMeasConfig_r17 只读不分配；Decode_AppLayerMeasConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_AppLayerMeasConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_AppLayerMeasConfig_r17(Encoder& enc, const AppLayerMeasConfig_r17& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_measConfigAppLayerToAddModList_r17);
    enc.WriteBit(value.has_measConfigAppLayerToReleaseList_r17);
    enc.WriteBit(value.has_rrc_SegAllowedSRB4_r17);
    if (value.has_measConfigAppLayerToAddModList_r17) {
enc.WriteConstrainedLength(value.measConfigAppLayerToAddModList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.measConfigAppLayerToAddModList_r17_count; ++i) {
    Encode_MeasConfigAppLayer_r17(enc, value.measConfigAppLayerToAddModList_r17_items[i]);
}
    }
    if (value.has_measConfigAppLayerToReleaseList_r17) {
enc.WriteConstrainedLength(value.measConfigAppLayerToReleaseList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.measConfigAppLayerToReleaseList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.measConfigAppLayerToReleaseList_r17_items[i]), 0, 15);
}
    }
    if (value.has_rrc_SegAllowedSRB4_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rrc_SegAllowedSRB4_r17), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_AppLayerMeasConfig_r17_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_AppLayerMeasConfig_r17(Decoder& dec, AppLayerMeasConfig_r17& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.measConfigAppLayerToAddModList_r17_count)) { goto fail; }
if (value.measConfigAppLayerToAddModList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.measConfigAppLayerToAddModList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.measConfigAppLayerToAddModList_r17_count > 0u) {
    value.measConfigAppLayerToAddModList_r17_items = (MeasConfigAppLayer_r17*)std::malloc((std::size_t)value.measConfigAppLayerToAddModList_r17_count * sizeof(MeasConfigAppLayer_r17));
    if (value.measConfigAppLayerToAddModList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.measConfigAppLayerToAddModList_r17_items, 0, (std::size_t)value.measConfigAppLayerToAddModList_r17_count * sizeof(MeasConfigAppLayer_r17));
}
for (std::uint32_t i = 0; i < value.measConfigAppLayerToAddModList_r17_count; ++i) {
    if (Decode_MeasConfigAppLayer_r17(dec, value.measConfigAppLayerToAddModList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.measConfigAppLayerToReleaseList_r17_count)) { goto fail; }
if (value.measConfigAppLayerToReleaseList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.measConfigAppLayerToReleaseList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.measConfigAppLayerToReleaseList_r17_count > 0u) {
    value.measConfigAppLayerToReleaseList_r17_items = (MeasConfigAppLayerId_r17*)std::malloc((std::size_t)value.measConfigAppLayerToReleaseList_r17_count * sizeof(MeasConfigAppLayerId_r17));
    if (value.measConfigAppLayerToReleaseList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.measConfigAppLayerToReleaseList_r17_items, 0, (std::size_t)value.measConfigAppLayerToReleaseList_r17_count * sizeof(MeasConfigAppLayerId_r17));
}
for (std::uint32_t i = 0; i < value.measConfigAppLayerToReleaseList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
    value.measConfigAppLayerToReleaseList_r17_items[i] = (MeasConfigAppLayerId_r17)tmp_value;
}
    }
    if (present_2) {
        value.rrc_SegAllowedSRB4_r17 = (AppLayerMeasConfig_r17_Rrc_SegAllowedSRB4_r17)0;
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
    if (Decode_AppLayerMeasConfig_r17_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_AppLayerMeasConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AppLayerMeasConfig_r17(AppLayerMeasConfig_r17& value)
{
    if (value.has_measConfigAppLayerToAddModList_r17) {
        if (value.measConfigAppLayerToAddModList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.measConfigAppLayerToAddModList_r17_count; ++i) {
                Free_MeasConfigAppLayer_r17(value.measConfigAppLayerToAddModList_r17_items[i]);
            }
            std::free(value.measConfigAppLayerToAddModList_r17_items);
            value.measConfigAppLayerToAddModList_r17_items = nullptr;
        }
        value.measConfigAppLayerToAddModList_r17_count = 0;
    }
    if (value.has_measConfigAppLayerToReleaseList_r17) {
        if (value.measConfigAppLayerToReleaseList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.measConfigAppLayerToReleaseList_r17_count; ++i) {
            }
            std::free(value.measConfigAppLayerToReleaseList_r17_items);
            value.measConfigAppLayerToReleaseList_r17_items = nullptr;
        }
        value.measConfigAppLayerToReleaseList_r17_count = 0;
    }
    if (value.has_rrc_SegAllowedSRB4_r17) {
    }
    if (value.has_extGroup1) {
        Free_AppLayerMeasConfig_r17_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MUSIM_GapAssistanceConfig_r17：ASN.1 MUSIM-GapAssistanceConfig-r17；源文件第 21648 行；SEQUENCE。
// Encode_MUSIM_GapAssistanceConfig_r17 只读不分配；Decode_MUSIM_GapAssistanceConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_MUSIM_GapAssistanceConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MUSIM_GapAssistanceConfig_r17(Encoder& enc, const MUSIM_GapAssistanceConfig_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.musim_GapProhibitTimer_r17), 0, 15);
    return enc.Error();
}

ErrorCode Decode_MUSIM_GapAssistanceConfig_r17(Decoder& dec, MUSIM_GapAssistanceConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.musim_GapProhibitTimer_r17 = (MUSIM_GapAssistanceConfig_r17_Musim_GapProhibitTimer_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MUSIM_GapAssistanceConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MUSIM_GapAssistanceConfig_r17(MUSIM_GapAssistanceConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_MUSIM_GapAssistanceConfig_r17：ASN.1 SetupRelease<MUSIM-GapAssistanceConfig-r17>；源文件第 21610 行；CHOICE。
// Encode_SetupRelease_MUSIM_GapAssistanceConfig_r17 只读不分配；Decode_SetupRelease_MUSIM_GapAssistanceConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_MUSIM_GapAssistanceConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_MUSIM_GapAssistanceConfig_r17(Encoder& enc, const SetupRelease_MUSIM_GapAssistanceConfig_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_MUSIM_GapAssistanceConfig_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_MUSIM_GapAssistanceConfig_r17_Tag_setup:
        Encode_MUSIM_GapAssistanceConfig_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_MUSIM_GapAssistanceConfig_r17(Decoder& dec, SetupRelease_MUSIM_GapAssistanceConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_MUSIM_GapAssistanceConfig_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_MUSIM_GapAssistanceConfig_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_MUSIM_GapAssistanceConfig_r17_Tag_setup: {
        if (Decode_MUSIM_GapAssistanceConfig_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_MUSIM_GapAssistanceConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_MUSIM_GapAssistanceConfig_r17(SetupRelease_MUSIM_GapAssistanceConfig_r17& value)
{
    switch (value.tag) {
    case SetupRelease_MUSIM_GapAssistanceConfig_r17_Tag_release:
        break;
    case SetupRelease_MUSIM_GapAssistanceConfig_r17_Tag_setup:
        Free_MUSIM_GapAssistanceConfig_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MUSIM_LeaveAssistanceConfig_r17：ASN.1 MUSIM-LeaveAssistanceConfig-r17；源文件第 21652 行；SEQUENCE。
// Encode_MUSIM_LeaveAssistanceConfig_r17 只读不分配；Decode_MUSIM_LeaveAssistanceConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_MUSIM_LeaveAssistanceConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MUSIM_LeaveAssistanceConfig_r17(Encoder& enc, const MUSIM_LeaveAssistanceConfig_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.musim_LeaveWithoutResponseTimer_r17), 0, 7);
    return enc.Error();
}

ErrorCode Decode_MUSIM_LeaveAssistanceConfig_r17(Decoder& dec, MUSIM_LeaveAssistanceConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.musim_LeaveWithoutResponseTimer_r17 = (MUSIM_LeaveAssistanceConfig_r17_Musim_LeaveWithoutResponseTimer_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MUSIM_LeaveAssistanceConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MUSIM_LeaveAssistanceConfig_r17(MUSIM_LeaveAssistanceConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_MUSIM_LeaveAssistanceConfig_r17：ASN.1 SetupRelease<MUSIM-LeaveAssistanceConfig-r17>；源文件第 21611 行；CHOICE。
// Encode_SetupRelease_MUSIM_LeaveAssistanceConfig_r17 只读不分配；Decode_SetupRelease_MUSIM_LeaveAssistanceConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_MUSIM_LeaveAssistanceConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_MUSIM_LeaveAssistanceConfig_r17(Encoder& enc, const SetupRelease_MUSIM_LeaveAssistanceConfig_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_MUSIM_LeaveAssistanceConfig_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_MUSIM_LeaveAssistanceConfig_r17_Tag_setup:
        Encode_MUSIM_LeaveAssistanceConfig_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_MUSIM_LeaveAssistanceConfig_r17(Decoder& dec, SetupRelease_MUSIM_LeaveAssistanceConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_MUSIM_LeaveAssistanceConfig_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_MUSIM_LeaveAssistanceConfig_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_MUSIM_LeaveAssistanceConfig_r17_Tag_setup: {
        if (Decode_MUSIM_LeaveAssistanceConfig_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_MUSIM_LeaveAssistanceConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_MUSIM_LeaveAssistanceConfig_r17(SetupRelease_MUSIM_LeaveAssistanceConfig_r17& value)
{
    switch (value.tag) {
    case SetupRelease_MUSIM_LeaveAssistanceConfig_r17_Tag_release:
        break;
    case SetupRelease_MUSIM_LeaveAssistanceConfig_r17_Tag_setup:
        Free_MUSIM_LeaveAssistanceConfig_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLM_RelaxationReportingConfig_r17：ASN.1 RLM-RelaxationReportingConfig-r17；源文件第 21727 行；SEQUENCE。
// Encode_RLM_RelaxationReportingConfig_r17 只读不分配；Decode_RLM_RelaxationReportingConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_RLM_RelaxationReportingConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLM_RelaxationReportingConfig_r17(Encoder& enc, const RLM_RelaxationReportingConfig_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.rlm_RelaxtionReportingProhibitTimer), 0, 15);
    return enc.Error();
}

ErrorCode Decode_RLM_RelaxationReportingConfig_r17(Decoder& dec, RLM_RelaxationReportingConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.rlm_RelaxtionReportingProhibitTimer = (RLM_RelaxationReportingConfig_r17_Rlm_RelaxtionReportingProhibitTimer)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLM_RelaxationReportingConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLM_RelaxationReportingConfig_r17(RLM_RelaxationReportingConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_RLM_RelaxationReportingConfig_r17：ASN.1 SetupRelease<RLM-RelaxationReportingConfig-r17>；源文件第 21616 行；CHOICE。
// Encode_SetupRelease_RLM_RelaxationReportingConfig_r17 只读不分配；Decode_SetupRelease_RLM_RelaxationReportingConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_RLM_RelaxationReportingConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_RLM_RelaxationReportingConfig_r17(Encoder& enc, const SetupRelease_RLM_RelaxationReportingConfig_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_RLM_RelaxationReportingConfig_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_RLM_RelaxationReportingConfig_r17_Tag_setup:
        Encode_RLM_RelaxationReportingConfig_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_RLM_RelaxationReportingConfig_r17(Decoder& dec, SetupRelease_RLM_RelaxationReportingConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_RLM_RelaxationReportingConfig_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_RLM_RelaxationReportingConfig_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_RLM_RelaxationReportingConfig_r17_Tag_setup: {
        if (Decode_RLM_RelaxationReportingConfig_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_RLM_RelaxationReportingConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_RLM_RelaxationReportingConfig_r17(SetupRelease_RLM_RelaxationReportingConfig_r17& value)
{
    switch (value.tag) {
    case SetupRelease_RLM_RelaxationReportingConfig_r17_Tag_release:
        break;
    case SetupRelease_RLM_RelaxationReportingConfig_r17_Tag_setup:
        Free_RLM_RelaxationReportingConfig_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BFD_RelaxationReportingConfig_r17：ASN.1 BFD-RelaxationReportingConfig-r17；源文件第 21732 行；SEQUENCE。
// Encode_BFD_RelaxationReportingConfig_r17 只读不分配；Decode_BFD_RelaxationReportingConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_BFD_RelaxationReportingConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BFD_RelaxationReportingConfig_r17(Encoder& enc, const BFD_RelaxationReportingConfig_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.bfd_RelaxtionReportingProhibitTimer), 0, 15);
    return enc.Error();
}

ErrorCode Decode_BFD_RelaxationReportingConfig_r17(Decoder& dec, BFD_RelaxationReportingConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.bfd_RelaxtionReportingProhibitTimer = (BFD_RelaxationReportingConfig_r17_Bfd_RelaxtionReportingProhibitTimer)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BFD_RelaxationReportingConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BFD_RelaxationReportingConfig_r17(BFD_RelaxationReportingConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_BFD_RelaxationReportingConfig_r17：ASN.1 SetupRelease<BFD-RelaxationReportingConfig-r17>；源文件第 21617 行；CHOICE。
// Encode_SetupRelease_BFD_RelaxationReportingConfig_r17 只读不分配；Decode_SetupRelease_BFD_RelaxationReportingConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_BFD_RelaxationReportingConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_BFD_RelaxationReportingConfig_r17(Encoder& enc, const SetupRelease_BFD_RelaxationReportingConfig_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_BFD_RelaxationReportingConfig_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_BFD_RelaxationReportingConfig_r17_Tag_setup:
        Encode_BFD_RelaxationReportingConfig_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_BFD_RelaxationReportingConfig_r17(Decoder& dec, SetupRelease_BFD_RelaxationReportingConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_BFD_RelaxationReportingConfig_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_BFD_RelaxationReportingConfig_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_BFD_RelaxationReportingConfig_r17_Tag_setup: {
        if (Decode_BFD_RelaxationReportingConfig_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_BFD_RelaxationReportingConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_BFD_RelaxationReportingConfig_r17(SetupRelease_BFD_RelaxationReportingConfig_r17& value)
{
    switch (value.tag) {
    case SetupRelease_BFD_RelaxationReportingConfig_r17_Tag_release:
        break;
    case SetupRelease_BFD_RelaxationReportingConfig_r17_Tag_setup:
        Free_BFD_RelaxationReportingConfig_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SCG_DeactivationPreferenceConfig_r17：ASN.1 SCG-DeactivationPreferenceConfig-r17；源文件第 21737 行；SEQUENCE。
// Encode_SCG_DeactivationPreferenceConfig_r17 只读不分配；Decode_SCG_DeactivationPreferenceConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_SCG_DeactivationPreferenceConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SCG_DeactivationPreferenceConfig_r17(Encoder& enc, const SCG_DeactivationPreferenceConfig_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.scg_DeactivationPreferenceProhibitTimer_r17), 0, 15);
    return enc.Error();
}

ErrorCode Decode_SCG_DeactivationPreferenceConfig_r17(Decoder& dec, SCG_DeactivationPreferenceConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.scg_DeactivationPreferenceProhibitTimer_r17 = (SCG_DeactivationPreferenceConfig_r17_Scg_DeactivationPreferenceProhibitTimer_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SCG_DeactivationPreferenceConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SCG_DeactivationPreferenceConfig_r17(SCG_DeactivationPreferenceConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SCG_DeactivationPreferenceConfig_r17：ASN.1 SetupRelease<SCG-DeactivationPreferenceConfig-r17>；源文件第 21618 行；CHOICE。
// Encode_SetupRelease_SCG_DeactivationPreferenceConfig_r17 只读不分配；Decode_SetupRelease_SCG_DeactivationPreferenceConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SCG_DeactivationPreferenceConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SCG_DeactivationPreferenceConfig_r17(Encoder& enc, const SetupRelease_SCG_DeactivationPreferenceConfig_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SCG_DeactivationPreferenceConfig_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_SCG_DeactivationPreferenceConfig_r17_Tag_setup:
        Encode_SCG_DeactivationPreferenceConfig_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SCG_DeactivationPreferenceConfig_r17(Decoder& dec, SetupRelease_SCG_DeactivationPreferenceConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SCG_DeactivationPreferenceConfig_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SCG_DeactivationPreferenceConfig_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SCG_DeactivationPreferenceConfig_r17_Tag_setup: {
        if (Decode_SCG_DeactivationPreferenceConfig_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SCG_DeactivationPreferenceConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SCG_DeactivationPreferenceConfig_r17(SetupRelease_SCG_DeactivationPreferenceConfig_r17& value)
{
    switch (value.tag) {
    case SetupRelease_SCG_DeactivationPreferenceConfig_r17_Tag_release:
        break;
    case SetupRelease_SCG_DeactivationPreferenceConfig_r17_Tag_setup:
        Free_SCG_DeactivationPreferenceConfig_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRM_MeasRelaxationReportingConfig_r17：ASN.1 RRM-MeasRelaxationReportingConfig-r17；源文件第 21743 行；SEQUENCE。
// Encode_RRM_MeasRelaxationReportingConfig_r17 只读不分配；Decode_RRM_MeasRelaxationReportingConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_RRM_MeasRelaxationReportingConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRM_MeasRelaxationReportingConfig_r17(Encoder& enc, const RRM_MeasRelaxationReportingConfig_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.s_SearchDeltaP_Stationary_r17), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.t_SearchDeltaP_Stationary_r17), 0, 15);
    return enc.Error();
}

ErrorCode Decode_RRM_MeasRelaxationReportingConfig_r17(Decoder& dec, RRM_MeasRelaxationReportingConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.s_SearchDeltaP_Stationary_r17 = (RRM_MeasRelaxationReportingConfig_r17_S_SearchDeltaP_Stationary_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.t_SearchDeltaP_Stationary_r17 = (RRM_MeasRelaxationReportingConfig_r17_T_SearchDeltaP_Stationary_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRM_MeasRelaxationReportingConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRM_MeasRelaxationReportingConfig_r17(RRM_MeasRelaxationReportingConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_RRM_MeasRelaxationReportingConfig_r17：ASN.1 SetupRelease<RRM-MeasRelaxationReportingConfig-r17>；源文件第 21619 行；CHOICE。
// Encode_SetupRelease_RRM_MeasRelaxationReportingConfig_r17 只读不分配；Decode_SetupRelease_RRM_MeasRelaxationReportingConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_RRM_MeasRelaxationReportingConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_RRM_MeasRelaxationReportingConfig_r17(Encoder& enc, const SetupRelease_RRM_MeasRelaxationReportingConfig_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_RRM_MeasRelaxationReportingConfig_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_RRM_MeasRelaxationReportingConfig_r17_Tag_setup:
        Encode_RRM_MeasRelaxationReportingConfig_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_RRM_MeasRelaxationReportingConfig_r17(Decoder& dec, SetupRelease_RRM_MeasRelaxationReportingConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_RRM_MeasRelaxationReportingConfig_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_RRM_MeasRelaxationReportingConfig_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_RRM_MeasRelaxationReportingConfig_r17_Tag_setup: {
        if (Decode_RRM_MeasRelaxationReportingConfig_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_RRM_MeasRelaxationReportingConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_RRM_MeasRelaxationReportingConfig_r17(SetupRelease_RRM_MeasRelaxationReportingConfig_r17& value)
{
    switch (value.tag) {
    case SetupRelease_RRM_MeasRelaxationReportingConfig_r17_Tag_release:
        break;
    case SetupRelease_RRM_MeasRelaxationReportingConfig_r17_Tag_setup:
        Free_RRM_MeasRelaxationReportingConfig_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PropDelayDiffReportConfig_r17：ASN.1 PropDelayDiffReportConfig-r17；源文件第 21749 行；SEQUENCE。
// Encode_PropDelayDiffReportConfig_r17 只读不分配；Decode_PropDelayDiffReportConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_PropDelayDiffReportConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PropDelayDiffReportConfig_r17(Encoder& enc, const PropDelayDiffReportConfig_r17& value)
{
    enc.WriteBit(value.has_threshPropDelayDiff_r17);
    enc.WriteBit(value.has_neighCellInfoList_r17);
    if (value.has_threshPropDelayDiff_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.threshPropDelayDiff_r17), 0, 15);
    }
    if (value.has_neighCellInfoList_r17) {
enc.WriteConstrainedLength(value.neighCellInfoList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.neighCellInfoList_r17_count; ++i) {
    Encode_NeighbourCellInfo_r17(enc, value.neighCellInfoList_r17_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_PropDelayDiffReportConfig_r17(Decoder& dec, PropDelayDiffReportConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.threshPropDelayDiff_r17 = (PropDelayDiffReportConfig_r17_ThreshPropDelayDiff_r17)tmp_value;
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.neighCellInfoList_r17_count)) { goto fail; }
if (value.neighCellInfoList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.neighCellInfoList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.neighCellInfoList_r17_count > 0u) {
    value.neighCellInfoList_r17_items = (NeighbourCellInfo_r17*)std::malloc((std::size_t)value.neighCellInfoList_r17_count * sizeof(NeighbourCellInfo_r17));
    if (value.neighCellInfoList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.neighCellInfoList_r17_items, 0, (std::size_t)value.neighCellInfoList_r17_count * sizeof(NeighbourCellInfo_r17));
}
for (std::uint32_t i = 0; i < value.neighCellInfoList_r17_count; ++i) {
    if (Decode_NeighbourCellInfo_r17(dec, value.neighCellInfoList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_PropDelayDiffReportConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PropDelayDiffReportConfig_r17(PropDelayDiffReportConfig_r17& value)
{
    if (value.has_threshPropDelayDiff_r17) {
    }
    if (value.has_neighCellInfoList_r17) {
        if (value.neighCellInfoList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.neighCellInfoList_r17_count; ++i) {
                Free_NeighbourCellInfo_r17(value.neighCellInfoList_r17_items[i]);
            }
            std::free(value.neighCellInfoList_r17_items);
            value.neighCellInfoList_r17_items = nullptr;
        }
        value.neighCellInfoList_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PropDelayDiffReportConfig_r17：ASN.1 SetupRelease<PropDelayDiffReportConfig-r17>；源文件第 21620 行；CHOICE。
// Encode_SetupRelease_PropDelayDiffReportConfig_r17 只读不分配；Decode_SetupRelease_PropDelayDiffReportConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PropDelayDiffReportConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PropDelayDiffReportConfig_r17(Encoder& enc, const SetupRelease_PropDelayDiffReportConfig_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PropDelayDiffReportConfig_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_PropDelayDiffReportConfig_r17_Tag_setup:
        Encode_PropDelayDiffReportConfig_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PropDelayDiffReportConfig_r17(Decoder& dec, SetupRelease_PropDelayDiffReportConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PropDelayDiffReportConfig_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PropDelayDiffReportConfig_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PropDelayDiffReportConfig_r17_Tag_setup: {
        if (Decode_PropDelayDiffReportConfig_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PropDelayDiffReportConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PropDelayDiffReportConfig_r17(SetupRelease_PropDelayDiffReportConfig_r17& value)
{
    switch (value.tag) {
    case SetupRelease_PropDelayDiffReportConfig_r17_Tag_release:
        break;
    case SetupRelease_PropDelayDiffReportConfig_r17_Tag_setup:
        Free_PropDelayDiffReportConfig_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// OtherConfig_v1700：ASN.1 OtherConfig-v1700；源文件第 21608 行；SEQUENCE。
// Encode_OtherConfig_v1700 只读不分配；Decode_OtherConfig_v1700 可能 malloc（失败时内部已释放并清零）；Free_OtherConfig_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_OtherConfig_v1700(Encoder& enc, const OtherConfig_v1700& value)
{
    enc.WriteBit(value.has_ul_GapFR2_PreferenceConfig_r17);
    enc.WriteBit(value.has_musim_GapAssistanceConfig_r17);
    enc.WriteBit(value.has_musim_LeaveAssistanceConfig_r17);
    enc.WriteBit(value.has_successHO_Config_r17);
    enc.WriteBit(value.has_maxBW_PreferenceConfigFR2_2_r17);
    enc.WriteBit(value.has_maxMIMO_LayerPreferenceConfigFR2_2_r17);
    enc.WriteBit(value.has_minSchedulingOffsetPreferenceConfigExt_r17);
    enc.WriteBit(value.has_rlm_RelaxationReportingConfig_r17);
    enc.WriteBit(value.has_bfd_RelaxationReportingConfig_r17);
    enc.WriteBit(value.has_scg_DeactivationPreferenceConfig_r17);
    enc.WriteBit(value.has_rrm_MeasRelaxationReportingConfig_r17);
    enc.WriteBit(value.has_propDelayDiffReportConfig_r17);
    if (value.has_ul_GapFR2_PreferenceConfig_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_GapFR2_PreferenceConfig_r17), 0, 0);
    }
    if (value.has_musim_GapAssistanceConfig_r17) {
        Encode_SetupRelease_MUSIM_GapAssistanceConfig_r17(enc, value.musim_GapAssistanceConfig_r17);
    }
    if (value.has_musim_LeaveAssistanceConfig_r17) {
        Encode_SetupRelease_MUSIM_LeaveAssistanceConfig_r17(enc, value.musim_LeaveAssistanceConfig_r17);
    }
    if (value.has_successHO_Config_r17) {
        Encode_SetupRelease_SuccessHO_Config_r17(enc, value.successHO_Config_r17);
    }
    if (value.has_maxBW_PreferenceConfigFR2_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxBW_PreferenceConfigFR2_2_r17), 0, 0);
    }
    if (value.has_maxMIMO_LayerPreferenceConfigFR2_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxMIMO_LayerPreferenceConfigFR2_2_r17), 0, 0);
    }
    if (value.has_minSchedulingOffsetPreferenceConfigExt_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.minSchedulingOffsetPreferenceConfigExt_r17), 0, 0);
    }
    if (value.has_rlm_RelaxationReportingConfig_r17) {
        Encode_SetupRelease_RLM_RelaxationReportingConfig_r17(enc, value.rlm_RelaxationReportingConfig_r17);
    }
    if (value.has_bfd_RelaxationReportingConfig_r17) {
        Encode_SetupRelease_BFD_RelaxationReportingConfig_r17(enc, value.bfd_RelaxationReportingConfig_r17);
    }
    if (value.has_scg_DeactivationPreferenceConfig_r17) {
        Encode_SetupRelease_SCG_DeactivationPreferenceConfig_r17(enc, value.scg_DeactivationPreferenceConfig_r17);
    }
    if (value.has_rrm_MeasRelaxationReportingConfig_r17) {
        Encode_SetupRelease_RRM_MeasRelaxationReportingConfig_r17(enc, value.rrm_MeasRelaxationReportingConfig_r17);
    }
    if (value.has_propDelayDiffReportConfig_r17) {
        Encode_SetupRelease_PropDelayDiffReportConfig_r17(enc, value.propDelayDiffReportConfig_r17);
    }
    return enc.Error();
}

ErrorCode Decode_OtherConfig_v1700(Decoder& dec, OtherConfig_v1700& value)
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
        value.ul_GapFR2_PreferenceConfig_r17 = (OtherConfig_v1700_Ul_GapFR2_PreferenceConfig_r17)0;
    }
    if (present_1) {
        if (Decode_SetupRelease_MUSIM_GapAssistanceConfig_r17(dec, value.musim_GapAssistanceConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SetupRelease_MUSIM_LeaveAssistanceConfig_r17(dec, value.musim_LeaveAssistanceConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SetupRelease_SuccessHO_Config_r17(dec, value.successHO_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        value.maxBW_PreferenceConfigFR2_2_r17 = (OtherConfig_v1700_MaxBW_PreferenceConfigFR2_2_r17)0;
    }
    if (present_5) {
        value.maxMIMO_LayerPreferenceConfigFR2_2_r17 = (OtherConfig_v1700_MaxMIMO_LayerPreferenceConfigFR2_2_r17)0;
    }
    if (present_6) {
        value.minSchedulingOffsetPreferenceConfigExt_r17 = (OtherConfig_v1700_MinSchedulingOffsetPreferenceConfigExt_r17)0;
    }
    if (present_7) {
        if (Decode_SetupRelease_RLM_RelaxationReportingConfig_r17(dec, value.rlm_RelaxationReportingConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        if (Decode_SetupRelease_BFD_RelaxationReportingConfig_r17(dec, value.bfd_RelaxationReportingConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_9) {
        if (Decode_SetupRelease_SCG_DeactivationPreferenceConfig_r17(dec, value.scg_DeactivationPreferenceConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_10) {
        if (Decode_SetupRelease_RRM_MeasRelaxationReportingConfig_r17(dec, value.rrm_MeasRelaxationReportingConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_11) {
        if (Decode_SetupRelease_PropDelayDiffReportConfig_r17(dec, value.propDelayDiffReportConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_OtherConfig_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_OtherConfig_v1700(OtherConfig_v1700& value)
{
    if (value.has_ul_GapFR2_PreferenceConfig_r17) {
    }
    if (value.has_musim_GapAssistanceConfig_r17) {
        Free_SetupRelease_MUSIM_GapAssistanceConfig_r17(value.musim_GapAssistanceConfig_r17);
    }
    if (value.has_musim_LeaveAssistanceConfig_r17) {
        Free_SetupRelease_MUSIM_LeaveAssistanceConfig_r17(value.musim_LeaveAssistanceConfig_r17);
    }
    if (value.has_successHO_Config_r17) {
        Free_SetupRelease_SuccessHO_Config_r17(value.successHO_Config_r17);
    }
    if (value.has_maxBW_PreferenceConfigFR2_2_r17) {
    }
    if (value.has_maxMIMO_LayerPreferenceConfigFR2_2_r17) {
    }
    if (value.has_minSchedulingOffsetPreferenceConfigExt_r17) {
    }
    if (value.has_rlm_RelaxationReportingConfig_r17) {
        Free_SetupRelease_RLM_RelaxationReportingConfig_r17(value.rlm_RelaxationReportingConfig_r17);
    }
    if (value.has_bfd_RelaxationReportingConfig_r17) {
        Free_SetupRelease_BFD_RelaxationReportingConfig_r17(value.bfd_RelaxationReportingConfig_r17);
    }
    if (value.has_scg_DeactivationPreferenceConfig_r17) {
        Free_SetupRelease_SCG_DeactivationPreferenceConfig_r17(value.scg_DeactivationPreferenceConfig_r17);
    }
    if (value.has_rrm_MeasRelaxationReportingConfig_r17) {
        Free_SetupRelease_RRM_MeasRelaxationReportingConfig_r17(value.rrm_MeasRelaxationReportingConfig_r17);
    }
    if (value.has_propDelayDiffReportConfig_r17) {
        Free_SetupRelease_PropDelayDiffReportConfig_r17(value.propDelayDiffReportConfig_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_L2RelayUE_Config_r17_ExtGroup1：ASN.1 SL_L2RelayUE_Config_r17_ExtGroup1；源文件第 22533 行；扩展添加组 [[ ]]。
// Encode_SL_L2RelayUE_Config_r17_ExtGroup1 只读不分配；Decode_SL_L2RelayUE_Config_r17_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SL_L2RelayUE_Config_r17_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_L2RelayUE_Config_r17_ExtGroup1(Encoder& enc, const SL_L2RelayUE_Config_r17_ExtGroup1& value)
{
    enc.WriteBit(value.has_sl_U2U_RemoteUE_ToAddModList_r18);
    enc.WriteBit(value.has_sl_U2U_RemoteUE_ToReleaseList_r18);
    if (value.has_sl_U2U_RemoteUE_ToAddModList_r18) {
enc.WriteConstrainedLength(value.sl_U2U_RemoteUE_ToAddModList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_U2U_RemoteUE_ToAddModList_r18_count; ++i) {
    Encode_SL_U2U_RemoteUE_ToAddMod_r18(enc, value.sl_U2U_RemoteUE_ToAddModList_r18_items[i]);
}
    }
    if (value.has_sl_U2U_RemoteUE_ToReleaseList_r18) {
enc.WriteConstrainedLength(value.sl_U2U_RemoteUE_ToReleaseList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_U2U_RemoteUE_ToReleaseList_r18_count; ++i) {
    enc.WriteFixedBitString(value.sl_U2U_RemoteUE_ToReleaseList_r18_items[i].bytes, value.sl_U2U_RemoteUE_ToReleaseList_r18_items[i].bitLength, 24, 24);
}
    }
    return enc.Error();
}

ErrorCode Decode_SL_L2RelayUE_Config_r17_ExtGroup1(Decoder& dec, SL_L2RelayUE_Config_r17_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_U2U_RemoteUE_ToAddModList_r18_count)) { goto fail; }
if (value.sl_U2U_RemoteUE_ToAddModList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_U2U_RemoteUE_ToAddModList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_U2U_RemoteUE_ToAddModList_r18_count > 0u) {
    value.sl_U2U_RemoteUE_ToAddModList_r18_items = (SL_U2U_RemoteUE_ToAddMod_r18*)std::malloc((std::size_t)value.sl_U2U_RemoteUE_ToAddModList_r18_count * sizeof(SL_U2U_RemoteUE_ToAddMod_r18));
    if (value.sl_U2U_RemoteUE_ToAddModList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_U2U_RemoteUE_ToAddModList_r18_items, 0, (std::size_t)value.sl_U2U_RemoteUE_ToAddModList_r18_count * sizeof(SL_U2U_RemoteUE_ToAddMod_r18));
}
for (std::uint32_t i = 0; i < value.sl_U2U_RemoteUE_ToAddModList_r18_count; ++i) {
    if (Decode_SL_U2U_RemoteUE_ToAddMod_r18(dec, value.sl_U2U_RemoteUE_ToAddModList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_U2U_RemoteUE_ToReleaseList_r18_count)) { goto fail; }
if (value.sl_U2U_RemoteUE_ToReleaseList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_U2U_RemoteUE_ToReleaseList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_U2U_RemoteUE_ToReleaseList_r18_count > 0u) {
    value.sl_U2U_RemoteUE_ToReleaseList_r18_items = (SL_DestinationIdentity_r16*)std::malloc((std::size_t)value.sl_U2U_RemoteUE_ToReleaseList_r18_count * sizeof(SL_DestinationIdentity_r16));
    if (value.sl_U2U_RemoteUE_ToReleaseList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_U2U_RemoteUE_ToReleaseList_r18_items, 0, (std::size_t)value.sl_U2U_RemoteUE_ToReleaseList_r18_count * sizeof(SL_DestinationIdentity_r16));
}
for (std::uint32_t i = 0; i < value.sl_U2U_RemoteUE_ToReleaseList_r18_count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
    string_length = 24;
    value.sl_U2U_RemoteUE_ToReleaseList_r18_items[i].bytes = string_bytes;
    value.sl_U2U_RemoteUE_ToReleaseList_r18_items[i].bitLength = string_length;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_L2RelayUE_Config_r17_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_L2RelayUE_Config_r17_ExtGroup1(SL_L2RelayUE_Config_r17_ExtGroup1& value)
{
    if (value.has_sl_U2U_RemoteUE_ToAddModList_r18) {
        if (value.sl_U2U_RemoteUE_ToAddModList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_U2U_RemoteUE_ToAddModList_r18_count; ++i) {
                Free_SL_U2U_RemoteUE_ToAddMod_r18(value.sl_U2U_RemoteUE_ToAddModList_r18_items[i]);
            }
            std::free(value.sl_U2U_RemoteUE_ToAddModList_r18_items);
            value.sl_U2U_RemoteUE_ToAddModList_r18_items = nullptr;
        }
        value.sl_U2U_RemoteUE_ToAddModList_r18_count = 0;
    }
    if (value.has_sl_U2U_RemoteUE_ToReleaseList_r18) {
        if (value.sl_U2U_RemoteUE_ToReleaseList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_U2U_RemoteUE_ToReleaseList_r18_count; ++i) {
                std::free(value.sl_U2U_RemoteUE_ToReleaseList_r18_items[i].bytes);
                value.sl_U2U_RemoteUE_ToReleaseList_r18_items[i].bytes = nullptr;
                value.sl_U2U_RemoteUE_ToReleaseList_r18_items[i].bitLength = 0;
            }
            std::free(value.sl_U2U_RemoteUE_ToReleaseList_r18_items);
            value.sl_U2U_RemoteUE_ToReleaseList_r18_items = nullptr;
        }
        value.sl_U2U_RemoteUE_ToReleaseList_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_L2RelayUE_Config_r17：ASN.1 SL-L2RelayUE-Config-r17；源文件第 22529 行；SEQUENCE。
// Encode_SL_L2RelayUE_Config_r17 只读不分配；Decode_SL_L2RelayUE_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_SL_L2RelayUE_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_L2RelayUE_Config_r17(Encoder& enc, const SL_L2RelayUE_Config_r17& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_RemoteUE_ToAddModList_r17);
    enc.WriteBit(value.has_sl_RemoteUE_ToReleaseList_r17);
    if (value.has_sl_RemoteUE_ToAddModList_r17) {
enc.WriteConstrainedLength(value.sl_RemoteUE_ToAddModList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_RemoteUE_ToAddModList_r17_count; ++i) {
    Encode_SL_RemoteUE_ToAddMod_r17(enc, value.sl_RemoteUE_ToAddModList_r17_items[i]);
}
    }
    if (value.has_sl_RemoteUE_ToReleaseList_r17) {
enc.WriteConstrainedLength(value.sl_RemoteUE_ToReleaseList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_RemoteUE_ToReleaseList_r17_count; ++i) {
    enc.WriteFixedBitString(value.sl_RemoteUE_ToReleaseList_r17_items[i].bytes, value.sl_RemoteUE_ToReleaseList_r17_items[i].bitLength, 24, 24);
}
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SL_L2RelayUE_Config_r17_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SL_L2RelayUE_Config_r17(Decoder& dec, SL_L2RelayUE_Config_r17& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_RemoteUE_ToAddModList_r17_count)) { goto fail; }
if (value.sl_RemoteUE_ToAddModList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_RemoteUE_ToAddModList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_RemoteUE_ToAddModList_r17_count > 0u) {
    value.sl_RemoteUE_ToAddModList_r17_items = (SL_RemoteUE_ToAddMod_r17*)std::malloc((std::size_t)value.sl_RemoteUE_ToAddModList_r17_count * sizeof(SL_RemoteUE_ToAddMod_r17));
    if (value.sl_RemoteUE_ToAddModList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_RemoteUE_ToAddModList_r17_items, 0, (std::size_t)value.sl_RemoteUE_ToAddModList_r17_count * sizeof(SL_RemoteUE_ToAddMod_r17));
}
for (std::uint32_t i = 0; i < value.sl_RemoteUE_ToAddModList_r17_count; ++i) {
    if (Decode_SL_RemoteUE_ToAddMod_r17(dec, value.sl_RemoteUE_ToAddModList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_RemoteUE_ToReleaseList_r17_count)) { goto fail; }
if (value.sl_RemoteUE_ToReleaseList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_RemoteUE_ToReleaseList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_RemoteUE_ToReleaseList_r17_count > 0u) {
    value.sl_RemoteUE_ToReleaseList_r17_items = (SL_DestinationIdentity_r16*)std::malloc((std::size_t)value.sl_RemoteUE_ToReleaseList_r17_count * sizeof(SL_DestinationIdentity_r16));
    if (value.sl_RemoteUE_ToReleaseList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_RemoteUE_ToReleaseList_r17_items, 0, (std::size_t)value.sl_RemoteUE_ToReleaseList_r17_count * sizeof(SL_DestinationIdentity_r16));
}
for (std::uint32_t i = 0; i < value.sl_RemoteUE_ToReleaseList_r17_count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
    string_length = 24;
    value.sl_RemoteUE_ToReleaseList_r17_items[i].bytes = string_bytes;
    value.sl_RemoteUE_ToReleaseList_r17_items[i].bitLength = string_length;
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
    if (Decode_SL_L2RelayUE_Config_r17_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_SL_L2RelayUE_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_L2RelayUE_Config_r17(SL_L2RelayUE_Config_r17& value)
{
    if (value.has_sl_RemoteUE_ToAddModList_r17) {
        if (value.sl_RemoteUE_ToAddModList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_RemoteUE_ToAddModList_r17_count; ++i) {
                Free_SL_RemoteUE_ToAddMod_r17(value.sl_RemoteUE_ToAddModList_r17_items[i]);
            }
            std::free(value.sl_RemoteUE_ToAddModList_r17_items);
            value.sl_RemoteUE_ToAddModList_r17_items = nullptr;
        }
        value.sl_RemoteUE_ToAddModList_r17_count = 0;
    }
    if (value.has_sl_RemoteUE_ToReleaseList_r17) {
        if (value.sl_RemoteUE_ToReleaseList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_RemoteUE_ToReleaseList_r17_count; ++i) {
                std::free(value.sl_RemoteUE_ToReleaseList_r17_items[i].bytes);
                value.sl_RemoteUE_ToReleaseList_r17_items[i].bytes = nullptr;
                value.sl_RemoteUE_ToReleaseList_r17_items[i].bitLength = 0;
            }
            std::free(value.sl_RemoteUE_ToReleaseList_r17_items);
            value.sl_RemoteUE_ToReleaseList_r17_items = nullptr;
        }
        value.sl_RemoteUE_ToReleaseList_r17_count = 0;
    }
    if (value.has_extGroup1) {
        Free_SL_L2RelayUE_Config_r17_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SL_L2RelayUE_Config_r17：ASN.1 SetupRelease<SL-L2RelayUE-Config-r17>；源文件第 986 行；CHOICE。
// Encode_SetupRelease_SL_L2RelayUE_Config_r17 只读不分配；Decode_SetupRelease_SL_L2RelayUE_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SL_L2RelayUE_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SL_L2RelayUE_Config_r17(Encoder& enc, const SetupRelease_SL_L2RelayUE_Config_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SL_L2RelayUE_Config_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_SL_L2RelayUE_Config_r17_Tag_setup:
        Encode_SL_L2RelayUE_Config_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SL_L2RelayUE_Config_r17(Decoder& dec, SetupRelease_SL_L2RelayUE_Config_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SL_L2RelayUE_Config_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SL_L2RelayUE_Config_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SL_L2RelayUE_Config_r17_Tag_setup: {
        if (Decode_SL_L2RelayUE_Config_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SL_L2RelayUE_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SL_L2RelayUE_Config_r17(SetupRelease_SL_L2RelayUE_Config_r17& value)
{
    switch (value.tag) {
    case SetupRelease_SL_L2RelayUE_Config_r17_Tag_release:
        break;
    case SetupRelease_SL_L2RelayUE_Config_r17_Tag_setup:
        Free_SL_L2RelayUE_Config_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NeedForGapNCSG_ConfigNR_r17：ASN.1 NeedForGapNCSG-ConfigNR-r17；源文件第 8688 行；SEQUENCE。
// Encode_NeedForGapNCSG_ConfigNR_r17 只读不分配；Decode_NeedForGapNCSG_ConfigNR_r17 可能 malloc（失败时内部已释放并清零）；Free_NeedForGapNCSG_ConfigNR_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NeedForGapNCSG_ConfigNR_r17(Encoder& enc, const NeedForGapNCSG_ConfigNR_r17& value)
{
    enc.WriteBit(value.has_requestedTargetBandFilterNCSG_NR_r17);
    if (value.has_requestedTargetBandFilterNCSG_NR_r17) {
enc.WriteConstrainedLength(value.requestedTargetBandFilterNCSG_NR_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.requestedTargetBandFilterNCSG_NR_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.requestedTargetBandFilterNCSG_NR_r17_items[i]), 1, 1024);
}
    }
    return enc.Error();
}

ErrorCode Decode_NeedForGapNCSG_ConfigNR_r17(Decoder& dec, NeedForGapNCSG_ConfigNR_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.requestedTargetBandFilterNCSG_NR_r17_count)) { goto fail; }
if (value.requestedTargetBandFilterNCSG_NR_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.requestedTargetBandFilterNCSG_NR_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.requestedTargetBandFilterNCSG_NR_r17_count > 0u) {
    value.requestedTargetBandFilterNCSG_NR_r17_items = (FreqBandIndicatorNR*)std::malloc((std::size_t)value.requestedTargetBandFilterNCSG_NR_r17_count * sizeof(FreqBandIndicatorNR));
    if (value.requestedTargetBandFilterNCSG_NR_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.requestedTargetBandFilterNCSG_NR_r17_items, 0, (std::size_t)value.requestedTargetBandFilterNCSG_NR_r17_count * sizeof(FreqBandIndicatorNR));
}
for (std::uint32_t i = 0; i < value.requestedTargetBandFilterNCSG_NR_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 1024, tmp_value)) { goto fail; }
    value.requestedTargetBandFilterNCSG_NR_r17_items[i] = (FreqBandIndicatorNR)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_NeedForGapNCSG_ConfigNR_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NeedForGapNCSG_ConfigNR_r17(NeedForGapNCSG_ConfigNR_r17& value)
{
    if (value.has_requestedTargetBandFilterNCSG_NR_r17) {
        if (value.requestedTargetBandFilterNCSG_NR_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.requestedTargetBandFilterNCSG_NR_r17_count; ++i) {
            }
            std::free(value.requestedTargetBandFilterNCSG_NR_r17_items);
            value.requestedTargetBandFilterNCSG_NR_r17_items = nullptr;
        }
        value.requestedTargetBandFilterNCSG_NR_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_NeedForGapNCSG_ConfigNR_r17：ASN.1 SetupRelease<NeedForGapNCSG-ConfigNR-r17>；源文件第 989 行；CHOICE。
// Encode_SetupRelease_NeedForGapNCSG_ConfigNR_r17 只读不分配；Decode_SetupRelease_NeedForGapNCSG_ConfigNR_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_NeedForGapNCSG_ConfigNR_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_NeedForGapNCSG_ConfigNR_r17(Encoder& enc, const SetupRelease_NeedForGapNCSG_ConfigNR_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_NeedForGapNCSG_ConfigNR_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_NeedForGapNCSG_ConfigNR_r17_Tag_setup:
        Encode_NeedForGapNCSG_ConfigNR_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_NeedForGapNCSG_ConfigNR_r17(Decoder& dec, SetupRelease_NeedForGapNCSG_ConfigNR_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_NeedForGapNCSG_ConfigNR_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_NeedForGapNCSG_ConfigNR_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_NeedForGapNCSG_ConfigNR_r17_Tag_setup: {
        if (Decode_NeedForGapNCSG_ConfigNR_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_NeedForGapNCSG_ConfigNR_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_NeedForGapNCSG_ConfigNR_r17(SetupRelease_NeedForGapNCSG_ConfigNR_r17& value)
{
    switch (value.tag) {
    case SetupRelease_NeedForGapNCSG_ConfigNR_r17_Tag_release:
        break;
    case SetupRelease_NeedForGapNCSG_ConfigNR_r17_Tag_setup:
        Free_NeedForGapNCSG_ConfigNR_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NeedForGapNCSG_ConfigEUTRA_r17：ASN.1 NeedForGapNCSG-ConfigEUTRA-r17；源文件第 8681 行；SEQUENCE。
// Encode_NeedForGapNCSG_ConfigEUTRA_r17 只读不分配；Decode_NeedForGapNCSG_ConfigEUTRA_r17 可能 malloc（失败时内部已释放并清零）；Free_NeedForGapNCSG_ConfigEUTRA_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NeedForGapNCSG_ConfigEUTRA_r17(Encoder& enc, const NeedForGapNCSG_ConfigEUTRA_r17& value)
{
    enc.WriteBit(value.has_requestedTargetBandFilterNCSG_EUTRA_r17);
    if (value.has_requestedTargetBandFilterNCSG_EUTRA_r17) {
enc.WriteConstrainedLength(value.requestedTargetBandFilterNCSG_EUTRA_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.requestedTargetBandFilterNCSG_EUTRA_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.requestedTargetBandFilterNCSG_EUTRA_r17_items[i]), 1, 256);
}
    }
    return enc.Error();
}

ErrorCode Decode_NeedForGapNCSG_ConfigEUTRA_r17(Decoder& dec, NeedForGapNCSG_ConfigEUTRA_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.requestedTargetBandFilterNCSG_EUTRA_r17_count)) { goto fail; }
if (value.requestedTargetBandFilterNCSG_EUTRA_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.requestedTargetBandFilterNCSG_EUTRA_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.requestedTargetBandFilterNCSG_EUTRA_r17_count > 0u) {
    value.requestedTargetBandFilterNCSG_EUTRA_r17_items = (FreqBandIndicatorEUTRA*)std::malloc((std::size_t)value.requestedTargetBandFilterNCSG_EUTRA_r17_count * sizeof(FreqBandIndicatorEUTRA));
    if (value.requestedTargetBandFilterNCSG_EUTRA_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.requestedTargetBandFilterNCSG_EUTRA_r17_items, 0, (std::size_t)value.requestedTargetBandFilterNCSG_EUTRA_r17_count * sizeof(FreqBandIndicatorEUTRA));
}
for (std::uint32_t i = 0; i < value.requestedTargetBandFilterNCSG_EUTRA_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 256, tmp_value)) { goto fail; }
    value.requestedTargetBandFilterNCSG_EUTRA_r17_items[i] = (FreqBandIndicatorEUTRA)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_NeedForGapNCSG_ConfigEUTRA_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NeedForGapNCSG_ConfigEUTRA_r17(NeedForGapNCSG_ConfigEUTRA_r17& value)
{
    if (value.has_requestedTargetBandFilterNCSG_EUTRA_r17) {
        if (value.requestedTargetBandFilterNCSG_EUTRA_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.requestedTargetBandFilterNCSG_EUTRA_r17_count; ++i) {
            }
            std::free(value.requestedTargetBandFilterNCSG_EUTRA_r17_items);
            value.requestedTargetBandFilterNCSG_EUTRA_r17_items = nullptr;
        }
        value.requestedTargetBandFilterNCSG_EUTRA_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17：ASN.1 SetupRelease<NeedForGapNCSG-ConfigEUTRA-r17>；源文件第 990 行；CHOICE。
// Encode_SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17 只读不分配；Decode_SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17(Encoder& enc, const SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17_Tag_setup:
        Encode_NeedForGapNCSG_ConfigEUTRA_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17(Decoder& dec, SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17_Tag_setup: {
        if (Decode_NeedForGapNCSG_ConfigEUTRA_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17(SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17& value)
{
    switch (value.tag) {
    case SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17_Tag_release:
        break;
    case SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17_Tag_setup:
        Free_NeedForGapNCSG_ConfigEUTRA_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MUSIM_GapConfig_r17_ExtGroup1：ASN.1 MUSIM_GapConfig_r17_ExtGroup1；源文件第 8408 行；扩展添加组 [[ ]]。
// Encode_MUSIM_GapConfig_r17_ExtGroup1 只读不分配；Decode_MUSIM_GapConfig_r17_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_MUSIM_GapConfig_r17_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MUSIM_GapConfig_r17_ExtGroup1(Encoder& enc, const MUSIM_GapConfig_r17_ExtGroup1& value)
{
    enc.WriteBit(value.has_musim_GapPriorityToAddModListExt_v1800);
    enc.WriteBit(value.has_musim_GapKeep_r18);
    if (value.has_musim_GapPriorityToAddModListExt_v1800) {
enc.WriteConstrainedLength(value.musim_GapPriorityToAddModListExt_v1800_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.musim_GapPriorityToAddModListExt_v1800_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.musim_GapPriorityToAddModListExt_v1800_items[i]), 1, 16);
}
    }
    if (value.has_musim_GapKeep_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.musim_GapKeep_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MUSIM_GapConfig_r17_ExtGroup1(Decoder& dec, MUSIM_GapConfig_r17_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.musim_GapPriorityToAddModListExt_v1800_count)) { goto fail; }
if (value.musim_GapPriorityToAddModListExt_v1800_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.musim_GapPriorityToAddModListExt_v1800_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.musim_GapPriorityToAddModListExt_v1800_count > 0u) {
    value.musim_GapPriorityToAddModListExt_v1800_items = (GapPriority_r17*)std::malloc((std::size_t)value.musim_GapPriorityToAddModListExt_v1800_count * sizeof(GapPriority_r17));
    if (value.musim_GapPriorityToAddModListExt_v1800_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.musim_GapPriorityToAddModListExt_v1800_items, 0, (std::size_t)value.musim_GapPriorityToAddModListExt_v1800_count * sizeof(GapPriority_r17));
}
for (std::uint32_t i = 0; i < value.musim_GapPriorityToAddModListExt_v1800_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
    value.musim_GapPriorityToAddModListExt_v1800_items[i] = (GapPriority_r17)tmp_value;
}
    }
    if (present_1) {
        value.musim_GapKeep_r18 = (MUSIM_GapConfig_r17_ExtGroup1_Musim_GapKeep_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MUSIM_GapConfig_r17_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MUSIM_GapConfig_r17_ExtGroup1(MUSIM_GapConfig_r17_ExtGroup1& value)
{
    if (value.has_musim_GapPriorityToAddModListExt_v1800) {
        if (value.musim_GapPriorityToAddModListExt_v1800_items != nullptr) {
            for (std::uint32_t i = 0; i < value.musim_GapPriorityToAddModListExt_v1800_count; ++i) {
            }
            std::free(value.musim_GapPriorityToAddModListExt_v1800_items);
            value.musim_GapPriorityToAddModListExt_v1800_items = nullptr;
        }
        value.musim_GapPriorityToAddModListExt_v1800_count = 0;
    }
    if (value.has_musim_GapKeep_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MUSIM_Starting_SFN_AndSubframe_r17：ASN.1 MUSIM-Starting-SFN-AndSubframe-r17；源文件第 8444 行；SEQUENCE。
// Encode_MUSIM_Starting_SFN_AndSubframe_r17 只读不分配；Decode_MUSIM_Starting_SFN_AndSubframe_r17 可能 malloc（失败时内部已释放并清零）；Free_MUSIM_Starting_SFN_AndSubframe_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MUSIM_Starting_SFN_AndSubframe_r17(Encoder& enc, const MUSIM_Starting_SFN_AndSubframe_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.starting_SFN_r17), 0, 1023);
    enc.WriteConstrainedInteger((std::int64_t)(value.startingSubframe_r17), 0, 9);
    return enc.Error();
}

ErrorCode Decode_MUSIM_Starting_SFN_AndSubframe_r17(Decoder& dec, MUSIM_Starting_SFN_AndSubframe_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.starting_SFN_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.startingSubframe_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MUSIM_Starting_SFN_AndSubframe_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MUSIM_Starting_SFN_AndSubframe_r17(MUSIM_Starting_SFN_AndSubframe_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17：ASN.1 musim-GapRepetitionAndOffset-r17；源文件第 8430 行；CHOICE。
// Encode_MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17 只读不分配；Decode_MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17 可能 malloc（失败时内部已释放并清零）；Free_MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17(Encoder& enc, const MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 9) {
        if (choice_index >= 9) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 9));
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
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 8);
    switch (value.tag) {
    case MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms20_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms20_r17), 0, 19);
        break;
    case MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms40_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms40_r17), 0, 39);
        break;
    case MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms80_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms80_r17), 0, 79);
        break;
    case MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms160_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms160_r17), 0, 159);
        break;
    case MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms320_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms320_r17), 0, 319);
        break;
    case MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms640_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms640_r17), 0, 639);
        break;
    case MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms1280_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms1280_r17), 0, 1279);
        break;
    case MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms2560_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms2560_r17), 0, 2559);
        break;
    case MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms5120_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms5120_r17), 0, 5119);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17(Decoder& dec, MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17& value)
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
        value.tag = (MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag)(9 + extension_index);
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
    if (!dec.ReadConstrainedInteger(0, 8, root_index)) {
        goto fail;
    }
    value.tag = (MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag)root_index;
    switch (value.tag) {
    case MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms20_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 19, tmp_value)) { goto fail; }
        value.u.ms20_r17 = (int64_t)tmp_value;
        break;
    }
    case MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms40_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.ms40_r17 = (int64_t)tmp_value;
        break;
    }
    case MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms80_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.ms80_r17 = (int64_t)tmp_value;
        break;
    }
    case MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms160_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.u.ms160_r17 = (int64_t)tmp_value;
        break;
    }
    case MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms320_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.u.ms320_r17 = (int64_t)tmp_value;
        break;
    }
    case MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms640_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.u.ms640_r17 = (int64_t)tmp_value;
        break;
    }
    case MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms1280_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1279, tmp_value)) { goto fail; }
        value.u.ms1280_r17 = (int64_t)tmp_value;
        break;
    }
    case MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms2560_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2559, tmp_value)) { goto fail; }
        value.u.ms2560_r17 = (int64_t)tmp_value;
        break;
    }
    case MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms5120_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5119, tmp_value)) { goto fail; }
        value.u.ms5120_r17 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17(MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17& value)
{
    switch (value.tag) {
    case MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms20_r17:
        break;
    case MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms40_r17:
        break;
    case MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms80_r17:
        break;
    case MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms160_r17:
        break;
    case MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms320_r17:
        break;
    case MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms640_r17:
        break;
    case MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms1280_r17:
        break;
    case MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms2560_r17:
        break;
    case MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms5120_r17:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MUSIM_GapInfo_r17：ASN.1 MUSIM-GapInfo-r17；源文件第 8427 行；SEQUENCE。
// Encode_MUSIM_GapInfo_r17 只读不分配；Decode_MUSIM_GapInfo_r17 可能 malloc（失败时内部已释放并清零）；Free_MUSIM_GapInfo_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MUSIM_GapInfo_r17(Encoder& enc, const MUSIM_GapInfo_r17& value)
{
    enc.WriteBit(value.has_musim_Starting_SFN_AndSubframe_r17);
    enc.WriteBit(value.has_musim_GapLength_r17);
    enc.WriteBit(value.has_musim_GapRepetitionAndOffset_r17);
    if (value.has_musim_Starting_SFN_AndSubframe_r17) {
        Encode_MUSIM_Starting_SFN_AndSubframe_r17(enc, value.musim_Starting_SFN_AndSubframe_r17);
    }
    if (value.has_musim_GapLength_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.musim_GapLength_r17), 0, 4);
    }
    if (value.has_musim_GapRepetitionAndOffset_r17) {
        Encode_MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17(enc, value.musim_GapRepetitionAndOffset_r17);
    }
    return enc.Error();
}

ErrorCode Decode_MUSIM_GapInfo_r17(Decoder& dec, MUSIM_GapInfo_r17& value)
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
        if (Decode_MUSIM_Starting_SFN_AndSubframe_r17(dec, value.musim_Starting_SFN_AndSubframe_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.musim_GapLength_r17 = (MUSIM_GapInfo_r17_Musim_GapLength_r17)tmp_value;
    }
    if (present_2) {
        if (Decode_MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17(dec, value.musim_GapRepetitionAndOffset_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MUSIM_GapInfo_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MUSIM_GapInfo_r17(MUSIM_GapInfo_r17& value)
{
    if (value.has_musim_Starting_SFN_AndSubframe_r17) {
        Free_MUSIM_Starting_SFN_AndSubframe_r17(value.musim_Starting_SFN_AndSubframe_r17);
    }
    if (value.has_musim_GapLength_r17) {
    }
    if (value.has_musim_GapRepetitionAndOffset_r17) {
        Free_MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17(value.musim_GapRepetitionAndOffset_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MUSIM_GapConfig_r17：ASN.1 MUSIM-GapConfig-r17；源文件第 8403 行；SEQUENCE。
// Encode_MUSIM_GapConfig_r17 只读不分配；Decode_MUSIM_GapConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_MUSIM_GapConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MUSIM_GapConfig_r17(Encoder& enc, const MUSIM_GapConfig_r17& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_musim_GapToReleaseList_r17);
    enc.WriteBit(value.has_musim_GapToAddModList_r17);
    enc.WriteBit(value.has_musim_AperiodicGap_r17);
    if (value.has_musim_GapToReleaseList_r17) {
enc.WriteConstrainedLength(value.musim_GapToReleaseList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.musim_GapToReleaseList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.musim_GapToReleaseList_r17_items[i]), 0, 2);
}
    }
    if (value.has_musim_GapToAddModList_r17) {
enc.WriteConstrainedLength(value.musim_GapToAddModList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.musim_GapToAddModList_r17_count; ++i) {
    Encode_MUSIM_Gap_r17(enc, value.musim_GapToAddModList_r17_items[i]);
}
    }
    if (value.has_musim_AperiodicGap_r17) {
        Encode_MUSIM_GapInfo_r17(enc, value.musim_AperiodicGap_r17);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_MUSIM_GapConfig_r17_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_MUSIM_GapConfig_r17(Decoder& dec, MUSIM_GapConfig_r17& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.musim_GapToReleaseList_r17_count)) { goto fail; }
if (value.musim_GapToReleaseList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.musim_GapToReleaseList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.musim_GapToReleaseList_r17_count > 0u) {
    value.musim_GapToReleaseList_r17_items = (MUSIM_GapId_r17*)std::malloc((std::size_t)value.musim_GapToReleaseList_r17_count * sizeof(MUSIM_GapId_r17));
    if (value.musim_GapToReleaseList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.musim_GapToReleaseList_r17_items, 0, (std::size_t)value.musim_GapToReleaseList_r17_count * sizeof(MUSIM_GapId_r17));
}
for (std::uint32_t i = 0; i < value.musim_GapToReleaseList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
    value.musim_GapToReleaseList_r17_items[i] = (MUSIM_GapId_r17)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.musim_GapToAddModList_r17_count)) { goto fail; }
if (value.musim_GapToAddModList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.musim_GapToAddModList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.musim_GapToAddModList_r17_count > 0u) {
    value.musim_GapToAddModList_r17_items = (MUSIM_Gap_r17*)std::malloc((std::size_t)value.musim_GapToAddModList_r17_count * sizeof(MUSIM_Gap_r17));
    if (value.musim_GapToAddModList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.musim_GapToAddModList_r17_items, 0, (std::size_t)value.musim_GapToAddModList_r17_count * sizeof(MUSIM_Gap_r17));
}
for (std::uint32_t i = 0; i < value.musim_GapToAddModList_r17_count; ++i) {
    if (Decode_MUSIM_Gap_r17(dec, value.musim_GapToAddModList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
        if (Decode_MUSIM_GapInfo_r17(dec, value.musim_AperiodicGap_r17) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_MUSIM_GapConfig_r17_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_MUSIM_GapConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MUSIM_GapConfig_r17(MUSIM_GapConfig_r17& value)
{
    if (value.has_musim_GapToReleaseList_r17) {
        if (value.musim_GapToReleaseList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.musim_GapToReleaseList_r17_count; ++i) {
            }
            std::free(value.musim_GapToReleaseList_r17_items);
            value.musim_GapToReleaseList_r17_items = nullptr;
        }
        value.musim_GapToReleaseList_r17_count = 0;
    }
    if (value.has_musim_GapToAddModList_r17) {
        if (value.musim_GapToAddModList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.musim_GapToAddModList_r17_count; ++i) {
                Free_MUSIM_Gap_r17(value.musim_GapToAddModList_r17_items[i]);
            }
            std::free(value.musim_GapToAddModList_r17_items);
            value.musim_GapToAddModList_r17_items = nullptr;
        }
        value.musim_GapToAddModList_r17_count = 0;
    }
    if (value.has_musim_AperiodicGap_r17) {
        Free_MUSIM_GapInfo_r17(value.musim_AperiodicGap_r17);
    }
    if (value.has_extGroup1) {
        Free_MUSIM_GapConfig_r17_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_MUSIM_GapConfig_r17：ASN.1 SetupRelease<MUSIM-GapConfig-r17>；源文件第 991 行；CHOICE。
// Encode_SetupRelease_MUSIM_GapConfig_r17 只读不分配；Decode_SetupRelease_MUSIM_GapConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_MUSIM_GapConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_MUSIM_GapConfig_r17(Encoder& enc, const SetupRelease_MUSIM_GapConfig_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_MUSIM_GapConfig_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_MUSIM_GapConfig_r17_Tag_setup:
        Encode_MUSIM_GapConfig_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_MUSIM_GapConfig_r17(Decoder& dec, SetupRelease_MUSIM_GapConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_MUSIM_GapConfig_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_MUSIM_GapConfig_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_MUSIM_GapConfig_r17_Tag_setup: {
        if (Decode_MUSIM_GapConfig_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_MUSIM_GapConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_MUSIM_GapConfig_r17(SetupRelease_MUSIM_GapConfig_r17& value)
{
    switch (value.tag) {
    case SetupRelease_MUSIM_GapConfig_r17_Tag_release:
        break;
    case SetupRelease_MUSIM_GapConfig_r17_Tag_setup:
        Free_MUSIM_GapConfig_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UL_GapFR2_Config_r17：ASN.1 UL-GapFR2-Config-r17；源文件第 13913 行；SEQUENCE。
// Encode_UL_GapFR2_Config_r17 只读不分配；Decode_UL_GapFR2_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_UL_GapFR2_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UL_GapFR2_Config_r17(Encoder& enc, const UL_GapFR2_Config_r17& value)
{
    enc.WriteBit(value.has_refFR2_ServCellAsyncCA_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.gapOffset_r17), 0, 159);
    enc.WriteConstrainedInteger((std::int64_t)(value.ugl_r17), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.ugrp_r17), 0, 3);
    if (value.has_refFR2_ServCellAsyncCA_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.refFR2_ServCellAsyncCA_r17), 0, 31);
    }
    return enc.Error();
}

ErrorCode Decode_UL_GapFR2_Config_r17(Decoder& dec, UL_GapFR2_Config_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.gapOffset_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.ugl_r17 = (UL_GapFR2_Config_r17_Ugl_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.ugrp_r17 = (UL_GapFR2_Config_r17_Ugrp_r17)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.refFR2_ServCellAsyncCA_r17 = (ServCellIndex)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UL_GapFR2_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UL_GapFR2_Config_r17(UL_GapFR2_Config_r17& value)
{
    if (value.has_refFR2_ServCellAsyncCA_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_UL_GapFR2_Config_r17：ASN.1 SetupRelease<UL-GapFR2-Config-r17>；源文件第 992 行；CHOICE。
// Encode_SetupRelease_UL_GapFR2_Config_r17 只读不分配；Decode_SetupRelease_UL_GapFR2_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_UL_GapFR2_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_UL_GapFR2_Config_r17(Encoder& enc, const SetupRelease_UL_GapFR2_Config_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_UL_GapFR2_Config_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_UL_GapFR2_Config_r17_Tag_setup:
        Encode_UL_GapFR2_Config_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_UL_GapFR2_Config_r17(Decoder& dec, SetupRelease_UL_GapFR2_Config_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_UL_GapFR2_Config_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_UL_GapFR2_Config_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_UL_GapFR2_Config_r17_Tag_setup: {
        if (Decode_UL_GapFR2_Config_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_UL_GapFR2_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_UL_GapFR2_Config_r17(SetupRelease_UL_GapFR2_Config_r17& value)
{
    switch (value.tag) {
    case SetupRelease_UL_GapFR2_Config_r17_Tag_release:
        break;
    case SetupRelease_UL_GapFR2_Config_r17_Tag_setup:
        Free_UL_GapFR2_Config_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UE_TxTEG_RequestUL_TDOA_Config_r17：ASN.1 UE-TxTEG-RequestUL-TDOA-Config-r17；源文件第 1062 行；CHOICE。
// Encode_UE_TxTEG_RequestUL_TDOA_Config_r17 只读不分配；Decode_UE_TxTEG_RequestUL_TDOA_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_UE_TxTEG_RequestUL_TDOA_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UE_TxTEG_RequestUL_TDOA_Config_r17(Encoder& enc, const UE_TxTEG_RequestUL_TDOA_Config_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case UE_TxTEG_RequestUL_TDOA_Config_r17_Tag_oneShot_r17:
        (void)0;
        break;
    case UE_TxTEG_RequestUL_TDOA_Config_r17_Tag_periodicReporting_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.periodicReporting_r17), 0, 7);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_UE_TxTEG_RequestUL_TDOA_Config_r17(Decoder& dec, UE_TxTEG_RequestUL_TDOA_Config_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (UE_TxTEG_RequestUL_TDOA_Config_r17_Tag)root_index;
    switch (value.tag) {
    case UE_TxTEG_RequestUL_TDOA_Config_r17_Tag_oneShot_r17: {
        (void)0;
        break;
    }
    case UE_TxTEG_RequestUL_TDOA_Config_r17_Tag_periodicReporting_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.u.periodicReporting_r17 = (UE_TxTEG_RequestUL_TDOA_Config_r17_PeriodicReporting_r17)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_TxTEG_RequestUL_TDOA_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_TxTEG_RequestUL_TDOA_Config_r17(UE_TxTEG_RequestUL_TDOA_Config_r17& value)
{
    switch (value.tag) {
    case UE_TxTEG_RequestUL_TDOA_Config_r17_Tag_oneShot_r17:
        break;
    case UE_TxTEG_RequestUL_TDOA_Config_r17_Tag_periodicReporting_r17:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17：ASN.1 SetupRelease<UE-TxTEG-RequestUL-TDOA-Config-r17>；源文件第 995 行；CHOICE。
// Encode_SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17 只读不分配；Decode_SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17(Encoder& enc, const SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17_Tag_setup:
        Encode_UE_TxTEG_RequestUL_TDOA_Config_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17(Decoder& dec, SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17_Tag_setup: {
        if (Decode_UE_TxTEG_RequestUL_TDOA_Config_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17(SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17& value)
{
    switch (value.tag) {
    case SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17_Tag_release:
        break;
    case SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17_Tag_setup:
        Free_UE_TxTEG_RequestUL_TDOA_Config_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReconfiguration_v1700_IEs：ASN.1 RRCReconfiguration-v1700-IEs；源文件第 984 行；SEQUENCE。
// Encode_RRCReconfiguration_v1700_IEs 只读不分配；Decode_RRCReconfiguration_v1700_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCReconfiguration_v1700_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReconfiguration_v1700_IEs(Encoder& enc, const RRCReconfiguration_v1700_IEs& value)
{
    enc.WriteBit(value.has_otherConfig_v1700);
    enc.WriteBit(value.has_sl_L2RelayUE_Config_r17);
    enc.WriteBit(value.has_sl_L2RemoteUE_Config_r17);
    enc.WriteBit(value.dedicatedPagingDelivery_r17 != nullptr);
    enc.WriteBit(value.has_needForGapNCSG_ConfigNR_r17);
    enc.WriteBit(value.has_needForGapNCSG_ConfigEUTRA_r17);
    enc.WriteBit(value.has_musim_GapConfig_r17);
    enc.WriteBit(value.has_ul_GapFR2_Config_r17);
    enc.WriteBit(value.has_scg_State_r17);
    enc.WriteBit(value.has_appLayerMeasConfig_r17);
    enc.WriteBit(value.has_ue_TxTEG_RequestUL_TDOA_Config_r17);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_otherConfig_v1700) {
        Encode_OtherConfig_v1700(enc, value.otherConfig_v1700);
    }
    if (value.has_sl_L2RelayUE_Config_r17) {
        Encode_SetupRelease_SL_L2RelayUE_Config_r17(enc, value.sl_L2RelayUE_Config_r17);
    }
    if (value.has_sl_L2RemoteUE_Config_r17) {
        Encode_SetupRelease_SL_L2RemoteUE_Config_r17(enc, value.sl_L2RemoteUE_Config_r17);
    }
    if (value.dedicatedPagingDelivery_r17 != nullptr) {
        if (value.dedicatedPagingDelivery_r17 == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_Paging(enc, *value.dedicatedPagingDelivery_r17);
        }
    }
    if (value.has_needForGapNCSG_ConfigNR_r17) {
        Encode_SetupRelease_NeedForGapNCSG_ConfigNR_r17(enc, value.needForGapNCSG_ConfigNR_r17);
    }
    if (value.has_needForGapNCSG_ConfigEUTRA_r17) {
        Encode_SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17(enc, value.needForGapNCSG_ConfigEUTRA_r17);
    }
    if (value.has_musim_GapConfig_r17) {
        Encode_SetupRelease_MUSIM_GapConfig_r17(enc, value.musim_GapConfig_r17);
    }
    if (value.has_ul_GapFR2_Config_r17) {
        Encode_SetupRelease_UL_GapFR2_Config_r17(enc, value.ul_GapFR2_Config_r17);
    }
    if (value.has_scg_State_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scg_State_r17), 0, 0);
    }
    if (value.has_appLayerMeasConfig_r17) {
        Encode_AppLayerMeasConfig_r17(enc, value.appLayerMeasConfig_r17);
    }
    if (value.has_ue_TxTEG_RequestUL_TDOA_Config_r17) {
        Encode_SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17(enc, value.ue_TxTEG_RequestUL_TDOA_Config_r17);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCReconfiguration_v1800_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCReconfiguration_v1700_IEs(Decoder& dec, RRCReconfiguration_v1700_IEs& value)
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
        if (Decode_OtherConfig_v1700(dec, value.otherConfig_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_SL_L2RelayUE_Config_r17(dec, value.sl_L2RelayUE_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SetupRelease_SL_L2RemoteUE_Config_r17(dec, value.sl_L2RemoteUE_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
    dec.Fail(ErrorCode_ContainingDepthExceeded); goto fail;
        }
        std::vector<std::uint8_t> containing_bytes;
        if (!dec.ReadOpenType(containing_bytes)) { goto fail; }
        Decoder containing_sub(containing_bytes.data(), containing_bytes.size());
        containing_sub.SetContainingDepth(dec.ContainingDepth() + 1);
        Paging* containing_value = (Paging*)std::malloc(sizeof(Paging));
        if (containing_value == nullptr) {
    dec.Fail(ErrorCode_OutOfMemory); goto fail;
        }
        std::memset(containing_value, 0, sizeof(*containing_value));
        if (Decode_Paging(containing_sub, *containing_value) != ErrorCode_Ok) {
    Free_Paging(*containing_value);
    std::free(containing_value);
    dec.Fail(containing_sub.Error()); goto fail;
        }
        if (!containing_sub.CheckOpenTypeEnd()) {
    Free_Paging(*containing_value);
    std::free(containing_value);
    dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
        }
        value.dedicatedPagingDelivery_r17 = containing_value;
    }
    if (present_4) {
        if (Decode_SetupRelease_NeedForGapNCSG_ConfigNR_r17(dec, value.needForGapNCSG_ConfigNR_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17(dec, value.needForGapNCSG_ConfigEUTRA_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_SetupRelease_MUSIM_GapConfig_r17(dec, value.musim_GapConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        if (Decode_SetupRelease_UL_GapFR2_Config_r17(dec, value.ul_GapFR2_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        value.scg_State_r17 = (RRCReconfiguration_v1700_IEs_Scg_State_r17)0;
    }
    if (present_9) {
        if (Decode_AppLayerMeasConfig_r17(dec, value.appLayerMeasConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_10) {
        if (Decode_SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17(dec, value.ue_TxTEG_RequestUL_TDOA_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_11) {
        if (Decode_RRCReconfiguration_v1800_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReconfiguration_v1700_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReconfiguration_v1700_IEs(RRCReconfiguration_v1700_IEs& value)
{
    if (value.has_otherConfig_v1700) {
        Free_OtherConfig_v1700(value.otherConfig_v1700);
    }
    if (value.has_sl_L2RelayUE_Config_r17) {
        Free_SetupRelease_SL_L2RelayUE_Config_r17(value.sl_L2RelayUE_Config_r17);
    }
    if (value.has_sl_L2RemoteUE_Config_r17) {
        Free_SetupRelease_SL_L2RemoteUE_Config_r17(value.sl_L2RemoteUE_Config_r17);
    }
    if (value.dedicatedPagingDelivery_r17 != nullptr) {
        if (value.dedicatedPagingDelivery_r17 != nullptr) {
            Free_Paging(*value.dedicatedPagingDelivery_r17);
            std::free(value.dedicatedPagingDelivery_r17);
            value.dedicatedPagingDelivery_r17 = nullptr;
        }
    }
    if (value.has_needForGapNCSG_ConfigNR_r17) {
        Free_SetupRelease_NeedForGapNCSG_ConfigNR_r17(value.needForGapNCSG_ConfigNR_r17);
    }
    if (value.has_needForGapNCSG_ConfigEUTRA_r17) {
        Free_SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17(value.needForGapNCSG_ConfigEUTRA_r17);
    }
    if (value.has_musim_GapConfig_r17) {
        Free_SetupRelease_MUSIM_GapConfig_r17(value.musim_GapConfig_r17);
    }
    if (value.has_ul_GapFR2_Config_r17) {
        Free_SetupRelease_UL_GapFR2_Config_r17(value.ul_GapFR2_Config_r17);
    }
    if (value.has_scg_State_r17) {
    }
    if (value.has_appLayerMeasConfig_r17) {
        Free_AppLayerMeasConfig_r17(value.appLayerMeasConfig_r17);
    }
    if (value.has_ue_TxTEG_RequestUL_TDOA_Config_r17) {
        Free_SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17(value.ue_TxTEG_RequestUL_TDOA_Config_r17);
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCReconfiguration_v1800_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IAB_IP_AddressConfigurationList_r16：ASN.1 IAB-IP-AddressConfigurationList-r16；源文件第 1040 行；SEQUENCE。
// Encode_IAB_IP_AddressConfigurationList_r16 只读不分配；Decode_IAB_IP_AddressConfigurationList_r16 可能 malloc（失败时内部已释放并清零）；Free_IAB_IP_AddressConfigurationList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IAB_IP_AddressConfigurationList_r16(Encoder& enc, const IAB_IP_AddressConfigurationList_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_iab_IP_AddressToAddModList_r16);
    enc.WriteBit(value.has_iab_IP_AddressToReleaseList_r16);
    if (value.has_iab_IP_AddressToAddModList_r16) {
enc.WriteConstrainedLength(value.iab_IP_AddressToAddModList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.iab_IP_AddressToAddModList_r16_count; ++i) {
    Encode_IAB_IP_AddressConfiguration_r16(enc, value.iab_IP_AddressToAddModList_r16_items[i]);
}
    }
    if (value.has_iab_IP_AddressToReleaseList_r16) {
enc.WriteConstrainedLength(value.iab_IP_AddressToReleaseList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.iab_IP_AddressToReleaseList_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.iab_IP_AddressToReleaseList_r16_items[i]), 1, 32);
}
    }
    return enc.Error();
}

ErrorCode Decode_IAB_IP_AddressConfigurationList_r16(Decoder& dec, IAB_IP_AddressConfigurationList_r16& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.iab_IP_AddressToAddModList_r16_count)) { goto fail; }
if (value.iab_IP_AddressToAddModList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.iab_IP_AddressToAddModList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.iab_IP_AddressToAddModList_r16_count > 0u) {
    value.iab_IP_AddressToAddModList_r16_items = (IAB_IP_AddressConfiguration_r16*)std::malloc((std::size_t)value.iab_IP_AddressToAddModList_r16_count * sizeof(IAB_IP_AddressConfiguration_r16));
    if (value.iab_IP_AddressToAddModList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.iab_IP_AddressToAddModList_r16_items, 0, (std::size_t)value.iab_IP_AddressToAddModList_r16_count * sizeof(IAB_IP_AddressConfiguration_r16));
}
for (std::uint32_t i = 0; i < value.iab_IP_AddressToAddModList_r16_count; ++i) {
    if (Decode_IAB_IP_AddressConfiguration_r16(dec, value.iab_IP_AddressToAddModList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.iab_IP_AddressToReleaseList_r16_count)) { goto fail; }
if (value.iab_IP_AddressToReleaseList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.iab_IP_AddressToReleaseList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.iab_IP_AddressToReleaseList_r16_count > 0u) {
    value.iab_IP_AddressToReleaseList_r16_items = (IAB_IP_AddressIndex_r16*)std::malloc((std::size_t)value.iab_IP_AddressToReleaseList_r16_count * sizeof(IAB_IP_AddressIndex_r16));
    if (value.iab_IP_AddressToReleaseList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.iab_IP_AddressToReleaseList_r16_items, 0, (std::size_t)value.iab_IP_AddressToReleaseList_r16_count * sizeof(IAB_IP_AddressIndex_r16));
}
for (std::uint32_t i = 0; i < value.iab_IP_AddressToReleaseList_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
    value.iab_IP_AddressToReleaseList_r16_items[i] = (IAB_IP_AddressIndex_r16)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_IAB_IP_AddressConfigurationList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IAB_IP_AddressConfigurationList_r16(IAB_IP_AddressConfigurationList_r16& value)
{
    if (value.has_iab_IP_AddressToAddModList_r16) {
        if (value.iab_IP_AddressToAddModList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.iab_IP_AddressToAddModList_r16_count; ++i) {
                Free_IAB_IP_AddressConfiguration_r16(value.iab_IP_AddressToAddModList_r16_items[i]);
            }
            std::free(value.iab_IP_AddressToAddModList_r16_items);
            value.iab_IP_AddressToAddModList_r16_items = nullptr;
        }
        value.iab_IP_AddressToAddModList_r16_count = 0;
    }
    if (value.has_iab_IP_AddressToReleaseList_r16) {
        if (value.iab_IP_AddressToReleaseList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.iab_IP_AddressToReleaseList_r16_count; ++i) {
            }
            std::free(value.iab_IP_AddressToReleaseList_r16_items);
            value.iab_IP_AddressToReleaseList_r16_items = nullptr;
        }
        value.iab_IP_AddressToReleaseList_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CondReconfigToAddModList_r16：ASN.1 CondReconfigToAddModList-r16；源文件第 5441 行；SEQUENCE OF。
// Encode_CondReconfigToAddModList_r16 只读不分配；Decode_CondReconfigToAddModList_r16 可能 malloc（失败时内部已释放并清零）；Free_CondReconfigToAddModList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CondReconfigToAddModList_r16(Encoder& enc, const CondReconfigToAddModList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_CondReconfigToAddMod_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_CondReconfigToAddModList_r16(Decoder& dec, CondReconfigToAddModList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (CondReconfigToAddMod_r16*)std::malloc((std::size_t)value.count * sizeof(CondReconfigToAddMod_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(CondReconfigToAddMod_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_CondReconfigToAddMod_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_CondReconfigToAddModList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CondReconfigToAddModList_r16(CondReconfigToAddModList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_CondReconfigToAddMod_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SK_CounterConfiguration_r18：ASN.1 SK-CounterConfiguration-r18；源文件第 5495 行；SEQUENCE。
// Encode_SK_CounterConfiguration_r18 只读不分配；Decode_SK_CounterConfiguration_r18 可能 malloc（失败时内部已释放并清零）；Free_SK_CounterConfiguration_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SK_CounterConfiguration_r18(Encoder& enc, const SK_CounterConfiguration_r18& value)
{
    enc.WriteBit(value.has_sk_CounterConfigToReleaseList_r18);
    enc.WriteBit(value.has_sk_CounterConfigToAddModList_r18);
    if (value.has_sk_CounterConfigToReleaseList_r18) {
enc.WriteConstrainedLength(value.sk_CounterConfigToReleaseList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sk_CounterConfigToReleaseList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sk_CounterConfigToReleaseList_r18_items[i]), 1, 9);
}
    }
    if (value.has_sk_CounterConfigToAddModList_r18) {
enc.WriteConstrainedLength(value.sk_CounterConfigToAddModList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sk_CounterConfigToAddModList_r18_count; ++i) {
    Encode_SK_CounterConfig_r18(enc, value.sk_CounterConfigToAddModList_r18_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_SK_CounterConfiguration_r18(Decoder& dec, SK_CounterConfiguration_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sk_CounterConfigToReleaseList_r18_count)) { goto fail; }
if (value.sk_CounterConfigToReleaseList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sk_CounterConfigToReleaseList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sk_CounterConfigToReleaseList_r18_count > 0u) {
    value.sk_CounterConfigToReleaseList_r18_items = (SecurityCellSetId_r18*)std::malloc((std::size_t)value.sk_CounterConfigToReleaseList_r18_count * sizeof(SecurityCellSetId_r18));
    if (value.sk_CounterConfigToReleaseList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sk_CounterConfigToReleaseList_r18_items, 0, (std::size_t)value.sk_CounterConfigToReleaseList_r18_count * sizeof(SecurityCellSetId_r18));
}
for (std::uint32_t i = 0; i < value.sk_CounterConfigToReleaseList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 9, tmp_value)) { goto fail; }
    value.sk_CounterConfigToReleaseList_r18_items[i] = (SecurityCellSetId_r18)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sk_CounterConfigToAddModList_r18_count)) { goto fail; }
if (value.sk_CounterConfigToAddModList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sk_CounterConfigToAddModList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sk_CounterConfigToAddModList_r18_count > 0u) {
    value.sk_CounterConfigToAddModList_r18_items = (SK_CounterConfig_r18*)std::malloc((std::size_t)value.sk_CounterConfigToAddModList_r18_count * sizeof(SK_CounterConfig_r18));
    if (value.sk_CounterConfigToAddModList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sk_CounterConfigToAddModList_r18_items, 0, (std::size_t)value.sk_CounterConfigToAddModList_r18_count * sizeof(SK_CounterConfig_r18));
}
for (std::uint32_t i = 0; i < value.sk_CounterConfigToAddModList_r18_count; ++i) {
    if (Decode_SK_CounterConfig_r18(dec, value.sk_CounterConfigToAddModList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SK_CounterConfiguration_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SK_CounterConfiguration_r18(SK_CounterConfiguration_r18& value)
{
    if (value.has_sk_CounterConfigToReleaseList_r18) {
        if (value.sk_CounterConfigToReleaseList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sk_CounterConfigToReleaseList_r18_count; ++i) {
            }
            std::free(value.sk_CounterConfigToReleaseList_r18_items);
            value.sk_CounterConfigToReleaseList_r18_items = nullptr;
        }
        value.sk_CounterConfigToReleaseList_r18_count = 0;
    }
    if (value.has_sk_CounterConfigToAddModList_r18) {
        if (value.sk_CounterConfigToAddModList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sk_CounterConfigToAddModList_r18_count; ++i) {
                Free_SK_CounterConfig_r18(value.sk_CounterConfigToAddModList_r18_items[i]);
            }
            std::free(value.sk_CounterConfigToAddModList_r18_items);
            value.sk_CounterConfigToAddModList_r18_items = nullptr;
        }
        value.sk_CounterConfigToAddModList_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ConditionalReconfiguration_r16_ExtGroup1：ASN.1 ConditionalReconfiguration_r16_ExtGroup1；源文件第 5486 行；扩展添加组 [[ ]]。
// Encode_ConditionalReconfiguration_r16_ExtGroup1 只读不分配；Decode_ConditionalReconfiguration_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_ConditionalReconfiguration_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ConditionalReconfiguration_r16_ExtGroup1(Encoder& enc, const ConditionalReconfiguration_r16_ExtGroup1& value)
{
    enc.WriteBit(value.has_scpac_ReferenceConfiguration_r18);
    enc.WriteBit(value.has_servingSecurityCellSetId_r18);
    enc.WriteBit(value.has_sk_CounterConfiguration_r18);
    if (value.has_scpac_ReferenceConfiguration_r18) {
        Encode_SetupRelease_ReferenceConfiguration_r18(enc, value.scpac_ReferenceConfiguration_r18);
    }
    if (value.has_servingSecurityCellSetId_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.servingSecurityCellSetId_r18), 1, 9);
    }
    if (value.has_sk_CounterConfiguration_r18) {
        Encode_SK_CounterConfiguration_r18(enc, value.sk_CounterConfiguration_r18);
    }
    return enc.Error();
}

ErrorCode Decode_ConditionalReconfiguration_r16_ExtGroup1(Decoder& dec, ConditionalReconfiguration_r16_ExtGroup1& value)
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
        if (Decode_SetupRelease_ReferenceConfiguration_r18(dec, value.scpac_ReferenceConfiguration_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 9, tmp_value)) { goto fail; }
        value.servingSecurityCellSetId_r18 = (SecurityCellSetId_r18)tmp_value;
    }
    if (present_2) {
        if (Decode_SK_CounterConfiguration_r18(dec, value.sk_CounterConfiguration_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ConditionalReconfiguration_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ConditionalReconfiguration_r16_ExtGroup1(ConditionalReconfiguration_r16_ExtGroup1& value)
{
    if (value.has_scpac_ReferenceConfiguration_r18) {
        Free_SetupRelease_ReferenceConfiguration_r18(value.scpac_ReferenceConfiguration_r18);
    }
    if (value.has_servingSecurityCellSetId_r18) {
    }
    if (value.has_sk_CounterConfiguration_r18) {
        Free_SK_CounterConfiguration_r18(value.sk_CounterConfiguration_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CondReconfigToRemoveList_r16：ASN.1 CondReconfigToRemoveList-r16；源文件第 5493 行；SEQUENCE OF。
// Encode_CondReconfigToRemoveList_r16 只读不分配；Decode_CondReconfigToRemoveList_r16 可能 malloc（失败时内部已释放并清零）；Free_CondReconfigToRemoveList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CondReconfigToRemoveList_r16(Encoder& enc, const CondReconfigToRemoveList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 1, 8);
    }
    return enc.Error();
}

ErrorCode Decode_CondReconfigToRemoveList_r16(Decoder& dec, CondReconfigToRemoveList_r16& value)
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
    Free_CondReconfigToRemoveList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CondReconfigToRemoveList_r16(CondReconfigToRemoveList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ConditionalReconfiguration_r16：ASN.1 ConditionalReconfiguration-r16；源文件第 5481 行；SEQUENCE。
// Encode_ConditionalReconfiguration_r16 只读不分配；Decode_ConditionalReconfiguration_r16 可能 malloc（失败时内部已释放并清零）；Free_ConditionalReconfiguration_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ConditionalReconfiguration_r16(Encoder& enc, const ConditionalReconfiguration_r16& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_attemptCondReconfig_r16);
    enc.WriteBit(value.has_condReconfigToRemoveList_r16);
    enc.WriteBit(value.has_condReconfigToAddModList_r16);
    if (value.has_attemptCondReconfig_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.attemptCondReconfig_r16), 0, 0);
    }
    if (value.has_condReconfigToRemoveList_r16) {
        Encode_CondReconfigToRemoveList_r16(enc, value.condReconfigToRemoveList_r16);
    }
    if (value.has_condReconfigToAddModList_r16) {
        Encode_CondReconfigToAddModList_r16(enc, value.condReconfigToAddModList_r16);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_ConditionalReconfiguration_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_ConditionalReconfiguration_r16(Decoder& dec, ConditionalReconfiguration_r16& value)
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
        value.attemptCondReconfig_r16 = (ConditionalReconfiguration_r16_AttemptCondReconfig_r16)0;
    }
    if (present_1) {
        if (Decode_CondReconfigToRemoveList_r16(dec, value.condReconfigToRemoveList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_CondReconfigToAddModList_r16(dec, value.condReconfigToAddModList_r16) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_ConditionalReconfiguration_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_ConditionalReconfiguration_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ConditionalReconfiguration_r16(ConditionalReconfiguration_r16& value)
{
    if (value.has_attemptCondReconfig_r16) {
    }
    if (value.has_condReconfigToRemoveList_r16) {
        Free_CondReconfigToRemoveList_r16(value.condReconfigToRemoveList_r16);
    }
    if (value.has_condReconfigToAddModList_r16) {
        Free_CondReconfigToAddModList_r16(value.condReconfigToAddModList_r16);
    }
    if (value.has_extGroup1) {
        Free_ConditionalReconfiguration_r16_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SSB_MTC_PeriodicityAndOffset：ASN.1 periodicityAndOffset；源文件第 13538 行；CHOICE。
// Encode_SSB_MTC_PeriodicityAndOffset 只读不分配；Decode_SSB_MTC_PeriodicityAndOffset 可能 malloc（失败时内部已释放并清零）；Free_SSB_MTC_PeriodicityAndOffset 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SSB_MTC_PeriodicityAndOffset(Encoder& enc, const SSB_MTC_PeriodicityAndOffset& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 5);
    switch (value.tag) {
    case SSB_MTC_PeriodicityAndOffset_Tag_sf5:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sf5), 0, 4);
        break;
    case SSB_MTC_PeriodicityAndOffset_Tag_sf10:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sf10), 0, 9);
        break;
    case SSB_MTC_PeriodicityAndOffset_Tag_sf20:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sf20), 0, 19);
        break;
    case SSB_MTC_PeriodicityAndOffset_Tag_sf40:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sf40), 0, 39);
        break;
    case SSB_MTC_PeriodicityAndOffset_Tag_sf80:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sf80), 0, 79);
        break;
    case SSB_MTC_PeriodicityAndOffset_Tag_sf160:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sf160), 0, 159);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SSB_MTC_PeriodicityAndOffset(Decoder& dec, SSB_MTC_PeriodicityAndOffset& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 5, root_index)) {
        goto fail;
    }
    value.tag = (SSB_MTC_PeriodicityAndOffset_Tag)root_index;
    switch (value.tag) {
    case SSB_MTC_PeriodicityAndOffset_Tag_sf5: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.u.sf5 = (int64_t)tmp_value;
        break;
    }
    case SSB_MTC_PeriodicityAndOffset_Tag_sf10: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.u.sf10 = (int64_t)tmp_value;
        break;
    }
    case SSB_MTC_PeriodicityAndOffset_Tag_sf20: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 19, tmp_value)) { goto fail; }
        value.u.sf20 = (int64_t)tmp_value;
        break;
    }
    case SSB_MTC_PeriodicityAndOffset_Tag_sf40: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.sf40 = (int64_t)tmp_value;
        break;
    }
    case SSB_MTC_PeriodicityAndOffset_Tag_sf80: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.sf80 = (int64_t)tmp_value;
        break;
    }
    case SSB_MTC_PeriodicityAndOffset_Tag_sf160: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.u.sf160 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SSB_MTC_PeriodicityAndOffset(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SSB_MTC_PeriodicityAndOffset(SSB_MTC_PeriodicityAndOffset& value)
{
    switch (value.tag) {
    case SSB_MTC_PeriodicityAndOffset_Tag_sf5:
        break;
    case SSB_MTC_PeriodicityAndOffset_Tag_sf10:
        break;
    case SSB_MTC_PeriodicityAndOffset_Tag_sf20:
        break;
    case SSB_MTC_PeriodicityAndOffset_Tag_sf40:
        break;
    case SSB_MTC_PeriodicityAndOffset_Tag_sf80:
        break;
    case SSB_MTC_PeriodicityAndOffset_Tag_sf160:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SSB_MTC：ASN.1 SSB-MTC；源文件第 13537 行；SEQUENCE。
// Encode_SSB_MTC 只读不分配；Decode_SSB_MTC 可能 malloc（失败时内部已释放并清零）；Free_SSB_MTC 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SSB_MTC(Encoder& enc, const SSB_MTC& value)
{
    Encode_SSB_MTC_PeriodicityAndOffset(enc, value.periodicityAndOffset);
    enc.WriteConstrainedInteger((std::int64_t)(value.duration), 0, 4);
    return enc.Error();
}

ErrorCode Decode_SSB_MTC(Decoder& dec, SSB_MTC& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_SSB_MTC_PeriodicityAndOffset(dec, value.periodicityAndOffset) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.duration = (SSB_MTC_Duration)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SSB_MTC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SSB_MTC(SSB_MTC& value)
{
    Free_SSB_MTC_PeriodicityAndOffset(value.periodicityAndOffset);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CandidateServingFreqListNR_r16：ASN.1 CandidateServingFreqListNR-r16；源文件第 21646 行；SEQUENCE OF。
// Encode_CandidateServingFreqListNR_r16 只读不分配；Decode_CandidateServingFreqListNR_r16 可能 malloc（失败时内部已释放并清零）；Free_CandidateServingFreqListNR_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CandidateServingFreqListNR_r16(Encoder& enc, const CandidateServingFreqListNR_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 128u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 3279165);
    }
    return enc.Error();
}

ErrorCode Decode_CandidateServingFreqListNR_r16(Decoder& dec, CandidateServingFreqListNR_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 128u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 128u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (ARFCN_ValueNR*)std::malloc((std::size_t)value.count * sizeof(ARFCN_ValueNR));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(ARFCN_ValueNR));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
    value.items[i] = (ARFCN_ValueNR)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_CandidateServingFreqListNR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CandidateServingFreqListNR_r16(CandidateServingFreqListNR_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IDC_AssistanceConfig_r16：ASN.1 IDC-AssistanceConfig-r16；源文件第 21685 行；SEQUENCE。
// Encode_IDC_AssistanceConfig_r16 只读不分配；Decode_IDC_AssistanceConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_IDC_AssistanceConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IDC_AssistanceConfig_r16(Encoder& enc, const IDC_AssistanceConfig_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_candidateServingFreqListNR_r16);
    if (value.has_candidateServingFreqListNR_r16) {
        Encode_CandidateServingFreqListNR_r16(enc, value.candidateServingFreqListNR_r16);
    }
    return enc.Error();
}

ErrorCode Decode_IDC_AssistanceConfig_r16(Decoder& dec, IDC_AssistanceConfig_r16& value)
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
        if (Decode_CandidateServingFreqListNR_r16(dec, value.candidateServingFreqListNR_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_IDC_AssistanceConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IDC_AssistanceConfig_r16(IDC_AssistanceConfig_r16& value)
{
    if (value.has_candidateServingFreqListNR_r16) {
        Free_CandidateServingFreqListNR_r16(value.candidateServingFreqListNR_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_IDC_AssistanceConfig_r16：ASN.1 SetupRelease<IDC-AssistanceConfig-r16>；源文件第 21593 行；CHOICE。
// Encode_SetupRelease_IDC_AssistanceConfig_r16 只读不分配；Decode_SetupRelease_IDC_AssistanceConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_IDC_AssistanceConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_IDC_AssistanceConfig_r16(Encoder& enc, const SetupRelease_IDC_AssistanceConfig_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_IDC_AssistanceConfig_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_IDC_AssistanceConfig_r16_Tag_setup:
        Encode_IDC_AssistanceConfig_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_IDC_AssistanceConfig_r16(Decoder& dec, SetupRelease_IDC_AssistanceConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_IDC_AssistanceConfig_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_IDC_AssistanceConfig_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_IDC_AssistanceConfig_r16_Tag_setup: {
        if (Decode_IDC_AssistanceConfig_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_IDC_AssistanceConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_IDC_AssistanceConfig_r16(SetupRelease_IDC_AssistanceConfig_r16& value)
{
    switch (value.tag) {
    case SetupRelease_IDC_AssistanceConfig_r16_Tag_release:
        break;
    case SetupRelease_IDC_AssistanceConfig_r16_Tag_setup:
        Free_IDC_AssistanceConfig_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DRX_PreferenceConfig_r16：ASN.1 DRX-PreferenceConfig-r16；源文件第 21690 行；SEQUENCE。
// Encode_DRX_PreferenceConfig_r16 只读不分配；Decode_DRX_PreferenceConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_DRX_PreferenceConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DRX_PreferenceConfig_r16(Encoder& enc, const DRX_PreferenceConfig_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.drx_PreferenceProhibitTimer_r16), 0, 15);
    return enc.Error();
}

ErrorCode Decode_DRX_PreferenceConfig_r16(Decoder& dec, DRX_PreferenceConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.drx_PreferenceProhibitTimer_r16 = (DRX_PreferenceConfig_r16_Drx_PreferenceProhibitTimer_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DRX_PreferenceConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DRX_PreferenceConfig_r16(DRX_PreferenceConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_DRX_PreferenceConfig_r16：ASN.1 SetupRelease<DRX-PreferenceConfig-r16>；源文件第 21594 行；CHOICE。
// Encode_SetupRelease_DRX_PreferenceConfig_r16 只读不分配；Decode_SetupRelease_DRX_PreferenceConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_DRX_PreferenceConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_DRX_PreferenceConfig_r16(Encoder& enc, const SetupRelease_DRX_PreferenceConfig_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DRX_PreferenceConfig_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_DRX_PreferenceConfig_r16_Tag_setup:
        Encode_DRX_PreferenceConfig_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DRX_PreferenceConfig_r16(Decoder& dec, SetupRelease_DRX_PreferenceConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DRX_PreferenceConfig_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DRX_PreferenceConfig_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DRX_PreferenceConfig_r16_Tag_setup: {
        if (Decode_DRX_PreferenceConfig_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DRX_PreferenceConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DRX_PreferenceConfig_r16(SetupRelease_DRX_PreferenceConfig_r16& value)
{
    switch (value.tag) {
    case SetupRelease_DRX_PreferenceConfig_r16_Tag_release:
        break;
    case SetupRelease_DRX_PreferenceConfig_r16_Tag_setup:
        Free_DRX_PreferenceConfig_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MaxBW_PreferenceConfig_r16：ASN.1 MaxBW-PreferenceConfig-r16；源文件第 21696 行；SEQUENCE。
// Encode_MaxBW_PreferenceConfig_r16 只读不分配；Decode_MaxBW_PreferenceConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_MaxBW_PreferenceConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MaxBW_PreferenceConfig_r16(Encoder& enc, const MaxBW_PreferenceConfig_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.maxBW_PreferenceProhibitTimer_r16), 0, 15);
    return enc.Error();
}

ErrorCode Decode_MaxBW_PreferenceConfig_r16(Decoder& dec, MaxBW_PreferenceConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.maxBW_PreferenceProhibitTimer_r16 = (MaxBW_PreferenceConfig_r16_MaxBW_PreferenceProhibitTimer_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MaxBW_PreferenceConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MaxBW_PreferenceConfig_r16(MaxBW_PreferenceConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_MaxBW_PreferenceConfig_r16：ASN.1 SetupRelease<MaxBW-PreferenceConfig-r16>；源文件第 21595 行；CHOICE。
// Encode_SetupRelease_MaxBW_PreferenceConfig_r16 只读不分配；Decode_SetupRelease_MaxBW_PreferenceConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_MaxBW_PreferenceConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_MaxBW_PreferenceConfig_r16(Encoder& enc, const SetupRelease_MaxBW_PreferenceConfig_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_MaxBW_PreferenceConfig_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_MaxBW_PreferenceConfig_r16_Tag_setup:
        Encode_MaxBW_PreferenceConfig_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_MaxBW_PreferenceConfig_r16(Decoder& dec, SetupRelease_MaxBW_PreferenceConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_MaxBW_PreferenceConfig_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_MaxBW_PreferenceConfig_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_MaxBW_PreferenceConfig_r16_Tag_setup: {
        if (Decode_MaxBW_PreferenceConfig_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_MaxBW_PreferenceConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_MaxBW_PreferenceConfig_r16(SetupRelease_MaxBW_PreferenceConfig_r16& value)
{
    switch (value.tag) {
    case SetupRelease_MaxBW_PreferenceConfig_r16_Tag_release:
        break;
    case SetupRelease_MaxBW_PreferenceConfig_r16_Tag_setup:
        Free_MaxBW_PreferenceConfig_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MaxCC_PreferenceConfig_r16：ASN.1 MaxCC-PreferenceConfig-r16；源文件第 21702 行；SEQUENCE。
// Encode_MaxCC_PreferenceConfig_r16 只读不分配；Decode_MaxCC_PreferenceConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_MaxCC_PreferenceConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MaxCC_PreferenceConfig_r16(Encoder& enc, const MaxCC_PreferenceConfig_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.maxCC_PreferenceProhibitTimer_r16), 0, 15);
    return enc.Error();
}

ErrorCode Decode_MaxCC_PreferenceConfig_r16(Decoder& dec, MaxCC_PreferenceConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.maxCC_PreferenceProhibitTimer_r16 = (MaxCC_PreferenceConfig_r16_MaxCC_PreferenceProhibitTimer_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MaxCC_PreferenceConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MaxCC_PreferenceConfig_r16(MaxCC_PreferenceConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_MaxCC_PreferenceConfig_r16：ASN.1 SetupRelease<MaxCC-PreferenceConfig-r16>；源文件第 21596 行；CHOICE。
// Encode_SetupRelease_MaxCC_PreferenceConfig_r16 只读不分配；Decode_SetupRelease_MaxCC_PreferenceConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_MaxCC_PreferenceConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_MaxCC_PreferenceConfig_r16(Encoder& enc, const SetupRelease_MaxCC_PreferenceConfig_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_MaxCC_PreferenceConfig_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_MaxCC_PreferenceConfig_r16_Tag_setup:
        Encode_MaxCC_PreferenceConfig_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_MaxCC_PreferenceConfig_r16(Decoder& dec, SetupRelease_MaxCC_PreferenceConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_MaxCC_PreferenceConfig_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_MaxCC_PreferenceConfig_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_MaxCC_PreferenceConfig_r16_Tag_setup: {
        if (Decode_MaxCC_PreferenceConfig_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_MaxCC_PreferenceConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_MaxCC_PreferenceConfig_r16(SetupRelease_MaxCC_PreferenceConfig_r16& value)
{
    switch (value.tag) {
    case SetupRelease_MaxCC_PreferenceConfig_r16_Tag_release:
        break;
    case SetupRelease_MaxCC_PreferenceConfig_r16_Tag_setup:
        Free_MaxCC_PreferenceConfig_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MaxMIMO_LayerPreferenceConfig_r16：ASN.1 MaxMIMO-LayerPreferenceConfig-r16；源文件第 21708 行；SEQUENCE。
// Encode_MaxMIMO_LayerPreferenceConfig_r16 只读不分配；Decode_MaxMIMO_LayerPreferenceConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_MaxMIMO_LayerPreferenceConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MaxMIMO_LayerPreferenceConfig_r16(Encoder& enc, const MaxMIMO_LayerPreferenceConfig_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.maxMIMO_LayerPreferenceProhibitTimer_r16), 0, 15);
    return enc.Error();
}

ErrorCode Decode_MaxMIMO_LayerPreferenceConfig_r16(Decoder& dec, MaxMIMO_LayerPreferenceConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.maxMIMO_LayerPreferenceProhibitTimer_r16 = (MaxMIMO_LayerPreferenceConfig_r16_MaxMIMO_LayerPreferenceProhibitTimer_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MaxMIMO_LayerPreferenceConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MaxMIMO_LayerPreferenceConfig_r16(MaxMIMO_LayerPreferenceConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_MaxMIMO_LayerPreferenceConfig_r16：ASN.1 SetupRelease<MaxMIMO-LayerPreferenceConfig-r16>；源文件第 21597 行；CHOICE。
// Encode_SetupRelease_MaxMIMO_LayerPreferenceConfig_r16 只读不分配；Decode_SetupRelease_MaxMIMO_LayerPreferenceConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_MaxMIMO_LayerPreferenceConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_MaxMIMO_LayerPreferenceConfig_r16(Encoder& enc, const SetupRelease_MaxMIMO_LayerPreferenceConfig_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_MaxMIMO_LayerPreferenceConfig_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_MaxMIMO_LayerPreferenceConfig_r16_Tag_setup:
        Encode_MaxMIMO_LayerPreferenceConfig_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_MaxMIMO_LayerPreferenceConfig_r16(Decoder& dec, SetupRelease_MaxMIMO_LayerPreferenceConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_MaxMIMO_LayerPreferenceConfig_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_MaxMIMO_LayerPreferenceConfig_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_MaxMIMO_LayerPreferenceConfig_r16_Tag_setup: {
        if (Decode_MaxMIMO_LayerPreferenceConfig_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_MaxMIMO_LayerPreferenceConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_MaxMIMO_LayerPreferenceConfig_r16(SetupRelease_MaxMIMO_LayerPreferenceConfig_r16& value)
{
    switch (value.tag) {
    case SetupRelease_MaxMIMO_LayerPreferenceConfig_r16_Tag_release:
        break;
    case SetupRelease_MaxMIMO_LayerPreferenceConfig_r16_Tag_setup:
        Free_MaxMIMO_LayerPreferenceConfig_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MinSchedulingOffsetPreferenceConfig_r16：ASN.1 MinSchedulingOffsetPreferenceConfig-r16；源文件第 21714 行；SEQUENCE。
// Encode_MinSchedulingOffsetPreferenceConfig_r16 只读不分配；Decode_MinSchedulingOffsetPreferenceConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_MinSchedulingOffsetPreferenceConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MinSchedulingOffsetPreferenceConfig_r16(Encoder& enc, const MinSchedulingOffsetPreferenceConfig_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.minSchedulingOffsetPreferenceProhibitTimer_r16), 0, 15);
    return enc.Error();
}

ErrorCode Decode_MinSchedulingOffsetPreferenceConfig_r16(Decoder& dec, MinSchedulingOffsetPreferenceConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.minSchedulingOffsetPreferenceProhibitTimer_r16 = (MinSchedulingOffsetPreferenceConfig_r16_MinSchedulingOffsetPreferenceProhibitTimer_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MinSchedulingOffsetPreferenceConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MinSchedulingOffsetPreferenceConfig_r16(MinSchedulingOffsetPreferenceConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_MinSchedulingOffsetPreferenceConfig_r16：ASN.1 SetupRelease<MinSchedulingOffsetPreferenceConfig-r16>；源文件第 21598 行；CHOICE。
// Encode_SetupRelease_MinSchedulingOffsetPreferenceConfig_r16 只读不分配；Decode_SetupRelease_MinSchedulingOffsetPreferenceConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_MinSchedulingOffsetPreferenceConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_MinSchedulingOffsetPreferenceConfig_r16(Encoder& enc, const SetupRelease_MinSchedulingOffsetPreferenceConfig_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_MinSchedulingOffsetPreferenceConfig_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_MinSchedulingOffsetPreferenceConfig_r16_Tag_setup:
        Encode_MinSchedulingOffsetPreferenceConfig_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_MinSchedulingOffsetPreferenceConfig_r16(Decoder& dec, SetupRelease_MinSchedulingOffsetPreferenceConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_MinSchedulingOffsetPreferenceConfig_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_MinSchedulingOffsetPreferenceConfig_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_MinSchedulingOffsetPreferenceConfig_r16_Tag_setup: {
        if (Decode_MinSchedulingOffsetPreferenceConfig_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_MinSchedulingOffsetPreferenceConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_MinSchedulingOffsetPreferenceConfig_r16(SetupRelease_MinSchedulingOffsetPreferenceConfig_r16& value)
{
    switch (value.tag) {
    case SetupRelease_MinSchedulingOffsetPreferenceConfig_r16_Tag_release:
        break;
    case SetupRelease_MinSchedulingOffsetPreferenceConfig_r16_Tag_setup:
        Free_MinSchedulingOffsetPreferenceConfig_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ReleasePreferenceConfig_r16：ASN.1 ReleasePreferenceConfig-r16；源文件第 21720 行；SEQUENCE。
// Encode_ReleasePreferenceConfig_r16 只读不分配；Decode_ReleasePreferenceConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_ReleasePreferenceConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ReleasePreferenceConfig_r16(Encoder& enc, const ReleasePreferenceConfig_r16& value)
{
    enc.WriteBit(value.has_connectedReporting);
    enc.WriteConstrainedInteger((std::int64_t)(value.releasePreferenceProhibitTimer_r16), 0, 15);
    if (value.has_connectedReporting) {
        enc.WriteConstrainedInteger((std::int64_t)(value.connectedReporting), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_ReleasePreferenceConfig_r16(Decoder& dec, ReleasePreferenceConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.releasePreferenceProhibitTimer_r16 = (ReleasePreferenceConfig_r16_ReleasePreferenceProhibitTimer_r16)tmp_value;
    }
    if (present_0) {
        value.connectedReporting = (ReleasePreferenceConfig_r16_ConnectedReporting)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReleasePreferenceConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReleasePreferenceConfig_r16(ReleasePreferenceConfig_r16& value)
{
    if (value.has_connectedReporting) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_ReleasePreferenceConfig_r16：ASN.1 SetupRelease<ReleasePreferenceConfig-r16>；源文件第 21599 行；CHOICE。
// Encode_SetupRelease_ReleasePreferenceConfig_r16 只读不分配；Decode_SetupRelease_ReleasePreferenceConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_ReleasePreferenceConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_ReleasePreferenceConfig_r16(Encoder& enc, const SetupRelease_ReleasePreferenceConfig_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_ReleasePreferenceConfig_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_ReleasePreferenceConfig_r16_Tag_setup:
        Encode_ReleasePreferenceConfig_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_ReleasePreferenceConfig_r16(Decoder& dec, SetupRelease_ReleasePreferenceConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_ReleasePreferenceConfig_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_ReleasePreferenceConfig_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_ReleasePreferenceConfig_r16_Tag_setup: {
        if (Decode_ReleasePreferenceConfig_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_ReleasePreferenceConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_ReleasePreferenceConfig_r16(SetupRelease_ReleasePreferenceConfig_r16& value)
{
    switch (value.tag) {
    case SetupRelease_ReleasePreferenceConfig_r16_Tag_release:
        break;
    case SetupRelease_ReleasePreferenceConfig_r16_Tag_setup:
        Free_ReleasePreferenceConfig_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// OtherConfig_v1610：ASN.1 OtherConfig-v1610；源文件第 21592 行；SEQUENCE。
// Encode_OtherConfig_v1610 只读不分配；Decode_OtherConfig_v1610 可能 malloc（失败时内部已释放并清零）；Free_OtherConfig_v1610 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_OtherConfig_v1610(Encoder& enc, const OtherConfig_v1610& value)
{
    enc.WriteBit(value.has_idc_AssistanceConfig_r16);
    enc.WriteBit(value.has_drx_PreferenceConfig_r16);
    enc.WriteBit(value.has_maxBW_PreferenceConfig_r16);
    enc.WriteBit(value.has_maxCC_PreferenceConfig_r16);
    enc.WriteBit(value.has_maxMIMO_LayerPreferenceConfig_r16);
    enc.WriteBit(value.has_minSchedulingOffsetPreferenceConfig_r16);
    enc.WriteBit(value.has_releasePreferenceConfig_r16);
    enc.WriteBit(value.has_referenceTimePreferenceReporting_r16);
    enc.WriteBit(value.has_btNameList_r16);
    enc.WriteBit(value.has_wlanNameList_r16);
    enc.WriteBit(value.has_sensorNameList_r16);
    enc.WriteBit(value.has_obtainCommonLocation_r16);
    enc.WriteBit(value.has_sl_AssistanceConfigNR_r16);
    if (value.has_idc_AssistanceConfig_r16) {
        Encode_SetupRelease_IDC_AssistanceConfig_r16(enc, value.idc_AssistanceConfig_r16);
    }
    if (value.has_drx_PreferenceConfig_r16) {
        Encode_SetupRelease_DRX_PreferenceConfig_r16(enc, value.drx_PreferenceConfig_r16);
    }
    if (value.has_maxBW_PreferenceConfig_r16) {
        Encode_SetupRelease_MaxBW_PreferenceConfig_r16(enc, value.maxBW_PreferenceConfig_r16);
    }
    if (value.has_maxCC_PreferenceConfig_r16) {
        Encode_SetupRelease_MaxCC_PreferenceConfig_r16(enc, value.maxCC_PreferenceConfig_r16);
    }
    if (value.has_maxMIMO_LayerPreferenceConfig_r16) {
        Encode_SetupRelease_MaxMIMO_LayerPreferenceConfig_r16(enc, value.maxMIMO_LayerPreferenceConfig_r16);
    }
    if (value.has_minSchedulingOffsetPreferenceConfig_r16) {
        Encode_SetupRelease_MinSchedulingOffsetPreferenceConfig_r16(enc, value.minSchedulingOffsetPreferenceConfig_r16);
    }
    if (value.has_releasePreferenceConfig_r16) {
        Encode_SetupRelease_ReleasePreferenceConfig_r16(enc, value.releasePreferenceConfig_r16);
    }
    if (value.has_referenceTimePreferenceReporting_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.referenceTimePreferenceReporting_r16), 0, 0);
    }
    if (value.has_btNameList_r16) {
        Encode_SetupRelease_BT_NameList_r16(enc, value.btNameList_r16);
    }
    if (value.has_wlanNameList_r16) {
        Encode_SetupRelease_WLAN_NameList_r16(enc, value.wlanNameList_r16);
    }
    if (value.has_sensorNameList_r16) {
        Encode_SetupRelease_Sensor_NameList_r16(enc, value.sensorNameList_r16);
    }
    if (value.has_obtainCommonLocation_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.obtainCommonLocation_r16), 0, 0);
    }
    if (value.has_sl_AssistanceConfigNR_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_AssistanceConfigNR_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_OtherConfig_v1610(Decoder& dec, OtherConfig_v1610& value)
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
        if (Decode_SetupRelease_IDC_AssistanceConfig_r16(dec, value.idc_AssistanceConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_DRX_PreferenceConfig_r16(dec, value.drx_PreferenceConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SetupRelease_MaxBW_PreferenceConfig_r16(dec, value.maxBW_PreferenceConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SetupRelease_MaxCC_PreferenceConfig_r16(dec, value.maxCC_PreferenceConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SetupRelease_MaxMIMO_LayerPreferenceConfig_r16(dec, value.maxMIMO_LayerPreferenceConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_SetupRelease_MinSchedulingOffsetPreferenceConfig_r16(dec, value.minSchedulingOffsetPreferenceConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_SetupRelease_ReleasePreferenceConfig_r16(dec, value.releasePreferenceConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        value.referenceTimePreferenceReporting_r16 = (OtherConfig_v1610_ReferenceTimePreferenceReporting_r16)0;
    }
    if (present_8) {
        if (Decode_SetupRelease_BT_NameList_r16(dec, value.btNameList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_9) {
        if (Decode_SetupRelease_WLAN_NameList_r16(dec, value.wlanNameList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_10) {
        if (Decode_SetupRelease_Sensor_NameList_r16(dec, value.sensorNameList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_11) {
        value.obtainCommonLocation_r16 = (OtherConfig_v1610_ObtainCommonLocation_r16)0;
    }
    if (present_12) {
        value.sl_AssistanceConfigNR_r16 = (OtherConfig_v1610_Sl_AssistanceConfigNR_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_OtherConfig_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_OtherConfig_v1610(OtherConfig_v1610& value)
{
    if (value.has_idc_AssistanceConfig_r16) {
        Free_SetupRelease_IDC_AssistanceConfig_r16(value.idc_AssistanceConfig_r16);
    }
    if (value.has_drx_PreferenceConfig_r16) {
        Free_SetupRelease_DRX_PreferenceConfig_r16(value.drx_PreferenceConfig_r16);
    }
    if (value.has_maxBW_PreferenceConfig_r16) {
        Free_SetupRelease_MaxBW_PreferenceConfig_r16(value.maxBW_PreferenceConfig_r16);
    }
    if (value.has_maxCC_PreferenceConfig_r16) {
        Free_SetupRelease_MaxCC_PreferenceConfig_r16(value.maxCC_PreferenceConfig_r16);
    }
    if (value.has_maxMIMO_LayerPreferenceConfig_r16) {
        Free_SetupRelease_MaxMIMO_LayerPreferenceConfig_r16(value.maxMIMO_LayerPreferenceConfig_r16);
    }
    if (value.has_minSchedulingOffsetPreferenceConfig_r16) {
        Free_SetupRelease_MinSchedulingOffsetPreferenceConfig_r16(value.minSchedulingOffsetPreferenceConfig_r16);
    }
    if (value.has_releasePreferenceConfig_r16) {
        Free_SetupRelease_ReleasePreferenceConfig_r16(value.releasePreferenceConfig_r16);
    }
    if (value.has_referenceTimePreferenceReporting_r16) {
    }
    if (value.has_btNameList_r16) {
        Free_SetupRelease_BT_NameList_r16(value.btNameList_r16);
    }
    if (value.has_wlanNameList_r16) {
        Free_SetupRelease_WLAN_NameList_r16(value.wlanNameList_r16);
    }
    if (value.has_sensorNameList_r16) {
        Free_SetupRelease_Sensor_NameList_r16(value.sensorNameList_r16);
    }
    if (value.has_obtainCommonLocation_r16) {
    }
    if (value.has_sl_AssistanceConfigNR_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BAP_RoutingID_r16：ASN.1 BAP-RoutingID-r16；源文件第 4380 行；SEQUENCE。
// Encode_BAP_RoutingID_r16 只读不分配；Decode_BAP_RoutingID_r16 可能 malloc（失败时内部已释放并清零）；Free_BAP_RoutingID_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BAP_RoutingID_r16(Encoder& enc, const BAP_RoutingID_r16& value)
{
    enc.WriteFixedBitString(value.bap_Address_r16.bytes, value.bap_Address_r16.bitLength, 10, 10);
    enc.WriteFixedBitString(value.bap_PathId_r16.bytes, value.bap_PathId_r16.bitLength, 10, 10);
    return enc.Error();
}

ErrorCode Decode_BAP_RoutingID_r16(Decoder& dec, BAP_RoutingID_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 10)) { goto fail; }
        string_length = 10;
        value.bap_Address_r16.bytes = string_bytes;
        value.bap_Address_r16.bitLength = string_length;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 10)) { goto fail; }
        string_length = 10;
        value.bap_PathId_r16.bytes = string_bytes;
        value.bap_PathId_r16.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BAP_RoutingID_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BAP_RoutingID_r16(BAP_RoutingID_r16& value)
{
    std::free(value.bap_Address_r16.bytes);
    value.bap_Address_r16.bytes = nullptr;
    value.bap_Address_r16.bitLength = 0;
    std::free(value.bap_PathId_r16.bytes);
    value.bap_PathId_r16.bytes = nullptr;
    value.bap_PathId_r16.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BAP_Config_r16：ASN.1 BAP-Config-r16；源文件第 1019 行；SEQUENCE。
// Encode_BAP_Config_r16 只读不分配；Decode_BAP_Config_r16 可能 malloc（失败时内部已释放并清零）；Free_BAP_Config_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BAP_Config_r16(Encoder& enc, const BAP_Config_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_bap_Address_r16);
    enc.WriteBit(value.has_defaultUL_BAP_RoutingID_r16);
    enc.WriteBit(value.has_defaultUL_BH_RLC_Channel_r16);
    enc.WriteBit(value.has_flowControlFeedbackType_r16);
    if (value.has_bap_Address_r16) {
        enc.WriteFixedBitString(value.bap_Address_r16.bytes, value.bap_Address_r16.bitLength, 10, 10);
    }
    if (value.has_defaultUL_BAP_RoutingID_r16) {
        Encode_BAP_RoutingID_r16(enc, value.defaultUL_BAP_RoutingID_r16);
    }
    if (value.has_defaultUL_BH_RLC_Channel_r16) {
        enc.WriteFixedBitString(value.defaultUL_BH_RLC_Channel_r16.bytes, value.defaultUL_BH_RLC_Channel_r16.bitLength, 16, 16);
    }
    if (value.has_flowControlFeedbackType_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.flowControlFeedbackType_r16), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_BAP_Config_r16(Decoder& dec, BAP_Config_r16& value)
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
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 10)) { goto fail; }
        string_length = 10;
        value.bap_Address_r16.bytes = string_bytes;
        value.bap_Address_r16.bitLength = string_length;
    }
    if (present_1) {
        if (Decode_BAP_RoutingID_r16(dec, value.defaultUL_BAP_RoutingID_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.defaultUL_BH_RLC_Channel_r16.bytes = string_bytes;
        value.defaultUL_BH_RLC_Channel_r16.bitLength = string_length;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.flowControlFeedbackType_r16 = (BAP_Config_r16_FlowControlFeedbackType_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BAP_Config_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BAP_Config_r16(BAP_Config_r16& value)
{
    if (value.has_bap_Address_r16) {
        std::free(value.bap_Address_r16.bytes);
        value.bap_Address_r16.bytes = nullptr;
        value.bap_Address_r16.bitLength = 0;
    }
    if (value.has_defaultUL_BAP_RoutingID_r16) {
        Free_BAP_RoutingID_r16(value.defaultUL_BAP_RoutingID_r16);
    }
    if (value.has_defaultUL_BH_RLC_Channel_r16) {
        std::free(value.defaultUL_BH_RLC_Channel_r16.bytes);
        value.defaultUL_BH_RLC_Channel_r16.bytes = nullptr;
        value.defaultUL_BH_RLC_Channel_r16.bitLength = 0;
    }
    if (value.has_flowControlFeedbackType_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_BAP_Config_r16：ASN.1 SetupRelease<BAP-Config-r16>；源文件第 970 行；CHOICE。
// Encode_SetupRelease_BAP_Config_r16 只读不分配；Decode_SetupRelease_BAP_Config_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_BAP_Config_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_BAP_Config_r16(Encoder& enc, const SetupRelease_BAP_Config_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_BAP_Config_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_BAP_Config_r16_Tag_setup:
        Encode_BAP_Config_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_BAP_Config_r16(Decoder& dec, SetupRelease_BAP_Config_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_BAP_Config_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_BAP_Config_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_BAP_Config_r16_Tag_setup: {
        if (Decode_BAP_Config_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_BAP_Config_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_BAP_Config_r16(SetupRelease_BAP_Config_r16& value)
{
    switch (value.tag) {
    case SetupRelease_BAP_Config_r16_Tag_release:
        break;
    case SetupRelease_BAP_Config_r16_Tag_setup:
        Free_BAP_Config_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_T316_r16：ASN.1 SetupRelease<T316-r16>；源文件第 974 行；CHOICE。
// Encode_SetupRelease_T316_r16 只读不分配；Decode_SetupRelease_T316_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_T316_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_T316_r16(Encoder& enc, const SetupRelease_T316_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_T316_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_T316_r16_Tag_setup:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.setup), 0, 9);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_T316_r16(Decoder& dec, SetupRelease_T316_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_T316_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_T316_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_T316_r16_Tag_setup: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.u.setup = (T316_r16)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_T316_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_T316_r16(SetupRelease_T316_r16& value)
{
    switch (value.tag) {
    case SetupRelease_T316_r16_Tag_release:
        break;
    case SetupRelease_T316_r16_Tag_setup:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NeedForGapsConfigNR_r16：ASN.1 NeedForGapsConfigNR-r16；源文件第 8652 行；SEQUENCE。
// Encode_NeedForGapsConfigNR_r16 只读不分配；Decode_NeedForGapsConfigNR_r16 可能 malloc（失败时内部已释放并清零）；Free_NeedForGapsConfigNR_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NeedForGapsConfigNR_r16(Encoder& enc, const NeedForGapsConfigNR_r16& value)
{
    enc.WriteBit(value.has_requestedTargetBandFilterNR_r16);
    if (value.has_requestedTargetBandFilterNR_r16) {
enc.WriteConstrainedLength(value.requestedTargetBandFilterNR_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.requestedTargetBandFilterNR_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.requestedTargetBandFilterNR_r16_items[i]), 1, 1024);
}
    }
    return enc.Error();
}

ErrorCode Decode_NeedForGapsConfigNR_r16(Decoder& dec, NeedForGapsConfigNR_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.requestedTargetBandFilterNR_r16_count)) { goto fail; }
if (value.requestedTargetBandFilterNR_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.requestedTargetBandFilterNR_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.requestedTargetBandFilterNR_r16_count > 0u) {
    value.requestedTargetBandFilterNR_r16_items = (FreqBandIndicatorNR*)std::malloc((std::size_t)value.requestedTargetBandFilterNR_r16_count * sizeof(FreqBandIndicatorNR));
    if (value.requestedTargetBandFilterNR_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.requestedTargetBandFilterNR_r16_items, 0, (std::size_t)value.requestedTargetBandFilterNR_r16_count * sizeof(FreqBandIndicatorNR));
}
for (std::uint32_t i = 0; i < value.requestedTargetBandFilterNR_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 1024, tmp_value)) { goto fail; }
    value.requestedTargetBandFilterNR_r16_items[i] = (FreqBandIndicatorNR)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_NeedForGapsConfigNR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NeedForGapsConfigNR_r16(NeedForGapsConfigNR_r16& value)
{
    if (value.has_requestedTargetBandFilterNR_r16) {
        if (value.requestedTargetBandFilterNR_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.requestedTargetBandFilterNR_r16_count; ++i) {
            }
            std::free(value.requestedTargetBandFilterNR_r16_items);
            value.requestedTargetBandFilterNR_r16_items = nullptr;
        }
        value.requestedTargetBandFilterNR_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_NeedForGapsConfigNR_r16：ASN.1 SetupRelease<NeedForGapsConfigNR-r16>；源文件第 975 行；CHOICE。
// Encode_SetupRelease_NeedForGapsConfigNR_r16 只读不分配；Decode_SetupRelease_NeedForGapsConfigNR_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_NeedForGapsConfigNR_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_NeedForGapsConfigNR_r16(Encoder& enc, const SetupRelease_NeedForGapsConfigNR_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_NeedForGapsConfigNR_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_NeedForGapsConfigNR_r16_Tag_setup:
        Encode_NeedForGapsConfigNR_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_NeedForGapsConfigNR_r16(Decoder& dec, SetupRelease_NeedForGapsConfigNR_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_NeedForGapsConfigNR_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_NeedForGapsConfigNR_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_NeedForGapsConfigNR_r16_Tag_setup: {
        if (Decode_NeedForGapsConfigNR_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_NeedForGapsConfigNR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_NeedForGapsConfigNR_r16(SetupRelease_NeedForGapsConfigNR_r16& value)
{
    switch (value.tag) {
    case SetupRelease_NeedForGapsConfigNR_r16_Tag_release:
        break;
    case SetupRelease_NeedForGapsConfigNR_r16_Tag_setup:
        Free_NeedForGapsConfigNR_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
