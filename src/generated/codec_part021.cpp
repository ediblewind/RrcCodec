/* ============================================================================
 * src/generated/codec_part021.cpp — 生成的编解码函数
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
// RateMatchPattern_PatternType：ASN.1 patternType；源文件第 11118 行；CHOICE。
// Encode_RateMatchPattern_PatternType 只读不分配；Decode_RateMatchPattern_PatternType 可能 malloc（失败时内部已释放并清零）；Free_RateMatchPattern_PatternType 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RateMatchPattern_PatternType(Encoder& enc, const RateMatchPattern_PatternType& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RateMatchPattern_PatternType_Tag_bitmaps:
        Encode_RateMatchPattern_PatternType_Bitmaps(enc, value.u.bitmaps);
        break;
    case RateMatchPattern_PatternType_Tag_controlResourceSet:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.controlResourceSet), 0, 11);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RateMatchPattern_PatternType(Decoder& dec, RateMatchPattern_PatternType& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RateMatchPattern_PatternType_Tag)root_index;
    switch (value.tag) {
    case RateMatchPattern_PatternType_Tag_bitmaps: {
        if (Decode_RateMatchPattern_PatternType_Bitmaps(dec, value.u.bitmaps) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RateMatchPattern_PatternType_Tag_controlResourceSet: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 11, tmp_value)) { goto fail; }
        value.u.controlResourceSet = (ControlResourceSetId)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RateMatchPattern_PatternType(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RateMatchPattern_PatternType(RateMatchPattern_PatternType& value)
{
    switch (value.tag) {
    case RateMatchPattern_PatternType_Tag_bitmaps:
        Free_RateMatchPattern_PatternType_Bitmaps(value.u.bitmaps);
        break;
    case RateMatchPattern_PatternType_Tag_controlResourceSet:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RateMatchPattern：ASN.1 RateMatchPattern；源文件第 11115 行；SEQUENCE。
// Encode_RateMatchPattern 只读不分配；Decode_RateMatchPattern 可能 malloc（失败时内部已释放并清零）；Free_RateMatchPattern 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RateMatchPattern(Encoder& enc, const RateMatchPattern& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_subcarrierSpacing);
    enc.WriteConstrainedInteger((std::int64_t)(value.rateMatchPatternId), 0, 3);
    Encode_RateMatchPattern_PatternType(enc, value.patternType);
    if (value.has_subcarrierSpacing) {
        enc.WriteConstrainedInteger((std::int64_t)(value.subcarrierSpacing), 0, 7);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.dummy), 0, 1);
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_RateMatchPattern_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_RateMatchPattern(Decoder& dec, RateMatchPattern& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.rateMatchPatternId = (RateMatchPatternId)tmp_value;
    }
    {
        if (Decode_RateMatchPattern_PatternType(dec, value.patternType) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.subcarrierSpacing = (SubcarrierSpacing)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.dummy = (RateMatchPattern_Dummy)tmp_value;
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
    if (Decode_RateMatchPattern_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_RateMatchPattern(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RateMatchPattern(RateMatchPattern& value)
{
    Free_RateMatchPattern_PatternType(value.patternType);
    if (value.has_subcarrierSpacing) {
    }
    if (value.has_extGroup1) {
        Free_RateMatchPattern_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ReportCGI_EUTRA_ExtGroup1：ASN.1 ReportCGI_EUTRA_ExtGroup1；源文件第 11247 行；扩展添加组 [[ ]]。
// Encode_ReportCGI_EUTRA_ExtGroup1 只读不分配；Decode_ReportCGI_EUTRA_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_ReportCGI_EUTRA_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ReportCGI_EUTRA_ExtGroup1(Encoder& enc, const ReportCGI_EUTRA_ExtGroup1& value)
{
    enc.WriteBit(value.has_useAutonomousGaps_r16);
    if (value.has_useAutonomousGaps_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.useAutonomousGaps_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_ReportCGI_EUTRA_ExtGroup1(Decoder& dec, ReportCGI_EUTRA_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.useAutonomousGaps_r16 = (ReportCGI_EUTRA_ExtGroup1_UseAutonomousGaps_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReportCGI_EUTRA_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReportCGI_EUTRA_ExtGroup1(ReportCGI_EUTRA_ExtGroup1& value)
{
    if (value.has_useAutonomousGaps_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ReportCGI_EUTRA：ASN.1 ReportCGI-EUTRA；源文件第 11244 行；SEQUENCE。
// Encode_ReportCGI_EUTRA 只读不分配；Decode_ReportCGI_EUTRA 可能 malloc（失败时内部已释放并清零）；Free_ReportCGI_EUTRA 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ReportCGI_EUTRA(Encoder& enc, const ReportCGI_EUTRA& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.cellForWhichToReportCGI), 0, 503);
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_ReportCGI_EUTRA_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_ReportCGI_EUTRA(Decoder& dec, ReportCGI_EUTRA& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 503, tmp_value)) { goto fail; }
        value.cellForWhichToReportCGI = (EUTRA_PhysCellId)tmp_value;
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
    if (Decode_ReportCGI_EUTRA_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_ReportCGI_EUTRA(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReportCGI_EUTRA(ReportCGI_EUTRA& value)
{
    if (value.has_extGroup1) {
        Free_ReportCGI_EUTRA_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ReportSFTD_EUTRA：ASN.1 ReportSFTD-EUTRA；源文件第 11252 行；SEQUENCE。
// Encode_ReportSFTD_EUTRA 只读不分配；Decode_ReportSFTD_EUTRA 可能 malloc（失败时内部已释放并清零）；Free_ReportSFTD_EUTRA 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ReportSFTD_EUTRA(Encoder& enc, const ReportSFTD_EUTRA& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBool(value.reportSFTD_Meas);
    enc.WriteBool(value.reportRSRP);
    return enc.Error();
}

ErrorCode Decode_ReportSFTD_EUTRA(Decoder& dec, ReportSFTD_EUTRA& value)
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
        value.reportSFTD_Meas = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportRSRP = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReportSFTD_EUTRA(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReportSFTD_EUTRA(ReportSFTD_EUTRA& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasReportQuantityUTRA_FDD_r16：ASN.1 MeasReportQuantityUTRA-FDD-r16；源文件第 11375 行；SEQUENCE。
// Encode_MeasReportQuantityUTRA_FDD_r16 只读不分配；Decode_MeasReportQuantityUTRA_FDD_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasReportQuantityUTRA_FDD_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasReportQuantityUTRA_FDD_r16(Encoder& enc, const MeasReportQuantityUTRA_FDD_r16& value)
{
    enc.WriteBool(value.cpich_RSCP);
    enc.WriteBool(value.cpich_EcN0);
    return enc.Error();
}

ErrorCode Decode_MeasReportQuantityUTRA_FDD_r16(Decoder& dec, MeasReportQuantityUTRA_FDD_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.cpich_RSCP = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.cpich_EcN0 = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasReportQuantityUTRA_FDD_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasReportQuantityUTRA_FDD_r16(MeasReportQuantityUTRA_FDD_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfigInterRAT_ExtGroup1：ASN.1 EventTriggerConfigInterRAT_ExtGroup1；源文件第 11331 行；扩展添加组 [[ ]]。
// Encode_EventTriggerConfigInterRAT_ExtGroup1 只读不分配；Decode_EventTriggerConfigInterRAT_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfigInterRAT_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfigInterRAT_ExtGroup1(Encoder& enc, const EventTriggerConfigInterRAT_ExtGroup1& value)
{
    enc.WriteBit(value.has_reportQuantityUTRA_FDD_r16);
    if (value.has_reportQuantityUTRA_FDD_r16) {
        Encode_MeasReportQuantityUTRA_FDD_r16(enc, value.reportQuantityUTRA_FDD_r16);
    }
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfigInterRAT_ExtGroup1(Decoder& dec, EventTriggerConfigInterRAT_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_MeasReportQuantityUTRA_FDD_r16(dec, value.reportQuantityUTRA_FDD_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfigInterRAT_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfigInterRAT_ExtGroup1(EventTriggerConfigInterRAT_ExtGroup1& value)
{
    if (value.has_reportQuantityUTRA_FDD_r16) {
        Free_MeasReportQuantityUTRA_FDD_r16(value.reportQuantityUTRA_FDD_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfigInterRAT_ExtGroup2：ASN.1 EventTriggerConfigInterRAT_ExtGroup2；源文件第 11334 行；扩展添加组 [[ ]]。
// Encode_EventTriggerConfigInterRAT_ExtGroup2 只读不分配；Decode_EventTriggerConfigInterRAT_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfigInterRAT_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfigInterRAT_ExtGroup2(Encoder& enc, const EventTriggerConfigInterRAT_ExtGroup2& value)
{
    enc.WriteBit(value.has_includeCommonLocationInfo_r16);
    enc.WriteBit(value.has_includeBT_Meas_r16);
    enc.WriteBit(value.has_includeWLAN_Meas_r16);
    enc.WriteBit(value.has_includeSensor_Meas_r16);
    if (value.has_includeCommonLocationInfo_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.includeCommonLocationInfo_r16), 0, 0);
    }
    if (value.has_includeBT_Meas_r16) {
        Encode_SetupRelease_BT_NameList_r16(enc, value.includeBT_Meas_r16);
    }
    if (value.has_includeWLAN_Meas_r16) {
        Encode_SetupRelease_WLAN_NameList_r16(enc, value.includeWLAN_Meas_r16);
    }
    if (value.has_includeSensor_Meas_r16) {
        Encode_SetupRelease_Sensor_NameList_r16(enc, value.includeSensor_Meas_r16);
    }
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfigInterRAT_ExtGroup2(Decoder& dec, EventTriggerConfigInterRAT_ExtGroup2& value)
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
        value.includeCommonLocationInfo_r16 = (EventTriggerConfigInterRAT_ExtGroup2_IncludeCommonLocationInfo_r16)0;
    }
    if (present_1) {
        if (Decode_SetupRelease_BT_NameList_r16(dec, value.includeBT_Meas_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SetupRelease_WLAN_NameList_r16(dec, value.includeWLAN_Meas_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SetupRelease_Sensor_NameList_r16(dec, value.includeSensor_Meas_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfigInterRAT_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfigInterRAT_ExtGroup2(EventTriggerConfigInterRAT_ExtGroup2& value)
{
    if (value.has_includeCommonLocationInfo_r16) {
    }
    if (value.has_includeBT_Meas_r16) {
        Free_SetupRelease_BT_NameList_r16(value.includeBT_Meas_r16);
    }
    if (value.has_includeWLAN_Meas_r16) {
        Free_SetupRelease_WLAN_NameList_r16(value.includeWLAN_Meas_r16);
    }
    if (value.has_includeSensor_Meas_r16) {
        Free_SetupRelease_Sensor_NameList_r16(value.includeSensor_Meas_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_MeasReportQuantity_r16：ASN.1 SL-MeasReportQuantity-r16；源文件第 22977 行；CHOICE。
// Encode_SL_MeasReportQuantity_r16 只读不分配；Decode_SL_MeasReportQuantity_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_MeasReportQuantity_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_MeasReportQuantity_r16(Encoder& enc, const SL_MeasReportQuantity_r16& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 1) {
        if (choice_index >= 1) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 1));
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
    switch (value.tag) {
    case SL_MeasReportQuantity_r16_Tag_sl_RSRP_r16:
        enc.WriteBool(value.u.sl_RSRP_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SL_MeasReportQuantity_r16(Decoder& dec, SL_MeasReportQuantity_r16& value)
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
        value.tag = (SL_MeasReportQuantity_r16_Tag)(1 + extension_index);
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
    value.tag = (SL_MeasReportQuantity_r16_Tag)0;
    switch (value.tag) {
    case SL_MeasReportQuantity_r16_Tag_sl_RSRP_r16: {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.u.sl_RSRP_r16 = tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_MeasReportQuantity_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_MeasReportQuantity_r16(SL_MeasReportQuantity_r16& value)
{
    switch (value.tag) {
    case SL_MeasReportQuantity_r16_Tag_sl_RSRP_r16:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfigInterRAT_ExtGroup3：ASN.1 EventTriggerConfigInterRAT_ExtGroup3；源文件第 11340 行；扩展添加组 [[ ]]。
// Encode_EventTriggerConfigInterRAT_ExtGroup3 只读不分配；Decode_EventTriggerConfigInterRAT_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfigInterRAT_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfigInterRAT_ExtGroup3(Encoder& enc, const EventTriggerConfigInterRAT_ExtGroup3& value)
{
    enc.WriteBit(value.has_reportQuantityRelay_r17);
    if (value.has_reportQuantityRelay_r17) {
        Encode_SL_MeasReportQuantity_r16(enc, value.reportQuantityRelay_r17);
    }
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfigInterRAT_ExtGroup3(Decoder& dec, EventTriggerConfigInterRAT_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SL_MeasReportQuantity_r16(dec, value.reportQuantityRelay_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfigInterRAT_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfigInterRAT_ExtGroup3(EventTriggerConfigInterRAT_ExtGroup3& value)
{
    if (value.has_reportQuantityRelay_r17) {
        Free_SL_MeasReportQuantity_r16(value.reportQuantityRelay_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfigInterRAT_ExtGroup4：ASN.1 EventTriggerConfigInterRAT_ExtGroup4；源文件第 11343 行；扩展添加组 [[ ]]。
// Encode_EventTriggerConfigInterRAT_ExtGroup4 只读不分配；Decode_EventTriggerConfigInterRAT_ExtGroup4 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfigInterRAT_ExtGroup4 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfigInterRAT_ExtGroup4(Encoder& enc, const EventTriggerConfigInterRAT_ExtGroup4& value)
{
    enc.WriteBit(value.has_cellIndividualOffsetList_r18);
    if (value.has_cellIndividualOffsetList_r18) {
enc.WriteConstrainedLength(value.cellIndividualOffsetList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cellIndividualOffsetList_r18_count; ++i) {
    Encode_CellIndividualOffsetList_EUTRA_r18(enc, value.cellIndividualOffsetList_r18_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfigInterRAT_ExtGroup4(Decoder& dec, EventTriggerConfigInterRAT_ExtGroup4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.cellIndividualOffsetList_r18_count)) { goto fail; }
if (value.cellIndividualOffsetList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cellIndividualOffsetList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cellIndividualOffsetList_r18_count > 0u) {
    value.cellIndividualOffsetList_r18_items = (CellIndividualOffsetList_EUTRA_r18*)std::malloc((std::size_t)value.cellIndividualOffsetList_r18_count * sizeof(CellIndividualOffsetList_EUTRA_r18));
    if (value.cellIndividualOffsetList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cellIndividualOffsetList_r18_items, 0, (std::size_t)value.cellIndividualOffsetList_r18_count * sizeof(CellIndividualOffsetList_EUTRA_r18));
}
for (std::uint32_t i = 0; i < value.cellIndividualOffsetList_r18_count; ++i) {
    if (Decode_CellIndividualOffsetList_EUTRA_r18(dec, value.cellIndividualOffsetList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfigInterRAT_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfigInterRAT_ExtGroup4(EventTriggerConfigInterRAT_ExtGroup4& value)
{
    if (value.has_cellIndividualOffsetList_r18) {
        if (value.cellIndividualOffsetList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.cellIndividualOffsetList_r18_count; ++i) {
                Free_CellIndividualOffsetList_EUTRA_r18(value.cellIndividualOffsetList_r18_items[i]);
            }
            std::free(value.cellIndividualOffsetList_r18_items);
            value.cellIndividualOffsetList_r18_items = nullptr;
        }
        value.cellIndividualOffsetList_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasReportQuantity：ASN.1 MeasReportQuantity；源文件第 11707 行；SEQUENCE。
// Encode_MeasReportQuantity 只读不分配；Decode_MeasReportQuantity 可能 malloc（失败时内部已释放并清零）；Free_MeasReportQuantity 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasReportQuantity(Encoder& enc, const MeasReportQuantity& value)
{
    enc.WriteBool(value.rsrp);
    enc.WriteBool(value.rsrq);
    enc.WriteBool(value.sinr);
    return enc.Error();
}

ErrorCode Decode_MeasReportQuantity(Decoder& dec, MeasReportQuantity& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.rsrp = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.rsrq = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.sinr = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasReportQuantity(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasReportQuantity(MeasReportQuantity& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfigInterRAT_EventId_EventB1：ASN.1 eventId/eventB1；源文件第 11260 行；SEQUENCE。
// Encode_EventTriggerConfigInterRAT_EventId_EventB1 只读不分配；Decode_EventTriggerConfigInterRAT_EventId_EventB1 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfigInterRAT_EventId_EventB1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfigInterRAT_EventId_EventB1(Encoder& enc, const EventTriggerConfigInterRAT_EventId_EventB1& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_MeasTriggerQuantityEUTRA(enc, value.b1_ThresholdEUTRA);
    enc.WriteBool(value.reportOnLeave);
    enc.WriteConstrainedInteger((std::int64_t)(value.hysteresis), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger), 0, 15);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfigInterRAT_EventId_EventB1(Decoder& dec, EventTriggerConfigInterRAT_EventId_EventB1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_MeasTriggerQuantityEUTRA(dec, value.b1_ThresholdEUTRA) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportOnLeave = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.hysteresis = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger = (TimeToTrigger)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfigInterRAT_EventId_EventB1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfigInterRAT_EventId_EventB1(EventTriggerConfigInterRAT_EventId_EventB1& value)
{
    Free_MeasTriggerQuantityEUTRA(value.b1_ThresholdEUTRA);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfigInterRAT_EventId_EventB2：ASN.1 eventId/eventB2；源文件第 11267 行；SEQUENCE。
// Encode_EventTriggerConfigInterRAT_EventId_EventB2 只读不分配；Decode_EventTriggerConfigInterRAT_EventId_EventB2 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfigInterRAT_EventId_EventB2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfigInterRAT_EventId_EventB2(Encoder& enc, const EventTriggerConfigInterRAT_EventId_EventB2& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_MeasTriggerQuantity(enc, value.b2_Threshold1);
    Encode_MeasTriggerQuantityEUTRA(enc, value.b2_Threshold2EUTRA);
    enc.WriteBool(value.reportOnLeave);
    enc.WriteConstrainedInteger((std::int64_t)(value.hysteresis), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger), 0, 15);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfigInterRAT_EventId_EventB2(Decoder& dec, EventTriggerConfigInterRAT_EventId_EventB2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_MeasTriggerQuantity(dec, value.b2_Threshold1) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_MeasTriggerQuantityEUTRA(dec, value.b2_Threshold2EUTRA) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportOnLeave = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.hysteresis = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger = (TimeToTrigger)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfigInterRAT_EventId_EventB2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfigInterRAT_EventId_EventB2(EventTriggerConfigInterRAT_EventId_EventB2& value)
{
    Free_MeasTriggerQuantity(value.b2_Threshold1);
    Free_MeasTriggerQuantityEUTRA(value.b2_Threshold2EUTRA);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasTriggerQuantityUTRA_FDD_r16：ASN.1 MeasTriggerQuantityUTRA-FDD-r16；源文件第 11370 行；CHOICE。
// Encode_MeasTriggerQuantityUTRA_FDD_r16 只读不分配；Decode_MeasTriggerQuantityUTRA_FDD_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasTriggerQuantityUTRA_FDD_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasTriggerQuantityUTRA_FDD_r16(Encoder& enc, const MeasTriggerQuantityUTRA_FDD_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case MeasTriggerQuantityUTRA_FDD_r16_Tag_utra_FDD_RSCP_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.utra_FDD_RSCP_r16), -5, 91);
        break;
    case MeasTriggerQuantityUTRA_FDD_r16_Tag_utra_FDD_EcN0_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.utra_FDD_EcN0_r16), 0, 49);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MeasTriggerQuantityUTRA_FDD_r16(Decoder& dec, MeasTriggerQuantityUTRA_FDD_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (MeasTriggerQuantityUTRA_FDD_r16_Tag)root_index;
    switch (value.tag) {
    case MeasTriggerQuantityUTRA_FDD_r16_Tag_utra_FDD_RSCP_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-5, 91, tmp_value)) { goto fail; }
        value.u.utra_FDD_RSCP_r16 = (int64_t)tmp_value;
        break;
    }
    case MeasTriggerQuantityUTRA_FDD_r16_Tag_utra_FDD_EcN0_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 49, tmp_value)) { goto fail; }
        value.u.utra_FDD_EcN0_r16 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasTriggerQuantityUTRA_FDD_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasTriggerQuantityUTRA_FDD_r16(MeasTriggerQuantityUTRA_FDD_r16& value)
{
    switch (value.tag) {
    case MeasTriggerQuantityUTRA_FDD_r16_Tag_utra_FDD_RSCP_r16:
        break;
    case MeasTriggerQuantityUTRA_FDD_r16_Tag_utra_FDD_EcN0_r16:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfigInterRAT_EventId_EventB1_UTRA_FDD_r16：ASN.1 eventId/eventB1-UTRA-FDD-r16；源文件第 11277 行；SEQUENCE。
// Encode_EventTriggerConfigInterRAT_EventId_EventB1_UTRA_FDD_r16 只读不分配；Decode_EventTriggerConfigInterRAT_EventId_EventB1_UTRA_FDD_r16 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfigInterRAT_EventId_EventB1_UTRA_FDD_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfigInterRAT_EventId_EventB1_UTRA_FDD_r16(Encoder& enc, const EventTriggerConfigInterRAT_EventId_EventB1_UTRA_FDD_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_MeasTriggerQuantityUTRA_FDD_r16(enc, value.b1_ThresholdUTRA_FDD_r16);
    enc.WriteBool(value.reportOnLeave_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.hysteresis_r16), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger_r16), 0, 15);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfigInterRAT_EventId_EventB1_UTRA_FDD_r16(Decoder& dec, EventTriggerConfigInterRAT_EventId_EventB1_UTRA_FDD_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_MeasTriggerQuantityUTRA_FDD_r16(dec, value.b1_ThresholdUTRA_FDD_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportOnLeave_r16 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.hysteresis_r16 = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger_r16 = (TimeToTrigger)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfigInterRAT_EventId_EventB1_UTRA_FDD_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfigInterRAT_EventId_EventB1_UTRA_FDD_r16(EventTriggerConfigInterRAT_EventId_EventB1_UTRA_FDD_r16& value)
{
    Free_MeasTriggerQuantityUTRA_FDD_r16(value.b1_ThresholdUTRA_FDD_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfigInterRAT_EventId_EventB2_UTRA_FDD_r16：ASN.1 eventId/eventB2-UTRA-FDD-r16；源文件第 11284 行；SEQUENCE。
// Encode_EventTriggerConfigInterRAT_EventId_EventB2_UTRA_FDD_r16 只读不分配；Decode_EventTriggerConfigInterRAT_EventId_EventB2_UTRA_FDD_r16 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfigInterRAT_EventId_EventB2_UTRA_FDD_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfigInterRAT_EventId_EventB2_UTRA_FDD_r16(Encoder& enc, const EventTriggerConfigInterRAT_EventId_EventB2_UTRA_FDD_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_MeasTriggerQuantity(enc, value.b2_Threshold1_r16);
    Encode_MeasTriggerQuantityUTRA_FDD_r16(enc, value.b2_Threshold2UTRA_FDD_r16);
    enc.WriteBool(value.reportOnLeave_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.hysteresis_r16), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger_r16), 0, 15);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfigInterRAT_EventId_EventB2_UTRA_FDD_r16(Decoder& dec, EventTriggerConfigInterRAT_EventId_EventB2_UTRA_FDD_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_MeasTriggerQuantity(dec, value.b2_Threshold1_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_MeasTriggerQuantityUTRA_FDD_r16(dec, value.b2_Threshold2UTRA_FDD_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportOnLeave_r16 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.hysteresis_r16 = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger_r16 = (TimeToTrigger)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfigInterRAT_EventId_EventB2_UTRA_FDD_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfigInterRAT_EventId_EventB2_UTRA_FDD_r16(EventTriggerConfigInterRAT_EventId_EventB2_UTRA_FDD_r16& value)
{
    Free_MeasTriggerQuantity(value.b2_Threshold1_r16);
    Free_MeasTriggerQuantityUTRA_FDD_r16(value.b2_Threshold2UTRA_FDD_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_MeasTriggerQuantity_r16：ASN.1 SL-MeasTriggerQuantity-r16；源文件第 22982 行；CHOICE。
// Encode_SL_MeasTriggerQuantity_r16 只读不分配；Decode_SL_MeasTriggerQuantity_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_MeasTriggerQuantity_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_MeasTriggerQuantity_r16(Encoder& enc, const SL_MeasTriggerQuantity_r16& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 1) {
        if (choice_index >= 1) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 1));
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
    switch (value.tag) {
    case SL_MeasTriggerQuantity_r16_Tag_sl_RSRP_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl_RSRP_r16), 0, 127);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SL_MeasTriggerQuantity_r16(Decoder& dec, SL_MeasTriggerQuantity_r16& value)
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
        value.tag = (SL_MeasTriggerQuantity_r16_Tag)(1 + extension_index);
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
    value.tag = (SL_MeasTriggerQuantity_r16_Tag)0;
    switch (value.tag) {
    case SL_MeasTriggerQuantity_r16_Tag_sl_RSRP_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.u.sl_RSRP_r16 = (RSRP_Range)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_MeasTriggerQuantity_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_MeasTriggerQuantity_r16(SL_MeasTriggerQuantity_r16& value)
{
    switch (value.tag) {
    case SL_MeasTriggerQuantity_r16_Tag_sl_RSRP_r16:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfigInterRAT_EventId_EventY1_Relay_r17：ASN.1 eventId/eventY1-Relay-r17；源文件第 11294 行；SEQUENCE。
// Encode_EventTriggerConfigInterRAT_EventId_EventY1_Relay_r17 只读不分配；Decode_EventTriggerConfigInterRAT_EventId_EventY1_Relay_r17 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfigInterRAT_EventId_EventY1_Relay_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfigInterRAT_EventId_EventY1_Relay_r17(Encoder& enc, const EventTriggerConfigInterRAT_EventId_EventY1_Relay_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_MeasTriggerQuantity(enc, value.y1_Threshold1_r17);
    Encode_SL_MeasTriggerQuantity_r16(enc, value.y1_Threshold2_Relay_r17);
    enc.WriteBool(value.reportOnLeave_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.hysteresis_r17), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger_r17), 0, 15);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfigInterRAT_EventId_EventY1_Relay_r17(Decoder& dec, EventTriggerConfigInterRAT_EventId_EventY1_Relay_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_MeasTriggerQuantity(dec, value.y1_Threshold1_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_SL_MeasTriggerQuantity_r16(dec, value.y1_Threshold2_Relay_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportOnLeave_r17 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.hysteresis_r17 = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger_r17 = (TimeToTrigger)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfigInterRAT_EventId_EventY1_Relay_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfigInterRAT_EventId_EventY1_Relay_r17(EventTriggerConfigInterRAT_EventId_EventY1_Relay_r17& value)
{
    Free_MeasTriggerQuantity(value.y1_Threshold1_r17);
    Free_SL_MeasTriggerQuantity_r16(value.y1_Threshold2_Relay_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfigInterRAT_EventId_EventY2_Relay_r17：ASN.1 eventId/eventY2-Relay-r17；源文件第 11302 行；SEQUENCE。
// Encode_EventTriggerConfigInterRAT_EventId_EventY2_Relay_r17 只读不分配；Decode_EventTriggerConfigInterRAT_EventId_EventY2_Relay_r17 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfigInterRAT_EventId_EventY2_Relay_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfigInterRAT_EventId_EventY2_Relay_r17(Encoder& enc, const EventTriggerConfigInterRAT_EventId_EventY2_Relay_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_SL_MeasTriggerQuantity_r16(enc, value.y2_Threshold_Relay_r17);
    enc.WriteBool(value.reportOnLeave_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.hysteresis_r17), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger_r17), 0, 15);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfigInterRAT_EventId_EventY2_Relay_r17(Decoder& dec, EventTriggerConfigInterRAT_EventId_EventY2_Relay_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_SL_MeasTriggerQuantity_r16(dec, value.y2_Threshold_Relay_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportOnLeave_r17 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.hysteresis_r17 = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger_r17 = (TimeToTrigger)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfigInterRAT_EventId_EventY2_Relay_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfigInterRAT_EventId_EventY2_Relay_r17(EventTriggerConfigInterRAT_EventId_EventY2_Relay_r17& value)
{
    Free_SL_MeasTriggerQuantity_r16(value.y2_Threshold_Relay_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18_Z1_Threshold1_Relay_r18：ASN.1 eventId/eventZ1-Relay-r18/z1-Threshold1-Relay-r18；源文件第 11312 行；SEQUENCE。
// Encode_EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18_Z1_Threshold1_Relay_r18 只读不分配；Decode_EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18_Z1_Threshold1_Relay_r18 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18_Z1_Threshold1_Relay_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18_Z1_Threshold1_Relay_r18(Encoder& enc, const EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18_Z1_Threshold1_Relay_r18& value)
{
    enc.WriteBit(value.has_sd_RSRP_r18);
    Encode_SL_MeasTriggerQuantity_r16(enc, value.sl_RSRP_r18);
    if (value.has_sd_RSRP_r18) {
        Encode_SL_MeasTriggerQuantity_r16(enc, value.sd_RSRP_r18);
    }
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18_Z1_Threshold1_Relay_r18(Decoder& dec, EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18_Z1_Threshold1_Relay_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_SL_MeasTriggerQuantity_r16(dec, value.sl_RSRP_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_SL_MeasTriggerQuantity_r16(dec, value.sd_RSRP_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18_Z1_Threshold1_Relay_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18_Z1_Threshold1_Relay_r18(EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18_Z1_Threshold1_Relay_r18& value)
{
    Free_SL_MeasTriggerQuantity_r16(value.sl_RSRP_r18);
    if (value.has_sd_RSRP_r18) {
        Free_SL_MeasTriggerQuantity_r16(value.sd_RSRP_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18：ASN.1 eventId/eventZ1-Relay-r18；源文件第 11311 行；SEQUENCE。
// Encode_EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18 只读不分配；Decode_EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18(Encoder& enc, const EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18_Z1_Threshold1_Relay_r18(enc, value.z1_Threshold1_Relay_r18);
    Encode_SL_MeasTriggerQuantity_r16(enc, value.z1_Threshold2_Relay_r18);
    enc.WriteBool(value.reportOnLeave_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.hysteresis_r18), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger_r18), 0, 15);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18(Decoder& dec, EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18_Z1_Threshold1_Relay_r18(dec, value.z1_Threshold1_Relay_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_SL_MeasTriggerQuantity_r16(dec, value.z1_Threshold2_Relay_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportOnLeave_r18 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.hysteresis_r18 = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger_r18 = (TimeToTrigger)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18(EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18& value)
{
    Free_EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18_Z1_Threshold1_Relay_r18(value.z1_Threshold1_Relay_r18);
    Free_SL_MeasTriggerQuantity_r16(value.z1_Threshold2_Relay_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfigInterRAT_EventId：ASN.1 eventId；源文件第 11259 行；CHOICE。
// Encode_EventTriggerConfigInterRAT_EventId 只读不分配；Decode_EventTriggerConfigInterRAT_EventId 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfigInterRAT_EventId 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfigInterRAT_EventId(Encoder& enc, const EventTriggerConfigInterRAT_EventId& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 2) {
        if (choice_index >= 7) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 2));
        Encoder sub;
        switch (value.tag) {
        case EventTriggerConfigInterRAT_EventId_Tag_eventB1_UTRA_FDD_r16:
            Encode_EventTriggerConfigInterRAT_EventId_EventB1_UTRA_FDD_r16(sub, value.u.eventB1_UTRA_FDD_r16);
            break;
        case EventTriggerConfigInterRAT_EventId_Tag_eventB2_UTRA_FDD_r16:
            Encode_EventTriggerConfigInterRAT_EventId_EventB2_UTRA_FDD_r16(sub, value.u.eventB2_UTRA_FDD_r16);
            break;
        case EventTriggerConfigInterRAT_EventId_Tag_eventY1_Relay_r17:
            Encode_EventTriggerConfigInterRAT_EventId_EventY1_Relay_r17(sub, value.u.eventY1_Relay_r17);
            break;
        case EventTriggerConfigInterRAT_EventId_Tag_eventY2_Relay_r17:
            Encode_EventTriggerConfigInterRAT_EventId_EventY2_Relay_r17(sub, value.u.eventY2_Relay_r17);
            break;
        case EventTriggerConfigInterRAT_EventId_Tag_eventZ1_Relay_r18:
            Encode_EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18(sub, value.u.eventZ1_Relay_r18);
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
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case EventTriggerConfigInterRAT_EventId_Tag_eventB1:
        Encode_EventTriggerConfigInterRAT_EventId_EventB1(enc, value.u.eventB1);
        break;
    case EventTriggerConfigInterRAT_EventId_Tag_eventB2:
        Encode_EventTriggerConfigInterRAT_EventId_EventB2(enc, value.u.eventB2);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfigInterRAT_EventId(Decoder& dec, EventTriggerConfigInterRAT_EventId& value)
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
        if (extension_index >= 5u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        value.tag = (EventTriggerConfigInterRAT_EventId_Tag)(2 + extension_index);
        std::vector<std::uint8_t> open_bytes;
        if (!dec.ReadOpenType(open_bytes)) { goto fail; }
        Decoder sub(open_bytes.data(), open_bytes.size());
        switch (value.tag) {
        case EventTriggerConfigInterRAT_EventId_Tag_eventB1_UTRA_FDD_r16: {
            if (Decode_EventTriggerConfigInterRAT_EventId_EventB1_UTRA_FDD_r16(sub, value.u.eventB1_UTRA_FDD_r16) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case EventTriggerConfigInterRAT_EventId_Tag_eventB2_UTRA_FDD_r16: {
            if (Decode_EventTriggerConfigInterRAT_EventId_EventB2_UTRA_FDD_r16(sub, value.u.eventB2_UTRA_FDD_r16) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case EventTriggerConfigInterRAT_EventId_Tag_eventY1_Relay_r17: {
            if (Decode_EventTriggerConfigInterRAT_EventId_EventY1_Relay_r17(sub, value.u.eventY1_Relay_r17) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case EventTriggerConfigInterRAT_EventId_Tag_eventY2_Relay_r17: {
            if (Decode_EventTriggerConfigInterRAT_EventId_EventY2_Relay_r17(sub, value.u.eventY2_Relay_r17) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case EventTriggerConfigInterRAT_EventId_Tag_eventZ1_Relay_r18: {
            if (Decode_EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18(sub, value.u.eventZ1_Relay_r18) != ErrorCode_Ok) { goto fail; }
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
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (EventTriggerConfigInterRAT_EventId_Tag)root_index;
    switch (value.tag) {
    case EventTriggerConfigInterRAT_EventId_Tag_eventB1: {
        if (Decode_EventTriggerConfigInterRAT_EventId_EventB1(dec, value.u.eventB1) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case EventTriggerConfigInterRAT_EventId_Tag_eventB2: {
        if (Decode_EventTriggerConfigInterRAT_EventId_EventB2(dec, value.u.eventB2) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfigInterRAT_EventId(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfigInterRAT_EventId(EventTriggerConfigInterRAT_EventId& value)
{
    switch (value.tag) {
    case EventTriggerConfigInterRAT_EventId_Tag_eventB1:
        Free_EventTriggerConfigInterRAT_EventId_EventB1(value.u.eventB1);
        break;
    case EventTriggerConfigInterRAT_EventId_Tag_eventB2:
        Free_EventTriggerConfigInterRAT_EventId_EventB2(value.u.eventB2);
        break;
    case EventTriggerConfigInterRAT_EventId_Tag_eventB1_UTRA_FDD_r16:
        Free_EventTriggerConfigInterRAT_EventId_EventB1_UTRA_FDD_r16(value.u.eventB1_UTRA_FDD_r16);
        break;
    case EventTriggerConfigInterRAT_EventId_Tag_eventB2_UTRA_FDD_r16:
        Free_EventTriggerConfigInterRAT_EventId_EventB2_UTRA_FDD_r16(value.u.eventB2_UTRA_FDD_r16);
        break;
    case EventTriggerConfigInterRAT_EventId_Tag_eventY1_Relay_r17:
        Free_EventTriggerConfigInterRAT_EventId_EventY1_Relay_r17(value.u.eventY1_Relay_r17);
        break;
    case EventTriggerConfigInterRAT_EventId_Tag_eventY2_Relay_r17:
        Free_EventTriggerConfigInterRAT_EventId_EventY2_Relay_r17(value.u.eventY2_Relay_r17);
        break;
    case EventTriggerConfigInterRAT_EventId_Tag_eventZ1_Relay_r18:
        Free_EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18(value.u.eventZ1_Relay_r18);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfigInterRAT：ASN.1 EventTriggerConfigInterRAT；源文件第 11258 行；SEQUENCE。
// Encode_EventTriggerConfigInterRAT 只读不分配；Decode_EventTriggerConfigInterRAT 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfigInterRAT 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfigInterRAT(Encoder& enc, const EventTriggerConfigInterRAT& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4;
    enc.WriteBit(any_extension);
    Encode_EventTriggerConfigInterRAT_EventId(enc, value.eventId);
    enc.WriteConstrainedInteger((std::int64_t)(value.rsType), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.reportInterval), 0, 13);
    enc.WriteConstrainedInteger((std::int64_t)(value.reportAmount), 0, 7);
    Encode_MeasReportQuantity(enc, value.reportQuantity);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxReportCells), 1, 8);
    if (any_extension) {
        enc.WriteNormallySmallLength(4u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        enc.WriteBit(value.has_extGroup4);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_EventTriggerConfigInterRAT_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_EventTriggerConfigInterRAT_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_EventTriggerConfigInterRAT_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_EventTriggerConfigInterRAT_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfigInterRAT(Decoder& dec, EventTriggerConfigInterRAT& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
        if (Decode_EventTriggerConfigInterRAT_EventId(dec, value.eventId) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.rsType = (NR_RS_Type)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.reportInterval = (ReportInterval)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.reportAmount = (EventTriggerConfigInterRAT_ReportAmount)tmp_value;
    }
    {
        if (Decode_MeasReportQuantity(dec, value.reportQuantity) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxReportCells = (int64_t)tmp_value;
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
    if (Decode_EventTriggerConfigInterRAT_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_EventTriggerConfigInterRAT_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_EventTriggerConfigInterRAT_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_EventTriggerConfigInterRAT_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    Free_EventTriggerConfigInterRAT(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfigInterRAT(EventTriggerConfigInterRAT& value)
{
    Free_EventTriggerConfigInterRAT_EventId(value.eventId);
    Free_MeasReportQuantity(value.reportQuantity);
    if (value.has_extGroup1) {
        Free_EventTriggerConfigInterRAT_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_EventTriggerConfigInterRAT_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_EventTriggerConfigInterRAT_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_EventTriggerConfigInterRAT_ExtGroup4(value.extGroup4);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PeriodicalReportConfigInterRAT_ExtGroup1：ASN.1 PeriodicalReportConfigInterRAT_ExtGroup1；源文件第 11354 行；扩展添加组 [[ ]]。
// Encode_PeriodicalReportConfigInterRAT_ExtGroup1 只读不分配；Decode_PeriodicalReportConfigInterRAT_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_PeriodicalReportConfigInterRAT_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PeriodicalReportConfigInterRAT_ExtGroup1(Encoder& enc, const PeriodicalReportConfigInterRAT_ExtGroup1& value)
{
    enc.WriteBit(value.has_reportQuantityUTRA_FDD_r16);
    if (value.has_reportQuantityUTRA_FDD_r16) {
        Encode_MeasReportQuantityUTRA_FDD_r16(enc, value.reportQuantityUTRA_FDD_r16);
    }
    return enc.Error();
}

ErrorCode Decode_PeriodicalReportConfigInterRAT_ExtGroup1(Decoder& dec, PeriodicalReportConfigInterRAT_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_MeasReportQuantityUTRA_FDD_r16(dec, value.reportQuantityUTRA_FDD_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PeriodicalReportConfigInterRAT_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PeriodicalReportConfigInterRAT_ExtGroup1(PeriodicalReportConfigInterRAT_ExtGroup1& value)
{
    if (value.has_reportQuantityUTRA_FDD_r16) {
        Free_MeasReportQuantityUTRA_FDD_r16(value.reportQuantityUTRA_FDD_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PeriodicalReportConfigInterRAT_ExtGroup2：ASN.1 PeriodicalReportConfigInterRAT_ExtGroup2；源文件第 11357 行；扩展添加组 [[ ]]。
// Encode_PeriodicalReportConfigInterRAT_ExtGroup2 只读不分配；Decode_PeriodicalReportConfigInterRAT_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_PeriodicalReportConfigInterRAT_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PeriodicalReportConfigInterRAT_ExtGroup2(Encoder& enc, const PeriodicalReportConfigInterRAT_ExtGroup2& value)
{
    enc.WriteBit(value.has_includeCommonLocationInfo_r16);
    enc.WriteBit(value.has_includeBT_Meas_r16);
    enc.WriteBit(value.has_includeWLAN_Meas_r16);
    enc.WriteBit(value.has_includeSensor_Meas_r16);
    if (value.has_includeCommonLocationInfo_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.includeCommonLocationInfo_r16), 0, 0);
    }
    if (value.has_includeBT_Meas_r16) {
        Encode_SetupRelease_BT_NameList_r16(enc, value.includeBT_Meas_r16);
    }
    if (value.has_includeWLAN_Meas_r16) {
        Encode_SetupRelease_WLAN_NameList_r16(enc, value.includeWLAN_Meas_r16);
    }
    if (value.has_includeSensor_Meas_r16) {
        Encode_SetupRelease_Sensor_NameList_r16(enc, value.includeSensor_Meas_r16);
    }
    return enc.Error();
}

ErrorCode Decode_PeriodicalReportConfigInterRAT_ExtGroup2(Decoder& dec, PeriodicalReportConfigInterRAT_ExtGroup2& value)
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
        value.includeCommonLocationInfo_r16 = (PeriodicalReportConfigInterRAT_ExtGroup2_IncludeCommonLocationInfo_r16)0;
    }
    if (present_1) {
        if (Decode_SetupRelease_BT_NameList_r16(dec, value.includeBT_Meas_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SetupRelease_WLAN_NameList_r16(dec, value.includeWLAN_Meas_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SetupRelease_Sensor_NameList_r16(dec, value.includeSensor_Meas_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PeriodicalReportConfigInterRAT_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PeriodicalReportConfigInterRAT_ExtGroup2(PeriodicalReportConfigInterRAT_ExtGroup2& value)
{
    if (value.has_includeCommonLocationInfo_r16) {
    }
    if (value.has_includeBT_Meas_r16) {
        Free_SetupRelease_BT_NameList_r16(value.includeBT_Meas_r16);
    }
    if (value.has_includeWLAN_Meas_r16) {
        Free_SetupRelease_WLAN_NameList_r16(value.includeWLAN_Meas_r16);
    }
    if (value.has_includeSensor_Meas_r16) {
        Free_SetupRelease_Sensor_NameList_r16(value.includeSensor_Meas_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PeriodicalReportConfigInterRAT_ExtGroup3：ASN.1 PeriodicalReportConfigInterRAT_ExtGroup3；源文件第 11363 行；扩展添加组 [[ ]]。
// Encode_PeriodicalReportConfigInterRAT_ExtGroup3 只读不分配；Decode_PeriodicalReportConfigInterRAT_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_PeriodicalReportConfigInterRAT_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PeriodicalReportConfigInterRAT_ExtGroup3(Encoder& enc, const PeriodicalReportConfigInterRAT_ExtGroup3& value)
{
    enc.WriteBit(value.has_reportQuantityRelay_r17);
    if (value.has_reportQuantityRelay_r17) {
        Encode_SL_MeasReportQuantity_r16(enc, value.reportQuantityRelay_r17);
    }
    return enc.Error();
}

ErrorCode Decode_PeriodicalReportConfigInterRAT_ExtGroup3(Decoder& dec, PeriodicalReportConfigInterRAT_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SL_MeasReportQuantity_r16(dec, value.reportQuantityRelay_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PeriodicalReportConfigInterRAT_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PeriodicalReportConfigInterRAT_ExtGroup3(PeriodicalReportConfigInterRAT_ExtGroup3& value)
{
    if (value.has_reportQuantityRelay_r17) {
        Free_SL_MeasReportQuantity_r16(value.reportQuantityRelay_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PeriodicalReportConfigInterRAT：ASN.1 PeriodicalReportConfigInterRAT；源文件第 11348 行；SEQUENCE。
// Encode_PeriodicalReportConfigInterRAT 只读不分配；Decode_PeriodicalReportConfigInterRAT 可能 malloc（失败时内部已释放并清零）；Free_PeriodicalReportConfigInterRAT 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PeriodicalReportConfigInterRAT(Encoder& enc, const PeriodicalReportConfigInterRAT& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.reportInterval), 0, 13);
    enc.WriteConstrainedInteger((std::int64_t)(value.reportAmount), 0, 7);
    Encode_MeasReportQuantity(enc, value.reportQuantity);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxReportCells), 1, 8);
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_PeriodicalReportConfigInterRAT_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_PeriodicalReportConfigInterRAT_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_PeriodicalReportConfigInterRAT_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PeriodicalReportConfigInterRAT(Decoder& dec, PeriodicalReportConfigInterRAT& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.reportInterval = (ReportInterval)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.reportAmount = (PeriodicalReportConfigInterRAT_ReportAmount)tmp_value;
    }
    {
        if (Decode_MeasReportQuantity(dec, value.reportQuantity) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxReportCells = (int64_t)tmp_value;
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
    if (Decode_PeriodicalReportConfigInterRAT_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_PeriodicalReportConfigInterRAT_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_PeriodicalReportConfigInterRAT_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    Free_PeriodicalReportConfigInterRAT(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PeriodicalReportConfigInterRAT(PeriodicalReportConfigInterRAT& value)
{
    Free_MeasReportQuantity(value.reportQuantity);
    if (value.has_extGroup1) {
        Free_PeriodicalReportConfigInterRAT_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_PeriodicalReportConfigInterRAT_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_PeriodicalReportConfigInterRAT_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ReportConfigInterRAT_ReportType：ASN.1 reportType；源文件第 11235 行；CHOICE。
// Encode_ReportConfigInterRAT_ReportType 只读不分配；Decode_ReportConfigInterRAT_ReportType 可能 malloc（失败时内部已释放并清零）；Free_ReportConfigInterRAT_ReportType 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ReportConfigInterRAT_ReportType(Encoder& enc, const ReportConfigInterRAT_ReportType& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 3) {
        if (choice_index >= 4) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 3));
        Encoder sub;
        switch (value.tag) {
        case ReportConfigInterRAT_ReportType_Tag_reportSFTD:
            Encode_ReportSFTD_EUTRA(sub, value.u.reportSFTD);
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
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case ReportConfigInterRAT_ReportType_Tag_periodical:
        Encode_PeriodicalReportConfigInterRAT(enc, value.u.periodical);
        break;
    case ReportConfigInterRAT_ReportType_Tag_eventTriggered:
        Encode_EventTriggerConfigInterRAT(enc, value.u.eventTriggered);
        break;
    case ReportConfigInterRAT_ReportType_Tag_reportCGI:
        Encode_ReportCGI_EUTRA(enc, value.u.reportCGI);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_ReportConfigInterRAT_ReportType(Decoder& dec, ReportConfigInterRAT_ReportType& value)
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
        value.tag = (ReportConfigInterRAT_ReportType_Tag)(3 + extension_index);
        std::vector<std::uint8_t> open_bytes;
        if (!dec.ReadOpenType(open_bytes)) { goto fail; }
        Decoder sub(open_bytes.data(), open_bytes.size());
        switch (value.tag) {
        case ReportConfigInterRAT_ReportType_Tag_reportSFTD: {
            if (Decode_ReportSFTD_EUTRA(sub, value.u.reportSFTD) != ErrorCode_Ok) { goto fail; }
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
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (ReportConfigInterRAT_ReportType_Tag)root_index;
    switch (value.tag) {
    case ReportConfigInterRAT_ReportType_Tag_periodical: {
        if (Decode_PeriodicalReportConfigInterRAT(dec, value.u.periodical) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case ReportConfigInterRAT_ReportType_Tag_eventTriggered: {
        if (Decode_EventTriggerConfigInterRAT(dec, value.u.eventTriggered) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case ReportConfigInterRAT_ReportType_Tag_reportCGI: {
        if (Decode_ReportCGI_EUTRA(dec, value.u.reportCGI) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReportConfigInterRAT_ReportType(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReportConfigInterRAT_ReportType(ReportConfigInterRAT_ReportType& value)
{
    switch (value.tag) {
    case ReportConfigInterRAT_ReportType_Tag_periodical:
        Free_PeriodicalReportConfigInterRAT(value.u.periodical);
        break;
    case ReportConfigInterRAT_ReportType_Tag_eventTriggered:
        Free_EventTriggerConfigInterRAT(value.u.eventTriggered);
        break;
    case ReportConfigInterRAT_ReportType_Tag_reportCGI:
        Free_ReportCGI_EUTRA(value.u.reportCGI);
        break;
    case ReportConfigInterRAT_ReportType_Tag_reportSFTD:
        Free_ReportSFTD_EUTRA(value.u.reportSFTD);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ReportConfigInterRAT：ASN.1 ReportConfigInterRAT；源文件第 11234 行；SEQUENCE。
// Encode_ReportConfigInterRAT 只读不分配；Decode_ReportConfigInterRAT 可能 malloc（失败时内部已释放并清零）；Free_ReportConfigInterRAT 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ReportConfigInterRAT(Encoder& enc, const ReportConfigInterRAT& value)
{
    Encode_ReportConfigInterRAT_ReportType(enc, value.reportType);
    return enc.Error();
}

ErrorCode Decode_ReportConfigInterRAT(Decoder& dec, ReportConfigInterRAT& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_ReportConfigInterRAT_ReportType(dec, value.reportType) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReportConfigInterRAT(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReportConfigInterRAT(ReportConfigInterRAT& value)
{
    Free_ReportConfigInterRAT_ReportType(value.reportType);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellIndividualOffsetList_EUTRA_r18：ASN.1 CellIndividualOffsetList-EUTRA-r18；源文件第 11380 行；SEQUENCE。
// Encode_CellIndividualOffsetList_EUTRA_r18 只读不分配；Decode_CellIndividualOffsetList_EUTRA_r18 可能 malloc（失败时内部已释放并清零）；Free_CellIndividualOffsetList_EUTRA_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellIndividualOffsetList_EUTRA_r18(Encoder& enc, const CellIndividualOffsetList_EUTRA_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.physCellId_r18), 0, 503);
    enc.WriteConstrainedInteger((std::int64_t)(value.cellIndividualOffset_r18), 0, 30);
    return enc.Error();
}

ErrorCode Decode_CellIndividualOffsetList_EUTRA_r18(Decoder& dec, CellIndividualOffsetList_EUTRA_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 503, tmp_value)) { goto fail; }
        value.physCellId_r18 = (EUTRA_PhysCellId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.cellIndividualOffset_r18 = (EUTRA_Q_OffsetRange)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CellIndividualOffsetList_EUTRA_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellIndividualOffsetList_EUTRA_r18(CellIndividualOffsetList_EUTRA_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ReportCGI_ExtGroup1：ASN.1 ReportCGI_ExtGroup1；源文件第 11406 行；扩展添加组 [[ ]]。
// Encode_ReportCGI_ExtGroup1 只读不分配；Decode_ReportCGI_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_ReportCGI_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ReportCGI_ExtGroup1(Encoder& enc, const ReportCGI_ExtGroup1& value)
{
    enc.WriteBit(value.has_useAutonomousGaps_r16);
    if (value.has_useAutonomousGaps_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.useAutonomousGaps_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_ReportCGI_ExtGroup1(Decoder& dec, ReportCGI_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.useAutonomousGaps_r16 = (ReportCGI_ExtGroup1_UseAutonomousGaps_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReportCGI_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReportCGI_ExtGroup1(ReportCGI_ExtGroup1& value)
{
    if (value.has_useAutonomousGaps_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ReportCGI：ASN.1 ReportCGI；源文件第 11403 行；SEQUENCE。
// Encode_ReportCGI 只读不分配；Decode_ReportCGI 可能 malloc（失败时内部已释放并清零）；Free_ReportCGI 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ReportCGI(Encoder& enc, const ReportCGI& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.cellForWhichToReportCGI), 0, 1007);
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_ReportCGI_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_ReportCGI(Decoder& dec, ReportCGI& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
        value.cellForWhichToReportCGI = (PhysCellId)tmp_value;
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
    if (Decode_ReportCGI_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_ReportCGI(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReportCGI(ReportCGI& value)
{
    if (value.has_extGroup1) {
        Free_ReportCGI_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ReportSFTD_NR_ExtGroup1：ASN.1 ReportSFTD_NR_ExtGroup1；源文件第 11416 行；扩展添加组 [[ ]]。
// Encode_ReportSFTD_NR_ExtGroup1 只读不分配；Decode_ReportSFTD_NR_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_ReportSFTD_NR_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ReportSFTD_NR_ExtGroup1(Encoder& enc, const ReportSFTD_NR_ExtGroup1& value)
{
    enc.WriteBit(value.has_reportSFTD_NeighMeas);
    enc.WriteBit(value.has_drx_SFTD_NeighMeas);
    enc.WriteBit(value.has_cellsForWhichToReportSFTD);
    if (value.has_reportSFTD_NeighMeas) {
        enc.WriteConstrainedInteger((std::int64_t)(value.reportSFTD_NeighMeas), 0, 0);
    }
    if (value.has_drx_SFTD_NeighMeas) {
        enc.WriteConstrainedInteger((std::int64_t)(value.drx_SFTD_NeighMeas), 0, 0);
    }
    if (value.has_cellsForWhichToReportSFTD) {
enc.WriteConstrainedLength(value.cellsForWhichToReportSFTD_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cellsForWhichToReportSFTD_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.cellsForWhichToReportSFTD_items[i]), 0, 1007);
}
    }
    return enc.Error();
}

ErrorCode Decode_ReportSFTD_NR_ExtGroup1(Decoder& dec, ReportSFTD_NR_ExtGroup1& value)
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
        value.reportSFTD_NeighMeas = (ReportSFTD_NR_ExtGroup1_ReportSFTD_NeighMeas)0;
    }
    if (present_1) {
        value.drx_SFTD_NeighMeas = (ReportSFTD_NR_ExtGroup1_Drx_SFTD_NeighMeas)0;
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.cellsForWhichToReportSFTD_count)) { goto fail; }
if (value.cellsForWhichToReportSFTD_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cellsForWhichToReportSFTD_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cellsForWhichToReportSFTD_count > 0u) {
    value.cellsForWhichToReportSFTD_items = (PhysCellId*)std::malloc((std::size_t)value.cellsForWhichToReportSFTD_count * sizeof(PhysCellId));
    if (value.cellsForWhichToReportSFTD_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cellsForWhichToReportSFTD_items, 0, (std::size_t)value.cellsForWhichToReportSFTD_count * sizeof(PhysCellId));
}
for (std::uint32_t i = 0; i < value.cellsForWhichToReportSFTD_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
    value.cellsForWhichToReportSFTD_items[i] = (PhysCellId)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReportSFTD_NR_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReportSFTD_NR_ExtGroup1(ReportSFTD_NR_ExtGroup1& value)
{
    if (value.has_reportSFTD_NeighMeas) {
    }
    if (value.has_drx_SFTD_NeighMeas) {
    }
    if (value.has_cellsForWhichToReportSFTD) {
        if (value.cellsForWhichToReportSFTD_items != nullptr) {
            for (std::uint32_t i = 0; i < value.cellsForWhichToReportSFTD_count; ++i) {
            }
            std::free(value.cellsForWhichToReportSFTD_items);
            value.cellsForWhichToReportSFTD_items = nullptr;
        }
        value.cellsForWhichToReportSFTD_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ReportSFTD_NR：ASN.1 ReportSFTD-NR；源文件第 11412 行；SEQUENCE。
// Encode_ReportSFTD_NR 只读不分配；Decode_ReportSFTD_NR 可能 malloc（失败时内部已释放并清零）；Free_ReportSFTD_NR 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ReportSFTD_NR(Encoder& enc, const ReportSFTD_NR& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBool(value.reportSFTD_Meas);
    enc.WriteBool(value.reportRSRP);
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_ReportSFTD_NR_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_ReportSFTD_NR(Decoder& dec, ReportSFTD_NR& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportSFTD_Meas = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportRSRP = tmp_value;
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
    if (Decode_ReportSFTD_NR_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_ReportSFTD_NR(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReportSFTD_NR(ReportSFTD_NR& value)
{
    if (value.has_extGroup1) {
        Free_ReportSFTD_NR_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CondTriggerConfig_r16_ExtGroup1：ASN.1 CondTriggerConfig_r16_ExtGroup1；源文件第 11464 行；扩展添加组 [[ ]]。
// Encode_CondTriggerConfig_r16_ExtGroup1 只读不分配；Decode_CondTriggerConfig_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_CondTriggerConfig_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CondTriggerConfig_r16_ExtGroup1(Encoder& enc, const CondTriggerConfig_r16_ExtGroup1& value)
{
    enc.WriteBit(value.has_nesEvent_r18);
    if (value.has_nesEvent_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nesEvent_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CondTriggerConfig_r16_ExtGroup1(Decoder& dec, CondTriggerConfig_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.nesEvent_r18 = (CondTriggerConfig_r16_ExtGroup1_NesEvent_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CondTriggerConfig_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CondTriggerConfig_r16_ExtGroup1(CondTriggerConfig_r16_ExtGroup1& value)
{
    if (value.has_nesEvent_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasTriggerQuantityOffset：ASN.1 MeasTriggerQuantityOffset；源文件第 11700 行；CHOICE。
// Encode_MeasTriggerQuantityOffset 只读不分配；Decode_MeasTriggerQuantityOffset 可能 malloc（失败时内部已释放并清零）；Free_MeasTriggerQuantityOffset 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasTriggerQuantityOffset(Encoder& enc, const MeasTriggerQuantityOffset& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case MeasTriggerQuantityOffset_Tag_rsrp:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.rsrp), -30, 30);
        break;
    case MeasTriggerQuantityOffset_Tag_rsrq:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.rsrq), -30, 30);
        break;
    case MeasTriggerQuantityOffset_Tag_sinr:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sinr), -30, 30);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MeasTriggerQuantityOffset(Decoder& dec, MeasTriggerQuantityOffset& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (MeasTriggerQuantityOffset_Tag)root_index;
    switch (value.tag) {
    case MeasTriggerQuantityOffset_Tag_rsrp: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-30, 30, tmp_value)) { goto fail; }
        value.u.rsrp = (int64_t)tmp_value;
        break;
    }
    case MeasTriggerQuantityOffset_Tag_rsrq: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-30, 30, tmp_value)) { goto fail; }
        value.u.rsrq = (int64_t)tmp_value;
        break;
    }
    case MeasTriggerQuantityOffset_Tag_sinr: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-30, 30, tmp_value)) { goto fail; }
        value.u.sinr = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasTriggerQuantityOffset(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasTriggerQuantityOffset(MeasTriggerQuantityOffset& value)
{
    switch (value.tag) {
    case MeasTriggerQuantityOffset_Tag_rsrp:
        break;
    case MeasTriggerQuantityOffset_Tag_rsrq:
        break;
    case MeasTriggerQuantityOffset_Tag_sinr:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CondTriggerConfig_r16_CondEventId_CondEventA3：ASN.1 condEventId/condEventA3；源文件第 11425 行；SEQUENCE。
// Encode_CondTriggerConfig_r16_CondEventId_CondEventA3 只读不分配；Decode_CondTriggerConfig_r16_CondEventId_CondEventA3 可能 malloc（失败时内部已释放并清零）；Free_CondTriggerConfig_r16_CondEventId_CondEventA3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CondTriggerConfig_r16_CondEventId_CondEventA3(Encoder& enc, const CondTriggerConfig_r16_CondEventId_CondEventA3& value)
{
    Encode_MeasTriggerQuantityOffset(enc, value.a3_Offset);
    enc.WriteConstrainedInteger((std::int64_t)(value.hysteresis), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger), 0, 15);
    return enc.Error();
}

ErrorCode Decode_CondTriggerConfig_r16_CondEventId_CondEventA3(Decoder& dec, CondTriggerConfig_r16_CondEventId_CondEventA3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MeasTriggerQuantityOffset(dec, value.a3_Offset) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.hysteresis = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger = (TimeToTrigger)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CondTriggerConfig_r16_CondEventId_CondEventA3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CondTriggerConfig_r16_CondEventId_CondEventA3(CondTriggerConfig_r16_CondEventId_CondEventA3& value)
{
    Free_MeasTriggerQuantityOffset(value.a3_Offset);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CondTriggerConfig_r16_CondEventId_CondEventA5：ASN.1 condEventId/condEventA5；源文件第 11430 行；SEQUENCE。
// Encode_CondTriggerConfig_r16_CondEventId_CondEventA5 只读不分配；Decode_CondTriggerConfig_r16_CondEventId_CondEventA5 可能 malloc（失败时内部已释放并清零）；Free_CondTriggerConfig_r16_CondEventId_CondEventA5 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CondTriggerConfig_r16_CondEventId_CondEventA5(Encoder& enc, const CondTriggerConfig_r16_CondEventId_CondEventA5& value)
{
    Encode_MeasTriggerQuantity(enc, value.a5_Threshold1);
    Encode_MeasTriggerQuantity(enc, value.a5_Threshold2);
    enc.WriteConstrainedInteger((std::int64_t)(value.hysteresis), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger), 0, 15);
    return enc.Error();
}

ErrorCode Decode_CondTriggerConfig_r16_CondEventId_CondEventA5(Decoder& dec, CondTriggerConfig_r16_CondEventId_CondEventA5& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MeasTriggerQuantity(dec, value.a5_Threshold1) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_MeasTriggerQuantity(dec, value.a5_Threshold2) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.hysteresis = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger = (TimeToTrigger)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CondTriggerConfig_r16_CondEventId_CondEventA5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CondTriggerConfig_r16_CondEventId_CondEventA5(CondTriggerConfig_r16_CondEventId_CondEventA5& value)
{
    Free_MeasTriggerQuantity(value.a5_Threshold1);
    Free_MeasTriggerQuantity(value.a5_Threshold2);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CondTriggerConfig_r16_CondEventId_CondEventA4_r17：ASN.1 condEventId/condEventA4-r17；源文件第 11437 行；SEQUENCE。
// Encode_CondTriggerConfig_r16_CondEventId_CondEventA4_r17 只读不分配；Decode_CondTriggerConfig_r16_CondEventId_CondEventA4_r17 可能 malloc（失败时内部已释放并清零）；Free_CondTriggerConfig_r16_CondEventId_CondEventA4_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CondTriggerConfig_r16_CondEventId_CondEventA4_r17(Encoder& enc, const CondTriggerConfig_r16_CondEventId_CondEventA4_r17& value)
{
    Encode_MeasTriggerQuantity(enc, value.a4_Threshold_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.hysteresis_r17), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger_r17), 0, 15);
    return enc.Error();
}

ErrorCode Decode_CondTriggerConfig_r16_CondEventId_CondEventA4_r17(Decoder& dec, CondTriggerConfig_r16_CondEventId_CondEventA4_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MeasTriggerQuantity(dec, value.a4_Threshold_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.hysteresis_r17 = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger_r17 = (TimeToTrigger)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CondTriggerConfig_r16_CondEventId_CondEventA4_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CondTriggerConfig_r16_CondEventId_CondEventA4_r17(CondTriggerConfig_r16_CondEventId_CondEventA4_r17& value)
{
    Free_MeasTriggerQuantity(value.a4_Threshold_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CondTriggerConfig_r16_CondEventId_CondEventD1_r17：ASN.1 condEventId/condEventD1-r17；源文件第 11442 行；SEQUENCE。
// Encode_CondTriggerConfig_r16_CondEventId_CondEventD1_r17 只读不分配；Decode_CondTriggerConfig_r16_CondEventId_CondEventD1_r17 可能 malloc（失败时内部已释放并清零）；Free_CondTriggerConfig_r16_CondEventId_CondEventD1_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CondTriggerConfig_r16_CondEventId_CondEventD1_r17(Encoder& enc, const CondTriggerConfig_r16_CondEventId_CondEventD1_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.distanceThreshFromReference1_r17), 0, 65525);
    enc.WriteConstrainedInteger((std::int64_t)(value.distanceThreshFromReference2_r17), 0, 65525);
    enc.WriteSemiConstrainedOctetString(value.referenceLocation1_r17.bytes, value.referenceLocation1_r17.length, 0, 0xFFFFFFFFu);
    enc.WriteSemiConstrainedOctetString(value.referenceLocation2_r17.bytes, value.referenceLocation2_r17.length, 0, 0xFFFFFFFFu);
    enc.WriteConstrainedInteger((std::int64_t)(value.hysteresisLocation_r17), 0, 32768);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger_r17), 0, 15);
    return enc.Error();
}

ErrorCode Decode_CondTriggerConfig_r16_CondEventId_CondEventD1_r17(Decoder& dec, CondTriggerConfig_r16_CondEventId_CondEventD1_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65525, tmp_value)) { goto fail; }
        value.distanceThreshFromReference1_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65525, tmp_value)) { goto fail; }
        value.distanceThreshFromReference2_r17 = (int64_t)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.referenceLocation1_r17.bytes = string_bytes;
        value.referenceLocation1_r17.length = string_length;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.referenceLocation2_r17.bytes = string_bytes;
        value.referenceLocation2_r17.length = string_length;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 32768, tmp_value)) { goto fail; }
        value.hysteresisLocation_r17 = (HysteresisLocation_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger_r17 = (TimeToTrigger)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CondTriggerConfig_r16_CondEventId_CondEventD1_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CondTriggerConfig_r16_CondEventId_CondEventD1_r17(CondTriggerConfig_r16_CondEventId_CondEventD1_r17& value)
{
    std::free(value.referenceLocation1_r17.bytes);
    value.referenceLocation1_r17.bytes = nullptr;
    value.referenceLocation1_r17.length = 0;
    std::free(value.referenceLocation2_r17.bytes);
    value.referenceLocation2_r17.bytes = nullptr;
    value.referenceLocation2_r17.length = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CondTriggerConfig_r16_CondEventId_CondEventT1_r17：ASN.1 condEventId/condEventT1-r17；源文件第 11450 行；SEQUENCE。
// Encode_CondTriggerConfig_r16_CondEventId_CondEventT1_r17 只读不分配；Decode_CondTriggerConfig_r16_CondEventId_CondEventT1_r17 可能 malloc（失败时内部已释放并清零）；Free_CondTriggerConfig_r16_CondEventId_CondEventT1_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CondTriggerConfig_r16_CondEventId_CondEventT1_r17(Encoder& enc, const CondTriggerConfig_r16_CondEventId_CondEventT1_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.t1_Threshold_r17), 0, 549755813887);
    enc.WriteConstrainedInteger((std::int64_t)(value.duration_r17), 1, 6000);
    return enc.Error();
}

ErrorCode Decode_CondTriggerConfig_r16_CondEventId_CondEventT1_r17(Decoder& dec, CondTriggerConfig_r16_CondEventId_CondEventT1_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 549755813887, tmp_value)) { goto fail; }
        value.t1_Threshold_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 6000, tmp_value)) { goto fail; }
        value.duration_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CondTriggerConfig_r16_CondEventId_CondEventT1_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CondTriggerConfig_r16_CondEventId_CondEventT1_r17(CondTriggerConfig_r16_CondEventId_CondEventT1_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CondTriggerConfig_r16_CondEventId_CondEventD2_r18：ASN.1 condEventId/condEventD2-r18；源文件第 11454 行；SEQUENCE。
// Encode_CondTriggerConfig_r16_CondEventId_CondEventD2_r18 只读不分配；Decode_CondTriggerConfig_r16_CondEventId_CondEventD2_r18 可能 malloc（失败时内部已释放并清零）；Free_CondTriggerConfig_r16_CondEventId_CondEventD2_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CondTriggerConfig_r16_CondEventId_CondEventD2_r18(Encoder& enc, const CondTriggerConfig_r16_CondEventId_CondEventD2_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.distanceThreshFromReference1_r18), 0, 65535);
    enc.WriteConstrainedInteger((std::int64_t)(value.distanceThreshFromReference2_r18), 0, 65535);
    enc.WriteSemiConstrainedOctetString(value.referenceLocation2_r18.bytes, value.referenceLocation2_r18.length, 0, 0xFFFFFFFFu);
    enc.WriteConstrainedInteger((std::int64_t)(value.hysteresisLocation_r18), 0, 32768);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger_r18), 0, 15);
    return enc.Error();
}

ErrorCode Decode_CondTriggerConfig_r16_CondEventId_CondEventD2_r18(Decoder& dec, CondTriggerConfig_r16_CondEventId_CondEventD2_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.distanceThreshFromReference1_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.distanceThreshFromReference2_r18 = (int64_t)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.referenceLocation2_r18.bytes = string_bytes;
        value.referenceLocation2_r18.length = string_length;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 32768, tmp_value)) { goto fail; }
        value.hysteresisLocation_r18 = (HysteresisLocation_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger_r18 = (TimeToTrigger)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CondTriggerConfig_r16_CondEventId_CondEventD2_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CondTriggerConfig_r16_CondEventId_CondEventD2_r18(CondTriggerConfig_r16_CondEventId_CondEventD2_r18& value)
{
    std::free(value.referenceLocation2_r18.bytes);
    value.referenceLocation2_r18.bytes = nullptr;
    value.referenceLocation2_r18.length = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CondTriggerConfig_r16_CondEventId：ASN.1 condEventId；源文件第 11424 行；CHOICE。
// Encode_CondTriggerConfig_r16_CondEventId 只读不分配；Decode_CondTriggerConfig_r16_CondEventId 可能 malloc（失败时内部已释放并清零）；Free_CondTriggerConfig_r16_CondEventId 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CondTriggerConfig_r16_CondEventId(Encoder& enc, const CondTriggerConfig_r16_CondEventId& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 2) {
        if (choice_index >= 6) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 2));
        Encoder sub;
        switch (value.tag) {
        case CondTriggerConfig_r16_CondEventId_Tag_condEventA4_r17:
            Encode_CondTriggerConfig_r16_CondEventId_CondEventA4_r17(sub, value.u.condEventA4_r17);
            break;
        case CondTriggerConfig_r16_CondEventId_Tag_condEventD1_r17:
            Encode_CondTriggerConfig_r16_CondEventId_CondEventD1_r17(sub, value.u.condEventD1_r17);
            break;
        case CondTriggerConfig_r16_CondEventId_Tag_condEventT1_r17:
            Encode_CondTriggerConfig_r16_CondEventId_CondEventT1_r17(sub, value.u.condEventT1_r17);
            break;
        case CondTriggerConfig_r16_CondEventId_Tag_condEventD2_r18:
            Encode_CondTriggerConfig_r16_CondEventId_CondEventD2_r18(sub, value.u.condEventD2_r18);
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
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CondTriggerConfig_r16_CondEventId_Tag_condEventA3:
        Encode_CondTriggerConfig_r16_CondEventId_CondEventA3(enc, value.u.condEventA3);
        break;
    case CondTriggerConfig_r16_CondEventId_Tag_condEventA5:
        Encode_CondTriggerConfig_r16_CondEventId_CondEventA5(enc, value.u.condEventA5);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CondTriggerConfig_r16_CondEventId(Decoder& dec, CondTriggerConfig_r16_CondEventId& value)
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
        if (extension_index >= 4u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        value.tag = (CondTriggerConfig_r16_CondEventId_Tag)(2 + extension_index);
        std::vector<std::uint8_t> open_bytes;
        if (!dec.ReadOpenType(open_bytes)) { goto fail; }
        Decoder sub(open_bytes.data(), open_bytes.size());
        switch (value.tag) {
        case CondTriggerConfig_r16_CondEventId_Tag_condEventA4_r17: {
            if (Decode_CondTriggerConfig_r16_CondEventId_CondEventA4_r17(sub, value.u.condEventA4_r17) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case CondTriggerConfig_r16_CondEventId_Tag_condEventD1_r17: {
            if (Decode_CondTriggerConfig_r16_CondEventId_CondEventD1_r17(sub, value.u.condEventD1_r17) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case CondTriggerConfig_r16_CondEventId_Tag_condEventT1_r17: {
            if (Decode_CondTriggerConfig_r16_CondEventId_CondEventT1_r17(sub, value.u.condEventT1_r17) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case CondTriggerConfig_r16_CondEventId_Tag_condEventD2_r18: {
            if (Decode_CondTriggerConfig_r16_CondEventId_CondEventD2_r18(sub, value.u.condEventD2_r18) != ErrorCode_Ok) { goto fail; }
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
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CondTriggerConfig_r16_CondEventId_Tag)root_index;
    switch (value.tag) {
    case CondTriggerConfig_r16_CondEventId_Tag_condEventA3: {
        if (Decode_CondTriggerConfig_r16_CondEventId_CondEventA3(dec, value.u.condEventA3) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case CondTriggerConfig_r16_CondEventId_Tag_condEventA5: {
        if (Decode_CondTriggerConfig_r16_CondEventId_CondEventA5(dec, value.u.condEventA5) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CondTriggerConfig_r16_CondEventId(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CondTriggerConfig_r16_CondEventId(CondTriggerConfig_r16_CondEventId& value)
{
    switch (value.tag) {
    case CondTriggerConfig_r16_CondEventId_Tag_condEventA3:
        Free_CondTriggerConfig_r16_CondEventId_CondEventA3(value.u.condEventA3);
        break;
    case CondTriggerConfig_r16_CondEventId_Tag_condEventA5:
        Free_CondTriggerConfig_r16_CondEventId_CondEventA5(value.u.condEventA5);
        break;
    case CondTriggerConfig_r16_CondEventId_Tag_condEventA4_r17:
        Free_CondTriggerConfig_r16_CondEventId_CondEventA4_r17(value.u.condEventA4_r17);
        break;
    case CondTriggerConfig_r16_CondEventId_Tag_condEventD1_r17:
        Free_CondTriggerConfig_r16_CondEventId_CondEventD1_r17(value.u.condEventD1_r17);
        break;
    case CondTriggerConfig_r16_CondEventId_Tag_condEventT1_r17:
        Free_CondTriggerConfig_r16_CondEventId_CondEventT1_r17(value.u.condEventT1_r17);
        break;
    case CondTriggerConfig_r16_CondEventId_Tag_condEventD2_r18:
        Free_CondTriggerConfig_r16_CondEventId_CondEventD2_r18(value.u.condEventD2_r18);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CondTriggerConfig_r16：ASN.1 CondTriggerConfig-r16；源文件第 11423 行；SEQUENCE。
// Encode_CondTriggerConfig_r16 只读不分配；Decode_CondTriggerConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_CondTriggerConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CondTriggerConfig_r16(Encoder& enc, const CondTriggerConfig_r16& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    Encode_CondTriggerConfig_r16_CondEventId(enc, value.condEventId);
    enc.WriteConstrainedInteger((std::int64_t)(value.rsType_r16), 0, 1);
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_CondTriggerConfig_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_CondTriggerConfig_r16(Decoder& dec, CondTriggerConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
        if (Decode_CondTriggerConfig_r16_CondEventId(dec, value.condEventId) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.rsType_r16 = (NR_RS_Type)tmp_value;
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
    if (Decode_CondTriggerConfig_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_CondTriggerConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CondTriggerConfig_r16(CondTriggerConfig_r16& value)
{
    Free_CondTriggerConfig_r16_CondEventId(value.condEventId);
    if (value.has_extGroup1) {
        Free_CondTriggerConfig_r16_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfig_ExtGroup3：ASN.1 EventTriggerConfig_ExtGroup3；源文件第 11656 行；扩展添加组 [[ ]]。
// Encode_EventTriggerConfig_ExtGroup3 只读不分配；Decode_EventTriggerConfig_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfig_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfig_ExtGroup3(Encoder& enc, const EventTriggerConfig_ExtGroup3& value)
{
    enc.WriteBit(value.has_numberOfTriggeringCells_r18);
    enc.WriteBit(value.has_cellIndividualOffsetList_r18);
    enc.WriteBit(value.has_eventX1_SD_Threshold1_r18);
    enc.WriteBit(value.has_eventX2_SD_Threshold_r18);
    if (value.has_numberOfTriggeringCells_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.numberOfTriggeringCells_r18), 2, 8);
    }
    if (value.has_cellIndividualOffsetList_r18) {
enc.WriteConstrainedLength(value.cellIndividualOffsetList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cellIndividualOffsetList_r18_count; ++i) {
    Encode_CellIndividualOffsetList_r18(enc, value.cellIndividualOffsetList_r18_items[i]);
}
    }
    if (value.has_eventX1_SD_Threshold1_r18) {
        Encode_SL_MeasTriggerQuantity_r16(enc, value.eventX1_SD_Threshold1_r18);
    }
    if (value.has_eventX2_SD_Threshold_r18) {
        Encode_SL_MeasTriggerQuantity_r16(enc, value.eventX2_SD_Threshold_r18);
    }
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfig_ExtGroup3(Decoder& dec, EventTriggerConfig_ExtGroup3& value)
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
        if (!dec.ReadConstrainedInteger(2, 8, tmp_value)) { goto fail; }
        value.numberOfTriggeringCells_r18 = (int64_t)tmp_value;
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.cellIndividualOffsetList_r18_count)) { goto fail; }
if (value.cellIndividualOffsetList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cellIndividualOffsetList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cellIndividualOffsetList_r18_count > 0u) {
    value.cellIndividualOffsetList_r18_items = (CellIndividualOffsetList_r18*)std::malloc((std::size_t)value.cellIndividualOffsetList_r18_count * sizeof(CellIndividualOffsetList_r18));
    if (value.cellIndividualOffsetList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cellIndividualOffsetList_r18_items, 0, (std::size_t)value.cellIndividualOffsetList_r18_count * sizeof(CellIndividualOffsetList_r18));
}
for (std::uint32_t i = 0; i < value.cellIndividualOffsetList_r18_count; ++i) {
    if (Decode_CellIndividualOffsetList_r18(dec, value.cellIndividualOffsetList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
        if (Decode_SL_MeasTriggerQuantity_r16(dec, value.eventX1_SD_Threshold1_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SL_MeasTriggerQuantity_r16(dec, value.eventX2_SD_Threshold_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfig_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfig_ExtGroup3(EventTriggerConfig_ExtGroup3& value)
{
    if (value.has_numberOfTriggeringCells_r18) {
    }
    if (value.has_cellIndividualOffsetList_r18) {
        if (value.cellIndividualOffsetList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.cellIndividualOffsetList_r18_count; ++i) {
                Free_CellIndividualOffsetList_r18(value.cellIndividualOffsetList_r18_items[i]);
            }
            std::free(value.cellIndividualOffsetList_r18_items);
            value.cellIndividualOffsetList_r18_items = nullptr;
        }
        value.cellIndividualOffsetList_r18_count = 0;
    }
    if (value.has_eventX1_SD_Threshold1_r18) {
        Free_SL_MeasTriggerQuantity_r16(value.eventX1_SD_Threshold1_r18);
    }
    if (value.has_eventX2_SD_Threshold_r18) {
        Free_SL_MeasTriggerQuantity_r16(value.eventX2_SD_Threshold_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasRSSI_ReportConfig_r16：ASN.1 MeasRSSI-ReportConfig-r16；源文件第 11713 行；SEQUENCE。
// Encode_MeasRSSI_ReportConfig_r16 只读不分配；Decode_MeasRSSI_ReportConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasRSSI_ReportConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasRSSI_ReportConfig_r16(Encoder& enc, const MeasRSSI_ReportConfig_r16& value)
{
    enc.WriteBit(value.has_channelOccupancyThreshold_r16);
    if (value.has_channelOccupancyThreshold_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.channelOccupancyThreshold_r16), 0, 76);
    }
    return enc.Error();
}

ErrorCode Decode_MeasRSSI_ReportConfig_r16(Decoder& dec, MeasRSSI_ReportConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 76, tmp_value)) { goto fail; }
        value.channelOccupancyThreshold_r16 = (RSSI_Range_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasRSSI_ReportConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasRSSI_ReportConfig_r16(MeasRSSI_ReportConfig_r16& value)
{
    if (value.has_channelOccupancyThreshold_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfig_ExtGroup1：ASN.1 EventTriggerConfig_ExtGroup1；源文件第 11644 行；扩展添加组 [[ ]]。
// Encode_EventTriggerConfig_ExtGroup1 只读不分配；Decode_EventTriggerConfig_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfig_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfig_ExtGroup1(Encoder& enc, const EventTriggerConfig_ExtGroup1& value)
{
    enc.WriteBit(value.has_measRSSI_ReportConfig_r16);
    enc.WriteBit(value.has_useT312_r16);
    enc.WriteBit(value.has_includeCommonLocationInfo_r16);
    enc.WriteBit(value.has_includeBT_Meas_r16);
    enc.WriteBit(value.has_includeWLAN_Meas_r16);
    enc.WriteBit(value.has_includeSensor_Meas_r16);
    if (value.has_measRSSI_ReportConfig_r16) {
        Encode_MeasRSSI_ReportConfig_r16(enc, value.measRSSI_ReportConfig_r16);
    }
    if (value.has_useT312_r16) {
        enc.WriteBool(value.useT312_r16);
    }
    if (value.has_includeCommonLocationInfo_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.includeCommonLocationInfo_r16), 0, 0);
    }
    if (value.has_includeBT_Meas_r16) {
        Encode_SetupRelease_BT_NameList_r16(enc, value.includeBT_Meas_r16);
    }
    if (value.has_includeWLAN_Meas_r16) {
        Encode_SetupRelease_WLAN_NameList_r16(enc, value.includeWLAN_Meas_r16);
    }
    if (value.has_includeSensor_Meas_r16) {
        Encode_SetupRelease_Sensor_NameList_r16(enc, value.includeSensor_Meas_r16);
    }
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfig_ExtGroup1(Decoder& dec, EventTriggerConfig_ExtGroup1& value)
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
        if (Decode_MeasRSSI_ReportConfig_r16(dec, value.measRSSI_ReportConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.useT312_r16 = tmp_value;
    }
    if (present_2) {
        value.includeCommonLocationInfo_r16 = (EventTriggerConfig_ExtGroup1_IncludeCommonLocationInfo_r16)0;
    }
    if (present_3) {
        if (Decode_SetupRelease_BT_NameList_r16(dec, value.includeBT_Meas_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SetupRelease_WLAN_NameList_r16(dec, value.includeWLAN_Meas_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_SetupRelease_Sensor_NameList_r16(dec, value.includeSensor_Meas_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfig_ExtGroup1(EventTriggerConfig_ExtGroup1& value)
{
    if (value.has_measRSSI_ReportConfig_r16) {
        Free_MeasRSSI_ReportConfig_r16(value.measRSSI_ReportConfig_r16);
    }
    if (value.has_useT312_r16) {
    }
    if (value.has_includeCommonLocationInfo_r16) {
    }
    if (value.has_includeBT_Meas_r16) {
        Free_SetupRelease_BT_NameList_r16(value.includeBT_Meas_r16);
    }
    if (value.has_includeWLAN_Meas_r16) {
        Free_SetupRelease_WLAN_NameList_r16(value.includeWLAN_Meas_r16);
    }
    if (value.has_includeSensor_Meas_r16) {
        Free_SetupRelease_Sensor_NameList_r16(value.includeSensor_Meas_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfig_ExtGroup2：ASN.1 EventTriggerConfig_ExtGroup2；源文件第 11652 行；扩展添加组 [[ ]]。
// Encode_EventTriggerConfig_ExtGroup2 只读不分配；Decode_EventTriggerConfig_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfig_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfig_ExtGroup2(Encoder& enc, const EventTriggerConfig_ExtGroup2& value)
{
    enc.WriteBit(value.has_coarseLocationRequest_r17);
    enc.WriteBit(value.has_reportQuantityRelay_r17);
    if (value.has_coarseLocationRequest_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.coarseLocationRequest_r17), 0, 0);
    }
    if (value.has_reportQuantityRelay_r17) {
        Encode_SL_MeasReportQuantity_r16(enc, value.reportQuantityRelay_r17);
    }
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfig_ExtGroup2(Decoder& dec, EventTriggerConfig_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.coarseLocationRequest_r17 = (EventTriggerConfig_ExtGroup2_CoarseLocationRequest_r17)0;
    }
    if (present_1) {
        if (Decode_SL_MeasReportQuantity_r16(dec, value.reportQuantityRelay_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfig_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfig_ExtGroup2(EventTriggerConfig_ExtGroup2& value)
{
    if (value.has_coarseLocationRequest_r17) {
    }
    if (value.has_reportQuantityRelay_r17) {
        Free_SL_MeasReportQuantity_r16(value.reportQuantityRelay_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfig_EventId_EventA1：ASN.1 eventId/eventA1；源文件第 11472 行；SEQUENCE。
// Encode_EventTriggerConfig_EventId_EventA1 只读不分配；Decode_EventTriggerConfig_EventId_EventA1 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfig_EventId_EventA1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfig_EventId_EventA1(Encoder& enc, const EventTriggerConfig_EventId_EventA1& value)
{
    Encode_MeasTriggerQuantity(enc, value.a1_Threshold);
    enc.WriteBool(value.reportOnLeave);
    enc.WriteConstrainedInteger((std::int64_t)(value.hysteresis), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger), 0, 15);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfig_EventId_EventA1(Decoder& dec, EventTriggerConfig_EventId_EventA1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MeasTriggerQuantity(dec, value.a1_Threshold) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportOnLeave = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.hysteresis = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger = (TimeToTrigger)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfig_EventId_EventA1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfig_EventId_EventA1(EventTriggerConfig_EventId_EventA1& value)
{
    Free_MeasTriggerQuantity(value.a1_Threshold);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfig_EventId_EventA2：ASN.1 eventId/eventA2；源文件第 11478 行；SEQUENCE。
// Encode_EventTriggerConfig_EventId_EventA2 只读不分配；Decode_EventTriggerConfig_EventId_EventA2 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfig_EventId_EventA2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfig_EventId_EventA2(Encoder& enc, const EventTriggerConfig_EventId_EventA2& value)
{
    Encode_MeasTriggerQuantity(enc, value.a2_Threshold);
    enc.WriteBool(value.reportOnLeave);
    enc.WriteConstrainedInteger((std::int64_t)(value.hysteresis), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger), 0, 15);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfig_EventId_EventA2(Decoder& dec, EventTriggerConfig_EventId_EventA2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MeasTriggerQuantity(dec, value.a2_Threshold) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportOnLeave = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.hysteresis = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger = (TimeToTrigger)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfig_EventId_EventA2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfig_EventId_EventA2(EventTriggerConfig_EventId_EventA2& value)
{
    Free_MeasTriggerQuantity(value.a2_Threshold);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfig_EventId_EventA3：ASN.1 eventId/eventA3；源文件第 11484 行；SEQUENCE。
// Encode_EventTriggerConfig_EventId_EventA3 只读不分配；Decode_EventTriggerConfig_EventId_EventA3 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfig_EventId_EventA3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfig_EventId_EventA3(Encoder& enc, const EventTriggerConfig_EventId_EventA3& value)
{
    Encode_MeasTriggerQuantityOffset(enc, value.a3_Offset);
    enc.WriteBool(value.reportOnLeave);
    enc.WriteConstrainedInteger((std::int64_t)(value.hysteresis), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger), 0, 15);
    enc.WriteBool(value.useAllowedCellList);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfig_EventId_EventA3(Decoder& dec, EventTriggerConfig_EventId_EventA3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MeasTriggerQuantityOffset(dec, value.a3_Offset) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportOnLeave = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.hysteresis = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger = (TimeToTrigger)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.useAllowedCellList = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfig_EventId_EventA3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfig_EventId_EventA3(EventTriggerConfig_EventId_EventA3& value)
{
    Free_MeasTriggerQuantityOffset(value.a3_Offset);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfig_EventId_EventA4：ASN.1 eventId/eventA4；源文件第 11491 行；SEQUENCE。
// Encode_EventTriggerConfig_EventId_EventA4 只读不分配；Decode_EventTriggerConfig_EventId_EventA4 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfig_EventId_EventA4 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfig_EventId_EventA4(Encoder& enc, const EventTriggerConfig_EventId_EventA4& value)
{
    Encode_MeasTriggerQuantity(enc, value.a4_Threshold);
    enc.WriteBool(value.reportOnLeave);
    enc.WriteConstrainedInteger((std::int64_t)(value.hysteresis), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger), 0, 15);
    enc.WriteBool(value.useAllowedCellList);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfig_EventId_EventA4(Decoder& dec, EventTriggerConfig_EventId_EventA4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MeasTriggerQuantity(dec, value.a4_Threshold) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportOnLeave = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.hysteresis = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger = (TimeToTrigger)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.useAllowedCellList = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfig_EventId_EventA4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfig_EventId_EventA4(EventTriggerConfig_EventId_EventA4& value)
{
    Free_MeasTriggerQuantity(value.a4_Threshold);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfig_EventId_EventA5：ASN.1 eventId/eventA5；源文件第 11498 行；SEQUENCE。
// Encode_EventTriggerConfig_EventId_EventA5 只读不分配；Decode_EventTriggerConfig_EventId_EventA5 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfig_EventId_EventA5 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfig_EventId_EventA5(Encoder& enc, const EventTriggerConfig_EventId_EventA5& value)
{
    Encode_MeasTriggerQuantity(enc, value.a5_Threshold1);
    Encode_MeasTriggerQuantity(enc, value.a5_Threshold2);
    enc.WriteBool(value.reportOnLeave);
    enc.WriteConstrainedInteger((std::int64_t)(value.hysteresis), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger), 0, 15);
    enc.WriteBool(value.useAllowedCellList);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfig_EventId_EventA5(Decoder& dec, EventTriggerConfig_EventId_EventA5& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MeasTriggerQuantity(dec, value.a5_Threshold1) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_MeasTriggerQuantity(dec, value.a5_Threshold2) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportOnLeave = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.hysteresis = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger = (TimeToTrigger)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.useAllowedCellList = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfig_EventId_EventA5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfig_EventId_EventA5(EventTriggerConfig_EventId_EventA5& value)
{
    Free_MeasTriggerQuantity(value.a5_Threshold1);
    Free_MeasTriggerQuantity(value.a5_Threshold2);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfig_EventId_EventA6：ASN.1 eventId/eventA6；源文件第 11506 行；SEQUENCE。
// Encode_EventTriggerConfig_EventId_EventA6 只读不分配；Decode_EventTriggerConfig_EventId_EventA6 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfig_EventId_EventA6 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfig_EventId_EventA6(Encoder& enc, const EventTriggerConfig_EventId_EventA6& value)
{
    Encode_MeasTriggerQuantityOffset(enc, value.a6_Offset);
    enc.WriteBool(value.reportOnLeave);
    enc.WriteConstrainedInteger((std::int64_t)(value.hysteresis), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger), 0, 15);
    enc.WriteBool(value.useAllowedCellList);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfig_EventId_EventA6(Decoder& dec, EventTriggerConfig_EventId_EventA6& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MeasTriggerQuantityOffset(dec, value.a6_Offset) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportOnLeave = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.hysteresis = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger = (TimeToTrigger)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.useAllowedCellList = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfig_EventId_EventA6(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfig_EventId_EventA6(EventTriggerConfig_EventId_EventA6& value)
{
    Free_MeasTriggerQuantityOffset(value.a6_Offset);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfig_EventId_EventX1_r17：ASN.1 eventId/eventX1-r17；源文件第 11515 行；SEQUENCE。
// Encode_EventTriggerConfig_EventId_EventX1_r17 只读不分配；Decode_EventTriggerConfig_EventId_EventX1_r17 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfig_EventId_EventX1_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfig_EventId_EventX1_r17(Encoder& enc, const EventTriggerConfig_EventId_EventX1_r17& value)
{
    Encode_SL_MeasTriggerQuantity_r16(enc, value.x1_Threshold1_Relay_r17);
    Encode_MeasTriggerQuantity(enc, value.x1_Threshold2_r17);
    enc.WriteBool(value.reportOnLeave_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.hysteresis_r17), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger_r17), 0, 15);
    enc.WriteBool(value.useAllowedCellList_r17);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfig_EventId_EventX1_r17(Decoder& dec, EventTriggerConfig_EventId_EventX1_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_SL_MeasTriggerQuantity_r16(dec, value.x1_Threshold1_Relay_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_MeasTriggerQuantity(dec, value.x1_Threshold2_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportOnLeave_r17 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.hysteresis_r17 = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger_r17 = (TimeToTrigger)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.useAllowedCellList_r17 = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfig_EventId_EventX1_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfig_EventId_EventX1_r17(EventTriggerConfig_EventId_EventX1_r17& value)
{
    Free_SL_MeasTriggerQuantity_r16(value.x1_Threshold1_Relay_r17);
    Free_MeasTriggerQuantity(value.x1_Threshold2_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfig_EventId_EventX2_r17：ASN.1 eventId/eventX2-r17；源文件第 11523 行；SEQUENCE。
// Encode_EventTriggerConfig_EventId_EventX2_r17 只读不分配；Decode_EventTriggerConfig_EventId_EventX2_r17 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfig_EventId_EventX2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfig_EventId_EventX2_r17(Encoder& enc, const EventTriggerConfig_EventId_EventX2_r17& value)
{
    Encode_SL_MeasTriggerQuantity_r16(enc, value.x2_Threshold_Relay_r17);
    enc.WriteBool(value.reportOnLeave_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.hysteresis_r17), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger_r17), 0, 15);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfig_EventId_EventX2_r17(Decoder& dec, EventTriggerConfig_EventId_EventX2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_SL_MeasTriggerQuantity_r16(dec, value.x2_Threshold_Relay_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportOnLeave_r17 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.hysteresis_r17 = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger_r17 = (TimeToTrigger)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfig_EventId_EventX2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfig_EventId_EventX2_r17(EventTriggerConfig_EventId_EventX2_r17& value)
{
    Free_SL_MeasTriggerQuantity_r16(value.x2_Threshold_Relay_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfig_EventId_EventD1_r17：ASN.1 eventId/eventD1-r17；源文件第 11529 行；SEQUENCE。
// Encode_EventTriggerConfig_EventId_EventD1_r17 只读不分配；Decode_EventTriggerConfig_EventId_EventD1_r17 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfig_EventId_EventD1_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfig_EventId_EventD1_r17(Encoder& enc, const EventTriggerConfig_EventId_EventD1_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.distanceThreshFromReference1_r17), 1, 65525);
    enc.WriteConstrainedInteger((std::int64_t)(value.distanceThreshFromReference2_r17), 1, 65525);
    enc.WriteSemiConstrainedOctetString(value.referenceLocation1_r17.bytes, value.referenceLocation1_r17.length, 0, 0xFFFFFFFFu);
    enc.WriteSemiConstrainedOctetString(value.referenceLocation2_r17.bytes, value.referenceLocation2_r17.length, 0, 0xFFFFFFFFu);
    enc.WriteBool(value.reportOnLeave_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.hysteresisLocation_r17), 0, 32768);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger_r17), 0, 15);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfig_EventId_EventD1_r17(Decoder& dec, EventTriggerConfig_EventId_EventD1_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 65525, tmp_value)) { goto fail; }
        value.distanceThreshFromReference1_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 65525, tmp_value)) { goto fail; }
        value.distanceThreshFromReference2_r17 = (int64_t)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.referenceLocation1_r17.bytes = string_bytes;
        value.referenceLocation1_r17.length = string_length;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.referenceLocation2_r17.bytes = string_bytes;
        value.referenceLocation2_r17.length = string_length;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportOnLeave_r17 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 32768, tmp_value)) { goto fail; }
        value.hysteresisLocation_r17 = (HysteresisLocation_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger_r17 = (TimeToTrigger)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfig_EventId_EventD1_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfig_EventId_EventD1_r17(EventTriggerConfig_EventId_EventD1_r17& value)
{
    std::free(value.referenceLocation1_r17.bytes);
    value.referenceLocation1_r17.bytes = nullptr;
    value.referenceLocation1_r17.length = 0;
    std::free(value.referenceLocation2_r17.bytes);
    value.referenceLocation2_r17.bytes = nullptr;
    value.referenceLocation2_r17.length = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfig_EventId_EventH1_r18：ASN.1 eventId/eventH1-r18；源文件第 11540 行；SEQUENCE。
// Encode_EventTriggerConfig_EventId_EventH1_r18 只读不分配；Decode_EventTriggerConfig_EventId_EventH1_r18 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfig_EventId_EventH1_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfig_EventId_EventH1_r18(Encoder& enc, const EventTriggerConfig_EventId_EventH1_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.h1_Threshold_r18), -420, 10000);
    enc.WriteConstrainedInteger((std::int64_t)(value.h1_Hysteresis_r18), 0, 64);
    enc.WriteBool(value.reportOnLeave_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger_r18), 0, 15);
    enc.WriteBool(value.includeAltitudeUE_r18);
    enc.WriteBool(value.simulMultiTriggerSingleMeasReport_r18);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfig_EventId_EventH1_r18(Decoder& dec, EventTriggerConfig_EventId_EventH1_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-420, 10000, tmp_value)) { goto fail; }
        value.h1_Threshold_r18 = (Altitude_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 64, tmp_value)) { goto fail; }
        value.h1_Hysteresis_r18 = (HysteresisAltitude_r18)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportOnLeave_r18 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger_r18 = (TimeToTrigger)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.includeAltitudeUE_r18 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.simulMultiTriggerSingleMeasReport_r18 = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfig_EventId_EventH1_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfig_EventId_EventH1_r18(EventTriggerConfig_EventId_EventH1_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfig_EventId_EventH2_r18：ASN.1 eventId/eventH2-r18；源文件第 11548 行；SEQUENCE。
// Encode_EventTriggerConfig_EventId_EventH2_r18 只读不分配；Decode_EventTriggerConfig_EventId_EventH2_r18 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfig_EventId_EventH2_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfig_EventId_EventH2_r18(Encoder& enc, const EventTriggerConfig_EventId_EventH2_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.h2_Threshold_r18), -420, 10000);
    enc.WriteConstrainedInteger((std::int64_t)(value.h2_Hysteresis_r18), 0, 64);
    enc.WriteBool(value.reportOnLeave_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger_r18), 0, 15);
    enc.WriteBool(value.includeAltitudeUE_r18);
    enc.WriteBool(value.simulMultiTriggerSingleMeasReport_r18);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfig_EventId_EventH2_r18(Decoder& dec, EventTriggerConfig_EventId_EventH2_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-420, 10000, tmp_value)) { goto fail; }
        value.h2_Threshold_r18 = (Altitude_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 64, tmp_value)) { goto fail; }
        value.h2_Hysteresis_r18 = (HysteresisAltitude_r18)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportOnLeave_r18 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger_r18 = (TimeToTrigger)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.includeAltitudeUE_r18 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.simulMultiTriggerSingleMeasReport_r18 = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfig_EventId_EventH2_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfig_EventId_EventH2_r18(EventTriggerConfig_EventId_EventH2_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfig_EventId_EventA3H1_r18：ASN.1 eventId/eventA3H1-r18；源文件第 11556 行；SEQUENCE。
// Encode_EventTriggerConfig_EventId_EventA3H1_r18 只读不分配；Decode_EventTriggerConfig_EventId_EventA3H1_r18 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfig_EventId_EventA3H1_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfig_EventId_EventA3H1_r18(Encoder& enc, const EventTriggerConfig_EventId_EventA3H1_r18& value)
{
    Encode_MeasTriggerQuantityOffset(enc, value.a3_Offset_r18);
    enc.WriteBool(value.reportOnLeave_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.a3_Hysteresis_r18), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger_r18), 0, 15);
    enc.WriteBool(value.useAllowedCellList_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.h1_Threshold_r18), -420, 10000);
    enc.WriteConstrainedInteger((std::int64_t)(value.h1_Hysteresis_r18), 0, 64);
    enc.WriteBool(value.includeAltitudeUE_r18);
    enc.WriteBool(value.simulMultiTriggerSingleMeasReport_r18);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfig_EventId_EventA3H1_r18(Decoder& dec, EventTriggerConfig_EventId_EventA3H1_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MeasTriggerQuantityOffset(dec, value.a3_Offset_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportOnLeave_r18 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.a3_Hysteresis_r18 = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger_r18 = (TimeToTrigger)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.useAllowedCellList_r18 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-420, 10000, tmp_value)) { goto fail; }
        value.h1_Threshold_r18 = (Altitude_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 64, tmp_value)) { goto fail; }
        value.h1_Hysteresis_r18 = (HysteresisAltitude_r18)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.includeAltitudeUE_r18 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.simulMultiTriggerSingleMeasReport_r18 = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfig_EventId_EventA3H1_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfig_EventId_EventA3H1_r18(EventTriggerConfig_EventId_EventA3H1_r18& value)
{
    Free_MeasTriggerQuantityOffset(value.a3_Offset_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfig_EventId_EventA3H2_r18：ASN.1 eventId/eventA3H2-r18；源文件第 11567 行；SEQUENCE。
// Encode_EventTriggerConfig_EventId_EventA3H2_r18 只读不分配；Decode_EventTriggerConfig_EventId_EventA3H2_r18 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfig_EventId_EventA3H2_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfig_EventId_EventA3H2_r18(Encoder& enc, const EventTriggerConfig_EventId_EventA3H2_r18& value)
{
    Encode_MeasTriggerQuantityOffset(enc, value.a3_Offset_r18);
    enc.WriteBool(value.reportOnLeave_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.a3_Hysteresis_r18), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger_r18), 0, 15);
    enc.WriteBool(value.useAllowedCellList_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.h2_Threshold_r18), -420, 10000);
    enc.WriteConstrainedInteger((std::int64_t)(value.h2_Hysteresis_r18), 0, 64);
    enc.WriteBool(value.includeAltitudeUE_r18);
    enc.WriteBool(value.simulMultiTriggerSingleMeasReport_r18);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfig_EventId_EventA3H2_r18(Decoder& dec, EventTriggerConfig_EventId_EventA3H2_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MeasTriggerQuantityOffset(dec, value.a3_Offset_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportOnLeave_r18 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.a3_Hysteresis_r18 = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger_r18 = (TimeToTrigger)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.useAllowedCellList_r18 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-420, 10000, tmp_value)) { goto fail; }
        value.h2_Threshold_r18 = (Altitude_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 64, tmp_value)) { goto fail; }
        value.h2_Hysteresis_r18 = (HysteresisAltitude_r18)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.includeAltitudeUE_r18 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.simulMultiTriggerSingleMeasReport_r18 = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfig_EventId_EventA3H2_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfig_EventId_EventA3H2_r18(EventTriggerConfig_EventId_EventA3H2_r18& value)
{
    Free_MeasTriggerQuantityOffset(value.a3_Offset_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfig_EventId_EventA4H1_r18：ASN.1 eventId/eventA4H1-r18；源文件第 11578 行；SEQUENCE。
// Encode_EventTriggerConfig_EventId_EventA4H1_r18 只读不分配；Decode_EventTriggerConfig_EventId_EventA4H1_r18 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfig_EventId_EventA4H1_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfig_EventId_EventA4H1_r18(Encoder& enc, const EventTriggerConfig_EventId_EventA4H1_r18& value)
{
    Encode_MeasTriggerQuantity(enc, value.a4_Threshold_r18);
    enc.WriteBool(value.reportOnLeave_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.a4_Hysteresis_r18), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger_r18), 0, 15);
    enc.WriteBool(value.useAllowedCellList_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.h1_Threshold_r18), -420, 10000);
    enc.WriteConstrainedInteger((std::int64_t)(value.h1_Hysteresis_r18), 0, 64);
    enc.WriteBool(value.includeAltitudeUE_r18);
    enc.WriteBool(value.simulMultiTriggerSingleMeasReport_r18);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfig_EventId_EventA4H1_r18(Decoder& dec, EventTriggerConfig_EventId_EventA4H1_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MeasTriggerQuantity(dec, value.a4_Threshold_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportOnLeave_r18 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.a4_Hysteresis_r18 = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger_r18 = (TimeToTrigger)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.useAllowedCellList_r18 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-420, 10000, tmp_value)) { goto fail; }
        value.h1_Threshold_r18 = (Altitude_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 64, tmp_value)) { goto fail; }
        value.h1_Hysteresis_r18 = (HysteresisAltitude_r18)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.includeAltitudeUE_r18 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.simulMultiTriggerSingleMeasReport_r18 = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfig_EventId_EventA4H1_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfig_EventId_EventA4H1_r18(EventTriggerConfig_EventId_EventA4H1_r18& value)
{
    Free_MeasTriggerQuantity(value.a4_Threshold_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfig_EventId_EventA4H2_r18：ASN.1 eventId/eventA4H2-r18；源文件第 11589 行；SEQUENCE。
// Encode_EventTriggerConfig_EventId_EventA4H2_r18 只读不分配；Decode_EventTriggerConfig_EventId_EventA4H2_r18 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfig_EventId_EventA4H2_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfig_EventId_EventA4H2_r18(Encoder& enc, const EventTriggerConfig_EventId_EventA4H2_r18& value)
{
    Encode_MeasTriggerQuantity(enc, value.a4_Threshold_r18);
    enc.WriteBool(value.reportOnLeave_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.a4_Hysteresis_r18), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger_r18), 0, 15);
    enc.WriteBool(value.useAllowedCellList_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.h2_Threshold_r18), -420, 10000);
    enc.WriteConstrainedInteger((std::int64_t)(value.h2_Hysteresis_r18), 0, 64);
    enc.WriteBool(value.includeAltitudeUE_r18);
    enc.WriteBool(value.simulMultiTriggerSingleMeasReport_r18);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfig_EventId_EventA4H2_r18(Decoder& dec, EventTriggerConfig_EventId_EventA4H2_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MeasTriggerQuantity(dec, value.a4_Threshold_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportOnLeave_r18 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.a4_Hysteresis_r18 = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger_r18 = (TimeToTrigger)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.useAllowedCellList_r18 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-420, 10000, tmp_value)) { goto fail; }
        value.h2_Threshold_r18 = (Altitude_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 64, tmp_value)) { goto fail; }
        value.h2_Hysteresis_r18 = (HysteresisAltitude_r18)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.includeAltitudeUE_r18 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.simulMultiTriggerSingleMeasReport_r18 = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfig_EventId_EventA4H2_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfig_EventId_EventA4H2_r18(EventTriggerConfig_EventId_EventA4H2_r18& value)
{
    Free_MeasTriggerQuantity(value.a4_Threshold_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfig_EventId_EventA5H1_r18：ASN.1 eventId/eventA5H1-r18；源文件第 11600 行；SEQUENCE。
// Encode_EventTriggerConfig_EventId_EventA5H1_r18 只读不分配；Decode_EventTriggerConfig_EventId_EventA5H1_r18 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfig_EventId_EventA5H1_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfig_EventId_EventA5H1_r18(Encoder& enc, const EventTriggerConfig_EventId_EventA5H1_r18& value)
{
    Encode_MeasTriggerQuantity(enc, value.a5_Threshold1_r18);
    Encode_MeasTriggerQuantity(enc, value.a5_Threshold2_r18);
    enc.WriteBool(value.reportOnLeave_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.a5_Hysteresis_r18), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger_r18), 0, 15);
    enc.WriteBool(value.useAllowedCellList_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.h1_Threshold_r18), -420, 10000);
    enc.WriteConstrainedInteger((std::int64_t)(value.h1_Hysteresis_r18), 0, 64);
    enc.WriteBool(value.includeAltitudeUE_r18);
    enc.WriteBool(value.simulMultiTriggerSingleMeasReport_r18);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfig_EventId_EventA5H1_r18(Decoder& dec, EventTriggerConfig_EventId_EventA5H1_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MeasTriggerQuantity(dec, value.a5_Threshold1_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_MeasTriggerQuantity(dec, value.a5_Threshold2_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportOnLeave_r18 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.a5_Hysteresis_r18 = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger_r18 = (TimeToTrigger)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.useAllowedCellList_r18 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-420, 10000, tmp_value)) { goto fail; }
        value.h1_Threshold_r18 = (Altitude_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 64, tmp_value)) { goto fail; }
        value.h1_Hysteresis_r18 = (HysteresisAltitude_r18)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.includeAltitudeUE_r18 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.simulMultiTriggerSingleMeasReport_r18 = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfig_EventId_EventA5H1_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfig_EventId_EventA5H1_r18(EventTriggerConfig_EventId_EventA5H1_r18& value)
{
    Free_MeasTriggerQuantity(value.a5_Threshold1_r18);
    Free_MeasTriggerQuantity(value.a5_Threshold2_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfig_EventId_EventA5H2_r18：ASN.1 eventId/eventA5H2-r18；源文件第 11612 行；SEQUENCE。
// Encode_EventTriggerConfig_EventId_EventA5H2_r18 只读不分配；Decode_EventTriggerConfig_EventId_EventA5H2_r18 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfig_EventId_EventA5H2_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfig_EventId_EventA5H2_r18(Encoder& enc, const EventTriggerConfig_EventId_EventA5H2_r18& value)
{
    Encode_MeasTriggerQuantity(enc, value.a5_Threshold1_r18);
    Encode_MeasTriggerQuantity(enc, value.a5_Threshold2_r18);
    enc.WriteBool(value.reportOnLeave_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.a5_Hysteresis_r18), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger_r18), 0, 15);
    enc.WriteBool(value.useAllowedCellList_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.h2_Threshold_r18), -420, 10000);
    enc.WriteConstrainedInteger((std::int64_t)(value.h2_Hysteresis_r18), 0, 64);
    enc.WriteBool(value.includeAltitudeUE_r18);
    enc.WriteBool(value.simulMultiTriggerSingleMeasReport_r18);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfig_EventId_EventA5H2_r18(Decoder& dec, EventTriggerConfig_EventId_EventA5H2_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MeasTriggerQuantity(dec, value.a5_Threshold1_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_MeasTriggerQuantity(dec, value.a5_Threshold2_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportOnLeave_r18 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.a5_Hysteresis_r18 = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger_r18 = (TimeToTrigger)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.useAllowedCellList_r18 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-420, 10000, tmp_value)) { goto fail; }
        value.h2_Threshold_r18 = (Altitude_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 64, tmp_value)) { goto fail; }
        value.h2_Hysteresis_r18 = (HysteresisAltitude_r18)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.includeAltitudeUE_r18 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.simulMultiTriggerSingleMeasReport_r18 = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfig_EventId_EventA5H2_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfig_EventId_EventA5H2_r18(EventTriggerConfig_EventId_EventA5H2_r18& value)
{
    Free_MeasTriggerQuantity(value.a5_Threshold1_r18);
    Free_MeasTriggerQuantity(value.a5_Threshold2_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfig_EventId_EventD2_r18：ASN.1 eventId/eventD2-r18；源文件第 11624 行；SEQUENCE。
// Encode_EventTriggerConfig_EventId_EventD2_r18 只读不分配；Decode_EventTriggerConfig_EventId_EventD2_r18 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfig_EventId_EventD2_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfig_EventId_EventD2_r18(Encoder& enc, const EventTriggerConfig_EventId_EventD2_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.distanceThreshFromReference1_r18), 1, 65535);
    enc.WriteConstrainedInteger((std::int64_t)(value.distanceThreshFromReference2_r18), 1, 65535);
    enc.WriteSemiConstrainedOctetString(value.referenceLocation2_r18.bytes, value.referenceLocation2_r18.length, 0, 0xFFFFFFFFu);
    enc.WriteBool(value.reportOnLeave_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.hysteresisLocation_r18), 0, 32768);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger_r18), 0, 15);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfig_EventId_EventD2_r18(Decoder& dec, EventTriggerConfig_EventId_EventD2_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 65535, tmp_value)) { goto fail; }
        value.distanceThreshFromReference1_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 65535, tmp_value)) { goto fail; }
        value.distanceThreshFromReference2_r18 = (int64_t)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.referenceLocation2_r18.bytes = string_bytes;
        value.referenceLocation2_r18.length = string_length;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportOnLeave_r18 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 32768, tmp_value)) { goto fail; }
        value.hysteresisLocation_r18 = (HysteresisLocation_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger_r18 = (TimeToTrigger)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfig_EventId_EventD2_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfig_EventId_EventD2_r18(EventTriggerConfig_EventId_EventD2_r18& value)
{
    std::free(value.referenceLocation2_r18.bytes);
    value.referenceLocation2_r18.bytes = nullptr;
    value.referenceLocation2_r18.length = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfig_EventId：ASN.1 eventId；源文件第 11471 行；CHOICE。
// Encode_EventTriggerConfig_EventId 只读不分配；Decode_EventTriggerConfig_EventId 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfig_EventId 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfig_EventId(Encoder& enc, const EventTriggerConfig_EventId& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 6) {
        if (choice_index >= 18) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 6));
        Encoder sub;
        switch (value.tag) {
        case EventTriggerConfig_EventId_Tag_eventX1_r17:
            Encode_EventTriggerConfig_EventId_EventX1_r17(sub, value.u.eventX1_r17);
            break;
        case EventTriggerConfig_EventId_Tag_eventX2_r17:
            Encode_EventTriggerConfig_EventId_EventX2_r17(sub, value.u.eventX2_r17);
            break;
        case EventTriggerConfig_EventId_Tag_eventD1_r17:
            Encode_EventTriggerConfig_EventId_EventD1_r17(sub, value.u.eventD1_r17);
            break;
        case EventTriggerConfig_EventId_Tag_eventH1_r18:
            Encode_EventTriggerConfig_EventId_EventH1_r18(sub, value.u.eventH1_r18);
            break;
        case EventTriggerConfig_EventId_Tag_eventH2_r18:
            Encode_EventTriggerConfig_EventId_EventH2_r18(sub, value.u.eventH2_r18);
            break;
        case EventTriggerConfig_EventId_Tag_eventA3H1_r18:
            Encode_EventTriggerConfig_EventId_EventA3H1_r18(sub, value.u.eventA3H1_r18);
            break;
        case EventTriggerConfig_EventId_Tag_eventA3H2_r18:
            Encode_EventTriggerConfig_EventId_EventA3H2_r18(sub, value.u.eventA3H2_r18);
            break;
        case EventTriggerConfig_EventId_Tag_eventA4H1_r18:
            Encode_EventTriggerConfig_EventId_EventA4H1_r18(sub, value.u.eventA4H1_r18);
            break;
        case EventTriggerConfig_EventId_Tag_eventA4H2_r18:
            Encode_EventTriggerConfig_EventId_EventA4H2_r18(sub, value.u.eventA4H2_r18);
            break;
        case EventTriggerConfig_EventId_Tag_eventA5H1_r18:
            Encode_EventTriggerConfig_EventId_EventA5H1_r18(sub, value.u.eventA5H1_r18);
            break;
        case EventTriggerConfig_EventId_Tag_eventA5H2_r18:
            Encode_EventTriggerConfig_EventId_EventA5H2_r18(sub, value.u.eventA5H2_r18);
            break;
        case EventTriggerConfig_EventId_Tag_eventD2_r18:
            Encode_EventTriggerConfig_EventId_EventD2_r18(sub, value.u.eventD2_r18);
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
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 5);
    switch (value.tag) {
    case EventTriggerConfig_EventId_Tag_eventA1:
        Encode_EventTriggerConfig_EventId_EventA1(enc, value.u.eventA1);
        break;
    case EventTriggerConfig_EventId_Tag_eventA2:
        Encode_EventTriggerConfig_EventId_EventA2(enc, value.u.eventA2);
        break;
    case EventTriggerConfig_EventId_Tag_eventA3:
        Encode_EventTriggerConfig_EventId_EventA3(enc, value.u.eventA3);
        break;
    case EventTriggerConfig_EventId_Tag_eventA4:
        Encode_EventTriggerConfig_EventId_EventA4(enc, value.u.eventA4);
        break;
    case EventTriggerConfig_EventId_Tag_eventA5:
        Encode_EventTriggerConfig_EventId_EventA5(enc, value.u.eventA5);
        break;
    case EventTriggerConfig_EventId_Tag_eventA6:
        Encode_EventTriggerConfig_EventId_EventA6(enc, value.u.eventA6);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfig_EventId(Decoder& dec, EventTriggerConfig_EventId& value)
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
        if (extension_index >= 12u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        value.tag = (EventTriggerConfig_EventId_Tag)(6 + extension_index);
        std::vector<std::uint8_t> open_bytes;
        if (!dec.ReadOpenType(open_bytes)) { goto fail; }
        Decoder sub(open_bytes.data(), open_bytes.size());
        switch (value.tag) {
        case EventTriggerConfig_EventId_Tag_eventX1_r17: {
            if (Decode_EventTriggerConfig_EventId_EventX1_r17(sub, value.u.eventX1_r17) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case EventTriggerConfig_EventId_Tag_eventX2_r17: {
            if (Decode_EventTriggerConfig_EventId_EventX2_r17(sub, value.u.eventX2_r17) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case EventTriggerConfig_EventId_Tag_eventD1_r17: {
            if (Decode_EventTriggerConfig_EventId_EventD1_r17(sub, value.u.eventD1_r17) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case EventTriggerConfig_EventId_Tag_eventH1_r18: {
            if (Decode_EventTriggerConfig_EventId_EventH1_r18(sub, value.u.eventH1_r18) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case EventTriggerConfig_EventId_Tag_eventH2_r18: {
            if (Decode_EventTriggerConfig_EventId_EventH2_r18(sub, value.u.eventH2_r18) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case EventTriggerConfig_EventId_Tag_eventA3H1_r18: {
            if (Decode_EventTriggerConfig_EventId_EventA3H1_r18(sub, value.u.eventA3H1_r18) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case EventTriggerConfig_EventId_Tag_eventA3H2_r18: {
            if (Decode_EventTriggerConfig_EventId_EventA3H2_r18(sub, value.u.eventA3H2_r18) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case EventTriggerConfig_EventId_Tag_eventA4H1_r18: {
            if (Decode_EventTriggerConfig_EventId_EventA4H1_r18(sub, value.u.eventA4H1_r18) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case EventTriggerConfig_EventId_Tag_eventA4H2_r18: {
            if (Decode_EventTriggerConfig_EventId_EventA4H2_r18(sub, value.u.eventA4H2_r18) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case EventTriggerConfig_EventId_Tag_eventA5H1_r18: {
            if (Decode_EventTriggerConfig_EventId_EventA5H1_r18(sub, value.u.eventA5H1_r18) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case EventTriggerConfig_EventId_Tag_eventA5H2_r18: {
            if (Decode_EventTriggerConfig_EventId_EventA5H2_r18(sub, value.u.eventA5H2_r18) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case EventTriggerConfig_EventId_Tag_eventD2_r18: {
            if (Decode_EventTriggerConfig_EventId_EventD2_r18(sub, value.u.eventD2_r18) != ErrorCode_Ok) { goto fail; }
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
    if (!dec.ReadConstrainedInteger(0, 5, root_index)) {
        goto fail;
    }
    value.tag = (EventTriggerConfig_EventId_Tag)root_index;
    switch (value.tag) {
    case EventTriggerConfig_EventId_Tag_eventA1: {
        if (Decode_EventTriggerConfig_EventId_EventA1(dec, value.u.eventA1) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case EventTriggerConfig_EventId_Tag_eventA2: {
        if (Decode_EventTriggerConfig_EventId_EventA2(dec, value.u.eventA2) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case EventTriggerConfig_EventId_Tag_eventA3: {
        if (Decode_EventTriggerConfig_EventId_EventA3(dec, value.u.eventA3) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case EventTriggerConfig_EventId_Tag_eventA4: {
        if (Decode_EventTriggerConfig_EventId_EventA4(dec, value.u.eventA4) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case EventTriggerConfig_EventId_Tag_eventA5: {
        if (Decode_EventTriggerConfig_EventId_EventA5(dec, value.u.eventA5) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case EventTriggerConfig_EventId_Tag_eventA6: {
        if (Decode_EventTriggerConfig_EventId_EventA6(dec, value.u.eventA6) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfig_EventId(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfig_EventId(EventTriggerConfig_EventId& value)
{
    switch (value.tag) {
    case EventTriggerConfig_EventId_Tag_eventA1:
        Free_EventTriggerConfig_EventId_EventA1(value.u.eventA1);
        break;
    case EventTriggerConfig_EventId_Tag_eventA2:
        Free_EventTriggerConfig_EventId_EventA2(value.u.eventA2);
        break;
    case EventTriggerConfig_EventId_Tag_eventA3:
        Free_EventTriggerConfig_EventId_EventA3(value.u.eventA3);
        break;
    case EventTriggerConfig_EventId_Tag_eventA4:
        Free_EventTriggerConfig_EventId_EventA4(value.u.eventA4);
        break;
    case EventTriggerConfig_EventId_Tag_eventA5:
        Free_EventTriggerConfig_EventId_EventA5(value.u.eventA5);
        break;
    case EventTriggerConfig_EventId_Tag_eventA6:
        Free_EventTriggerConfig_EventId_EventA6(value.u.eventA6);
        break;
    case EventTriggerConfig_EventId_Tag_eventX1_r17:
        Free_EventTriggerConfig_EventId_EventX1_r17(value.u.eventX1_r17);
        break;
    case EventTriggerConfig_EventId_Tag_eventX2_r17:
        Free_EventTriggerConfig_EventId_EventX2_r17(value.u.eventX2_r17);
        break;
    case EventTriggerConfig_EventId_Tag_eventD1_r17:
        Free_EventTriggerConfig_EventId_EventD1_r17(value.u.eventD1_r17);
        break;
    case EventTriggerConfig_EventId_Tag_eventH1_r18:
        Free_EventTriggerConfig_EventId_EventH1_r18(value.u.eventH1_r18);
        break;
    case EventTriggerConfig_EventId_Tag_eventH2_r18:
        Free_EventTriggerConfig_EventId_EventH2_r18(value.u.eventH2_r18);
        break;
    case EventTriggerConfig_EventId_Tag_eventA3H1_r18:
        Free_EventTriggerConfig_EventId_EventA3H1_r18(value.u.eventA3H1_r18);
        break;
    case EventTriggerConfig_EventId_Tag_eventA3H2_r18:
        Free_EventTriggerConfig_EventId_EventA3H2_r18(value.u.eventA3H2_r18);
        break;
    case EventTriggerConfig_EventId_Tag_eventA4H1_r18:
        Free_EventTriggerConfig_EventId_EventA4H1_r18(value.u.eventA4H1_r18);
        break;
    case EventTriggerConfig_EventId_Tag_eventA4H2_r18:
        Free_EventTriggerConfig_EventId_EventA4H2_r18(value.u.eventA4H2_r18);
        break;
    case EventTriggerConfig_EventId_Tag_eventA5H1_r18:
        Free_EventTriggerConfig_EventId_EventA5H1_r18(value.u.eventA5H1_r18);
        break;
    case EventTriggerConfig_EventId_Tag_eventA5H2_r18:
        Free_EventTriggerConfig_EventId_EventA5H2_r18(value.u.eventA5H2_r18);
        break;
    case EventTriggerConfig_EventId_Tag_eventD2_r18:
        Free_EventTriggerConfig_EventId_EventD2_r18(value.u.eventD2_r18);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfig：ASN.1 EventTriggerConfig；源文件第 11470 行；SEQUENCE。
// Encode_EventTriggerConfig 只读不分配；Decode_EventTriggerConfig 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfig(Encoder& enc, const EventTriggerConfig& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_reportQuantityRS_Indexes);
    enc.WriteBit(value.has_maxNrofRS_IndexesToReport);
    enc.WriteBit(value.has_reportAddNeighMeas);
    Encode_EventTriggerConfig_EventId(enc, value.eventId);
    enc.WriteConstrainedInteger((std::int64_t)(value.rsType), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.reportInterval), 0, 13);
    enc.WriteConstrainedInteger((std::int64_t)(value.reportAmount), 0, 7);
    Encode_MeasReportQuantity(enc, value.reportQuantityCell);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxReportCells), 1, 8);
    if (value.has_reportQuantityRS_Indexes) {
        Encode_MeasReportQuantity(enc, value.reportQuantityRS_Indexes);
    }
    if (value.has_maxNrofRS_IndexesToReport) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNrofRS_IndexesToReport), 1, 32);
    }
    enc.WriteBool(value.includeBeamMeasurements);
    if (value.has_reportAddNeighMeas) {
        enc.WriteConstrainedInteger((std::int64_t)(value.reportAddNeighMeas), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_EventTriggerConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_EventTriggerConfig_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_EventTriggerConfig_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfig(Decoder& dec, EventTriggerConfig& value)
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
        if (Decode_EventTriggerConfig_EventId(dec, value.eventId) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.rsType = (NR_RS_Type)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.reportInterval = (ReportInterval)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.reportAmount = (EventTriggerConfig_ReportAmount)tmp_value;
    }
    {
        if (Decode_MeasReportQuantity(dec, value.reportQuantityCell) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxReportCells = (int64_t)tmp_value;
    }
    if (present_0) {
        if (Decode_MeasReportQuantity(dec, value.reportQuantityRS_Indexes) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.maxNrofRS_IndexesToReport = (int64_t)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.includeBeamMeasurements = tmp_value;
    }
    if (present_2) {
        value.reportAddNeighMeas = (EventTriggerConfig_ReportAddNeighMeas)0;
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
    if (Decode_EventTriggerConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_EventTriggerConfig_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_EventTriggerConfig_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    Free_EventTriggerConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfig(EventTriggerConfig& value)
{
    Free_EventTriggerConfig_EventId(value.eventId);
    Free_MeasReportQuantity(value.reportQuantityCell);
    if (value.has_reportQuantityRS_Indexes) {
        Free_MeasReportQuantity(value.reportQuantityRS_Indexes);
    }
    if (value.has_maxNrofRS_IndexesToReport) {
    }
    if (value.has_reportAddNeighMeas) {
    }
    if (value.has_extGroup1) {
        Free_EventTriggerConfig_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_EventTriggerConfig_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_EventTriggerConfig_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UL_DelayValueConfig_r16：ASN.1 UL-DelayValueConfig-r16；源文件第 13893 行；SEQUENCE。
// Encode_UL_DelayValueConfig_r16 只读不分配；Decode_UL_DelayValueConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_UL_DelayValueConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UL_DelayValueConfig_r16(Encoder& enc, const UL_DelayValueConfig_r16& value)
{
enc.WriteConstrainedLength(value.delay_DRBlist_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.delay_DRBlist_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.delay_DRBlist_r16_items[i]), 1, 32);
}
    return enc.Error();
}

ErrorCode Decode_UL_DelayValueConfig_r16(Decoder& dec, UL_DelayValueConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.delay_DRBlist_r16_count)) { goto fail; }
if (value.delay_DRBlist_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.delay_DRBlist_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.delay_DRBlist_r16_count > 0u) {
    value.delay_DRBlist_r16_items = (DRB_Identity*)std::malloc((std::size_t)value.delay_DRBlist_r16_count * sizeof(DRB_Identity));
    if (value.delay_DRBlist_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.delay_DRBlist_r16_items, 0, (std::size_t)value.delay_DRBlist_r16_count * sizeof(DRB_Identity));
}
for (std::uint32_t i = 0; i < value.delay_DRBlist_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
    value.delay_DRBlist_r16_items[i] = (DRB_Identity)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_UL_DelayValueConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UL_DelayValueConfig_r16(UL_DelayValueConfig_r16& value)
{
    if (value.delay_DRBlist_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.delay_DRBlist_r16_count; ++i) {
        }
        std::free(value.delay_DRBlist_r16_items);
        value.delay_DRBlist_r16_items = nullptr;
    }
    value.delay_DRBlist_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_UL_DelayValueConfig_r16：ASN.1 SetupRelease<UL-DelayValueConfig-r16>；源文件第 11682 行；CHOICE。
// Encode_SetupRelease_UL_DelayValueConfig_r16 只读不分配；Decode_SetupRelease_UL_DelayValueConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_UL_DelayValueConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_UL_DelayValueConfig_r16(Encoder& enc, const SetupRelease_UL_DelayValueConfig_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_UL_DelayValueConfig_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_UL_DelayValueConfig_r16_Tag_setup:
        Encode_UL_DelayValueConfig_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_UL_DelayValueConfig_r16(Decoder& dec, SetupRelease_UL_DelayValueConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_UL_DelayValueConfig_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_UL_DelayValueConfig_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_UL_DelayValueConfig_r16_Tag_setup: {
        if (Decode_UL_DelayValueConfig_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_UL_DelayValueConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_UL_DelayValueConfig_r16(SetupRelease_UL_DelayValueConfig_r16& value)
{
    switch (value.tag) {
    case SetupRelease_UL_DelayValueConfig_r16_Tag_release:
        break;
    case SetupRelease_UL_DelayValueConfig_r16_Tag_setup:
        Free_UL_DelayValueConfig_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PeriodicalReportConfig_ExtGroup1：ASN.1 PeriodicalReportConfig_ExtGroup1；源文件第 11676 行；扩展添加组 [[ ]]。
// Encode_PeriodicalReportConfig_ExtGroup1 只读不分配；Decode_PeriodicalReportConfig_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_PeriodicalReportConfig_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PeriodicalReportConfig_ExtGroup1(Encoder& enc, const PeriodicalReportConfig_ExtGroup1& value)
{
    enc.WriteBit(value.has_measRSSI_ReportConfig_r16);
    enc.WriteBit(value.has_includeCommonLocationInfo_r16);
    enc.WriteBit(value.has_includeBT_Meas_r16);
    enc.WriteBit(value.has_includeWLAN_Meas_r16);
    enc.WriteBit(value.has_includeSensor_Meas_r16);
    enc.WriteBit(value.has_ul_DelayValueConfig_r16);
    enc.WriteBit(value.has_reportAddNeighMeas_r16);
    if (value.has_measRSSI_ReportConfig_r16) {
        Encode_MeasRSSI_ReportConfig_r16(enc, value.measRSSI_ReportConfig_r16);
    }
    if (value.has_includeCommonLocationInfo_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.includeCommonLocationInfo_r16), 0, 0);
    }
    if (value.has_includeBT_Meas_r16) {
        Encode_SetupRelease_BT_NameList_r16(enc, value.includeBT_Meas_r16);
    }
    if (value.has_includeWLAN_Meas_r16) {
        Encode_SetupRelease_WLAN_NameList_r16(enc, value.includeWLAN_Meas_r16);
    }
    if (value.has_includeSensor_Meas_r16) {
        Encode_SetupRelease_Sensor_NameList_r16(enc, value.includeSensor_Meas_r16);
    }
    if (value.has_ul_DelayValueConfig_r16) {
        Encode_SetupRelease_UL_DelayValueConfig_r16(enc, value.ul_DelayValueConfig_r16);
    }
    if (value.has_reportAddNeighMeas_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.reportAddNeighMeas_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PeriodicalReportConfig_ExtGroup1(Decoder& dec, PeriodicalReportConfig_ExtGroup1& value)
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
        if (Decode_MeasRSSI_ReportConfig_r16(dec, value.measRSSI_ReportConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.includeCommonLocationInfo_r16 = (PeriodicalReportConfig_ExtGroup1_IncludeCommonLocationInfo_r16)0;
    }
    if (present_2) {
        if (Decode_SetupRelease_BT_NameList_r16(dec, value.includeBT_Meas_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SetupRelease_WLAN_NameList_r16(dec, value.includeWLAN_Meas_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SetupRelease_Sensor_NameList_r16(dec, value.includeSensor_Meas_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_SetupRelease_UL_DelayValueConfig_r16(dec, value.ul_DelayValueConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        value.reportAddNeighMeas_r16 = (PeriodicalReportConfig_ExtGroup1_ReportAddNeighMeas_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PeriodicalReportConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PeriodicalReportConfig_ExtGroup1(PeriodicalReportConfig_ExtGroup1& value)
{
    if (value.has_measRSSI_ReportConfig_r16) {
        Free_MeasRSSI_ReportConfig_r16(value.measRSSI_ReportConfig_r16);
    }
    if (value.has_includeCommonLocationInfo_r16) {
    }
    if (value.has_includeBT_Meas_r16) {
        Free_SetupRelease_BT_NameList_r16(value.includeBT_Meas_r16);
    }
    if (value.has_includeWLAN_Meas_r16) {
        Free_SetupRelease_WLAN_NameList_r16(value.includeWLAN_Meas_r16);
    }
    if (value.has_includeSensor_Meas_r16) {
        Free_SetupRelease_Sensor_NameList_r16(value.includeSensor_Meas_r16);
    }
    if (value.has_ul_DelayValueConfig_r16) {
        Free_SetupRelease_UL_DelayValueConfig_r16(value.ul_DelayValueConfig_r16);
    }
    if (value.has_reportAddNeighMeas_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UL_ExcessDelayConfig_r17：ASN.1 UL-ExcessDelayConfig-r17；源文件第 13900 行；SEQUENCE。
// Encode_UL_ExcessDelayConfig_r17 只读不分配；Decode_UL_ExcessDelayConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_UL_ExcessDelayConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UL_ExcessDelayConfig_r17(Encoder& enc, const UL_ExcessDelayConfig_r17& value)
{
enc.WriteConstrainedLength(value.excessDelay_DRBlist_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.excessDelay_DRBlist_r17_count; ++i) {
    Encode_ExcessDelay_DRB_IdentityInfo_r17(enc, value.excessDelay_DRBlist_r17_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_UL_ExcessDelayConfig_r17(Decoder& dec, UL_ExcessDelayConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.excessDelay_DRBlist_r17_count)) { goto fail; }
if (value.excessDelay_DRBlist_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.excessDelay_DRBlist_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.excessDelay_DRBlist_r17_count > 0u) {
    value.excessDelay_DRBlist_r17_items = (ExcessDelay_DRB_IdentityInfo_r17*)std::malloc((std::size_t)value.excessDelay_DRBlist_r17_count * sizeof(ExcessDelay_DRB_IdentityInfo_r17));
    if (value.excessDelay_DRBlist_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.excessDelay_DRBlist_r17_items, 0, (std::size_t)value.excessDelay_DRBlist_r17_count * sizeof(ExcessDelay_DRB_IdentityInfo_r17));
}
for (std::uint32_t i = 0; i < value.excessDelay_DRBlist_r17_count; ++i) {
    if (Decode_ExcessDelay_DRB_IdentityInfo_r17(dec, value.excessDelay_DRBlist_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_UL_ExcessDelayConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UL_ExcessDelayConfig_r17(UL_ExcessDelayConfig_r17& value)
{
    if (value.excessDelay_DRBlist_r17_items != nullptr) {
        for (std::uint32_t i = 0; i < value.excessDelay_DRBlist_r17_count; ++i) {
            Free_ExcessDelay_DRB_IdentityInfo_r17(value.excessDelay_DRBlist_r17_items[i]);
        }
        std::free(value.excessDelay_DRBlist_r17_items);
        value.excessDelay_DRBlist_r17_items = nullptr;
    }
    value.excessDelay_DRBlist_r17_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_UL_ExcessDelayConfig_r17：ASN.1 SetupRelease<UL-ExcessDelayConfig-r17>；源文件第 11686 行；CHOICE。
// Encode_SetupRelease_UL_ExcessDelayConfig_r17 只读不分配；Decode_SetupRelease_UL_ExcessDelayConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_UL_ExcessDelayConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_UL_ExcessDelayConfig_r17(Encoder& enc, const SetupRelease_UL_ExcessDelayConfig_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_UL_ExcessDelayConfig_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_UL_ExcessDelayConfig_r17_Tag_setup:
        Encode_UL_ExcessDelayConfig_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_UL_ExcessDelayConfig_r17(Decoder& dec, SetupRelease_UL_ExcessDelayConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_UL_ExcessDelayConfig_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_UL_ExcessDelayConfig_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_UL_ExcessDelayConfig_r17_Tag_setup: {
        if (Decode_UL_ExcessDelayConfig_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_UL_ExcessDelayConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_UL_ExcessDelayConfig_r17(SetupRelease_UL_ExcessDelayConfig_r17& value)
{
    switch (value.tag) {
    case SetupRelease_UL_ExcessDelayConfig_r17_Tag_release:
        break;
    case SetupRelease_UL_ExcessDelayConfig_r17_Tag_setup:
        Free_UL_ExcessDelayConfig_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PeriodicalReportConfig_ExtGroup2：ASN.1 PeriodicalReportConfig_ExtGroup2；源文件第 11685 行；扩展添加组 [[ ]]。
// Encode_PeriodicalReportConfig_ExtGroup2 只读不分配；Decode_PeriodicalReportConfig_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_PeriodicalReportConfig_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PeriodicalReportConfig_ExtGroup2(Encoder& enc, const PeriodicalReportConfig_ExtGroup2& value)
{
    enc.WriteBit(value.has_ul_ExcessDelayConfig_r17);
    enc.WriteBit(value.has_coarseLocationRequest_r17);
    enc.WriteBit(value.has_reportQuantityRelay_r17);
    if (value.has_ul_ExcessDelayConfig_r17) {
        Encode_SetupRelease_UL_ExcessDelayConfig_r17(enc, value.ul_ExcessDelayConfig_r17);
    }
    if (value.has_coarseLocationRequest_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.coarseLocationRequest_r17), 0, 0);
    }
    if (value.has_reportQuantityRelay_r17) {
        Encode_SL_MeasReportQuantity_r16(enc, value.reportQuantityRelay_r17);
    }
    return enc.Error();
}

ErrorCode Decode_PeriodicalReportConfig_ExtGroup2(Decoder& dec, PeriodicalReportConfig_ExtGroup2& value)
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
        if (Decode_SetupRelease_UL_ExcessDelayConfig_r17(dec, value.ul_ExcessDelayConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.coarseLocationRequest_r17 = (PeriodicalReportConfig_ExtGroup2_CoarseLocationRequest_r17)0;
    }
    if (present_2) {
        if (Decode_SL_MeasReportQuantity_r16(dec, value.reportQuantityRelay_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PeriodicalReportConfig_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PeriodicalReportConfig_ExtGroup2(PeriodicalReportConfig_ExtGroup2& value)
{
    if (value.has_ul_ExcessDelayConfig_r17) {
        Free_SetupRelease_UL_ExcessDelayConfig_r17(value.ul_ExcessDelayConfig_r17);
    }
    if (value.has_coarseLocationRequest_r17) {
    }
    if (value.has_reportQuantityRelay_r17) {
        Free_SL_MeasReportQuantity_r16(value.reportQuantityRelay_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PeriodicalReportConfig：ASN.1 PeriodicalReportConfig；源文件第 11665 行；SEQUENCE。
// Encode_PeriodicalReportConfig 只读不分配；Decode_PeriodicalReportConfig 可能 malloc（失败时内部已释放并清零）；Free_PeriodicalReportConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PeriodicalReportConfig(Encoder& enc, const PeriodicalReportConfig& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_reportQuantityRS_Indexes);
    enc.WriteBit(value.has_maxNrofRS_IndexesToReport);
    enc.WriteConstrainedInteger((std::int64_t)(value.rsType), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.reportInterval), 0, 13);
    enc.WriteConstrainedInteger((std::int64_t)(value.reportAmount), 0, 7);
    Encode_MeasReportQuantity(enc, value.reportQuantityCell);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxReportCells), 1, 8);
    if (value.has_reportQuantityRS_Indexes) {
        Encode_MeasReportQuantity(enc, value.reportQuantityRS_Indexes);
    }
    if (value.has_maxNrofRS_IndexesToReport) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNrofRS_IndexesToReport), 1, 32);
    }
    enc.WriteBool(value.includeBeamMeasurements);
    enc.WriteBool(value.useAllowedCellList);
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_PeriodicalReportConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_PeriodicalReportConfig_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PeriodicalReportConfig(Decoder& dec, PeriodicalReportConfig& value)
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
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.rsType = (NR_RS_Type)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.reportInterval = (ReportInterval)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.reportAmount = (PeriodicalReportConfig_ReportAmount)tmp_value;
    }
    {
        if (Decode_MeasReportQuantity(dec, value.reportQuantityCell) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxReportCells = (int64_t)tmp_value;
    }
    if (present_0) {
        if (Decode_MeasReportQuantity(dec, value.reportQuantityRS_Indexes) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.maxNrofRS_IndexesToReport = (int64_t)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.includeBeamMeasurements = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.useAllowedCellList = tmp_value;
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
    if (Decode_PeriodicalReportConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_PeriodicalReportConfig_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_PeriodicalReportConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PeriodicalReportConfig(PeriodicalReportConfig& value)
{
    Free_MeasReportQuantity(value.reportQuantityCell);
    if (value.has_reportQuantityRS_Indexes) {
        Free_MeasReportQuantity(value.reportQuantityRS_Indexes);
    }
    if (value.has_maxNrofRS_IndexesToReport) {
    }
    if (value.has_extGroup1) {
        Free_PeriodicalReportConfig_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_PeriodicalReportConfig_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasTriggerQuantityCLI_r16：ASN.1 MeasTriggerQuantityCLI-r16；源文件第 11749 行；CHOICE。
// Encode_MeasTriggerQuantityCLI_r16 只读不分配；Decode_MeasTriggerQuantityCLI_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasTriggerQuantityCLI_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasTriggerQuantityCLI_r16(Encoder& enc, const MeasTriggerQuantityCLI_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case MeasTriggerQuantityCLI_r16_Tag_srs_RSRP_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.srs_RSRP_r16), 0, 98);
        break;
    case MeasTriggerQuantityCLI_r16_Tag_cli_RSSI_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.cli_RSSI_r16), 0, 76);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MeasTriggerQuantityCLI_r16(Decoder& dec, MeasTriggerQuantityCLI_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (MeasTriggerQuantityCLI_r16_Tag)root_index;
    switch (value.tag) {
    case MeasTriggerQuantityCLI_r16_Tag_srs_RSRP_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 98, tmp_value)) { goto fail; }
        value.u.srs_RSRP_r16 = (SRS_RSRP_Range_r16)tmp_value;
        break;
    }
    case MeasTriggerQuantityCLI_r16_Tag_cli_RSSI_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 76, tmp_value)) { goto fail; }
        value.u.cli_RSSI_r16 = (CLI_RSSI_Range_r16)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasTriggerQuantityCLI_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasTriggerQuantityCLI_r16(MeasTriggerQuantityCLI_r16& value)
{
    switch (value.tag) {
    case MeasTriggerQuantityCLI_r16_Tag_srs_RSRP_r16:
        break;
    case MeasTriggerQuantityCLI_r16_Tag_cli_RSSI_r16:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CLI_EventTriggerConfig_r16_EventId_r16_EventI1_r16：ASN.1 eventId-r16/eventI1-r16；源文件第 11719 行；SEQUENCE。
// Encode_CLI_EventTriggerConfig_r16_EventId_r16_EventI1_r16 只读不分配；Decode_CLI_EventTriggerConfig_r16_EventId_r16_EventI1_r16 可能 malloc（失败时内部已释放并清零）；Free_CLI_EventTriggerConfig_r16_EventId_r16_EventI1_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CLI_EventTriggerConfig_r16_EventId_r16_EventI1_r16(Encoder& enc, const CLI_EventTriggerConfig_r16_EventId_r16_EventI1_r16& value)
{
    Encode_MeasTriggerQuantityCLI_r16(enc, value.i1_Threshold_r16);
    enc.WriteBool(value.reportOnLeave_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.hysteresis_r16), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger_r16), 0, 15);
    return enc.Error();
}

ErrorCode Decode_CLI_EventTriggerConfig_r16_EventId_r16_EventI1_r16(Decoder& dec, CLI_EventTriggerConfig_r16_EventId_r16_EventI1_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MeasTriggerQuantityCLI_r16(dec, value.i1_Threshold_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportOnLeave_r16 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.hysteresis_r16 = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger_r16 = (TimeToTrigger)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CLI_EventTriggerConfig_r16_EventId_r16_EventI1_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CLI_EventTriggerConfig_r16_EventId_r16_EventI1_r16(CLI_EventTriggerConfig_r16_EventId_r16_EventI1_r16& value)
{
    Free_MeasTriggerQuantityCLI_r16(value.i1_Threshold_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CLI_EventTriggerConfig_r16_EventId_r16：ASN.1 eventId-r16；源文件第 11718 行；CHOICE。
// Encode_CLI_EventTriggerConfig_r16_EventId_r16 只读不分配；Decode_CLI_EventTriggerConfig_r16_EventId_r16 可能 malloc（失败时内部已释放并清零）；Free_CLI_EventTriggerConfig_r16_EventId_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CLI_EventTriggerConfig_r16_EventId_r16(Encoder& enc, const CLI_EventTriggerConfig_r16_EventId_r16& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 1) {
        if (choice_index >= 1) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 1));
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
    switch (value.tag) {
    case CLI_EventTriggerConfig_r16_EventId_r16_Tag_eventI1_r16:
        Encode_CLI_EventTriggerConfig_r16_EventId_r16_EventI1_r16(enc, value.u.eventI1_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CLI_EventTriggerConfig_r16_EventId_r16(Decoder& dec, CLI_EventTriggerConfig_r16_EventId_r16& value)
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
        value.tag = (CLI_EventTriggerConfig_r16_EventId_r16_Tag)(1 + extension_index);
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
    value.tag = (CLI_EventTriggerConfig_r16_EventId_r16_Tag)0;
    switch (value.tag) {
    case CLI_EventTriggerConfig_r16_EventId_r16_Tag_eventI1_r16: {
        if (Decode_CLI_EventTriggerConfig_r16_EventId_r16_EventI1_r16(dec, value.u.eventI1_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CLI_EventTriggerConfig_r16_EventId_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CLI_EventTriggerConfig_r16_EventId_r16(CLI_EventTriggerConfig_r16_EventId_r16& value)
{
    switch (value.tag) {
    case CLI_EventTriggerConfig_r16_EventId_r16_Tag_eventI1_r16:
        Free_CLI_EventTriggerConfig_r16_EventId_r16_EventI1_r16(value.u.eventI1_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CLI_EventTriggerConfig_r16：ASN.1 CLI-EventTriggerConfig-r16；源文件第 11717 行；SEQUENCE。
// Encode_CLI_EventTriggerConfig_r16 只读不分配；Decode_CLI_EventTriggerConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_CLI_EventTriggerConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CLI_EventTriggerConfig_r16(Encoder& enc, const CLI_EventTriggerConfig_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_CLI_EventTriggerConfig_r16_EventId_r16(enc, value.eventId_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.reportInterval_r16), 0, 13);
    enc.WriteConstrainedInteger((std::int64_t)(value.reportAmount_r16), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxReportCLI_r16), 1, 8);
    return enc.Error();
}

ErrorCode Decode_CLI_EventTriggerConfig_r16(Decoder& dec, CLI_EventTriggerConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_CLI_EventTriggerConfig_r16_EventId_r16(dec, value.eventId_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.reportInterval_r16 = (ReportInterval)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.reportAmount_r16 = (CLI_EventTriggerConfig_r16_ReportAmount_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxReportCLI_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CLI_EventTriggerConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CLI_EventTriggerConfig_r16(CLI_EventTriggerConfig_r16& value)
{
    Free_CLI_EventTriggerConfig_r16_EventId_r16(value.eventId_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CLI_PeriodicalReportConfig_r16：ASN.1 CLI-PeriodicalReportConfig-r16；源文件第 11733 行；SEQUENCE。
// Encode_CLI_PeriodicalReportConfig_r16 只读不分配；Decode_CLI_PeriodicalReportConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_CLI_PeriodicalReportConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CLI_PeriodicalReportConfig_r16(Encoder& enc, const CLI_PeriodicalReportConfig_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.reportInterval_r16), 0, 13);
    enc.WriteConstrainedInteger((std::int64_t)(value.reportAmount_r16), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.reportQuantityCLI_r16), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxReportCLI_r16), 1, 8);
    return enc.Error();
}

ErrorCode Decode_CLI_PeriodicalReportConfig_r16(Decoder& dec, CLI_PeriodicalReportConfig_r16& value)
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
        value.reportInterval_r16 = (ReportInterval)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.reportAmount_r16 = (CLI_PeriodicalReportConfig_r16_ReportAmount_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.reportQuantityCLI_r16 = (MeasReportQuantityCLI_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxReportCLI_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CLI_PeriodicalReportConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CLI_PeriodicalReportConfig_r16(CLI_PeriodicalReportConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RxTxPeriodical_r17：ASN.1 RxTxPeriodical-r17；源文件第 11741 行；SEQUENCE。
// Encode_RxTxPeriodical_r17 只读不分配；Decode_RxTxPeriodical_r17 可能 malloc（失败时内部已释放并清零）；Free_RxTxPeriodical_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RxTxPeriodical_r17(Encoder& enc, const RxTxPeriodical_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_rxTxReportInterval_r17);
    if (value.has_rxTxReportInterval_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rxTxReportInterval_r17), 0, 15);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.reportAmount_r17), 0, 7);
    return enc.Error();
}

ErrorCode Decode_RxTxPeriodical_r17(Decoder& dec, RxTxPeriodical_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.rxTxReportInterval_r17 = (RxTxReportInterval_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.reportAmount_r17 = (RxTxPeriodical_r17_ReportAmount_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RxTxPeriodical_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RxTxPeriodical_r17(RxTxPeriodical_r17& value)
{
    if (value.has_rxTxReportInterval_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ReportOnScellActivation_r18：ASN.1 ReportOnScellActivation-r18；源文件第 11756 行；SEQUENCE。
// Encode_ReportOnScellActivation_r18 只读不分配；Decode_ReportOnScellActivation_r18 可能 malloc（失败时内部已释放并清零）；Free_ReportOnScellActivation_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ReportOnScellActivation_r18(Encoder& enc, const ReportOnScellActivation_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.rsType), 0, 1);
    Encode_MeasReportQuantity(enc, value.reportQuantityRS_Indexes);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNrofRS_IndexesToReport), 1, 32);
    enc.WriteBool(value.includeBeamMeasurements);
    return enc.Error();
}

ErrorCode Decode_ReportOnScellActivation_r18(Decoder& dec, ReportOnScellActivation_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.rsType = (NR_RS_Type)tmp_value;
    }
    {
        if (Decode_MeasReportQuantity(dec, value.reportQuantityRS_Indexes) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.maxNrofRS_IndexesToReport = (int64_t)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.includeBeamMeasurements = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReportOnScellActivation_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReportOnScellActivation_r18(ReportOnScellActivation_r18& value)
{
    Free_MeasReportQuantity(value.reportQuantityRS_Indexes);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ReportConfigNR_ReportType：ASN.1 reportType；源文件第 11389 行；CHOICE。
// Encode_ReportConfigNR_ReportType 只读不分配；Decode_ReportConfigNR_ReportType 可能 malloc（失败时内部已释放并清零）；Free_ReportConfigNR_ReportType 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ReportConfigNR_ReportType(Encoder& enc, const ReportConfigNR_ReportType& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 2) {
        if (choice_index >= 9) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 2));
        Encoder sub;
        switch (value.tag) {
        case ReportConfigNR_ReportType_Tag_reportCGI:
            Encode_ReportCGI(sub, value.u.reportCGI);
            break;
        case ReportConfigNR_ReportType_Tag_reportSFTD:
            Encode_ReportSFTD_NR(sub, value.u.reportSFTD);
            break;
        case ReportConfigNR_ReportType_Tag_condTriggerConfig_r16:
            Encode_CondTriggerConfig_r16(sub, value.u.condTriggerConfig_r16);
            break;
        case ReportConfigNR_ReportType_Tag_cli_Periodical_r16:
            Encode_CLI_PeriodicalReportConfig_r16(sub, value.u.cli_Periodical_r16);
            break;
        case ReportConfigNR_ReportType_Tag_cli_EventTriggered_r16:
            Encode_CLI_EventTriggerConfig_r16(sub, value.u.cli_EventTriggered_r16);
            break;
        case ReportConfigNR_ReportType_Tag_rxTxPeriodical_r17:
            Encode_RxTxPeriodical_r17(sub, value.u.rxTxPeriodical_r17);
            break;
        case ReportConfigNR_ReportType_Tag_reportOnScellActivation_r18:
            Encode_ReportOnScellActivation_r18(sub, value.u.reportOnScellActivation_r18);
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
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case ReportConfigNR_ReportType_Tag_periodical:
        Encode_PeriodicalReportConfig(enc, value.u.periodical);
        break;
    case ReportConfigNR_ReportType_Tag_eventTriggered:
        Encode_EventTriggerConfig(enc, value.u.eventTriggered);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_ReportConfigNR_ReportType(Decoder& dec, ReportConfigNR_ReportType& value)
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
        if (extension_index >= 7u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        value.tag = (ReportConfigNR_ReportType_Tag)(2 + extension_index);
        std::vector<std::uint8_t> open_bytes;
        if (!dec.ReadOpenType(open_bytes)) { goto fail; }
        Decoder sub(open_bytes.data(), open_bytes.size());
        switch (value.tag) {
        case ReportConfigNR_ReportType_Tag_reportCGI: {
            if (Decode_ReportCGI(sub, value.u.reportCGI) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case ReportConfigNR_ReportType_Tag_reportSFTD: {
            if (Decode_ReportSFTD_NR(sub, value.u.reportSFTD) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case ReportConfigNR_ReportType_Tag_condTriggerConfig_r16: {
            if (Decode_CondTriggerConfig_r16(sub, value.u.condTriggerConfig_r16) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case ReportConfigNR_ReportType_Tag_cli_Periodical_r16: {
            if (Decode_CLI_PeriodicalReportConfig_r16(sub, value.u.cli_Periodical_r16) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case ReportConfigNR_ReportType_Tag_cli_EventTriggered_r16: {
            if (Decode_CLI_EventTriggerConfig_r16(sub, value.u.cli_EventTriggered_r16) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case ReportConfigNR_ReportType_Tag_rxTxPeriodical_r17: {
            if (Decode_RxTxPeriodical_r17(sub, value.u.rxTxPeriodical_r17) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case ReportConfigNR_ReportType_Tag_reportOnScellActivation_r18: {
            if (Decode_ReportOnScellActivation_r18(sub, value.u.reportOnScellActivation_r18) != ErrorCode_Ok) { goto fail; }
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
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (ReportConfigNR_ReportType_Tag)root_index;
    switch (value.tag) {
    case ReportConfigNR_ReportType_Tag_periodical: {
        if (Decode_PeriodicalReportConfig(dec, value.u.periodical) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case ReportConfigNR_ReportType_Tag_eventTriggered: {
        if (Decode_EventTriggerConfig(dec, value.u.eventTriggered) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReportConfigNR_ReportType(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReportConfigNR_ReportType(ReportConfigNR_ReportType& value)
{
    switch (value.tag) {
    case ReportConfigNR_ReportType_Tag_periodical:
        Free_PeriodicalReportConfig(value.u.periodical);
        break;
    case ReportConfigNR_ReportType_Tag_eventTriggered:
        Free_EventTriggerConfig(value.u.eventTriggered);
        break;
    case ReportConfigNR_ReportType_Tag_reportCGI:
        Free_ReportCGI(value.u.reportCGI);
        break;
    case ReportConfigNR_ReportType_Tag_reportSFTD:
        Free_ReportSFTD_NR(value.u.reportSFTD);
        break;
    case ReportConfigNR_ReportType_Tag_condTriggerConfig_r16:
        Free_CondTriggerConfig_r16(value.u.condTriggerConfig_r16);
        break;
    case ReportConfigNR_ReportType_Tag_cli_Periodical_r16:
        Free_CLI_PeriodicalReportConfig_r16(value.u.cli_Periodical_r16);
        break;
    case ReportConfigNR_ReportType_Tag_cli_EventTriggered_r16:
        Free_CLI_EventTriggerConfig_r16(value.u.cli_EventTriggered_r16);
        break;
    case ReportConfigNR_ReportType_Tag_rxTxPeriodical_r17:
        Free_RxTxPeriodical_r17(value.u.rxTxPeriodical_r17);
        break;
    case ReportConfigNR_ReportType_Tag_reportOnScellActivation_r18:
        Free_ReportOnScellActivation_r18(value.u.reportOnScellActivation_r18);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ReportConfigNR：ASN.1 ReportConfigNR；源文件第 11388 行；SEQUENCE。
// Encode_ReportConfigNR 只读不分配；Decode_ReportConfigNR 可能 malloc（失败时内部已释放并清零）；Free_ReportConfigNR 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ReportConfigNR(Encoder& enc, const ReportConfigNR& value)
{
    Encode_ReportConfigNR_ReportType(enc, value.reportType);
    return enc.Error();
}

ErrorCode Decode_ReportConfigNR(Decoder& dec, ReportConfigNR& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_ReportConfigNR_ReportType(dec, value.reportType) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReportConfigNR(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReportConfigNR(ReportConfigNR& value)
{
    Free_ReportConfigNR_ReportType(value.reportType);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellIndividualOffsetList_r18：ASN.1 CellIndividualOffsetList-r18；源文件第 11763 行；SEQUENCE。
// Encode_CellIndividualOffsetList_r18 只读不分配；Decode_CellIndividualOffsetList_r18 可能 malloc（失败时内部已释放并清零）；Free_CellIndividualOffsetList_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellIndividualOffsetList_r18(Encoder& enc, const CellIndividualOffsetList_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.physCellId_r18), 0, 1007);
    Encode_Q_OffsetRangeList(enc, value.cellIndividualOffset_r18);
    return enc.Error();
}

ErrorCode Decode_CellIndividualOffsetList_r18(Decoder& dec, CellIndividualOffsetList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
        value.physCellId_r18 = (PhysCellId)tmp_value;
    }
    {
        if (Decode_Q_OffsetRangeList(dec, value.cellIndividualOffset_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CellIndividualOffsetList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellIndividualOffsetList_r18(CellIndividualOffsetList_r18& value)
{
    Free_Q_OffsetRangeList(value.cellIndividualOffset_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasReportQuantity_r16：ASN.1 MeasReportQuantity-r16；源文件第 11805 行；SEQUENCE。
// Encode_MeasReportQuantity_r16 只读不分配；Decode_MeasReportQuantity_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasReportQuantity_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasReportQuantity_r16(Encoder& enc, const MeasReportQuantity_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBool(value.cbr_r16);
    return enc.Error();
}

ErrorCode Decode_MeasReportQuantity_r16(Decoder& dec, MeasReportQuantity_r16& value)
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
        value.cbr_r16 = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasReportQuantity_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasReportQuantity_r16(MeasReportQuantity_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfigNR_SL_r16_EventId_r16_EventC1：ASN.1 eventId-r16/eventC1；源文件第 11780 行；SEQUENCE。
// Encode_EventTriggerConfigNR_SL_r16_EventId_r16_EventC1 只读不分配；Decode_EventTriggerConfigNR_SL_r16_EventId_r16_EventC1 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfigNR_SL_r16_EventId_r16_EventC1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfigNR_SL_r16_EventId_r16_EventC1(Encoder& enc, const EventTriggerConfigNR_SL_r16_EventId_r16_EventC1& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.c1_Threshold_r16), 0, 100);
    enc.WriteConstrainedInteger((std::int64_t)(value.hysteresis_r16), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger_r16), 0, 15);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfigNR_SL_r16_EventId_r16_EventC1(Decoder& dec, EventTriggerConfigNR_SL_r16_EventId_r16_EventC1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 100, tmp_value)) { goto fail; }
        value.c1_Threshold_r16 = (SL_CBR_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.hysteresis_r16 = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger_r16 = (TimeToTrigger)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfigNR_SL_r16_EventId_r16_EventC1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfigNR_SL_r16_EventId_r16_EventC1(EventTriggerConfigNR_SL_r16_EventId_r16_EventC1& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfigNR_SL_r16_EventId_r16_EventC2_r16：ASN.1 eventId-r16/eventC2-r16；源文件第 11785 行；SEQUENCE。
// Encode_EventTriggerConfigNR_SL_r16_EventId_r16_EventC2_r16 只读不分配；Decode_EventTriggerConfigNR_SL_r16_EventId_r16_EventC2_r16 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfigNR_SL_r16_EventId_r16_EventC2_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfigNR_SL_r16_EventId_r16_EventC2_r16(Encoder& enc, const EventTriggerConfigNR_SL_r16_EventId_r16_EventC2_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.c2_Threshold_r16), 0, 100);
    enc.WriteConstrainedInteger((std::int64_t)(value.hysteresis_r16), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger_r16), 0, 15);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfigNR_SL_r16_EventId_r16_EventC2_r16(Decoder& dec, EventTriggerConfigNR_SL_r16_EventId_r16_EventC2_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 100, tmp_value)) { goto fail; }
        value.c2_Threshold_r16 = (SL_CBR_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.hysteresis_r16 = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger_r16 = (TimeToTrigger)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfigNR_SL_r16_EventId_r16_EventC2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfigNR_SL_r16_EventId_r16_EventC2_r16(EventTriggerConfigNR_SL_r16_EventId_r16_EventC2_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfigNR_SL_r16_EventId_r16：ASN.1 eventId-r16；源文件第 11779 行；CHOICE。
// Encode_EventTriggerConfigNR_SL_r16_EventId_r16 只读不分配；Decode_EventTriggerConfigNR_SL_r16_EventId_r16 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfigNR_SL_r16_EventId_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfigNR_SL_r16_EventId_r16(Encoder& enc, const EventTriggerConfigNR_SL_r16_EventId_r16& value)
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
    case EventTriggerConfigNR_SL_r16_EventId_r16_Tag_eventC1:
        Encode_EventTriggerConfigNR_SL_r16_EventId_r16_EventC1(enc, value.u.eventC1);
        break;
    case EventTriggerConfigNR_SL_r16_EventId_r16_Tag_eventC2_r16:
        Encode_EventTriggerConfigNR_SL_r16_EventId_r16_EventC2_r16(enc, value.u.eventC2_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfigNR_SL_r16_EventId_r16(Decoder& dec, EventTriggerConfigNR_SL_r16_EventId_r16& value)
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
        value.tag = (EventTriggerConfigNR_SL_r16_EventId_r16_Tag)(2 + extension_index);
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
    value.tag = (EventTriggerConfigNR_SL_r16_EventId_r16_Tag)root_index;
    switch (value.tag) {
    case EventTriggerConfigNR_SL_r16_EventId_r16_Tag_eventC1: {
        if (Decode_EventTriggerConfigNR_SL_r16_EventId_r16_EventC1(dec, value.u.eventC1) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case EventTriggerConfigNR_SL_r16_EventId_r16_Tag_eventC2_r16: {
        if (Decode_EventTriggerConfigNR_SL_r16_EventId_r16_EventC2_r16(dec, value.u.eventC2_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfigNR_SL_r16_EventId_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfigNR_SL_r16_EventId_r16(EventTriggerConfigNR_SL_r16_EventId_r16& value)
{
    switch (value.tag) {
    case EventTriggerConfigNR_SL_r16_EventId_r16_Tag_eventC1:
        Free_EventTriggerConfigNR_SL_r16_EventId_r16_EventC1(value.u.eventC1);
        break;
    case EventTriggerConfigNR_SL_r16_EventId_r16_Tag_eventC2_r16:
        Free_EventTriggerConfigNR_SL_r16_EventId_r16_EventC2_r16(value.u.eventC2_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventTriggerConfigNR_SL_r16：ASN.1 EventTriggerConfigNR-SL-r16；源文件第 11778 行；SEQUENCE。
// Encode_EventTriggerConfigNR_SL_r16 只读不分配；Decode_EventTriggerConfigNR_SL_r16 可能 malloc（失败时内部已释放并清零）；Free_EventTriggerConfigNR_SL_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventTriggerConfigNR_SL_r16(Encoder& enc, const EventTriggerConfigNR_SL_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_EventTriggerConfigNR_SL_r16_EventId_r16(enc, value.eventId_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.reportInterval_r16), 0, 13);
    enc.WriteConstrainedInteger((std::int64_t)(value.reportAmount_r16), 0, 7);
    Encode_MeasReportQuantity_r16(enc, value.reportQuantity_r16);
    return enc.Error();
}

ErrorCode Decode_EventTriggerConfigNR_SL_r16(Decoder& dec, EventTriggerConfigNR_SL_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_EventTriggerConfigNR_SL_r16_EventId_r16(dec, value.eventId_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.reportInterval_r16 = (ReportInterval)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.reportAmount_r16 = (EventTriggerConfigNR_SL_r16_ReportAmount_r16)tmp_value;
    }
    {
        if (Decode_MeasReportQuantity_r16(dec, value.reportQuantity_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventTriggerConfigNR_SL_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventTriggerConfigNR_SL_r16(EventTriggerConfigNR_SL_r16& value)
{
    Free_EventTriggerConfigNR_SL_r16_EventId_r16(value.eventId_r16);
    Free_MeasReportQuantity_r16(value.reportQuantity_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PeriodicalReportConfigNR_SL_r16：ASN.1 PeriodicalReportConfigNR-SL-r16；源文件第 11798 行；SEQUENCE。
// Encode_PeriodicalReportConfigNR_SL_r16 只读不分配；Decode_PeriodicalReportConfigNR_SL_r16 可能 malloc（失败时内部已释放并清零）；Free_PeriodicalReportConfigNR_SL_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PeriodicalReportConfigNR_SL_r16(Encoder& enc, const PeriodicalReportConfigNR_SL_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.reportInterval_r16), 0, 13);
    enc.WriteConstrainedInteger((std::int64_t)(value.reportAmount_r16), 0, 7);
    Encode_MeasReportQuantity_r16(enc, value.reportQuantity_r16);
    return enc.Error();
}

ErrorCode Decode_PeriodicalReportConfigNR_SL_r16(Decoder& dec, PeriodicalReportConfigNR_SL_r16& value)
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
        value.reportInterval_r16 = (ReportInterval)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.reportAmount_r16 = (PeriodicalReportConfigNR_SL_r16_ReportAmount_r16)tmp_value;
    }
    {
        if (Decode_MeasReportQuantity_r16(dec, value.reportQuantity_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PeriodicalReportConfigNR_SL_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PeriodicalReportConfigNR_SL_r16(PeriodicalReportConfigNR_SL_r16& value)
{
    Free_MeasReportQuantity_r16(value.reportQuantity_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ReportConfigNR_SL_r16_ReportType_r16：ASN.1 reportType-r16；源文件第 11772 行；CHOICE。
// Encode_ReportConfigNR_SL_r16_ReportType_r16 只读不分配；Decode_ReportConfigNR_SL_r16_ReportType_r16 可能 malloc（失败时内部已释放并清零）；Free_ReportConfigNR_SL_r16_ReportType_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ReportConfigNR_SL_r16_ReportType_r16(Encoder& enc, const ReportConfigNR_SL_r16_ReportType_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case ReportConfigNR_SL_r16_ReportType_r16_Tag_periodical_r16:
        Encode_PeriodicalReportConfigNR_SL_r16(enc, value.u.periodical_r16);
        break;
    case ReportConfigNR_SL_r16_ReportType_r16_Tag_eventTriggered_r16:
        Encode_EventTriggerConfigNR_SL_r16(enc, value.u.eventTriggered_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_ReportConfigNR_SL_r16_ReportType_r16(Decoder& dec, ReportConfigNR_SL_r16_ReportType_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (ReportConfigNR_SL_r16_ReportType_r16_Tag)root_index;
    switch (value.tag) {
    case ReportConfigNR_SL_r16_ReportType_r16_Tag_periodical_r16: {
        if (Decode_PeriodicalReportConfigNR_SL_r16(dec, value.u.periodical_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case ReportConfigNR_SL_r16_ReportType_r16_Tag_eventTriggered_r16: {
        if (Decode_EventTriggerConfigNR_SL_r16(dec, value.u.eventTriggered_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReportConfigNR_SL_r16_ReportType_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReportConfigNR_SL_r16_ReportType_r16(ReportConfigNR_SL_r16_ReportType_r16& value)
{
    switch (value.tag) {
    case ReportConfigNR_SL_r16_ReportType_r16_Tag_periodical_r16:
        Free_PeriodicalReportConfigNR_SL_r16(value.u.periodical_r16);
        break;
    case ReportConfigNR_SL_r16_ReportType_r16_Tag_eventTriggered_r16:
        Free_EventTriggerConfigNR_SL_r16(value.u.eventTriggered_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ReportConfigNR_SL_r16：ASN.1 ReportConfigNR-SL-r16；源文件第 11771 行；SEQUENCE。
// Encode_ReportConfigNR_SL_r16 只读不分配；Decode_ReportConfigNR_SL_r16 可能 malloc（失败时内部已释放并清零）；Free_ReportConfigNR_SL_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ReportConfigNR_SL_r16(Encoder& enc, const ReportConfigNR_SL_r16& value)
{
    Encode_ReportConfigNR_SL_r16_ReportType_r16(enc, value.reportType_r16);
    return enc.Error();
}

ErrorCode Decode_ReportConfigNR_SL_r16(Decoder& dec, ReportConfigNR_SL_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_ReportConfigNR_SL_r16_ReportType_r16(dec, value.reportType_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReportConfigNR_SL_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReportConfigNR_SL_r16(ReportConfigNR_SL_r16& value)
{
    Free_ReportConfigNR_SL_r16_ReportType_r16(value.reportType_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ReportConfigToAddMod_ReportConfig：ASN.1 reportConfig；源文件第 11817 行；CHOICE。
// Encode_ReportConfigToAddMod_ReportConfig 只读不分配；Decode_ReportConfigToAddMod_ReportConfig 可能 malloc（失败时内部已释放并清零）；Free_ReportConfigToAddMod_ReportConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ReportConfigToAddMod_ReportConfig(Encoder& enc, const ReportConfigToAddMod_ReportConfig& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 1) {
        if (choice_index >= 3) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 1));
        Encoder sub;
        switch (value.tag) {
        case ReportConfigToAddMod_ReportConfig_Tag_reportConfigInterRAT:
            Encode_ReportConfigInterRAT(sub, value.u.reportConfigInterRAT);
            break;
        case ReportConfigToAddMod_ReportConfig_Tag_reportConfigNR_SL_r16:
            Encode_ReportConfigNR_SL_r16(sub, value.u.reportConfigNR_SL_r16);
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
    switch (value.tag) {
    case ReportConfigToAddMod_ReportConfig_Tag_reportConfigNR:
        Encode_ReportConfigNR(enc, value.u.reportConfigNR);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_ReportConfigToAddMod_ReportConfig(Decoder& dec, ReportConfigToAddMod_ReportConfig& value)
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
        if (extension_index >= 2u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        value.tag = (ReportConfigToAddMod_ReportConfig_Tag)(1 + extension_index);
        std::vector<std::uint8_t> open_bytes;
        if (!dec.ReadOpenType(open_bytes)) { goto fail; }
        Decoder sub(open_bytes.data(), open_bytes.size());
        switch (value.tag) {
        case ReportConfigToAddMod_ReportConfig_Tag_reportConfigInterRAT: {
            if (Decode_ReportConfigInterRAT(sub, value.u.reportConfigInterRAT) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case ReportConfigToAddMod_ReportConfig_Tag_reportConfigNR_SL_r16: {
            if (Decode_ReportConfigNR_SL_r16(sub, value.u.reportConfigNR_SL_r16) != ErrorCode_Ok) { goto fail; }
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
    value.tag = (ReportConfigToAddMod_ReportConfig_Tag)0;
    switch (value.tag) {
    case ReportConfigToAddMod_ReportConfig_Tag_reportConfigNR: {
        if (Decode_ReportConfigNR(dec, value.u.reportConfigNR) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReportConfigToAddMod_ReportConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReportConfigToAddMod_ReportConfig(ReportConfigToAddMod_ReportConfig& value)
{
    switch (value.tag) {
    case ReportConfigToAddMod_ReportConfig_Tag_reportConfigNR:
        Free_ReportConfigNR(value.u.reportConfigNR);
        break;
    case ReportConfigToAddMod_ReportConfig_Tag_reportConfigInterRAT:
        Free_ReportConfigInterRAT(value.u.reportConfigInterRAT);
        break;
    case ReportConfigToAddMod_ReportConfig_Tag_reportConfigNR_SL_r16:
        Free_ReportConfigNR_SL_r16(value.u.reportConfigNR_SL_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ReportConfigToAddMod：ASN.1 ReportConfigToAddMod；源文件第 11815 行；SEQUENCE。
// Encode_ReportConfigToAddMod 只读不分配；Decode_ReportConfigToAddMod 可能 malloc（失败时内部已释放并清零）；Free_ReportConfigToAddMod 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ReportConfigToAddMod(Encoder& enc, const ReportConfigToAddMod& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.reportConfigId), 1, 64);
    Encode_ReportConfigToAddMod_ReportConfig(enc, value.reportConfig);
    return enc.Error();
}

ErrorCode Decode_ReportConfigToAddMod(Decoder& dec, ReportConfigToAddMod& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.reportConfigId = (ReportConfigId)tmp_value;
    }
    {
        if (Decode_ReportConfigToAddMod_ReportConfig(dec, value.reportConfig) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReportConfigToAddMod(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReportConfigToAddMod(ReportConfigToAddMod& value)
{
    Free_ReportConfigToAddMod_ReportConfig(value.reportConfig);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DL_AM_RLC_v1610：ASN.1 DL-AM-RLC-v1610；源文件第 11985 行；SEQUENCE。
// Encode_DL_AM_RLC_v1610 只读不分配；Decode_DL_AM_RLC_v1610 可能 malloc（失败时内部已释放并清零）；Free_DL_AM_RLC_v1610 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DL_AM_RLC_v1610(Encoder& enc, const DL_AM_RLC_v1610& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_t_StatusProhibit_v1610);
    if (value.has_t_StatusProhibit_v1610) {
        enc.WriteConstrainedInteger((std::int64_t)(value.t_StatusProhibit_v1610), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_DL_AM_RLC_v1610(Decoder& dec, DL_AM_RLC_v1610& value)
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
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.t_StatusProhibit_v1610 = (T_StatusProhibit_v1610)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DL_AM_RLC_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DL_AM_RLC_v1610(DL_AM_RLC_v1610& value)
{
    if (value.has_t_StatusProhibit_v1610) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLC_Config_v1610：ASN.1 RLC-Config-v1610；源文件第 11976 行；SEQUENCE。
// Encode_RLC_Config_v1610 只读不分配；Decode_RLC_Config_v1610 可能 malloc（失败时内部已释放并清零）；Free_RLC_Config_v1610 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLC_Config_v1610(Encoder& enc, const RLC_Config_v1610& value)
{
    Encode_DL_AM_RLC_v1610(enc, value.dl_AM_RLC_v1610);
    return enc.Error();
}

ErrorCode Decode_RLC_Config_v1610(Decoder& dec, RLC_Config_v1610& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_DL_AM_RLC_v1610(dec, value.dl_AM_RLC_v1610) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLC_Config_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLC_Config_v1610(RLC_Config_v1610& value)
{
    Free_DL_AM_RLC_v1610(value.dl_AM_RLC_v1610);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLC_BearerConfig_ExtGroup1：ASN.1 RLC_BearerConfig_ExtGroup1；源文件第 11861 行；扩展添加组 [[ ]]。
// Encode_RLC_BearerConfig_ExtGroup1 只读不分配；Decode_RLC_BearerConfig_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_RLC_BearerConfig_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLC_BearerConfig_ExtGroup1(Encoder& enc, const RLC_BearerConfig_ExtGroup1& value)
{
    enc.WriteBit(value.has_rlc_Config_v1610);
    if (value.has_rlc_Config_v1610) {
        Encode_RLC_Config_v1610(enc, value.rlc_Config_v1610);
    }
    return enc.Error();
}

ErrorCode Decode_RLC_BearerConfig_ExtGroup1(Decoder& dec, RLC_BearerConfig_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_RLC_Config_v1610(dec, value.rlc_Config_v1610) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLC_BearerConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLC_BearerConfig_ExtGroup1(RLC_BearerConfig_ExtGroup1& value)
{
    if (value.has_rlc_Config_v1610) {
        Free_RLC_Config_v1610(value.rlc_Config_v1610);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MulticastRLC_BearerConfig_r17：ASN.1 MulticastRLC-BearerConfig-r17；源文件第 11872 行；SEQUENCE。
// Encode_MulticastRLC_BearerConfig_r17 只读不分配；Decode_MulticastRLC_BearerConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_MulticastRLC_BearerConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MulticastRLC_BearerConfig_r17(Encoder& enc, const MulticastRLC_BearerConfig_r17& value)
{
    enc.WriteBit(value.has_isPTM_Entity_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.servedMBS_RadioBearer_r17), 1, 512);
    if (value.has_isPTM_Entity_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.isPTM_Entity_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MulticastRLC_BearerConfig_r17(Decoder& dec, MulticastRLC_BearerConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 512, tmp_value)) { goto fail; }
        value.servedMBS_RadioBearer_r17 = (MRB_Identity_r17)tmp_value;
    }
    if (present_0) {
        value.isPTM_Entity_r17 = (MulticastRLC_BearerConfig_r17_IsPTM_Entity_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MulticastRLC_BearerConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MulticastRLC_BearerConfig_r17(MulticastRLC_BearerConfig_r17& value)
{
    if (value.has_isPTM_Entity_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DL_AM_RLC_v1700：ASN.1 DL-AM-RLC-v1700；源文件第 11990 行；SEQUENCE。
// Encode_DL_AM_RLC_v1700 只读不分配；Decode_DL_AM_RLC_v1700 可能 malloc（失败时内部已释放并清零）；Free_DL_AM_RLC_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DL_AM_RLC_v1700(Encoder& enc, const DL_AM_RLC_v1700& value)
{
    enc.WriteBit(value.has_t_ReassemblyExt_r17);
    if (value.has_t_ReassemblyExt_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.t_ReassemblyExt_r17), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_DL_AM_RLC_v1700(Decoder& dec, DL_AM_RLC_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.t_ReassemblyExt_r17 = (T_ReassemblyExt_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DL_AM_RLC_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DL_AM_RLC_v1700(DL_AM_RLC_v1700& value)
{
    if (value.has_t_ReassemblyExt_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DL_UM_RLC_v1700：ASN.1 DL-UM-RLC-v1700；源文件第 11994 行；SEQUENCE。
// Encode_DL_UM_RLC_v1700 只读不分配；Decode_DL_UM_RLC_v1700 可能 malloc（失败时内部已释放并清零）；Free_DL_UM_RLC_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DL_UM_RLC_v1700(Encoder& enc, const DL_UM_RLC_v1700& value)
{
    enc.WriteBit(value.has_t_ReassemblyExt_r17);
    if (value.has_t_ReassemblyExt_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.t_ReassemblyExt_r17), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_DL_UM_RLC_v1700(Decoder& dec, DL_UM_RLC_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.t_ReassemblyExt_r17 = (T_ReassemblyExt_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DL_UM_RLC_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DL_UM_RLC_v1700(DL_UM_RLC_v1700& value)
{
    if (value.has_t_ReassemblyExt_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLC_Config_v1700：ASN.1 RLC-Config-v1700；源文件第 11980 行；SEQUENCE。
// Encode_RLC_Config_v1700 只读不分配；Decode_RLC_Config_v1700 可能 malloc（失败时内部已释放并清零）；Free_RLC_Config_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLC_Config_v1700(Encoder& enc, const RLC_Config_v1700& value)
{
    Encode_DL_AM_RLC_v1700(enc, value.dl_AM_RLC_v1700);
    Encode_DL_UM_RLC_v1700(enc, value.dl_UM_RLC_v1700);
    return enc.Error();
}

ErrorCode Decode_RLC_Config_v1700(Decoder& dec, RLC_Config_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_DL_AM_RLC_v1700(dec, value.dl_AM_RLC_v1700) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_DL_UM_RLC_v1700(dec, value.dl_UM_RLC_v1700) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLC_Config_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLC_Config_v1700(RLC_Config_v1700& value)
{
    Free_DL_AM_RLC_v1700(value.dl_AM_RLC_v1700);
    Free_DL_UM_RLC_v1700(value.dl_UM_RLC_v1700);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLC_BearerConfig_ExtGroup2：ASN.1 RLC_BearerConfig_ExtGroup2；源文件第 11864 行；扩展添加组 [[ ]]。
// Encode_RLC_BearerConfig_ExtGroup2 只读不分配；Decode_RLC_BearerConfig_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_RLC_BearerConfig_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLC_BearerConfig_ExtGroup2(Encoder& enc, const RLC_BearerConfig_ExtGroup2& value)
{
    enc.WriteBit(value.has_rlc_Config_v1700);
    enc.WriteBit(value.has_logicalChannelIdentityExt_r17);
    enc.WriteBit(value.has_multicastRLC_BearerConfig_r17);
    enc.WriteBit(value.has_servedRadioBearerSRB4_r17);
    if (value.has_rlc_Config_v1700) {
        Encode_RLC_Config_v1700(enc, value.rlc_Config_v1700);
    }
    if (value.has_logicalChannelIdentityExt_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.logicalChannelIdentityExt_r17), 320, 65855);
    }
    if (value.has_multicastRLC_BearerConfig_r17) {
        Encode_MulticastRLC_BearerConfig_r17(enc, value.multicastRLC_BearerConfig_r17);
    }
    if (value.has_servedRadioBearerSRB4_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.servedRadioBearerSRB4_r17), 4, 4);
    }
    return enc.Error();
}

ErrorCode Decode_RLC_BearerConfig_ExtGroup2(Decoder& dec, RLC_BearerConfig_ExtGroup2& value)
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
        if (Decode_RLC_Config_v1700(dec, value.rlc_Config_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(320, 65855, tmp_value)) { goto fail; }
        value.logicalChannelIdentityExt_r17 = (LogicalChannelIdentityExt_r17)tmp_value;
    }
    if (present_2) {
        if (Decode_MulticastRLC_BearerConfig_r17(dec, value.multicastRLC_BearerConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(4, 4, tmp_value)) { goto fail; }
        value.servedRadioBearerSRB4_r17 = (SRB_Identity_v1700)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLC_BearerConfig_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLC_BearerConfig_ExtGroup2(RLC_BearerConfig_ExtGroup2& value)
{
    if (value.has_rlc_Config_v1700) {
        Free_RLC_Config_v1700(value.rlc_Config_v1700);
    }
    if (value.has_logicalChannelIdentityExt_r17) {
    }
    if (value.has_multicastRLC_BearerConfig_r17) {
        Free_MulticastRLC_BearerConfig_r17(value.multicastRLC_BearerConfig_r17);
    }
    if (value.has_servedRadioBearerSRB4_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLC_BearerConfig_ServedRadioBearer：ASN.1 servedRadioBearer；源文件第 11853 行；CHOICE。
// Encode_RLC_BearerConfig_ServedRadioBearer 只读不分配；Decode_RLC_BearerConfig_ServedRadioBearer 可能 malloc（失败时内部已释放并清零）；Free_RLC_BearerConfig_ServedRadioBearer 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLC_BearerConfig_ServedRadioBearer(Encoder& enc, const RLC_BearerConfig_ServedRadioBearer& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RLC_BearerConfig_ServedRadioBearer_Tag_srb_Identity:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.srb_Identity), 1, 3);
        break;
    case RLC_BearerConfig_ServedRadioBearer_Tag_drb_Identity:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.drb_Identity), 1, 32);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RLC_BearerConfig_ServedRadioBearer(Decoder& dec, RLC_BearerConfig_ServedRadioBearer& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RLC_BearerConfig_ServedRadioBearer_Tag)root_index;
    switch (value.tag) {
    case RLC_BearerConfig_ServedRadioBearer_Tag_srb_Identity: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 3, tmp_value)) { goto fail; }
        value.u.srb_Identity = (SRB_Identity)tmp_value;
        break;
    }
    case RLC_BearerConfig_ServedRadioBearer_Tag_drb_Identity: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.u.drb_Identity = (DRB_Identity)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLC_BearerConfig_ServedRadioBearer(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLC_BearerConfig_ServedRadioBearer(RLC_BearerConfig_ServedRadioBearer& value)
{
    switch (value.tag) {
    case RLC_BearerConfig_ServedRadioBearer_Tag_srb_Identity:
        break;
    case RLC_BearerConfig_ServedRadioBearer_Tag_drb_Identity:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLC_BearerConfig：ASN.1 RLC-BearerConfig；源文件第 11851 行；SEQUENCE。
// Encode_RLC_BearerConfig 只读不分配；Decode_RLC_BearerConfig 可能 malloc（失败时内部已释放并清零）；Free_RLC_BearerConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLC_BearerConfig(Encoder& enc, const RLC_BearerConfig& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_servedRadioBearer);
    enc.WriteBit(value.has_reestablishRLC);
    enc.WriteBit(value.has_rlc_Config);
    enc.WriteBit(value.has_mac_LogicalChannelConfig);
    enc.WriteConstrainedInteger((std::int64_t)(value.logicalChannelIdentity), 1, 32);
    if (value.has_servedRadioBearer) {
        Encode_RLC_BearerConfig_ServedRadioBearer(enc, value.servedRadioBearer);
    }
    if (value.has_reestablishRLC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.reestablishRLC), 0, 0);
    }
    if (value.has_rlc_Config) {
        Encode_RLC_Config(enc, value.rlc_Config);
    }
    if (value.has_mac_LogicalChannelConfig) {
        Encode_LogicalChannelConfig(enc, value.mac_LogicalChannelConfig);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_RLC_BearerConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_RLC_BearerConfig_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_RLC_BearerConfig(Decoder& dec, RLC_BearerConfig& value)
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
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.logicalChannelIdentity = (LogicalChannelIdentity)tmp_value;
    }
    if (present_0) {
        if (Decode_RLC_BearerConfig_ServedRadioBearer(dec, value.servedRadioBearer) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.reestablishRLC = (RLC_BearerConfig_ReestablishRLC)0;
    }
    if (present_2) {
        if (Decode_RLC_Config(dec, value.rlc_Config) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_LogicalChannelConfig(dec, value.mac_LogicalChannelConfig) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_RLC_BearerConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_RLC_BearerConfig_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_RLC_BearerConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLC_BearerConfig(RLC_BearerConfig& value)
{
    if (value.has_servedRadioBearer) {
        Free_RLC_BearerConfig_ServedRadioBearer(value.servedRadioBearer);
    }
    if (value.has_reestablishRLC) {
    }
    if (value.has_rlc_Config) {
        Free_RLC_Config(value.rlc_Config);
    }
    if (value.has_mac_LogicalChannelConfig) {
        Free_LogicalChannelConfig(value.mac_LogicalChannelConfig);
    }
    if (value.has_extGroup1) {
        Free_RLC_BearerConfig_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_RLC_BearerConfig_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SCellActivationRS_Config_r17：ASN.1 SCellActivationRS-Config-r17；源文件第 12046 行；SEQUENCE。
// Encode_SCellActivationRS_Config_r17 只读不分配；Decode_SCellActivationRS_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_SCellActivationRS_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SCellActivationRS_Config_r17(Encoder& enc, const SCellActivationRS_Config_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_gapBetweenBursts_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.scellActivationRS_Id_r17), 1, 255);
    enc.WriteConstrainedInteger((std::int64_t)(value.resourceSet_r17), 0, 63);
    if (value.has_gapBetweenBursts_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.gapBetweenBursts_r17), 2, 31);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.qcl_Info_r17), 0, 127);
    return enc.Error();
}

ErrorCode Decode_SCellActivationRS_Config_r17(Decoder& dec, SCellActivationRS_Config_r17& value)
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
        if (!dec.ReadConstrainedInteger(1, 255, tmp_value)) { goto fail; }
        value.scellActivationRS_Id_r17 = (SCellActivationRS_ConfigId_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.resourceSet_r17 = (NZP_CSI_RS_ResourceSetId)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 31, tmp_value)) { goto fail; }
        value.gapBetweenBursts_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.qcl_Info_r17 = (TCI_StateId)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SCellActivationRS_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SCellActivationRS_Config_r17(SCellActivationRS_Config_r17& value)
{
    if (value.has_gapBetweenBursts_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SchedulingRequestToAddMod：ASN.1 SchedulingRequestToAddMod；源文件第 12074 行；SEQUENCE。
// Encode_SchedulingRequestToAddMod 只读不分配；Decode_SchedulingRequestToAddMod 可能 malloc（失败时内部已释放并清零）；Free_SchedulingRequestToAddMod 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SchedulingRequestToAddMod(Encoder& enc, const SchedulingRequestToAddMod& value)
{
    enc.WriteBit(value.has_sr_ProhibitTimer);
    enc.WriteConstrainedInteger((std::int64_t)(value.schedulingRequestId), 0, 7);
    if (value.has_sr_ProhibitTimer) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sr_ProhibitTimer), 0, 7);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.sr_TransMax), 0, 7);
    return enc.Error();
}

ErrorCode Decode_SchedulingRequestToAddMod(Decoder& dec, SchedulingRequestToAddMod& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.schedulingRequestId = (SchedulingRequestId)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sr_ProhibitTimer = (SchedulingRequestToAddMod_Sr_ProhibitTimer)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sr_TransMax = (SchedulingRequestToAddMod_Sr_TransMax)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SchedulingRequestToAddMod(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SchedulingRequestToAddMod(SchedulingRequestToAddMod& value)
{
    if (value.has_sr_ProhibitTimer) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SchedulingRequestToAddModExt_v1700：ASN.1 SchedulingRequestToAddModExt-v1700；源文件第 12085 行；SEQUENCE。
// Encode_SchedulingRequestToAddModExt_v1700 只读不分配；Decode_SchedulingRequestToAddModExt_v1700 可能 malloc（失败时内部已释放并清零）；Free_SchedulingRequestToAddModExt_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SchedulingRequestToAddModExt_v1700(Encoder& enc, const SchedulingRequestToAddModExt_v1700& value)
{
    enc.WriteBit(value.has_sr_ProhibitTimer_v1700);
    if (value.has_sr_ProhibitTimer_v1700) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sr_ProhibitTimer_v1700), 0, 15);
    }
    return enc.Error();
}

ErrorCode Decode_SchedulingRequestToAddModExt_v1700(Decoder& dec, SchedulingRequestToAddModExt_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.sr_ProhibitTimer_v1700 = (SchedulingRequestToAddModExt_v1700_Sr_ProhibitTimer_v1700)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SchedulingRequestToAddModExt_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SchedulingRequestToAddModExt_v1700(SchedulingRequestToAddModExt_v1700& value)
{
    if (value.has_sr_ProhibitTimer_v1700) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SchedulingRequestResourceConfig_PeriodicityAndOffset：ASN.1 periodicityAndOffset；源文件第 12101 行；CHOICE。
// Encode_SchedulingRequestResourceConfig_PeriodicityAndOffset 只读不分配；Decode_SchedulingRequestResourceConfig_PeriodicityAndOffset 可能 malloc（失败时内部已释放并清零）；Free_SchedulingRequestResourceConfig_PeriodicityAndOffset 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SchedulingRequestResourceConfig_PeriodicityAndOffset(Encoder& enc, const SchedulingRequestResourceConfig_PeriodicityAndOffset& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 14);
    switch (value.tag) {
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sym2:
        (void)0;
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sym6or7:
        (void)0;
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl1:
        (void)0;
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl2:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl2), 0, 1);
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl4:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl4), 0, 3);
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl5:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl5), 0, 4);
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl8:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl8), 0, 7);
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl10:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl10), 0, 9);
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl16), 0, 15);
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl20:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl20), 0, 19);
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl40:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl40), 0, 39);
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl80:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl80), 0, 79);
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl160:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl160), 0, 159);
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl320:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl320), 0, 319);
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl640:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl640), 0, 639);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SchedulingRequestResourceConfig_PeriodicityAndOffset(Decoder& dec, SchedulingRequestResourceConfig_PeriodicityAndOffset& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 14, root_index)) {
        goto fail;
    }
    value.tag = (SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag)root_index;
    switch (value.tag) {
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sym2: {
        (void)0;
        break;
    }
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sym6or7: {
        (void)0;
        break;
    }
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl1: {
        (void)0;
        break;
    }
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl2: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.u.sl2 = (int64_t)tmp_value;
        break;
    }
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl4: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.sl4 = (int64_t)tmp_value;
        break;
    }
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl5: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.u.sl5 = (int64_t)tmp_value;
        break;
    }
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl8: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.u.sl8 = (int64_t)tmp_value;
        break;
    }
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl10: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.u.sl10 = (int64_t)tmp_value;
        break;
    }
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.sl16 = (int64_t)tmp_value;
        break;
    }
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl20: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 19, tmp_value)) { goto fail; }
        value.u.sl20 = (int64_t)tmp_value;
        break;
    }
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl40: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.sl40 = (int64_t)tmp_value;
        break;
    }
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl80: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.sl80 = (int64_t)tmp_value;
        break;
    }
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl160: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.u.sl160 = (int64_t)tmp_value;
        break;
    }
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl320: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.u.sl320 = (int64_t)tmp_value;
        break;
    }
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl640: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.u.sl640 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SchedulingRequestResourceConfig_PeriodicityAndOffset(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SchedulingRequestResourceConfig_PeriodicityAndOffset(SchedulingRequestResourceConfig_PeriodicityAndOffset& value)
{
    switch (value.tag) {
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sym2:
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sym6or7:
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl1:
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl2:
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl4:
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl5:
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl8:
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl10:
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl16:
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl20:
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl40:
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl80:
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl160:
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl320:
        break;
    case SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl640:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SchedulingRequestResourceConfig：ASN.1 SchedulingRequestResourceConfig；源文件第 12098 行；SEQUENCE。
// Encode_SchedulingRequestResourceConfig 只读不分配；Decode_SchedulingRequestResourceConfig 可能 malloc（失败时内部已释放并清零）；Free_SchedulingRequestResourceConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SchedulingRequestResourceConfig(Encoder& enc, const SchedulingRequestResourceConfig& value)
{
    enc.WriteBit(value.has_periodicityAndOffset);
    enc.WriteBit(value.has_resource);
    enc.WriteConstrainedInteger((std::int64_t)(value.schedulingRequestResourceId), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.schedulingRequestID), 0, 7);
    if (value.has_periodicityAndOffset) {
        Encode_SchedulingRequestResourceConfig_PeriodicityAndOffset(enc, value.periodicityAndOffset);
    }
    if (value.has_resource) {
        enc.WriteConstrainedInteger((std::int64_t)(value.resource), 0, 127);
    }
    return enc.Error();
}

ErrorCode Decode_SchedulingRequestResourceConfig(Decoder& dec, SchedulingRequestResourceConfig& value)
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
        value.schedulingRequestResourceId = (SchedulingRequestResourceId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.schedulingRequestID = (SchedulingRequestId)tmp_value;
    }
    if (present_0) {
        if (Decode_SchedulingRequestResourceConfig_PeriodicityAndOffset(dec, value.periodicityAndOffset) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.resource = (PUCCH_ResourceId)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SchedulingRequestResourceConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SchedulingRequestResourceConfig(SchedulingRequestResourceConfig& value)
{
    if (value.has_periodicityAndOffset) {
        Free_SchedulingRequestResourceConfig_PeriodicityAndOffset(value.periodicityAndOffset);
    }
    if (value.has_resource) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SchedulingRequestResourceConfigExt_v1610：ASN.1 SchedulingRequestResourceConfigExt-v1610；源文件第 12121 行；SEQUENCE。
// Encode_SchedulingRequestResourceConfigExt_v1610 只读不分配；Decode_SchedulingRequestResourceConfigExt_v1610 可能 malloc（失败时内部已释放并清零）；Free_SchedulingRequestResourceConfigExt_v1610 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SchedulingRequestResourceConfigExt_v1610(Encoder& enc, const SchedulingRequestResourceConfigExt_v1610& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_phy_PriorityIndex_r16);
    if (value.has_phy_PriorityIndex_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.phy_PriorityIndex_r16), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_SchedulingRequestResourceConfigExt_v1610(Decoder& dec, SchedulingRequestResourceConfigExt_v1610& value)
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
        value.phy_PriorityIndex_r16 = (SchedulingRequestResourceConfigExt_v1610_Phy_PriorityIndex_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SchedulingRequestResourceConfigExt_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SchedulingRequestResourceConfigExt_v1610(SchedulingRequestResourceConfigExt_v1610& value)
{
    if (value.has_phy_PriorityIndex_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17：ASN.1 periodicityAndOffset-r17；源文件第 12127 行；CHOICE。
// Encode_SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17 只读不分配；Decode_SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17 可能 malloc（失败时内部已释放并清零）；Free_SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17(Encoder& enc, const SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17_Tag_sl1280:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl1280), 0, 1279);
        break;
    case SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17_Tag_sl2560:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl2560), 0, 2559);
        break;
    case SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17_Tag_sl5120:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl5120), 0, 5119);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17(Decoder& dec, SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17_Tag)root_index;
    switch (value.tag) {
    case SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17_Tag_sl1280: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1279, tmp_value)) { goto fail; }
        value.u.sl1280 = (int64_t)tmp_value;
        break;
    }
    case SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17_Tag_sl2560: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2559, tmp_value)) { goto fail; }
        value.u.sl2560 = (int64_t)tmp_value;
        break;
    }
    case SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17_Tag_sl5120: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5119, tmp_value)) { goto fail; }
        value.u.sl5120 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17(SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17& value)
{
    switch (value.tag) {
    case SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17_Tag_sl1280:
        break;
    case SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17_Tag_sl2560:
        break;
    case SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17_Tag_sl5120:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SchedulingRequestResourceConfigExt_v1700：ASN.1 SchedulingRequestResourceConfigExt-v1700；源文件第 12126 行；SEQUENCE。
// Encode_SchedulingRequestResourceConfigExt_v1700 只读不分配；Decode_SchedulingRequestResourceConfigExt_v1700 可能 malloc（失败时内部已释放并清零）；Free_SchedulingRequestResourceConfigExt_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SchedulingRequestResourceConfigExt_v1700(Encoder& enc, const SchedulingRequestResourceConfigExt_v1700& value)
{
    enc.WriteBit(value.has_periodicityAndOffset_r17);
    if (value.has_periodicityAndOffset_r17) {
        Encode_SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17(enc, value.periodicityAndOffset_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SchedulingRequestResourceConfigExt_v1700(Decoder& dec, SchedulingRequestResourceConfigExt_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17(dec, value.periodicityAndOffset_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SchedulingRequestResourceConfigExt_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SchedulingRequestResourceConfigExt_v1700(SchedulingRequestResourceConfigExt_v1700& value)
{
    if (value.has_periodicityAndOffset_r17) {
        Free_SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17(value.periodicityAndOffset_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SCS_SpecificCarrier_ExtGroup1：ASN.1 SCS_SpecificCarrier_ExtGroup1；源文件第 12152 行；扩展添加组 [[ ]]。
// Encode_SCS_SpecificCarrier_ExtGroup1 只读不分配；Decode_SCS_SpecificCarrier_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SCS_SpecificCarrier_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SCS_SpecificCarrier_ExtGroup1(Encoder& enc, const SCS_SpecificCarrier_ExtGroup1& value)
{
    enc.WriteBit(value.has_txDirectCurrentLocation);
    if (value.has_txDirectCurrentLocation) {
        enc.WriteConstrainedInteger((std::int64_t)(value.txDirectCurrentLocation), 0, 4095);
    }
    return enc.Error();
}

ErrorCode Decode_SCS_SpecificCarrier_ExtGroup1(Decoder& dec, SCS_SpecificCarrier_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4095, tmp_value)) { goto fail; }
        value.txDirectCurrentLocation = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SCS_SpecificCarrier_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SCS_SpecificCarrier_ExtGroup1(SCS_SpecificCarrier_ExtGroup1& value)
{
    if (value.has_txDirectCurrentLocation) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SCS_SpecificCarrier：ASN.1 SCS-SpecificCarrier；源文件第 12147 行；SEQUENCE。
// Encode_SCS_SpecificCarrier 只读不分配；Decode_SCS_SpecificCarrier 可能 malloc（失败时内部已释放并清零）；Free_SCS_SpecificCarrier 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SCS_SpecificCarrier(Encoder& enc, const SCS_SpecificCarrier& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.offsetToCarrier), 0, 2199);
    enc.WriteConstrainedInteger((std::int64_t)(value.subcarrierSpacing), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierBandwidth), 1, 275);
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SCS_SpecificCarrier_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SCS_SpecificCarrier(Decoder& dec, SCS_SpecificCarrier& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2199, tmp_value)) { goto fail; }
        value.offsetToCarrier = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.subcarrierSpacing = (SubcarrierSpacing)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 275, tmp_value)) { goto fail; }
        value.carrierBandwidth = (int64_t)tmp_value;
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
    if (Decode_SCS_SpecificCarrier_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_SCS_SpecificCarrier(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SCS_SpecificCarrier(SCS_SpecificCarrier& value)
{
    if (value.has_extGroup1) {
        Free_SCS_SpecificCarrier_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16：ASN.1 searchSpaceType-r16/common-r16/dci-Format2-4-r16/nrofCandidates-CI-r16；源文件第 12252 行；SEQUENCE。
// Encode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16 只读不分配；Decode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16(Encoder& enc, const SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16& value)
{
    enc.WriteBit(value.has_aggregationLevel1_r16);
    enc.WriteBit(value.has_aggregationLevel2_r16);
    enc.WriteBit(value.has_aggregationLevel4_r16);
    enc.WriteBit(value.has_aggregationLevel8_r16);
    enc.WriteBit(value.has_aggregationLevel16_r16);
    if (value.has_aggregationLevel1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aggregationLevel1_r16), 0, 1);
    }
    if (value.has_aggregationLevel2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aggregationLevel2_r16), 0, 1);
    }
    if (value.has_aggregationLevel4_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aggregationLevel4_r16), 0, 1);
    }
    if (value.has_aggregationLevel8_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aggregationLevel8_r16), 0, 1);
    }
    if (value.has_aggregationLevel16_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aggregationLevel16_r16), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16(Decoder& dec, SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.aggregationLevel1_r16 = (SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel1_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.aggregationLevel2_r16 = (SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel2_r16)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.aggregationLevel4_r16 = (SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel4_r16)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.aggregationLevel8_r16 = (SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel8_r16)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.aggregationLevel16_r16 = (SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel16_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16(SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16& value)
{
    if (value.has_aggregationLevel1_r16) {
    }
    if (value.has_aggregationLevel2_r16) {
    }
    if (value.has_aggregationLevel4_r16) {
    }
    if (value.has_aggregationLevel8_r16) {
    }
    if (value.has_aggregationLevel16_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16：ASN.1 searchSpaceType-r16/common-r16/dci-Format2-4-r16；源文件第 12251 行；SEQUENCE。
// Encode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16 只读不分配；Decode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16(Encoder& enc, const SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16(enc, value.nrofCandidates_CI_r16);
    return enc.Error();
}

ErrorCode Decode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16(Decoder& dec, SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16(dec, value.nrofCandidates_CI_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16(SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16& value)
{
    Free_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16(value.nrofCandidates_CI_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16：ASN.1 searchSpaceType-r16/common-r16/dci-Format2-5-r16/nrofCandidates-IAB-r16；源文件第 12262 行；SEQUENCE。
// Encode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16 只读不分配；Decode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16(Encoder& enc, const SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16& value)
{
    enc.WriteBit(value.has_aggregationLevel1_r16);
    enc.WriteBit(value.has_aggregationLevel2_r16);
    enc.WriteBit(value.has_aggregationLevel4_r16);
    enc.WriteBit(value.has_aggregationLevel8_r16);
    enc.WriteBit(value.has_aggregationLevel16_r16);
    if (value.has_aggregationLevel1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aggregationLevel1_r16), 0, 1);
    }
    if (value.has_aggregationLevel2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aggregationLevel2_r16), 0, 1);
    }
    if (value.has_aggregationLevel4_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aggregationLevel4_r16), 0, 1);
    }
    if (value.has_aggregationLevel8_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aggregationLevel8_r16), 0, 1);
    }
    if (value.has_aggregationLevel16_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aggregationLevel16_r16), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16(Decoder& dec, SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.aggregationLevel1_r16 = (SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel1_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.aggregationLevel2_r16 = (SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel2_r16)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.aggregationLevel4_r16 = (SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel4_r16)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.aggregationLevel8_r16 = (SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel8_r16)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.aggregationLevel16_r16 = (SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel16_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16(SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16& value)
{
    if (value.has_aggregationLevel1_r16) {
    }
    if (value.has_aggregationLevel2_r16) {
    }
    if (value.has_aggregationLevel4_r16) {
    }
    if (value.has_aggregationLevel8_r16) {
    }
    if (value.has_aggregationLevel16_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16：ASN.1 searchSpaceType-r16/common-r16/dci-Format2-5-r16；源文件第 12261 行；SEQUENCE。
// Encode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16 只读不分配；Decode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16(Encoder& enc, const SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16(enc, value.nrofCandidates_IAB_r16);
    return enc.Error();
}

ErrorCode Decode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16(Decoder& dec, SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16(dec, value.nrofCandidates_IAB_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16(SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16& value)
{
    Free_SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16(value.nrofCandidates_IAB_r16);
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
