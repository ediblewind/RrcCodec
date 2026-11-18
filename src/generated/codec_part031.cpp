/* ============================================================================
 * src/generated/codec_part031.cpp — 生成的编解码函数
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
// WLAN_Identifiers_r16：ASN.1 WLAN-Identifiers-r16；源文件第 21548 行；SEQUENCE。
// Encode_WLAN_Identifiers_r16 只读不分配；Decode_WLAN_Identifiers_r16 可能 malloc（失败时内部已释放并清零）；Free_WLAN_Identifiers_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_WLAN_Identifiers_r16(Encoder& enc, const WLAN_Identifiers_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_ssid_r16);
    enc.WriteBit(value.has_bssid_r16);
    enc.WriteBit(value.has_hessid_r16);
    if (value.has_ssid_r16) {
        enc.WriteConstrainedOctetString(value.ssid_r16.bytes, value.ssid_r16.length, 1, 32);
    }
    if (value.has_bssid_r16) {
        enc.WriteFixedOctetString(value.bssid_r16.bytes, value.bssid_r16.length, 6, 6);
    }
    if (value.has_hessid_r16) {
        enc.WriteFixedOctetString(value.hessid_r16.bytes, value.hessid_r16.length, 6, 6);
    }
    return enc.Error();
}

ErrorCode Decode_WLAN_Identifiers_r16(Decoder& dec, WLAN_Identifiers_r16& value)
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
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedOctetString(string_bytes, string_length, 1, 32)) { goto fail; }
        value.ssid_r16.bytes = string_bytes;
        value.ssid_r16.length = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedOctetString(string_bytes, 6)) { goto fail; }
        string_length = 6;
        value.bssid_r16.bytes = string_bytes;
        value.bssid_r16.length = string_length;
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedOctetString(string_bytes, 6)) { goto fail; }
        string_length = 6;
        value.hessid_r16.bytes = string_bytes;
        value.hessid_r16.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_WLAN_Identifiers_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_WLAN_Identifiers_r16(WLAN_Identifiers_r16& value)
{
    if (value.has_ssid_r16) {
        std::free(value.ssid_r16.bytes);
        value.ssid_r16.bytes = nullptr;
        value.ssid_r16.length = 0;
    }
    if (value.has_bssid_r16) {
        std::free(value.bssid_r16.bytes);
        value.bssid_r16.bytes = nullptr;
        value.bssid_r16.length = 0;
    }
    if (value.has_hessid_r16) {
        std::free(value.hessid_r16.bytes);
        value.hessid_r16.bytes = nullptr;
        value.hessid_r16.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// WLAN_RTT_r16：ASN.1 WLAN-RTT-r16；源文件第 21557 行；SEQUENCE。
// Encode_WLAN_RTT_r16 只读不分配；Decode_WLAN_RTT_r16 可能 malloc（失败时内部已释放并清零）；Free_WLAN_RTT_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_WLAN_RTT_r16(Encoder& enc, const WLAN_RTT_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_rttAccuracy_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.rttValue_r16), 0, 16777215);
    {
        const std::int64_t enum_value = (std::int64_t)(value.rttUnits_r16);
        if (enum_value < 0) {
            return enc.Fail(ErrorCode_InvalidEnumValue);
        }
        if (enum_value < 5) {
            enc.WriteBit(false);
            enc.WriteConstrainedInteger(enum_value, 0, 4);
        } else {
            enc.WriteBit(true);
            enc.WriteNormallySmallNonNegative((std::uint32_t)(enum_value - 5));
        }
    }
    if (value.has_rttAccuracy_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rttAccuracy_r16), 0, 255);
    }
    return enc.Error();
}

ErrorCode Decode_WLAN_RTT_r16(Decoder& dec, WLAN_RTT_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 16777215, tmp_value)) { goto fail; }
        value.rttValue_r16 = (int64_t)tmp_value;
    }
    {
        bool enum_extension = false;
        if (!dec.ReadBit(enum_extension)) { goto fail; }
        std::int64_t enum_value = 0;
        if (!enum_extension) {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 4, root_index)) { goto fail; }
    enum_value = root_index;
        } else {
    std::uint32_t extension_index = 0;
    if (!dec.ReadNormallySmallNonNegative(extension_index)) { goto fail; }
    enum_value = (std::int64_t)5 + (std::int64_t)extension_index;
        }
        value.rttUnits_r16 = (WLAN_RTT_r16_RttUnits_r16)enum_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
        value.rttAccuracy_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_WLAN_RTT_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_WLAN_RTT_r16(WLAN_RTT_r16& value)
{
    if (value.has_rttAccuracy_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LogMeasResultWLAN_r16：ASN.1 LogMeasResultWLAN-r16；源文件第 21541 行；SEQUENCE。
// Encode_LogMeasResultWLAN_r16 只读不分配；Decode_LogMeasResultWLAN_r16 可能 malloc（失败时内部已释放并清零）；Free_LogMeasResultWLAN_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LogMeasResultWLAN_r16(Encoder& enc, const LogMeasResultWLAN_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_rssiWLAN_r16);
    enc.WriteBit(value.has_rtt_WLAN_r16);
    Encode_WLAN_Identifiers_r16(enc, value.wlan_Identifiers_r16);
    if (value.has_rssiWLAN_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rssiWLAN_r16), 0, 141);
    }
    if (value.has_rtt_WLAN_r16) {
        Encode_WLAN_RTT_r16(enc, value.rtt_WLAN_r16);
    }
    return enc.Error();
}

ErrorCode Decode_LogMeasResultWLAN_r16(Decoder& dec, LogMeasResultWLAN_r16& value)
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
        if (Decode_WLAN_Identifiers_r16(dec, value.wlan_Identifiers_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 141, tmp_value)) { goto fail; }
        value.rssiWLAN_r16 = (WLAN_RSSI_Range_r16)tmp_value;
    }
    if (present_1) {
        if (Decode_WLAN_RTT_r16(dec, value.rtt_WLAN_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_LogMeasResultWLAN_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LogMeasResultWLAN_r16(LogMeasResultWLAN_r16& value)
{
    Free_WLAN_Identifiers_r16(value.wlan_Identifiers_r16);
    if (value.has_rssiWLAN_r16) {
    }
    if (value.has_rtt_WLAN_r16) {
        Free_WLAN_RTT_r16(value.rtt_WLAN_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NeighbourCellInfo_r17：ASN.1 NeighbourCellInfo-r17；源文件第 21755 行；SEQUENCE。
// Encode_NeighbourCellInfo_r17 只读不分配；Decode_NeighbourCellInfo_r17 可能 malloc（失败时内部已释放并清零）；Free_NeighbourCellInfo_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NeighbourCellInfo_r17(Encoder& enc, const NeighbourCellInfo_r17& value)
{
    Encode_EpochTime_r17(enc, value.epochTime_r17);
    Encode_EphemerisInfo_r17(enc, value.ephemerisInfo_r17);
    return enc.Error();
}

ErrorCode Decode_NeighbourCellInfo_r17(Decoder& dec, NeighbourCellInfo_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_EpochTime_r17(dec, value.epochTime_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_EphemerisInfo_r17(dec, value.ephemerisInfo_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_NeighbourCellInfo_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NeighbourCellInfo_r17(NeighbourCellInfo_r17& value)
{
    Free_EpochTime_r17(value.epochTime_r17);
    Free_EphemerisInfo_r17(value.ephemerisInfo_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CandidateServingFreqRangeNR_r18：ASN.1 CandidateServingFreqRangeNR-r18；源文件第 21767 行；SEQUENCE。
// Encode_CandidateServingFreqRangeNR_r18 只读不分配；Decode_CandidateServingFreqRangeNR_r18 可能 malloc（失败时内部已释放并清零）；Free_CandidateServingFreqRangeNR_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CandidateServingFreqRangeNR_r18(Encoder& enc, const CandidateServingFreqRangeNR_r18& value)
{
    enc.WriteBit(value.has_candidateBandwidth_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.candidateCenterFreq_r18), 0, 3279165);
    if (value.has_candidateBandwidth_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.candidateBandwidth_r18), 0, 21);
    }
    return enc.Error();
}

ErrorCode Decode_CandidateServingFreqRangeNR_r18(Decoder& dec, CandidateServingFreqRangeNR_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.candidateCenterFreq_r18 = (ARFCN_ValueNR)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 21, tmp_value)) { goto fail; }
        value.candidateBandwidth_r18 = (CandidateServingFreqRangeNR_r18_CandidateBandwidth_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CandidateServingFreqRangeNR_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CandidateServingFreqRangeNR_r18(CandidateServingFreqRangeNR_r18& value)
{
    if (value.has_candidateBandwidth_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDU_SessionToReportUL_TrafficInfo_r18：ASN.1 PDU-SessionToReportUL-TrafficInfo-r18；源文件第 21781 行；SEQUENCE。
// Encode_PDU_SessionToReportUL_TrafficInfo_r18 只读不分配；Decode_PDU_SessionToReportUL_TrafficInfo_r18 可能 malloc（失败时内部已释放并清零）；Free_PDU_SessionToReportUL_TrafficInfo_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDU_SessionToReportUL_TrafficInfo_r18(Encoder& enc, const PDU_SessionToReportUL_TrafficInfo_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.pdu_SessionID), 0, 255);
enc.WriteConstrainedLength(value.qfi_ToReportUL_TrafficInfoList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.qfi_ToReportUL_TrafficInfoList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.qfi_ToReportUL_TrafficInfoList_r18_items[i]), 0, 63);
}
    return enc.Error();
}

ErrorCode Decode_PDU_SessionToReportUL_TrafficInfo_r18(Decoder& dec, PDU_SessionToReportUL_TrafficInfo_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
        value.pdu_SessionID = (PDU_SessionID)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.qfi_ToReportUL_TrafficInfoList_r18_count)) { goto fail; }
if (value.qfi_ToReportUL_TrafficInfoList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.qfi_ToReportUL_TrafficInfoList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.qfi_ToReportUL_TrafficInfoList_r18_count > 0u) {
    value.qfi_ToReportUL_TrafficInfoList_r18_items = (QFI*)std::malloc((std::size_t)value.qfi_ToReportUL_TrafficInfoList_r18_count * sizeof(QFI));
    if (value.qfi_ToReportUL_TrafficInfoList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.qfi_ToReportUL_TrafficInfoList_r18_items, 0, (std::size_t)value.qfi_ToReportUL_TrafficInfoList_r18_count * sizeof(QFI));
}
for (std::uint32_t i = 0; i < value.qfi_ToReportUL_TrafficInfoList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.qfi_ToReportUL_TrafficInfoList_r18_items[i] = (QFI)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDU_SessionToReportUL_TrafficInfo_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDU_SessionToReportUL_TrafficInfo_r18(PDU_SessionToReportUL_TrafficInfo_r18& value)
{
    if (value.qfi_ToReportUL_TrafficInfoList_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.qfi_ToReportUL_TrafficInfoList_r18_count; ++i) {
        }
        std::free(value.qfi_ToReportUL_TrafficInfoList_r18_items);
        value.qfi_ToReportUL_TrafficInfoList_r18_items = nullptr;
    }
    value.qfi_ToReportUL_TrafficInfoList_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// VisitedPSCellInfoList_r17：ASN.1 VisitedPSCellInfoList-r17；源文件第 21867 行；SEQUENCE OF。
// Encode_VisitedPSCellInfoList_r17 只读不分配；Decode_VisitedPSCellInfoList_r17 可能 malloc（失败时内部已释放并清零）；Free_VisitedPSCellInfoList_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_VisitedPSCellInfoList_r17(Encoder& enc, const VisitedPSCellInfoList_r17& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_VisitedPSCellInfo_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_VisitedPSCellInfoList_r17(Decoder& dec, VisitedPSCellInfoList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (VisitedPSCellInfo_r17*)std::malloc((std::size_t)value.count * sizeof(VisitedPSCellInfo_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(VisitedPSCellInfo_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_VisitedPSCellInfo_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_VisitedPSCellInfoList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_VisitedPSCellInfoList_r17(VisitedPSCellInfoList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_VisitedPSCellInfo_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// VisitedCellInfo_r16_ExtGroup1：ASN.1 VisitedCellInfo_r16_ExtGroup1；源文件第 21862 行；扩展添加组 [[ ]]。
// Encode_VisitedCellInfo_r16_ExtGroup1 只读不分配；Decode_VisitedCellInfo_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_VisitedCellInfo_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_VisitedCellInfo_r16_ExtGroup1(Encoder& enc, const VisitedCellInfo_r16_ExtGroup1& value)
{
    enc.WriteBit(value.has_visitedPSCellInfoListReport_r17);
    if (value.has_visitedPSCellInfoListReport_r17) {
        Encode_VisitedPSCellInfoList_r17(enc, value.visitedPSCellInfoListReport_r17);
    }
    return enc.Error();
}

ErrorCode Decode_VisitedCellInfo_r16_ExtGroup1(Decoder& dec, VisitedCellInfo_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_VisitedPSCellInfoList_r17(dec, value.visitedPSCellInfoListReport_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_VisitedCellInfo_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_VisitedCellInfo_r16_ExtGroup1(VisitedCellInfo_r16_ExtGroup1& value)
{
    if (value.has_visitedPSCellInfoListReport_r17) {
        Free_VisitedPSCellInfoList_r17(value.visitedPSCellInfoListReport_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16：ASN.1 visitedCellId-r16/nr-CellId-r16；源文件第 21851 行；CHOICE。
// Encode_VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16 只读不分配；Decode_VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16 可能 malloc（失败时内部已释放并清零）；Free_VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16(Encoder& enc, const VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16_Tag_cgi_Info:
        Encode_CGI_Info_Logging_r16(enc, value.u.cgi_Info);
        break;
    case VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16_Tag_pci_arfcn_r16:
        Encode_PCI_ARFCN_NR_r16(enc, value.u.pci_arfcn_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16(Decoder& dec, VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16_Tag)root_index;
    switch (value.tag) {
    case VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16_Tag_cgi_Info: {
        if (Decode_CGI_Info_Logging_r16(dec, value.u.cgi_Info) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16_Tag_pci_arfcn_r16: {
        if (Decode_PCI_ARFCN_NR_r16(dec, value.u.pci_arfcn_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16(VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16& value)
{
    switch (value.tag) {
    case VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16_Tag_cgi_Info:
        Free_CGI_Info_Logging_r16(value.u.cgi_Info);
        break;
    case VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16_Tag_pci_arfcn_r16:
        Free_PCI_ARFCN_NR_r16(value.u.pci_arfcn_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16：ASN.1 visitedCellId-r16/eutra-CellId-r16；源文件第 21855 行；CHOICE。
// Encode_VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16 只读不分配；Decode_VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16 可能 malloc（失败时内部已释放并清零）；Free_VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16(Encoder& enc, const VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16_Tag_cellGlobalId_r16:
        Encode_CGI_InfoEUTRA(enc, value.u.cellGlobalId_r16);
        break;
    case VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16_Tag_pci_arfcn_r16:
        Encode_PCI_ARFCN_EUTRA_r16(enc, value.u.pci_arfcn_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16(Decoder& dec, VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16_Tag)root_index;
    switch (value.tag) {
    case VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16_Tag_cellGlobalId_r16: {
        if (Decode_CGI_InfoEUTRA(dec, value.u.cellGlobalId_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16_Tag_pci_arfcn_r16: {
        if (Decode_PCI_ARFCN_EUTRA_r16(dec, value.u.pci_arfcn_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16(VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16& value)
{
    switch (value.tag) {
    case VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16_Tag_cellGlobalId_r16:
        Free_CGI_InfoEUTRA(value.u.cellGlobalId_r16);
        break;
    case VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16_Tag_pci_arfcn_r16:
        Free_PCI_ARFCN_EUTRA_r16(value.u.pci_arfcn_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// VisitedCellInfo_r16_VisitedCellId_r16：ASN.1 visitedCellId-r16；源文件第 21850 行；CHOICE。
// Encode_VisitedCellInfo_r16_VisitedCellId_r16 只读不分配；Decode_VisitedCellInfo_r16_VisitedCellId_r16 可能 malloc（失败时内部已释放并清零）；Free_VisitedCellInfo_r16_VisitedCellId_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_VisitedCellInfo_r16_VisitedCellId_r16(Encoder& enc, const VisitedCellInfo_r16_VisitedCellId_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case VisitedCellInfo_r16_VisitedCellId_r16_Tag_nr_CellId_r16:
        Encode_VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16(enc, value.u.nr_CellId_r16);
        break;
    case VisitedCellInfo_r16_VisitedCellId_r16_Tag_eutra_CellId_r16:
        Encode_VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16(enc, value.u.eutra_CellId_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_VisitedCellInfo_r16_VisitedCellId_r16(Decoder& dec, VisitedCellInfo_r16_VisitedCellId_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (VisitedCellInfo_r16_VisitedCellId_r16_Tag)root_index;
    switch (value.tag) {
    case VisitedCellInfo_r16_VisitedCellId_r16_Tag_nr_CellId_r16: {
        if (Decode_VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16(dec, value.u.nr_CellId_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case VisitedCellInfo_r16_VisitedCellId_r16_Tag_eutra_CellId_r16: {
        if (Decode_VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16(dec, value.u.eutra_CellId_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_VisitedCellInfo_r16_VisitedCellId_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_VisitedCellInfo_r16_VisitedCellId_r16(VisitedCellInfo_r16_VisitedCellId_r16& value)
{
    switch (value.tag) {
    case VisitedCellInfo_r16_VisitedCellId_r16_Tag_nr_CellId_r16:
        Free_VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16(value.u.nr_CellId_r16);
        break;
    case VisitedCellInfo_r16_VisitedCellId_r16_Tag_eutra_CellId_r16:
        Free_VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16(value.u.eutra_CellId_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// VisitedCellInfo_r16：ASN.1 VisitedCellInfo-r16；源文件第 21849 行；SEQUENCE。
// Encode_VisitedCellInfo_r16 只读不分配；Decode_VisitedCellInfo_r16 可能 malloc（失败时内部已释放并清零）；Free_VisitedCellInfo_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_VisitedCellInfo_r16(Encoder& enc, const VisitedCellInfo_r16& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_visitedCellId_r16);
    if (value.has_visitedCellId_r16) {
        Encode_VisitedCellInfo_r16_VisitedCellId_r16(enc, value.visitedCellId_r16);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.timeSpent_r16), 0, 4095);
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_VisitedCellInfo_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_VisitedCellInfo_r16(Decoder& dec, VisitedCellInfo_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_VisitedCellInfo_r16_VisitedCellId_r16(dec, value.visitedCellId_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4095, tmp_value)) { goto fail; }
        value.timeSpent_r16 = (int64_t)tmp_value;
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
    if (Decode_VisitedCellInfo_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_VisitedCellInfo_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_VisitedCellInfo_r16(VisitedCellInfo_r16& value)
{
    if (value.has_visitedCellId_r16) {
        Free_VisitedCellInfo_r16_VisitedCellId_r16(value.visitedCellId_r16);
    }
    if (value.has_extGroup1) {
        Free_VisitedCellInfo_r16_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17：ASN.1 visitedCellId-r17/nr-CellId-r17；源文件第 21871 行；CHOICE。
// Encode_VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17 只读不分配；Decode_VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17 可能 malloc（失败时内部已释放并清零）；Free_VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17(Encoder& enc, const VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17_Tag_cgi_Info_r17:
        Encode_CGI_Info_Logging_r16(enc, value.u.cgi_Info_r17);
        break;
    case VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17_Tag_pci_arfcn_r17:
        Encode_PCI_ARFCN_NR_r16(enc, value.u.pci_arfcn_r17);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17(Decoder& dec, VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17_Tag)root_index;
    switch (value.tag) {
    case VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17_Tag_cgi_Info_r17: {
        if (Decode_CGI_Info_Logging_r16(dec, value.u.cgi_Info_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17_Tag_pci_arfcn_r17: {
        if (Decode_PCI_ARFCN_NR_r16(dec, value.u.pci_arfcn_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17(VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17& value)
{
    switch (value.tag) {
    case VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17_Tag_cgi_Info_r17:
        Free_CGI_Info_Logging_r16(value.u.cgi_Info_r17);
        break;
    case VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17_Tag_pci_arfcn_r17:
        Free_PCI_ARFCN_NR_r16(value.u.pci_arfcn_r17);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17：ASN.1 visitedCellId-r17/eutra-CellId-r17；源文件第 21875 行；CHOICE。
// Encode_VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17 只读不分配；Decode_VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17 可能 malloc（失败时内部已释放并清零）；Free_VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17(Encoder& enc, const VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17_Tag_cellGlobalId_r17:
        Encode_CGI_InfoEUTRALogging(enc, value.u.cellGlobalId_r17);
        break;
    case VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17_Tag_pci_arfcn_r17:
        Encode_PCI_ARFCN_EUTRA_r16(enc, value.u.pci_arfcn_r17);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17(Decoder& dec, VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17_Tag)root_index;
    switch (value.tag) {
    case VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17_Tag_cellGlobalId_r17: {
        if (Decode_CGI_InfoEUTRALogging(dec, value.u.cellGlobalId_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17_Tag_pci_arfcn_r17: {
        if (Decode_PCI_ARFCN_EUTRA_r16(dec, value.u.pci_arfcn_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17(VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17& value)
{
    switch (value.tag) {
    case VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17_Tag_cellGlobalId_r17:
        Free_CGI_InfoEUTRALogging(value.u.cellGlobalId_r17);
        break;
    case VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17_Tag_pci_arfcn_r17:
        Free_PCI_ARFCN_EUTRA_r16(value.u.pci_arfcn_r17);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// VisitedPSCellInfo_r17_VisitedCellId_r17：ASN.1 visitedCellId-r17；源文件第 21870 行；CHOICE。
// Encode_VisitedPSCellInfo_r17_VisitedCellId_r17 只读不分配；Decode_VisitedPSCellInfo_r17_VisitedCellId_r17 可能 malloc（失败时内部已释放并清零）；Free_VisitedPSCellInfo_r17_VisitedCellId_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_VisitedPSCellInfo_r17_VisitedCellId_r17(Encoder& enc, const VisitedPSCellInfo_r17_VisitedCellId_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case VisitedPSCellInfo_r17_VisitedCellId_r17_Tag_nr_CellId_r17:
        Encode_VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17(enc, value.u.nr_CellId_r17);
        break;
    case VisitedPSCellInfo_r17_VisitedCellId_r17_Tag_eutra_CellId_r17:
        Encode_VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17(enc, value.u.eutra_CellId_r17);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_VisitedPSCellInfo_r17_VisitedCellId_r17(Decoder& dec, VisitedPSCellInfo_r17_VisitedCellId_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (VisitedPSCellInfo_r17_VisitedCellId_r17_Tag)root_index;
    switch (value.tag) {
    case VisitedPSCellInfo_r17_VisitedCellId_r17_Tag_nr_CellId_r17: {
        if (Decode_VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17(dec, value.u.nr_CellId_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case VisitedPSCellInfo_r17_VisitedCellId_r17_Tag_eutra_CellId_r17: {
        if (Decode_VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17(dec, value.u.eutra_CellId_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_VisitedPSCellInfo_r17_VisitedCellId_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_VisitedPSCellInfo_r17_VisitedCellId_r17(VisitedPSCellInfo_r17_VisitedCellId_r17& value)
{
    switch (value.tag) {
    case VisitedPSCellInfo_r17_VisitedCellId_r17_Tag_nr_CellId_r17:
        Free_VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17(value.u.nr_CellId_r17);
        break;
    case VisitedPSCellInfo_r17_VisitedCellId_r17_Tag_eutra_CellId_r17:
        Free_VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17(value.u.eutra_CellId_r17);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// VisitedPSCellInfo_r17：ASN.1 VisitedPSCellInfo-r17；源文件第 21869 行；SEQUENCE。
// Encode_VisitedPSCellInfo_r17 只读不分配；Decode_VisitedPSCellInfo_r17 可能 malloc（失败时内部已释放并清零）；Free_VisitedPSCellInfo_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_VisitedPSCellInfo_r17(Encoder& enc, const VisitedPSCellInfo_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_visitedCellId_r17);
    if (value.has_visitedCellId_r17) {
        Encode_VisitedPSCellInfo_r17_VisitedCellId_r17(enc, value.visitedCellId_r17);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.timeSpent_r17), 0, 4095);
    return enc.Error();
}

ErrorCode Decode_VisitedPSCellInfo_r17(Decoder& dec, VisitedPSCellInfo_r17& value)
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
        if (Decode_VisitedPSCellInfo_r17_VisitedCellId_r17(dec, value.visitedCellId_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4095, tmp_value)) { goto fail; }
        value.timeSpent_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_VisitedPSCellInfo_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_VisitedPSCellInfo_r17(VisitedPSCellInfo_r17& value)
{
    if (value.has_visitedCellId_r17) {
        Free_VisitedPSCellInfo_r17_VisitedCellId_r17(value.visitedCellId_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_TxPoolDedicated_r16：ASN.1 SL-TxPoolDedicated-r16；源文件第 21976 行；SEQUENCE。
// Encode_SL_TxPoolDedicated_r16 只读不分配；Decode_SL_TxPoolDedicated_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_TxPoolDedicated_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_TxPoolDedicated_r16(Encoder& enc, const SL_TxPoolDedicated_r16& value)
{
    enc.WriteBit(value.has_sl_PoolToReleaseList_r16);
    enc.WriteBit(value.has_sl_PoolToAddModList_r16);
    if (value.has_sl_PoolToReleaseList_r16) {
enc.WriteConstrainedLength(value.sl_PoolToReleaseList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_PoolToReleaseList_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_PoolToReleaseList_r16_items[i]), 1, 16);
}
    }
    if (value.has_sl_PoolToAddModList_r16) {
enc.WriteConstrainedLength(value.sl_PoolToAddModList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_PoolToAddModList_r16_count; ++i) {
    Encode_SL_ResourcePoolConfig_r16(enc, value.sl_PoolToAddModList_r16_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_SL_TxPoolDedicated_r16(Decoder& dec, SL_TxPoolDedicated_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_PoolToReleaseList_r16_count)) { goto fail; }
if (value.sl_PoolToReleaseList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_PoolToReleaseList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_PoolToReleaseList_r16_count > 0u) {
    value.sl_PoolToReleaseList_r16_items = (SL_ResourcePoolID_r16*)std::malloc((std::size_t)value.sl_PoolToReleaseList_r16_count * sizeof(SL_ResourcePoolID_r16));
    if (value.sl_PoolToReleaseList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_PoolToReleaseList_r16_items, 0, (std::size_t)value.sl_PoolToReleaseList_r16_count * sizeof(SL_ResourcePoolID_r16));
}
for (std::uint32_t i = 0; i < value.sl_PoolToReleaseList_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
    value.sl_PoolToReleaseList_r16_items[i] = (SL_ResourcePoolID_r16)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_PoolToAddModList_r16_count)) { goto fail; }
if (value.sl_PoolToAddModList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_PoolToAddModList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_PoolToAddModList_r16_count > 0u) {
    value.sl_PoolToAddModList_r16_items = (SL_ResourcePoolConfig_r16*)std::malloc((std::size_t)value.sl_PoolToAddModList_r16_count * sizeof(SL_ResourcePoolConfig_r16));
    if (value.sl_PoolToAddModList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_PoolToAddModList_r16_items, 0, (std::size_t)value.sl_PoolToAddModList_r16_count * sizeof(SL_ResourcePoolConfig_r16));
}
for (std::uint32_t i = 0; i < value.sl_PoolToAddModList_r16_count; ++i) {
    if (Decode_SL_ResourcePoolConfig_r16(dec, value.sl_PoolToAddModList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_TxPoolDedicated_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_TxPoolDedicated_r16(SL_TxPoolDedicated_r16& value)
{
    if (value.has_sl_PoolToReleaseList_r16) {
        if (value.sl_PoolToReleaseList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_PoolToReleaseList_r16_count; ++i) {
            }
            std::free(value.sl_PoolToReleaseList_r16_items);
            value.sl_PoolToReleaseList_r16_items = nullptr;
        }
        value.sl_PoolToReleaseList_r16_count = 0;
    }
    if (value.has_sl_PoolToAddModList_r16) {
        if (value.sl_PoolToAddModList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_PoolToAddModList_r16_count; ++i) {
                Free_SL_ResourcePoolConfig_r16(value.sl_PoolToAddModList_r16_items[i]);
            }
            std::free(value.sl_PoolToAddModList_r16_items);
            value.sl_PoolToAddModList_r16_items = nullptr;
        }
        value.sl_PoolToAddModList_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ResourcePool_r16_ExtGroup1：ASN.1 SL_ResourcePool_r16_ExtGroup1；源文件第 23022 行；扩展添加组 [[ ]]。
// Encode_SL_ResourcePool_r16_ExtGroup1 只读不分配；Decode_SL_ResourcePool_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SL_ResourcePool_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ResourcePool_r16_ExtGroup1(Encoder& enc, const SL_ResourcePool_r16_ExtGroup1& value)
{
    enc.WriteBit(value.has_sl_TimeResource_r16);
    if (value.has_sl_TimeResource_r16) {
        enc.WriteConstrainedBitString(value.sl_TimeResource_r16.bytes, value.sl_TimeResource_r16.bitLength, 10, 160);
    }
    return enc.Error();
}

ErrorCode Decode_SL_ResourcePool_r16_ExtGroup1(Decoder& dec, SL_ResourcePool_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 10, 160)) { goto fail; }
        value.sl_TimeResource_r16.bytes = string_bytes;
        value.sl_TimeResource_r16.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ResourcePool_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ResourcePool_r16_ExtGroup1(SL_ResourcePool_r16_ExtGroup1& value)
{
    if (value.has_sl_TimeResource_r16) {
        std::free(value.sl_TimeResource_r16.bytes);
        value.sl_TimeResource_r16.bytes = nullptr;
        value.sl_TimeResource_r16.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PBPS_CPS_Config_r17：ASN.1 SL-PBPS-CPS-Config-r17；源文件第 22664 行；SEQUENCE。
// Encode_SL_PBPS_CPS_Config_r17 只读不分配；Decode_SL_PBPS_CPS_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_SL_PBPS_CPS_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PBPS_CPS_Config_r17(Encoder& enc, const SL_PBPS_CPS_Config_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_AllowedResourceSelectionConfig_r17);
    enc.WriteBit(value.has_sl_MinNumCandidateSlotsPeriodic_r17);
    enc.WriteBit(value.has_sl_PBPS_OccasionReservePeriodList_r17);
    enc.WriteBit(value.has_sl_Additional_PBPS_Occasion_r17);
    enc.WriteBit(value.has_sl_CPS_WindowPeriodic_r17);
    enc.WriteBit(value.has_sl_MinNumCandidateSlotsAperiodic_r17);
    enc.WriteBit(value.has_sl_MinNumRssiMeasurementSlots_r17);
    enc.WriteBit(value.has_sl_DefaultCBR_RandomSelection_r17);
    enc.WriteBit(value.has_sl_DefaultCBR_PartialSensing_r17);
    enc.WriteBit(value.has_sl_CPS_WindowAperiodic_r17);
    enc.WriteBit(value.has_sl_PartialSensingInactiveTime_r17);
    if (value.has_sl_AllowedResourceSelectionConfig_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_AllowedResourceSelectionConfig_r17), 0, 6);
    }
    if (value.has_sl_MinNumCandidateSlotsPeriodic_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_MinNumCandidateSlotsPeriodic_r17), 1, 32);
    }
    if (value.has_sl_PBPS_OccasionReservePeriodList_r17) {
enc.WriteConstrainedLength(value.sl_PBPS_OccasionReservePeriodList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_PBPS_OccasionReservePeriodList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_PBPS_OccasionReservePeriodList_r17_items[i]), 1, 16);
}
    }
    if (value.has_sl_Additional_PBPS_Occasion_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_Additional_PBPS_Occasion_r17), 0, 0);
    }
    if (value.has_sl_CPS_WindowPeriodic_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_CPS_WindowPeriodic_r17), 5, 30);
    }
    if (value.has_sl_MinNumCandidateSlotsAperiodic_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_MinNumCandidateSlotsAperiodic_r17), 1, 32);
    }
    if (value.has_sl_MinNumRssiMeasurementSlots_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_MinNumRssiMeasurementSlots_r17), 1, 800);
    }
    if (value.has_sl_DefaultCBR_RandomSelection_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_DefaultCBR_RandomSelection_r17), 0, 100);
    }
    if (value.has_sl_DefaultCBR_PartialSensing_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_DefaultCBR_PartialSensing_r17), 0, 100);
    }
    if (value.has_sl_CPS_WindowAperiodic_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_CPS_WindowAperiodic_r17), 0, 30);
    }
    if (value.has_sl_PartialSensingInactiveTime_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PartialSensingInactiveTime_r17), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PBPS_CPS_Config_r17(Decoder& dec, SL_PBPS_CPS_Config_r17& value)
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
    if (!dec.ReadBit(present_9)) { goto fail; }
    if (!dec.ReadBit(present_10)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.sl_AllowedResourceSelectionConfig_r17 = (SL_PBPS_CPS_Config_r17_Sl_AllowedResourceSelectionConfig_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.sl_MinNumCandidateSlotsPeriodic_r17 = (int64_t)tmp_value;
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_PBPS_OccasionReservePeriodList_r17_count)) { goto fail; }
if (value.sl_PBPS_OccasionReservePeriodList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_PBPS_OccasionReservePeriodList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_PBPS_OccasionReservePeriodList_r17_count > 0u) {
    value.sl_PBPS_OccasionReservePeriodList_r17_items = (int64_t*)std::malloc((std::size_t)value.sl_PBPS_OccasionReservePeriodList_r17_count * sizeof(int64_t));
    if (value.sl_PBPS_OccasionReservePeriodList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_PBPS_OccasionReservePeriodList_r17_items, 0, (std::size_t)value.sl_PBPS_OccasionReservePeriodList_r17_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.sl_PBPS_OccasionReservePeriodList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
    value.sl_PBPS_OccasionReservePeriodList_r17_items[i] = (int64_t)tmp_value;
}
    }
    if (present_3) {
        value.sl_Additional_PBPS_Occasion_r17 = (SL_PBPS_CPS_Config_r17_Sl_Additional_PBPS_Occasion_r17)0;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(5, 30, tmp_value)) { goto fail; }
        value.sl_CPS_WindowPeriodic_r17 = (int64_t)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.sl_MinNumCandidateSlotsAperiodic_r17 = (int64_t)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 800, tmp_value)) { goto fail; }
        value.sl_MinNumRssiMeasurementSlots_r17 = (int64_t)tmp_value;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 100, tmp_value)) { goto fail; }
        value.sl_DefaultCBR_RandomSelection_r17 = (int64_t)tmp_value;
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 100, tmp_value)) { goto fail; }
        value.sl_DefaultCBR_PartialSensing_r17 = (int64_t)tmp_value;
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.sl_CPS_WindowAperiodic_r17 = (int64_t)tmp_value;
    }
    if (present_10) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_PartialSensingInactiveTime_r17 = (SL_PBPS_CPS_Config_r17_Sl_PartialSensingInactiveTime_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PBPS_CPS_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PBPS_CPS_Config_r17(SL_PBPS_CPS_Config_r17& value)
{
    if (value.has_sl_AllowedResourceSelectionConfig_r17) {
    }
    if (value.has_sl_MinNumCandidateSlotsPeriodic_r17) {
    }
    if (value.has_sl_PBPS_OccasionReservePeriodList_r17) {
        if (value.sl_PBPS_OccasionReservePeriodList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_PBPS_OccasionReservePeriodList_r17_count; ++i) {
            }
            std::free(value.sl_PBPS_OccasionReservePeriodList_r17_items);
            value.sl_PBPS_OccasionReservePeriodList_r17_items = nullptr;
        }
        value.sl_PBPS_OccasionReservePeriodList_r17_count = 0;
    }
    if (value.has_sl_Additional_PBPS_Occasion_r17) {
    }
    if (value.has_sl_CPS_WindowPeriodic_r17) {
    }
    if (value.has_sl_MinNumCandidateSlotsAperiodic_r17) {
    }
    if (value.has_sl_MinNumRssiMeasurementSlots_r17) {
    }
    if (value.has_sl_DefaultCBR_RandomSelection_r17) {
    }
    if (value.has_sl_DefaultCBR_PartialSensing_r17) {
    }
    if (value.has_sl_CPS_WindowAperiodic_r17) {
    }
    if (value.has_sl_PartialSensingInactiveTime_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SL_PBPS_CPS_Config_r17：ASN.1 SetupRelease<SL-PBPS-CPS-Config-r17>；源文件第 23026 行；CHOICE。
// Encode_SetupRelease_SL_PBPS_CPS_Config_r17 只读不分配；Decode_SetupRelease_SL_PBPS_CPS_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SL_PBPS_CPS_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SL_PBPS_CPS_Config_r17(Encoder& enc, const SetupRelease_SL_PBPS_CPS_Config_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SL_PBPS_CPS_Config_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_SL_PBPS_CPS_Config_r17_Tag_setup:
        Encode_SL_PBPS_CPS_Config_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SL_PBPS_CPS_Config_r17(Decoder& dec, SetupRelease_SL_PBPS_CPS_Config_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SL_PBPS_CPS_Config_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SL_PBPS_CPS_Config_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SL_PBPS_CPS_Config_r17_Tag_setup: {
        if (Decode_SL_PBPS_CPS_Config_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SL_PBPS_CPS_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SL_PBPS_CPS_Config_r17(SetupRelease_SL_PBPS_CPS_Config_r17& value)
{
    switch (value.tag) {
    case SetupRelease_SL_PBPS_CPS_Config_r17_Tag_release:
        break;
    case SetupRelease_SL_PBPS_CPS_Config_r17_Tag_setup:
        Free_SL_PBPS_CPS_Config_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_InterUE_CoordinationScheme1_r17：ASN.1 SL-InterUE-CoordinationScheme1-r17；源文件第 22450 行；SEQUENCE。
// Encode_SL_InterUE_CoordinationScheme1_r17 只读不分配；Decode_SL_InterUE_CoordinationScheme1_r17 可能 malloc（失败时内部已释放并清零）；Free_SL_InterUE_CoordinationScheme1_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_InterUE_CoordinationScheme1_r17(Encoder& enc, const SL_InterUE_CoordinationScheme1_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_IUC_Explicit_r17);
    enc.WriteBit(value.has_sl_IUC_Condition_r17);
    enc.WriteBit(value.has_sl_Condition1_A_2_r17);
    enc.WriteBit(value.has_sl_ThresholdRSRP_Condition1_B_1_Option1List_r17);
    enc.WriteBit(value.has_sl_ThresholdRSRP_Condition1_B_1_Option2List_r17);
    enc.WriteBit(value.has_sl_ContainerCoordInfo_r17);
    enc.WriteBit(value.has_sl_ContainerRequest_r17);
    enc.WriteBit(value.has_sl_TriggerConditionCoordInfo_r17);
    enc.WriteBit(value.has_sl_TriggerConditionRequest_r17);
    enc.WriteBit(value.has_sl_PriorityCoordInfoExplicit_r17);
    enc.WriteBit(value.has_sl_PriorityCoordInfoCondition_r17);
    enc.WriteBit(value.has_sl_PriorityRequest_r17);
    enc.WriteBit(value.has_sl_PriorityPreferredResourceSet_r17);
    enc.WriteBit(value.has_sl_MaxSlotOffsetTRIV_r17);
    enc.WriteBit(value.has_sl_NumSubCH_PreferredResourceSet_r17);
    enc.WriteBit(value.has_sl_ReservedPeriodPreferredResourceSet_r17);
    enc.WriteBit(value.has_sl_DetermineResourceType_r17);
    if (value.has_sl_IUC_Explicit_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_IUC_Explicit_r17), 0, 1);
    }
    if (value.has_sl_IUC_Condition_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_IUC_Condition_r17), 0, 1);
    }
    if (value.has_sl_Condition1_A_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_Condition1_A_2_r17), 0, 0);
    }
    if (value.has_sl_ThresholdRSRP_Condition1_B_1_Option1List_r17) {
enc.WriteConstrainedLength(value.sl_ThresholdRSRP_Condition1_B_1_Option1List_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_ThresholdRSRP_Condition1_B_1_Option1List_r17_count; ++i) {
    Encode_SL_ThresholdRSRP_Condition1_B_1_r17(enc, value.sl_ThresholdRSRP_Condition1_B_1_Option1List_r17_items[i]);
}
    }
    if (value.has_sl_ThresholdRSRP_Condition1_B_1_Option2List_r17) {
enc.WriteConstrainedLength(value.sl_ThresholdRSRP_Condition1_B_1_Option2List_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_ThresholdRSRP_Condition1_B_1_Option2List_r17_count; ++i) {
    Encode_SL_ThresholdRSRP_Condition1_B_1_r17(enc, value.sl_ThresholdRSRP_Condition1_B_1_Option2List_r17_items[i]);
}
    }
    if (value.has_sl_ContainerCoordInfo_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_ContainerCoordInfo_r17), 0, 1);
    }
    if (value.has_sl_ContainerRequest_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_ContainerRequest_r17), 0, 1);
    }
    if (value.has_sl_TriggerConditionCoordInfo_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_TriggerConditionCoordInfo_r17), 0, 1);
    }
    if (value.has_sl_TriggerConditionRequest_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_TriggerConditionRequest_r17), 0, 1);
    }
    if (value.has_sl_PriorityCoordInfoExplicit_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PriorityCoordInfoExplicit_r17), 1, 8);
    }
    if (value.has_sl_PriorityCoordInfoCondition_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PriorityCoordInfoCondition_r17), 1, 8);
    }
    if (value.has_sl_PriorityRequest_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PriorityRequest_r17), 1, 8);
    }
    if (value.has_sl_PriorityPreferredResourceSet_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PriorityPreferredResourceSet_r17), 1, 8);
    }
    if (value.has_sl_MaxSlotOffsetTRIV_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_MaxSlotOffsetTRIV_r17), 1, 8000);
    }
    if (value.has_sl_NumSubCH_PreferredResourceSet_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_NumSubCH_PreferredResourceSet_r17), 1, 27);
    }
    if (value.has_sl_ReservedPeriodPreferredResourceSet_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_ReservedPeriodPreferredResourceSet_r17), 1, 16);
    }
    if (value.has_sl_DetermineResourceType_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_DetermineResourceType_r17), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_SL_InterUE_CoordinationScheme1_r17(Decoder& dec, SL_InterUE_CoordinationScheme1_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_IUC_Explicit_r17 = (SL_InterUE_CoordinationScheme1_r17_Sl_IUC_Explicit_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_IUC_Condition_r17 = (SL_InterUE_CoordinationScheme1_r17_Sl_IUC_Condition_r17)tmp_value;
    }
    if (present_2) {
        value.sl_Condition1_A_2_r17 = (SL_InterUE_CoordinationScheme1_r17_Sl_Condition1_A_2_r17)0;
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_ThresholdRSRP_Condition1_B_1_Option1List_r17_count)) { goto fail; }
if (value.sl_ThresholdRSRP_Condition1_B_1_Option1List_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_ThresholdRSRP_Condition1_B_1_Option1List_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_ThresholdRSRP_Condition1_B_1_Option1List_r17_count > 0u) {
    value.sl_ThresholdRSRP_Condition1_B_1_Option1List_r17_items = (SL_ThresholdRSRP_Condition1_B_1_r17*)std::malloc((std::size_t)value.sl_ThresholdRSRP_Condition1_B_1_Option1List_r17_count * sizeof(SL_ThresholdRSRP_Condition1_B_1_r17));
    if (value.sl_ThresholdRSRP_Condition1_B_1_Option1List_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_ThresholdRSRP_Condition1_B_1_Option1List_r17_items, 0, (std::size_t)value.sl_ThresholdRSRP_Condition1_B_1_Option1List_r17_count * sizeof(SL_ThresholdRSRP_Condition1_B_1_r17));
}
for (std::uint32_t i = 0; i < value.sl_ThresholdRSRP_Condition1_B_1_Option1List_r17_count; ++i) {
    if (Decode_SL_ThresholdRSRP_Condition1_B_1_r17(dec, value.sl_ThresholdRSRP_Condition1_B_1_Option1List_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_ThresholdRSRP_Condition1_B_1_Option2List_r17_count)) { goto fail; }
if (value.sl_ThresholdRSRP_Condition1_B_1_Option2List_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_ThresholdRSRP_Condition1_B_1_Option2List_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_ThresholdRSRP_Condition1_B_1_Option2List_r17_count > 0u) {
    value.sl_ThresholdRSRP_Condition1_B_1_Option2List_r17_items = (SL_ThresholdRSRP_Condition1_B_1_r17*)std::malloc((std::size_t)value.sl_ThresholdRSRP_Condition1_B_1_Option2List_r17_count * sizeof(SL_ThresholdRSRP_Condition1_B_1_r17));
    if (value.sl_ThresholdRSRP_Condition1_B_1_Option2List_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_ThresholdRSRP_Condition1_B_1_Option2List_r17_items, 0, (std::size_t)value.sl_ThresholdRSRP_Condition1_B_1_Option2List_r17_count * sizeof(SL_ThresholdRSRP_Condition1_B_1_r17));
}
for (std::uint32_t i = 0; i < value.sl_ThresholdRSRP_Condition1_B_1_Option2List_r17_count; ++i) {
    if (Decode_SL_ThresholdRSRP_Condition1_B_1_r17(dec, value.sl_ThresholdRSRP_Condition1_B_1_Option2List_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_ContainerCoordInfo_r17 = (SL_InterUE_CoordinationScheme1_r17_Sl_ContainerCoordInfo_r17)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_ContainerRequest_r17 = (SL_InterUE_CoordinationScheme1_r17_Sl_ContainerRequest_r17)tmp_value;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_TriggerConditionCoordInfo_r17 = (int64_t)tmp_value;
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_TriggerConditionRequest_r17 = (int64_t)tmp_value;
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.sl_PriorityCoordInfoExplicit_r17 = (int64_t)tmp_value;
    }
    if (present_10) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.sl_PriorityCoordInfoCondition_r17 = (int64_t)tmp_value;
    }
    if (present_11) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.sl_PriorityRequest_r17 = (int64_t)tmp_value;
    }
    if (present_12) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.sl_PriorityPreferredResourceSet_r17 = (int64_t)tmp_value;
    }
    if (present_13) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8000, tmp_value)) { goto fail; }
        value.sl_MaxSlotOffsetTRIV_r17 = (int64_t)tmp_value;
    }
    if (present_14) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 27, tmp_value)) { goto fail; }
        value.sl_NumSubCH_PreferredResourceSet_r17 = (int64_t)tmp_value;
    }
    if (present_15) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.sl_ReservedPeriodPreferredResourceSet_r17 = (int64_t)tmp_value;
    }
    if (present_16) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_DetermineResourceType_r17 = (SL_InterUE_CoordinationScheme1_r17_Sl_DetermineResourceType_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_InterUE_CoordinationScheme1_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_InterUE_CoordinationScheme1_r17(SL_InterUE_CoordinationScheme1_r17& value)
{
    if (value.has_sl_IUC_Explicit_r17) {
    }
    if (value.has_sl_IUC_Condition_r17) {
    }
    if (value.has_sl_Condition1_A_2_r17) {
    }
    if (value.has_sl_ThresholdRSRP_Condition1_B_1_Option1List_r17) {
        if (value.sl_ThresholdRSRP_Condition1_B_1_Option1List_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_ThresholdRSRP_Condition1_B_1_Option1List_r17_count; ++i) {
                Free_SL_ThresholdRSRP_Condition1_B_1_r17(value.sl_ThresholdRSRP_Condition1_B_1_Option1List_r17_items[i]);
            }
            std::free(value.sl_ThresholdRSRP_Condition1_B_1_Option1List_r17_items);
            value.sl_ThresholdRSRP_Condition1_B_1_Option1List_r17_items = nullptr;
        }
        value.sl_ThresholdRSRP_Condition1_B_1_Option1List_r17_count = 0;
    }
    if (value.has_sl_ThresholdRSRP_Condition1_B_1_Option2List_r17) {
        if (value.sl_ThresholdRSRP_Condition1_B_1_Option2List_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_ThresholdRSRP_Condition1_B_1_Option2List_r17_count; ++i) {
                Free_SL_ThresholdRSRP_Condition1_B_1_r17(value.sl_ThresholdRSRP_Condition1_B_1_Option2List_r17_items[i]);
            }
            std::free(value.sl_ThresholdRSRP_Condition1_B_1_Option2List_r17_items);
            value.sl_ThresholdRSRP_Condition1_B_1_Option2List_r17_items = nullptr;
        }
        value.sl_ThresholdRSRP_Condition1_B_1_Option2List_r17_count = 0;
    }
    if (value.has_sl_ContainerCoordInfo_r17) {
    }
    if (value.has_sl_ContainerRequest_r17) {
    }
    if (value.has_sl_TriggerConditionCoordInfo_r17) {
    }
    if (value.has_sl_TriggerConditionRequest_r17) {
    }
    if (value.has_sl_PriorityCoordInfoExplicit_r17) {
    }
    if (value.has_sl_PriorityCoordInfoCondition_r17) {
    }
    if (value.has_sl_PriorityRequest_r17) {
    }
    if (value.has_sl_PriorityPreferredResourceSet_r17) {
    }
    if (value.has_sl_MaxSlotOffsetTRIV_r17) {
    }
    if (value.has_sl_NumSubCH_PreferredResourceSet_r17) {
    }
    if (value.has_sl_ReservedPeriodPreferredResourceSet_r17) {
    }
    if (value.has_sl_DetermineResourceType_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_InterUE_CoordinationScheme2_r17_ExtGroup1：ASN.1 SL_InterUE_CoordinationScheme2_r17_ExtGroup1；源文件第 22480 行；扩展添加组 [[ ]]。
// Encode_SL_InterUE_CoordinationScheme2_r17_ExtGroup1 只读不分配；Decode_SL_InterUE_CoordinationScheme2_r17_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SL_InterUE_CoordinationScheme2_r17_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_InterUE_CoordinationScheme2_r17_ExtGroup1(Encoder& enc, const SL_InterUE_CoordinationScheme2_r17_ExtGroup1& value)
{
    enc.WriteBit(value.has_sl_DeltaRSRP_Thresh_v1720);
    if (value.has_sl_DeltaRSRP_Thresh_v1720) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_DeltaRSRP_Thresh_v1720), -30, 30);
    }
    return enc.Error();
}

ErrorCode Decode_SL_InterUE_CoordinationScheme2_r17_ExtGroup1(Decoder& dec, SL_InterUE_CoordinationScheme2_r17_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-30, 30, tmp_value)) { goto fail; }
        value.sl_DeltaRSRP_Thresh_v1720 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_InterUE_CoordinationScheme2_r17_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_InterUE_CoordinationScheme2_r17_ExtGroup1(SL_InterUE_CoordinationScheme2_r17_ExtGroup1& value)
{
    if (value.has_sl_DeltaRSRP_Thresh_v1720) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_InterUE_CoordinationScheme2_r17：ASN.1 SL-InterUE-CoordinationScheme2-r17；源文件第 22471 行；SEQUENCE。
// Encode_SL_InterUE_CoordinationScheme2_r17 只读不分配；Decode_SL_InterUE_CoordinationScheme2_r17 可能 malloc（失败时内部已释放并清零）；Free_SL_InterUE_CoordinationScheme2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_InterUE_CoordinationScheme2_r17(Encoder& enc, const SL_InterUE_CoordinationScheme2_r17& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_IUC_Scheme2_r17);
    enc.WriteBit(value.has_sl_RB_SetPSFCH_r17);
    enc.WriteBit(value.has_sl_TypeUE_A_r17);
    enc.WriteBit(value.has_sl_PSFCH_Occasion_r17);
    enc.WriteBit(value.has_sl_SlotLevelResourceExclusion_r17);
    enc.WriteBit(value.has_sl_OptionForCondition2_A_1_r17);
    enc.WriteBit(value.has_sl_IndicationUE_B_r17);
    if (value.has_sl_IUC_Scheme2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_IUC_Scheme2_r17), 0, 0);
    }
    if (value.has_sl_RB_SetPSFCH_r17) {
        enc.WriteConstrainedBitString(value.sl_RB_SetPSFCH_r17.bytes, value.sl_RB_SetPSFCH_r17.bitLength, 10, 275);
    }
    if (value.has_sl_TypeUE_A_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_TypeUE_A_r17), 0, 0);
    }
    if (value.has_sl_PSFCH_Occasion_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PSFCH_Occasion_r17), 0, 1);
    }
    if (value.has_sl_SlotLevelResourceExclusion_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_SlotLevelResourceExclusion_r17), 0, 0);
    }
    if (value.has_sl_OptionForCondition2_A_1_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_OptionForCondition2_A_1_r17), 0, 1);
    }
    if (value.has_sl_IndicationUE_B_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_IndicationUE_B_r17), 0, 1);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SL_InterUE_CoordinationScheme2_r17_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SL_InterUE_CoordinationScheme2_r17(Decoder& dec, SL_InterUE_CoordinationScheme2_r17& value)
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
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (present_0) {
        value.sl_IUC_Scheme2_r17 = (SL_InterUE_CoordinationScheme2_r17_Sl_IUC_Scheme2_r17)0;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 10, 275)) { goto fail; }
        value.sl_RB_SetPSFCH_r17.bytes = string_bytes;
        value.sl_RB_SetPSFCH_r17.bitLength = string_length;
    }
    if (present_2) {
        value.sl_TypeUE_A_r17 = (SL_InterUE_CoordinationScheme2_r17_Sl_TypeUE_A_r17)0;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_PSFCH_Occasion_r17 = (int64_t)tmp_value;
    }
    if (present_4) {
        value.sl_SlotLevelResourceExclusion_r17 = (SL_InterUE_CoordinationScheme2_r17_Sl_SlotLevelResourceExclusion_r17)0;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_OptionForCondition2_A_1_r17 = (int64_t)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_IndicationUE_B_r17 = (SL_InterUE_CoordinationScheme2_r17_Sl_IndicationUE_B_r17)tmp_value;
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
    if (Decode_SL_InterUE_CoordinationScheme2_r17_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_SL_InterUE_CoordinationScheme2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_InterUE_CoordinationScheme2_r17(SL_InterUE_CoordinationScheme2_r17& value)
{
    if (value.has_sl_IUC_Scheme2_r17) {
    }
    if (value.has_sl_RB_SetPSFCH_r17) {
        std::free(value.sl_RB_SetPSFCH_r17.bytes);
        value.sl_RB_SetPSFCH_r17.bytes = nullptr;
        value.sl_RB_SetPSFCH_r17.bitLength = 0;
    }
    if (value.has_sl_TypeUE_A_r17) {
    }
    if (value.has_sl_PSFCH_Occasion_r17) {
    }
    if (value.has_sl_SlotLevelResourceExclusion_r17) {
    }
    if (value.has_sl_OptionForCondition2_A_1_r17) {
    }
    if (value.has_sl_IndicationUE_B_r17) {
    }
    if (value.has_extGroup1) {
        Free_SL_InterUE_CoordinationScheme2_r17_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_InterUE_CoordinationConfig_r17：ASN.1 SL-InterUE-CoordinationConfig-r17；源文件第 22444 行；SEQUENCE。
// Encode_SL_InterUE_CoordinationConfig_r17 只读不分配；Decode_SL_InterUE_CoordinationConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_SL_InterUE_CoordinationConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_InterUE_CoordinationConfig_r17(Encoder& enc, const SL_InterUE_CoordinationConfig_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_InterUE_CoordinationScheme1_r17);
    enc.WriteBit(value.has_sl_InterUE_CoordinationScheme2_r17);
    if (value.has_sl_InterUE_CoordinationScheme1_r17) {
        Encode_SL_InterUE_CoordinationScheme1_r17(enc, value.sl_InterUE_CoordinationScheme1_r17);
    }
    if (value.has_sl_InterUE_CoordinationScheme2_r17) {
        Encode_SL_InterUE_CoordinationScheme2_r17(enc, value.sl_InterUE_CoordinationScheme2_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SL_InterUE_CoordinationConfig_r17(Decoder& dec, SL_InterUE_CoordinationConfig_r17& value)
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
        if (Decode_SL_InterUE_CoordinationScheme1_r17(dec, value.sl_InterUE_CoordinationScheme1_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SL_InterUE_CoordinationScheme2_r17(dec, value.sl_InterUE_CoordinationScheme2_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_InterUE_CoordinationConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_InterUE_CoordinationConfig_r17(SL_InterUE_CoordinationConfig_r17& value)
{
    if (value.has_sl_InterUE_CoordinationScheme1_r17) {
        Free_SL_InterUE_CoordinationScheme1_r17(value.sl_InterUE_CoordinationScheme1_r17);
    }
    if (value.has_sl_InterUE_CoordinationScheme2_r17) {
        Free_SL_InterUE_CoordinationScheme2_r17(value.sl_InterUE_CoordinationScheme2_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SL_InterUE_CoordinationConfig_r17：ASN.1 SetupRelease<SL-InterUE-CoordinationConfig-r17>；源文件第 23027 行；CHOICE。
// Encode_SetupRelease_SL_InterUE_CoordinationConfig_r17 只读不分配；Decode_SetupRelease_SL_InterUE_CoordinationConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SL_InterUE_CoordinationConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SL_InterUE_CoordinationConfig_r17(Encoder& enc, const SetupRelease_SL_InterUE_CoordinationConfig_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SL_InterUE_CoordinationConfig_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_SL_InterUE_CoordinationConfig_r17_Tag_setup:
        Encode_SL_InterUE_CoordinationConfig_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SL_InterUE_CoordinationConfig_r17(Decoder& dec, SetupRelease_SL_InterUE_CoordinationConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SL_InterUE_CoordinationConfig_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SL_InterUE_CoordinationConfig_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SL_InterUE_CoordinationConfig_r17_Tag_setup: {
        if (Decode_SL_InterUE_CoordinationConfig_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SL_InterUE_CoordinationConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SL_InterUE_CoordinationConfig_r17(SetupRelease_SL_InterUE_CoordinationConfig_r17& value)
{
    switch (value.tag) {
    case SetupRelease_SL_InterUE_CoordinationConfig_r17_Tag_release:
        break;
    case SetupRelease_SL_InterUE_CoordinationConfig_r17_Tag_setup:
        Free_SL_InterUE_CoordinationConfig_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ResourcePool_r16_ExtGroup2：ASN.1 SL_ResourcePool_r16_ExtGroup2；源文件第 23025 行；扩展添加组 [[ ]]。
// Encode_SL_ResourcePool_r16_ExtGroup2 只读不分配；Decode_SL_ResourcePool_r16_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_SL_ResourcePool_r16_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ResourcePool_r16_ExtGroup2(Encoder& enc, const SL_ResourcePool_r16_ExtGroup2& value)
{
    enc.WriteBit(value.has_sl_PBPS_CPS_Config_r17);
    enc.WriteBit(value.has_sl_InterUE_CoordinationConfig_r17);
    if (value.has_sl_PBPS_CPS_Config_r17) {
        Encode_SetupRelease_SL_PBPS_CPS_Config_r17(enc, value.sl_PBPS_CPS_Config_r17);
    }
    if (value.has_sl_InterUE_CoordinationConfig_r17) {
        Encode_SetupRelease_SL_InterUE_CoordinationConfig_r17(enc, value.sl_InterUE_CoordinationConfig_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SL_ResourcePool_r16_ExtGroup2(Decoder& dec, SL_ResourcePool_r16_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_SL_PBPS_CPS_Config_r17(dec, value.sl_PBPS_CPS_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_SL_InterUE_CoordinationConfig_r17(dec, value.sl_InterUE_CoordinationConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ResourcePool_r16_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ResourcePool_r16_ExtGroup2(SL_ResourcePool_r16_ExtGroup2& value)
{
    if (value.has_sl_PBPS_CPS_Config_r17) {
        Free_SetupRelease_SL_PBPS_CPS_Config_r17(value.sl_PBPS_CPS_Config_r17);
    }
    if (value.has_sl_InterUE_CoordinationConfig_r17) {
        Free_SetupRelease_SL_InterUE_CoordinationConfig_r17(value.sl_InterUE_CoordinationConfig_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18：ASN.1 SL-CPE-StartingPositionsPSCCH-PSSCH-List-r18；源文件第 23058 行；SEQUENCE OF。
// Encode_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18 只读不分配；Decode_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18(Encoder& enc, const SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18& value)
{
    if (value.count != 8u) {
        enc.Fail(ErrorCode_ValueOutOfRange);
    } else {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Encode_SL_CPE_StartingPositionsPSCCH_PSSCH_r18(enc, value.items[i]);
        }
    }
    return enc.Error();
}

ErrorCode Decode_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18(Decoder& dec, SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
value.count = 8u;
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_CPE_StartingPositionsPSCCH_PSSCH_r18*)std::malloc((std::size_t)value.count * sizeof(SL_CPE_StartingPositionsPSCCH_PSSCH_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_CPE_StartingPositionsPSCCH_PSSCH_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SL_CPE_StartingPositionsPSCCH_PSSCH_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18(SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SL_CPE_StartingPositionsPSCCH_PSSCH_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18：ASN.1 SetupRelease<SL-CPE-StartingPositionsPSCCH-PSSCH-List-r18>；源文件第 23030 行；CHOICE。
// Encode_SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18 只读不分配；Decode_SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18(Encoder& enc, const SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18_Tag_setup:
        Encode_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18(Decoder& dec, SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18_Tag_setup: {
        if (Decode_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18(SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18& value)
{
    switch (value.tag) {
    case SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18_Tag_release:
        break;
    case SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18_Tag_setup:
        Free_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ResourcePool_r16_ExtGroup3：ASN.1 SL_ResourcePool_r16_ExtGroup3；源文件第 23029 行；扩展添加组 [[ ]]。
// Encode_SL_ResourcePool_r16_ExtGroup3 只读不分配；Decode_SL_ResourcePool_r16_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_SL_ResourcePool_r16_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ResourcePool_r16_ExtGroup3(Encoder& enc, const SL_ResourcePool_r16_ExtGroup3& value)
{
    enc.WriteBit(value.has_sl_CPE_StartingPositionsPSCCH_PSSCH_InitiateCOT_List_r18);
    enc.WriteBit(value.has_sl_CPE_StartingPositionsPSCCH_PSSCH_InitiateCOT_Default_r18);
    enc.WriteBit(value.has_sl_CPE_StartingPositionsPSCCH_PSSCH_WithinCOT_List_r18);
    enc.WriteBit(value.has_sl_CPE_StartingPositionsPSCCH_PSSCH_WithinCOT_Default_r18);
    enc.WriteBit(value.has_sl_Type1_LBT_BlockingOption1_r18);
    enc.WriteBit(value.has_sl_Type1_LBT_BlockingOption2_r18);
    enc.WriteBit(value.has_sl_NumInterlacePerSubchannel_r18);
    enc.WriteBit(value.has_sl_NumReferencePRBs_OfInterlace_r18);
    enc.WriteBit(value.has_sl_TransmissionStructureForPSFCH_r18);
    enc.WriteBit(value.has_sl_NumDedicatedPRBs_ForPSFCH_r18);
    enc.WriteBit(value.has_sl_NumPSFCH_Occasions_r18);
    enc.WriteBit(value.has_sl_PSFCH_CommonInterlaceIndex_r18);
    enc.WriteBit(value.has_sl_CPE_StartingPositionPSFCH_r18);
    enc.WriteBit(value.has_sl_NumRefSymbolLength_r18);
    enc.WriteBit(value.has_sl_PSFCH_RB_SetList_r18);
    enc.WriteBit(value.has_sl_IUC_RB_SetList_r18);
    enc.WriteBit(value.has_sl_PSFCH_PowerOffset_r18);
    enc.WriteBit(value.has_sl_RBSetIndexOfResourcePool_r18);
    enc.WriteBit(value.has_sl_A2X_Service_r18);
    enc.WriteBit(value.has_sl_PRS_ResourcesSharedSL_PRS_RP_r18);
    enc.WriteBit(value.has_numSym_SL_PRS_2ndStageSCI_r18);
    enc.WriteBit(value.has_sl_SCI_based_SL_PRS_Tx_Trigger_SCI2_D_r18);
    enc.WriteBit(value.has_sl_TriggerConditionRequest_r18);
    if (value.has_sl_CPE_StartingPositionsPSCCH_PSSCH_InitiateCOT_List_r18) {
        Encode_SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18(enc, value.sl_CPE_StartingPositionsPSCCH_PSSCH_InitiateCOT_List_r18);
    }
    if (value.has_sl_CPE_StartingPositionsPSCCH_PSSCH_InitiateCOT_Default_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_CPE_StartingPositionsPSCCH_PSSCH_InitiateCOT_Default_r18), 1, 9);
    }
    if (value.has_sl_CPE_StartingPositionsPSCCH_PSSCH_WithinCOT_List_r18) {
        Encode_SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18(enc, value.sl_CPE_StartingPositionsPSCCH_PSSCH_WithinCOT_List_r18);
    }
    if (value.has_sl_CPE_StartingPositionsPSCCH_PSSCH_WithinCOT_Default_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_CPE_StartingPositionsPSCCH_PSSCH_WithinCOT_Default_r18), 1, 9);
    }
    if (value.has_sl_Type1_LBT_BlockingOption1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_Type1_LBT_BlockingOption1_r18), 0, 0);
    }
    if (value.has_sl_Type1_LBT_BlockingOption2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_Type1_LBT_BlockingOption2_r18), 0, 0);
    }
    if (value.has_sl_NumInterlacePerSubchannel_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_NumInterlacePerSubchannel_r18), 0, 1);
    }
    if (value.has_sl_NumReferencePRBs_OfInterlace_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_NumReferencePRBs_OfInterlace_r18), 0, 1);
    }
    if (value.has_sl_TransmissionStructureForPSFCH_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_TransmissionStructureForPSFCH_r18), 0, 1);
    }
    if (value.has_sl_NumDedicatedPRBs_ForPSFCH_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_NumDedicatedPRBs_ForPSFCH_r18), 0, 2);
    }
    if (value.has_sl_NumPSFCH_Occasions_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_NumPSFCH_Occasions_r18), 0, 3);
    }
    if (value.has_sl_PSFCH_CommonInterlaceIndex_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PSFCH_CommonInterlaceIndex_r18), 0, 9);
    }
    if (value.has_sl_CPE_StartingPositionPSFCH_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_CPE_StartingPositionPSFCH_r18), 1, 9);
    }
    if (value.has_sl_NumRefSymbolLength_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_NumRefSymbolLength_r18), 0, 7);
    }
    if (value.has_sl_PSFCH_RB_SetList_r18) {
enc.WriteConstrainedLength(value.sl_PSFCH_RB_SetList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_PSFCH_RB_SetList_r18_count; ++i) {
    enc.WriteConstrainedBitString(value.sl_PSFCH_RB_SetList_r18_items[i].bytes, value.sl_PSFCH_RB_SetList_r18_items[i].bitLength, 10, 275);
}
    }
    if (value.has_sl_IUC_RB_SetList_r18) {
enc.WriteConstrainedLength(value.sl_IUC_RB_SetList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_IUC_RB_SetList_r18_count; ++i) {
    enc.WriteConstrainedBitString(value.sl_IUC_RB_SetList_r18_items[i].bytes, value.sl_IUC_RB_SetList_r18_items[i].bitLength, 10, 275);
}
    }
    if (value.has_sl_PSFCH_PowerOffset_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PSFCH_PowerOffset_r18), 0, 10);
    }
    if (value.has_sl_RBSetIndexOfResourcePool_r18) {
enc.WriteConstrainedLength(value.sl_RBSetIndexOfResourcePool_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_RBSetIndexOfResourcePool_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_RBSetIndexOfResourcePool_r18_items[i]), 0, 4);
}
    }
    if (value.has_sl_A2X_Service_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_A2X_Service_r18), 0, 3);
    }
    if (value.has_sl_PRS_ResourcesSharedSL_PRS_RP_r18) {
enc.WriteConstrainedLength(value.sl_PRS_ResourcesSharedSL_PRS_RP_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_PRS_ResourcesSharedSL_PRS_RP_r18_count; ++i) {
    Encode_SL_PRS_ResourceSharedSL_PRS_RP_r18(enc, value.sl_PRS_ResourcesSharedSL_PRS_RP_r18_items[i]);
}
    }
    if (value.has_numSym_SL_PRS_2ndStageSCI_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.numSym_SL_PRS_2ndStageSCI_r18), 1, 4);
    }
    if (value.has_sl_SCI_based_SL_PRS_Tx_Trigger_SCI2_D_r18) {
        enc.WriteBool(value.sl_SCI_based_SL_PRS_Tx_Trigger_SCI2_D_r18);
    }
    if (value.has_sl_TriggerConditionRequest_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_TriggerConditionRequest_r18), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_SL_ResourcePool_r16_ExtGroup3(Decoder& dec, SL_ResourcePool_r16_ExtGroup3& value)
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
    if (present_0) {
        if (Decode_SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18(dec, value.sl_CPE_StartingPositionsPSCCH_PSSCH_InitiateCOT_List_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 9, tmp_value)) { goto fail; }
        value.sl_CPE_StartingPositionsPSCCH_PSSCH_InitiateCOT_Default_r18 = (int64_t)tmp_value;
    }
    if (present_2) {
        if (Decode_SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18(dec, value.sl_CPE_StartingPositionsPSCCH_PSSCH_WithinCOT_List_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 9, tmp_value)) { goto fail; }
        value.sl_CPE_StartingPositionsPSCCH_PSSCH_WithinCOT_Default_r18 = (int64_t)tmp_value;
    }
    if (present_4) {
        value.sl_Type1_LBT_BlockingOption1_r18 = (SL_ResourcePool_r16_ExtGroup3_Sl_Type1_LBT_BlockingOption1_r18)0;
    }
    if (present_5) {
        value.sl_Type1_LBT_BlockingOption2_r18 = (SL_ResourcePool_r16_ExtGroup3_Sl_Type1_LBT_BlockingOption2_r18)0;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_NumInterlacePerSubchannel_r18 = (SL_ResourcePool_r16_ExtGroup3_Sl_NumInterlacePerSubchannel_r18)tmp_value;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_NumReferencePRBs_OfInterlace_r18 = (SL_ResourcePool_r16_ExtGroup3_Sl_NumReferencePRBs_OfInterlace_r18)tmp_value;
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_TransmissionStructureForPSFCH_r18 = (SL_ResourcePool_r16_ExtGroup3_Sl_TransmissionStructureForPSFCH_r18)tmp_value;
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.sl_NumDedicatedPRBs_ForPSFCH_r18 = (SL_ResourcePool_r16_ExtGroup3_Sl_NumDedicatedPRBs_ForPSFCH_r18)tmp_value;
    }
    if (present_10) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.sl_NumPSFCH_Occasions_r18 = (SL_ResourcePool_r16_ExtGroup3_Sl_NumPSFCH_Occasions_r18)tmp_value;
    }
    if (present_11) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.sl_PSFCH_CommonInterlaceIndex_r18 = (int64_t)tmp_value;
    }
    if (present_12) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 9, tmp_value)) { goto fail; }
        value.sl_CPE_StartingPositionPSFCH_r18 = (int64_t)tmp_value;
    }
    if (present_13) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sl_NumRefSymbolLength_r18 = (SL_ResourcePool_r16_ExtGroup3_Sl_NumRefSymbolLength_r18)tmp_value;
    }
    if (present_14) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_PSFCH_RB_SetList_r18_count)) { goto fail; }
if (value.sl_PSFCH_RB_SetList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_PSFCH_RB_SetList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_PSFCH_RB_SetList_r18_count > 0u) {
    value.sl_PSFCH_RB_SetList_r18_items = (BitString*)std::malloc((std::size_t)value.sl_PSFCH_RB_SetList_r18_count * sizeof(BitString));
    if (value.sl_PSFCH_RB_SetList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_PSFCH_RB_SetList_r18_items, 0, (std::size_t)value.sl_PSFCH_RB_SetList_r18_count * sizeof(BitString));
}
for (std::uint32_t i = 0; i < value.sl_PSFCH_RB_SetList_r18_count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadConstrainedBitString(string_bytes, string_length, 10, 275)) { goto fail; }
    value.sl_PSFCH_RB_SetList_r18_items[i].bytes = string_bytes;
    value.sl_PSFCH_RB_SetList_r18_items[i].bitLength = string_length;
}
    }
    if (present_15) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_IUC_RB_SetList_r18_count)) { goto fail; }
if (value.sl_IUC_RB_SetList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_IUC_RB_SetList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_IUC_RB_SetList_r18_count > 0u) {
    value.sl_IUC_RB_SetList_r18_items = (BitString*)std::malloc((std::size_t)value.sl_IUC_RB_SetList_r18_count * sizeof(BitString));
    if (value.sl_IUC_RB_SetList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_IUC_RB_SetList_r18_items, 0, (std::size_t)value.sl_IUC_RB_SetList_r18_count * sizeof(BitString));
}
for (std::uint32_t i = 0; i < value.sl_IUC_RB_SetList_r18_count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadConstrainedBitString(string_bytes, string_length, 10, 275)) { goto fail; }
    value.sl_IUC_RB_SetList_r18_items[i].bytes = string_bytes;
    value.sl_IUC_RB_SetList_r18_items[i].bitLength = string_length;
}
    }
    if (present_16) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.sl_PSFCH_PowerOffset_r18 = (int64_t)tmp_value;
    }
    if (present_17) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_RBSetIndexOfResourcePool_r18_count)) { goto fail; }
if (value.sl_RBSetIndexOfResourcePool_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_RBSetIndexOfResourcePool_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_RBSetIndexOfResourcePool_r18_count > 0u) {
    value.sl_RBSetIndexOfResourcePool_r18_items = (int64_t*)std::malloc((std::size_t)value.sl_RBSetIndexOfResourcePool_r18_count * sizeof(int64_t));
    if (value.sl_RBSetIndexOfResourcePool_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_RBSetIndexOfResourcePool_r18_items, 0, (std::size_t)value.sl_RBSetIndexOfResourcePool_r18_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.sl_RBSetIndexOfResourcePool_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
    value.sl_RBSetIndexOfResourcePool_r18_items[i] = (int64_t)tmp_value;
}
    }
    if (present_18) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.sl_A2X_Service_r18 = (SL_ResourcePool_r16_ExtGroup3_Sl_A2X_Service_r18)tmp_value;
    }
    if (present_19) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_PRS_ResourcesSharedSL_PRS_RP_r18_count)) { goto fail; }
if (value.sl_PRS_ResourcesSharedSL_PRS_RP_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_PRS_ResourcesSharedSL_PRS_RP_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_PRS_ResourcesSharedSL_PRS_RP_r18_count > 0u) {
    value.sl_PRS_ResourcesSharedSL_PRS_RP_r18_items = (SL_PRS_ResourceSharedSL_PRS_RP_r18*)std::malloc((std::size_t)value.sl_PRS_ResourcesSharedSL_PRS_RP_r18_count * sizeof(SL_PRS_ResourceSharedSL_PRS_RP_r18));
    if (value.sl_PRS_ResourcesSharedSL_PRS_RP_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_PRS_ResourcesSharedSL_PRS_RP_r18_items, 0, (std::size_t)value.sl_PRS_ResourcesSharedSL_PRS_RP_r18_count * sizeof(SL_PRS_ResourceSharedSL_PRS_RP_r18));
}
for (std::uint32_t i = 0; i < value.sl_PRS_ResourcesSharedSL_PRS_RP_r18_count; ++i) {
    if (Decode_SL_PRS_ResourceSharedSL_PRS_RP_r18(dec, value.sl_PRS_ResourcesSharedSL_PRS_RP_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_20) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.numSym_SL_PRS_2ndStageSCI_r18 = (int64_t)tmp_value;
    }
    if (present_21) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.sl_SCI_based_SL_PRS_Tx_Trigger_SCI2_D_r18 = tmp_value;
    }
    if (present_22) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_TriggerConditionRequest_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ResourcePool_r16_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ResourcePool_r16_ExtGroup3(SL_ResourcePool_r16_ExtGroup3& value)
{
    if (value.has_sl_CPE_StartingPositionsPSCCH_PSSCH_InitiateCOT_List_r18) {
        Free_SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18(value.sl_CPE_StartingPositionsPSCCH_PSSCH_InitiateCOT_List_r18);
    }
    if (value.has_sl_CPE_StartingPositionsPSCCH_PSSCH_InitiateCOT_Default_r18) {
    }
    if (value.has_sl_CPE_StartingPositionsPSCCH_PSSCH_WithinCOT_List_r18) {
        Free_SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18(value.sl_CPE_StartingPositionsPSCCH_PSSCH_WithinCOT_List_r18);
    }
    if (value.has_sl_CPE_StartingPositionsPSCCH_PSSCH_WithinCOT_Default_r18) {
    }
    if (value.has_sl_Type1_LBT_BlockingOption1_r18) {
    }
    if (value.has_sl_Type1_LBT_BlockingOption2_r18) {
    }
    if (value.has_sl_NumInterlacePerSubchannel_r18) {
    }
    if (value.has_sl_NumReferencePRBs_OfInterlace_r18) {
    }
    if (value.has_sl_TransmissionStructureForPSFCH_r18) {
    }
    if (value.has_sl_NumDedicatedPRBs_ForPSFCH_r18) {
    }
    if (value.has_sl_NumPSFCH_Occasions_r18) {
    }
    if (value.has_sl_PSFCH_CommonInterlaceIndex_r18) {
    }
    if (value.has_sl_CPE_StartingPositionPSFCH_r18) {
    }
    if (value.has_sl_NumRefSymbolLength_r18) {
    }
    if (value.has_sl_PSFCH_RB_SetList_r18) {
        if (value.sl_PSFCH_RB_SetList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_PSFCH_RB_SetList_r18_count; ++i) {
                std::free(value.sl_PSFCH_RB_SetList_r18_items[i].bytes);
                value.sl_PSFCH_RB_SetList_r18_items[i].bytes = nullptr;
                value.sl_PSFCH_RB_SetList_r18_items[i].bitLength = 0;
            }
            std::free(value.sl_PSFCH_RB_SetList_r18_items);
            value.sl_PSFCH_RB_SetList_r18_items = nullptr;
        }
        value.sl_PSFCH_RB_SetList_r18_count = 0;
    }
    if (value.has_sl_IUC_RB_SetList_r18) {
        if (value.sl_IUC_RB_SetList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_IUC_RB_SetList_r18_count; ++i) {
                std::free(value.sl_IUC_RB_SetList_r18_items[i].bytes);
                value.sl_IUC_RB_SetList_r18_items[i].bytes = nullptr;
                value.sl_IUC_RB_SetList_r18_items[i].bitLength = 0;
            }
            std::free(value.sl_IUC_RB_SetList_r18_items);
            value.sl_IUC_RB_SetList_r18_items = nullptr;
        }
        value.sl_IUC_RB_SetList_r18_count = 0;
    }
    if (value.has_sl_PSFCH_PowerOffset_r18) {
    }
    if (value.has_sl_RBSetIndexOfResourcePool_r18) {
        if (value.sl_RBSetIndexOfResourcePool_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_RBSetIndexOfResourcePool_r18_count; ++i) {
            }
            std::free(value.sl_RBSetIndexOfResourcePool_r18_items);
            value.sl_RBSetIndexOfResourcePool_r18_items = nullptr;
        }
        value.sl_RBSetIndexOfResourcePool_r18_count = 0;
    }
    if (value.has_sl_A2X_Service_r18) {
    }
    if (value.has_sl_PRS_ResourcesSharedSL_PRS_RP_r18) {
        if (value.sl_PRS_ResourcesSharedSL_PRS_RP_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_PRS_ResourcesSharedSL_PRS_RP_r18_count; ++i) {
                Free_SL_PRS_ResourceSharedSL_PRS_RP_r18(value.sl_PRS_ResourcesSharedSL_PRS_RP_r18_items[i]);
            }
            std::free(value.sl_PRS_ResourcesSharedSL_PRS_RP_r18_items);
            value.sl_PRS_ResourcesSharedSL_PRS_RP_r18_items = nullptr;
        }
        value.sl_PRS_ResourcesSharedSL_PRS_RP_r18_count = 0;
    }
    if (value.has_numSym_SL_PRS_2ndStageSCI_r18) {
    }
    if (value.has_sl_SCI_based_SL_PRS_Tx_Trigger_SCI2_D_r18) {
    }
    if (value.has_sl_TriggerConditionRequest_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_SyncAllowed_r16：ASN.1 SL-SyncAllowed-r16；源文件第 23075 行；SEQUENCE。
// Encode_SL_SyncAllowed_r16 只读不分配；Decode_SL_SyncAllowed_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_SyncAllowed_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_SyncAllowed_r16(Encoder& enc, const SL_SyncAllowed_r16& value)
{
    enc.WriteBit(value.has_gnss_Sync_r16);
    enc.WriteBit(value.has_gnbEnb_Sync_r16);
    enc.WriteBit(value.has_ue_Sync_r16);
    if (value.has_gnss_Sync_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.gnss_Sync_r16), 0, 0);
    }
    if (value.has_gnbEnb_Sync_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.gnbEnb_Sync_r16), 0, 0);
    }
    if (value.has_ue_Sync_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ue_Sync_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SL_SyncAllowed_r16(Decoder& dec, SL_SyncAllowed_r16& value)
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
        value.gnss_Sync_r16 = (SL_SyncAllowed_r16_Gnss_Sync_r16)0;
    }
    if (present_1) {
        value.gnbEnb_Sync_r16 = (SL_SyncAllowed_r16_GnbEnb_Sync_r16)0;
    }
    if (present_2) {
        value.ue_Sync_r16 = (SL_SyncAllowed_r16_Ue_Sync_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_SyncAllowed_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_SyncAllowed_r16(SL_SyncAllowed_r16& value)
{
    if (value.has_gnss_Sync_r16) {
    }
    if (value.has_gnbEnb_Sync_r16) {
    }
    if (value.has_ue_Sync_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PTRS_Config_r16：ASN.1 SL-PTRS-Config-r16；源文件第 23105 行；SEQUENCE。
// Encode_SL_PTRS_Config_r16 只读不分配；Decode_SL_PTRS_Config_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_PTRS_Config_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PTRS_Config_r16(Encoder& enc, const SL_PTRS_Config_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_PTRS_FreqDensity_r16);
    enc.WriteBit(value.has_sl_PTRS_TimeDensity_r16);
    enc.WriteBit(value.has_sl_PTRS_RE_Offset_r16);
    if (value.has_sl_PTRS_FreqDensity_r16) {
enc.WriteConstrainedLength(value.sl_PTRS_FreqDensity_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_PTRS_FreqDensity_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_PTRS_FreqDensity_r16_items[i]), 1, 276);
}
    }
    if (value.has_sl_PTRS_TimeDensity_r16) {
enc.WriteConstrainedLength(value.sl_PTRS_TimeDensity_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_PTRS_TimeDensity_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_PTRS_TimeDensity_r16_items[i]), 0, 29);
}
    }
    if (value.has_sl_PTRS_RE_Offset_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PTRS_RE_Offset_r16), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PTRS_Config_r16(Decoder& dec, SL_PTRS_Config_r16& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_PTRS_FreqDensity_r16_count)) { goto fail; }
if (value.sl_PTRS_FreqDensity_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_PTRS_FreqDensity_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_PTRS_FreqDensity_r16_count > 0u) {
    value.sl_PTRS_FreqDensity_r16_items = (int64_t*)std::malloc((std::size_t)value.sl_PTRS_FreqDensity_r16_count * sizeof(int64_t));
    if (value.sl_PTRS_FreqDensity_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_PTRS_FreqDensity_r16_items, 0, (std::size_t)value.sl_PTRS_FreqDensity_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.sl_PTRS_FreqDensity_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 276, tmp_value)) { goto fail; }
    value.sl_PTRS_FreqDensity_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_PTRS_TimeDensity_r16_count)) { goto fail; }
if (value.sl_PTRS_TimeDensity_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_PTRS_TimeDensity_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_PTRS_TimeDensity_r16_count > 0u) {
    value.sl_PTRS_TimeDensity_r16_items = (int64_t*)std::malloc((std::size_t)value.sl_PTRS_TimeDensity_r16_count * sizeof(int64_t));
    if (value.sl_PTRS_TimeDensity_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_PTRS_TimeDensity_r16_items, 0, (std::size_t)value.sl_PTRS_TimeDensity_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.sl_PTRS_TimeDensity_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 29, tmp_value)) { goto fail; }
    value.sl_PTRS_TimeDensity_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.sl_PTRS_RE_Offset_r16 = (SL_PTRS_Config_r16_Sl_PTRS_RE_Offset_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PTRS_Config_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PTRS_Config_r16(SL_PTRS_Config_r16& value)
{
    if (value.has_sl_PTRS_FreqDensity_r16) {
        if (value.sl_PTRS_FreqDensity_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_PTRS_FreqDensity_r16_count; ++i) {
            }
            std::free(value.sl_PTRS_FreqDensity_r16_items);
            value.sl_PTRS_FreqDensity_r16_items = nullptr;
        }
        value.sl_PTRS_FreqDensity_r16_count = 0;
    }
    if (value.has_sl_PTRS_TimeDensity_r16) {
        if (value.sl_PTRS_TimeDensity_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_PTRS_TimeDensity_r16_count; ++i) {
            }
            std::free(value.sl_PTRS_TimeDensity_r16_items);
            value.sl_PTRS_TimeDensity_r16_items = nullptr;
        }
        value.sl_PTRS_TimeDensity_r16_count = 0;
    }
    if (value.has_sl_PTRS_RE_Offset_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_CBR_PriorityTxConfigList_r16：ASN.1 SL-CBR-PriorityTxConfigList-r16；源文件第 22032 行；SEQUENCE OF。
// Encode_SL_CBR_PriorityTxConfigList_r16 只读不分配；Decode_SL_CBR_PriorityTxConfigList_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_CBR_PriorityTxConfigList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_CBR_PriorityTxConfigList_r16(Encoder& enc, const SL_CBR_PriorityTxConfigList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SL_PriorityTxConfigIndex_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SL_CBR_PriorityTxConfigList_r16(Decoder& dec, SL_CBR_PriorityTxConfigList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_PriorityTxConfigIndex_r16*)std::malloc((std::size_t)value.count * sizeof(SL_PriorityTxConfigIndex_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_PriorityTxConfigIndex_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SL_PriorityTxConfigIndex_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_CBR_PriorityTxConfigList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_CBR_PriorityTxConfigList_r16(SL_CBR_PriorityTxConfigList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SL_PriorityTxConfigIndex_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_CBR_PriorityTxConfigList_v1650：ASN.1 SL-CBR-PriorityTxConfigList-v1650；源文件第 22034 行；SEQUENCE OF。
// Encode_SL_CBR_PriorityTxConfigList_v1650 只读不分配；Decode_SL_CBR_PriorityTxConfigList_v1650 可能 malloc（失败时内部已释放并清零）；Free_SL_CBR_PriorityTxConfigList_v1650 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_CBR_PriorityTxConfigList_v1650(Encoder& enc, const SL_CBR_PriorityTxConfigList_v1650& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SL_PriorityTxConfigIndex_v1650(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SL_CBR_PriorityTxConfigList_v1650(Decoder& dec, SL_CBR_PriorityTxConfigList_v1650& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_PriorityTxConfigIndex_v1650*)std::malloc((std::size_t)value.count * sizeof(SL_PriorityTxConfigIndex_v1650));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_PriorityTxConfigIndex_v1650));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SL_PriorityTxConfigIndex_v1650(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_CBR_PriorityTxConfigList_v1650(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_CBR_PriorityTxConfigList_v1650(SL_CBR_PriorityTxConfigList_v1650& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SL_PriorityTxConfigIndex_v1650(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_UE_SelectedConfigRP_r16_ExtGroup1：ASN.1 SL_UE_SelectedConfigRP_r16_ExtGroup1；源文件第 23122 行；扩展添加组 [[ ]]。
// Encode_SL_UE_SelectedConfigRP_r16_ExtGroup1 只读不分配；Decode_SL_UE_SelectedConfigRP_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SL_UE_SelectedConfigRP_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_UE_SelectedConfigRP_r16_ExtGroup1(Encoder& enc, const SL_UE_SelectedConfigRP_r16_ExtGroup1& value)
{
    enc.WriteBit(value.has_sl_CBR_PriorityTxConfigList_v1650);
    if (value.has_sl_CBR_PriorityTxConfigList_v1650) {
        Encode_SL_CBR_PriorityTxConfigList_v1650(enc, value.sl_CBR_PriorityTxConfigList_v1650);
    }
    return enc.Error();
}

ErrorCode Decode_SL_UE_SelectedConfigRP_r16_ExtGroup1(Decoder& dec, SL_UE_SelectedConfigRP_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SL_CBR_PriorityTxConfigList_v1650(dec, value.sl_CBR_PriorityTxConfigList_v1650) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_UE_SelectedConfigRP_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_UE_SelectedConfigRP_r16_ExtGroup1(SL_UE_SelectedConfigRP_r16_ExtGroup1& value)
{
    if (value.has_sl_CBR_PriorityTxConfigList_v1650) {
        Free_SL_CBR_PriorityTxConfigList_v1650(value.sl_CBR_PriorityTxConfigList_v1650);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_Thres_RSRP_List_r16：ASN.1 SL-Thres-RSRP-List-r16；源文件第 23382 行；SEQUENCE OF。
// Encode_SL_Thres_RSRP_List_r16 只读不分配；Decode_SL_Thres_RSRP_List_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_Thres_RSRP_List_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_Thres_RSRP_List_r16(Encoder& enc, const SL_Thres_RSRP_List_r16& value)
{
    if (value.count != 64u) {
        enc.Fail(ErrorCode_ValueOutOfRange);
    } else {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 66);
        }
    }
    return enc.Error();
}

ErrorCode Decode_SL_Thres_RSRP_List_r16(Decoder& dec, SL_Thres_RSRP_List_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
value.count = 64u;
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_Thres_RSRP_r16*)std::malloc((std::size_t)value.count * sizeof(SL_Thres_RSRP_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_Thres_RSRP_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 66, tmp_value)) { goto fail; }
    value.items[i] = (SL_Thres_RSRP_r16)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_Thres_RSRP_List_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_Thres_RSRP_List_r16(SL_Thres_RSRP_List_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_UE_SelectedConfigRP_r16_ExtGroup2：ASN.1 SL_UE_SelectedConfigRP_r16_ExtGroup2；源文件第 23125 行；扩展添加组 [[ ]]。
// Encode_SL_UE_SelectedConfigRP_r16_ExtGroup2 只读不分配；Decode_SL_UE_SelectedConfigRP_r16_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_SL_UE_SelectedConfigRP_r16_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_UE_SelectedConfigRP_r16_ExtGroup2(Encoder& enc, const SL_UE_SelectedConfigRP_r16_ExtGroup2& value)
{
    enc.WriteBit(value.has_sl_NRPSSCH_EUTRA_ThresRSRP_List_r18);
    enc.WriteBit(value.has_sl_NRPSFCH_EUTRA_ThresRSRP_List_r18);
    if (value.has_sl_NRPSSCH_EUTRA_ThresRSRP_List_r18) {
        Encode_SL_Thres_RSRP_List_r16(enc, value.sl_NRPSSCH_EUTRA_ThresRSRP_List_r18);
    }
    if (value.has_sl_NRPSFCH_EUTRA_ThresRSRP_List_r18) {
        Encode_SL_Thres_RSRP_List_r16(enc, value.sl_NRPSFCH_EUTRA_ThresRSRP_List_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SL_UE_SelectedConfigRP_r16_ExtGroup2(Decoder& dec, SL_UE_SelectedConfigRP_r16_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SL_Thres_RSRP_List_r16(dec, value.sl_NRPSSCH_EUTRA_ThresRSRP_List_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SL_Thres_RSRP_List_r16(dec, value.sl_NRPSFCH_EUTRA_ThresRSRP_List_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_UE_SelectedConfigRP_r16_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_UE_SelectedConfigRP_r16_ExtGroup2(SL_UE_SelectedConfigRP_r16_ExtGroup2& value)
{
    if (value.has_sl_NRPSSCH_EUTRA_ThresRSRP_List_r18) {
        Free_SL_Thres_RSRP_List_r16(value.sl_NRPSSCH_EUTRA_ThresRSRP_List_r18);
    }
    if (value.has_sl_NRPSFCH_EUTRA_ThresRSRP_List_r18) {
        Free_SL_Thres_RSRP_List_r16(value.sl_NRPSFCH_EUTRA_ThresRSRP_List_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_SelectionWindowList_r16：ASN.1 SL-SelectionWindowList-r16；源文件第 23136 行；SEQUENCE OF。
// Encode_SL_SelectionWindowList_r16 只读不分配；Decode_SL_SelectionWindowList_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_SelectionWindowList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_SelectionWindowList_r16(Encoder& enc, const SL_SelectionWindowList_r16& value)
{
    if (value.count != 8u) {
        enc.Fail(ErrorCode_ValueOutOfRange);
    } else {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Encode_SL_SelectionWindowConfig_r16(enc, value.items[i]);
        }
    }
    return enc.Error();
}

ErrorCode Decode_SL_SelectionWindowList_r16(Decoder& dec, SL_SelectionWindowList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
value.count = 8u;
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_SelectionWindowConfig_r16*)std::malloc((std::size_t)value.count * sizeof(SL_SelectionWindowConfig_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_SelectionWindowConfig_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SL_SelectionWindowConfig_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_SelectionWindowList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_SelectionWindowList_r16(SL_SelectionWindowList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SL_SelectionWindowConfig_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_UE_SelectedConfigRP_r16：ASN.1 SL-UE-SelectedConfigRP-r16；源文件第 23112 行；SEQUENCE。
// Encode_SL_UE_SelectedConfigRP_r16 只读不分配；Decode_SL_UE_SelectedConfigRP_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_UE_SelectedConfigRP_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_UE_SelectedConfigRP_r16(Encoder& enc, const SL_UE_SelectedConfigRP_r16& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_CBR_PriorityTxConfigList_r16);
    enc.WriteBit(value.has_sl_Thres_RSRP_List_r16);
    enc.WriteBit(value.has_sl_MultiReserveResource_r16);
    enc.WriteBit(value.has_sl_MaxNumPerReserve_r16);
    enc.WriteBit(value.has_sl_SensingWindow_r16);
    enc.WriteBit(value.has_sl_SelectionWindowList_r16);
    enc.WriteBit(value.has_sl_ResourceReservePeriodList_r16);
    if (value.has_sl_CBR_PriorityTxConfigList_r16) {
        Encode_SL_CBR_PriorityTxConfigList_r16(enc, value.sl_CBR_PriorityTxConfigList_r16);
    }
    if (value.has_sl_Thres_RSRP_List_r16) {
        Encode_SL_Thres_RSRP_List_r16(enc, value.sl_Thres_RSRP_List_r16);
    }
    if (value.has_sl_MultiReserveResource_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_MultiReserveResource_r16), 0, 0);
    }
    if (value.has_sl_MaxNumPerReserve_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_MaxNumPerReserve_r16), 0, 1);
    }
    if (value.has_sl_SensingWindow_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_SensingWindow_r16), 0, 1);
    }
    if (value.has_sl_SelectionWindowList_r16) {
        Encode_SL_SelectionWindowList_r16(enc, value.sl_SelectionWindowList_r16);
    }
    if (value.has_sl_ResourceReservePeriodList_r16) {
enc.WriteConstrainedLength(value.sl_ResourceReservePeriodList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_ResourceReservePeriodList_r16_count; ++i) {
    Encode_SL_ResourceReservePeriod_r16(enc, value.sl_ResourceReservePeriodList_r16_items[i]);
}
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_RS_ForSensing_r16), 0, 1);
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SL_UE_SelectedConfigRP_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SL_UE_SelectedConfigRP_r16_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SL_UE_SelectedConfigRP_r16(Decoder& dec, SL_UE_SelectedConfigRP_r16& value)
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
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    if (!dec.ReadBit(present_5)) { goto fail; }
    if (!dec.ReadBit(present_6)) { goto fail; }
    if (present_0) {
        if (Decode_SL_CBR_PriorityTxConfigList_r16(dec, value.sl_CBR_PriorityTxConfigList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SL_Thres_RSRP_List_r16(dec, value.sl_Thres_RSRP_List_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        value.sl_MultiReserveResource_r16 = (SL_UE_SelectedConfigRP_r16_Sl_MultiReserveResource_r16)0;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_MaxNumPerReserve_r16 = (SL_UE_SelectedConfigRP_r16_Sl_MaxNumPerReserve_r16)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_SensingWindow_r16 = (SL_UE_SelectedConfigRP_r16_Sl_SensingWindow_r16)tmp_value;
    }
    if (present_5) {
        if (Decode_SL_SelectionWindowList_r16(dec, value.sl_SelectionWindowList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_ResourceReservePeriodList_r16_count)) { goto fail; }
if (value.sl_ResourceReservePeriodList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_ResourceReservePeriodList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_ResourceReservePeriodList_r16_count > 0u) {
    value.sl_ResourceReservePeriodList_r16_items = (SL_ResourceReservePeriod_r16*)std::malloc((std::size_t)value.sl_ResourceReservePeriodList_r16_count * sizeof(SL_ResourceReservePeriod_r16));
    if (value.sl_ResourceReservePeriodList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_ResourceReservePeriodList_r16_items, 0, (std::size_t)value.sl_ResourceReservePeriodList_r16_count * sizeof(SL_ResourceReservePeriod_r16));
}
for (std::uint32_t i = 0; i < value.sl_ResourceReservePeriodList_r16_count; ++i) {
    if (Decode_SL_ResourceReservePeriod_r16(dec, value.sl_ResourceReservePeriodList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_RS_ForSensing_r16 = (SL_UE_SelectedConfigRP_r16_Sl_RS_ForSensing_r16)tmp_value;
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
    if (Decode_SL_UE_SelectedConfigRP_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_SL_UE_SelectedConfigRP_r16_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_SL_UE_SelectedConfigRP_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_UE_SelectedConfigRP_r16(SL_UE_SelectedConfigRP_r16& value)
{
    if (value.has_sl_CBR_PriorityTxConfigList_r16) {
        Free_SL_CBR_PriorityTxConfigList_r16(value.sl_CBR_PriorityTxConfigList_r16);
    }
    if (value.has_sl_Thres_RSRP_List_r16) {
        Free_SL_Thres_RSRP_List_r16(value.sl_Thres_RSRP_List_r16);
    }
    if (value.has_sl_MultiReserveResource_r16) {
    }
    if (value.has_sl_MaxNumPerReserve_r16) {
    }
    if (value.has_sl_SensingWindow_r16) {
    }
    if (value.has_sl_SelectionWindowList_r16) {
        Free_SL_SelectionWindowList_r16(value.sl_SelectionWindowList_r16);
    }
    if (value.has_sl_ResourceReservePeriodList_r16) {
        if (value.sl_ResourceReservePeriodList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_ResourceReservePeriodList_r16_count; ++i) {
                Free_SL_ResourceReservePeriod_r16(value.sl_ResourceReservePeriodList_r16_items[i]);
            }
            std::free(value.sl_ResourceReservePeriodList_r16_items);
            value.sl_ResourceReservePeriodList_r16_items = nullptr;
        }
        value.sl_ResourceReservePeriodList_r16_count = 0;
    }
    if (value.has_extGroup1) {
        Free_SL_UE_SelectedConfigRP_r16_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SL_UE_SelectedConfigRP_r16_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_TxPercentageList_r16：ASN.1 SL-TxPercentageList-r16；源文件第 23143 行；SEQUENCE OF。
// Encode_SL_TxPercentageList_r16 只读不分配；Decode_SL_TxPercentageList_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_TxPercentageList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_TxPercentageList_r16(Encoder& enc, const SL_TxPercentageList_r16& value)
{
    if (value.count != 8u) {
        enc.Fail(ErrorCode_ValueOutOfRange);
    } else {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Encode_SL_TxPercentageConfig_r16(enc, value.items[i]);
        }
    }
    return enc.Error();
}

ErrorCode Decode_SL_TxPercentageList_r16(Decoder& dec, SL_TxPercentageList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
value.count = 8u;
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_TxPercentageConfig_r16*)std::malloc((std::size_t)value.count * sizeof(SL_TxPercentageConfig_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_TxPercentageConfig_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SL_TxPercentageConfig_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_TxPercentageList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_TxPercentageList_r16(SL_TxPercentageList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SL_TxPercentageConfig_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_MinMaxMCS_List_r16：ASN.1 SL-MinMaxMCS-List-r16；源文件第 23150 行；SEQUENCE OF。
// Encode_SL_MinMaxMCS_List_r16 只读不分配；Decode_SL_MinMaxMCS_List_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_MinMaxMCS_List_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_MinMaxMCS_List_r16(Encoder& enc, const SL_MinMaxMCS_List_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 3u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SL_MinMaxMCS_Config_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SL_MinMaxMCS_List_r16(Decoder& dec, SL_MinMaxMCS_List_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 3u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 3u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_MinMaxMCS_Config_r16*)std::malloc((std::size_t)value.count * sizeof(SL_MinMaxMCS_Config_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_MinMaxMCS_Config_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SL_MinMaxMCS_Config_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_MinMaxMCS_List_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_MinMaxMCS_List_r16(SL_MinMaxMCS_List_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SL_MinMaxMCS_Config_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PowerControl_r16_ExtGroup1：ASN.1 SL_PowerControl_r16_ExtGroup1；源文件第 23169 行；扩展添加组 [[ ]]。
// Encode_SL_PowerControl_r16_ExtGroup1 只读不分配；Decode_SL_PowerControl_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SL_PowerControl_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PowerControl_r16_ExtGroup1(Encoder& enc, const SL_PowerControl_r16_ExtGroup1& value)
{
    enc.WriteBit(value.has_dl_P0_PSSCH_PSCCH_r17);
    enc.WriteBit(value.has_sl_P0_PSSCH_PSCCH_r17);
    enc.WriteBit(value.has_dl_P0_PSFCH_r17);
    if (value.has_dl_P0_PSSCH_PSCCH_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_P0_PSSCH_PSCCH_r17), -202, 24);
    }
    if (value.has_sl_P0_PSSCH_PSCCH_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_P0_PSSCH_PSCCH_r17), -202, 24);
    }
    if (value.has_dl_P0_PSFCH_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_P0_PSFCH_r17), -202, 24);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PowerControl_r16_ExtGroup1(Decoder& dec, SL_PowerControl_r16_ExtGroup1& value)
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
        if (!dec.ReadConstrainedInteger(-202, 24, tmp_value)) { goto fail; }
        value.dl_P0_PSSCH_PSCCH_r17 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-202, 24, tmp_value)) { goto fail; }
        value.sl_P0_PSSCH_PSCCH_r17 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-202, 24, tmp_value)) { goto fail; }
        value.dl_P0_PSFCH_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PowerControl_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PowerControl_r16_ExtGroup1(SL_PowerControl_r16_ExtGroup1& value)
{
    if (value.has_dl_P0_PSSCH_PSCCH_r17) {
    }
    if (value.has_sl_P0_PSSCH_PSCCH_r17) {
    }
    if (value.has_dl_P0_PSFCH_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PowerControl_r16：ASN.1 SL-PowerControl-r16；源文件第 23160 行；SEQUENCE。
// Encode_SL_PowerControl_r16 只读不分配；Decode_SL_PowerControl_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_PowerControl_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PowerControl_r16(Encoder& enc, const SL_PowerControl_r16& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_Alpha_PSSCH_PSCCH_r16);
    enc.WriteBit(value.has_dl_Alpha_PSSCH_PSCCH_r16);
    enc.WriteBit(value.has_sl_P0_PSSCH_PSCCH_r16);
    enc.WriteBit(value.has_dl_P0_PSSCH_PSCCH_r16);
    enc.WriteBit(value.has_dl_Alpha_PSFCH_r16);
    enc.WriteBit(value.has_dl_P0_PSFCH_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_MaxTransPower_r16), -30, 33);
    if (value.has_sl_Alpha_PSSCH_PSCCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_Alpha_PSSCH_PSCCH_r16), 0, 7);
    }
    if (value.has_dl_Alpha_PSSCH_PSCCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_Alpha_PSSCH_PSCCH_r16), 0, 7);
    }
    if (value.has_sl_P0_PSSCH_PSCCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_P0_PSSCH_PSCCH_r16), -16, 15);
    }
    if (value.has_dl_P0_PSSCH_PSCCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_P0_PSSCH_PSCCH_r16), -16, 15);
    }
    if (value.has_dl_Alpha_PSFCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_Alpha_PSFCH_r16), 0, 7);
    }
    if (value.has_dl_P0_PSFCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_P0_PSFCH_r16), -16, 15);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SL_PowerControl_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SL_PowerControl_r16(Decoder& dec, SL_PowerControl_r16& value)
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
        if (!dec.ReadConstrainedInteger(-30, 33, tmp_value)) { goto fail; }
        value.sl_MaxTransPower_r16 = (int64_t)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sl_Alpha_PSSCH_PSCCH_r16 = (SL_PowerControl_r16_Sl_Alpha_PSSCH_PSCCH_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.dl_Alpha_PSSCH_PSCCH_r16 = (SL_PowerControl_r16_Dl_Alpha_PSSCH_PSCCH_r16)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-16, 15, tmp_value)) { goto fail; }
        value.sl_P0_PSSCH_PSCCH_r16 = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-16, 15, tmp_value)) { goto fail; }
        value.dl_P0_PSSCH_PSCCH_r16 = (int64_t)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.dl_Alpha_PSFCH_r16 = (SL_PowerControl_r16_Dl_Alpha_PSFCH_r16)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-16, 15, tmp_value)) { goto fail; }
        value.dl_P0_PSFCH_r16 = (int64_t)tmp_value;
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
    if (Decode_SL_PowerControl_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_SL_PowerControl_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PowerControl_r16(SL_PowerControl_r16& value)
{
    if (value.has_sl_Alpha_PSSCH_PSCCH_r16) {
    }
    if (value.has_dl_Alpha_PSSCH_PSCCH_r16) {
    }
    if (value.has_sl_P0_PSSCH_PSCCH_r16) {
    }
    if (value.has_dl_P0_PSSCH_PSCCH_r16) {
    }
    if (value.has_dl_Alpha_PSFCH_r16) {
    }
    if (value.has_dl_P0_PSFCH_r16) {
    }
    if (value.has_extGroup1) {
        Free_SL_PowerControl_r16_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PSCCH_Config_r16：ASN.1 SL-PSCCH-Config-r16；源文件第 23081 行；SEQUENCE。
// Encode_SL_PSCCH_Config_r16 只读不分配；Decode_SL_PSCCH_Config_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_PSCCH_Config_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PSCCH_Config_r16(Encoder& enc, const SL_PSCCH_Config_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_TimeResourcePSCCH_r16);
    enc.WriteBit(value.has_sl_FreqResourcePSCCH_r16);
    enc.WriteBit(value.has_sl_DMRS_ScrambleID_r16);
    enc.WriteBit(value.has_sl_NumReservedBits_r16);
    if (value.has_sl_TimeResourcePSCCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_TimeResourcePSCCH_r16), 0, 1);
    }
    if (value.has_sl_FreqResourcePSCCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_FreqResourcePSCCH_r16), 0, 4);
    }
    if (value.has_sl_DMRS_ScrambleID_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_DMRS_ScrambleID_r16), 0, 65535);
    }
    if (value.has_sl_NumReservedBits_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_NumReservedBits_r16), 2, 4);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PSCCH_Config_r16(Decoder& dec, SL_PSCCH_Config_r16& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_TimeResourcePSCCH_r16 = (SL_PSCCH_Config_r16_Sl_TimeResourcePSCCH_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.sl_FreqResourcePSCCH_r16 = (SL_PSCCH_Config_r16_Sl_FreqResourcePSCCH_r16)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.sl_DMRS_ScrambleID_r16 = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.sl_NumReservedBits_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PSCCH_Config_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PSCCH_Config_r16(SL_PSCCH_Config_r16& value)
{
    if (value.has_sl_TimeResourcePSCCH_r16) {
    }
    if (value.has_sl_FreqResourcePSCCH_r16) {
    }
    if (value.has_sl_DMRS_ScrambleID_r16) {
    }
    if (value.has_sl_NumReservedBits_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SL_PSCCH_Config_r16：ASN.1 SetupRelease<SL-PSCCH-Config-r16>；源文件第 22993 行；CHOICE。
// Encode_SetupRelease_SL_PSCCH_Config_r16 只读不分配；Decode_SetupRelease_SL_PSCCH_Config_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SL_PSCCH_Config_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SL_PSCCH_Config_r16(Encoder& enc, const SetupRelease_SL_PSCCH_Config_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SL_PSCCH_Config_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_SL_PSCCH_Config_r16_Tag_setup:
        Encode_SL_PSCCH_Config_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SL_PSCCH_Config_r16(Decoder& dec, SetupRelease_SL_PSCCH_Config_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SL_PSCCH_Config_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SL_PSCCH_Config_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SL_PSCCH_Config_r16_Tag_setup: {
        if (Decode_SL_PSCCH_Config_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SL_PSCCH_Config_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SL_PSCCH_Config_r16(SetupRelease_SL_PSCCH_Config_r16& value)
{
    switch (value.tag) {
    case SetupRelease_SL_PSCCH_Config_r16_Tag_release:
        break;
    case SetupRelease_SL_PSCCH_Config_r16_Tag_setup:
        Free_SL_PSCCH_Config_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PSSCH_Config_r16：ASN.1 SL-PSSCH-Config-r16；源文件第 23089 行；SEQUENCE。
// Encode_SL_PSSCH_Config_r16 只读不分配；Decode_SL_PSSCH_Config_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_PSSCH_Config_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PSSCH_Config_r16(Encoder& enc, const SL_PSSCH_Config_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_PSSCH_DMRS_TimePatternList_r16);
    enc.WriteBit(value.has_sl_BetaOffsets2ndSCI_r16);
    enc.WriteBit(value.has_sl_Scaling_r16);
    if (value.has_sl_PSSCH_DMRS_TimePatternList_r16) {
enc.WriteConstrainedLength(value.sl_PSSCH_DMRS_TimePatternList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_PSSCH_DMRS_TimePatternList_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_PSSCH_DMRS_TimePatternList_r16_items[i]), 2, 4);
}
    }
    if (value.has_sl_BetaOffsets2ndSCI_r16) {
enc.WriteConstrainedLength(value.sl_BetaOffsets2ndSCI_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_BetaOffsets2ndSCI_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_BetaOffsets2ndSCI_r16_items[i]), 0, 31);
}
    }
    if (value.has_sl_Scaling_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_Scaling_r16), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PSSCH_Config_r16(Decoder& dec, SL_PSSCH_Config_r16& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_PSSCH_DMRS_TimePatternList_r16_count)) { goto fail; }
if (value.sl_PSSCH_DMRS_TimePatternList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_PSSCH_DMRS_TimePatternList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_PSSCH_DMRS_TimePatternList_r16_count > 0u) {
    value.sl_PSSCH_DMRS_TimePatternList_r16_items = (int64_t*)std::malloc((std::size_t)value.sl_PSSCH_DMRS_TimePatternList_r16_count * sizeof(int64_t));
    if (value.sl_PSSCH_DMRS_TimePatternList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_PSSCH_DMRS_TimePatternList_r16_items, 0, (std::size_t)value.sl_PSSCH_DMRS_TimePatternList_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.sl_PSSCH_DMRS_TimePatternList_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
    value.sl_PSSCH_DMRS_TimePatternList_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_BetaOffsets2ndSCI_r16_count)) { goto fail; }
if (value.sl_BetaOffsets2ndSCI_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_BetaOffsets2ndSCI_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_BetaOffsets2ndSCI_r16_count > 0u) {
    value.sl_BetaOffsets2ndSCI_r16_items = (SL_BetaOffsets_r16*)std::malloc((std::size_t)value.sl_BetaOffsets2ndSCI_r16_count * sizeof(SL_BetaOffsets_r16));
    if (value.sl_BetaOffsets2ndSCI_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_BetaOffsets2ndSCI_r16_items, 0, (std::size_t)value.sl_BetaOffsets2ndSCI_r16_count * sizeof(SL_BetaOffsets_r16));
}
for (std::uint32_t i = 0; i < value.sl_BetaOffsets2ndSCI_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.sl_BetaOffsets2ndSCI_r16_items[i] = (SL_BetaOffsets_r16)tmp_value;
}
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.sl_Scaling_r16 = (SL_PSSCH_Config_r16_Sl_Scaling_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PSSCH_Config_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PSSCH_Config_r16(SL_PSSCH_Config_r16& value)
{
    if (value.has_sl_PSSCH_DMRS_TimePatternList_r16) {
        if (value.sl_PSSCH_DMRS_TimePatternList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_PSSCH_DMRS_TimePatternList_r16_count; ++i) {
            }
            std::free(value.sl_PSSCH_DMRS_TimePatternList_r16_items);
            value.sl_PSSCH_DMRS_TimePatternList_r16_items = nullptr;
        }
        value.sl_PSSCH_DMRS_TimePatternList_r16_count = 0;
    }
    if (value.has_sl_BetaOffsets2ndSCI_r16) {
        if (value.sl_BetaOffsets2ndSCI_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_BetaOffsets2ndSCI_r16_count; ++i) {
            }
            std::free(value.sl_BetaOffsets2ndSCI_r16_items);
            value.sl_BetaOffsets2ndSCI_r16_items = nullptr;
        }
        value.sl_BetaOffsets2ndSCI_r16_count = 0;
    }
    if (value.has_sl_Scaling_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SL_PSSCH_Config_r16：ASN.1 SetupRelease<SL-PSSCH-Config-r16>；源文件第 22994 行；CHOICE。
// Encode_SetupRelease_SL_PSSCH_Config_r16 只读不分配；Decode_SetupRelease_SL_PSSCH_Config_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SL_PSSCH_Config_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SL_PSSCH_Config_r16(Encoder& enc, const SetupRelease_SL_PSSCH_Config_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SL_PSSCH_Config_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_SL_PSSCH_Config_r16_Tag_setup:
        Encode_SL_PSSCH_Config_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SL_PSSCH_Config_r16(Decoder& dec, SetupRelease_SL_PSSCH_Config_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SL_PSSCH_Config_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SL_PSSCH_Config_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SL_PSSCH_Config_r16_Tag_setup: {
        if (Decode_SL_PSSCH_Config_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SL_PSSCH_Config_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SL_PSSCH_Config_r16(SetupRelease_SL_PSSCH_Config_r16& value)
{
    switch (value.tag) {
    case SetupRelease_SL_PSSCH_Config_r16_Tag_release:
        break;
    case SetupRelease_SL_PSSCH_Config_r16_Tag_setup:
        Free_SL_PSSCH_Config_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PSFCH_Config_r16：ASN.1 SL-PSFCH-Config-r16；源文件第 23096 行；SEQUENCE。
// Encode_SL_PSFCH_Config_r16 只读不分配；Decode_SL_PSFCH_Config_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_PSFCH_Config_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PSFCH_Config_r16(Encoder& enc, const SL_PSFCH_Config_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_PSFCH_Period_r16);
    enc.WriteBit(value.has_sl_PSFCH_RB_Set_r16);
    enc.WriteBit(value.has_sl_NumMuxCS_Pair_r16);
    enc.WriteBit(value.has_sl_MinTimeGapPSFCH_r16);
    enc.WriteBit(value.has_sl_PSFCH_HopID_r16);
    enc.WriteBit(value.has_sl_PSFCH_CandidateResourceType_r16);
    if (value.has_sl_PSFCH_Period_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PSFCH_Period_r16), 0, 3);
    }
    if (value.has_sl_PSFCH_RB_Set_r16) {
        enc.WriteConstrainedBitString(value.sl_PSFCH_RB_Set_r16.bytes, value.sl_PSFCH_RB_Set_r16.bitLength, 10, 275);
    }
    if (value.has_sl_NumMuxCS_Pair_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_NumMuxCS_Pair_r16), 0, 3);
    }
    if (value.has_sl_MinTimeGapPSFCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_MinTimeGapPSFCH_r16), 0, 1);
    }
    if (value.has_sl_PSFCH_HopID_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PSFCH_HopID_r16), 0, 1023);
    }
    if (value.has_sl_PSFCH_CandidateResourceType_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PSFCH_CandidateResourceType_r16), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PSFCH_Config_r16(Decoder& dec, SL_PSFCH_Config_r16& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.sl_PSFCH_Period_r16 = (SL_PSFCH_Config_r16_Sl_PSFCH_Period_r16)tmp_value;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 10, 275)) { goto fail; }
        value.sl_PSFCH_RB_Set_r16.bytes = string_bytes;
        value.sl_PSFCH_RB_Set_r16.bitLength = string_length;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.sl_NumMuxCS_Pair_r16 = (SL_PSFCH_Config_r16_Sl_NumMuxCS_Pair_r16)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_MinTimeGapPSFCH_r16 = (SL_PSFCH_Config_r16_Sl_MinTimeGapPSFCH_r16)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.sl_PSFCH_HopID_r16 = (int64_t)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_PSFCH_CandidateResourceType_r16 = (SL_PSFCH_Config_r16_Sl_PSFCH_CandidateResourceType_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PSFCH_Config_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PSFCH_Config_r16(SL_PSFCH_Config_r16& value)
{
    if (value.has_sl_PSFCH_Period_r16) {
    }
    if (value.has_sl_PSFCH_RB_Set_r16) {
        std::free(value.sl_PSFCH_RB_Set_r16.bytes);
        value.sl_PSFCH_RB_Set_r16.bytes = nullptr;
        value.sl_PSFCH_RB_Set_r16.bitLength = 0;
    }
    if (value.has_sl_NumMuxCS_Pair_r16) {
    }
    if (value.has_sl_MinTimeGapPSFCH_r16) {
    }
    if (value.has_sl_PSFCH_HopID_r16) {
    }
    if (value.has_sl_PSFCH_CandidateResourceType_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SL_PSFCH_Config_r16：ASN.1 SetupRelease<SL-PSFCH-Config-r16>；源文件第 22995 行；CHOICE。
// Encode_SetupRelease_SL_PSFCH_Config_r16 只读不分配；Decode_SetupRelease_SL_PSFCH_Config_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SL_PSFCH_Config_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SL_PSFCH_Config_r16(Encoder& enc, const SetupRelease_SL_PSFCH_Config_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SL_PSFCH_Config_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_SL_PSFCH_Config_r16_Tag_setup:
        Encode_SL_PSFCH_Config_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SL_PSFCH_Config_r16(Decoder& dec, SetupRelease_SL_PSFCH_Config_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SL_PSFCH_Config_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SL_PSFCH_Config_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SL_PSFCH_Config_r16_Tag_setup: {
        if (Decode_SL_PSFCH_Config_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SL_PSFCH_Config_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SL_PSFCH_Config_r16(SetupRelease_SL_PSFCH_Config_r16& value)
{
    switch (value.tag) {
    case SetupRelease_SL_PSFCH_Config_r16_Tag_release:
        break;
    case SetupRelease_SL_PSFCH_Config_r16_Tag_setup:
        Free_SL_PSFCH_Config_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ResourcePool_r16_Sl_RxParametersNcell_r16：ASN.1 sl-RxParametersNcell-r16；源文件第 23007 行；SEQUENCE。
// Encode_SL_ResourcePool_r16_Sl_RxParametersNcell_r16 只读不分配；Decode_SL_ResourcePool_r16_Sl_RxParametersNcell_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_ResourcePool_r16_Sl_RxParametersNcell_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ResourcePool_r16_Sl_RxParametersNcell_r16(Encoder& enc, const SL_ResourcePool_r16_Sl_RxParametersNcell_r16& value)
{
    enc.WriteBit(value.has_sl_TDD_Configuration_r16);
    if (value.has_sl_TDD_Configuration_r16) {
        Encode_TDD_UL_DL_ConfigCommon(enc, value.sl_TDD_Configuration_r16);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_SyncConfigIndex_r16), 0, 15);
    return enc.Error();
}

ErrorCode Decode_SL_ResourcePool_r16_Sl_RxParametersNcell_r16(Decoder& dec, SL_ResourcePool_r16_Sl_RxParametersNcell_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_TDD_UL_DL_ConfigCommon(dec, value.sl_TDD_Configuration_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.sl_SyncConfigIndex_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ResourcePool_r16_Sl_RxParametersNcell_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ResourcePool_r16_Sl_RxParametersNcell_r16(SL_ResourcePool_r16_Sl_RxParametersNcell_r16& value)
{
    if (value.has_sl_TDD_Configuration_r16) {
        Free_TDD_UL_DL_ConfigCommon(value.sl_TDD_Configuration_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ResourcePool_r16：ASN.1 SL-ResourcePool-r16；源文件第 22992 行；SEQUENCE。
// Encode_SL_ResourcePool_r16 只读不分配；Decode_SL_ResourcePool_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_ResourcePool_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ResourcePool_r16(Encoder& enc, const SL_ResourcePool_r16& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_PSCCH_Config_r16);
    enc.WriteBit(value.has_sl_PSSCH_Config_r16);
    enc.WriteBit(value.has_sl_PSFCH_Config_r16);
    enc.WriteBit(value.has_sl_SyncAllowed_r16);
    enc.WriteBit(value.has_sl_SubchannelSize_r16);
    enc.WriteBit(value.has_dummy);
    enc.WriteBit(value.has_sl_StartRB_Subchannel_r16);
    enc.WriteBit(value.has_sl_NumSubchannel_r16);
    enc.WriteBit(value.has_sl_Additional_MCS_Table_r16);
    enc.WriteBit(value.has_sl_ThreshS_RSSI_CBR_r16);
    enc.WriteBit(value.has_sl_TimeWindowSizeCBR_r16);
    enc.WriteBit(value.has_sl_TimeWindowSizeCR_r16);
    enc.WriteBit(value.has_sl_PTRS_Config_r16);
    enc.WriteBit(value.has_sl_UE_SelectedConfigRP_r16);
    enc.WriteBit(value.has_sl_RxParametersNcell_r16);
    enc.WriteBit(value.has_sl_ZoneConfigMCR_List_r16);
    enc.WriteBit(value.has_sl_FilterCoefficient_r16);
    enc.WriteBit(value.has_sl_RB_Number_r16);
    enc.WriteBit(value.has_sl_PreemptionEnable_r16);
    enc.WriteBit(value.has_sl_PriorityThreshold_UL_URLLC_r16);
    enc.WriteBit(value.has_sl_PriorityThreshold_r16);
    enc.WriteBit(value.has_sl_X_Overhead_r16);
    enc.WriteBit(value.has_sl_PowerControl_r16);
    enc.WriteBit(value.has_sl_TxPercentageList_r16);
    enc.WriteBit(value.has_sl_MinMaxMCS_List_r16);
    if (value.has_sl_PSCCH_Config_r16) {
        Encode_SetupRelease_SL_PSCCH_Config_r16(enc, value.sl_PSCCH_Config_r16);
    }
    if (value.has_sl_PSSCH_Config_r16) {
        Encode_SetupRelease_SL_PSSCH_Config_r16(enc, value.sl_PSSCH_Config_r16);
    }
    if (value.has_sl_PSFCH_Config_r16) {
        Encode_SetupRelease_SL_PSFCH_Config_r16(enc, value.sl_PSFCH_Config_r16);
    }
    if (value.has_sl_SyncAllowed_r16) {
        Encode_SL_SyncAllowed_r16(enc, value.sl_SyncAllowed_r16);
    }
    if (value.has_sl_SubchannelSize_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_SubchannelSize_r16), 0, 7);
    }
    if (value.has_dummy) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy), 10, 160);
    }
    if (value.has_sl_StartRB_Subchannel_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_StartRB_Subchannel_r16), 0, 265);
    }
    if (value.has_sl_NumSubchannel_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_NumSubchannel_r16), 1, 27);
    }
    if (value.has_sl_Additional_MCS_Table_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_Additional_MCS_Table_r16), 0, 2);
    }
    if (value.has_sl_ThreshS_RSSI_CBR_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_ThreshS_RSSI_CBR_r16), 0, 45);
    }
    if (value.has_sl_TimeWindowSizeCBR_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_TimeWindowSizeCBR_r16), 0, 1);
    }
    if (value.has_sl_TimeWindowSizeCR_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_TimeWindowSizeCR_r16), 0, 1);
    }
    if (value.has_sl_PTRS_Config_r16) {
        Encode_SL_PTRS_Config_r16(enc, value.sl_PTRS_Config_r16);
    }
    if (value.has_sl_UE_SelectedConfigRP_r16) {
        Encode_SL_UE_SelectedConfigRP_r16(enc, value.sl_UE_SelectedConfigRP_r16);
    }
    if (value.has_sl_RxParametersNcell_r16) {
        Encode_SL_ResourcePool_r16_Sl_RxParametersNcell_r16(enc, value.sl_RxParametersNcell_r16);
    }
    if (value.has_sl_ZoneConfigMCR_List_r16) {
enc.WriteConstrainedLength(value.sl_ZoneConfigMCR_List_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_ZoneConfigMCR_List_r16_count; ++i) {
    Encode_SL_ZoneConfigMCR_r16(enc, value.sl_ZoneConfigMCR_List_r16_items[i]);
}
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
    if (value.has_sl_RB_Number_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_RB_Number_r16), 10, 275);
    }
    if (value.has_sl_PreemptionEnable_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PreemptionEnable_r16), 0, 8);
    }
    if (value.has_sl_PriorityThreshold_UL_URLLC_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PriorityThreshold_UL_URLLC_r16), 1, 9);
    }
    if (value.has_sl_PriorityThreshold_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PriorityThreshold_r16), 1, 9);
    }
    if (value.has_sl_X_Overhead_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_X_Overhead_r16), 0, 3);
    }
    if (value.has_sl_PowerControl_r16) {
        Encode_SL_PowerControl_r16(enc, value.sl_PowerControl_r16);
    }
    if (value.has_sl_TxPercentageList_r16) {
        Encode_SL_TxPercentageList_r16(enc, value.sl_TxPercentageList_r16);
    }
    if (value.has_sl_MinMaxMCS_List_r16) {
        Encode_SL_MinMaxMCS_List_r16(enc, value.sl_MinMaxMCS_List_r16);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SL_ResourcePool_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SL_ResourcePool_r16_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_SL_ResourcePool_r16_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SL_ResourcePool_r16(Decoder& dec, SL_ResourcePool_r16& value)
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
    bool present_21 = false;
    bool present_22 = false;
    bool present_23 = false;
    bool present_24 = false;
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
    if (!dec.ReadBit(present_21)) { goto fail; }
    if (!dec.ReadBit(present_22)) { goto fail; }
    if (!dec.ReadBit(present_23)) { goto fail; }
    if (!dec.ReadBit(present_24)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_SL_PSCCH_Config_r16(dec, value.sl_PSCCH_Config_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_SL_PSSCH_Config_r16(dec, value.sl_PSSCH_Config_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SetupRelease_SL_PSFCH_Config_r16(dec, value.sl_PSFCH_Config_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SL_SyncAllowed_r16(dec, value.sl_SyncAllowed_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sl_SubchannelSize_r16 = (SL_ResourcePool_r16_Sl_SubchannelSize_r16)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(10, 160, tmp_value)) { goto fail; }
        value.dummy = (int64_t)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 265, tmp_value)) { goto fail; }
        value.sl_StartRB_Subchannel_r16 = (int64_t)tmp_value;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 27, tmp_value)) { goto fail; }
        value.sl_NumSubchannel_r16 = (int64_t)tmp_value;
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.sl_Additional_MCS_Table_r16 = (SL_ResourcePool_r16_Sl_Additional_MCS_Table_r16)tmp_value;
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 45, tmp_value)) { goto fail; }
        value.sl_ThreshS_RSSI_CBR_r16 = (int64_t)tmp_value;
    }
    if (present_10) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_TimeWindowSizeCBR_r16 = (SL_ResourcePool_r16_Sl_TimeWindowSizeCBR_r16)tmp_value;
    }
    if (present_11) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_TimeWindowSizeCR_r16 = (SL_ResourcePool_r16_Sl_TimeWindowSizeCR_r16)tmp_value;
    }
    if (present_12) {
        if (Decode_SL_PTRS_Config_r16(dec, value.sl_PTRS_Config_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_13) {
        if (Decode_SL_UE_SelectedConfigRP_r16(dec, value.sl_UE_SelectedConfigRP_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_14) {
        if (Decode_SL_ResourcePool_r16_Sl_RxParametersNcell_r16(dec, value.sl_RxParametersNcell_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_15) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_ZoneConfigMCR_List_r16_count)) { goto fail; }
if (value.sl_ZoneConfigMCR_List_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_ZoneConfigMCR_List_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_ZoneConfigMCR_List_r16_count > 0u) {
    value.sl_ZoneConfigMCR_List_r16_items = (SL_ZoneConfigMCR_r16*)std::malloc((std::size_t)value.sl_ZoneConfigMCR_List_r16_count * sizeof(SL_ZoneConfigMCR_r16));
    if (value.sl_ZoneConfigMCR_List_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_ZoneConfigMCR_List_r16_items, 0, (std::size_t)value.sl_ZoneConfigMCR_List_r16_count * sizeof(SL_ZoneConfigMCR_r16));
}
for (std::uint32_t i = 0; i < value.sl_ZoneConfigMCR_List_r16_count; ++i) {
    if (Decode_SL_ZoneConfigMCR_r16(dec, value.sl_ZoneConfigMCR_List_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_16) {
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
    if (present_17) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(10, 275, tmp_value)) { goto fail; }
        value.sl_RB_Number_r16 = (int64_t)tmp_value;
    }
    if (present_18) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 8, tmp_value)) { goto fail; }
        value.sl_PreemptionEnable_r16 = (SL_ResourcePool_r16_Sl_PreemptionEnable_r16)tmp_value;
    }
    if (present_19) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 9, tmp_value)) { goto fail; }
        value.sl_PriorityThreshold_UL_URLLC_r16 = (int64_t)tmp_value;
    }
    if (present_20) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 9, tmp_value)) { goto fail; }
        value.sl_PriorityThreshold_r16 = (int64_t)tmp_value;
    }
    if (present_21) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.sl_X_Overhead_r16 = (SL_ResourcePool_r16_Sl_X_Overhead_r16)tmp_value;
    }
    if (present_22) {
        if (Decode_SL_PowerControl_r16(dec, value.sl_PowerControl_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_23) {
        if (Decode_SL_TxPercentageList_r16(dec, value.sl_TxPercentageList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_24) {
        if (Decode_SL_MinMaxMCS_List_r16(dec, value.sl_MinMaxMCS_List_r16) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_SL_ResourcePool_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_SL_ResourcePool_r16_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_SL_ResourcePool_r16_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    Free_SL_ResourcePool_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ResourcePool_r16(SL_ResourcePool_r16& value)
{
    if (value.has_sl_PSCCH_Config_r16) {
        Free_SetupRelease_SL_PSCCH_Config_r16(value.sl_PSCCH_Config_r16);
    }
    if (value.has_sl_PSSCH_Config_r16) {
        Free_SetupRelease_SL_PSSCH_Config_r16(value.sl_PSSCH_Config_r16);
    }
    if (value.has_sl_PSFCH_Config_r16) {
        Free_SetupRelease_SL_PSFCH_Config_r16(value.sl_PSFCH_Config_r16);
    }
    if (value.has_sl_SyncAllowed_r16) {
        Free_SL_SyncAllowed_r16(value.sl_SyncAllowed_r16);
    }
    if (value.has_sl_SubchannelSize_r16) {
    }
    if (value.has_dummy) {
    }
    if (value.has_sl_StartRB_Subchannel_r16) {
    }
    if (value.has_sl_NumSubchannel_r16) {
    }
    if (value.has_sl_Additional_MCS_Table_r16) {
    }
    if (value.has_sl_ThreshS_RSSI_CBR_r16) {
    }
    if (value.has_sl_TimeWindowSizeCBR_r16) {
    }
    if (value.has_sl_TimeWindowSizeCR_r16) {
    }
    if (value.has_sl_PTRS_Config_r16) {
        Free_SL_PTRS_Config_r16(value.sl_PTRS_Config_r16);
    }
    if (value.has_sl_UE_SelectedConfigRP_r16) {
        Free_SL_UE_SelectedConfigRP_r16(value.sl_UE_SelectedConfigRP_r16);
    }
    if (value.has_sl_RxParametersNcell_r16) {
        Free_SL_ResourcePool_r16_Sl_RxParametersNcell_r16(value.sl_RxParametersNcell_r16);
    }
    if (value.has_sl_ZoneConfigMCR_List_r16) {
        if (value.sl_ZoneConfigMCR_List_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_ZoneConfigMCR_List_r16_count; ++i) {
                Free_SL_ZoneConfigMCR_r16(value.sl_ZoneConfigMCR_List_r16_items[i]);
            }
            std::free(value.sl_ZoneConfigMCR_List_r16_items);
            value.sl_ZoneConfigMCR_List_r16_items = nullptr;
        }
        value.sl_ZoneConfigMCR_List_r16_count = 0;
    }
    if (value.has_sl_FilterCoefficient_r16) {
    }
    if (value.has_sl_RB_Number_r16) {
    }
    if (value.has_sl_PreemptionEnable_r16) {
    }
    if (value.has_sl_PriorityThreshold_UL_URLLC_r16) {
    }
    if (value.has_sl_PriorityThreshold_r16) {
    }
    if (value.has_sl_X_Overhead_r16) {
    }
    if (value.has_sl_PowerControl_r16) {
        Free_SL_PowerControl_r16(value.sl_PowerControl_r16);
    }
    if (value.has_sl_TxPercentageList_r16) {
        Free_SL_TxPercentageList_r16(value.sl_TxPercentageList_r16);
    }
    if (value.has_sl_MinMaxMCS_List_r16) {
        Free_SL_MinMaxMCS_List_r16(value.sl_MinMaxMCS_List_r16);
    }
    if (value.has_extGroup1) {
        Free_SL_ResourcePool_r16_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SL_ResourcePool_r16_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_SL_ResourcePool_r16_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ResourcePoolConfig_r16：ASN.1 SL-ResourcePoolConfig-r16；源文件第 21981 行；SEQUENCE。
// Encode_SL_ResourcePoolConfig_r16 只读不分配；Decode_SL_ResourcePoolConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_ResourcePoolConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ResourcePoolConfig_r16(Encoder& enc, const SL_ResourcePoolConfig_r16& value)
{
    enc.WriteBit(value.has_sl_ResourcePool_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_ResourcePoolID_r16), 1, 16);
    if (value.has_sl_ResourcePool_r16) {
        Encode_SL_ResourcePool_r16(enc, value.sl_ResourcePool_r16);
    }
    return enc.Error();
}

ErrorCode Decode_SL_ResourcePoolConfig_r16(Decoder& dec, SL_ResourcePoolConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.sl_ResourcePoolID_r16 = (SL_ResourcePoolID_r16)tmp_value;
    }
    if (present_0) {
        if (Decode_SL_ResourcePool_r16(dec, value.sl_ResourcePool_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ResourcePoolConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ResourcePoolConfig_r16(SL_ResourcePoolConfig_r16& value)
{
    if (value.has_sl_ResourcePool_r16) {
        Free_SL_ResourcePool_r16(value.sl_ResourcePool_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_BWP_PoolConfig_r16：ASN.1 SL-BWP-PoolConfig-r16；源文件第 21969 行；SEQUENCE。
// Encode_SL_BWP_PoolConfig_r16 只读不分配；Decode_SL_BWP_PoolConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_BWP_PoolConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_BWP_PoolConfig_r16(Encoder& enc, const SL_BWP_PoolConfig_r16& value)
{
    enc.WriteBit(value.has_sl_RxPool_r16);
    enc.WriteBit(value.has_sl_TxPoolSelectedNormal_r16);
    enc.WriteBit(value.has_sl_TxPoolScheduling_r16);
    enc.WriteBit(value.has_sl_TxPoolExceptional_r16);
    if (value.has_sl_RxPool_r16) {
enc.WriteConstrainedLength(value.sl_RxPool_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_RxPool_r16_count; ++i) {
    Encode_SL_ResourcePool_r16(enc, value.sl_RxPool_r16_items[i]);
}
    }
    if (value.has_sl_TxPoolSelectedNormal_r16) {
        Encode_SL_TxPoolDedicated_r16(enc, value.sl_TxPoolSelectedNormal_r16);
    }
    if (value.has_sl_TxPoolScheduling_r16) {
        Encode_SL_TxPoolDedicated_r16(enc, value.sl_TxPoolScheduling_r16);
    }
    if (value.has_sl_TxPoolExceptional_r16) {
        Encode_SL_ResourcePoolConfig_r16(enc, value.sl_TxPoolExceptional_r16);
    }
    return enc.Error();
}

ErrorCode Decode_SL_BWP_PoolConfig_r16(Decoder& dec, SL_BWP_PoolConfig_r16& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_RxPool_r16_count)) { goto fail; }
if (value.sl_RxPool_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_RxPool_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_RxPool_r16_count > 0u) {
    value.sl_RxPool_r16_items = (SL_ResourcePool_r16*)std::malloc((std::size_t)value.sl_RxPool_r16_count * sizeof(SL_ResourcePool_r16));
    if (value.sl_RxPool_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_RxPool_r16_items, 0, (std::size_t)value.sl_RxPool_r16_count * sizeof(SL_ResourcePool_r16));
}
for (std::uint32_t i = 0; i < value.sl_RxPool_r16_count; ++i) {
    if (Decode_SL_ResourcePool_r16(dec, value.sl_RxPool_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
        if (Decode_SL_TxPoolDedicated_r16(dec, value.sl_TxPoolSelectedNormal_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SL_TxPoolDedicated_r16(dec, value.sl_TxPoolScheduling_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SL_ResourcePoolConfig_r16(dec, value.sl_TxPoolExceptional_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_BWP_PoolConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_BWP_PoolConfig_r16(SL_BWP_PoolConfig_r16& value)
{
    if (value.has_sl_RxPool_r16) {
        if (value.sl_RxPool_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_RxPool_r16_count; ++i) {
                Free_SL_ResourcePool_r16(value.sl_RxPool_r16_items[i]);
            }
            std::free(value.sl_RxPool_r16_items);
            value.sl_RxPool_r16_items = nullptr;
        }
        value.sl_RxPool_r16_count = 0;
    }
    if (value.has_sl_TxPoolSelectedNormal_r16) {
        Free_SL_TxPoolDedicated_r16(value.sl_TxPoolSelectedNormal_r16);
    }
    if (value.has_sl_TxPoolScheduling_r16) {
        Free_SL_TxPoolDedicated_r16(value.sl_TxPoolScheduling_r16);
    }
    if (value.has_sl_TxPoolExceptional_r16) {
        Free_SL_ResourcePoolConfig_r16(value.sl_TxPoolExceptional_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SL_BWP_PoolConfig_r16：ASN.1 SetupRelease<SL-BWP-PoolConfig-r16>；源文件第 21900 行；CHOICE。
// Encode_SetupRelease_SL_BWP_PoolConfig_r16 只读不分配；Decode_SetupRelease_SL_BWP_PoolConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SL_BWP_PoolConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SL_BWP_PoolConfig_r16(Encoder& enc, const SetupRelease_SL_BWP_PoolConfig_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SL_BWP_PoolConfig_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_SL_BWP_PoolConfig_r16_Tag_setup:
        Encode_SL_BWP_PoolConfig_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SL_BWP_PoolConfig_r16(Decoder& dec, SetupRelease_SL_BWP_PoolConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SL_BWP_PoolConfig_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SL_BWP_PoolConfig_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SL_BWP_PoolConfig_r16_Tag_setup: {
        if (Decode_SL_BWP_PoolConfig_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SL_BWP_PoolConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SL_BWP_PoolConfig_r16(SetupRelease_SL_BWP_PoolConfig_r16& value)
{
    switch (value.tag) {
    case SetupRelease_SL_BWP_PoolConfig_r16_Tag_release:
        break;
    case SetupRelease_SL_BWP_PoolConfig_r16_Tag_setup:
        Free_SL_BWP_PoolConfig_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_BWP_DiscPoolConfig_r17：ASN.1 SL-BWP-DiscPoolConfig-r17；源文件第 21951 行；SEQUENCE。
// Encode_SL_BWP_DiscPoolConfig_r17 只读不分配；Decode_SL_BWP_DiscPoolConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_SL_BWP_DiscPoolConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_BWP_DiscPoolConfig_r17(Encoder& enc, const SL_BWP_DiscPoolConfig_r17& value)
{
    enc.WriteBit(value.has_sl_DiscRxPool_r17);
    enc.WriteBit(value.has_sl_DiscTxPoolSelected_r17);
    enc.WriteBit(value.has_sl_DiscTxPoolScheduling_r17);
    if (value.has_sl_DiscRxPool_r17) {
enc.WriteConstrainedLength(value.sl_DiscRxPool_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_DiscRxPool_r17_count; ++i) {
    Encode_SL_ResourcePool_r16(enc, value.sl_DiscRxPool_r17_items[i]);
}
    }
    if (value.has_sl_DiscTxPoolSelected_r17) {
        Encode_SL_TxPoolDedicated_r16(enc, value.sl_DiscTxPoolSelected_r17);
    }
    if (value.has_sl_DiscTxPoolScheduling_r17) {
        Encode_SL_TxPoolDedicated_r16(enc, value.sl_DiscTxPoolScheduling_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SL_BWP_DiscPoolConfig_r17(Decoder& dec, SL_BWP_DiscPoolConfig_r17& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_DiscRxPool_r17_count)) { goto fail; }
if (value.sl_DiscRxPool_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_DiscRxPool_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_DiscRxPool_r17_count > 0u) {
    value.sl_DiscRxPool_r17_items = (SL_ResourcePool_r16*)std::malloc((std::size_t)value.sl_DiscRxPool_r17_count * sizeof(SL_ResourcePool_r16));
    if (value.sl_DiscRxPool_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_DiscRxPool_r17_items, 0, (std::size_t)value.sl_DiscRxPool_r17_count * sizeof(SL_ResourcePool_r16));
}
for (std::uint32_t i = 0; i < value.sl_DiscRxPool_r17_count; ++i) {
    if (Decode_SL_ResourcePool_r16(dec, value.sl_DiscRxPool_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
        if (Decode_SL_TxPoolDedicated_r16(dec, value.sl_DiscTxPoolSelected_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SL_TxPoolDedicated_r16(dec, value.sl_DiscTxPoolScheduling_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_BWP_DiscPoolConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_BWP_DiscPoolConfig_r17(SL_BWP_DiscPoolConfig_r17& value)
{
    if (value.has_sl_DiscRxPool_r17) {
        if (value.sl_DiscRxPool_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_DiscRxPool_r17_count; ++i) {
                Free_SL_ResourcePool_r16(value.sl_DiscRxPool_r17_items[i]);
            }
            std::free(value.sl_DiscRxPool_r17_items);
            value.sl_DiscRxPool_r17_items = nullptr;
        }
        value.sl_DiscRxPool_r17_count = 0;
    }
    if (value.has_sl_DiscTxPoolSelected_r17) {
        Free_SL_TxPoolDedicated_r16(value.sl_DiscTxPoolSelected_r17);
    }
    if (value.has_sl_DiscTxPoolScheduling_r17) {
        Free_SL_TxPoolDedicated_r16(value.sl_DiscTxPoolScheduling_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SL_BWP_DiscPoolConfig_r17：ASN.1 SetupRelease<SL-BWP-DiscPoolConfig-r17>；源文件第 21901 行；CHOICE。
// Encode_SetupRelease_SL_BWP_DiscPoolConfig_r17 只读不分配；Decode_SetupRelease_SL_BWP_DiscPoolConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SL_BWP_DiscPoolConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SL_BWP_DiscPoolConfig_r17(Encoder& enc, const SetupRelease_SL_BWP_DiscPoolConfig_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SL_BWP_DiscPoolConfig_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_SL_BWP_DiscPoolConfig_r17_Tag_setup:
        Encode_SL_BWP_DiscPoolConfig_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SL_BWP_DiscPoolConfig_r17(Decoder& dec, SetupRelease_SL_BWP_DiscPoolConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SL_BWP_DiscPoolConfig_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SL_BWP_DiscPoolConfig_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SL_BWP_DiscPoolConfig_r17_Tag_setup: {
        if (Decode_SL_BWP_DiscPoolConfig_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SL_BWP_DiscPoolConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SL_BWP_DiscPoolConfig_r17(SetupRelease_SL_BWP_DiscPoolConfig_r17& value)
{
    switch (value.tag) {
    case SetupRelease_SL_BWP_DiscPoolConfig_r17_Tag_release:
        break;
    case SetupRelease_SL_BWP_DiscPoolConfig_r17_Tag_setup:
        Free_SL_BWP_DiscPoolConfig_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_BWP_Config_r16_ExtGroup1：ASN.1 SL_BWP_Config_r16_ExtGroup1；源文件第 21899 行；扩展添加组 [[ ]]。
// Encode_SL_BWP_Config_r16_ExtGroup1 只读不分配；Decode_SL_BWP_Config_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SL_BWP_Config_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_BWP_Config_r16_ExtGroup1(Encoder& enc, const SL_BWP_Config_r16_ExtGroup1& value)
{
    enc.WriteBit(value.has_sl_BWP_PoolConfigPS_r17);
    enc.WriteBit(value.has_sl_BWP_DiscPoolConfig_r17);
    if (value.has_sl_BWP_PoolConfigPS_r17) {
        Encode_SetupRelease_SL_BWP_PoolConfig_r16(enc, value.sl_BWP_PoolConfigPS_r17);
    }
    if (value.has_sl_BWP_DiscPoolConfig_r17) {
        Encode_SetupRelease_SL_BWP_DiscPoolConfig_r17(enc, value.sl_BWP_DiscPoolConfig_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SL_BWP_Config_r16_ExtGroup1(Decoder& dec, SL_BWP_Config_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_SL_BWP_PoolConfig_r16(dec, value.sl_BWP_PoolConfigPS_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_SL_BWP_DiscPoolConfig_r17(dec, value.sl_BWP_DiscPoolConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_BWP_Config_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_BWP_Config_r16_ExtGroup1(SL_BWP_Config_r16_ExtGroup1& value)
{
    if (value.has_sl_BWP_PoolConfigPS_r17) {
        Free_SetupRelease_SL_BWP_PoolConfig_r16(value.sl_BWP_PoolConfigPS_r17);
    }
    if (value.has_sl_BWP_DiscPoolConfig_r17) {
        Free_SetupRelease_SL_BWP_DiscPoolConfig_r17(value.sl_BWP_DiscPoolConfig_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PRS_TxPoolDedicated_r18：ASN.1 SL-PRS-TxPoolDedicated-r18；源文件第 22007 行；SEQUENCE。
// Encode_SL_PRS_TxPoolDedicated_r18 只读不分配；Decode_SL_PRS_TxPoolDedicated_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_PRS_TxPoolDedicated_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PRS_TxPoolDedicated_r18(Encoder& enc, const SL_PRS_TxPoolDedicated_r18& value)
{
    enc.WriteBit(value.has_sl_PRS_PoolToReleaseList_r1);
    enc.WriteBit(value.has_sl_PRS_PoolToAddModList_r18);
    if (value.has_sl_PRS_PoolToReleaseList_r1) {
enc.WriteConstrainedLength(value.sl_PRS_PoolToReleaseList_r1_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_PRS_PoolToReleaseList_r1_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_PRS_PoolToReleaseList_r1_items[i]), 1, 8);
}
    }
    if (value.has_sl_PRS_PoolToAddModList_r18) {
enc.WriteConstrainedLength(value.sl_PRS_PoolToAddModList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_PRS_PoolToAddModList_r18_count; ++i) {
    Encode_SL_PRS_ResourcePoolConfig_r18(enc, value.sl_PRS_PoolToAddModList_r18_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_SL_PRS_TxPoolDedicated_r18(Decoder& dec, SL_PRS_TxPoolDedicated_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_PRS_PoolToReleaseList_r1_count)) { goto fail; }
if (value.sl_PRS_PoolToReleaseList_r1_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_PRS_PoolToReleaseList_r1_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_PRS_PoolToReleaseList_r1_count > 0u) {
    value.sl_PRS_PoolToReleaseList_r1_items = (SL_PRS_ResourcePoolID_r18*)std::malloc((std::size_t)value.sl_PRS_PoolToReleaseList_r1_count * sizeof(SL_PRS_ResourcePoolID_r18));
    if (value.sl_PRS_PoolToReleaseList_r1_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_PRS_PoolToReleaseList_r1_items, 0, (std::size_t)value.sl_PRS_PoolToReleaseList_r1_count * sizeof(SL_PRS_ResourcePoolID_r18));
}
for (std::uint32_t i = 0; i < value.sl_PRS_PoolToReleaseList_r1_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
    value.sl_PRS_PoolToReleaseList_r1_items[i] = (SL_PRS_ResourcePoolID_r18)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_PRS_PoolToAddModList_r18_count)) { goto fail; }
if (value.sl_PRS_PoolToAddModList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_PRS_PoolToAddModList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_PRS_PoolToAddModList_r18_count > 0u) {
    value.sl_PRS_PoolToAddModList_r18_items = (SL_PRS_ResourcePoolConfig_r18*)std::malloc((std::size_t)value.sl_PRS_PoolToAddModList_r18_count * sizeof(SL_PRS_ResourcePoolConfig_r18));
    if (value.sl_PRS_PoolToAddModList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_PRS_PoolToAddModList_r18_items, 0, (std::size_t)value.sl_PRS_PoolToAddModList_r18_count * sizeof(SL_PRS_ResourcePoolConfig_r18));
}
for (std::uint32_t i = 0; i < value.sl_PRS_PoolToAddModList_r18_count; ++i) {
    if (Decode_SL_PRS_ResourcePoolConfig_r18(dec, value.sl_PRS_PoolToAddModList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PRS_TxPoolDedicated_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PRS_TxPoolDedicated_r18(SL_PRS_TxPoolDedicated_r18& value)
{
    if (value.has_sl_PRS_PoolToReleaseList_r1) {
        if (value.sl_PRS_PoolToReleaseList_r1_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_PRS_PoolToReleaseList_r1_count; ++i) {
            }
            std::free(value.sl_PRS_PoolToReleaseList_r1_items);
            value.sl_PRS_PoolToReleaseList_r1_items = nullptr;
        }
        value.sl_PRS_PoolToReleaseList_r1_count = 0;
    }
    if (value.has_sl_PRS_PoolToAddModList_r18) {
        if (value.sl_PRS_PoolToAddModList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_PRS_PoolToAddModList_r18_count; ++i) {
                Free_SL_PRS_ResourcePoolConfig_r18(value.sl_PRS_PoolToAddModList_r18_items[i]);
            }
            std::free(value.sl_PRS_PoolToAddModList_r18_items);
            value.sl_PRS_PoolToAddModList_r18_items = nullptr;
        }
        value.sl_PRS_PoolToAddModList_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PRS_PowerControl_r18：ASN.1 SL-PRS-PowerControl-r18；源文件第 22750 行；SEQUENCE。
// Encode_SL_PRS_PowerControl_r18 只读不分配；Decode_SL_PRS_PowerControl_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_PRS_PowerControl_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PRS_PowerControl_r18(Encoder& enc, const SL_PRS_PowerControl_r18& value)
{
    enc.WriteBit(value.has_dl_P0_SL_PRS_r18);
    enc.WriteBit(value.has_dl_Alpha_SL_PRS_r18);
    enc.WriteBit(value.has_sl_P0_SL_PRS_r18);
    enc.WriteBit(value.has_sl_Alpha_SL_PRS_r18);
    if (value.has_dl_P0_SL_PRS_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_P0_SL_PRS_r18), -202, 24);
    }
    if (value.has_dl_Alpha_SL_PRS_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_Alpha_SL_PRS_r18), 0, 7);
    }
    if (value.has_sl_P0_SL_PRS_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_P0_SL_PRS_r18), -202, 24);
    }
    if (value.has_sl_Alpha_SL_PRS_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_Alpha_SL_PRS_r18), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PRS_PowerControl_r18(Decoder& dec, SL_PRS_PowerControl_r18& value)
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
        if (!dec.ReadConstrainedInteger(-202, 24, tmp_value)) { goto fail; }
        value.dl_P0_SL_PRS_r18 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.dl_Alpha_SL_PRS_r18 = (SL_PRS_PowerControl_r18_Dl_Alpha_SL_PRS_r18)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-202, 24, tmp_value)) { goto fail; }
        value.sl_P0_SL_PRS_r18 = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sl_Alpha_SL_PRS_r18 = (SL_PRS_PowerControl_r18_Sl_Alpha_SL_PRS_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PRS_PowerControl_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PRS_PowerControl_r18(SL_PRS_PowerControl_r18& value)
{
    if (value.has_dl_P0_SL_PRS_r18) {
    }
    if (value.has_dl_Alpha_SL_PRS_r18) {
    }
    if (value.has_sl_P0_SL_PRS_r18) {
    }
    if (value.has_sl_Alpha_SL_PRS_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18：ASN.1 SL-PSCCH-ConfigDedicatedSL-PRS-RP-r18；源文件第 22731 行；SEQUENCE。
// Encode_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18 只读不分配；Decode_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18(Encoder& enc, const SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_timeResourcePSCCH_DedicatedSL_PRS_RP_r18);
    enc.WriteBit(value.has_freqResourcePSCCH_DedicatedSL_PRS_RP_r18);
    if (value.has_timeResourcePSCCH_DedicatedSL_PRS_RP_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.timeResourcePSCCH_DedicatedSL_PRS_RP_r18), 0, 1);
    }
    if (value.has_freqResourcePSCCH_DedicatedSL_PRS_RP_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.freqResourcePSCCH_DedicatedSL_PRS_RP_r18), 0, 4);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18(Decoder& dec, SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18& value)
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
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.timeResourcePSCCH_DedicatedSL_PRS_RP_r18 = (SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_TimeResourcePSCCH_DedicatedSL_PRS_RP_r18)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.freqResourcePSCCH_DedicatedSL_PRS_RP_r18 = (SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_FreqResourcePSCCH_DedicatedSL_PRS_RP_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18(SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18& value)
{
    if (value.has_timeResourcePSCCH_DedicatedSL_PRS_RP_r18) {
    }
    if (value.has_freqResourcePSCCH_DedicatedSL_PRS_RP_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18：ASN.1 SetupRelease<SL-PSCCH-ConfigDedicatedSL-PRS-RP-r18>；源文件第 22703 行；CHOICE。
// Encode_SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18 只读不分配；Decode_SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18(Encoder& enc, const SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_Tag_setup:
        Encode_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18(Decoder& dec, SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_Tag_setup: {
        if (Decode_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18(SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18& value)
{
    switch (value.tag) {
    case SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_Tag_release:
        break;
    case SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_Tag_setup:
        Free_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PRS_ResourcePool_r18：ASN.1 SL-PRS-ResourcePool-r18；源文件第 22702 行；SEQUENCE。
// Encode_SL_PRS_ResourcePool_r18 只读不分配；Decode_SL_PRS_ResourcePool_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_PRS_ResourcePool_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PRS_ResourcePool_r18(Encoder& enc, const SL_PRS_ResourcePool_r18& value)
{
    enc.WriteBit(value.has_sl_PRS_PSCCH_Config_r18);
    enc.WriteBit(value.has_sl_StartRB_SubchannelDedicatedSL_PRS_RP_r18);
    enc.WriteBit(value.has_sl_FilterCoefficient_r18);
    enc.WriteBit(value.has_sl_ThreshS_RSSI_PRS_CBR_r18);
    enc.WriteBit(value.has_sl_RB_Number_r18);
    enc.WriteBit(value.has_sl_TimeResource_r18);
    enc.WriteBit(value.has_sl_PosAllowedResourceSelectionConfig_r18);
    enc.WriteBit(value.has_sl_PRS_ResourceReservePeriodList_r18);
    enc.WriteBit(value.has_sl_PRS_ResourcesDedicatedSL_PRS_RP_r18);
    enc.WriteBit(value.has_sl_PRS_PowerControl_r18);
    enc.WriteBit(value.has_sl_SensingWindowDedicatedSL_PRS_RP_r18);
    enc.WriteBit(value.has_sl_TxPercentageDedicatedSL_PRS_RP_List_r18);
    enc.WriteBit(value.has_sl_SCI_basedSL_PRS_TxTriggerSCI1_B_r18);
    enc.WriteBit(value.has_sl_NumSubchannelDedicatedSL_PRS_RP_r18);
    enc.WriteBit(value.has_sl_SubchannelSizeDedicatedSL_PRS_RP_r18);
    enc.WriteBit(value.has_sl_MaxNumPerReserveDedicatedSL_PRS_RP_r18);
    enc.WriteBit(value.has_sl_NumReservedBitsSCI1B_DedicatedSL_PRS_RP_r18);
    enc.WriteBit(value.has_sl_SRC_ID_LenDedicatedSL_PRS_RP_r18);
    enc.WriteBit(value.has_sl_CBR_PriorityTxConfigDedicatedSL_PRS_RP_List_r18);
    enc.WriteBit(value.has_sl_TimeWindowSizeCBR_DedicatedSL_PRS_RP_r18);
    enc.WriteBit(value.has_sl_TimeWindowSizeCR_DedicatedSL_PRS_RP_r18);
    enc.WriteBit(value.has_sl_CBR_CommonTxDedicatedSL_PRS_RP_List_r18);
    enc.WriteBit(value.has_sl_PriorityThreshold_UL_URLLC_r18);
    enc.WriteBit(value.has_sl_PriorityThreshold_r18);
    if (value.has_sl_PRS_PSCCH_Config_r18) {
        Encode_SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18(enc, value.sl_PRS_PSCCH_Config_r18);
    }
    if (value.has_sl_StartRB_SubchannelDedicatedSL_PRS_RP_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_StartRB_SubchannelDedicatedSL_PRS_RP_r18), 0, 265);
    }
    if (value.has_sl_FilterCoefficient_r18) {
        {
            const std::int64_t enum_value = (std::int64_t)(value.sl_FilterCoefficient_r18);
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
    if (value.has_sl_ThreshS_RSSI_PRS_CBR_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_ThreshS_RSSI_PRS_CBR_r18), 0, 45);
    }
    if (value.has_sl_RB_Number_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_RB_Number_r18), 10, 275);
    }
    if (value.has_sl_TimeResource_r18) {
        enc.WriteConstrainedBitString(value.sl_TimeResource_r18.bytes, value.sl_TimeResource_r18.bitLength, 10, 160);
    }
    if (value.has_sl_PosAllowedResourceSelectionConfig_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PosAllowedResourceSelectionConfig_r18), 0, 2);
    }
    if (value.has_sl_PRS_ResourceReservePeriodList_r18) {
enc.WriteConstrainedLength(value.sl_PRS_ResourceReservePeriodList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_PRS_ResourceReservePeriodList_r18_count; ++i) {
    Encode_SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18(enc, value.sl_PRS_ResourceReservePeriodList_r18_items[i]);
}
    }
    if (value.has_sl_PRS_ResourcesDedicatedSL_PRS_RP_r18) {
enc.WriteConstrainedLength(value.sl_PRS_ResourcesDedicatedSL_PRS_RP_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_PRS_ResourcesDedicatedSL_PRS_RP_r18_count; ++i) {
    Encode_SL_PRS_ResourceDedicatedSL_PRS_RP_r18(enc, value.sl_PRS_ResourcesDedicatedSL_PRS_RP_r18_items[i]);
}
    }
    if (value.has_sl_PRS_PowerControl_r18) {
        Encode_SL_PRS_PowerControl_r18(enc, value.sl_PRS_PowerControl_r18);
    }
    if (value.has_sl_SensingWindowDedicatedSL_PRS_RP_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_SensingWindowDedicatedSL_PRS_RP_r18), 0, 1);
    }
    if (value.has_sl_TxPercentageDedicatedSL_PRS_RP_List_r18) {
enc.WriteConstrainedLength(value.sl_TxPercentageDedicatedSL_PRS_RP_List_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_TxPercentageDedicatedSL_PRS_RP_List_r18_count; ++i) {
    Encode_SL_TxPercentageDedicatedSL_PRS_RP_Config_r18(enc, value.sl_TxPercentageDedicatedSL_PRS_RP_List_r18_items[i]);
}
    }
    if (value.has_sl_SCI_basedSL_PRS_TxTriggerSCI1_B_r18) {
        enc.WriteBool(value.sl_SCI_basedSL_PRS_TxTriggerSCI1_B_r18);
    }
    if (value.has_sl_NumSubchannelDedicatedSL_PRS_RP_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_NumSubchannelDedicatedSL_PRS_RP_r18), 1, 27);
    }
    if (value.has_sl_SubchannelSizeDedicatedSL_PRS_RP_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_SubchannelSizeDedicatedSL_PRS_RP_r18), 0, 7);
    }
    if (value.has_sl_MaxNumPerReserveDedicatedSL_PRS_RP_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_MaxNumPerReserveDedicatedSL_PRS_RP_r18), 0, 1);
    }
    if (value.has_sl_NumReservedBitsSCI1B_DedicatedSL_PRS_RP_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_NumReservedBitsSCI1B_DedicatedSL_PRS_RP_r18), 0, 20);
    }
    if (value.has_sl_SRC_ID_LenDedicatedSL_PRS_RP_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_SRC_ID_LenDedicatedSL_PRS_RP_r18), 0, 1);
    }
    if (value.has_sl_CBR_PriorityTxConfigDedicatedSL_PRS_RP_List_r18) {
enc.WriteConstrainedLength(value.sl_CBR_PriorityTxConfigDedicatedSL_PRS_RP_List_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_CBR_PriorityTxConfigDedicatedSL_PRS_RP_List_r18_count; ++i) {
    Encode_SL_PriorityTxConfigIndexDedicatedSL_PRS_RP_r18(enc, value.sl_CBR_PriorityTxConfigDedicatedSL_PRS_RP_List_r18_items[i]);
}
    }
    if (value.has_sl_TimeWindowSizeCBR_DedicatedSL_PRS_RP_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_TimeWindowSizeCBR_DedicatedSL_PRS_RP_r18), 0, 1);
    }
    if (value.has_sl_TimeWindowSizeCR_DedicatedSL_PRS_RP_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_TimeWindowSizeCR_DedicatedSL_PRS_RP_r18), 0, 1);
    }
    if (value.has_sl_CBR_CommonTxDedicatedSL_PRS_RP_List_r18) {
        Encode_SL_CBR_CommonTxDedicatedSL_PRS_RP_List_r18(enc, value.sl_CBR_CommonTxDedicatedSL_PRS_RP_List_r18);
    }
    if (value.has_sl_PriorityThreshold_UL_URLLC_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PriorityThreshold_UL_URLLC_r18), 1, 9);
    }
    if (value.has_sl_PriorityThreshold_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PriorityThreshold_r18), 1, 9);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PRS_ResourcePool_r18(Decoder& dec, SL_PRS_ResourcePool_r18& value)
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
        if (Decode_SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18(dec, value.sl_PRS_PSCCH_Config_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 265, tmp_value)) { goto fail; }
        value.sl_StartRB_SubchannelDedicatedSL_PRS_RP_r18 = (int64_t)tmp_value;
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
        value.sl_FilterCoefficient_r18 = (FilterCoefficient)enum_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 45, tmp_value)) { goto fail; }
        value.sl_ThreshS_RSSI_PRS_CBR_r18 = (int64_t)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(10, 275, tmp_value)) { goto fail; }
        value.sl_RB_Number_r18 = (int64_t)tmp_value;
    }
    if (present_5) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 10, 160)) { goto fail; }
        value.sl_TimeResource_r18.bytes = string_bytes;
        value.sl_TimeResource_r18.bitLength = string_length;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.sl_PosAllowedResourceSelectionConfig_r18 = (SL_PRS_ResourcePool_r18_Sl_PosAllowedResourceSelectionConfig_r18)tmp_value;
    }
    if (present_7) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_PRS_ResourceReservePeriodList_r18_count)) { goto fail; }
if (value.sl_PRS_ResourceReservePeriodList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_PRS_ResourceReservePeriodList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_PRS_ResourceReservePeriodList_r18_count > 0u) {
    value.sl_PRS_ResourceReservePeriodList_r18_items = (SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18*)std::malloc((std::size_t)value.sl_PRS_ResourceReservePeriodList_r18_count * sizeof(SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18));
    if (value.sl_PRS_ResourceReservePeriodList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_PRS_ResourceReservePeriodList_r18_items, 0, (std::size_t)value.sl_PRS_ResourceReservePeriodList_r18_count * sizeof(SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18));
}
for (std::uint32_t i = 0; i < value.sl_PRS_ResourceReservePeriodList_r18_count; ++i) {
    if (Decode_SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18(dec, value.sl_PRS_ResourceReservePeriodList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_8) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_PRS_ResourcesDedicatedSL_PRS_RP_r18_count)) { goto fail; }
if (value.sl_PRS_ResourcesDedicatedSL_PRS_RP_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_PRS_ResourcesDedicatedSL_PRS_RP_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_PRS_ResourcesDedicatedSL_PRS_RP_r18_count > 0u) {
    value.sl_PRS_ResourcesDedicatedSL_PRS_RP_r18_items = (SL_PRS_ResourceDedicatedSL_PRS_RP_r18*)std::malloc((std::size_t)value.sl_PRS_ResourcesDedicatedSL_PRS_RP_r18_count * sizeof(SL_PRS_ResourceDedicatedSL_PRS_RP_r18));
    if (value.sl_PRS_ResourcesDedicatedSL_PRS_RP_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_PRS_ResourcesDedicatedSL_PRS_RP_r18_items, 0, (std::size_t)value.sl_PRS_ResourcesDedicatedSL_PRS_RP_r18_count * sizeof(SL_PRS_ResourceDedicatedSL_PRS_RP_r18));
}
for (std::uint32_t i = 0; i < value.sl_PRS_ResourcesDedicatedSL_PRS_RP_r18_count; ++i) {
    if (Decode_SL_PRS_ResourceDedicatedSL_PRS_RP_r18(dec, value.sl_PRS_ResourcesDedicatedSL_PRS_RP_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_9) {
        if (Decode_SL_PRS_PowerControl_r18(dec, value.sl_PRS_PowerControl_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_10) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_SensingWindowDedicatedSL_PRS_RP_r18 = (SL_PRS_ResourcePool_r18_Sl_SensingWindowDedicatedSL_PRS_RP_r18)tmp_value;
    }
    if (present_11) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_TxPercentageDedicatedSL_PRS_RP_List_r18_count)) { goto fail; }
if (value.sl_TxPercentageDedicatedSL_PRS_RP_List_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_TxPercentageDedicatedSL_PRS_RP_List_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_TxPercentageDedicatedSL_PRS_RP_List_r18_count > 0u) {
    value.sl_TxPercentageDedicatedSL_PRS_RP_List_r18_items = (SL_TxPercentageDedicatedSL_PRS_RP_Config_r18*)std::malloc((std::size_t)value.sl_TxPercentageDedicatedSL_PRS_RP_List_r18_count * sizeof(SL_TxPercentageDedicatedSL_PRS_RP_Config_r18));
    if (value.sl_TxPercentageDedicatedSL_PRS_RP_List_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_TxPercentageDedicatedSL_PRS_RP_List_r18_items, 0, (std::size_t)value.sl_TxPercentageDedicatedSL_PRS_RP_List_r18_count * sizeof(SL_TxPercentageDedicatedSL_PRS_RP_Config_r18));
}
for (std::uint32_t i = 0; i < value.sl_TxPercentageDedicatedSL_PRS_RP_List_r18_count; ++i) {
    if (Decode_SL_TxPercentageDedicatedSL_PRS_RP_Config_r18(dec, value.sl_TxPercentageDedicatedSL_PRS_RP_List_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_12) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.sl_SCI_basedSL_PRS_TxTriggerSCI1_B_r18 = tmp_value;
    }
    if (present_13) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 27, tmp_value)) { goto fail; }
        value.sl_NumSubchannelDedicatedSL_PRS_RP_r18 = (int64_t)tmp_value;
    }
    if (present_14) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sl_SubchannelSizeDedicatedSL_PRS_RP_r18 = (SL_PRS_ResourcePool_r18_Sl_SubchannelSizeDedicatedSL_PRS_RP_r18)tmp_value;
    }
    if (present_15) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_MaxNumPerReserveDedicatedSL_PRS_RP_r18 = (SL_PRS_ResourcePool_r18_Sl_MaxNumPerReserveDedicatedSL_PRS_RP_r18)tmp_value;
    }
    if (present_16) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 20, tmp_value)) { goto fail; }
        value.sl_NumReservedBitsSCI1B_DedicatedSL_PRS_RP_r18 = (int64_t)tmp_value;
    }
    if (present_17) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_SRC_ID_LenDedicatedSL_PRS_RP_r18 = (SL_PRS_ResourcePool_r18_Sl_SRC_ID_LenDedicatedSL_PRS_RP_r18)tmp_value;
    }
    if (present_18) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_CBR_PriorityTxConfigDedicatedSL_PRS_RP_List_r18_count)) { goto fail; }
if (value.sl_CBR_PriorityTxConfigDedicatedSL_PRS_RP_List_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_CBR_PriorityTxConfigDedicatedSL_PRS_RP_List_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_CBR_PriorityTxConfigDedicatedSL_PRS_RP_List_r18_count > 0u) {
    value.sl_CBR_PriorityTxConfigDedicatedSL_PRS_RP_List_r18_items = (SL_PriorityTxConfigIndexDedicatedSL_PRS_RP_r18*)std::malloc((std::size_t)value.sl_CBR_PriorityTxConfigDedicatedSL_PRS_RP_List_r18_count * sizeof(SL_PriorityTxConfigIndexDedicatedSL_PRS_RP_r18));
    if (value.sl_CBR_PriorityTxConfigDedicatedSL_PRS_RP_List_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_CBR_PriorityTxConfigDedicatedSL_PRS_RP_List_r18_items, 0, (std::size_t)value.sl_CBR_PriorityTxConfigDedicatedSL_PRS_RP_List_r18_count * sizeof(SL_PriorityTxConfigIndexDedicatedSL_PRS_RP_r18));
}
for (std::uint32_t i = 0; i < value.sl_CBR_PriorityTxConfigDedicatedSL_PRS_RP_List_r18_count; ++i) {
    if (Decode_SL_PriorityTxConfigIndexDedicatedSL_PRS_RP_r18(dec, value.sl_CBR_PriorityTxConfigDedicatedSL_PRS_RP_List_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_19) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_TimeWindowSizeCBR_DedicatedSL_PRS_RP_r18 = (SL_PRS_ResourcePool_r18_Sl_TimeWindowSizeCBR_DedicatedSL_PRS_RP_r18)tmp_value;
    }
    if (present_20) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_TimeWindowSizeCR_DedicatedSL_PRS_RP_r18 = (SL_PRS_ResourcePool_r18_Sl_TimeWindowSizeCR_DedicatedSL_PRS_RP_r18)tmp_value;
    }
    if (present_21) {
        if (Decode_SL_CBR_CommonTxDedicatedSL_PRS_RP_List_r18(dec, value.sl_CBR_CommonTxDedicatedSL_PRS_RP_List_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_22) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 9, tmp_value)) { goto fail; }
        value.sl_PriorityThreshold_UL_URLLC_r18 = (int64_t)tmp_value;
    }
    if (present_23) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 9, tmp_value)) { goto fail; }
        value.sl_PriorityThreshold_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PRS_ResourcePool_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PRS_ResourcePool_r18(SL_PRS_ResourcePool_r18& value)
{
    if (value.has_sl_PRS_PSCCH_Config_r18) {
        Free_SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18(value.sl_PRS_PSCCH_Config_r18);
    }
    if (value.has_sl_StartRB_SubchannelDedicatedSL_PRS_RP_r18) {
    }
    if (value.has_sl_FilterCoefficient_r18) {
    }
    if (value.has_sl_ThreshS_RSSI_PRS_CBR_r18) {
    }
    if (value.has_sl_RB_Number_r18) {
    }
    if (value.has_sl_TimeResource_r18) {
        std::free(value.sl_TimeResource_r18.bytes);
        value.sl_TimeResource_r18.bytes = nullptr;
        value.sl_TimeResource_r18.bitLength = 0;
    }
    if (value.has_sl_PosAllowedResourceSelectionConfig_r18) {
    }
    if (value.has_sl_PRS_ResourceReservePeriodList_r18) {
        if (value.sl_PRS_ResourceReservePeriodList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_PRS_ResourceReservePeriodList_r18_count; ++i) {
                Free_SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18(value.sl_PRS_ResourceReservePeriodList_r18_items[i]);
            }
            std::free(value.sl_PRS_ResourceReservePeriodList_r18_items);
            value.sl_PRS_ResourceReservePeriodList_r18_items = nullptr;
        }
        value.sl_PRS_ResourceReservePeriodList_r18_count = 0;
    }
    if (value.has_sl_PRS_ResourcesDedicatedSL_PRS_RP_r18) {
        if (value.sl_PRS_ResourcesDedicatedSL_PRS_RP_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_PRS_ResourcesDedicatedSL_PRS_RP_r18_count; ++i) {
                Free_SL_PRS_ResourceDedicatedSL_PRS_RP_r18(value.sl_PRS_ResourcesDedicatedSL_PRS_RP_r18_items[i]);
            }
            std::free(value.sl_PRS_ResourcesDedicatedSL_PRS_RP_r18_items);
            value.sl_PRS_ResourcesDedicatedSL_PRS_RP_r18_items = nullptr;
        }
        value.sl_PRS_ResourcesDedicatedSL_PRS_RP_r18_count = 0;
    }
    if (value.has_sl_PRS_PowerControl_r18) {
        Free_SL_PRS_PowerControl_r18(value.sl_PRS_PowerControl_r18);
    }
    if (value.has_sl_SensingWindowDedicatedSL_PRS_RP_r18) {
    }
    if (value.has_sl_TxPercentageDedicatedSL_PRS_RP_List_r18) {
        if (value.sl_TxPercentageDedicatedSL_PRS_RP_List_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_TxPercentageDedicatedSL_PRS_RP_List_r18_count; ++i) {
                Free_SL_TxPercentageDedicatedSL_PRS_RP_Config_r18(value.sl_TxPercentageDedicatedSL_PRS_RP_List_r18_items[i]);
            }
            std::free(value.sl_TxPercentageDedicatedSL_PRS_RP_List_r18_items);
            value.sl_TxPercentageDedicatedSL_PRS_RP_List_r18_items = nullptr;
        }
        value.sl_TxPercentageDedicatedSL_PRS_RP_List_r18_count = 0;
    }
    if (value.has_sl_SCI_basedSL_PRS_TxTriggerSCI1_B_r18) {
    }
    if (value.has_sl_NumSubchannelDedicatedSL_PRS_RP_r18) {
    }
    if (value.has_sl_SubchannelSizeDedicatedSL_PRS_RP_r18) {
    }
    if (value.has_sl_MaxNumPerReserveDedicatedSL_PRS_RP_r18) {
    }
    if (value.has_sl_NumReservedBitsSCI1B_DedicatedSL_PRS_RP_r18) {
    }
    if (value.has_sl_SRC_ID_LenDedicatedSL_PRS_RP_r18) {
    }
    if (value.has_sl_CBR_PriorityTxConfigDedicatedSL_PRS_RP_List_r18) {
        if (value.sl_CBR_PriorityTxConfigDedicatedSL_PRS_RP_List_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_CBR_PriorityTxConfigDedicatedSL_PRS_RP_List_r18_count; ++i) {
                Free_SL_PriorityTxConfigIndexDedicatedSL_PRS_RP_r18(value.sl_CBR_PriorityTxConfigDedicatedSL_PRS_RP_List_r18_items[i]);
            }
            std::free(value.sl_CBR_PriorityTxConfigDedicatedSL_PRS_RP_List_r18_items);
            value.sl_CBR_PriorityTxConfigDedicatedSL_PRS_RP_List_r18_items = nullptr;
        }
        value.sl_CBR_PriorityTxConfigDedicatedSL_PRS_RP_List_r18_count = 0;
    }
    if (value.has_sl_TimeWindowSizeCBR_DedicatedSL_PRS_RP_r18) {
    }
    if (value.has_sl_TimeWindowSizeCR_DedicatedSL_PRS_RP_r18) {
    }
    if (value.has_sl_CBR_CommonTxDedicatedSL_PRS_RP_List_r18) {
        Free_SL_CBR_CommonTxDedicatedSL_PRS_RP_List_r18(value.sl_CBR_CommonTxDedicatedSL_PRS_RP_List_r18);
    }
    if (value.has_sl_PriorityThreshold_UL_URLLC_r18) {
    }
    if (value.has_sl_PriorityThreshold_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PRS_ResourcePoolConfig_r18：ASN.1 SL-PRS-ResourcePoolConfig-r18；源文件第 22012 行；SEQUENCE。
// Encode_SL_PRS_ResourcePoolConfig_r18 只读不分配；Decode_SL_PRS_ResourcePoolConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_PRS_ResourcePoolConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PRS_ResourcePoolConfig_r18(Encoder& enc, const SL_PRS_ResourcePoolConfig_r18& value)
{
    enc.WriteBit(value.has_sl_PRS_ResourcePool_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_PRS_ResourcePoolID_r18), 1, 8);
    if (value.has_sl_PRS_ResourcePool_r18) {
        Encode_SL_PRS_ResourcePool_r18(enc, value.sl_PRS_ResourcePool_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PRS_ResourcePoolConfig_r18(Decoder& dec, SL_PRS_ResourcePoolConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.sl_PRS_ResourcePoolID_r18 = (SL_PRS_ResourcePoolID_r18)tmp_value;
    }
    if (present_0) {
        if (Decode_SL_PRS_ResourcePool_r18(dec, value.sl_PRS_ResourcePool_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PRS_ResourcePoolConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PRS_ResourcePoolConfig_r18(SL_PRS_ResourcePoolConfig_r18& value)
{
    if (value.has_sl_PRS_ResourcePool_r18) {
        Free_SL_PRS_ResourcePool_r18(value.sl_PRS_ResourcePool_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_BWP_PRS_PoolConfig_r18：ASN.1 SL-BWP-PRS-PoolConfig-r18；源文件第 22000 行；SEQUENCE。
// Encode_SL_BWP_PRS_PoolConfig_r18 只读不分配；Decode_SL_BWP_PRS_PoolConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_BWP_PRS_PoolConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_BWP_PRS_PoolConfig_r18(Encoder& enc, const SL_BWP_PRS_PoolConfig_r18& value)
{
    enc.WriteBit(value.has_sl_PRS_RxPool_r18);
    enc.WriteBit(value.has_sl_PRS_TxPoolSelectedNormal_r18);
    enc.WriteBit(value.has_sl_PRS_TxPoolScheduling_r18);
    enc.WriteBit(value.has_sl_PRS_TxPoolExceptional_r18);
    if (value.has_sl_PRS_RxPool_r18) {
enc.WriteConstrainedLength(value.sl_PRS_RxPool_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_PRS_RxPool_r18_count; ++i) {
    Encode_SL_PRS_ResourcePool_r18(enc, value.sl_PRS_RxPool_r18_items[i]);
}
    }
    if (value.has_sl_PRS_TxPoolSelectedNormal_r18) {
        Encode_SL_PRS_TxPoolDedicated_r18(enc, value.sl_PRS_TxPoolSelectedNormal_r18);
    }
    if (value.has_sl_PRS_TxPoolScheduling_r18) {
        Encode_SL_PRS_TxPoolDedicated_r18(enc, value.sl_PRS_TxPoolScheduling_r18);
    }
    if (value.has_sl_PRS_TxPoolExceptional_r18) {
        Encode_SL_PRS_ResourcePoolConfig_r18(enc, value.sl_PRS_TxPoolExceptional_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SL_BWP_PRS_PoolConfig_r18(Decoder& dec, SL_BWP_PRS_PoolConfig_r18& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_PRS_RxPool_r18_count)) { goto fail; }
if (value.sl_PRS_RxPool_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_PRS_RxPool_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_PRS_RxPool_r18_count > 0u) {
    value.sl_PRS_RxPool_r18_items = (SL_PRS_ResourcePool_r18*)std::malloc((std::size_t)value.sl_PRS_RxPool_r18_count * sizeof(SL_PRS_ResourcePool_r18));
    if (value.sl_PRS_RxPool_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_PRS_RxPool_r18_items, 0, (std::size_t)value.sl_PRS_RxPool_r18_count * sizeof(SL_PRS_ResourcePool_r18));
}
for (std::uint32_t i = 0; i < value.sl_PRS_RxPool_r18_count; ++i) {
    if (Decode_SL_PRS_ResourcePool_r18(dec, value.sl_PRS_RxPool_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
        if (Decode_SL_PRS_TxPoolDedicated_r18(dec, value.sl_PRS_TxPoolSelectedNormal_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SL_PRS_TxPoolDedicated_r18(dec, value.sl_PRS_TxPoolScheduling_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SL_PRS_ResourcePoolConfig_r18(dec, value.sl_PRS_TxPoolExceptional_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_BWP_PRS_PoolConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_BWP_PRS_PoolConfig_r18(SL_BWP_PRS_PoolConfig_r18& value)
{
    if (value.has_sl_PRS_RxPool_r18) {
        if (value.sl_PRS_RxPool_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_PRS_RxPool_r18_count; ++i) {
                Free_SL_PRS_ResourcePool_r18(value.sl_PRS_RxPool_r18_items[i]);
            }
            std::free(value.sl_PRS_RxPool_r18_items);
            value.sl_PRS_RxPool_r18_items = nullptr;
        }
        value.sl_PRS_RxPool_r18_count = 0;
    }
    if (value.has_sl_PRS_TxPoolSelectedNormal_r18) {
        Free_SL_PRS_TxPoolDedicated_r18(value.sl_PRS_TxPoolSelectedNormal_r18);
    }
    if (value.has_sl_PRS_TxPoolScheduling_r18) {
        Free_SL_PRS_TxPoolDedicated_r18(value.sl_PRS_TxPoolScheduling_r18);
    }
    if (value.has_sl_PRS_TxPoolExceptional_r18) {
        Free_SL_PRS_ResourcePoolConfig_r18(value.sl_PRS_TxPoolExceptional_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SL_BWP_PRS_PoolConfig_r18：ASN.1 SetupRelease<SL-BWP-PRS-PoolConfig-r18>；源文件第 21905 行；CHOICE。
// Encode_SetupRelease_SL_BWP_PRS_PoolConfig_r18 只读不分配；Decode_SetupRelease_SL_BWP_PRS_PoolConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SL_BWP_PRS_PoolConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SL_BWP_PRS_PoolConfig_r18(Encoder& enc, const SetupRelease_SL_BWP_PRS_PoolConfig_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SL_BWP_PRS_PoolConfig_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_SL_BWP_PRS_PoolConfig_r18_Tag_setup:
        Encode_SL_BWP_PRS_PoolConfig_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SL_BWP_PRS_PoolConfig_r18(Decoder& dec, SetupRelease_SL_BWP_PRS_PoolConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SL_BWP_PRS_PoolConfig_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SL_BWP_PRS_PoolConfig_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SL_BWP_PRS_PoolConfig_r18_Tag_setup: {
        if (Decode_SL_BWP_PRS_PoolConfig_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SL_BWP_PRS_PoolConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SL_BWP_PRS_PoolConfig_r18(SetupRelease_SL_BWP_PRS_PoolConfig_r18& value)
{
    switch (value.tag) {
    case SetupRelease_SL_BWP_PRS_PoolConfig_r18_Tag_release:
        break;
    case SetupRelease_SL_BWP_PRS_PoolConfig_r18_Tag_setup:
        Free_SL_BWP_PRS_PoolConfig_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_BWP_Config_r16_ExtGroup2：ASN.1 SL_BWP_Config_r16_ExtGroup2；源文件第 21903 行；扩展添加组 [[ ]]。
// Encode_SL_BWP_Config_r16_ExtGroup2 只读不分配；Decode_SL_BWP_Config_r16_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_SL_BWP_Config_r16_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_BWP_Config_r16_ExtGroup2(Encoder& enc, const SL_BWP_Config_r16_ExtGroup2& value)
{
    enc.WriteBit(value.has_sl_BWP_PoolConfigA2X_r18);
    enc.WriteBit(value.has_sl_BWP_PRS_PoolConfig_r18);
    if (value.has_sl_BWP_PoolConfigA2X_r18) {
        Encode_SetupRelease_SL_BWP_PoolConfig_r16(enc, value.sl_BWP_PoolConfigA2X_r18);
    }
    if (value.has_sl_BWP_PRS_PoolConfig_r18) {
        Encode_SetupRelease_SL_BWP_PRS_PoolConfig_r18(enc, value.sl_BWP_PRS_PoolConfig_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SL_BWP_Config_r16_ExtGroup2(Decoder& dec, SL_BWP_Config_r16_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_SL_BWP_PoolConfig_r16(dec, value.sl_BWP_PoolConfigA2X_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_SL_BWP_PRS_PoolConfig_r18(dec, value.sl_BWP_PRS_PoolConfig_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_BWP_Config_r16_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_BWP_Config_r16_ExtGroup2(SL_BWP_Config_r16_ExtGroup2& value)
{
    if (value.has_sl_BWP_PoolConfigA2X_r18) {
        Free_SetupRelease_SL_BWP_PoolConfig_r16(value.sl_BWP_PoolConfigA2X_r18);
    }
    if (value.has_sl_BWP_PRS_PoolConfig_r18) {
        Free_SetupRelease_SL_BWP_PRS_PoolConfig_r18(value.sl_BWP_PRS_PoolConfig_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_LBT_FailureRecoveryConfig_r18：ASN.1 SL-LBT-FailureRecoveryConfig-r18；源文件第 22494 行；SEQUENCE。
// Encode_SL_LBT_FailureRecoveryConfig_r18 只读不分配；Decode_SL_LBT_FailureRecoveryConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_LBT_FailureRecoveryConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_LBT_FailureRecoveryConfig_r18(Encoder& enc, const SL_LBT_FailureRecoveryConfig_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_lbt_FailureInstanceMaxCount_r18);
    enc.WriteBit(value.has_sl_lbt_FailureDetectionTimer_r18);
    enc.WriteBit(value.has_sl_lbt_RecoveryTimer_r18);
    if (value.has_sl_lbt_FailureInstanceMaxCount_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_lbt_FailureInstanceMaxCount_r18), 0, 7);
    }
    if (value.has_sl_lbt_FailureDetectionTimer_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_lbt_FailureDetectionTimer_r18), 0, 7);
    }
    if (value.has_sl_lbt_RecoveryTimer_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_lbt_RecoveryTimer_r18), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_SL_LBT_FailureRecoveryConfig_r18(Decoder& dec, SL_LBT_FailureRecoveryConfig_r18& value)
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
        value.sl_lbt_FailureInstanceMaxCount_r18 = (SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_FailureInstanceMaxCount_r18)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sl_lbt_FailureDetectionTimer_r18 = (SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_FailureDetectionTimer_r18)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sl_lbt_RecoveryTimer_r18 = (SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_RecoveryTimer_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_LBT_FailureRecoveryConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_LBT_FailureRecoveryConfig_r18(SL_LBT_FailureRecoveryConfig_r18& value)
{
    if (value.has_sl_lbt_FailureInstanceMaxCount_r18) {
    }
    if (value.has_sl_lbt_FailureDetectionTimer_r18) {
    }
    if (value.has_sl_lbt_RecoveryTimer_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SL_LBT_FailureRecoveryConfig_r18：ASN.1 SetupRelease<SL-LBT-FailureRecoveryConfig-r18>；源文件第 21917 行；CHOICE。
// Encode_SetupRelease_SL_LBT_FailureRecoveryConfig_r18 只读不分配；Decode_SetupRelease_SL_LBT_FailureRecoveryConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SL_LBT_FailureRecoveryConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SL_LBT_FailureRecoveryConfig_r18(Encoder& enc, const SetupRelease_SL_LBT_FailureRecoveryConfig_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SL_LBT_FailureRecoveryConfig_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_SL_LBT_FailureRecoveryConfig_r18_Tag_setup:
        Encode_SL_LBT_FailureRecoveryConfig_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SL_LBT_FailureRecoveryConfig_r18(Decoder& dec, SetupRelease_SL_LBT_FailureRecoveryConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SL_LBT_FailureRecoveryConfig_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SL_LBT_FailureRecoveryConfig_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SL_LBT_FailureRecoveryConfig_r18_Tag_setup: {
        if (Decode_SL_LBT_FailureRecoveryConfig_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SL_LBT_FailureRecoveryConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SL_LBT_FailureRecoveryConfig_r18(SetupRelease_SL_LBT_FailureRecoveryConfig_r18& value)
{
    switch (value.tag) {
    case SetupRelease_SL_LBT_FailureRecoveryConfig_r18_Tag_release:
        break;
    case SetupRelease_SL_LBT_FailureRecoveryConfig_r18_Tag_setup:
        Free_SL_LBT_FailureRecoveryConfig_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_BWP_Generic_r16_ExtGroup1：ASN.1 SL_BWP_Generic_r16_ExtGroup1；源文件第 21916 行；扩展添加组 [[ ]]。
// Encode_SL_BWP_Generic_r16_ExtGroup1 只读不分配；Decode_SL_BWP_Generic_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SL_BWP_Generic_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_BWP_Generic_r16_ExtGroup1(Encoder& enc, const SL_BWP_Generic_r16_ExtGroup1& value)
{
    enc.WriteBit(value.has_sl_LBT_FailureRecoveryConfig_r18);
    enc.WriteBit(value.has_sl_StartingSymbolFirst_r18);
    enc.WriteBit(value.has_sl_StartingSymbolSecond_r18);
    enc.WriteBit(value.has_sl_TransmissionStructureForPSCCHandPSSCH_r18);
    enc.WriteBit(value.has_sl_GapOfAdditionalSSSB_Occasion_r18);
    enc.WriteBit(value.has_sl_AbsoluteFrequencySSB_NonAnchorList_r18);
    enc.WriteBit(value.has_sl_CPE_StartingPositionS_SSB_r18);
    enc.WriteBit(value.has_sl_CWS_ForPsschWithoutHarqAck_r18);
    enc.WriteBit(value.has_sl_NumOfAdditionalSSSBOccasion_r18);
    enc.WriteBit(value.has_sl_SSSBPowerOffsetOfAnchorRBSet_r18);
    enc.WriteBit(value.has_sl_RBSetConfigList_r18);
    enc.WriteBit(value.has_sl_IntraCellGuardBandsSL_List_r18);
    if (value.has_sl_LBT_FailureRecoveryConfig_r18) {
        Encode_SetupRelease_SL_LBT_FailureRecoveryConfig_r18(enc, value.sl_LBT_FailureRecoveryConfig_r18);
    }
    if (value.has_sl_StartingSymbolFirst_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_StartingSymbolFirst_r18), 0, 6);
    }
    if (value.has_sl_StartingSymbolSecond_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_StartingSymbolSecond_r18), 0, 4);
    }
    if (value.has_sl_TransmissionStructureForPSCCHandPSSCH_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_TransmissionStructureForPSCCHandPSSCH_r18), 0, 1);
    }
    if (value.has_sl_GapOfAdditionalSSSB_Occasion_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_GapOfAdditionalSSSB_Occasion_r18), 0, 639);
    }
    if (value.has_sl_AbsoluteFrequencySSB_NonAnchorList_r18) {
enc.WriteConstrainedLength(value.sl_AbsoluteFrequencySSB_NonAnchorList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_AbsoluteFrequencySSB_NonAnchorList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_AbsoluteFrequencySSB_NonAnchorList_r18_items[i]), 0, 3279165);
}
    }
    if (value.has_sl_CPE_StartingPositionS_SSB_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_CPE_StartingPositionS_SSB_r18), 1, 9);
    }
    if (value.has_sl_CWS_ForPsschWithoutHarqAck_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_CWS_ForPsschWithoutHarqAck_r18), 0, 4);
    }
    if (value.has_sl_NumOfAdditionalSSSBOccasion_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_NumOfAdditionalSSSBOccasion_r18), 0, 4);
    }
    if (value.has_sl_SSSBPowerOffsetOfAnchorRBSet_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_SSSBPowerOffsetOfAnchorRBSet_r18), 0, 1);
    }
    if (value.has_sl_RBSetConfigList_r18) {
enc.WriteConstrainedLength(value.sl_RBSetConfigList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_RBSetConfigList_r18_count; ++i) {
    Encode_SL_RBSetConfig_r18(enc, value.sl_RBSetConfigList_r18_items[i]);
}
    }
    if (value.has_sl_IntraCellGuardBandsSL_List_r18) {
enc.WriteConstrainedLength(value.sl_IntraCellGuardBandsSL_List_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_IntraCellGuardBandsSL_List_r18_count; ++i) {
    Encode_IntraCellGuardBandsPerSCS_r16(enc, value.sl_IntraCellGuardBandsSL_List_r18_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_SL_BWP_Generic_r16_ExtGroup1(Decoder& dec, SL_BWP_Generic_r16_ExtGroup1& value)
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
        if (Decode_SetupRelease_SL_LBT_FailureRecoveryConfig_r18(dec, value.sl_LBT_FailureRecoveryConfig_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.sl_StartingSymbolFirst_r18 = (SL_BWP_Generic_r16_ExtGroup1_Sl_StartingSymbolFirst_r18)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.sl_StartingSymbolSecond_r18 = (SL_BWP_Generic_r16_ExtGroup1_Sl_StartingSymbolSecond_r18)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_TransmissionStructureForPSCCHandPSSCH_r18 = (SL_BWP_Generic_r16_ExtGroup1_Sl_TransmissionStructureForPSCCHandPSSCH_r18)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.sl_GapOfAdditionalSSSB_Occasion_r18 = (int64_t)tmp_value;
    }
    if (present_5) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_AbsoluteFrequencySSB_NonAnchorList_r18_count)) { goto fail; }
if (value.sl_AbsoluteFrequencySSB_NonAnchorList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_AbsoluteFrequencySSB_NonAnchorList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_AbsoluteFrequencySSB_NonAnchorList_r18_count > 0u) {
    value.sl_AbsoluteFrequencySSB_NonAnchorList_r18_items = (ARFCN_ValueNR*)std::malloc((std::size_t)value.sl_AbsoluteFrequencySSB_NonAnchorList_r18_count * sizeof(ARFCN_ValueNR));
    if (value.sl_AbsoluteFrequencySSB_NonAnchorList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_AbsoluteFrequencySSB_NonAnchorList_r18_items, 0, (std::size_t)value.sl_AbsoluteFrequencySSB_NonAnchorList_r18_count * sizeof(ARFCN_ValueNR));
}
for (std::uint32_t i = 0; i < value.sl_AbsoluteFrequencySSB_NonAnchorList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
    value.sl_AbsoluteFrequencySSB_NonAnchorList_r18_items[i] = (ARFCN_ValueNR)tmp_value;
}
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 9, tmp_value)) { goto fail; }
        value.sl_CPE_StartingPositionS_SSB_r18 = (int64_t)tmp_value;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.sl_CWS_ForPsschWithoutHarqAck_r18 = (SL_BWP_Generic_r16_ExtGroup1_Sl_CWS_ForPsschWithoutHarqAck_r18)tmp_value;
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.sl_NumOfAdditionalSSSBOccasion_r18 = (int64_t)tmp_value;
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_SSSBPowerOffsetOfAnchorRBSet_r18 = (SL_BWP_Generic_r16_ExtGroup1_Sl_SSSBPowerOffsetOfAnchorRBSet_r18)tmp_value;
    }
    if (present_10) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_RBSetConfigList_r18_count)) { goto fail; }
if (value.sl_RBSetConfigList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_RBSetConfigList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_RBSetConfigList_r18_count > 0u) {
    value.sl_RBSetConfigList_r18_items = (SL_RBSetConfig_r18*)std::malloc((std::size_t)value.sl_RBSetConfigList_r18_count * sizeof(SL_RBSetConfig_r18));
    if (value.sl_RBSetConfigList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_RBSetConfigList_r18_items, 0, (std::size_t)value.sl_RBSetConfigList_r18_count * sizeof(SL_RBSetConfig_r18));
}
for (std::uint32_t i = 0; i < value.sl_RBSetConfigList_r18_count; ++i) {
    if (Decode_SL_RBSetConfig_r18(dec, value.sl_RBSetConfigList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_11) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_IntraCellGuardBandsSL_List_r18_count)) { goto fail; }
if (value.sl_IntraCellGuardBandsSL_List_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_IntraCellGuardBandsSL_List_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_IntraCellGuardBandsSL_List_r18_count > 0u) {
    value.sl_IntraCellGuardBandsSL_List_r18_items = (IntraCellGuardBandsPerSCS_r16*)std::malloc((std::size_t)value.sl_IntraCellGuardBandsSL_List_r18_count * sizeof(IntraCellGuardBandsPerSCS_r16));
    if (value.sl_IntraCellGuardBandsSL_List_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_IntraCellGuardBandsSL_List_r18_items, 0, (std::size_t)value.sl_IntraCellGuardBandsSL_List_r18_count * sizeof(IntraCellGuardBandsPerSCS_r16));
}
for (std::uint32_t i = 0; i < value.sl_IntraCellGuardBandsSL_List_r18_count; ++i) {
    if (Decode_IntraCellGuardBandsPerSCS_r16(dec, value.sl_IntraCellGuardBandsSL_List_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_BWP_Generic_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_BWP_Generic_r16_ExtGroup1(SL_BWP_Generic_r16_ExtGroup1& value)
{
    if (value.has_sl_LBT_FailureRecoveryConfig_r18) {
        Free_SetupRelease_SL_LBT_FailureRecoveryConfig_r18(value.sl_LBT_FailureRecoveryConfig_r18);
    }
    if (value.has_sl_StartingSymbolFirst_r18) {
    }
    if (value.has_sl_StartingSymbolSecond_r18) {
    }
    if (value.has_sl_TransmissionStructureForPSCCHandPSSCH_r18) {
    }
    if (value.has_sl_GapOfAdditionalSSSB_Occasion_r18) {
    }
    if (value.has_sl_AbsoluteFrequencySSB_NonAnchorList_r18) {
        if (value.sl_AbsoluteFrequencySSB_NonAnchorList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_AbsoluteFrequencySSB_NonAnchorList_r18_count; ++i) {
            }
            std::free(value.sl_AbsoluteFrequencySSB_NonAnchorList_r18_items);
            value.sl_AbsoluteFrequencySSB_NonAnchorList_r18_items = nullptr;
        }
        value.sl_AbsoluteFrequencySSB_NonAnchorList_r18_count = 0;
    }
    if (value.has_sl_CPE_StartingPositionS_SSB_r18) {
    }
    if (value.has_sl_CWS_ForPsschWithoutHarqAck_r18) {
    }
    if (value.has_sl_NumOfAdditionalSSSBOccasion_r18) {
    }
    if (value.has_sl_SSSBPowerOffsetOfAnchorRBSet_r18) {
    }
    if (value.has_sl_RBSetConfigList_r18) {
        if (value.sl_RBSetConfigList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_RBSetConfigList_r18_count; ++i) {
                Free_SL_RBSetConfig_r18(value.sl_RBSetConfigList_r18_items[i]);
            }
            std::free(value.sl_RBSetConfigList_r18_items);
            value.sl_RBSetConfigList_r18_items = nullptr;
        }
        value.sl_RBSetConfigList_r18_count = 0;
    }
    if (value.has_sl_IntraCellGuardBandsSL_List_r18) {
        if (value.sl_IntraCellGuardBandsSL_List_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_IntraCellGuardBandsSL_List_r18_count; ++i) {
                Free_IntraCellGuardBandsPerSCS_r16(value.sl_IntraCellGuardBandsSL_List_r18_items[i]);
            }
            std::free(value.sl_IntraCellGuardBandsSL_List_r18_items);
            value.sl_IntraCellGuardBandsSL_List_r18_items = nullptr;
        }
        value.sl_IntraCellGuardBandsSL_List_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PSBCH_Config_r16_ExtGroup1：ASN.1 SL_PSBCH_Config_r16_ExtGroup1；源文件第 22779 行；扩展添加组 [[ ]]。
// Encode_SL_PSBCH_Config_r16_ExtGroup1 只读不分配；Decode_SL_PSBCH_Config_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SL_PSBCH_Config_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PSBCH_Config_r16_ExtGroup1(Encoder& enc, const SL_PSBCH_Config_r16_ExtGroup1& value)
{
    enc.WriteBit(value.has_dl_P0_PSBCH_r17);
    if (value.has_dl_P0_PSBCH_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_P0_PSBCH_r17), -202, 24);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PSBCH_Config_r16_ExtGroup1(Decoder& dec, SL_PSBCH_Config_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-202, 24, tmp_value)) { goto fail; }
        value.dl_P0_PSBCH_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PSBCH_Config_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PSBCH_Config_r16_ExtGroup1(SL_PSBCH_Config_r16_ExtGroup1& value)
{
    if (value.has_dl_P0_PSBCH_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PSBCH_Config_r16：ASN.1 SL-PSBCH-Config-r16；源文件第 22775 行；SEQUENCE。
// Encode_SL_PSBCH_Config_r16 只读不分配；Decode_SL_PSBCH_Config_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_PSBCH_Config_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PSBCH_Config_r16(Encoder& enc, const SL_PSBCH_Config_r16& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_dl_P0_PSBCH_r16);
    enc.WriteBit(value.has_dl_Alpha_PSBCH_r16);
    if (value.has_dl_P0_PSBCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_P0_PSBCH_r16), -16, 15);
    }
    if (value.has_dl_Alpha_PSBCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_Alpha_PSBCH_r16), 0, 7);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SL_PSBCH_Config_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SL_PSBCH_Config_r16(Decoder& dec, SL_PSBCH_Config_r16& value)
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
        if (!dec.ReadConstrainedInteger(-16, 15, tmp_value)) { goto fail; }
        value.dl_P0_PSBCH_r16 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.dl_Alpha_PSBCH_r16 = (SL_PSBCH_Config_r16_Dl_Alpha_PSBCH_r16)tmp_value;
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
    if (Decode_SL_PSBCH_Config_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_SL_PSBCH_Config_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PSBCH_Config_r16(SL_PSBCH_Config_r16& value)
{
    if (value.has_dl_P0_PSBCH_r16) {
    }
    if (value.has_dl_Alpha_PSBCH_r16) {
    }
    if (value.has_extGroup1) {
        Free_SL_PSBCH_Config_r16_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SL_PSBCH_Config_r16：ASN.1 SetupRelease<SL-PSBCH-Config-r16>；源文件第 21913 行；CHOICE。
// Encode_SetupRelease_SL_PSBCH_Config_r16 只读不分配；Decode_SetupRelease_SL_PSBCH_Config_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SL_PSBCH_Config_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SL_PSBCH_Config_r16(Encoder& enc, const SetupRelease_SL_PSBCH_Config_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SL_PSBCH_Config_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_SL_PSBCH_Config_r16_Tag_setup:
        Encode_SL_PSBCH_Config_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SL_PSBCH_Config_r16(Decoder& dec, SetupRelease_SL_PSBCH_Config_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SL_PSBCH_Config_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SL_PSBCH_Config_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SL_PSBCH_Config_r16_Tag_setup: {
        if (Decode_SL_PSBCH_Config_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SL_PSBCH_Config_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SL_PSBCH_Config_r16(SetupRelease_SL_PSBCH_Config_r16& value)
{
    switch (value.tag) {
    case SetupRelease_SL_PSBCH_Config_r16_Tag_release:
        break;
    case SetupRelease_SL_PSBCH_Config_r16_Tag_setup:
        Free_SL_PSBCH_Config_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_BWP_Generic_r16：ASN.1 SL-BWP-Generic-r16；源文件第 21909 行；SEQUENCE。
// Encode_SL_BWP_Generic_r16 只读不分配；Decode_SL_BWP_Generic_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_BWP_Generic_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_BWP_Generic_r16(Encoder& enc, const SL_BWP_Generic_r16& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_BWP_r16);
    enc.WriteBit(value.has_sl_LengthSymbols_r16);
    enc.WriteBit(value.has_sl_StartSymbol_r16);
    enc.WriteBit(value.has_sl_PSBCH_Config_r16);
    enc.WriteBit(value.has_sl_TxDirectCurrentLocation_r16);
    if (value.has_sl_BWP_r16) {
        Encode_BWP(enc, value.sl_BWP_r16);
    }
    if (value.has_sl_LengthSymbols_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_LengthSymbols_r16), 0, 7);
    }
    if (value.has_sl_StartSymbol_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_StartSymbol_r16), 0, 7);
    }
    if (value.has_sl_PSBCH_Config_r16) {
        Encode_SetupRelease_SL_PSBCH_Config_r16(enc, value.sl_PSBCH_Config_r16);
    }
    if (value.has_sl_TxDirectCurrentLocation_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_TxDirectCurrentLocation_r16), 0, 3301);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SL_BWP_Generic_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SL_BWP_Generic_r16(Decoder& dec, SL_BWP_Generic_r16& value)
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
        if (Decode_BWP(dec, value.sl_BWP_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sl_LengthSymbols_r16 = (SL_BWP_Generic_r16_Sl_LengthSymbols_r16)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sl_StartSymbol_r16 = (SL_BWP_Generic_r16_Sl_StartSymbol_r16)tmp_value;
    }
    if (present_3) {
        if (Decode_SetupRelease_SL_PSBCH_Config_r16(dec, value.sl_PSBCH_Config_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3301, tmp_value)) { goto fail; }
        value.sl_TxDirectCurrentLocation_r16 = (int64_t)tmp_value;
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
    if (Decode_SL_BWP_Generic_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_SL_BWP_Generic_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_BWP_Generic_r16(SL_BWP_Generic_r16& value)
{
    if (value.has_sl_BWP_r16) {
        Free_BWP(value.sl_BWP_r16);
    }
    if (value.has_sl_LengthSymbols_r16) {
    }
    if (value.has_sl_StartSymbol_r16) {
    }
    if (value.has_sl_PSBCH_Config_r16) {
        Free_SetupRelease_SL_PSBCH_Config_r16(value.sl_PSBCH_Config_r16);
    }
    if (value.has_sl_TxDirectCurrentLocation_r16) {
    }
    if (value.has_extGroup1) {
        Free_SL_BWP_Generic_r16_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_BWP_Config_r16：ASN.1 SL-BWP-Config-r16；源文件第 21894 行；SEQUENCE。
// Encode_SL_BWP_Config_r16 只读不分配；Decode_SL_BWP_Config_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_BWP_Config_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_BWP_Config_r16(Encoder& enc, const SL_BWP_Config_r16& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_BWP_Generic_r16);
    enc.WriteBit(value.has_sl_BWP_PoolConfig_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_BWP_Id), 0, 4);
    if (value.has_sl_BWP_Generic_r16) {
        Encode_SL_BWP_Generic_r16(enc, value.sl_BWP_Generic_r16);
    }
    if (value.has_sl_BWP_PoolConfig_r16) {
        Encode_SL_BWP_PoolConfig_r16(enc, value.sl_BWP_PoolConfig_r16);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SL_BWP_Config_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SL_BWP_Config_r16_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SL_BWP_Config_r16(Decoder& dec, SL_BWP_Config_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.sl_BWP_Id = (BWP_Id)tmp_value;
    }
    if (present_0) {
        if (Decode_SL_BWP_Generic_r16(dec, value.sl_BWP_Generic_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SL_BWP_PoolConfig_r16(dec, value.sl_BWP_PoolConfig_r16) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_SL_BWP_Config_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_SL_BWP_Config_r16_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_SL_BWP_Config_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_BWP_Config_r16(SL_BWP_Config_r16& value)
{
    if (value.has_sl_BWP_Generic_r16) {
        Free_SL_BWP_Generic_r16(value.sl_BWP_Generic_r16);
    }
    if (value.has_sl_BWP_PoolConfig_r16) {
        Free_SL_BWP_PoolConfig_r16(value.sl_BWP_PoolConfig_r16);
    }
    if (value.has_extGroup1) {
        Free_SL_BWP_Config_r16_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SL_BWP_Config_r16_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_BWP_DiscPoolConfigCommon_r17：ASN.1 SL-BWP-DiscPoolConfigCommon-r17；源文件第 21960 行；SEQUENCE。
// Encode_SL_BWP_DiscPoolConfigCommon_r17 只读不分配；Decode_SL_BWP_DiscPoolConfigCommon_r17 可能 malloc（失败时内部已释放并清零）；Free_SL_BWP_DiscPoolConfigCommon_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_BWP_DiscPoolConfigCommon_r17(Encoder& enc, const SL_BWP_DiscPoolConfigCommon_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_DiscRxPool_r17);
    enc.WriteBit(value.has_sl_DiscTxPoolSelected_r17);
    if (value.has_sl_DiscRxPool_r17) {
enc.WriteConstrainedLength(value.sl_DiscRxPool_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_DiscRxPool_r17_count; ++i) {
    Encode_SL_ResourcePool_r16(enc, value.sl_DiscRxPool_r17_items[i]);
}
    }
    if (value.has_sl_DiscTxPoolSelected_r17) {
enc.WriteConstrainedLength(value.sl_DiscTxPoolSelected_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_DiscTxPoolSelected_r17_count; ++i) {
    Encode_SL_ResourcePoolConfig_r16(enc, value.sl_DiscTxPoolSelected_r17_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_SL_BWP_DiscPoolConfigCommon_r17(Decoder& dec, SL_BWP_DiscPoolConfigCommon_r17& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_DiscRxPool_r17_count)) { goto fail; }
if (value.sl_DiscRxPool_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_DiscRxPool_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_DiscRxPool_r17_count > 0u) {
    value.sl_DiscRxPool_r17_items = (SL_ResourcePool_r16*)std::malloc((std::size_t)value.sl_DiscRxPool_r17_count * sizeof(SL_ResourcePool_r16));
    if (value.sl_DiscRxPool_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_DiscRxPool_r17_items, 0, (std::size_t)value.sl_DiscRxPool_r17_count * sizeof(SL_ResourcePool_r16));
}
for (std::uint32_t i = 0; i < value.sl_DiscRxPool_r17_count; ++i) {
    if (Decode_SL_ResourcePool_r16(dec, value.sl_DiscRxPool_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_DiscTxPoolSelected_r17_count)) { goto fail; }
if (value.sl_DiscTxPoolSelected_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_DiscTxPoolSelected_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_DiscTxPoolSelected_r17_count > 0u) {
    value.sl_DiscTxPoolSelected_r17_items = (SL_ResourcePoolConfig_r16*)std::malloc((std::size_t)value.sl_DiscTxPoolSelected_r17_count * sizeof(SL_ResourcePoolConfig_r16));
    if (value.sl_DiscTxPoolSelected_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_DiscTxPoolSelected_r17_items, 0, (std::size_t)value.sl_DiscTxPoolSelected_r17_count * sizeof(SL_ResourcePoolConfig_r16));
}
for (std::uint32_t i = 0; i < value.sl_DiscTxPoolSelected_r17_count; ++i) {
    if (Decode_SL_ResourcePoolConfig_r16(dec, value.sl_DiscTxPoolSelected_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_BWP_DiscPoolConfigCommon_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_BWP_DiscPoolConfigCommon_r17(SL_BWP_DiscPoolConfigCommon_r17& value)
{
    if (value.has_sl_DiscRxPool_r17) {
        if (value.sl_DiscRxPool_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_DiscRxPool_r17_count; ++i) {
                Free_SL_ResourcePool_r16(value.sl_DiscRxPool_r17_items[i]);
            }
            std::free(value.sl_DiscRxPool_r17_items);
            value.sl_DiscRxPool_r17_items = nullptr;
        }
        value.sl_DiscRxPool_r17_count = 0;
    }
    if (value.has_sl_DiscTxPoolSelected_r17) {
        if (value.sl_DiscTxPoolSelected_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_DiscTxPoolSelected_r17_count; ++i) {
                Free_SL_ResourcePoolConfig_r16(value.sl_DiscTxPoolSelected_r17_items[i]);
            }
            std::free(value.sl_DiscTxPoolSelected_r17_items);
            value.sl_DiscTxPoolSelected_r17_items = nullptr;
        }
        value.sl_DiscTxPoolSelected_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_BWP_PoolConfigCommon_r16：ASN.1 SL-BWP-PoolConfigCommon-r16；源文件第 21991 行；SEQUENCE。
// Encode_SL_BWP_PoolConfigCommon_r16 只读不分配；Decode_SL_BWP_PoolConfigCommon_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_BWP_PoolConfigCommon_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_BWP_PoolConfigCommon_r16(Encoder& enc, const SL_BWP_PoolConfigCommon_r16& value)
{
    enc.WriteBit(value.has_sl_RxPool_r16);
    enc.WriteBit(value.has_sl_TxPoolSelectedNormal_r16);
    enc.WriteBit(value.has_sl_TxPoolExceptional_r16);
    if (value.has_sl_RxPool_r16) {
enc.WriteConstrainedLength(value.sl_RxPool_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_RxPool_r16_count; ++i) {
    Encode_SL_ResourcePool_r16(enc, value.sl_RxPool_r16_items[i]);
}
    }
    if (value.has_sl_TxPoolSelectedNormal_r16) {
enc.WriteConstrainedLength(value.sl_TxPoolSelectedNormal_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_TxPoolSelectedNormal_r16_count; ++i) {
    Encode_SL_ResourcePoolConfig_r16(enc, value.sl_TxPoolSelectedNormal_r16_items[i]);
}
    }
    if (value.has_sl_TxPoolExceptional_r16) {
        Encode_SL_ResourcePoolConfig_r16(enc, value.sl_TxPoolExceptional_r16);
    }
    return enc.Error();
}

ErrorCode Decode_SL_BWP_PoolConfigCommon_r16(Decoder& dec, SL_BWP_PoolConfigCommon_r16& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_RxPool_r16_count)) { goto fail; }
if (value.sl_RxPool_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_RxPool_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_RxPool_r16_count > 0u) {
    value.sl_RxPool_r16_items = (SL_ResourcePool_r16*)std::malloc((std::size_t)value.sl_RxPool_r16_count * sizeof(SL_ResourcePool_r16));
    if (value.sl_RxPool_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_RxPool_r16_items, 0, (std::size_t)value.sl_RxPool_r16_count * sizeof(SL_ResourcePool_r16));
}
for (std::uint32_t i = 0; i < value.sl_RxPool_r16_count; ++i) {
    if (Decode_SL_ResourcePool_r16(dec, value.sl_RxPool_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_TxPoolSelectedNormal_r16_count)) { goto fail; }
if (value.sl_TxPoolSelectedNormal_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_TxPoolSelectedNormal_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_TxPoolSelectedNormal_r16_count > 0u) {
    value.sl_TxPoolSelectedNormal_r16_items = (SL_ResourcePoolConfig_r16*)std::malloc((std::size_t)value.sl_TxPoolSelectedNormal_r16_count * sizeof(SL_ResourcePoolConfig_r16));
    if (value.sl_TxPoolSelectedNormal_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_TxPoolSelectedNormal_r16_items, 0, (std::size_t)value.sl_TxPoolSelectedNormal_r16_count * sizeof(SL_ResourcePoolConfig_r16));
}
for (std::uint32_t i = 0; i < value.sl_TxPoolSelectedNormal_r16_count; ++i) {
    if (Decode_SL_ResourcePoolConfig_r16(dec, value.sl_TxPoolSelectedNormal_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
        if (Decode_SL_ResourcePoolConfig_r16(dec, value.sl_TxPoolExceptional_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_BWP_PoolConfigCommon_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_BWP_PoolConfigCommon_r16(SL_BWP_PoolConfigCommon_r16& value)
{
    if (value.has_sl_RxPool_r16) {
        if (value.sl_RxPool_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_RxPool_r16_count; ++i) {
                Free_SL_ResourcePool_r16(value.sl_RxPool_r16_items[i]);
            }
            std::free(value.sl_RxPool_r16_items);
            value.sl_RxPool_r16_items = nullptr;
        }
        value.sl_RxPool_r16_count = 0;
    }
    if (value.has_sl_TxPoolSelectedNormal_r16) {
        if (value.sl_TxPoolSelectedNormal_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_TxPoolSelectedNormal_r16_count; ++i) {
                Free_SL_ResourcePoolConfig_r16(value.sl_TxPoolSelectedNormal_r16_items[i]);
            }
            std::free(value.sl_TxPoolSelectedNormal_r16_items);
            value.sl_TxPoolSelectedNormal_r16_items = nullptr;
        }
        value.sl_TxPoolSelectedNormal_r16_count = 0;
    }
    if (value.has_sl_TxPoolExceptional_r16) {
        Free_SL_ResourcePoolConfig_r16(value.sl_TxPoolExceptional_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_BWP_ConfigCommon_r16_ExtGroup1：ASN.1 SL_BWP_ConfigCommon_r16_ExtGroup1；源文件第 21939 行；扩展添加组 [[ ]]。
// Encode_SL_BWP_ConfigCommon_r16_ExtGroup1 只读不分配；Decode_SL_BWP_ConfigCommon_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SL_BWP_ConfigCommon_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_BWP_ConfigCommon_r16_ExtGroup1(Encoder& enc, const SL_BWP_ConfigCommon_r16_ExtGroup1& value)
{
    enc.WriteBit(value.has_sl_BWP_PoolConfigCommonPS_r17);
    enc.WriteBit(value.has_sl_BWP_DiscPoolConfigCommon_r17);
    if (value.has_sl_BWP_PoolConfigCommonPS_r17) {
        Encode_SL_BWP_PoolConfigCommon_r16(enc, value.sl_BWP_PoolConfigCommonPS_r17);
    }
    if (value.has_sl_BWP_DiscPoolConfigCommon_r17) {
        Encode_SL_BWP_DiscPoolConfigCommon_r17(enc, value.sl_BWP_DiscPoolConfigCommon_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SL_BWP_ConfigCommon_r16_ExtGroup1(Decoder& dec, SL_BWP_ConfigCommon_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SL_BWP_PoolConfigCommon_r16(dec, value.sl_BWP_PoolConfigCommonPS_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SL_BWP_DiscPoolConfigCommon_r17(dec, value.sl_BWP_DiscPoolConfigCommon_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_BWP_ConfigCommon_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_BWP_ConfigCommon_r16_ExtGroup1(SL_BWP_ConfigCommon_r16_ExtGroup1& value)
{
    if (value.has_sl_BWP_PoolConfigCommonPS_r17) {
        Free_SL_BWP_PoolConfigCommon_r16(value.sl_BWP_PoolConfigCommonPS_r17);
    }
    if (value.has_sl_BWP_DiscPoolConfigCommon_r17) {
        Free_SL_BWP_DiscPoolConfigCommon_r17(value.sl_BWP_DiscPoolConfigCommon_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_BWP_ConfigCommon_r16_ExtGroup2：ASN.1 SL_BWP_ConfigCommon_r16_ExtGroup2；源文件第 21943 行；扩展添加组 [[ ]]。
// Encode_SL_BWP_ConfigCommon_r16_ExtGroup2 只读不分配；Decode_SL_BWP_ConfigCommon_r16_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_SL_BWP_ConfigCommon_r16_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_BWP_ConfigCommon_r16_ExtGroup2(Encoder& enc, const SL_BWP_ConfigCommon_r16_ExtGroup2& value)
{
    enc.WriteBit(value.has_sl_BWP_PoolConfigCommonA2X_r18);
    if (value.has_sl_BWP_PoolConfigCommonA2X_r18) {
        Encode_SL_BWP_PoolConfigCommon_r16(enc, value.sl_BWP_PoolConfigCommonA2X_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SL_BWP_ConfigCommon_r16_ExtGroup2(Decoder& dec, SL_BWP_ConfigCommon_r16_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SL_BWP_PoolConfigCommon_r16(dec, value.sl_BWP_PoolConfigCommonA2X_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_BWP_ConfigCommon_r16_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_BWP_ConfigCommon_r16_ExtGroup2(SL_BWP_ConfigCommon_r16_ExtGroup2& value)
{
    if (value.has_sl_BWP_PoolConfigCommonA2X_r18) {
        Free_SL_BWP_PoolConfigCommon_r16(value.sl_BWP_PoolConfigCommonA2X_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_BWP_ConfigCommon_r16：ASN.1 SL-BWP-ConfigCommon-r16；源文件第 21935 行；SEQUENCE。
// Encode_SL_BWP_ConfigCommon_r16 只读不分配；Decode_SL_BWP_ConfigCommon_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_BWP_ConfigCommon_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_BWP_ConfigCommon_r16(Encoder& enc, const SL_BWP_ConfigCommon_r16& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_BWP_Generic_r16);
    enc.WriteBit(value.has_sl_BWP_PoolConfigCommon_r16);
    if (value.has_sl_BWP_Generic_r16) {
        Encode_SL_BWP_Generic_r16(enc, value.sl_BWP_Generic_r16);
    }
    if (value.has_sl_BWP_PoolConfigCommon_r16) {
        Encode_SL_BWP_PoolConfigCommon_r16(enc, value.sl_BWP_PoolConfigCommon_r16);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SL_BWP_ConfigCommon_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SL_BWP_ConfigCommon_r16_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SL_BWP_ConfigCommon_r16(Decoder& dec, SL_BWP_ConfigCommon_r16& value)
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
        if (Decode_SL_BWP_Generic_r16(dec, value.sl_BWP_Generic_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SL_BWP_PoolConfigCommon_r16(dec, value.sl_BWP_PoolConfigCommon_r16) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_SL_BWP_ConfigCommon_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_SL_BWP_ConfigCommon_r16_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_SL_BWP_ConfigCommon_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_BWP_ConfigCommon_r16(SL_BWP_ConfigCommon_r16& value)
{
    if (value.has_sl_BWP_Generic_r16) {
        Free_SL_BWP_Generic_r16(value.sl_BWP_Generic_r16);
    }
    if (value.has_sl_BWP_PoolConfigCommon_r16) {
        Free_SL_BWP_PoolConfigCommon_r16(value.sl_BWP_PoolConfigCommon_r16);
    }
    if (value.has_extGroup1) {
        Free_SL_BWP_ConfigCommon_r16_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SL_BWP_ConfigCommon_r16_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_BWP_PRS_PoolConfigCommon_r18：ASN.1 SL-BWP-PRS-PoolConfigCommon-r18；源文件第 22022 行；SEQUENCE。
// Encode_SL_BWP_PRS_PoolConfigCommon_r18 只读不分配；Decode_SL_BWP_PRS_PoolConfigCommon_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_BWP_PRS_PoolConfigCommon_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_BWP_PRS_PoolConfigCommon_r18(Encoder& enc, const SL_BWP_PRS_PoolConfigCommon_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_PRS_RxPool_r18);
    enc.WriteBit(value.has_sl_PRS_TxPoolSelectedNormal_r18);
    enc.WriteBit(value.has_sl_PRS_TxPoolExceptional_r18);
    if (value.has_sl_PRS_RxPool_r18) {
enc.WriteConstrainedLength(value.sl_PRS_RxPool_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_PRS_RxPool_r18_count; ++i) {
    Encode_SL_PRS_ResourcePool_r18(enc, value.sl_PRS_RxPool_r18_items[i]);
}
    }
    if (value.has_sl_PRS_TxPoolSelectedNormal_r18) {
enc.WriteConstrainedLength(value.sl_PRS_TxPoolSelectedNormal_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_PRS_TxPoolSelectedNormal_r18_count; ++i) {
    Encode_SL_PRS_ResourcePoolConfig_r18(enc, value.sl_PRS_TxPoolSelectedNormal_r18_items[i]);
}
    }
    if (value.has_sl_PRS_TxPoolExceptional_r18) {
        Encode_SL_PRS_ResourcePoolConfig_r18(enc, value.sl_PRS_TxPoolExceptional_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SL_BWP_PRS_PoolConfigCommon_r18(Decoder& dec, SL_BWP_PRS_PoolConfigCommon_r18& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_PRS_RxPool_r18_count)) { goto fail; }
if (value.sl_PRS_RxPool_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_PRS_RxPool_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_PRS_RxPool_r18_count > 0u) {
    value.sl_PRS_RxPool_r18_items = (SL_PRS_ResourcePool_r18*)std::malloc((std::size_t)value.sl_PRS_RxPool_r18_count * sizeof(SL_PRS_ResourcePool_r18));
    if (value.sl_PRS_RxPool_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_PRS_RxPool_r18_items, 0, (std::size_t)value.sl_PRS_RxPool_r18_count * sizeof(SL_PRS_ResourcePool_r18));
}
for (std::uint32_t i = 0; i < value.sl_PRS_RxPool_r18_count; ++i) {
    if (Decode_SL_PRS_ResourcePool_r18(dec, value.sl_PRS_RxPool_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_PRS_TxPoolSelectedNormal_r18_count)) { goto fail; }
if (value.sl_PRS_TxPoolSelectedNormal_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_PRS_TxPoolSelectedNormal_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_PRS_TxPoolSelectedNormal_r18_count > 0u) {
    value.sl_PRS_TxPoolSelectedNormal_r18_items = (SL_PRS_ResourcePoolConfig_r18*)std::malloc((std::size_t)value.sl_PRS_TxPoolSelectedNormal_r18_count * sizeof(SL_PRS_ResourcePoolConfig_r18));
    if (value.sl_PRS_TxPoolSelectedNormal_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_PRS_TxPoolSelectedNormal_r18_items, 0, (std::size_t)value.sl_PRS_TxPoolSelectedNormal_r18_count * sizeof(SL_PRS_ResourcePoolConfig_r18));
}
for (std::uint32_t i = 0; i < value.sl_PRS_TxPoolSelectedNormal_r18_count; ++i) {
    if (Decode_SL_PRS_ResourcePoolConfig_r18(dec, value.sl_PRS_TxPoolSelectedNormal_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
        if (Decode_SL_PRS_ResourcePoolConfig_r18(dec, value.sl_PRS_TxPoolExceptional_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_BWP_PRS_PoolConfigCommon_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_BWP_PRS_PoolConfigCommon_r18(SL_BWP_PRS_PoolConfigCommon_r18& value)
{
    if (value.has_sl_PRS_RxPool_r18) {
        if (value.sl_PRS_RxPool_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_PRS_RxPool_r18_count; ++i) {
                Free_SL_PRS_ResourcePool_r18(value.sl_PRS_RxPool_r18_items[i]);
            }
            std::free(value.sl_PRS_RxPool_r18_items);
            value.sl_PRS_RxPool_r18_items = nullptr;
        }
        value.sl_PRS_RxPool_r18_count = 0;
    }
    if (value.has_sl_PRS_TxPoolSelectedNormal_r18) {
        if (value.sl_PRS_TxPoolSelectedNormal_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_PRS_TxPoolSelectedNormal_r18_count; ++i) {
                Free_SL_PRS_ResourcePoolConfig_r18(value.sl_PRS_TxPoolSelectedNormal_r18_items[i]);
            }
            std::free(value.sl_PRS_TxPoolSelectedNormal_r18_items);
            value.sl_PRS_TxPoolSelectedNormal_r18_items = nullptr;
        }
        value.sl_PRS_TxPoolSelectedNormal_r18_count = 0;
    }
    if (value.has_sl_PRS_TxPoolExceptional_r18) {
        Free_SL_PRS_ResourcePoolConfig_r18(value.sl_PRS_TxPoolExceptional_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PriorityTxConfigIndex_r16：ASN.1 SL-PriorityTxConfigIndex-r16；源文件第 22036 行；SEQUENCE。
// Encode_SL_PriorityTxConfigIndex_r16 只读不分配；Decode_SL_PriorityTxConfigIndex_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_PriorityTxConfigIndex_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PriorityTxConfigIndex_r16(Encoder& enc, const SL_PriorityTxConfigIndex_r16& value)
{
    enc.WriteBit(value.has_sl_PriorityThreshold_r16);
    enc.WriteBit(value.has_sl_DefaultTxConfigIndex_r16);
    enc.WriteBit(value.has_sl_CBR_ConfigIndex_r16);
    enc.WriteBit(value.has_sl_Tx_ConfigIndexList_r16);
    if (value.has_sl_PriorityThreshold_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PriorityThreshold_r16), 1, 8);
    }
    if (value.has_sl_DefaultTxConfigIndex_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_DefaultTxConfigIndex_r16), 0, 15);
    }
    if (value.has_sl_CBR_ConfigIndex_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_CBR_ConfigIndex_r16), 0, 7);
    }
    if (value.has_sl_Tx_ConfigIndexList_r16) {
enc.WriteConstrainedLength(value.sl_Tx_ConfigIndexList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_Tx_ConfigIndexList_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_Tx_ConfigIndexList_r16_items[i]), 0, 63);
}
    }
    return enc.Error();
}

ErrorCode Decode_SL_PriorityTxConfigIndex_r16(Decoder& dec, SL_PriorityTxConfigIndex_r16& value)
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
        value.sl_PriorityThreshold_r16 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.sl_DefaultTxConfigIndex_r16 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sl_CBR_ConfigIndex_r16 = (int64_t)tmp_value;
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_Tx_ConfigIndexList_r16_count)) { goto fail; }
if (value.sl_Tx_ConfigIndexList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_Tx_ConfigIndexList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_Tx_ConfigIndexList_r16_count > 0u) {
    value.sl_Tx_ConfigIndexList_r16_items = (SL_TxConfigIndex_r16*)std::malloc((std::size_t)value.sl_Tx_ConfigIndexList_r16_count * sizeof(SL_TxConfigIndex_r16));
    if (value.sl_Tx_ConfigIndexList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_Tx_ConfigIndexList_r16_items, 0, (std::size_t)value.sl_Tx_ConfigIndexList_r16_count * sizeof(SL_TxConfigIndex_r16));
}
for (std::uint32_t i = 0; i < value.sl_Tx_ConfigIndexList_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.sl_Tx_ConfigIndexList_r16_items[i] = (SL_TxConfigIndex_r16)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PriorityTxConfigIndex_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PriorityTxConfigIndex_r16(SL_PriorityTxConfigIndex_r16& value)
{
    if (value.has_sl_PriorityThreshold_r16) {
    }
    if (value.has_sl_DefaultTxConfigIndex_r16) {
    }
    if (value.has_sl_CBR_ConfigIndex_r16) {
    }
    if (value.has_sl_Tx_ConfigIndexList_r16) {
        if (value.sl_Tx_ConfigIndexList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_Tx_ConfigIndexList_r16_count; ++i) {
            }
            std::free(value.sl_Tx_ConfigIndexList_r16_items);
            value.sl_Tx_ConfigIndexList_r16_items = nullptr;
        }
        value.sl_Tx_ConfigIndexList_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PriorityTxConfigIndex_v1650：ASN.1 SL-PriorityTxConfigIndex-v1650；源文件第 22043 行；SEQUENCE。
// Encode_SL_PriorityTxConfigIndex_v1650 只读不分配；Decode_SL_PriorityTxConfigIndex_v1650 可能 malloc（失败时内部已释放并清零）；Free_SL_PriorityTxConfigIndex_v1650 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PriorityTxConfigIndex_v1650(Encoder& enc, const SL_PriorityTxConfigIndex_v1650& value)
{
    enc.WriteBit(value.has_sl_MCS_RangeList_r16);
    if (value.has_sl_MCS_RangeList_r16) {
enc.WriteConstrainedLength(value.sl_MCS_RangeList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_MCS_RangeList_r16_count; ++i) {
    Encode_SL_MinMaxMCS_List_r16(enc, value.sl_MCS_RangeList_r16_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_SL_PriorityTxConfigIndex_v1650(Decoder& dec, SL_PriorityTxConfigIndex_v1650& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_MCS_RangeList_r16_count)) { goto fail; }
if (value.sl_MCS_RangeList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_MCS_RangeList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_MCS_RangeList_r16_count > 0u) {
    value.sl_MCS_RangeList_r16_items = (SL_MinMaxMCS_List_r16*)std::malloc((std::size_t)value.sl_MCS_RangeList_r16_count * sizeof(SL_MinMaxMCS_List_r16));
    if (value.sl_MCS_RangeList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_MCS_RangeList_r16_items, 0, (std::size_t)value.sl_MCS_RangeList_r16_count * sizeof(SL_MinMaxMCS_List_r16));
}
for (std::uint32_t i = 0; i < value.sl_MCS_RangeList_r16_count; ++i) {
    if (Decode_SL_MinMaxMCS_List_r16(dec, value.sl_MCS_RangeList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PriorityTxConfigIndex_v1650(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PriorityTxConfigIndex_v1650(SL_PriorityTxConfigIndex_v1650& value)
{
    if (value.has_sl_MCS_RangeList_r16) {
        if (value.sl_MCS_RangeList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_MCS_RangeList_r16_count; ++i) {
                Free_SL_MinMaxMCS_List_r16(value.sl_MCS_RangeList_r16_items[i]);
            }
            std::free(value.sl_MCS_RangeList_r16_items);
            value.sl_MCS_RangeList_r16_items = nullptr;
        }
        value.sl_MCS_RangeList_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_CBR_LevelsConfig_r16：ASN.1 SL-CBR-LevelsConfig-r16；源文件第 22057 行；SEQUENCE OF。
// Encode_SL_CBR_LevelsConfig_r16 只读不分配；Decode_SL_CBR_LevelsConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_CBR_LevelsConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_CBR_LevelsConfig_r16(Encoder& enc, const SL_CBR_LevelsConfig_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 100);
    }
    return enc.Error();
}

ErrorCode Decode_SL_CBR_LevelsConfig_r16(Decoder& dec, SL_CBR_LevelsConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_CBR_r16*)std::malloc((std::size_t)value.count * sizeof(SL_CBR_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_CBR_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 100, tmp_value)) { goto fail; }
    value.items[i] = (SL_CBR_r16)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_CBR_LevelsConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_CBR_LevelsConfig_r16(SL_CBR_LevelsConfig_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_TxPower_r16：ASN.1 SL-TxPower-r16；源文件第 23389 行；CHOICE。
// Encode_SL_TxPower_r16 只读不分配；Decode_SL_TxPower_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_TxPower_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_TxPower_r16(Encoder& enc, const SL_TxPower_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SL_TxPower_r16_Tag_minusinfinity_r16:
        (void)0;
        break;
    case SL_TxPower_r16_Tag_txPower_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.txPower_r16), -30, 33);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SL_TxPower_r16(Decoder& dec, SL_TxPower_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SL_TxPower_r16_Tag)root_index;
    switch (value.tag) {
    case SL_TxPower_r16_Tag_minusinfinity_r16: {
        (void)0;
        break;
    }
    case SL_TxPower_r16_Tag_txPower_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-30, 33, tmp_value)) { goto fail; }
        value.u.txPower_r16 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_TxPower_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_TxPower_r16(SL_TxPower_r16& value)
{
    switch (value.tag) {
    case SL_TxPower_r16_Tag_minusinfinity_r16:
        break;
    case SL_TxPower_r16_Tag_txPower_r16:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PSSCH_TxParameters_r16：ASN.1 SL-PSSCH-TxParameters-r16；源文件第 22803 行；SEQUENCE。
// Encode_SL_PSSCH_TxParameters_r16 只读不分配；Decode_SL_PSSCH_TxParameters_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_PSSCH_TxParameters_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PSSCH_TxParameters_r16(Encoder& enc, const SL_PSSCH_TxParameters_r16& value)
{
    enc.WriteBit(value.has_sl_MaxTxPower_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_MinMCS_PSSCH_r16), 0, 27);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_MaxMCS_PSSCH_r16), 0, 31);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_MinSubChannelNumPSSCH_r16), 1, 27);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_MaxSubchannelNumPSSCH_r16), 1, 27);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_MaxTxTransNumPSSCH_r16), 1, 32);
    if (value.has_sl_MaxTxPower_r16) {
        Encode_SL_TxPower_r16(enc, value.sl_MaxTxPower_r16);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PSSCH_TxParameters_r16(Decoder& dec, SL_PSSCH_TxParameters_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
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
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 27, tmp_value)) { goto fail; }
        value.sl_MinSubChannelNumPSSCH_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 27, tmp_value)) { goto fail; }
        value.sl_MaxSubchannelNumPSSCH_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.sl_MaxTxTransNumPSSCH_r16 = (int64_t)tmp_value;
    }
    if (present_0) {
        if (Decode_SL_TxPower_r16(dec, value.sl_MaxTxPower_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PSSCH_TxParameters_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PSSCH_TxParameters_r16(SL_PSSCH_TxParameters_r16& value)
{
    if (value.has_sl_MaxTxPower_r16) {
        Free_SL_TxPower_r16(value.sl_MaxTxPower_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_CBR_PSSCH_TxConfig_r16：ASN.1 SL-CBR-PSSCH-TxConfig-r16；源文件第 22059 行；SEQUENCE。
// Encode_SL_CBR_PSSCH_TxConfig_r16 只读不分配；Decode_SL_CBR_PSSCH_TxConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_CBR_PSSCH_TxConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_CBR_PSSCH_TxConfig_r16(Encoder& enc, const SL_CBR_PSSCH_TxConfig_r16& value)
{
    enc.WriteBit(value.has_sl_CR_Limit_r16);
    enc.WriteBit(value.has_sl_TxParameters_r16);
    if (value.has_sl_CR_Limit_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_CR_Limit_r16), 0, 10000);
    }
    if (value.has_sl_TxParameters_r16) {
        Encode_SL_PSSCH_TxParameters_r16(enc, value.sl_TxParameters_r16);
    }
    return enc.Error();
}

ErrorCode Decode_SL_CBR_PSSCH_TxConfig_r16(Decoder& dec, SL_CBR_PSSCH_TxConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10000, tmp_value)) { goto fail; }
        value.sl_CR_Limit_r16 = (int64_t)tmp_value;
    }
    if (present_1) {
        if (Decode_SL_PSSCH_TxParameters_r16(dec, value.sl_TxParameters_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_CBR_PSSCH_TxConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_CBR_PSSCH_TxConfig_r16(SL_CBR_PSSCH_TxConfig_r16& value)
{
    if (value.has_sl_CR_Limit_r16) {
    }
    if (value.has_sl_TxParameters_r16) {
        Free_SL_PSSCH_TxParameters_r16(value.sl_TxParameters_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_CBR_LevelsDedicatedSL_PRS_RP_r18：ASN.1 SL-CBR-LevelsDedicatedSL-PRS-RP-r18；源文件第 22076 行；SEQUENCE OF。
// Encode_SL_CBR_LevelsDedicatedSL_PRS_RP_r18 只读不分配；Decode_SL_CBR_LevelsDedicatedSL_PRS_RP_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_CBR_LevelsDedicatedSL_PRS_RP_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_CBR_LevelsDedicatedSL_PRS_RP_r18(Encoder& enc, const SL_CBR_LevelsDedicatedSL_PRS_RP_r18& value)
{
    enc.WriteConstrainedLength(value.count, 0u, 15u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 100);
    }
    return enc.Error();
}

ErrorCode Decode_SL_CBR_LevelsDedicatedSL_PRS_RP_r18(Decoder& dec, SL_CBR_LevelsDedicatedSL_PRS_RP_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(0u, 15u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 15u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_CBR_Dedicated_SL_PRS_RP_r18*)std::malloc((std::size_t)value.count * sizeof(SL_CBR_Dedicated_SL_PRS_RP_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_CBR_Dedicated_SL_PRS_RP_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 100, tmp_value)) { goto fail; }
    value.items[i] = (SL_CBR_Dedicated_SL_PRS_RP_r18)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_CBR_LevelsDedicatedSL_PRS_RP_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_CBR_LevelsDedicatedSL_PRS_RP_r18(SL_CBR_LevelsDedicatedSL_PRS_RP_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_CBR_SL_PRS_TxConfig_r18：ASN.1 SL-CBR-SL-PRS-TxConfig-r18；源文件第 22078 行；SEQUENCE。
// Encode_SL_CBR_SL_PRS_TxConfig_r18 只读不分配；Decode_SL_CBR_SL_PRS_TxConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_CBR_SL_PRS_TxConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_CBR_SL_PRS_TxConfig_r18(Encoder& enc, const SL_CBR_SL_PRS_TxConfig_r18& value)
{
    enc.WriteBit(value.has_sl_PRS_CR_Limit_r18);
    enc.WriteBit(value.has_sl_PRS_MaxTx_power_r18);
    enc.WriteBit(value.has_sl_PRS_MaxNum_Transmissions_r18);
    if (value.has_sl_PRS_CR_Limit_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PRS_CR_Limit_r18), 0, 10000);
    }
    if (value.has_sl_PRS_MaxTx_power_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PRS_MaxTx_power_r18), -30, 33);
    }
    if (value.has_sl_PRS_MaxNum_Transmissions_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PRS_MaxNum_Transmissions_r18), 1, 32);
    }
    return enc.Error();
}

ErrorCode Decode_SL_CBR_SL_PRS_TxConfig_r18(Decoder& dec, SL_CBR_SL_PRS_TxConfig_r18& value)
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
        if (!dec.ReadConstrainedInteger(0, 10000, tmp_value)) { goto fail; }
        value.sl_PRS_CR_Limit_r18 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-30, 33, tmp_value)) { goto fail; }
        value.sl_PRS_MaxTx_power_r18 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.sl_PRS_MaxNum_Transmissions_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_CBR_SL_PRS_TxConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_CBR_SL_PRS_TxConfig_r18(SL_CBR_SL_PRS_TxConfig_r18& value)
{
    if (value.has_sl_PRS_CR_Limit_r18) {
    }
    if (value.has_sl_PRS_MaxTx_power_r18) {
    }
    if (value.has_sl_PRS_MaxNum_Transmissions_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_SCCH_CarrierSetConfig_r18：ASN.1 SL-SCCH-CarrierSetConfig-r18；源文件第 22152 行；SEQUENCE。
// Encode_SL_SCCH_CarrierSetConfig_r18 只读不分配；Decode_SL_SCCH_CarrierSetConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_SCCH_CarrierSetConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_SCCH_CarrierSetConfig_r18(Encoder& enc, const SL_SCCH_CarrierSetConfig_r18& value)
{
enc.WriteConstrainedLength(value.sl_DestinationList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_DestinationList_r18_count; ++i) {
    enc.WriteFixedBitString(value.sl_DestinationList_r18_items[i].bytes, value.sl_DestinationList_r18_items[i].bitLength, 24, 24);
}
enc.WriteConstrainedLength(value.sl_SRB_Identity_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_SRB_Identity_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_SRB_Identity_r18_items[i]), 1, 3);
}
enc.WriteConstrainedLength(value.sl_AllowedCarrierFreqSet1_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_AllowedCarrierFreqSet1_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_AllowedCarrierFreqSet1_r18_items[i]), 1, 8);
}
enc.WriteConstrainedLength(value.sl_AllowedCarrierFreqSet2_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_AllowedCarrierFreqSet2_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_AllowedCarrierFreqSet2_r18_items[i]), 1, 8);
}
    return enc.Error();
}

ErrorCode Decode_SL_SCCH_CarrierSetConfig_r18(Decoder& dec, SL_SCCH_CarrierSetConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_DestinationList_r18_count)) { goto fail; }
if (value.sl_DestinationList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_DestinationList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_DestinationList_r18_count > 0u) {
    value.sl_DestinationList_r18_items = (SL_DestinationIdentity_r16*)std::malloc((std::size_t)value.sl_DestinationList_r18_count * sizeof(SL_DestinationIdentity_r16));
    if (value.sl_DestinationList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_DestinationList_r18_items, 0, (std::size_t)value.sl_DestinationList_r18_count * sizeof(SL_DestinationIdentity_r16));
}
for (std::uint32_t i = 0; i < value.sl_DestinationList_r18_count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
    string_length = 24;
    value.sl_DestinationList_r18_items[i].bytes = string_bytes;
    value.sl_DestinationList_r18_items[i].bitLength = string_length;
}
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_SRB_Identity_r18_count)) { goto fail; }
if (value.sl_SRB_Identity_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_SRB_Identity_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_SRB_Identity_r18_count > 0u) {
    value.sl_SRB_Identity_r18_items = (SRB_Identity*)std::malloc((std::size_t)value.sl_SRB_Identity_r18_count * sizeof(SRB_Identity));
    if (value.sl_SRB_Identity_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_SRB_Identity_r18_items, 0, (std::size_t)value.sl_SRB_Identity_r18_count * sizeof(SRB_Identity));
}
for (std::uint32_t i = 0; i < value.sl_SRB_Identity_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 3, tmp_value)) { goto fail; }
    value.sl_SRB_Identity_r18_items[i] = (SRB_Identity)tmp_value;
}
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_AllowedCarrierFreqSet1_r18_count)) { goto fail; }
if (value.sl_AllowedCarrierFreqSet1_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_AllowedCarrierFreqSet1_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_AllowedCarrierFreqSet1_r18_count > 0u) {
    value.sl_AllowedCarrierFreqSet1_r18_items = (int64_t*)std::malloc((std::size_t)value.sl_AllowedCarrierFreqSet1_r18_count * sizeof(int64_t));
    if (value.sl_AllowedCarrierFreqSet1_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_AllowedCarrierFreqSet1_r18_items, 0, (std::size_t)value.sl_AllowedCarrierFreqSet1_r18_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.sl_AllowedCarrierFreqSet1_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
    value.sl_AllowedCarrierFreqSet1_r18_items[i] = (int64_t)tmp_value;
}
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_AllowedCarrierFreqSet2_r18_count)) { goto fail; }
if (value.sl_AllowedCarrierFreqSet2_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_AllowedCarrierFreqSet2_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_AllowedCarrierFreqSet2_r18_count > 0u) {
    value.sl_AllowedCarrierFreqSet2_r18_items = (int64_t*)std::malloc((std::size_t)value.sl_AllowedCarrierFreqSet2_r18_count * sizeof(int64_t));
    if (value.sl_AllowedCarrierFreqSet2_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_AllowedCarrierFreqSet2_r18_items, 0, (std::size_t)value.sl_AllowedCarrierFreqSet2_r18_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.sl_AllowedCarrierFreqSet2_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
    value.sl_AllowedCarrierFreqSet2_r18_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_SCCH_CarrierSetConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_SCCH_CarrierSetConfig_r18(SL_SCCH_CarrierSetConfig_r18& value)
{
    if (value.sl_DestinationList_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.sl_DestinationList_r18_count; ++i) {
            std::free(value.sl_DestinationList_r18_items[i].bytes);
            value.sl_DestinationList_r18_items[i].bytes = nullptr;
            value.sl_DestinationList_r18_items[i].bitLength = 0;
        }
        std::free(value.sl_DestinationList_r18_items);
        value.sl_DestinationList_r18_items = nullptr;
    }
    value.sl_DestinationList_r18_count = 0;
    if (value.sl_SRB_Identity_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.sl_SRB_Identity_r18_count; ++i) {
        }
        std::free(value.sl_SRB_Identity_r18_items);
        value.sl_SRB_Identity_r18_items = nullptr;
    }
    value.sl_SRB_Identity_r18_count = 0;
    if (value.sl_AllowedCarrierFreqSet1_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.sl_AllowedCarrierFreqSet1_r18_count; ++i) {
        }
        std::free(value.sl_AllowedCarrierFreqSet1_r18_items);
        value.sl_AllowedCarrierFreqSet1_r18_items = nullptr;
    }
    value.sl_AllowedCarrierFreqSet1_r18_count = 0;
    if (value.sl_AllowedCarrierFreqSet2_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.sl_AllowedCarrierFreqSet2_r18_count; ++i) {
        }
        std::free(value.sl_AllowedCarrierFreqSet2_r18_items);
        value.sl_AllowedCarrierFreqSet2_r18_items = nullptr;
    }
    value.sl_AllowedCarrierFreqSet2_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ConfiguredGrantConfig_r16_ExtGroup1：ASN.1 SL_ConfiguredGrantConfig_r16_ExtGroup1；源文件第 22179 行；扩展添加组 [[ ]]。
// Encode_SL_ConfiguredGrantConfig_r16_ExtGroup1 只读不分配；Decode_SL_ConfiguredGrantConfig_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SL_ConfiguredGrantConfig_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ConfiguredGrantConfig_r16_ExtGroup1(Encoder& enc, const SL_ConfiguredGrantConfig_r16_ExtGroup1& value)
{
    enc.WriteBit(value.has_sl_N1PUCCH_AN_Type2_r16);
    if (value.has_sl_N1PUCCH_AN_Type2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_N1PUCCH_AN_Type2_r16), 0, 127);
    }
    return enc.Error();
}

ErrorCode Decode_SL_ConfiguredGrantConfig_r16_ExtGroup1(Decoder& dec, SL_ConfiguredGrantConfig_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.sl_N1PUCCH_AN_Type2_r16 = (PUCCH_ResourceId)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ConfiguredGrantConfig_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ConfiguredGrantConfig_r16_ExtGroup1(SL_ConfiguredGrantConfig_r16_ExtGroup1& value)
{
    if (value.has_sl_N1PUCCH_AN_Type2_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ConfiguredGrantConfig_r16_ExtGroup2：ASN.1 SL_ConfiguredGrantConfig_r16_ExtGroup2；源文件第 22182 行；扩展添加组 [[ ]]。
// Encode_SL_ConfiguredGrantConfig_r16_ExtGroup2 只读不分配；Decode_SL_ConfiguredGrantConfig_r16_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_SL_ConfiguredGrantConfig_r16_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ConfiguredGrantConfig_r16_ExtGroup2(Encoder& enc, const SL_ConfiguredGrantConfig_r16_ExtGroup2& value)
{
    enc.WriteBit(value.has_sl_StartRBsetCG_Type1_r18);
    if (value.has_sl_StartRBsetCG_Type1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_StartRBsetCG_Type1_r18), 0, 4);
    }
    return enc.Error();
}

ErrorCode Decode_SL_ConfiguredGrantConfig_r16_ExtGroup2(Decoder& dec, SL_ConfiguredGrantConfig_r16_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.sl_StartRBsetCG_Type1_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ConfiguredGrantConfig_r16_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ConfiguredGrantConfig_r16_ExtGroup2(SL_ConfiguredGrantConfig_r16_ExtGroup2& value)
{
    if (value.has_sl_StartRBsetCG_Type1_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_CG_MaxTransNumList_r16：ASN.1 SL-CG-MaxTransNumList-r16；源文件第 22189 行；SEQUENCE OF。
// Encode_SL_CG_MaxTransNumList_r16 只读不分配；Decode_SL_CG_MaxTransNumList_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_CG_MaxTransNumList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_CG_MaxTransNumList_r16(Encoder& enc, const SL_CG_MaxTransNumList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SL_CG_MaxTransNum_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SL_CG_MaxTransNumList_r16(Decoder& dec, SL_CG_MaxTransNumList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_CG_MaxTransNum_r16*)std::malloc((std::size_t)value.count * sizeof(SL_CG_MaxTransNum_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_CG_MaxTransNum_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SL_CG_MaxTransNum_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_CG_MaxTransNumList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_CG_MaxTransNumList_r16(SL_CG_MaxTransNumList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SL_CG_MaxTransNum_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PeriodCG_r16：ASN.1 SL-PeriodCG-r16；源文件第 22196 行；CHOICE。
// Encode_SL_PeriodCG_r16 只读不分配；Decode_SL_PeriodCG_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_PeriodCG_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PeriodCG_r16(Encoder& enc, const SL_PeriodCG_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SL_PeriodCG_r16_Tag_sl_PeriodCG1_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl_PeriodCG1_r16), 0, 15);
        break;
    case SL_PeriodCG_r16_Tag_sl_PeriodCG2_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl_PeriodCG2_r16), 1, 99);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PeriodCG_r16(Decoder& dec, SL_PeriodCG_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SL_PeriodCG_r16_Tag)root_index;
    switch (value.tag) {
    case SL_PeriodCG_r16_Tag_sl_PeriodCG1_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.sl_PeriodCG1_r16 = (SL_PeriodCG_r16_Sl_PeriodCG1_r16)tmp_value;
        break;
    }
    case SL_PeriodCG_r16_Tag_sl_PeriodCG2_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 99, tmp_value)) { goto fail; }
        value.u.sl_PeriodCG2_r16 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PeriodCG_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PeriodCG_r16(SL_PeriodCG_r16& value)
{
    switch (value.tag) {
    case SL_PeriodCG_r16_Tag_sl_PeriodCG1_r16:
        break;
    case SL_PeriodCG_r16_Tag_sl_PeriodCG2_r16:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ConfiguredGrantConfig_r16_Rrc_ConfiguredSidelinkGrant_r16：ASN.1 rrc-ConfiguredSidelinkGrant-r16；源文件第 22168 行；SEQUENCE。
// Encode_SL_ConfiguredGrantConfig_r16_Rrc_ConfiguredSidelinkGrant_r16 只读不分配；Decode_SL_ConfiguredGrantConfig_r16_Rrc_ConfiguredSidelinkGrant_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_ConfiguredGrantConfig_r16_Rrc_ConfiguredSidelinkGrant_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ConfiguredGrantConfig_r16_Rrc_ConfiguredSidelinkGrant_r16(Encoder& enc, const SL_ConfiguredGrantConfig_r16_Rrc_ConfiguredSidelinkGrant_r16& value)
{
    enc.WriteBit(value.has_sl_TimeResourceCG_Type1_r16);
    enc.WriteBit(value.has_sl_StartSubchannelCG_Type1_r16);
    enc.WriteBit(value.has_sl_FreqResourceCG_Type1_r16);
    enc.WriteBit(value.has_sl_TimeOffsetCG_Type1_r16);
    enc.WriteBit(value.has_sl_N1PUCCH_AN_r16);
    enc.WriteBit(value.has_sl_PSFCH_ToPUCCH_CG_Type1_r16);
    enc.WriteBit(value.has_sl_ResourcePoolID_r16);
    enc.WriteBit(value.has_sl_TimeReferenceSFN_Type1_r16);
    if (value.has_sl_TimeResourceCG_Type1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_TimeResourceCG_Type1_r16), 0, 496);
    }
    if (value.has_sl_StartSubchannelCG_Type1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_StartSubchannelCG_Type1_r16), 0, 26);
    }
    if (value.has_sl_FreqResourceCG_Type1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_FreqResourceCG_Type1_r16), 0, 6929);
    }
    if (value.has_sl_TimeOffsetCG_Type1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_TimeOffsetCG_Type1_r16), 0, 7999);
    }
    if (value.has_sl_N1PUCCH_AN_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_N1PUCCH_AN_r16), 0, 127);
    }
    if (value.has_sl_PSFCH_ToPUCCH_CG_Type1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PSFCH_ToPUCCH_CG_Type1_r16), 0, 15);
    }
    if (value.has_sl_ResourcePoolID_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_ResourcePoolID_r16), 1, 16);
    }
    if (value.has_sl_TimeReferenceSFN_Type1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_TimeReferenceSFN_Type1_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SL_ConfiguredGrantConfig_r16_Rrc_ConfiguredSidelinkGrant_r16(Decoder& dec, SL_ConfiguredGrantConfig_r16_Rrc_ConfiguredSidelinkGrant_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 496, tmp_value)) { goto fail; }
        value.sl_TimeResourceCG_Type1_r16 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 26, tmp_value)) { goto fail; }
        value.sl_StartSubchannelCG_Type1_r16 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6929, tmp_value)) { goto fail; }
        value.sl_FreqResourceCG_Type1_r16 = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7999, tmp_value)) { goto fail; }
        value.sl_TimeOffsetCG_Type1_r16 = (int64_t)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.sl_N1PUCCH_AN_r16 = (PUCCH_ResourceId)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.sl_PSFCH_ToPUCCH_CG_Type1_r16 = (int64_t)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.sl_ResourcePoolID_r16 = (SL_ResourcePoolID_r16)tmp_value;
    }
    if (present_7) {
        value.sl_TimeReferenceSFN_Type1_r16 = (SL_ConfiguredGrantConfig_r16_Rrc_ConfiguredSidelinkGrant_r16_Sl_TimeReferenceSFN_Type1_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ConfiguredGrantConfig_r16_Rrc_ConfiguredSidelinkGrant_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ConfiguredGrantConfig_r16_Rrc_ConfiguredSidelinkGrant_r16(SL_ConfiguredGrantConfig_r16_Rrc_ConfiguredSidelinkGrant_r16& value)
{
    if (value.has_sl_TimeResourceCG_Type1_r16) {
    }
    if (value.has_sl_StartSubchannelCG_Type1_r16) {
    }
    if (value.has_sl_FreqResourceCG_Type1_r16) {
    }
    if (value.has_sl_TimeOffsetCG_Type1_r16) {
    }
    if (value.has_sl_N1PUCCH_AN_r16) {
    }
    if (value.has_sl_PSFCH_ToPUCCH_CG_Type1_r16) {
    }
    if (value.has_sl_ResourcePoolID_r16) {
    }
    if (value.has_sl_TimeReferenceSFN_Type1_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ConfiguredGrantConfig_r16：ASN.1 SL-ConfiguredGrantConfig-r16；源文件第 22162 行；SEQUENCE。
// Encode_SL_ConfiguredGrantConfig_r16 只读不分配；Decode_SL_ConfiguredGrantConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_ConfiguredGrantConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ConfiguredGrantConfig_r16(Encoder& enc, const SL_ConfiguredGrantConfig_r16& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_PeriodCG_r16);
    enc.WriteBit(value.has_sl_NrOfHARQ_Processes_r16);
    enc.WriteBit(value.has_sl_HARQ_ProcID_offset_r16);
    enc.WriteBit(value.has_sl_CG_MaxTransNumList_r16);
    enc.WriteBit(value.has_rrc_ConfiguredSidelinkGrant_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_ConfigIndexCG_r16), 0, 7);
    if (value.has_sl_PeriodCG_r16) {
        Encode_SL_PeriodCG_r16(enc, value.sl_PeriodCG_r16);
    }
    if (value.has_sl_NrOfHARQ_Processes_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_NrOfHARQ_Processes_r16), 1, 16);
    }
    if (value.has_sl_HARQ_ProcID_offset_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_HARQ_ProcID_offset_r16), 0, 15);
    }
    if (value.has_sl_CG_MaxTransNumList_r16) {
        Encode_SL_CG_MaxTransNumList_r16(enc, value.sl_CG_MaxTransNumList_r16);
    }
    if (value.has_rrc_ConfiguredSidelinkGrant_r16) {
        Encode_SL_ConfiguredGrantConfig_r16_Rrc_ConfiguredSidelinkGrant_r16(enc, value.rrc_ConfiguredSidelinkGrant_r16);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SL_ConfiguredGrantConfig_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SL_ConfiguredGrantConfig_r16_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SL_ConfiguredGrantConfig_r16(Decoder& dec, SL_ConfiguredGrantConfig_r16& value)
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
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sl_ConfigIndexCG_r16 = (SL_ConfigIndexCG_r16)tmp_value;
    }
    if (present_0) {
        if (Decode_SL_PeriodCG_r16(dec, value.sl_PeriodCG_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.sl_NrOfHARQ_Processes_r16 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.sl_HARQ_ProcID_offset_r16 = (int64_t)tmp_value;
    }
    if (present_3) {
        if (Decode_SL_CG_MaxTransNumList_r16(dec, value.sl_CG_MaxTransNumList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SL_ConfiguredGrantConfig_r16_Rrc_ConfiguredSidelinkGrant_r16(dec, value.rrc_ConfiguredSidelinkGrant_r16) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_SL_ConfiguredGrantConfig_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_SL_ConfiguredGrantConfig_r16_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_SL_ConfiguredGrantConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ConfiguredGrantConfig_r16(SL_ConfiguredGrantConfig_r16& value)
{
    if (value.has_sl_PeriodCG_r16) {
        Free_SL_PeriodCG_r16(value.sl_PeriodCG_r16);
    }
    if (value.has_sl_NrOfHARQ_Processes_r16) {
    }
    if (value.has_sl_HARQ_ProcID_offset_r16) {
    }
    if (value.has_sl_CG_MaxTransNumList_r16) {
        Free_SL_CG_MaxTransNumList_r16(value.sl_CG_MaxTransNumList_r16);
    }
    if (value.has_rrc_ConfiguredSidelinkGrant_r16) {
        Free_SL_ConfiguredGrantConfig_r16_Rrc_ConfiguredSidelinkGrant_r16(value.rrc_ConfiguredSidelinkGrant_r16);
    }
    if (value.has_extGroup1) {
        Free_SL_ConfiguredGrantConfig_r16_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SL_ConfiguredGrantConfig_r16_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_CG_MaxTransNum_r16：ASN.1 SL-CG-MaxTransNum-r16；源文件第 22191 行；SEQUENCE。
// Encode_SL_CG_MaxTransNum_r16 只读不分配；Decode_SL_CG_MaxTransNum_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_CG_MaxTransNum_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_CG_MaxTransNum_r16(Encoder& enc, const SL_CG_MaxTransNum_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_Priority_r16), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_MaxTransNum_r16), 1, 32);
    return enc.Error();
}

ErrorCode Decode_SL_CG_MaxTransNum_r16(Decoder& dec, SL_CG_MaxTransNum_r16& value)
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
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.sl_MaxTransNum_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_CG_MaxTransNum_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_CG_MaxTransNum_r16(SL_CG_MaxTransNum_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18_Rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18：ASN.1 rrc-ConfiguredSidelinkGrantDedicated-SL-PRS-RP-r18；源文件第 22209 行；SEQUENCE。
// Encode_SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18_Rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18 只读不分配；Decode_SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18_Rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18_Rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18_Rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18(Encoder& enc, const SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18_Rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18& value)
{
    enc.WriteBit(value.has_sl_TimeOffsetCG_Type1_r18);
    enc.WriteBit(value.has_sl_TimeReferenceSFN_Type1_r18);
    enc.WriteBit(value.has_sl_TimeResourceCG_Type1_r18);
    enc.WriteBit(value.has_sl_PRS_ResourceIndicationFirstType1_r18);
    enc.WriteBit(value.has_sl_PRS_ResourceIndicationFutureType1_r18);
    if (value.has_sl_TimeOffsetCG_Type1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_TimeOffsetCG_Type1_r18), 0, 7999);
    }
    if (value.has_sl_TimeReferenceSFN_Type1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_TimeReferenceSFN_Type1_r18), 0, 0);
    }
    if (value.has_sl_TimeResourceCG_Type1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_TimeResourceCG_Type1_r18), 0, 496);
    }
    if (value.has_sl_PRS_ResourceIndicationFirstType1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PRS_ResourceIndicationFirstType1_r18), 0, 11);
    }
    if (value.has_sl_PRS_ResourceIndicationFutureType1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PRS_ResourceIndicationFutureType1_r18), 0, 143);
    }
    return enc.Error();
}

ErrorCode Decode_SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18_Rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18(Decoder& dec, SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18_Rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18& value)
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
        if (!dec.ReadConstrainedInteger(0, 7999, tmp_value)) { goto fail; }
        value.sl_TimeOffsetCG_Type1_r18 = (int64_t)tmp_value;
    }
    if (present_1) {
        value.sl_TimeReferenceSFN_Type1_r18 = (SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18_Rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18_Sl_1fb5a88c)0;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 496, tmp_value)) { goto fail; }
        value.sl_TimeResourceCG_Type1_r18 = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 11, tmp_value)) { goto fail; }
        value.sl_PRS_ResourceIndicationFirstType1_r18 = (int64_t)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 143, tmp_value)) { goto fail; }
        value.sl_PRS_ResourceIndicationFutureType1_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18_Rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18_Rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18(SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18_Rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18& value)
{
    if (value.has_sl_TimeOffsetCG_Type1_r18) {
    }
    if (value.has_sl_TimeReferenceSFN_Type1_r18) {
    }
    if (value.has_sl_TimeResourceCG_Type1_r18) {
    }
    if (value.has_sl_PRS_ResourceIndicationFirstType1_r18) {
    }
    if (value.has_sl_PRS_ResourceIndicationFutureType1_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18：ASN.1 SL-ConfiguredGrantConfigDedicatedSL-PRS-RP-r18；源文件第 22205 行；SEQUENCE。
// Encode_SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18 只读不分配；Decode_SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18(Encoder& enc, const SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18& value)
{
    enc.WriteBit(value.has_sl_PeriodCG_r18);
    enc.WriteBit(value.has_sl_ResourcePoolID_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_ConfigIndexCG_r18), 0, 7);
    if (value.has_sl_PeriodCG_r18) {
        Encode_SL_PeriodCG_r16(enc, value.sl_PeriodCG_r18);
    }
    if (value.has_sl_ResourcePoolID_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_ResourcePoolID_r18), 1, 16);
    }
    Encode_SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18_Rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18(enc, value.rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18);
    return enc.Error();
}

ErrorCode Decode_SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18(Decoder& dec, SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18& value)
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
        value.sl_ConfigIndexCG_r18 = (SL_ConfigIndexCG_r16)tmp_value;
    }
    if (present_0) {
        if (Decode_SL_PeriodCG_r16(dec, value.sl_PeriodCG_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.sl_ResourcePoolID_r18 = (SL_ResourcePoolID_r16)tmp_value;
    }
    {
        if (Decode_SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18_Rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18(dec, value.rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18(SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18& value)
{
    if (value.has_sl_PeriodCG_r18) {
        Free_SL_PeriodCG_r16(value.sl_PeriodCG_r18);
    }
    if (value.has_sl_ResourcePoolID_r18) {
    }
    Free_SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18_Rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18(value.rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17：ASN.1 sl-drx-onDurationTimer-r17；源文件第 22283 行；CHOICE。
// Encode_SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17 只读不分配；Decode_SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17 可能 malloc（失败时内部已释放并清零）；Free_SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17(Encoder& enc, const SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_Tag_subMilliSeconds:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.subMilliSeconds), 1, 31);
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_Tag_milliSeconds:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.milliSeconds), 0, 31);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17(Decoder& dec, SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_Tag)root_index;
    switch (value.tag) {
    case SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_Tag_subMilliSeconds: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 31, tmp_value)) { goto fail; }
        value.u.subMilliSeconds = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_Tag_milliSeconds: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.milliSeconds = (SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17(SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17& value)
{
    switch (value.tag) {
    case SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_Tag_subMilliSeconds:
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_Tag_milliSeconds:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17：ASN.1 sl-drx-CycleStartOffset-r17；源文件第 22300 行；CHOICE。
// Encode_SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17 只读不分配；Decode_SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17 可能 malloc（失败时内部已释放并清零）；Free_SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17(Encoder& enc, const SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 19);
    switch (value.tag) {
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms10:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms10), 0, 9);
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms20:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms20), 0, 19);
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms32:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms32), 0, 31);
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms40:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms40), 0, 39);
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms60:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms60), 0, 59);
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms64:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms64), 0, 63);
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms70:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms70), 0, 69);
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms80:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms80), 0, 79);
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms128:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms128), 0, 127);
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms160:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms160), 0, 159);
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms256:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms256), 0, 255);
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms320:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms320), 0, 319);
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms512:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms512), 0, 511);
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms640:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms640), 0, 639);
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms1024:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms1024), 0, 1023);
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms1280:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms1280), 0, 1279);
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms2048:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms2048), 0, 2047);
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms2560:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms2560), 0, 2559);
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms5120:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms5120), 0, 5119);
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms10240:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms10240), 0, 10239);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17(Decoder& dec, SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 19, root_index)) {
        goto fail;
    }
    value.tag = (SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag)root_index;
    switch (value.tag) {
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms10: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.u.ms10 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms20: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 19, tmp_value)) { goto fail; }
        value.u.ms20 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms32: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.ms32 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms40: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.ms40 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms60: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 59, tmp_value)) { goto fail; }
        value.u.ms60 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms64: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.ms64 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms70: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 69, tmp_value)) { goto fail; }
        value.u.ms70 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms80: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.ms80 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms128: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.u.ms128 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms160: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.u.ms160 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms256: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
        value.u.ms256 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms320: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.u.ms320 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms512: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
        value.u.ms512 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms640: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.u.ms640 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms1024: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.u.ms1024 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms1280: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1279, tmp_value)) { goto fail; }
        value.u.ms1280 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms2048: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2047, tmp_value)) { goto fail; }
        value.u.ms2048 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms2560: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2559, tmp_value)) { goto fail; }
        value.u.ms2560 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms5120: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5119, tmp_value)) { goto fail; }
        value.u.ms5120 = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms10240: {
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
    Free_SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17(SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17& value)
{
    switch (value.tag) {
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms10:
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms20:
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms32:
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms40:
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms60:
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms64:
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms70:
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms80:
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms128:
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms160:
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms256:
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms320:
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms512:
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms640:
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms1024:
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms1280:
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms2048:
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms2560:
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms5120:
        break;
    case SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms10240:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_DRX_ConfigUC_r17：ASN.1 SL-DRX-ConfigUC-r17；源文件第 22282 行；SEQUENCE。
// Encode_SL_DRX_ConfigUC_r17 只读不分配；Decode_SL_DRX_ConfigUC_r17 可能 malloc（失败时内部已释放并清零）；Free_SL_DRX_ConfigUC_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_DRX_ConfigUC_r17(Encoder& enc, const SL_DRX_ConfigUC_r17& value)
{
    enc.WriteBit(value.has_sl_drx_HARQ_RTT_Timer1_r17);
    enc.WriteBit(value.has_sl_drx_HARQ_RTT_Timer2_r17);
    Encode_SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17(enc, value.sl_drx_onDurationTimer_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_drx_InactivityTimer_r17), 0, 31);
    if (value.has_sl_drx_HARQ_RTT_Timer1_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_drx_HARQ_RTT_Timer1_r17), 0, 7);
    }
    if (value.has_sl_drx_HARQ_RTT_Timer2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_drx_HARQ_RTT_Timer2_r17), 0, 7);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_drx_RetransmissionTimer_r17), 0, 31);
    Encode_SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17(enc, value.sl_drx_CycleStartOffset_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_drx_SlotOffset), 0, 31);
    return enc.Error();
}

ErrorCode Decode_SL_DRX_ConfigUC_r17(Decoder& dec, SL_DRX_ConfigUC_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        if (Decode_SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17(dec, value.sl_drx_onDurationTimer_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.sl_drx_InactivityTimer_r17 = (SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sl_drx_HARQ_RTT_Timer1_r17 = (SL_DRX_ConfigUC_r17_Sl_drx_HARQ_RTT_Timer1_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sl_drx_HARQ_RTT_Timer2_r17 = (SL_DRX_ConfigUC_r17_Sl_drx_HARQ_RTT_Timer2_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.sl_drx_RetransmissionTimer_r17 = (SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17)tmp_value;
    }
    {
        if (Decode_SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17(dec, value.sl_drx_CycleStartOffset_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.sl_drx_SlotOffset = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_DRX_ConfigUC_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_DRX_ConfigUC_r17(SL_DRX_ConfigUC_r17& value)
{
    Free_SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17(value.sl_drx_onDurationTimer_r17);
    if (value.has_sl_drx_HARQ_RTT_Timer1_r17) {
    }
    if (value.has_sl_drx_HARQ_RTT_Timer2_r17) {
    }
    Free_SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17(value.sl_drx_CycleStartOffset_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_DRX_ConfigUC_Info_r17：ASN.1 SL-DRX-ConfigUC-Info-r17；源文件第 22233 行；SEQUENCE。
// Encode_SL_DRX_ConfigUC_Info_r17 只读不分配；Decode_SL_DRX_ConfigUC_Info_r17 可能 malloc（失败时内部已释放并清零）；Free_SL_DRX_ConfigUC_Info_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_DRX_ConfigUC_Info_r17(Encoder& enc, const SL_DRX_ConfigUC_Info_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_DestinationIndex_r17);
    enc.WriteBit(value.has_sl_DRX_ConfigUC_r17);
    if (value.has_sl_DestinationIndex_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_DestinationIndex_r17), 0, 31);
    }
    if (value.has_sl_DRX_ConfigUC_r17) {
        Encode_SL_DRX_ConfigUC_r17(enc, value.sl_DRX_ConfigUC_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SL_DRX_ConfigUC_Info_r17(Decoder& dec, SL_DRX_ConfigUC_Info_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.sl_DestinationIndex_r17 = (SL_DestinationIndex_r16)tmp_value;
    }
    if (present_1) {
        if (Decode_SL_DRX_ConfigUC_r17(dec, value.sl_DRX_ConfigUC_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_DRX_ConfigUC_Info_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_DRX_ConfigUC_Info_r17(SL_DRX_ConfigUC_Info_r17& value)
{
    if (value.has_sl_DestinationIndex_r17) {
    }
    if (value.has_sl_DRX_ConfigUC_r17) {
        Free_SL_DRX_ConfigUC_r17(value.sl_DRX_ConfigUC_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_SyncConfigList_r16：ASN.1 SL-SyncConfigList-r16；源文件第 23352 行；SEQUENCE OF。
// Encode_SL_SyncConfigList_r16 只读不分配；Decode_SL_SyncConfigList_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_SyncConfigList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_SyncConfigList_r16(Encoder& enc, const SL_SyncConfigList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SL_SyncConfig_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SL_SyncConfigList_r16(Decoder& dec, SL_SyncConfigList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_SyncConfig_r16*)std::malloc((std::size_t)value.count * sizeof(SL_SyncConfig_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_SyncConfig_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SL_SyncConfig_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_SyncConfigList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_SyncConfigList_r16(SL_SyncConfigList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SL_SyncConfig_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_FreqConfig_r16：ASN.1 SL-FreqConfig-r16；源文件第 22364 行；SEQUENCE。
// Encode_SL_FreqConfig_r16 只读不分配；Decode_SL_FreqConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_FreqConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_FreqConfig_r16(Encoder& enc, const SL_FreqConfig_r16& value)
{
    enc.WriteBit(value.has_sl_AbsoluteFrequencyPointA_r16);
    enc.WriteBit(value.has_sl_AbsoluteFrequencySSB_r16);
    enc.WriteBit(value.has_frequencyShift7p5khzSL_r16);
    enc.WriteBit(value.has_sl_BWP_ToReleaseList_r16);
    enc.WriteBit(value.has_sl_BWP_ToAddModList_r16);
    enc.WriteBit(value.has_sl_SyncConfigList_r16);
    enc.WriteBit(value.has_sl_SyncPriority_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_Freq_Id_r16), 1, 8);
enc.WriteConstrainedLength(value.sl_SCS_SpecificCarrierList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_SCS_SpecificCarrierList_r16_count; ++i) {
    Encode_SCS_SpecificCarrier(enc, value.sl_SCS_SpecificCarrierList_r16_items[i]);
}
    if (value.has_sl_AbsoluteFrequencyPointA_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_AbsoluteFrequencyPointA_r16), 0, 3279165);
    }
    if (value.has_sl_AbsoluteFrequencySSB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_AbsoluteFrequencySSB_r16), 0, 3279165);
    }
    if (value.has_frequencyShift7p5khzSL_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.frequencyShift7p5khzSL_r16), 0, 0);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.valueN_r16), -1, 1);
    if (value.has_sl_BWP_ToReleaseList_r16) {
enc.WriteConstrainedLength(value.sl_BWP_ToReleaseList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_BWP_ToReleaseList_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_BWP_ToReleaseList_r16_items[i]), 0, 4);
}
    }
    if (value.has_sl_BWP_ToAddModList_r16) {
enc.WriteConstrainedLength(value.sl_BWP_ToAddModList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_BWP_ToAddModList_r16_count; ++i) {
    Encode_SL_BWP_Config_r16(enc, value.sl_BWP_ToAddModList_r16_items[i]);
}
    }
    if (value.has_sl_SyncConfigList_r16) {
        Encode_SL_SyncConfigList_r16(enc, value.sl_SyncConfigList_r16);
    }
    if (value.has_sl_SyncPriority_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_SyncPriority_r16), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_SL_FreqConfig_r16(Decoder& dec, SL_FreqConfig_r16& value)
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
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.sl_Freq_Id_r16 = (SL_Freq_Id_r16)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_SCS_SpecificCarrierList_r16_count)) { goto fail; }
if (value.sl_SCS_SpecificCarrierList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_SCS_SpecificCarrierList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_SCS_SpecificCarrierList_r16_count > 0u) {
    value.sl_SCS_SpecificCarrierList_r16_items = (SCS_SpecificCarrier*)std::malloc((std::size_t)value.sl_SCS_SpecificCarrierList_r16_count * sizeof(SCS_SpecificCarrier));
    if (value.sl_SCS_SpecificCarrierList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_SCS_SpecificCarrierList_r16_items, 0, (std::size_t)value.sl_SCS_SpecificCarrierList_r16_count * sizeof(SCS_SpecificCarrier));
}
for (std::uint32_t i = 0; i < value.sl_SCS_SpecificCarrierList_r16_count; ++i) {
    if (Decode_SCS_SpecificCarrier(dec, value.sl_SCS_SpecificCarrierList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.sl_AbsoluteFrequencyPointA_r16 = (ARFCN_ValueNR)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.sl_AbsoluteFrequencySSB_r16 = (ARFCN_ValueNR)tmp_value;
    }
    if (present_2) {
        value.frequencyShift7p5khzSL_r16 = (SL_FreqConfig_r16_FrequencyShift7p5khzSL_r16)0;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-1, 1, tmp_value)) { goto fail; }
        value.valueN_r16 = (int64_t)tmp_value;
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_BWP_ToReleaseList_r16_count)) { goto fail; }
if (value.sl_BWP_ToReleaseList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_BWP_ToReleaseList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_BWP_ToReleaseList_r16_count > 0u) {
    value.sl_BWP_ToReleaseList_r16_items = (BWP_Id*)std::malloc((std::size_t)value.sl_BWP_ToReleaseList_r16_count * sizeof(BWP_Id));
    if (value.sl_BWP_ToReleaseList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_BWP_ToReleaseList_r16_items, 0, (std::size_t)value.sl_BWP_ToReleaseList_r16_count * sizeof(BWP_Id));
}
for (std::uint32_t i = 0; i < value.sl_BWP_ToReleaseList_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
    value.sl_BWP_ToReleaseList_r16_items[i] = (BWP_Id)tmp_value;
}
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_BWP_ToAddModList_r16_count)) { goto fail; }
if (value.sl_BWP_ToAddModList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_BWP_ToAddModList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_BWP_ToAddModList_r16_count > 0u) {
    value.sl_BWP_ToAddModList_r16_items = (SL_BWP_Config_r16*)std::malloc((std::size_t)value.sl_BWP_ToAddModList_r16_count * sizeof(SL_BWP_Config_r16));
    if (value.sl_BWP_ToAddModList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_BWP_ToAddModList_r16_items, 0, (std::size_t)value.sl_BWP_ToAddModList_r16_count * sizeof(SL_BWP_Config_r16));
}
for (std::uint32_t i = 0; i < value.sl_BWP_ToAddModList_r16_count; ++i) {
    if (Decode_SL_BWP_Config_r16(dec, value.sl_BWP_ToAddModList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_5) {
        if (Decode_SL_SyncConfigList_r16(dec, value.sl_SyncConfigList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_SyncPriority_r16 = (SL_FreqConfig_r16_Sl_SyncPriority_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_FreqConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_FreqConfig_r16(SL_FreqConfig_r16& value)
{
    if (value.sl_SCS_SpecificCarrierList_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.sl_SCS_SpecificCarrierList_r16_count; ++i) {
            Free_SCS_SpecificCarrier(value.sl_SCS_SpecificCarrierList_r16_items[i]);
        }
        std::free(value.sl_SCS_SpecificCarrierList_r16_items);
        value.sl_SCS_SpecificCarrierList_r16_items = nullptr;
    }
    value.sl_SCS_SpecificCarrierList_r16_count = 0;
    if (value.has_sl_AbsoluteFrequencyPointA_r16) {
    }
    if (value.has_sl_AbsoluteFrequencySSB_r16) {
    }
    if (value.has_frequencyShift7p5khzSL_r16) {
    }
    if (value.has_sl_BWP_ToReleaseList_r16) {
        if (value.sl_BWP_ToReleaseList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_BWP_ToReleaseList_r16_count; ++i) {
            }
            std::free(value.sl_BWP_ToReleaseList_r16_items);
            value.sl_BWP_ToReleaseList_r16_items = nullptr;
        }
        value.sl_BWP_ToReleaseList_r16_count = 0;
    }
    if (value.has_sl_BWP_ToAddModList_r16) {
        if (value.sl_BWP_ToAddModList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_BWP_ToAddModList_r16_count; ++i) {
                Free_SL_BWP_Config_r16(value.sl_BWP_ToAddModList_r16_items[i]);
            }
            std::free(value.sl_BWP_ToAddModList_r16_items);
            value.sl_BWP_ToAddModList_r16_items = nullptr;
        }
        value.sl_BWP_ToAddModList_r16_count = 0;
    }
    if (value.has_sl_SyncConfigList_r16) {
        Free_SL_SyncConfigList_r16(value.sl_SyncConfigList_r16);
    }
    if (value.has_sl_SyncPriority_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18：ASN.1 sl-EnergyDetectionConfig-r18；源文件第 22383 行；CHOICE。
// Encode_SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18 只读不分配；Decode_SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18(Encoder& enc, const SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18_Tag_sl_MaxEnergyDetectionThreshold_r18:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl_MaxEnergyDetectionThreshold_r18), -85, -52);
        break;
    case SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18_Tag_sl_EnergyDetectionThresholdOffset_r18:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl_EnergyDetectionThresholdOffset_r18), -13, 20);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18(Decoder& dec, SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18_Tag)root_index;
    switch (value.tag) {
    case SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18_Tag_sl_MaxEnergyDetectionThreshold_r18: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-85, -52, tmp_value)) { goto fail; }
        value.u.sl_MaxEnergyDetectionThreshold_r18 = (int64_t)tmp_value;
        break;
    }
    case SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18_Tag_sl_EnergyDetectionThresholdOffset_r18: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-13, 20, tmp_value)) { goto fail; }
        value.u.sl_EnergyDetectionThresholdOffset_r18 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18(SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18& value)
{
    switch (value.tag) {
    case SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18_Tag_sl_MaxEnergyDetectionThreshold_r18:
        break;
    case SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18_Tag_sl_EnergyDetectionThresholdOffset_r18:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_FreqConfigExt_v1800：ASN.1 SL-FreqConfigExt-v1800；源文件第 22379 行；SEQUENCE。
// Encode_SL_FreqConfigExt_v1800 只读不分配；Decode_SL_FreqConfigExt_v1800 可能 malloc（失败时内部已释放并清零）；Free_SL_FreqConfigExt_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_FreqConfigExt_v1800(Encoder& enc, const SL_FreqConfigExt_v1800& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_absenceOfAnyOtherTechnology_r18);
    enc.WriteBit(value.has_sl_FreqSelectionConfigList_r18);
    enc.WriteBit(value.has_sl_SyncTxDisabled_r18);
    enc.WriteBit(value.has_sl_EnergyDetectionConfig_r18);
    enc.WriteBit(value.has_ue_ToUE_COT_SharingED_Threshold_r18);
    enc.WriteBit(value.has_harq_ACK_FeedbackRatioforCW_AdjustmentGC_Option2_r18);
    if (value.has_absenceOfAnyOtherTechnology_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.absenceOfAnyOtherTechnology_r18), 0, 0);
    }
    if (value.has_sl_FreqSelectionConfigList_r18) {
enc.WriteConstrainedLength(value.sl_FreqSelectionConfigList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_FreqSelectionConfigList_r18_count; ++i) {
    Encode_SL_FreqSelectionConfig_r18(enc, value.sl_FreqSelectionConfigList_r18_items[i]);
}
    }
    if (value.has_sl_SyncTxDisabled_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_SyncTxDisabled_r18), 0, 0);
    }
    if (value.has_sl_EnergyDetectionConfig_r18) {
        Encode_SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18(enc, value.sl_EnergyDetectionConfig_r18);
    }
    if (value.has_ue_ToUE_COT_SharingED_Threshold_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ue_ToUE_COT_SharingED_Threshold_r18), -85, -52);
    }
    if (value.has_harq_ACK_FeedbackRatioforCW_AdjustmentGC_Option2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.harq_ACK_FeedbackRatioforCW_AdjustmentGC_Option2_r18), 10, 100);
    }
    return enc.Error();
}

ErrorCode Decode_SL_FreqConfigExt_v1800(Decoder& dec, SL_FreqConfigExt_v1800& value)
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
        value.absenceOfAnyOtherTechnology_r18 = (SL_FreqConfigExt_v1800_AbsenceOfAnyOtherTechnology_r18)0;
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_FreqSelectionConfigList_r18_count)) { goto fail; }
if (value.sl_FreqSelectionConfigList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_FreqSelectionConfigList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_FreqSelectionConfigList_r18_count > 0u) {
    value.sl_FreqSelectionConfigList_r18_items = (SL_FreqSelectionConfig_r18*)std::malloc((std::size_t)value.sl_FreqSelectionConfigList_r18_count * sizeof(SL_FreqSelectionConfig_r18));
    if (value.sl_FreqSelectionConfigList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_FreqSelectionConfigList_r18_items, 0, (std::size_t)value.sl_FreqSelectionConfigList_r18_count * sizeof(SL_FreqSelectionConfig_r18));
}
for (std::uint32_t i = 0; i < value.sl_FreqSelectionConfigList_r18_count; ++i) {
    if (Decode_SL_FreqSelectionConfig_r18(dec, value.sl_FreqSelectionConfigList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
        value.sl_SyncTxDisabled_r18 = (SL_FreqConfigExt_v1800_Sl_SyncTxDisabled_r18)0;
    }
    if (present_3) {
        if (Decode_SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18(dec, value.sl_EnergyDetectionConfig_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-85, -52, tmp_value)) { goto fail; }
        value.ue_ToUE_COT_SharingED_Threshold_r18 = (int64_t)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(10, 100, tmp_value)) { goto fail; }
        value.harq_ACK_FeedbackRatioforCW_AdjustmentGC_Option2_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_FreqConfigExt_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_FreqConfigExt_v1800(SL_FreqConfigExt_v1800& value)
{
    if (value.has_absenceOfAnyOtherTechnology_r18) {
    }
    if (value.has_sl_FreqSelectionConfigList_r18) {
        if (value.sl_FreqSelectionConfigList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_FreqSelectionConfigList_r18_count; ++i) {
                Free_SL_FreqSelectionConfig_r18(value.sl_FreqSelectionConfigList_r18_items[i]);
            }
            std::free(value.sl_FreqSelectionConfigList_r18_items);
            value.sl_FreqSelectionConfigList_r18_items = nullptr;
        }
        value.sl_FreqSelectionConfigList_r18_count = 0;
    }
    if (value.has_sl_SyncTxDisabled_r18) {
    }
    if (value.has_sl_EnergyDetectionConfig_r18) {
        Free_SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18(value.sl_EnergyDetectionConfig_r18);
    }
    if (value.has_ue_ToUE_COT_SharingED_Threshold_r18) {
    }
    if (value.has_harq_ACK_FeedbackRatioforCW_AdjustmentGC_Option2_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18：ASN.1 sl-UnlicensedFreqConfigCommon-r18/sl-EnergyDetectionConfig-r18；源文件第 22411 行；CHOICE。
// Encode_SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18 只读不分配；Decode_SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18(Encoder& enc, const SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18_Tag_sl_MaxEnergyDetectionThreshold_r18:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl_MaxEnergyDetectionThreshold_r18), -85, -52);
        break;
    case SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18_Tag_sl_EnergyDetectionThresholdOffset_r18:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl_EnergyDetectionThresholdOffset_r18), -13, 20);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18(Decoder& dec, SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18_Tag)root_index;
    switch (value.tag) {
    case SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18_Tag_sl_MaxEnergyDetectionThreshold_r18: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-85, -52, tmp_value)) { goto fail; }
        value.u.sl_MaxEnergyDetectionThreshold_r18 = (int64_t)tmp_value;
        break;
    }
    case SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18_Tag_sl_EnergyDetectionThresholdOffset_r18: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-13, 20, tmp_value)) { goto fail; }
        value.u.sl_EnergyDetectionThresholdOffset_r18 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18(SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18& value)
{
    switch (value.tag) {
    case SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18_Tag_sl_MaxEnergyDetectionThreshold_r18:
        break;
    case SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18_Tag_sl_EnergyDetectionThresholdOffset_r18:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18：ASN.1 sl-UnlicensedFreqConfigCommon-r18；源文件第 22407 行；SEQUENCE。
// Encode_SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18 只读不分配；Decode_SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18(Encoder& enc, const SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18& value)
{
    enc.WriteBit(value.has_absenceOfAnyOtherTechnology_r18);
    enc.WriteBit(value.has_sl_FreqSelectionConfigList_r18);
    enc.WriteBit(value.has_sl_SyncTxDisabled_r18);
    enc.WriteBit(value.has_sl_EnergyDetectionConfig_r18);
    enc.WriteBit(value.has_ue_ToUE_COT_SharingED_Threshold_r18);
    enc.WriteBit(value.has_harq_ACK_FeedbackRatioforCW_AdjustmentGC_Option2_r18);
    if (value.has_absenceOfAnyOtherTechnology_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.absenceOfAnyOtherTechnology_r18), 0, 0);
    }
    if (value.has_sl_FreqSelectionConfigList_r18) {
enc.WriteConstrainedLength(value.sl_FreqSelectionConfigList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_FreqSelectionConfigList_r18_count; ++i) {
    Encode_SL_FreqSelectionConfig_r18(enc, value.sl_FreqSelectionConfigList_r18_items[i]);
}
    }
    if (value.has_sl_SyncTxDisabled_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_SyncTxDisabled_r18), 0, 0);
    }
    if (value.has_sl_EnergyDetectionConfig_r18) {
        Encode_SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18(enc, value.sl_EnergyDetectionConfig_r18);
    }
    if (value.has_ue_ToUE_COT_SharingED_Threshold_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ue_ToUE_COT_SharingED_Threshold_r18), -85, -52);
    }
    if (value.has_harq_ACK_FeedbackRatioforCW_AdjustmentGC_Option2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.harq_ACK_FeedbackRatioforCW_AdjustmentGC_Option2_r18), 10, 100);
    }
    return enc.Error();
}

ErrorCode Decode_SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18(Decoder& dec, SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18& value)
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
        value.absenceOfAnyOtherTechnology_r18 = (SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_AbsenceOfAnyOtherTechnology_r18)0;
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_FreqSelectionConfigList_r18_count)) { goto fail; }
if (value.sl_FreqSelectionConfigList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_FreqSelectionConfigList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_FreqSelectionConfigList_r18_count > 0u) {
    value.sl_FreqSelectionConfigList_r18_items = (SL_FreqSelectionConfig_r18*)std::malloc((std::size_t)value.sl_FreqSelectionConfigList_r18_count * sizeof(SL_FreqSelectionConfig_r18));
    if (value.sl_FreqSelectionConfigList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_FreqSelectionConfigList_r18_items, 0, (std::size_t)value.sl_FreqSelectionConfigList_r18_count * sizeof(SL_FreqSelectionConfig_r18));
}
for (std::uint32_t i = 0; i < value.sl_FreqSelectionConfigList_r18_count; ++i) {
    if (Decode_SL_FreqSelectionConfig_r18(dec, value.sl_FreqSelectionConfigList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
        value.sl_SyncTxDisabled_r18 = (SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_SyncTxDisabled_r18)0;
    }
    if (present_3) {
        if (Decode_SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18(dec, value.sl_EnergyDetectionConfig_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-85, -52, tmp_value)) { goto fail; }
        value.ue_ToUE_COT_SharingED_Threshold_r18 = (int64_t)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(10, 100, tmp_value)) { goto fail; }
        value.harq_ACK_FeedbackRatioforCW_AdjustmentGC_Option2_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18(SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18& value)
{
    if (value.has_absenceOfAnyOtherTechnology_r18) {
    }
    if (value.has_sl_FreqSelectionConfigList_r18) {
        if (value.sl_FreqSelectionConfigList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_FreqSelectionConfigList_r18_count; ++i) {
                Free_SL_FreqSelectionConfig_r18(value.sl_FreqSelectionConfigList_r18_items[i]);
            }
            std::free(value.sl_FreqSelectionConfigList_r18_items);
            value.sl_FreqSelectionConfigList_r18_items = nullptr;
        }
        value.sl_FreqSelectionConfigList_r18_count = 0;
    }
    if (value.has_sl_SyncTxDisabled_r18) {
    }
    if (value.has_sl_EnergyDetectionConfig_r18) {
        Free_SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18(value.sl_EnergyDetectionConfig_r18);
    }
    if (value.has_ue_ToUE_COT_SharingED_Threshold_r18) {
    }
    if (value.has_harq_ACK_FeedbackRatioforCW_AdjustmentGC_Option2_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_FreqConfigCommon_r16_ExtGroup1：ASN.1 SL_FreqConfigCommon_r16_ExtGroup1；源文件第 22406 行；扩展添加组 [[ ]]。
// Encode_SL_FreqConfigCommon_r16_ExtGroup1 只读不分配；Decode_SL_FreqConfigCommon_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SL_FreqConfigCommon_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_FreqConfigCommon_r16_ExtGroup1(Encoder& enc, const SL_FreqConfigCommon_r16_ExtGroup1& value)
{
    enc.WriteBit(value.has_sl_UnlicensedFreqConfigCommon_r18);
    enc.WriteBit(value.has_sl_PosBWP_List_r18);
    if (value.has_sl_UnlicensedFreqConfigCommon_r18) {
        Encode_SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18(enc, value.sl_UnlicensedFreqConfigCommon_r18);
    }
    if (value.has_sl_PosBWP_List_r18) {
enc.WriteConstrainedLength(value.sl_PosBWP_List_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_PosBWP_List_r18_count; ++i) {
    Encode_SL_PosBWP_ConfigCommon_r18(enc, value.sl_PosBWP_List_r18_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_SL_FreqConfigCommon_r16_ExtGroup1(Decoder& dec, SL_FreqConfigCommon_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18(dec, value.sl_UnlicensedFreqConfigCommon_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_PosBWP_List_r18_count)) { goto fail; }
if (value.sl_PosBWP_List_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_PosBWP_List_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_PosBWP_List_r18_count > 0u) {
    value.sl_PosBWP_List_r18_items = (SL_PosBWP_ConfigCommon_r18*)std::malloc((std::size_t)value.sl_PosBWP_List_r18_count * sizeof(SL_PosBWP_ConfigCommon_r18));
    if (value.sl_PosBWP_List_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_PosBWP_List_r18_items, 0, (std::size_t)value.sl_PosBWP_List_r18_count * sizeof(SL_PosBWP_ConfigCommon_r18));
}
for (std::uint32_t i = 0; i < value.sl_PosBWP_List_r18_count; ++i) {
    if (Decode_SL_PosBWP_ConfigCommon_r18(dec, value.sl_PosBWP_List_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_FreqConfigCommon_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_FreqConfigCommon_r16_ExtGroup1(SL_FreqConfigCommon_r16_ExtGroup1& value)
{
    if (value.has_sl_UnlicensedFreqConfigCommon_r18) {
        Free_SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18(value.sl_UnlicensedFreqConfigCommon_r18);
    }
    if (value.has_sl_PosBWP_List_r18) {
        if (value.sl_PosBWP_List_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_PosBWP_List_r18_count; ++i) {
                Free_SL_PosBWP_ConfigCommon_r18(value.sl_PosBWP_List_r18_items[i]);
            }
            std::free(value.sl_PosBWP_List_r18_items);
            value.sl_PosBWP_List_r18_items = nullptr;
        }
        value.sl_PosBWP_List_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_FreqConfigCommon_r16：ASN.1 SL-FreqConfigCommon-r16；源文件第 22395 行；SEQUENCE。
// Encode_SL_FreqConfigCommon_r16 只读不分配；Decode_SL_FreqConfigCommon_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_FreqConfigCommon_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_FreqConfigCommon_r16(Encoder& enc, const SL_FreqConfigCommon_r16& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_AbsoluteFrequencySSB_r16);
    enc.WriteBit(value.has_frequencyShift7p5khzSL_r16);
    enc.WriteBit(value.has_sl_BWP_List_r16);
    enc.WriteBit(value.has_sl_SyncPriority_r16);
    enc.WriteBit(value.has_sl_NbAsSync_r16);
    enc.WriteBit(value.has_sl_SyncConfigList_r16);
enc.WriteConstrainedLength(value.sl_SCS_SpecificCarrierList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_SCS_SpecificCarrierList_r16_count; ++i) {
    Encode_SCS_SpecificCarrier(enc, value.sl_SCS_SpecificCarrierList_r16_items[i]);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_AbsoluteFrequencyPointA_r16), 0, 3279165);
    if (value.has_sl_AbsoluteFrequencySSB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_AbsoluteFrequencySSB_r16), 0, 3279165);
    }
    if (value.has_frequencyShift7p5khzSL_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.frequencyShift7p5khzSL_r16), 0, 0);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.valueN_r16), -1, 1);
    if (value.has_sl_BWP_List_r16) {
enc.WriteConstrainedLength(value.sl_BWP_List_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_BWP_List_r16_count; ++i) {
    Encode_SL_BWP_ConfigCommon_r16(enc, value.sl_BWP_List_r16_items[i]);
}
    }
    if (value.has_sl_SyncPriority_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_SyncPriority_r16), 0, 1);
    }
    if (value.has_sl_NbAsSync_r16) {
        enc.WriteBool(value.sl_NbAsSync_r16);
    }
    if (value.has_sl_SyncConfigList_r16) {
        Encode_SL_SyncConfigList_r16(enc, value.sl_SyncConfigList_r16);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SL_FreqConfigCommon_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SL_FreqConfigCommon_r16(Decoder& dec, SL_FreqConfigCommon_r16& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_SCS_SpecificCarrierList_r16_count)) { goto fail; }
if (value.sl_SCS_SpecificCarrierList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_SCS_SpecificCarrierList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_SCS_SpecificCarrierList_r16_count > 0u) {
    value.sl_SCS_SpecificCarrierList_r16_items = (SCS_SpecificCarrier*)std::malloc((std::size_t)value.sl_SCS_SpecificCarrierList_r16_count * sizeof(SCS_SpecificCarrier));
    if (value.sl_SCS_SpecificCarrierList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_SCS_SpecificCarrierList_r16_items, 0, (std::size_t)value.sl_SCS_SpecificCarrierList_r16_count * sizeof(SCS_SpecificCarrier));
}
for (std::uint32_t i = 0; i < value.sl_SCS_SpecificCarrierList_r16_count; ++i) {
    if (Decode_SCS_SpecificCarrier(dec, value.sl_SCS_SpecificCarrierList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.sl_AbsoluteFrequencyPointA_r16 = (ARFCN_ValueNR)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.sl_AbsoluteFrequencySSB_r16 = (ARFCN_ValueNR)tmp_value;
    }
    if (present_1) {
        value.frequencyShift7p5khzSL_r16 = (SL_FreqConfigCommon_r16_FrequencyShift7p5khzSL_r16)0;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-1, 1, tmp_value)) { goto fail; }
        value.valueN_r16 = (int64_t)tmp_value;
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_BWP_List_r16_count)) { goto fail; }
if (value.sl_BWP_List_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_BWP_List_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_BWP_List_r16_count > 0u) {
    value.sl_BWP_List_r16_items = (SL_BWP_ConfigCommon_r16*)std::malloc((std::size_t)value.sl_BWP_List_r16_count * sizeof(SL_BWP_ConfigCommon_r16));
    if (value.sl_BWP_List_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_BWP_List_r16_items, 0, (std::size_t)value.sl_BWP_List_r16_count * sizeof(SL_BWP_ConfigCommon_r16));
}
for (std::uint32_t i = 0; i < value.sl_BWP_List_r16_count; ++i) {
    if (Decode_SL_BWP_ConfigCommon_r16(dec, value.sl_BWP_List_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_SyncPriority_r16 = (SL_FreqConfigCommon_r16_Sl_SyncPriority_r16)tmp_value;
    }
    if (present_4) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.sl_NbAsSync_r16 = tmp_value;
    }
    if (present_5) {
        if (Decode_SL_SyncConfigList_r16(dec, value.sl_SyncConfigList_r16) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_SL_FreqConfigCommon_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_SL_FreqConfigCommon_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_FreqConfigCommon_r16(SL_FreqConfigCommon_r16& value)
{
    if (value.sl_SCS_SpecificCarrierList_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.sl_SCS_SpecificCarrierList_r16_count; ++i) {
            Free_SCS_SpecificCarrier(value.sl_SCS_SpecificCarrierList_r16_items[i]);
        }
        std::free(value.sl_SCS_SpecificCarrierList_r16_items);
        value.sl_SCS_SpecificCarrierList_r16_items = nullptr;
    }
    value.sl_SCS_SpecificCarrierList_r16_count = 0;
    if (value.has_sl_AbsoluteFrequencySSB_r16) {
    }
    if (value.has_frequencyShift7p5khzSL_r16) {
    }
    if (value.has_sl_BWP_List_r16) {
        if (value.sl_BWP_List_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_BWP_List_r16_count; ++i) {
                Free_SL_BWP_ConfigCommon_r16(value.sl_BWP_List_r16_items[i]);
            }
            std::free(value.sl_BWP_List_r16_items);
            value.sl_BWP_List_r16_items = nullptr;
        }
        value.sl_BWP_List_r16_count = 0;
    }
    if (value.has_sl_SyncPriority_r16) {
    }
    if (value.has_sl_NbAsSync_r16) {
    }
    if (value.has_sl_SyncConfigList_r16) {
        Free_SL_SyncConfigList_r16(value.sl_SyncConfigList_r16);
    }
    if (value.has_extGroup1) {
        Free_SL_FreqConfigCommon_r16_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_FreqSelectionConfig_r18：ASN.1 SL-FreqSelectionConfig-r18；源文件第 22424 行；SEQUENCE。
// Encode_SL_FreqSelectionConfig_r18 只读不分配；Decode_SL_FreqSelectionConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_FreqSelectionConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_FreqSelectionConfig_r18(Encoder& enc, const SL_FreqSelectionConfig_r18& value)
{
enc.WriteConstrainedLength(value.sl_priorityList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_priorityList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_priorityList_r18_items[i]), 1, 8);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_threshCBR_FreqReselection_r18), 0, 100);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_threshCBR_FreqKeeping_r18), 0, 100);
    return enc.Error();
}

ErrorCode Decode_SL_FreqSelectionConfig_r18(Decoder& dec, SL_FreqSelectionConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_priorityList_r18_count)) { goto fail; }
if (value.sl_priorityList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_priorityList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_priorityList_r18_count > 0u) {
    value.sl_priorityList_r18_items = (int64_t*)std::malloc((std::size_t)value.sl_priorityList_r18_count * sizeof(int64_t));
    if (value.sl_priorityList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_priorityList_r18_items, 0, (std::size_t)value.sl_priorityList_r18_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.sl_priorityList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
    value.sl_priorityList_r18_items[i] = (int64_t)tmp_value;
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 100, tmp_value)) { goto fail; }
        value.sl_threshCBR_FreqReselection_r18 = (SL_CBR_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 100, tmp_value)) { goto fail; }
        value.sl_threshCBR_FreqKeeping_r18 = (SL_CBR_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_FreqSelectionConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_FreqSelectionConfig_r18(SL_FreqSelectionConfig_r18& value)
{
    if (value.sl_priorityList_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.sl_priorityList_r18_count; ++i) {
        }
        std::free(value.sl_priorityList_r18_items);
        value.sl_priorityList_r18_items = nullptr;
    }
    value.sl_priorityList_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ThresholdRSRP_Condition1_B_1_r17：ASN.1 SL-ThresholdRSRP-Condition1-B-1-r17；源文件第 22486 行；SEQUENCE。
// Encode_SL_ThresholdRSRP_Condition1_B_1_r17 只读不分配；Decode_SL_ThresholdRSRP_Condition1_B_1_r17 可能 malloc（失败时内部已释放并清零）；Free_SL_ThresholdRSRP_Condition1_B_1_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ThresholdRSRP_Condition1_B_1_r17(Encoder& enc, const SL_ThresholdRSRP_Condition1_B_1_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_Priority_r17), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_ThresholdRSRP_Condition1_B_1_r17), 0, 66);
    return enc.Error();
}

ErrorCode Decode_SL_ThresholdRSRP_Condition1_B_1_r17(Decoder& dec, SL_ThresholdRSRP_Condition1_B_1_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.sl_Priority_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 66, tmp_value)) { goto fail; }
        value.sl_ThresholdRSRP_Condition1_B_1_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ThresholdRSRP_Condition1_B_1_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ThresholdRSRP_Condition1_B_1_r17(SL_ThresholdRSRP_Condition1_B_1_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_LogicalChannelConfig_r16_ExtGroup1：ASN.1 SL_LogicalChannelConfig_r16_ExtGroup1；源文件第 22521 行；扩展添加组 [[ ]]。
// Encode_SL_LogicalChannelConfig_r16_ExtGroup1 只读不分配；Decode_SL_LogicalChannelConfig_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SL_LogicalChannelConfig_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_LogicalChannelConfig_r16_ExtGroup1(Encoder& enc, const SL_LogicalChannelConfig_r16_ExtGroup1& value)
{
    enc.WriteBit(value.has_sl_ChannelAccessPriority_r18);
    enc.WriteBit(value.has_sl_AllowedCarriers_r18);
    if (value.has_sl_ChannelAccessPriority_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_ChannelAccessPriority_r18), 1, 4);
    }
    if (value.has_sl_AllowedCarriers_r18) {
enc.WriteConstrainedLength(value.sl_AllowedCarriers_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_AllowedCarriers_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_AllowedCarriers_r18_items[i]), 1, 8);
}
    }
    return enc.Error();
}

ErrorCode Decode_SL_LogicalChannelConfig_r16_ExtGroup1(Decoder& dec, SL_LogicalChannelConfig_r16_ExtGroup1& value)
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
        value.sl_ChannelAccessPriority_r18 = (int64_t)tmp_value;
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_AllowedCarriers_r18_count)) { goto fail; }
if (value.sl_AllowedCarriers_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_AllowedCarriers_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_AllowedCarriers_r18_count > 0u) {
    value.sl_AllowedCarriers_r18_items = (int64_t*)std::malloc((std::size_t)value.sl_AllowedCarriers_r18_count * sizeof(int64_t));
    if (value.sl_AllowedCarriers_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_AllowedCarriers_r18_items, 0, (std::size_t)value.sl_AllowedCarriers_r18_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.sl_AllowedCarriers_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
    value.sl_AllowedCarriers_r18_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_LogicalChannelConfig_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_LogicalChannelConfig_r16_ExtGroup1(SL_LogicalChannelConfig_r16_ExtGroup1& value)
{
    if (value.has_sl_ChannelAccessPriority_r18) {
    }
    if (value.has_sl_AllowedCarriers_r18) {
        if (value.sl_AllowedCarriers_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_AllowedCarriers_r18_count; ++i) {
            }
            std::free(value.sl_AllowedCarriers_r18_items);
            value.sl_AllowedCarriers_r18_items = nullptr;
        }
        value.sl_AllowedCarriers_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_LogicalChannelConfig_r16：ASN.1 SL-LogicalChannelConfig-r16；源文件第 22504 行；SEQUENCE。
// Encode_SL_LogicalChannelConfig_r16 只读不分配；Decode_SL_LogicalChannelConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_LogicalChannelConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_LogicalChannelConfig_r16(Encoder& enc, const SL_LogicalChannelConfig_r16& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_ConfiguredGrantType1Allowed_r16);
    enc.WriteBit(value.has_sl_HARQ_FeedbackEnabled_r16);
    enc.WriteBit(value.has_sl_AllowedCG_List_r16);
    enc.WriteBit(value.has_sl_AllowedSCS_List_r16);
    enc.WriteBit(value.has_sl_MaxPUSCH_Duration_r16);
    enc.WriteBit(value.has_sl_LogicalChannelGroup_r16);
    enc.WriteBit(value.has_sl_SchedulingRequestId_r16);
    enc.WriteBit(value.has_sl_LogicalChannelSR_DelayTimerApplied_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_Priority_r16), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_PrioritisedBitRate_r16), 0, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_BucketSizeDuration_r16), 0, 15);
    if (value.has_sl_ConfiguredGrantType1Allowed_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_ConfiguredGrantType1Allowed_r16), 0, 0);
    }
    if (value.has_sl_HARQ_FeedbackEnabled_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_HARQ_FeedbackEnabled_r16), 0, 1);
    }
    if (value.has_sl_AllowedCG_List_r16) {
enc.WriteConstrainedLength(value.sl_AllowedCG_List_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_AllowedCG_List_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_AllowedCG_List_r16_items[i]), 0, 7);
}
    }
    if (value.has_sl_AllowedSCS_List_r16) {
enc.WriteConstrainedLength(value.sl_AllowedSCS_List_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_AllowedSCS_List_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_AllowedSCS_List_r16_items[i]), 0, 7);
}
    }
    if (value.has_sl_MaxPUSCH_Duration_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_MaxPUSCH_Duration_r16), 0, 7);
    }
    if (value.has_sl_LogicalChannelGroup_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_LogicalChannelGroup_r16), 0, 7);
    }
    if (value.has_sl_SchedulingRequestId_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_SchedulingRequestId_r16), 0, 7);
    }
    if (value.has_sl_LogicalChannelSR_DelayTimerApplied_r16) {
        enc.WriteBool(value.sl_LogicalChannelSR_DelayTimerApplied_r16);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SL_LogicalChannelConfig_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SL_LogicalChannelConfig_r16(Decoder& dec, SL_LogicalChannelConfig_r16& value)
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
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.sl_Priority_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.sl_PrioritisedBitRate_r16 = (SL_LogicalChannelConfig_r16_Sl_PrioritisedBitRate_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.sl_BucketSizeDuration_r16 = (SL_LogicalChannelConfig_r16_Sl_BucketSizeDuration_r16)tmp_value;
    }
    if (present_0) {
        value.sl_ConfiguredGrantType1Allowed_r16 = (SL_LogicalChannelConfig_r16_Sl_ConfiguredGrantType1Allowed_r16)0;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sl_HARQ_FeedbackEnabled_r16 = (SL_LogicalChannelConfig_r16_Sl_HARQ_FeedbackEnabled_r16)tmp_value;
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_AllowedCG_List_r16_count)) { goto fail; }
if (value.sl_AllowedCG_List_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_AllowedCG_List_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_AllowedCG_List_r16_count > 0u) {
    value.sl_AllowedCG_List_r16_items = (SL_ConfigIndexCG_r16*)std::malloc((std::size_t)value.sl_AllowedCG_List_r16_count * sizeof(SL_ConfigIndexCG_r16));
    if (value.sl_AllowedCG_List_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_AllowedCG_List_r16_items, 0, (std::size_t)value.sl_AllowedCG_List_r16_count * sizeof(SL_ConfigIndexCG_r16));
}
for (std::uint32_t i = 0; i < value.sl_AllowedCG_List_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.sl_AllowedCG_List_r16_items[i] = (SL_ConfigIndexCG_r16)tmp_value;
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_AllowedSCS_List_r16_count)) { goto fail; }
if (value.sl_AllowedSCS_List_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_AllowedSCS_List_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_AllowedSCS_List_r16_count > 0u) {
    value.sl_AllowedSCS_List_r16_items = (SubcarrierSpacing*)std::malloc((std::size_t)value.sl_AllowedSCS_List_r16_count * sizeof(SubcarrierSpacing));
    if (value.sl_AllowedSCS_List_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_AllowedSCS_List_r16_items, 0, (std::size_t)value.sl_AllowedSCS_List_r16_count * sizeof(SubcarrierSpacing));
}
for (std::uint32_t i = 0; i < value.sl_AllowedSCS_List_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.sl_AllowedSCS_List_r16_items[i] = (SubcarrierSpacing)tmp_value;
}
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sl_MaxPUSCH_Duration_r16 = (SL_LogicalChannelConfig_r16_Sl_MaxPUSCH_Duration_r16)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sl_LogicalChannelGroup_r16 = (int64_t)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sl_SchedulingRequestId_r16 = (SchedulingRequestId)tmp_value;
    }
    if (present_7) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.sl_LogicalChannelSR_DelayTimerApplied_r16 = tmp_value;
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
    if (Decode_SL_LogicalChannelConfig_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_SL_LogicalChannelConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_LogicalChannelConfig_r16(SL_LogicalChannelConfig_r16& value)
{
    if (value.has_sl_ConfiguredGrantType1Allowed_r16) {
    }
    if (value.has_sl_HARQ_FeedbackEnabled_r16) {
    }
    if (value.has_sl_AllowedCG_List_r16) {
        if (value.sl_AllowedCG_List_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_AllowedCG_List_r16_count; ++i) {
            }
            std::free(value.sl_AllowedCG_List_r16_items);
            value.sl_AllowedCG_List_r16_items = nullptr;
        }
        value.sl_AllowedCG_List_r16_count = 0;
    }
    if (value.has_sl_AllowedSCS_List_r16) {
        if (value.sl_AllowedSCS_List_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_AllowedSCS_List_r16_count; ++i) {
            }
            std::free(value.sl_AllowedSCS_List_r16_items);
            value.sl_AllowedSCS_List_r16_items = nullptr;
        }
        value.sl_AllowedSCS_List_r16_count = 0;
    }
    if (value.has_sl_MaxPUSCH_Duration_r16) {
    }
    if (value.has_sl_LogicalChannelGroup_r16) {
    }
    if (value.has_sl_SchedulingRequestId_r16) {
    }
    if (value.has_sl_LogicalChannelSR_DelayTimerApplied_r16) {
    }
    if (value.has_extGroup1) {
        Free_SL_LogicalChannelConfig_r16_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_RemoteUE_ToAddMod_r17：ASN.1 SL-RemoteUE-ToAddMod-r17；源文件第 22539 行；SEQUENCE。
// Encode_SL_RemoteUE_ToAddMod_r17 只读不分配；Decode_SL_RemoteUE_ToAddMod_r17 可能 malloc（失败时内部已释放并清零）；Free_SL_RemoteUE_ToAddMod_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_RemoteUE_ToAddMod_r17(Encoder& enc, const SL_RemoteUE_ToAddMod_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_SRAP_ConfigRelay_r17);
    enc.WriteFixedBitString(value.sl_L2IdentityRemote_r17.bytes, value.sl_L2IdentityRemote_r17.bitLength, 24, 24);
    if (value.has_sl_SRAP_ConfigRelay_r17) {
        Encode_SL_SRAP_Config_r17(enc, value.sl_SRAP_ConfigRelay_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SL_RemoteUE_ToAddMod_r17(Decoder& dec, SL_RemoteUE_ToAddMod_r17& value)
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
        value.sl_L2IdentityRemote_r17.bytes = string_bytes;
        value.sl_L2IdentityRemote_r17.bitLength = string_length;
    }
    if (present_0) {
        if (Decode_SL_SRAP_Config_r17(dec, value.sl_SRAP_ConfigRelay_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_RemoteUE_ToAddMod_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_RemoteUE_ToAddMod_r17(SL_RemoteUE_ToAddMod_r17& value)
{
    std::free(value.sl_L2IdentityRemote_r17.bytes);
    value.sl_L2IdentityRemote_r17.bytes = nullptr;
    value.sl_L2IdentityRemote_r17.bitLength = 0;
    if (value.has_sl_SRAP_ConfigRelay_r17) {
        Free_SL_SRAP_Config_r17(value.sl_SRAP_ConfigRelay_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_U2U_RemoteUE_ToAddMod_r18：ASN.1 SL-U2U-RemoteUE-ToAddMod-r18；源文件第 22545 行；SEQUENCE。
// Encode_SL_U2U_RemoteUE_ToAddMod_r18 只读不分配；Decode_SL_U2U_RemoteUE_ToAddMod_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_U2U_RemoteUE_ToAddMod_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_U2U_RemoteUE_ToAddMod_r18(Encoder& enc, const SL_U2U_RemoteUE_ToAddMod_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_SourceRemoteUE_ToAddModList_r18);
    enc.WriteBit(value.has_sl_SourceRemoteUE_ToReleaseList_r18);
    enc.WriteFixedBitString(value.sl_L2IdentityRemoteUE_r18.bytes, value.sl_L2IdentityRemoteUE_r18.bitLength, 24, 24);
    if (value.has_sl_SourceRemoteUE_ToAddModList_r18) {
enc.WriteConstrainedLength(value.sl_SourceRemoteUE_ToAddModList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_SourceRemoteUE_ToAddModList_r18_count; ++i) {
    Encode_SL_SourceRemoteUE_ToAddMod_r18(enc, value.sl_SourceRemoteUE_ToAddModList_r18_items[i]);
}
    }
    if (value.has_sl_SourceRemoteUE_ToReleaseList_r18) {
enc.WriteConstrainedLength(value.sl_SourceRemoteUE_ToReleaseList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_SourceRemoteUE_ToReleaseList_r18_count; ++i) {
    enc.WriteFixedBitString(value.sl_SourceRemoteUE_ToReleaseList_r18_items[i].bytes, value.sl_SourceRemoteUE_ToReleaseList_r18_items[i].bitLength, 24, 24);
}
    }
    return enc.Error();
}

ErrorCode Decode_SL_U2U_RemoteUE_ToAddMod_r18(Decoder& dec, SL_U2U_RemoteUE_ToAddMod_r18& value)
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
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.sl_L2IdentityRemoteUE_r18.bytes = string_bytes;
        value.sl_L2IdentityRemoteUE_r18.bitLength = string_length;
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_SourceRemoteUE_ToAddModList_r18_count)) { goto fail; }
if (value.sl_SourceRemoteUE_ToAddModList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_SourceRemoteUE_ToAddModList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_SourceRemoteUE_ToAddModList_r18_count > 0u) {
    value.sl_SourceRemoteUE_ToAddModList_r18_items = (SL_SourceRemoteUE_ToAddMod_r18*)std::malloc((std::size_t)value.sl_SourceRemoteUE_ToAddModList_r18_count * sizeof(SL_SourceRemoteUE_ToAddMod_r18));
    if (value.sl_SourceRemoteUE_ToAddModList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_SourceRemoteUE_ToAddModList_r18_items, 0, (std::size_t)value.sl_SourceRemoteUE_ToAddModList_r18_count * sizeof(SL_SourceRemoteUE_ToAddMod_r18));
}
for (std::uint32_t i = 0; i < value.sl_SourceRemoteUE_ToAddModList_r18_count; ++i) {
    if (Decode_SL_SourceRemoteUE_ToAddMod_r18(dec, value.sl_SourceRemoteUE_ToAddModList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_SourceRemoteUE_ToReleaseList_r18_count)) { goto fail; }
if (value.sl_SourceRemoteUE_ToReleaseList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_SourceRemoteUE_ToReleaseList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_SourceRemoteUE_ToReleaseList_r18_count > 0u) {
    value.sl_SourceRemoteUE_ToReleaseList_r18_items = (SL_SourceIdentity_r17*)std::malloc((std::size_t)value.sl_SourceRemoteUE_ToReleaseList_r18_count * sizeof(SL_SourceIdentity_r17));
    if (value.sl_SourceRemoteUE_ToReleaseList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_SourceRemoteUE_ToReleaseList_r18_items, 0, (std::size_t)value.sl_SourceRemoteUE_ToReleaseList_r18_count * sizeof(SL_SourceIdentity_r17));
}
for (std::uint32_t i = 0; i < value.sl_SourceRemoteUE_ToReleaseList_r18_count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
    string_length = 24;
    value.sl_SourceRemoteUE_ToReleaseList_r18_items[i].bytes = string_bytes;
    value.sl_SourceRemoteUE_ToReleaseList_r18_items[i].bitLength = string_length;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_U2U_RemoteUE_ToAddMod_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_U2U_RemoteUE_ToAddMod_r18(SL_U2U_RemoteUE_ToAddMod_r18& value)
{
    std::free(value.sl_L2IdentityRemoteUE_r18.bytes);
    value.sl_L2IdentityRemoteUE_r18.bytes = nullptr;
    value.sl_L2IdentityRemoteUE_r18.bitLength = 0;
    if (value.has_sl_SourceRemoteUE_ToAddModList_r18) {
        if (value.sl_SourceRemoteUE_ToAddModList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_SourceRemoteUE_ToAddModList_r18_count; ++i) {
                Free_SL_SourceRemoteUE_ToAddMod_r18(value.sl_SourceRemoteUE_ToAddModList_r18_items[i]);
            }
            std::free(value.sl_SourceRemoteUE_ToAddModList_r18_items);
            value.sl_SourceRemoteUE_ToAddModList_r18_items = nullptr;
        }
        value.sl_SourceRemoteUE_ToAddModList_r18_count = 0;
    }
    if (value.has_sl_SourceRemoteUE_ToReleaseList_r18) {
        if (value.sl_SourceRemoteUE_ToReleaseList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_SourceRemoteUE_ToReleaseList_r18_count; ++i) {
                std::free(value.sl_SourceRemoteUE_ToReleaseList_r18_items[i].bytes);
                value.sl_SourceRemoteUE_ToReleaseList_r18_items[i].bytes = nullptr;
                value.sl_SourceRemoteUE_ToReleaseList_r18_items[i].bitLength = 0;
            }
            std::free(value.sl_SourceRemoteUE_ToReleaseList_r18_items);
            value.sl_SourceRemoteUE_ToReleaseList_r18_items = nullptr;
        }
        value.sl_SourceRemoteUE_ToReleaseList_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_SRAP_ConfigU2U_r18：ASN.1 SL-SRAP-ConfigU2U-r18；源文件第 23338 行；SEQUENCE。
// Encode_SL_SRAP_ConfigU2U_r18 只读不分配；Decode_SL_SRAP_ConfigU2U_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_SRAP_ConfigU2U_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_SRAP_ConfigU2U_r18(Encoder& enc, const SL_SRAP_ConfigU2U_r18& value)
{
    enc.WriteBit(value.has_sl_MappingToAddMod_U2U_List_r18);
    enc.WriteBit(value.has_sl_MappingToRelease_U2U_List_r18);
    if (value.has_sl_MappingToAddMod_U2U_List_r18) {
enc.WriteConstrainedLength(value.sl_MappingToAddMod_U2U_List_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_MappingToAddMod_U2U_List_r18_count; ++i) {
    Encode_SL_MappingConfig_U2U_r18(enc, value.sl_MappingToAddMod_U2U_List_r18_items[i]);
}
    }
    if (value.has_sl_MappingToRelease_U2U_List_r18) {
enc.WriteConstrainedLength(value.sl_MappingToRelease_U2U_List_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_MappingToRelease_U2U_List_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_MappingToRelease_U2U_List_r18_items[i]), 1, 512);
}
    }
    return enc.Error();
}

ErrorCode Decode_SL_SRAP_ConfigU2U_r18(Decoder& dec, SL_SRAP_ConfigU2U_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_MappingToAddMod_U2U_List_r18_count)) { goto fail; }
if (value.sl_MappingToAddMod_U2U_List_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_MappingToAddMod_U2U_List_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_MappingToAddMod_U2U_List_r18_count > 0u) {
    value.sl_MappingToAddMod_U2U_List_r18_items = (SL_MappingConfig_U2U_r18*)std::malloc((std::size_t)value.sl_MappingToAddMod_U2U_List_r18_count * sizeof(SL_MappingConfig_U2U_r18));
    if (value.sl_MappingToAddMod_U2U_List_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_MappingToAddMod_U2U_List_r18_items, 0, (std::size_t)value.sl_MappingToAddMod_U2U_List_r18_count * sizeof(SL_MappingConfig_U2U_r18));
}
for (std::uint32_t i = 0; i < value.sl_MappingToAddMod_U2U_List_r18_count; ++i) {
    if (Decode_SL_MappingConfig_U2U_r18(dec, value.sl_MappingToAddMod_U2U_List_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_MappingToRelease_U2U_List_r18_count)) { goto fail; }
if (value.sl_MappingToRelease_U2U_List_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_MappingToRelease_U2U_List_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_MappingToRelease_U2U_List_r18_count > 0u) {
    value.sl_MappingToRelease_U2U_List_r18_items = (SLRB_Uu_ConfigIndex_r16*)std::malloc((std::size_t)value.sl_MappingToRelease_U2U_List_r18_count * sizeof(SLRB_Uu_ConfigIndex_r16));
    if (value.sl_MappingToRelease_U2U_List_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_MappingToRelease_U2U_List_r18_items, 0, (std::size_t)value.sl_MappingToRelease_U2U_List_r18_count * sizeof(SLRB_Uu_ConfigIndex_r16));
}
for (std::uint32_t i = 0; i < value.sl_MappingToRelease_U2U_List_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 512, tmp_value)) { goto fail; }
    value.sl_MappingToRelease_U2U_List_r18_items[i] = (SLRB_Uu_ConfigIndex_r16)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_SRAP_ConfigU2U_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_SRAP_ConfigU2U_r18(SL_SRAP_ConfigU2U_r18& value)
{
    if (value.has_sl_MappingToAddMod_U2U_List_r18) {
        if (value.sl_MappingToAddMod_U2U_List_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_MappingToAddMod_U2U_List_r18_count; ++i) {
                Free_SL_MappingConfig_U2U_r18(value.sl_MappingToAddMod_U2U_List_r18_items[i]);
            }
            std::free(value.sl_MappingToAddMod_U2U_List_r18_items);
            value.sl_MappingToAddMod_U2U_List_r18_items = nullptr;
        }
        value.sl_MappingToAddMod_U2U_List_r18_count = 0;
    }
    if (value.has_sl_MappingToRelease_U2U_List_r18) {
        if (value.sl_MappingToRelease_U2U_List_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_MappingToRelease_U2U_List_r18_count; ++i) {
            }
            std::free(value.sl_MappingToRelease_U2U_List_r18_items);
            value.sl_MappingToRelease_U2U_List_r18_items = nullptr;
        }
        value.sl_MappingToRelease_U2U_List_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_SourceRemoteUE_ToAddMod_r18：ASN.1 SL-SourceRemoteUE-ToAddMod-r18；源文件第 22552 行；SEQUENCE。
// Encode_SL_SourceRemoteUE_ToAddMod_r18 只读不分配；Decode_SL_SourceRemoteUE_ToAddMod_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_SourceRemoteUE_ToAddMod_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_SourceRemoteUE_ToAddMod_r18(Encoder& enc, const SL_SourceRemoteUE_ToAddMod_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteFixedBitString(value.sl_SourceUE_Identity_r18.bytes, value.sl_SourceUE_Identity_r18.bitLength, 24, 24);
    Encode_SL_SRAP_ConfigU2U_r18(enc, value.sl_SRAP_ConfigU2U_r18);
    return enc.Error();
}

ErrorCode Decode_SL_SourceRemoteUE_ToAddMod_r18(Decoder& dec, SL_SourceRemoteUE_ToAddMod_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.sl_SourceUE_Identity_r18.bytes = string_bytes;
        value.sl_SourceUE_Identity_r18.bitLength = string_length;
    }
    {
        if (Decode_SL_SRAP_ConfigU2U_r18(dec, value.sl_SRAP_ConfigU2U_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_SourceRemoteUE_ToAddMod_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_SourceRemoteUE_ToAddMod_r18(SL_SourceRemoteUE_ToAddMod_r18& value)
{
    std::free(value.sl_SourceUE_Identity_r18.bytes);
    value.sl_SourceUE_Identity_r18.bytes = nullptr;
    value.sl_SourceUE_Identity_r18.bitLength = 0;
    Free_SL_SRAP_ConfigU2U_r18(value.sl_SRAP_ConfigU2U_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_U2U_RelayUE_ToAddMod_r18：ASN.1 SL-U2U-RelayUE-ToAddMod-r18；源文件第 22571 行；SEQUENCE。
// Encode_SL_U2U_RelayUE_ToAddMod_r18 只读不分配；Decode_SL_U2U_RelayUE_ToAddMod_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_U2U_RelayUE_ToAddMod_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_U2U_RelayUE_ToAddMod_r18(Encoder& enc, const SL_U2U_RelayUE_ToAddMod_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_PeerRemoteUE_ToAddModList_r18);
    enc.WriteBit(value.has_sl_PeerRemoteUE_ToReleaseList_r18);
    enc.WriteFixedBitString(value.sl_L2IdentityRelay_r18.bytes, value.sl_L2IdentityRelay_r18.bitLength, 24, 24);
    if (value.has_sl_PeerRemoteUE_ToAddModList_r18) {
enc.WriteConstrainedLength(value.sl_PeerRemoteUE_ToAddModList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_PeerRemoteUE_ToAddModList_r18_count; ++i) {
    Encode_SL_PeerRemoteUE_ToAddMod_r18(enc, value.sl_PeerRemoteUE_ToAddModList_r18_items[i]);
}
    }
    if (value.has_sl_PeerRemoteUE_ToReleaseList_r18) {
enc.WriteConstrainedLength(value.sl_PeerRemoteUE_ToReleaseList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_PeerRemoteUE_ToReleaseList_r18_count; ++i) {
    enc.WriteFixedBitString(value.sl_PeerRemoteUE_ToReleaseList_r18_items[i].bytes, value.sl_PeerRemoteUE_ToReleaseList_r18_items[i].bitLength, 24, 24);
}
    }
    return enc.Error();
}

ErrorCode Decode_SL_U2U_RelayUE_ToAddMod_r18(Decoder& dec, SL_U2U_RelayUE_ToAddMod_r18& value)
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
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.sl_L2IdentityRelay_r18.bytes = string_bytes;
        value.sl_L2IdentityRelay_r18.bitLength = string_length;
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_PeerRemoteUE_ToAddModList_r18_count)) { goto fail; }
if (value.sl_PeerRemoteUE_ToAddModList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_PeerRemoteUE_ToAddModList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_PeerRemoteUE_ToAddModList_r18_count > 0u) {
    value.sl_PeerRemoteUE_ToAddModList_r18_items = (SL_PeerRemoteUE_ToAddMod_r18*)std::malloc((std::size_t)value.sl_PeerRemoteUE_ToAddModList_r18_count * sizeof(SL_PeerRemoteUE_ToAddMod_r18));
    if (value.sl_PeerRemoteUE_ToAddModList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_PeerRemoteUE_ToAddModList_r18_items, 0, (std::size_t)value.sl_PeerRemoteUE_ToAddModList_r18_count * sizeof(SL_PeerRemoteUE_ToAddMod_r18));
}
for (std::uint32_t i = 0; i < value.sl_PeerRemoteUE_ToAddModList_r18_count; ++i) {
    if (Decode_SL_PeerRemoteUE_ToAddMod_r18(dec, value.sl_PeerRemoteUE_ToAddModList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_PeerRemoteUE_ToReleaseList_r18_count)) { goto fail; }
if (value.sl_PeerRemoteUE_ToReleaseList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_PeerRemoteUE_ToReleaseList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_PeerRemoteUE_ToReleaseList_r18_count > 0u) {
    value.sl_PeerRemoteUE_ToReleaseList_r18_items = (SL_DestinationIdentity_r16*)std::malloc((std::size_t)value.sl_PeerRemoteUE_ToReleaseList_r18_count * sizeof(SL_DestinationIdentity_r16));
    if (value.sl_PeerRemoteUE_ToReleaseList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_PeerRemoteUE_ToReleaseList_r18_items, 0, (std::size_t)value.sl_PeerRemoteUE_ToReleaseList_r18_count * sizeof(SL_DestinationIdentity_r16));
}
for (std::uint32_t i = 0; i < value.sl_PeerRemoteUE_ToReleaseList_r18_count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
    string_length = 24;
    value.sl_PeerRemoteUE_ToReleaseList_r18_items[i].bytes = string_bytes;
    value.sl_PeerRemoteUE_ToReleaseList_r18_items[i].bitLength = string_length;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_U2U_RelayUE_ToAddMod_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_U2U_RelayUE_ToAddMod_r18(SL_U2U_RelayUE_ToAddMod_r18& value)
{
    std::free(value.sl_L2IdentityRelay_r18.bytes);
    value.sl_L2IdentityRelay_r18.bytes = nullptr;
    value.sl_L2IdentityRelay_r18.bitLength = 0;
    if (value.has_sl_PeerRemoteUE_ToAddModList_r18) {
        if (value.sl_PeerRemoteUE_ToAddModList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_PeerRemoteUE_ToAddModList_r18_count; ++i) {
                Free_SL_PeerRemoteUE_ToAddMod_r18(value.sl_PeerRemoteUE_ToAddModList_r18_items[i]);
            }
            std::free(value.sl_PeerRemoteUE_ToAddModList_r18_items);
            value.sl_PeerRemoteUE_ToAddModList_r18_items = nullptr;
        }
        value.sl_PeerRemoteUE_ToAddModList_r18_count = 0;
    }
    if (value.has_sl_PeerRemoteUE_ToReleaseList_r18) {
        if (value.sl_PeerRemoteUE_ToReleaseList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_PeerRemoteUE_ToReleaseList_r18_count; ++i) {
                std::free(value.sl_PeerRemoteUE_ToReleaseList_r18_items[i].bytes);
                value.sl_PeerRemoteUE_ToReleaseList_r18_items[i].bytes = nullptr;
                value.sl_PeerRemoteUE_ToReleaseList_r18_items[i].bitLength = 0;
            }
            std::free(value.sl_PeerRemoteUE_ToReleaseList_r18_items);
            value.sl_PeerRemoteUE_ToReleaseList_r18_items = nullptr;
        }
        value.sl_PeerRemoteUE_ToReleaseList_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PeerRemoteUE_ToAddMod_r18：ASN.1 SL-PeerRemoteUE-ToAddMod-r18；源文件第 22578 行；SEQUENCE。
// Encode_SL_PeerRemoteUE_ToAddMod_r18 只读不分配；Decode_SL_PeerRemoteUE_ToAddMod_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_PeerRemoteUE_ToAddMod_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PeerRemoteUE_ToAddMod_r18(Encoder& enc, const SL_PeerRemoteUE_ToAddMod_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteFixedBitString(value.sl_TargetUE_Identity_r18.bytes, value.sl_TargetUE_Identity_r18.bitLength, 24, 24);
    Encode_SL_SRAP_ConfigU2U_r18(enc, value.sl_SRAP_ConfigU2U_r18);
    return enc.Error();
}

ErrorCode Decode_SL_PeerRemoteUE_ToAddMod_r18(Decoder& dec, SL_PeerRemoteUE_ToAddMod_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.sl_TargetUE_Identity_r18.bytes = string_bytes;
        value.sl_TargetUE_Identity_r18.bitLength = string_length;
    }
    {
        if (Decode_SL_SRAP_ConfigU2U_r18(dec, value.sl_SRAP_ConfigU2U_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PeerRemoteUE_ToAddMod_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PeerRemoteUE_ToAddMod_r18(SL_PeerRemoteUE_ToAddMod_r18& value)
{
    std::free(value.sl_TargetUE_Identity_r18.bytes);
    value.sl_TargetUE_Identity_r18.bytes = nullptr;
    value.sl_TargetUE_Identity_r18.bitLength = 0;
    Free_SL_SRAP_ConfigU2U_r18(value.sl_SRAP_ConfigU2U_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_MeasObjectToRemoveList_r16：ASN.1 SL-MeasObjectToRemoveList-r16；源文件第 22615 行；SEQUENCE OF。
// Encode_SL_MeasObjectToRemoveList_r16 只读不分配；Decode_SL_MeasObjectToRemoveList_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_MeasObjectToRemoveList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_MeasObjectToRemoveList_r16(Encoder& enc, const SL_MeasObjectToRemoveList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 64u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 1, 64);
    }
    return enc.Error();
}

ErrorCode Decode_SL_MeasObjectToRemoveList_r16(Decoder& dec, SL_MeasObjectToRemoveList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 64u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 64u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_MeasObjectId_r16*)std::malloc((std::size_t)value.count * sizeof(SL_MeasObjectId_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_MeasObjectId_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
    value.items[i] = (SL_MeasObjectId_r16)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_MeasObjectToRemoveList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_MeasObjectToRemoveList_r16(SL_MeasObjectToRemoveList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
