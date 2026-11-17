/* ============================================================================
 * src/generated/codec_part011.cpp — 生成的编解码函数
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
// ResultsPerCSI_RS_IndexList：ASN.1 ResultsPerCSI-RS-IndexList；源文件第 8078 行；SEQUENCE OF。
// Encode_ResultsPerCSI_RS_IndexList 只读不分配；Decode_ResultsPerCSI_RS_IndexList 可能 malloc（失败时内部已释放并清零）；Free_ResultsPerCSI_RS_IndexList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ResultsPerCSI_RS_IndexList(Encoder& enc, const ResultsPerCSI_RS_IndexList& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 64u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_ResultsPerCSI_RS_Index(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_ResultsPerCSI_RS_IndexList(Decoder& dec, ResultsPerCSI_RS_IndexList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 64u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 64u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (ResultsPerCSI_RS_Index*)std::malloc((std::size_t)value.count * sizeof(ResultsPerCSI_RS_Index));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(ResultsPerCSI_RS_Index));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_ResultsPerCSI_RS_Index(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_ResultsPerCSI_RS_IndexList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ResultsPerCSI_RS_IndexList(ResultsPerCSI_RS_IndexList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_ResultsPerCSI_RS_Index(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultSuccessHONR_r17_MeasResult_r17_RsIndexResults_r17：ASN.1 measResult-r17/rsIndexResults-r17；源文件第 3144 行；SEQUENCE。
// Encode_MeasResultSuccessHONR_r17_MeasResult_r17_RsIndexResults_r17 只读不分配；Decode_MeasResultSuccessHONR_r17_MeasResult_r17_RsIndexResults_r17 可能 malloc（失败时内部已释放并清零）；Free_MeasResultSuccessHONR_r17_MeasResult_r17_RsIndexResults_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultSuccessHONR_r17_MeasResult_r17_RsIndexResults_r17(Encoder& enc, const MeasResultSuccessHONR_r17_MeasResult_r17_RsIndexResults_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_resultsSSB_Indexes_r17);
    enc.WriteBit(value.has_resultsCSI_RS_Indexes_r17);
    if (value.has_resultsSSB_Indexes_r17) {
        Encode_ResultsPerSSB_IndexList(enc, value.resultsSSB_Indexes_r17);
    }
    if (value.has_resultsCSI_RS_Indexes_r17) {
        Encode_ResultsPerCSI_RS_IndexList(enc, value.resultsCSI_RS_Indexes_r17);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultSuccessHONR_r17_MeasResult_r17_RsIndexResults_r17(Decoder& dec, MeasResultSuccessHONR_r17_MeasResult_r17_RsIndexResults_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_ResultsPerSSB_IndexList(dec, value.resultsSSB_Indexes_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_ResultsPerCSI_RS_IndexList(dec, value.resultsCSI_RS_Indexes_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultSuccessHONR_r17_MeasResult_r17_RsIndexResults_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultSuccessHONR_r17_MeasResult_r17_RsIndexResults_r17(MeasResultSuccessHONR_r17_MeasResult_r17_RsIndexResults_r17& value)
{
    if (value.has_resultsSSB_Indexes_r17) {
        Free_ResultsPerSSB_IndexList(value.resultsSSB_Indexes_r17);
    }
    if (value.has_resultsCSI_RS_Indexes_r17) {
        Free_ResultsPerCSI_RS_IndexList(value.resultsCSI_RS_Indexes_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultSuccessHONR_r17_MeasResult_r17：ASN.1 measResult-r17；源文件第 3139 行；SEQUENCE。
// Encode_MeasResultSuccessHONR_r17_MeasResult_r17 只读不分配；Decode_MeasResultSuccessHONR_r17_MeasResult_r17 可能 malloc（失败时内部已释放并清零）；Free_MeasResultSuccessHONR_r17_MeasResult_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultSuccessHONR_r17_MeasResult_r17(Encoder& enc, const MeasResultSuccessHONR_r17_MeasResult_r17& value)
{
    (void)value;
    Encode_MeasResultSuccessHONR_r17_MeasResult_r17_CellResults_r17(enc, value.cellResults_r17);
    Encode_MeasResultSuccessHONR_r17_MeasResult_r17_RsIndexResults_r17(enc, value.rsIndexResults_r17);
    return enc.Error();
}

ErrorCode Decode_MeasResultSuccessHONR_r17_MeasResult_r17(Decoder& dec, MeasResultSuccessHONR_r17_MeasResult_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MeasResultSuccessHONR_r17_MeasResult_r17_CellResults_r17(dec, value.cellResults_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_MeasResultSuccessHONR_r17_MeasResult_r17_RsIndexResults_r17(dec, value.rsIndexResults_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultSuccessHONR_r17_MeasResult_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultSuccessHONR_r17_MeasResult_r17(MeasResultSuccessHONR_r17_MeasResult_r17& value)
{
    Free_MeasResultSuccessHONR_r17_MeasResult_r17_CellResults_r17(value.cellResults_r17);
    Free_MeasResultSuccessHONR_r17_MeasResult_r17_RsIndexResults_r17(value.rsIndexResults_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultSuccessHONR_r17：ASN.1 MeasResultSuccessHONR-r17；源文件第 3138 行；SEQUENCE。
// Encode_MeasResultSuccessHONR_r17 只读不分配；Decode_MeasResultSuccessHONR_r17 可能 malloc（失败时内部已释放并清零）；Free_MeasResultSuccessHONR_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultSuccessHONR_r17(Encoder& enc, const MeasResultSuccessHONR_r17& value)
{
    (void)value;
    Encode_MeasResultSuccessHONR_r17_MeasResult_r17(enc, value.measResult_r17);
    return enc.Error();
}

ErrorCode Decode_MeasResultSuccessHONR_r17(Decoder& dec, MeasResultSuccessHONR_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MeasResultSuccessHONR_r17_MeasResult_r17(dec, value.measResult_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultSuccessHONR_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultSuccessHONR_r17(MeasResultSuccessHONR_r17& value)
{
    Free_MeasResultSuccessHONR_r17_MeasResult_r17(value.measResult_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PCI_ARFCN_EUTRA_r16：ASN.1 PCI-ARFCN-EUTRA-r16；源文件第 9096 行；SEQUENCE。
// Encode_PCI_ARFCN_EUTRA_r16 只读不分配；Decode_PCI_ARFCN_EUTRA_r16 可能 malloc（失败时内部已释放并清零）；Free_PCI_ARFCN_EUTRA_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PCI_ARFCN_EUTRA_r16(Encoder& enc, const PCI_ARFCN_EUTRA_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.physCellId_r16), 0, 503);
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierFreq_r16), 0, 262143);
    return enc.Error();
}

ErrorCode Decode_PCI_ARFCN_EUTRA_r16(Decoder& dec, PCI_ARFCN_EUTRA_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 503, tmp_value)) { goto fail; }
        value.physCellId_r16 = (EUTRA_PhysCellId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 262143, tmp_value)) { goto fail; }
        value.carrierFreq_r16 = (ARFCN_ValueEUTRA)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PCI_ARFCN_EUTRA_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PCI_ARFCN_EUTRA_r16(PCI_ARFCN_EUTRA_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18：ASN.1 sourcePSCellInfo-r18/sourcePSCellId-r18；源文件第 3060 行；CHOICE。
// Encode_SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18 只读不分配；Decode_SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18 可能 malloc（失败时内部已释放并清零）；Free_SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18(Encoder& enc, const SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18_Tag_cellGlobalId_r18:
        Encode_CGI_Info_Logging_r16(enc, value.u.cellGlobalId_r18);
        break;
    case SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18_Tag_pci_arfcn_r18:
        Encode_PCI_ARFCN_EUTRA_r16(enc, value.u.pci_arfcn_r18);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18(Decoder& dec, SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18_Tag)root_index;
    switch (value.tag) {
    case SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18_Tag_cellGlobalId_r18: {
        if (Decode_CGI_Info_Logging_r16(dec, value.u.cellGlobalId_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18_Tag_pci_arfcn_r18: {
        if (Decode_PCI_ARFCN_EUTRA_r16(dec, value.u.pci_arfcn_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18(SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18& value)
{
    switch (value.tag) {
    case SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18_Tag_cellGlobalId_r18:
        Free_CGI_Info_Logging_r16(value.u.cellGlobalId_r18);
        break;
    case SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18_Tag_pci_arfcn_r18:
        Free_PCI_ARFCN_EUTRA_r16(value.u.pci_arfcn_r18);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SuccessPSCell_Report_r18_SourcePSCellInfo_r18：ASN.1 sourcePSCellInfo-r18；源文件第 3059 行；SEQUENCE。
// Encode_SuccessPSCell_Report_r18_SourcePSCellInfo_r18 只读不分配；Decode_SuccessPSCell_Report_r18_SourcePSCellInfo_r18 可能 malloc（失败时内部已释放并清零）；Free_SuccessPSCell_Report_r18_SourcePSCellInfo_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SuccessPSCell_Report_r18_SourcePSCellInfo_r18(Encoder& enc, const SuccessPSCell_Report_r18_SourcePSCellInfo_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_sourcePSCellMeas_r18);
    Encode_SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18(enc, value.sourcePSCellId_r18);
    if (value.has_sourcePSCellMeas_r18) {
        Encode_MeasResultSuccessHONR_r17(enc, value.sourcePSCellMeas_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SuccessPSCell_Report_r18_SourcePSCellInfo_r18(Decoder& dec, SuccessPSCell_Report_r18_SourcePSCellInfo_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18(dec, value.sourcePSCellId_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_MeasResultSuccessHONR_r17(dec, value.sourcePSCellMeas_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SuccessPSCell_Report_r18_SourcePSCellInfo_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SuccessPSCell_Report_r18_SourcePSCellInfo_r18(SuccessPSCell_Report_r18_SourcePSCellInfo_r18& value)
{
    Free_SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18(value.sourcePSCellId_r18);
    if (value.has_sourcePSCellMeas_r18) {
        Free_MeasResultSuccessHONR_r17(value.sourcePSCellMeas_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PCI_ARFCN_NR_r16：ASN.1 PCI-ARFCN-NR-r16；源文件第 9104 行；SEQUENCE。
// Encode_PCI_ARFCN_NR_r16 只读不分配；Decode_PCI_ARFCN_NR_r16 可能 malloc（失败时内部已释放并清零）；Free_PCI_ARFCN_NR_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PCI_ARFCN_NR_r16(Encoder& enc, const PCI_ARFCN_NR_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.physCellId_r16), 0, 1007);
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierFreq_r16), 0, 3279165);
    return enc.Error();
}

ErrorCode Decode_PCI_ARFCN_NR_r16(Decoder& dec, PCI_ARFCN_NR_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
        value.physCellId_r16 = (PhysCellId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.carrierFreq_r16 = (ARFCN_ValueNR)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PCI_ARFCN_NR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PCI_ARFCN_NR_r16(PCI_ARFCN_NR_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18：ASN.1 targetPSCellInfo-r18/targetPSCellId-r18；源文件第 3067 行；CHOICE。
// Encode_SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18 只读不分配；Decode_SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18 可能 malloc（失败时内部已释放并清零）；Free_SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18(Encoder& enc, const SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18_Tag_cellGlobalId_r18:
        Encode_CGI_Info_Logging_r16(enc, value.u.cellGlobalId_r18);
        break;
    case SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18_Tag_pci_arfcn_r18:
        Encode_PCI_ARFCN_NR_r16(enc, value.u.pci_arfcn_r18);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18(Decoder& dec, SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18_Tag)root_index;
    switch (value.tag) {
    case SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18_Tag_cellGlobalId_r18: {
        if (Decode_CGI_Info_Logging_r16(dec, value.u.cellGlobalId_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18_Tag_pci_arfcn_r18: {
        if (Decode_PCI_ARFCN_NR_r16(dec, value.u.pci_arfcn_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18(SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18& value)
{
    switch (value.tag) {
    case SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18_Tag_cellGlobalId_r18:
        Free_CGI_Info_Logging_r16(value.u.cellGlobalId_r18);
        break;
    case SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18_Tag_pci_arfcn_r18:
        Free_PCI_ARFCN_NR_r16(value.u.pci_arfcn_r18);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SuccessPSCell_Report_r18_TargetPSCellInfo_r18：ASN.1 targetPSCellInfo-r18；源文件第 3066 行；SEQUENCE。
// Encode_SuccessPSCell_Report_r18_TargetPSCellInfo_r18 只读不分配；Decode_SuccessPSCell_Report_r18_TargetPSCellInfo_r18 可能 malloc（失败时内部已释放并清零）；Free_SuccessPSCell_Report_r18_TargetPSCellInfo_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SuccessPSCell_Report_r18_TargetPSCellInfo_r18(Encoder& enc, const SuccessPSCell_Report_r18_TargetPSCellInfo_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_targetPSCellMeas_r18);
    Encode_SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18(enc, value.targetPSCellId_r18);
    if (value.has_targetPSCellMeas_r18) {
        Encode_MeasResultSuccessHONR_r17(enc, value.targetPSCellMeas_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SuccessPSCell_Report_r18_TargetPSCellInfo_r18(Decoder& dec, SuccessPSCell_Report_r18_TargetPSCellInfo_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18(dec, value.targetPSCellId_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_MeasResultSuccessHONR_r17(dec, value.targetPSCellMeas_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SuccessPSCell_Report_r18_TargetPSCellInfo_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SuccessPSCell_Report_r18_TargetPSCellInfo_r18(SuccessPSCell_Report_r18_TargetPSCellInfo_r18& value)
{
    Free_SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18(value.targetPSCellId_r18);
    if (value.has_targetPSCellMeas_r18) {
        Free_MeasResultSuccessHONR_r17(value.targetPSCellMeas_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultList2NR_r16：ASN.1 MeasResultList2NR-r16；源文件第 3094 行；SEQUENCE OF。
// Encode_MeasResultList2NR_r16 只读不分配；Decode_MeasResultList2NR_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultList2NR_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultList2NR_r16(Encoder& enc, const MeasResultList2NR_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MeasResult2NR_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultList2NR_r16(Decoder& dec, MeasResultList2NR_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MeasResult2NR_r16*)std::malloc((std::size_t)value.count * sizeof(MeasResult2NR_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResult2NR_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MeasResult2NR_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultList2NR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultList2NR_r16(MeasResultList2NR_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MeasResult2NR_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultList2EUTRA_r16：ASN.1 MeasResultList2EUTRA-r16；源文件第 3095 行；SEQUENCE OF。
// Encode_MeasResultList2EUTRA_r16 只读不分配；Decode_MeasResultList2EUTRA_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultList2EUTRA_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultList2EUTRA_r16(Encoder& enc, const MeasResultList2EUTRA_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MeasResult2EUTRA_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultList2EUTRA_r16(Decoder& dec, MeasResultList2EUTRA_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MeasResult2EUTRA_r16*)std::malloc((std::size_t)value.count * sizeof(MeasResult2EUTRA_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResult2EUTRA_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MeasResult2EUTRA_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultList2EUTRA_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultList2EUTRA_r16(MeasResultList2EUTRA_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MeasResult2EUTRA_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SuccessPSCell_Report_r18_MeasResultNeighCells_r18：ASN.1 measResultNeighCells-r18；源文件第 3073 行；SEQUENCE。
// Encode_SuccessPSCell_Report_r18_MeasResultNeighCells_r18 只读不分配；Decode_SuccessPSCell_Report_r18_MeasResultNeighCells_r18 可能 malloc（失败时内部已释放并清零）；Free_SuccessPSCell_Report_r18_MeasResultNeighCells_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SuccessPSCell_Report_r18_MeasResultNeighCells_r18(Encoder& enc, const SuccessPSCell_Report_r18_MeasResultNeighCells_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_measResultListNR_r18);
    enc.WriteBit(value.has_measResultListEUTRA_r18);
    if (value.has_measResultListNR_r18) {
        Encode_MeasResultList2NR_r16(enc, value.measResultListNR_r18);
    }
    if (value.has_measResultListEUTRA_r18) {
        Encode_MeasResultList2EUTRA_r16(enc, value.measResultListEUTRA_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SuccessPSCell_Report_r18_MeasResultNeighCells_r18(Decoder& dec, SuccessPSCell_Report_r18_MeasResultNeighCells_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MeasResultList2NR_r16(dec, value.measResultListNR_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MeasResultList2EUTRA_r16(dec, value.measResultListEUTRA_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SuccessPSCell_Report_r18_MeasResultNeighCells_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SuccessPSCell_Report_r18_MeasResultNeighCells_r18(SuccessPSCell_Report_r18_MeasResultNeighCells_r18& value)
{
    if (value.has_measResultListNR_r18) {
        Free_MeasResultList2NR_r16(value.measResultListNR_r18);
    }
    if (value.has_measResultListEUTRA_r18) {
        Free_MeasResultList2EUTRA_r16(value.measResultListEUTRA_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SuccessPSCell_Report_r18：ASN.1 SuccessPSCell-Report-r18；源文件第 3057 行；SEQUENCE。
// Encode_SuccessPSCell_Report_r18 只读不分配；Decode_SuccessPSCell_Report_r18 可能 malloc（失败时内部已释放并清零）；Free_SuccessPSCell_Report_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SuccessPSCell_Report_r18(Encoder& enc, const SuccessPSCell_Report_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sourcePSCellInfo_r18);
    enc.WriteBit(value.has_measResultNeighCells_r18);
    enc.WriteBit(value.has_spr_Cause_r18);
    enc.WriteBit(value.has_timeSinceCPAC_Reconfig_r18);
    enc.WriteBit(value.has_locationInfo_r18);
    enc.WriteBit(value.has_ra_InformationCommon_r18);
    enc.WriteBit(value.has_sn_InitiatedPSCellChange_r18);
    Encode_CGI_Info_Logging_r16(enc, value.pCellId_r18);
    if (value.has_sourcePSCellInfo_r18) {
        Encode_SuccessPSCell_Report_r18_SourcePSCellInfo_r18(enc, value.sourcePSCellInfo_r18);
    }
    Encode_SuccessPSCell_Report_r18_TargetPSCellInfo_r18(enc, value.targetPSCellInfo_r18);
    if (value.has_measResultNeighCells_r18) {
        Encode_SuccessPSCell_Report_r18_MeasResultNeighCells_r18(enc, value.measResultNeighCells_r18);
    }
    if (value.has_spr_Cause_r18) {
        Encode_SPR_Cause_r18(enc, value.spr_Cause_r18);
    }
    if (value.has_timeSinceCPAC_Reconfig_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.timeSinceCPAC_Reconfig_r18), 0, 1023);
    }
    if (value.has_locationInfo_r18) {
        Encode_LocationInfo_r16(enc, value.locationInfo_r18);
    }
    if (value.has_ra_InformationCommon_r18) {
        Encode_RA_InformationCommon_r16(enc, value.ra_InformationCommon_r18);
    }
    if (value.has_sn_InitiatedPSCellChange_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sn_InitiatedPSCellChange_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SuccessPSCell_Report_r18(Decoder& dec, SuccessPSCell_Report_r18& value)
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
    {
        if (Decode_CGI_Info_Logging_r16(dec, value.pCellId_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_SuccessPSCell_Report_r18_SourcePSCellInfo_r18(dec, value.sourcePSCellInfo_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_SuccessPSCell_Report_r18_TargetPSCellInfo_r18(dec, value.targetPSCellInfo_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SuccessPSCell_Report_r18_MeasResultNeighCells_r18(dec, value.measResultNeighCells_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SPR_Cause_r18(dec, value.spr_Cause_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.timeSinceCPAC_Reconfig_r18 = (TimeSinceCPAC_Reconfig_r18)tmp_value;
    }
    if (present_4) {
        if (Decode_LocationInfo_r16(dec, value.locationInfo_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_RA_InformationCommon_r16(dec, value.ra_InformationCommon_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        value.sn_InitiatedPSCellChange_r18 = (SuccessPSCell_Report_r18_Sn_InitiatedPSCellChange_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SuccessPSCell_Report_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SuccessPSCell_Report_r18(SuccessPSCell_Report_r18& value)
{
    Free_CGI_Info_Logging_r16(value.pCellId_r18);
    if (value.has_sourcePSCellInfo_r18) {
        Free_SuccessPSCell_Report_r18_SourcePSCellInfo_r18(value.sourcePSCellInfo_r18);
    }
    Free_SuccessPSCell_Report_r18_TargetPSCellInfo_r18(value.targetPSCellInfo_r18);
    if (value.has_measResultNeighCells_r18) {
        Free_SuccessPSCell_Report_r18_MeasResultNeighCells_r18(value.measResultNeighCells_r18);
    }
    if (value.has_spr_Cause_r18) {
        Free_SPR_Cause_r18(value.spr_Cause_r18);
    }
    if (value.has_timeSinceCPAC_Reconfig_r18) {
    }
    if (value.has_locationInfo_r18) {
        Free_LocationInfo_r16(value.locationInfo_r18);
    }
    if (value.has_ra_InformationCommon_r18) {
        Free_RA_InformationCommon_r16(value.ra_InformationCommon_r18);
    }
    if (value.has_sn_InitiatedPSCellChange_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEInformationResponse_v1800_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 2719 行；空 SEQUENCE{}。
// Encode_UEInformationResponse_v1800_IEs_NonCriticalExtension 只读不分配；Decode_UEInformationResponse_v1800_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_UEInformationResponse_v1800_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEInformationResponse_v1800_IEs_NonCriticalExtension(Encoder& enc, const UEInformationResponse_v1800_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_UEInformationResponse_v1800_IEs_NonCriticalExtension(Decoder& dec, UEInformationResponse_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEInformationResponse_v1800_IEs_NonCriticalExtension(UEInformationResponse_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEInformationResponse_v1800_IEs：ASN.1 UEInformationResponse-v1800-IEs；源文件第 2715 行；SEQUENCE。
// Encode_UEInformationResponse_v1800_IEs 只读不分配；Decode_UEInformationResponse_v1800_IEs 可能 malloc（失败时内部已释放并清零）；Free_UEInformationResponse_v1800_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEInformationResponse_v1800_IEs(Encoder& enc, const UEInformationResponse_v1800_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_flightPathInfoReport_r18);
    enc.WriteBit(value.has_successPSCell_Report_r18);
    enc.WriteBit(value.has_measResultReselectionNR_r18);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_flightPathInfoReport_r18) {
        Encode_FlightPathInfoReport_r18(enc, value.flightPathInfoReport_r18);
    }
    if (value.has_successPSCell_Report_r18) {
        Encode_SuccessPSCell_Report_r18(enc, value.successPSCell_Report_r18);
    }
    if (value.has_measResultReselectionNR_r18) {
        Encode_MeasResultIdleNR_r16(enc, value.measResultReselectionNR_r18);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UEInformationResponse_v1800_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UEInformationResponse_v1800_IEs(Decoder& dec, UEInformationResponse_v1800_IEs& value)
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
        if (Decode_FlightPathInfoReport_r18(dec, value.flightPathInfoReport_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SuccessPSCell_Report_r18(dec, value.successPSCell_Report_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_MeasResultIdleNR_r16(dec, value.measResultReselectionNR_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_UEInformationResponse_v1800_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UEInformationResponse_v1800_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEInformationResponse_v1800_IEs(UEInformationResponse_v1800_IEs& value)
{
    if (value.has_flightPathInfoReport_r18) {
        Free_FlightPathInfoReport_r18(value.flightPathInfoReport_r18);
    }
    if (value.has_successPSCell_Report_r18) {
        Free_SuccessPSCell_Report_r18(value.successPSCell_Report_r18);
    }
    if (value.has_measResultReselectionNR_r18) {
        Free_MeasResultIdleNR_r16(value.measResultReselectionNR_r18);
    }
    if (value.has_nonCriticalExtension) {
        Free_UEInformationResponse_v1800_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ConnEstFailReportList_r17：ASN.1 ConnEstFailReportList-r17；源文件第 2772 行；SEQUENCE OF。
// Encode_ConnEstFailReportList_r17 只读不分配；Decode_ConnEstFailReportList_r17 可能 malloc（失败时内部已释放并清零）；Free_ConnEstFailReportList_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ConnEstFailReportList_r17(Encoder& enc, const ConnEstFailReportList_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_ConnEstFailReport_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_ConnEstFailReportList_r17(Decoder& dec, ConnEstFailReportList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (ConnEstFailReport_r16*)std::malloc((std::size_t)value.count * sizeof(ConnEstFailReport_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(ConnEstFailReport_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_ConnEstFailReport_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_ConnEstFailReportList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ConnEstFailReportList_r17(ConnEstFailReportList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_ConnEstFailReport_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultNeighFreqList_RSSI_r18：ASN.1 MeasResultNeighFreqList-RSSI-r18；源文件第 3085 行；SEQUENCE OF。
// Encode_MeasResultNeighFreqList_RSSI_r18 只读不分配；Decode_MeasResultNeighFreqList_RSSI_r18 可能 malloc（失败时内部已释放并清零）；Free_MeasResultNeighFreqList_RSSI_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultNeighFreqList_RSSI_r18(Encoder& enc, const MeasResultNeighFreqList_RSSI_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MeasResultNeighFreq_RSSI_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultNeighFreqList_RSSI_r18(Decoder& dec, MeasResultNeighFreqList_RSSI_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MeasResultNeighFreq_RSSI_r18*)std::malloc((std::size_t)value.count * sizeof(MeasResultNeighFreq_RSSI_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResultNeighFreq_RSSI_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MeasResultNeighFreq_RSSI_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultNeighFreqList_RSSI_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultNeighFreqList_RSSI_r18(MeasResultNeighFreqList_RSSI_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MeasResultNeighFreq_RSSI_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasQuantityResultsEUTRA：ASN.1 MeasQuantityResultsEUTRA；源文件第 8065 行；SEQUENCE。
// Encode_MeasQuantityResultsEUTRA 只读不分配；Decode_MeasQuantityResultsEUTRA 可能 malloc（失败时内部已释放并清零）；Free_MeasQuantityResultsEUTRA 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasQuantityResultsEUTRA(Encoder& enc, const MeasQuantityResultsEUTRA& value)
{
    (void)value;
    enc.WriteBit(value.has_rsrp);
    enc.WriteBit(value.has_rsrq);
    enc.WriteBit(value.has_sinr);
    if (value.has_rsrp) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrp), 0, 97);
    }
    if (value.has_rsrq) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrq), 0, 34);
    }
    if (value.has_sinr) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sinr), 0, 127);
    }
    return enc.Error();
}

ErrorCode Decode_MeasQuantityResultsEUTRA(Decoder& dec, MeasQuantityResultsEUTRA& value)
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
        if (!dec.ReadConstrainedInteger(0, 97, tmp_value)) { goto fail; }
        value.rsrp = (RSRP_RangeEUTRA)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 34, tmp_value)) { goto fail; }
        value.rsrq = (RSRQ_RangeEUTRA)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.sinr = (SINR_RangeEUTRA)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasQuantityResultsEUTRA(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasQuantityResultsEUTRA(MeasQuantityResultsEUTRA& value)
{
    if (value.has_rsrp) {
    }
    if (value.has_rsrq) {
    }
    if (value.has_sinr) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18：ASN.1 eutraTargetCellInfo-r18/targetPCellId-r18；源文件第 3044 行；CHOICE。
// Encode_SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18 只读不分配；Decode_SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18 可能 malloc（失败时内部已释放并清零）；Free_SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18(Encoder& enc, const SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18_Tag_cellGlobalId_r18:
        Encode_CGI_Info_Logging_r16(enc, value.u.cellGlobalId_r18);
        break;
    case SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18_Tag_pci_arfcn_r18:
        Encode_PCI_ARFCN_EUTRA_r16(enc, value.u.pci_arfcn_r18);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18(Decoder& dec, SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18_Tag)root_index;
    switch (value.tag) {
    case SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18_Tag_cellGlobalId_r18: {
        if (Decode_CGI_Info_Logging_r16(dec, value.u.cellGlobalId_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18_Tag_pci_arfcn_r18: {
        if (Decode_PCI_ARFCN_EUTRA_r16(dec, value.u.pci_arfcn_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18(SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18& value)
{
    switch (value.tag) {
    case SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18_Tag_cellGlobalId_r18:
        Free_CGI_Info_Logging_r16(value.u.cellGlobalId_r18);
        break;
    case SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18_Tag_pci_arfcn_r18:
        Free_PCI_ARFCN_EUTRA_r16(value.u.pci_arfcn_r18);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18：ASN.1 eutraTargetCellInfo-r18；源文件第 3043 行；SEQUENCE。
// Encode_SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18 只读不分配；Decode_SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18 可能 malloc（失败时内部已释放并清零）；Free_SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18(Encoder& enc, const SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_targetCellMeas_r18);
    Encode_SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18(enc, value.targetPCellId_r18);
    if (value.has_targetCellMeas_r18) {
        Encode_MeasQuantityResultsEUTRA(enc, value.targetCellMeas_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18(Decoder& dec, SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18(dec, value.targetPCellId_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_MeasQuantityResultsEUTRA(dec, value.targetCellMeas_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18(SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18& value)
{
    Free_SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18(value.targetPCellId_r18);
    if (value.has_targetCellMeas_r18) {
        Free_MeasQuantityResultsEUTRA(value.targetCellMeas_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SuccessHO_Report_r17_ExtGroup1：ASN.1 SuccessHO_Report_r17_ExtGroup1；源文件第 3042 行；扩展添加组 [[ ]]。
// Encode_SuccessHO_Report_r17_ExtGroup1 只读不分配；Decode_SuccessHO_Report_r17_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SuccessHO_Report_r17_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SuccessHO_Report_r17_ExtGroup1(Encoder& enc, const SuccessHO_Report_r17_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_eutraTargetCellInfo_r18);
    enc.WriteBit(value.has_measResultServCell_RSSI_r18);
    enc.WriteBit(value.has_measResultNeighFreqList_RSSI_r18);
    enc.WriteBit(value.has_eutra_C_RNTI_r18);
    enc.WriteBit(value.has_timeSinceSHR_r18);
    if (value.has_eutraTargetCellInfo_r18) {
        Encode_SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18(enc, value.eutraTargetCellInfo_r18);
    }
    if (value.has_measResultServCell_RSSI_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.measResultServCell_RSSI_r18), 0, 76);
    }
    if (value.has_measResultNeighFreqList_RSSI_r18) {
        Encode_MeasResultNeighFreqList_RSSI_r18(enc, value.measResultNeighFreqList_RSSI_r18);
    }
    if (value.has_eutra_C_RNTI_r18) {
        enc.WriteFixedBitString(value.eutra_C_RNTI_r18.bytes, value.eutra_C_RNTI_r18.bitLength, 16, 16);
    }
    if (value.has_timeSinceSHR_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.timeSinceSHR_r18), 0, 172800);
    }
    return enc.Error();
}

ErrorCode Decode_SuccessHO_Report_r17_ExtGroup1(Decoder& dec, SuccessHO_Report_r17_ExtGroup1& value)
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
        if (Decode_SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18(dec, value.eutraTargetCellInfo_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 76, tmp_value)) { goto fail; }
        value.measResultServCell_RSSI_r18 = (RSSI_Range_r16)tmp_value;
    }
    if (present_2) {
        if (Decode_MeasResultNeighFreqList_RSSI_r18(dec, value.measResultNeighFreqList_RSSI_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.eutra_C_RNTI_r18.bytes = string_bytes;
        value.eutra_C_RNTI_r18.bitLength = string_length;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 172800, tmp_value)) { goto fail; }
        value.timeSinceSHR_r18 = (TimeSinceSHR_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SuccessHO_Report_r17_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SuccessHO_Report_r17_ExtGroup1(SuccessHO_Report_r17_ExtGroup1& value)
{
    if (value.has_eutraTargetCellInfo_r18) {
        Free_SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18(value.eutraTargetCellInfo_r18);
    }
    if (value.has_measResultServCell_RSSI_r18) {
    }
    if (value.has_measResultNeighFreqList_RSSI_r18) {
        Free_MeasResultNeighFreqList_RSSI_r18(value.measResultNeighFreqList_RSSI_r18);
    }
    if (value.has_eutra_C_RNTI_r18) {
        std::free(value.eutra_C_RNTI_r18.bytes);
        value.eutra_C_RNTI_r18.bytes = nullptr;
        value.eutra_C_RNTI_r18.bitLength = 0;
    }
    if (value.has_timeSinceSHR_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SHR_Cause_r17：ASN.1 SHR-Cause-r17；源文件第 3158 行；SEQUENCE。
// Encode_SHR_Cause_r17 只读不分配；Decode_SHR_Cause_r17 可能 malloc（失败时内部已释放并清零）；Free_SHR_Cause_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SHR_Cause_r17(Encoder& enc, const SHR_Cause_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_t304_cause_r17);
    enc.WriteBit(value.has_t310_cause_r17);
    enc.WriteBit(value.has_t312_cause_r17);
    enc.WriteBit(value.has_sourceDAPS_Failure_r17);
    if (value.has_t304_cause_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.t304_cause_r17), 0, 0);
    }
    if (value.has_t310_cause_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.t310_cause_r17), 0, 0);
    }
    if (value.has_t312_cause_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.t312_cause_r17), 0, 0);
    }
    if (value.has_sourceDAPS_Failure_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sourceDAPS_Failure_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SHR_Cause_r17(Decoder& dec, SHR_Cause_r17& value)
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
        value.t304_cause_r17 = (SHR_Cause_r17_T304_cause_r17)0;
    }
    if (present_1) {
        value.t310_cause_r17 = (SHR_Cause_r17_T310_cause_r17)0;
    }
    if (present_2) {
        value.t312_cause_r17 = (SHR_Cause_r17_T312_cause_r17)0;
    }
    if (present_3) {
        value.sourceDAPS_Failure_r17 = (SHR_Cause_r17_SourceDAPS_Failure_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SHR_Cause_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SHR_Cause_r17(SHR_Cause_r17& value)
{
    if (value.has_t304_cause_r17) {
    }
    if (value.has_t310_cause_r17) {
    }
    if (value.has_t312_cause_r17) {
    }
    if (value.has_sourceDAPS_Failure_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SuccessHO_Report_r17_SourceCellInfo_r17：ASN.1 sourceCellInfo-r17；源文件第 3022 行；SEQUENCE。
// Encode_SuccessHO_Report_r17_SourceCellInfo_r17 只读不分配；Decode_SuccessHO_Report_r17_SourceCellInfo_r17 可能 malloc（失败时内部已释放并清零）；Free_SuccessHO_Report_r17_SourceCellInfo_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SuccessHO_Report_r17_SourceCellInfo_r17(Encoder& enc, const SuccessHO_Report_r17_SourceCellInfo_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_sourceCellMeas_r17);
    enc.WriteBit(value.has_rlf_InSourceDAPS_r17);
    Encode_CGI_Info_Logging_r16(enc, value.sourcePCellId_r17);
    if (value.has_sourceCellMeas_r17) {
        Encode_MeasResultSuccessHONR_r17(enc, value.sourceCellMeas_r17);
    }
    if (value.has_rlf_InSourceDAPS_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rlf_InSourceDAPS_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SuccessHO_Report_r17_SourceCellInfo_r17(Decoder& dec, SuccessHO_Report_r17_SourceCellInfo_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        if (Decode_CGI_Info_Logging_r16(dec, value.sourcePCellId_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_MeasResultSuccessHONR_r17(dec, value.sourceCellMeas_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.rlf_InSourceDAPS_r17 = (SuccessHO_Report_r17_SourceCellInfo_r17_Rlf_InSourceDAPS_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SuccessHO_Report_r17_SourceCellInfo_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SuccessHO_Report_r17_SourceCellInfo_r17(SuccessHO_Report_r17_SourceCellInfo_r17& value)
{
    Free_CGI_Info_Logging_r16(value.sourcePCellId_r17);
    if (value.has_sourceCellMeas_r17) {
        Free_MeasResultSuccessHONR_r17(value.sourceCellMeas_r17);
    }
    if (value.has_rlf_InSourceDAPS_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SuccessHO_Report_r17_TargetCellInfo_r17：ASN.1 targetCellInfo-r17；源文件第 3027 行；SEQUENCE。
// Encode_SuccessHO_Report_r17_TargetCellInfo_r17 只读不分配；Decode_SuccessHO_Report_r17_TargetCellInfo_r17 可能 malloc（失败时内部已释放并清零）；Free_SuccessHO_Report_r17_TargetCellInfo_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SuccessHO_Report_r17_TargetCellInfo_r17(Encoder& enc, const SuccessHO_Report_r17_TargetCellInfo_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_targetCellMeas_r17);
    Encode_CGI_Info_Logging_r16(enc, value.targetPCellId_r17);
    if (value.has_targetCellMeas_r17) {
        Encode_MeasResultSuccessHONR_r17(enc, value.targetCellMeas_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SuccessHO_Report_r17_TargetCellInfo_r17(Decoder& dec, SuccessHO_Report_r17_TargetCellInfo_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_CGI_Info_Logging_r16(dec, value.targetPCellId_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_MeasResultSuccessHONR_r17(dec, value.targetCellMeas_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SuccessHO_Report_r17_TargetCellInfo_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SuccessHO_Report_r17_TargetCellInfo_r17(SuccessHO_Report_r17_TargetCellInfo_r17& value)
{
    Free_CGI_Info_Logging_r16(value.targetPCellId_r17);
    if (value.has_targetCellMeas_r17) {
        Free_MeasResultSuccessHONR_r17(value.targetCellMeas_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SuccessHO_Report_r17_MeasResultNeighCells_r17：ASN.1 measResultNeighCells-r17；源文件第 3031 行；SEQUENCE。
// Encode_SuccessHO_Report_r17_MeasResultNeighCells_r17 只读不分配；Decode_SuccessHO_Report_r17_MeasResultNeighCells_r17 可能 malloc（失败时内部已释放并清零）；Free_SuccessHO_Report_r17_MeasResultNeighCells_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SuccessHO_Report_r17_MeasResultNeighCells_r17(Encoder& enc, const SuccessHO_Report_r17_MeasResultNeighCells_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_measResultListNR_r17);
    enc.WriteBit(value.has_measResultListEUTRA_r17);
    if (value.has_measResultListNR_r17) {
        Encode_MeasResultList2NR_r16(enc, value.measResultListNR_r17);
    }
    if (value.has_measResultListEUTRA_r17) {
        Encode_MeasResultList2EUTRA_r16(enc, value.measResultListEUTRA_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SuccessHO_Report_r17_MeasResultNeighCells_r17(Decoder& dec, SuccessHO_Report_r17_MeasResultNeighCells_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MeasResultList2NR_r16(dec, value.measResultListNR_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MeasResultList2EUTRA_r16(dec, value.measResultListEUTRA_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SuccessHO_Report_r17_MeasResultNeighCells_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SuccessHO_Report_r17_MeasResultNeighCells_r17(SuccessHO_Report_r17_MeasResultNeighCells_r17& value)
{
    if (value.has_measResultListNR_r17) {
        Free_MeasResultList2NR_r16(value.measResultListNR_r17);
    }
    if (value.has_measResultListEUTRA_r17) {
        Free_MeasResultList2EUTRA_r16(value.measResultListEUTRA_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SuccessHO_Report_r17：ASN.1 SuccessHO-Report-r17；源文件第 3021 行；SEQUENCE。
// Encode_SuccessHO_Report_r17 只读不分配；Decode_SuccessHO_Report_r17 可能 malloc（失败时内部已释放并清零）；Free_SuccessHO_Report_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SuccessHO_Report_r17(Encoder& enc, const SuccessHO_Report_r17& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_measResultNeighCells_r17);
    enc.WriteBit(value.has_locationInfo_r17);
    enc.WriteBit(value.has_timeSinceCHO_Reconfig_r17);
    enc.WriteBit(value.has_shr_Cause_r17);
    enc.WriteBit(value.has_ra_InformationCommon_r17);
    enc.WriteBit(value.has_upInterruptionTimeAtHO_r17);
    enc.WriteBit(value.has_c_RNTI_r17);
    Encode_SuccessHO_Report_r17_SourceCellInfo_r17(enc, value.sourceCellInfo_r17);
    Encode_SuccessHO_Report_r17_TargetCellInfo_r17(enc, value.targetCellInfo_r17);
    if (value.has_measResultNeighCells_r17) {
        Encode_SuccessHO_Report_r17_MeasResultNeighCells_r17(enc, value.measResultNeighCells_r17);
    }
    if (value.has_locationInfo_r17) {
        Encode_LocationInfo_r16(enc, value.locationInfo_r17);
    }
    if (value.has_timeSinceCHO_Reconfig_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.timeSinceCHO_Reconfig_r17), 0, 1023);
    }
    if (value.has_shr_Cause_r17) {
        Encode_SHR_Cause_r17(enc, value.shr_Cause_r17);
    }
    if (value.has_ra_InformationCommon_r17) {
        Encode_RA_InformationCommon_r16(enc, value.ra_InformationCommon_r17);
    }
    if (value.has_upInterruptionTimeAtHO_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.upInterruptionTimeAtHO_r17), 0, 1023);
    }
    if (value.has_c_RNTI_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.c_RNTI_r17), 0, 65535);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SuccessHO_Report_r17_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SuccessHO_Report_r17(Decoder& dec, SuccessHO_Report_r17& value)
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
    {
        if (Decode_SuccessHO_Report_r17_SourceCellInfo_r17(dec, value.sourceCellInfo_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_SuccessHO_Report_r17_TargetCellInfo_r17(dec, value.targetCellInfo_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_SuccessHO_Report_r17_MeasResultNeighCells_r17(dec, value.measResultNeighCells_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_LocationInfo_r16(dec, value.locationInfo_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.timeSinceCHO_Reconfig_r17 = (TimeSinceCHO_Reconfig_r17)tmp_value;
    }
    if (present_3) {
        if (Decode_SHR_Cause_r17(dec, value.shr_Cause_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_RA_InformationCommon_r16(dec, value.ra_InformationCommon_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.upInterruptionTimeAtHO_r17 = (UPInterruptionTimeAtHO_r17)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.c_RNTI_r17 = (RNTI_Value)tmp_value;
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
    if (Decode_SuccessHO_Report_r17_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_SuccessHO_Report_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SuccessHO_Report_r17(SuccessHO_Report_r17& value)
{
    Free_SuccessHO_Report_r17_SourceCellInfo_r17(value.sourceCellInfo_r17);
    Free_SuccessHO_Report_r17_TargetCellInfo_r17(value.targetCellInfo_r17);
    if (value.has_measResultNeighCells_r17) {
        Free_SuccessHO_Report_r17_MeasResultNeighCells_r17(value.measResultNeighCells_r17);
    }
    if (value.has_locationInfo_r17) {
        Free_LocationInfo_r16(value.locationInfo_r17);
    }
    if (value.has_timeSinceCHO_Reconfig_r17) {
    }
    if (value.has_shr_Cause_r17) {
        Free_SHR_Cause_r17(value.shr_Cause_r17);
    }
    if (value.has_ra_InformationCommon_r17) {
        Free_RA_InformationCommon_r16(value.ra_InformationCommon_r17);
    }
    if (value.has_upInterruptionTimeAtHO_r17) {
    }
    if (value.has_c_RNTI_r17) {
    }
    if (value.has_extGroup1) {
        Free_SuccessHO_Report_r17_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEInformationResponse_v1700_IEs：ASN.1 UEInformationResponse-v1700-IEs；源文件第 2708 行；SEQUENCE。
// Encode_UEInformationResponse_v1700_IEs 只读不分配；Decode_UEInformationResponse_v1700_IEs 可能 malloc（失败时内部已释放并清零）；Free_UEInformationResponse_v1700_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEInformationResponse_v1700_IEs(Encoder& enc, const UEInformationResponse_v1700_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_successHO_Report_r17);
    enc.WriteBit(value.has_connEstFailReportList_r17);
    enc.WriteBit(value.has_coarseLocationInfo_r17);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_successHO_Report_r17) {
        Encode_SuccessHO_Report_r17(enc, value.successHO_Report_r17);
    }
    if (value.has_connEstFailReportList_r17) {
        Encode_ConnEstFailReportList_r17(enc, value.connEstFailReportList_r17);
    }
    if (value.has_coarseLocationInfo_r17) {
        enc.WriteSemiConstrainedOctetString(value.coarseLocationInfo_r17.bytes, value.coarseLocationInfo_r17.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UEInformationResponse_v1800_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UEInformationResponse_v1700_IEs(Decoder& dec, UEInformationResponse_v1700_IEs& value)
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
        if (Decode_SuccessHO_Report_r17(dec, value.successHO_Report_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_ConnEstFailReportList_r17(dec, value.connEstFailReportList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.coarseLocationInfo_r17.bytes = string_bytes;
        value.coarseLocationInfo_r17.length = string_length;
    }
    if (present_3) {
        if (Decode_UEInformationResponse_v1800_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UEInformationResponse_v1700_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEInformationResponse_v1700_IEs(UEInformationResponse_v1700_IEs& value)
{
    if (value.has_successHO_Report_r17) {
        Free_SuccessHO_Report_r17(value.successHO_Report_r17);
    }
    if (value.has_connEstFailReportList_r17) {
        Free_ConnEstFailReportList_r17(value.connEstFailReportList_r17);
    }
    if (value.has_coarseLocationInfo_r17) {
        std::free(value.coarseLocationInfo_r17.bytes);
        value.coarseLocationInfo_r17.bytes = nullptr;
        value.coarseLocationInfo_r17.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_UEInformationResponse_v1800_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LogMeasInfoList_r16：ASN.1 LogMeasInfoList-r16；源文件第 2741 行；SEQUENCE OF。
// Encode_LogMeasInfoList_r16 只读不分配；Decode_LogMeasInfoList_r16 可能 malloc（失败时内部已释放并清零）；Free_LogMeasInfoList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LogMeasInfoList_r16(Encoder& enc, const LogMeasInfoList_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 520u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_LogMeasInfo_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_LogMeasInfoList_r16(Decoder& dec, LogMeasInfoList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 520u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 520u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (LogMeasInfo_r16*)std::malloc((std::size_t)value.count * sizeof(LogMeasInfo_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(LogMeasInfo_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_LogMeasInfo_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_LogMeasInfoList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LogMeasInfoList_r16(LogMeasInfoList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_LogMeasInfo_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LogMeasReport_r16：ASN.1 LogMeasReport-r16；源文件第 2729 行；SEQUENCE。
// Encode_LogMeasReport_r16 只读不分配；Decode_LogMeasReport_r16 可能 malloc（失败时内部已释放并清零）；Free_LogMeasReport_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LogMeasReport_r16(Encoder& enc, const LogMeasReport_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_logMeasAvailable_r16);
    enc.WriteBit(value.has_logMeasAvailableBT_r16);
    enc.WriteBit(value.has_logMeasAvailableWLAN_r16);
    enc.WriteFixedBitString(value.absoluteTimeStamp_r16.bytes, value.absoluteTimeStamp_r16.bitLength, 48, 48);
    Encode_TraceReference_r16(enc, value.traceReference_r16);
    enc.WriteFixedOctetString(value.traceRecordingSessionRef_r16.bytes, value.traceRecordingSessionRef_r16.length, 2, 2);
    enc.WriteFixedOctetString(value.tce_Id_r16.bytes, value.tce_Id_r16.length, 1, 1);
    Encode_LogMeasInfoList_r16(enc, value.logMeasInfoList_r16);
    if (value.has_logMeasAvailable_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.logMeasAvailable_r16), 0, 0);
    }
    if (value.has_logMeasAvailableBT_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.logMeasAvailableBT_r16), 0, 0);
    }
    if (value.has_logMeasAvailableWLAN_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.logMeasAvailableWLAN_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_LogMeasReport_r16(Decoder& dec, LogMeasReport_r16& value)
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
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 48)) { goto fail; }
        string_length = 48;
        value.absoluteTimeStamp_r16.bytes = string_bytes;
        value.absoluteTimeStamp_r16.bitLength = string_length;
    }
    {
        if (Decode_TraceReference_r16(dec, value.traceReference_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedOctetString(string_bytes, 2)) { goto fail; }
        string_length = 2;
        value.traceRecordingSessionRef_r16.bytes = string_bytes;
        value.traceRecordingSessionRef_r16.length = string_length;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedOctetString(string_bytes, 1)) { goto fail; }
        string_length = 1;
        value.tce_Id_r16.bytes = string_bytes;
        value.tce_Id_r16.length = string_length;
    }
    {
        if (Decode_LogMeasInfoList_r16(dec, value.logMeasInfoList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        value.logMeasAvailable_r16 = (LogMeasReport_r16_LogMeasAvailable_r16)0;
    }
    if (present_1) {
        value.logMeasAvailableBT_r16 = (LogMeasReport_r16_LogMeasAvailableBT_r16)0;
    }
    if (present_2) {
        value.logMeasAvailableWLAN_r16 = (LogMeasReport_r16_LogMeasAvailableWLAN_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_LogMeasReport_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LogMeasReport_r16(LogMeasReport_r16& value)
{
    std::free(value.absoluteTimeStamp_r16.bytes);
    value.absoluteTimeStamp_r16.bytes = nullptr;
    value.absoluteTimeStamp_r16.bitLength = 0;
    Free_TraceReference_r16(value.traceReference_r16);
    std::free(value.traceRecordingSessionRef_r16.bytes);
    value.traceRecordingSessionRef_r16.bytes = nullptr;
    value.traceRecordingSessionRef_r16.length = 0;
    std::free(value.tce_Id_r16.bytes);
    value.tce_Id_r16.bytes = nullptr;
    value.tce_Id_r16.length = 0;
    Free_LogMeasInfoList_r16(value.logMeasInfoList_r16);
    if (value.has_logMeasAvailable_r16) {
    }
    if (value.has_logMeasAvailableBT_r16) {
    }
    if (value.has_logMeasAvailableWLAN_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultFailedCell_r16_MeasResult_r16_CellResults_r16：ASN.1 measResult-r16/cellResults-r16；源文件第 2786 行；SEQUENCE。
// Encode_MeasResultFailedCell_r16_MeasResult_r16_CellResults_r16 只读不分配；Decode_MeasResultFailedCell_r16_MeasResult_r16_CellResults_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultFailedCell_r16_MeasResult_r16_CellResults_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultFailedCell_r16_MeasResult_r16_CellResults_r16(Encoder& enc, const MeasResultFailedCell_r16_MeasResult_r16_CellResults_r16& value)
{
    (void)value;
    Encode_MeasQuantityResults(enc, value.resultsSSB_Cell_r16);
    return enc.Error();
}

ErrorCode Decode_MeasResultFailedCell_r16_MeasResult_r16_CellResults_r16(Decoder& dec, MeasResultFailedCell_r16_MeasResult_r16_CellResults_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MeasQuantityResults(dec, value.resultsSSB_Cell_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultFailedCell_r16_MeasResult_r16_CellResults_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultFailedCell_r16_MeasResult_r16_CellResults_r16(MeasResultFailedCell_r16_MeasResult_r16_CellResults_r16& value)
{
    Free_MeasQuantityResults(value.resultsSSB_Cell_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultFailedCell_r16_MeasResult_r16_RsIndexResults_r16：ASN.1 measResult-r16/rsIndexResults-r16；源文件第 2789 行；SEQUENCE。
// Encode_MeasResultFailedCell_r16_MeasResult_r16_RsIndexResults_r16 只读不分配；Decode_MeasResultFailedCell_r16_MeasResult_r16_RsIndexResults_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultFailedCell_r16_MeasResult_r16_RsIndexResults_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultFailedCell_r16_MeasResult_r16_RsIndexResults_r16(Encoder& enc, const MeasResultFailedCell_r16_MeasResult_r16_RsIndexResults_r16& value)
{
    (void)value;
    Encode_ResultsPerSSB_IndexList(enc, value.resultsSSB_Indexes_r16);
    return enc.Error();
}

ErrorCode Decode_MeasResultFailedCell_r16_MeasResult_r16_RsIndexResults_r16(Decoder& dec, MeasResultFailedCell_r16_MeasResult_r16_RsIndexResults_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_ResultsPerSSB_IndexList(dec, value.resultsSSB_Indexes_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultFailedCell_r16_MeasResult_r16_RsIndexResults_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultFailedCell_r16_MeasResult_r16_RsIndexResults_r16(MeasResultFailedCell_r16_MeasResult_r16_RsIndexResults_r16& value)
{
    Free_ResultsPerSSB_IndexList(value.resultsSSB_Indexes_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultFailedCell_r16_MeasResult_r16：ASN.1 measResult-r16；源文件第 2785 行；SEQUENCE。
// Encode_MeasResultFailedCell_r16_MeasResult_r16 只读不分配；Decode_MeasResultFailedCell_r16_MeasResult_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultFailedCell_r16_MeasResult_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultFailedCell_r16_MeasResult_r16(Encoder& enc, const MeasResultFailedCell_r16_MeasResult_r16& value)
{
    (void)value;
    Encode_MeasResultFailedCell_r16_MeasResult_r16_CellResults_r16(enc, value.cellResults_r16);
    Encode_MeasResultFailedCell_r16_MeasResult_r16_RsIndexResults_r16(enc, value.rsIndexResults_r16);
    return enc.Error();
}

ErrorCode Decode_MeasResultFailedCell_r16_MeasResult_r16(Decoder& dec, MeasResultFailedCell_r16_MeasResult_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MeasResultFailedCell_r16_MeasResult_r16_CellResults_r16(dec, value.cellResults_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_MeasResultFailedCell_r16_MeasResult_r16_RsIndexResults_r16(dec, value.rsIndexResults_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultFailedCell_r16_MeasResult_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultFailedCell_r16_MeasResult_r16(MeasResultFailedCell_r16_MeasResult_r16& value)
{
    Free_MeasResultFailedCell_r16_MeasResult_r16_CellResults_r16(value.cellResults_r16);
    Free_MeasResultFailedCell_r16_MeasResult_r16_RsIndexResults_r16(value.rsIndexResults_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultFailedCell_r16：ASN.1 MeasResultFailedCell-r16；源文件第 2783 行；SEQUENCE。
// Encode_MeasResultFailedCell_r16 只读不分配；Decode_MeasResultFailedCell_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultFailedCell_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultFailedCell_r16(Encoder& enc, const MeasResultFailedCell_r16& value)
{
    (void)value;
    Encode_CGI_Info_Logging_r16(enc, value.cgi_Info);
    Encode_MeasResultFailedCell_r16_MeasResult_r16(enc, value.measResult_r16);
    return enc.Error();
}

ErrorCode Decode_MeasResultFailedCell_r16(Decoder& dec, MeasResultFailedCell_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CGI_Info_Logging_r16(dec, value.cgi_Info) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_MeasResultFailedCell_r16_MeasResult_r16(dec, value.measResult_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultFailedCell_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultFailedCell_r16(MeasResultFailedCell_r16& value)
{
    Free_CGI_Info_Logging_r16(value.cgi_Info);
    Free_MeasResultFailedCell_r16_MeasResult_r16(value.measResult_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ConnEstFailReport_r16_MeasResultNeighCells_r16：ASN.1 measResultNeighCells-r16；源文件第 2762 行；SEQUENCE。
// Encode_ConnEstFailReport_r16_MeasResultNeighCells_r16 只读不分配；Decode_ConnEstFailReport_r16_MeasResultNeighCells_r16 可能 malloc（失败时内部已释放并清零）；Free_ConnEstFailReport_r16_MeasResultNeighCells_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ConnEstFailReport_r16_MeasResultNeighCells_r16(Encoder& enc, const ConnEstFailReport_r16_MeasResultNeighCells_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_measResultNeighCellListNR);
    enc.WriteBit(value.has_measResultNeighCellListEUTRA);
    if (value.has_measResultNeighCellListNR) {
        Encode_MeasResultList2NR_r16(enc, value.measResultNeighCellListNR);
    }
    if (value.has_measResultNeighCellListEUTRA) {
        Encode_MeasResultList2EUTRA_r16(enc, value.measResultNeighCellListEUTRA);
    }
    return enc.Error();
}

ErrorCode Decode_ConnEstFailReport_r16_MeasResultNeighCells_r16(Decoder& dec, ConnEstFailReport_r16_MeasResultNeighCells_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MeasResultList2NR_r16(dec, value.measResultNeighCellListNR) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MeasResultList2EUTRA_r16(dec, value.measResultNeighCellListEUTRA) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ConnEstFailReport_r16_MeasResultNeighCells_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ConnEstFailReport_r16_MeasResultNeighCells_r16(ConnEstFailReport_r16_MeasResultNeighCells_r16& value)
{
    if (value.has_measResultNeighCellListNR) {
        Free_MeasResultList2NR_r16(value.measResultNeighCellListNR);
    }
    if (value.has_measResultNeighCellListEUTRA) {
        Free_MeasResultList2EUTRA_r16(value.measResultNeighCellListEUTRA);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ConnEstFailReport_r16：ASN.1 ConnEstFailReport-r16；源文件第 2759 行；SEQUENCE。
// Encode_ConnEstFailReport_r16 只读不分配；Decode_ConnEstFailReport_r16 可能 malloc（失败时内部已释放并清零）；Free_ConnEstFailReport_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ConnEstFailReport_r16(Encoder& enc, const ConnEstFailReport_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_locationInfo_r16);
    Encode_MeasResultFailedCell_r16(enc, value.measResultFailedCell_r16);
    if (value.has_locationInfo_r16) {
        Encode_LocationInfo_r16(enc, value.locationInfo_r16);
    }
    Encode_ConnEstFailReport_r16_MeasResultNeighCells_r16(enc, value.measResultNeighCells_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.numberOfConnFail_r16), 1, 8);
    Encode_PerRAInfoList_r16(enc, value.perRAInfoList_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeSinceFailure_r16), 0, 172800);
    return enc.Error();
}

ErrorCode Decode_ConnEstFailReport_r16(Decoder& dec, ConnEstFailReport_r16& value)
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
        if (Decode_MeasResultFailedCell_r16(dec, value.measResultFailedCell_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_LocationInfo_r16(dec, value.locationInfo_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_ConnEstFailReport_r16_MeasResultNeighCells_r16(dec, value.measResultNeighCells_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.numberOfConnFail_r16 = (int64_t)tmp_value;
    }
    {
        if (Decode_PerRAInfoList_r16(dec, value.perRAInfoList_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 172800, tmp_value)) { goto fail; }
        value.timeSinceFailure_r16 = (TimeSinceFailure_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ConnEstFailReport_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ConnEstFailReport_r16(ConnEstFailReport_r16& value)
{
    Free_MeasResultFailedCell_r16(value.measResultFailedCell_r16);
    if (value.has_locationInfo_r16) {
        Free_LocationInfo_r16(value.locationInfo_r16);
    }
    Free_ConnEstFailReport_r16_MeasResultNeighCells_r16(value.measResultNeighCells_r16);
    Free_PerRAInfoList_r16(value.perRAInfoList_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RA_ReportList_r16：ASN.1 RA-ReportList-r16；源文件第 2795 行；SEQUENCE OF。
// Encode_RA_ReportList_r16 只读不分配；Decode_RA_ReportList_r16 可能 malloc（失败时内部已释放并清零）；Free_RA_ReportList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RA_ReportList_r16(Encoder& enc, const RA_ReportList_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_RA_Report_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_RA_ReportList_r16(Decoder& dec, RA_ReportList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (RA_Report_r16*)std::malloc((std::size_t)value.count * sizeof(RA_Report_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(RA_Report_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_RA_Report_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_RA_ReportList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RA_ReportList_r16(RA_ReportList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_RA_Report_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultRLFNR_r16_MeasResult_r16_CellResults_r16：ASN.1 measResult-r16/cellResults-r16；源文件第 3125 行；SEQUENCE。
// Encode_MeasResultRLFNR_r16_MeasResult_r16_CellResults_r16 只读不分配；Decode_MeasResultRLFNR_r16_MeasResult_r16_CellResults_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultRLFNR_r16_MeasResult_r16_CellResults_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultRLFNR_r16_MeasResult_r16_CellResults_r16(Encoder& enc, const MeasResultRLFNR_r16_MeasResult_r16_CellResults_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_resultsSSB_Cell_r16);
    enc.WriteBit(value.has_resultsCSI_RS_Cell_r16);
    if (value.has_resultsSSB_Cell_r16) {
        Encode_MeasQuantityResults(enc, value.resultsSSB_Cell_r16);
    }
    if (value.has_resultsCSI_RS_Cell_r16) {
        Encode_MeasQuantityResults(enc, value.resultsCSI_RS_Cell_r16);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultRLFNR_r16_MeasResult_r16_CellResults_r16(Decoder& dec, MeasResultRLFNR_r16_MeasResult_r16_CellResults_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MeasQuantityResults(dec, value.resultsSSB_Cell_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MeasQuantityResults(dec, value.resultsCSI_RS_Cell_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultRLFNR_r16_MeasResult_r16_CellResults_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultRLFNR_r16_MeasResult_r16_CellResults_r16(MeasResultRLFNR_r16_MeasResult_r16_CellResults_r16& value)
{
    if (value.has_resultsSSB_Cell_r16) {
        Free_MeasQuantityResults(value.resultsSSB_Cell_r16);
    }
    if (value.has_resultsCSI_RS_Cell_r16) {
        Free_MeasQuantityResults(value.resultsCSI_RS_Cell_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultRLFNR_r16_MeasResult_r16_RsIndexResults_r16：ASN.1 measResult-r16/rsIndexResults-r16；源文件第 3129 行；SEQUENCE。
// Encode_MeasResultRLFNR_r16_MeasResult_r16_RsIndexResults_r16 只读不分配；Decode_MeasResultRLFNR_r16_MeasResult_r16_RsIndexResults_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultRLFNR_r16_MeasResult_r16_RsIndexResults_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultRLFNR_r16_MeasResult_r16_RsIndexResults_r16(Encoder& enc, const MeasResultRLFNR_r16_MeasResult_r16_RsIndexResults_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_resultsSSB_Indexes_r16);
    enc.WriteBit(value.has_ssbRLMConfigBitmap_r16);
    enc.WriteBit(value.has_resultsCSI_RS_Indexes_r16);
    enc.WriteBit(value.has_csi_rsRLMConfigBitmap_r16);
    if (value.has_resultsSSB_Indexes_r16) {
        Encode_ResultsPerSSB_IndexList(enc, value.resultsSSB_Indexes_r16);
    }
    if (value.has_ssbRLMConfigBitmap_r16) {
        enc.WriteFixedBitString(value.ssbRLMConfigBitmap_r16.bytes, value.ssbRLMConfigBitmap_r16.bitLength, 64, 64);
    }
    if (value.has_resultsCSI_RS_Indexes_r16) {
        Encode_ResultsPerCSI_RS_IndexList(enc, value.resultsCSI_RS_Indexes_r16);
    }
    if (value.has_csi_rsRLMConfigBitmap_r16) {
        enc.WriteFixedBitString(value.csi_rsRLMConfigBitmap_r16.bytes, value.csi_rsRLMConfigBitmap_r16.bitLength, 96, 96);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultRLFNR_r16_MeasResult_r16_RsIndexResults_r16(Decoder& dec, MeasResultRLFNR_r16_MeasResult_r16_RsIndexResults_r16& value)
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
        if (Decode_ResultsPerSSB_IndexList(dec, value.resultsSSB_Indexes_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 64)) { goto fail; }
        string_length = 64;
        value.ssbRLMConfigBitmap_r16.bytes = string_bytes;
        value.ssbRLMConfigBitmap_r16.bitLength = string_length;
    }
    if (present_2) {
        if (Decode_ResultsPerCSI_RS_IndexList(dec, value.resultsCSI_RS_Indexes_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 96)) { goto fail; }
        string_length = 96;
        value.csi_rsRLMConfigBitmap_r16.bytes = string_bytes;
        value.csi_rsRLMConfigBitmap_r16.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultRLFNR_r16_MeasResult_r16_RsIndexResults_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultRLFNR_r16_MeasResult_r16_RsIndexResults_r16(MeasResultRLFNR_r16_MeasResult_r16_RsIndexResults_r16& value)
{
    if (value.has_resultsSSB_Indexes_r16) {
        Free_ResultsPerSSB_IndexList(value.resultsSSB_Indexes_r16);
    }
    if (value.has_ssbRLMConfigBitmap_r16) {
        std::free(value.ssbRLMConfigBitmap_r16.bytes);
        value.ssbRLMConfigBitmap_r16.bytes = nullptr;
        value.ssbRLMConfigBitmap_r16.bitLength = 0;
    }
    if (value.has_resultsCSI_RS_Indexes_r16) {
        Free_ResultsPerCSI_RS_IndexList(value.resultsCSI_RS_Indexes_r16);
    }
    if (value.has_csi_rsRLMConfigBitmap_r16) {
        std::free(value.csi_rsRLMConfigBitmap_r16.bytes);
        value.csi_rsRLMConfigBitmap_r16.bytes = nullptr;
        value.csi_rsRLMConfigBitmap_r16.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultRLFNR_r16_MeasResult_r16：ASN.1 measResult-r16；源文件第 3124 行；SEQUENCE。
// Encode_MeasResultRLFNR_r16_MeasResult_r16 只读不分配；Decode_MeasResultRLFNR_r16_MeasResult_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultRLFNR_r16_MeasResult_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultRLFNR_r16_MeasResult_r16(Encoder& enc, const MeasResultRLFNR_r16_MeasResult_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_rsIndexResults_r16);
    Encode_MeasResultRLFNR_r16_MeasResult_r16_CellResults_r16(enc, value.cellResults_r16);
    if (value.has_rsIndexResults_r16) {
        Encode_MeasResultRLFNR_r16_MeasResult_r16_RsIndexResults_r16(enc, value.rsIndexResults_r16);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultRLFNR_r16_MeasResult_r16(Decoder& dec, MeasResultRLFNR_r16_MeasResult_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_MeasResultRLFNR_r16_MeasResult_r16_CellResults_r16(dec, value.cellResults_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_MeasResultRLFNR_r16_MeasResult_r16_RsIndexResults_r16(dec, value.rsIndexResults_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultRLFNR_r16_MeasResult_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultRLFNR_r16_MeasResult_r16(MeasResultRLFNR_r16_MeasResult_r16& value)
{
    Free_MeasResultRLFNR_r16_MeasResult_r16_CellResults_r16(value.cellResults_r16);
    if (value.has_rsIndexResults_r16) {
        Free_MeasResultRLFNR_r16_MeasResult_r16_RsIndexResults_r16(value.rsIndexResults_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultRLFNR_r16：ASN.1 MeasResultRLFNR-r16；源文件第 3123 行；SEQUENCE。
// Encode_MeasResultRLFNR_r16 只读不分配；Decode_MeasResultRLFNR_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultRLFNR_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultRLFNR_r16(Encoder& enc, const MeasResultRLFNR_r16& value)
{
    (void)value;
    Encode_MeasResultRLFNR_r16_MeasResult_r16(enc, value.measResult_r16);
    return enc.Error();
}

ErrorCode Decode_MeasResultRLFNR_r16(Decoder& dec, MeasResultRLFNR_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MeasResultRLFNR_r16_MeasResult_r16(dec, value.measResult_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultRLFNR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultRLFNR_r16(MeasResultRLFNR_r16& value)
{
    Free_MeasResultRLFNR_r16_MeasResult_r16(value.measResult_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup1：ASN.1 RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup1；源文件第 2979 行；扩展添加组 [[ ]]。
// Encode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup1 只读不分配；Decode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup1(Encoder& enc, const RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_csi_rsRLMConfigBitmap_v1650);
    if (value.has_csi_rsRLMConfigBitmap_v1650) {
        enc.WriteFixedBitString(value.csi_rsRLMConfigBitmap_v1650.bytes, value.csi_rsRLMConfigBitmap_v1650.bitLength, 96, 96);
    }
    return enc.Error();
}

ErrorCode Decode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup1(Decoder& dec, RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 96)) { goto fail; }
        string_length = 96;
        value.csi_rsRLMConfigBitmap_v1650.bytes = string_bytes;
        value.csi_rsRLMConfigBitmap_v1650.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup1(RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup1& value)
{
    if (value.has_csi_rsRLMConfigBitmap_v1650) {
        std::free(value.csi_rsRLMConfigBitmap_v1650.bytes);
        value.csi_rsRLMConfigBitmap_v1650.bytes = nullptr;
        value.csi_rsRLMConfigBitmap_v1650.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ChoCandidateCellList_r17：ASN.1 ChoCandidateCellList-r17；源文件第 3151 行；SEQUENCE OF。
// Encode_ChoCandidateCellList_r17 只读不分配；Decode_ChoCandidateCellList_r17 可能 malloc（失败时内部已释放并清零）；Free_ChoCandidateCellList_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ChoCandidateCellList_r17(Encoder& enc, const ChoCandidateCellList_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_ChoCandidateCell_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_ChoCandidateCellList_r17(Decoder& dec, ChoCandidateCellList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (ChoCandidateCell_r17*)std::malloc((std::size_t)value.count * sizeof(ChoCandidateCell_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(ChoCandidateCell_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_ChoCandidateCell_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_ChoCandidateCellList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ChoCandidateCellList_r17(ChoCandidateCellList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_ChoCandidateCell_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17：ASN.1 nr-RLF-Report-r16/choCellId-r17；源文件第 2986 行；CHOICE。
// Encode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17 只读不分配；Decode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17 可能 malloc（失败时内部已释放并清零）；Free_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17(Encoder& enc, const RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17_Tag_cellGlobalId_r17:
        Encode_CGI_Info_Logging_r16(enc, value.u.cellGlobalId_r17);
        break;
    case RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17_Tag_pci_arfcn_r17:
        Encode_PCI_ARFCN_NR_r16(enc, value.u.pci_arfcn_r17);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17(Decoder& dec, RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17_Tag)root_index;
    switch (value.tag) {
    case RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17_Tag_cellGlobalId_r17: {
        if (Decode_CGI_Info_Logging_r16(dec, value.u.cellGlobalId_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17_Tag_pci_arfcn_r17: {
        if (Decode_PCI_ARFCN_NR_r16(dec, value.u.pci_arfcn_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17(RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17& value)
{
    switch (value.tag) {
    case RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17_Tag_cellGlobalId_r17:
        Free_CGI_Info_Logging_r16(value.u.cellGlobalId_r17);
        break;
    case RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17_Tag_pci_arfcn_r17:
        Free_PCI_ARFCN_NR_r16(value.u.pci_arfcn_r17);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2：ASN.1 RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2；源文件第 2982 行；扩展添加组 [[ ]]。
// Encode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2 只读不分配；Decode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2(Encoder& enc, const RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_lastHO_Type_r17);
    enc.WriteBit(value.has_timeConnSourceDAPS_Failure_r17);
    enc.WriteBit(value.has_timeSinceCHO_Reconfig_r17);
    enc.WriteBit(value.has_choCellId_r17);
    enc.WriteBit(value.has_choCandidateCellList_r17);
    if (value.has_lastHO_Type_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.lastHO_Type_r17), 0, 3);
    }
    if (value.has_timeConnSourceDAPS_Failure_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.timeConnSourceDAPS_Failure_r17), 0, 1023);
    }
    if (value.has_timeSinceCHO_Reconfig_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.timeSinceCHO_Reconfig_r17), 0, 1023);
    }
    if (value.has_choCellId_r17) {
        Encode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17(enc, value.choCellId_r17);
    }
    if (value.has_choCandidateCellList_r17) {
        Encode_ChoCandidateCellList_r17(enc, value.choCandidateCellList_r17);
    }
    return enc.Error();
}

ErrorCode Decode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2(Decoder& dec, RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2& value)
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
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.lastHO_Type_r17 = (RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_LastHO_Type_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.timeConnSourceDAPS_Failure_r17 = (TimeConnSourceDAPS_Failure_r17)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.timeSinceCHO_Reconfig_r17 = (TimeSinceCHO_Reconfig_r17)tmp_value;
    }
    if (present_3) {
        if (Decode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17(dec, value.choCellId_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_ChoCandidateCellList_r17(dec, value.choCandidateCellList_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2(RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2& value)
{
    if (value.has_lastHO_Type_r17) {
    }
    if (value.has_timeConnSourceDAPS_Failure_r17) {
    }
    if (value.has_timeSinceCHO_Reconfig_r17) {
    }
    if (value.has_choCellId_r17) {
        Free_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17(value.choCellId_r17);
    }
    if (value.has_choCandidateCellList_r17) {
        Free_ChoCandidateCellList_r17(value.choCandidateCellList_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// AttemptedBWP_Info_r18：ASN.1 AttemptedBWP-Info-r18；源文件第 2865 行；SEQUENCE。
// Encode_AttemptedBWP_Info_r18 只读不分配；Decode_AttemptedBWP_Info_r18 可能 malloc（失败时内部已释放并清零）；Free_AttemptedBWP_Info_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_AttemptedBWP_Info_r18(Encoder& enc, const AttemptedBWP_Info_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.locationAndBandwidth_r18), 0, 37949);
    enc.WriteConstrainedInteger((std::int64_t)(value.subcarrierSpacing_r18), 0, 7);
    return enc.Error();
}

ErrorCode Decode_AttemptedBWP_Info_r18(Decoder& dec, AttemptedBWP_Info_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 37949, tmp_value)) { goto fail; }
        value.locationAndBandwidth_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.subcarrierSpacing_r18 = (SubcarrierSpacing)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_AttemptedBWP_Info_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AttemptedBWP_Info_r18(AttemptedBWP_Info_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18：ASN.1 nr-RLF-Report-r16/pSCellId-r18；源文件第 2993 行；CHOICE。
// Encode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18 只读不分配；Decode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18 可能 malloc（失败时内部已释放并清零）；Free_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18(Encoder& enc, const RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18_Tag_cellGlobalId_r18:
        Encode_CGI_Info_Logging_r16(enc, value.u.cellGlobalId_r18);
        break;
    case RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18_Tag_pci_arfcn_r18:
        Encode_PCI_ARFCN_NR_r16(enc, value.u.pci_arfcn_r18);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18(Decoder& dec, RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18_Tag)root_index;
    switch (value.tag) {
    case RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18_Tag_cellGlobalId_r18: {
        if (Decode_CGI_Info_Logging_r16(dec, value.u.cellGlobalId_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18_Tag_pci_arfcn_r18: {
        if (Decode_PCI_ARFCN_NR_r16(dec, value.u.pci_arfcn_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18(RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18& value)
{
    switch (value.tag) {
    case RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18_Tag_cellGlobalId_r18:
        Free_CGI_Info_Logging_r16(value.u.cellGlobalId_r18);
        break;
    case RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18_Tag_pci_arfcn_r18:
        Free_PCI_ARFCN_NR_r16(value.u.pci_arfcn_r18);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3：ASN.1 RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3；源文件第 2992 行；扩展添加组 [[ ]]。
// Encode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3 只读不分配；Decode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3(Encoder& enc, const RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_pSCellId_r18);
    enc.WriteBit(value.has_mcgRecoveryFailureCause_r18);
    enc.WriteBit(value.has_scgFailureCause_r18);
    enc.WriteBit(value.has_elapsedTimeSCGFailure_r18);
    enc.WriteBit(value.has_voiceFallbackHO_r18);
    enc.WriteBit(value.has_measResultLastServCell_RSSI_r18);
    enc.WriteBit(value.has_measResultNeighFreqList_RSSI_r18);
    enc.WriteBit(value.has_bwp_Info_r18);
    enc.WriteBit(value.has_elapsedTimeT316_r18);
    if (value.has_pSCellId_r18) {
        Encode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18(enc, value.pSCellId_r18);
    }
    if (value.has_mcgRecoveryFailureCause_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mcgRecoveryFailureCause_r18), 0, 3);
    }
    if (value.has_scgFailureCause_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scgFailureCause_r18), 0, 13);
    }
    if (value.has_elapsedTimeSCGFailure_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.elapsedTimeSCGFailure_r18), 0, 1023);
    }
    if (value.has_voiceFallbackHO_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.voiceFallbackHO_r18), 0, 0);
    }
    if (value.has_measResultLastServCell_RSSI_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.measResultLastServCell_RSSI_r18), 0, 76);
    }
    if (value.has_measResultNeighFreqList_RSSI_r18) {
        Encode_MeasResultNeighFreqList_RSSI_r18(enc, value.measResultNeighFreqList_RSSI_r18);
    }
    if (value.has_bwp_Info_r18) {
        Encode_AttemptedBWP_Info_r18(enc, value.bwp_Info_r18);
    }
    if (value.has_elapsedTimeT316_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.elapsedTimeT316_r18), 0, 2000);
    }
    return enc.Error();
}

ErrorCode Decode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3(Decoder& dec, RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3& value)
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
        if (Decode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18(dec, value.pSCellId_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.mcgRecoveryFailureCause_r18 = (RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_McgRecoveryFailureCause_r18)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.scgFailureCause_r18 = (RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_ScgFailureCause_r18)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.elapsedTimeSCGFailure_r18 = (ElapsedTimeSCGFailure_r18)tmp_value;
    }
    if (present_4) {
        value.voiceFallbackHO_r18 = (RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_VoiceFallbackHO_r18)0;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 76, tmp_value)) { goto fail; }
        value.measResultLastServCell_RSSI_r18 = (RSSI_Range_r16)tmp_value;
    }
    if (present_6) {
        if (Decode_MeasResultNeighFreqList_RSSI_r18(dec, value.measResultNeighFreqList_RSSI_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        if (Decode_AttemptedBWP_Info_r18(dec, value.bwp_Info_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2000, tmp_value)) { goto fail; }
        value.elapsedTimeT316_r18 = (ElapsedTimeT316_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3(RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3& value)
{
    if (value.has_pSCellId_r18) {
        Free_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18(value.pSCellId_r18);
    }
    if (value.has_mcgRecoveryFailureCause_r18) {
    }
    if (value.has_scgFailureCause_r18) {
    }
    if (value.has_elapsedTimeSCGFailure_r18) {
    }
    if (value.has_voiceFallbackHO_r18) {
    }
    if (value.has_measResultLastServCell_RSSI_r18) {
    }
    if (value.has_measResultNeighFreqList_RSSI_r18) {
        Free_MeasResultNeighFreqList_RSSI_r18(value.measResultNeighFreqList_RSSI_r18);
    }
    if (value.has_bwp_Info_r18) {
        Free_AttemptedBWP_Info_r18(value.bwp_Info_r18);
    }
    if (value.has_elapsedTimeT316_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLF_Report_r16_Nr_RLF_Report_r16_MeasResultNeighCells_r16：ASN.1 nr-RLF-Report-r16/measResultNeighCells-r16；源文件第 2944 行；SEQUENCE。
// Encode_RLF_Report_r16_Nr_RLF_Report_r16_MeasResultNeighCells_r16 只读不分配；Decode_RLF_Report_r16_Nr_RLF_Report_r16_MeasResultNeighCells_r16 可能 malloc（失败时内部已释放并清零）；Free_RLF_Report_r16_Nr_RLF_Report_r16_MeasResultNeighCells_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLF_Report_r16_Nr_RLF_Report_r16_MeasResultNeighCells_r16(Encoder& enc, const RLF_Report_r16_Nr_RLF_Report_r16_MeasResultNeighCells_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_measResultListNR_r16);
    enc.WriteBit(value.has_measResultListEUTRA_r16);
    if (value.has_measResultListNR_r16) {
        Encode_MeasResultList2NR_r16(enc, value.measResultListNR_r16);
    }
    if (value.has_measResultListEUTRA_r16) {
        Encode_MeasResultList2EUTRA_r16(enc, value.measResultListEUTRA_r16);
    }
    return enc.Error();
}

ErrorCode Decode_RLF_Report_r16_Nr_RLF_Report_r16_MeasResultNeighCells_r16(Decoder& dec, RLF_Report_r16_Nr_RLF_Report_r16_MeasResultNeighCells_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MeasResultList2NR_r16(dec, value.measResultListNR_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MeasResultList2EUTRA_r16(dec, value.measResultListEUTRA_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLF_Report_r16_Nr_RLF_Report_r16_MeasResultNeighCells_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLF_Report_r16_Nr_RLF_Report_r16_MeasResultNeighCells_r16(RLF_Report_r16_Nr_RLF_Report_r16_MeasResultNeighCells_r16& value)
{
    if (value.has_measResultListNR_r16) {
        Free_MeasResultList2NR_r16(value.measResultListNR_r16);
    }
    if (value.has_measResultListEUTRA_r16) {
        Free_MeasResultList2EUTRA_r16(value.measResultListEUTRA_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CGI_InfoEUTRALogging：ASN.1 CGI-InfoEUTRALogging；源文件第 5107 行；SEQUENCE。
// Encode_CGI_InfoEUTRALogging 只读不分配；Decode_CGI_InfoEUTRALogging 可能 malloc（失败时内部已释放并清零）；Free_CGI_InfoEUTRALogging 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CGI_InfoEUTRALogging(Encoder& enc, const CGI_InfoEUTRALogging& value)
{
    (void)value;
    enc.WriteBit(value.has_plmn_Identity_eutra_5gc);
    enc.WriteBit(value.has_trackingAreaCode_eutra_5gc);
    enc.WriteBit(value.has_cellIdentity_eutra_5gc);
    enc.WriteBit(value.has_plmn_Identity_eutra_epc);
    enc.WriteBit(value.has_trackingAreaCode_eutra_epc);
    enc.WriteBit(value.has_cellIdentity_eutra_epc);
    if (value.has_plmn_Identity_eutra_5gc) {
        Encode_PLMN_Identity(enc, value.plmn_Identity_eutra_5gc);
    }
    if (value.has_trackingAreaCode_eutra_5gc) {
        enc.WriteFixedBitString(value.trackingAreaCode_eutra_5gc.bytes, value.trackingAreaCode_eutra_5gc.bitLength, 24, 24);
    }
    if (value.has_cellIdentity_eutra_5gc) {
        enc.WriteFixedBitString(value.cellIdentity_eutra_5gc.bytes, value.cellIdentity_eutra_5gc.bitLength, 28, 28);
    }
    if (value.has_plmn_Identity_eutra_epc) {
        Encode_PLMN_Identity(enc, value.plmn_Identity_eutra_epc);
    }
    if (value.has_trackingAreaCode_eutra_epc) {
        enc.WriteFixedBitString(value.trackingAreaCode_eutra_epc.bytes, value.trackingAreaCode_eutra_epc.bitLength, 16, 16);
    }
    if (value.has_cellIdentity_eutra_epc) {
        enc.WriteFixedBitString(value.cellIdentity_eutra_epc.bytes, value.cellIdentity_eutra_epc.bitLength, 28, 28);
    }
    return enc.Error();
}

ErrorCode Decode_CGI_InfoEUTRALogging(Decoder& dec, CGI_InfoEUTRALogging& value)
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
        if (Decode_PLMN_Identity(dec, value.plmn_Identity_eutra_5gc) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.trackingAreaCode_eutra_5gc.bytes = string_bytes;
        value.trackingAreaCode_eutra_5gc.bitLength = string_length;
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 28)) { goto fail; }
        string_length = 28;
        value.cellIdentity_eutra_5gc.bytes = string_bytes;
        value.cellIdentity_eutra_5gc.bitLength = string_length;
    }
    if (present_3) {
        if (Decode_PLMN_Identity(dec, value.plmn_Identity_eutra_epc) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.trackingAreaCode_eutra_epc.bytes = string_bytes;
        value.trackingAreaCode_eutra_epc.bitLength = string_length;
    }
    if (present_5) {
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
    Free_CGI_InfoEUTRALogging(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CGI_InfoEUTRALogging(CGI_InfoEUTRALogging& value)
{
    if (value.has_plmn_Identity_eutra_5gc) {
        Free_PLMN_Identity(value.plmn_Identity_eutra_5gc);
    }
    if (value.has_trackingAreaCode_eutra_5gc) {
        std::free(value.trackingAreaCode_eutra_5gc.bytes);
        value.trackingAreaCode_eutra_5gc.bytes = nullptr;
        value.trackingAreaCode_eutra_5gc.bitLength = 0;
    }
    if (value.has_cellIdentity_eutra_5gc) {
        std::free(value.cellIdentity_eutra_5gc.bytes);
        value.cellIdentity_eutra_5gc.bytes = nullptr;
        value.cellIdentity_eutra_5gc.bitLength = 0;
    }
    if (value.has_plmn_Identity_eutra_epc) {
        Free_PLMN_Identity(value.plmn_Identity_eutra_epc);
    }
    if (value.has_trackingAreaCode_eutra_epc) {
        std::free(value.trackingAreaCode_eutra_epc.bytes);
        value.trackingAreaCode_eutra_epc.bytes = nullptr;
        value.trackingAreaCode_eutra_epc.bitLength = 0;
    }
    if (value.has_cellIdentity_eutra_epc) {
        std::free(value.cellIdentity_eutra_epc.bytes);
        value.cellIdentity_eutra_epc.bytes = nullptr;
        value.cellIdentity_eutra_epc.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16：ASN.1 nr-RLF-Report-r16/previousPCellId-r16；源文件第 2949 行；CHOICE。
// Encode_RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16 只读不分配；Decode_RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16 可能 malloc（失败时内部已释放并清零）；Free_RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16(Encoder& enc, const RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16_Tag_nrPreviousCell_r16:
        Encode_CGI_Info_Logging_r16(enc, value.u.nrPreviousCell_r16);
        break;
    case RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16_Tag_eutraPreviousCell_r16:
        Encode_CGI_InfoEUTRALogging(enc, value.u.eutraPreviousCell_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16(Decoder& dec, RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16_Tag)root_index;
    switch (value.tag) {
    case RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16_Tag_nrPreviousCell_r16: {
        if (Decode_CGI_Info_Logging_r16(dec, value.u.nrPreviousCell_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16_Tag_eutraPreviousCell_r16: {
        if (Decode_CGI_InfoEUTRALogging(dec, value.u.eutraPreviousCell_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16(RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16& value)
{
    switch (value.tag) {
    case RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16_Tag_nrPreviousCell_r16:
        Free_CGI_Info_Logging_r16(value.u.nrPreviousCell_r16);
        break;
    case RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16_Tag_eutraPreviousCell_r16:
        Free_CGI_InfoEUTRALogging(value.u.eutraPreviousCell_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16：ASN.1 nr-RLF-Report-r16/failedPCellId-r16/nrFailedPCellId-r16；源文件第 2954 行；CHOICE。
// Encode_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16 只读不分配；Decode_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16 可能 malloc（失败时内部已释放并清零）；Free_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16(Encoder& enc, const RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16_Tag_cellGlobalId_r16:
        Encode_CGI_Info_Logging_r16(enc, value.u.cellGlobalId_r16);
        break;
    case RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16_Tag_pci_arfcn_r16:
        Encode_PCI_ARFCN_NR_r16(enc, value.u.pci_arfcn_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16(Decoder& dec, RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16_Tag)root_index;
    switch (value.tag) {
    case RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16_Tag_cellGlobalId_r16: {
        if (Decode_CGI_Info_Logging_r16(dec, value.u.cellGlobalId_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16_Tag_pci_arfcn_r16: {
        if (Decode_PCI_ARFCN_NR_r16(dec, value.u.pci_arfcn_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16(RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16& value)
{
    switch (value.tag) {
    case RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16_Tag_cellGlobalId_r16:
        Free_CGI_Info_Logging_r16(value.u.cellGlobalId_r16);
        break;
    case RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16_Tag_pci_arfcn_r16:
        Free_PCI_ARFCN_NR_r16(value.u.pci_arfcn_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16：ASN.1 nr-RLF-Report-r16/failedPCellId-r16/eutraFailedPCellId-r16；源文件第 2958 行；CHOICE。
// Encode_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16 只读不分配；Decode_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16 可能 malloc（失败时内部已释放并清零）；Free_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16(Encoder& enc, const RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16_Tag_cellGlobalId_r16:
        Encode_CGI_InfoEUTRALogging(enc, value.u.cellGlobalId_r16);
        break;
    case RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16_Tag_pci_arfcn_r16:
        Encode_PCI_ARFCN_EUTRA_r16(enc, value.u.pci_arfcn_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16(Decoder& dec, RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16_Tag)root_index;
    switch (value.tag) {
    case RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16_Tag_cellGlobalId_r16: {
        if (Decode_CGI_InfoEUTRALogging(dec, value.u.cellGlobalId_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16_Tag_pci_arfcn_r16: {
        if (Decode_PCI_ARFCN_EUTRA_r16(dec, value.u.pci_arfcn_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16(RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16& value)
{
    switch (value.tag) {
    case RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16_Tag_cellGlobalId_r16:
        Free_CGI_InfoEUTRALogging(value.u.cellGlobalId_r16);
        break;
    case RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16_Tag_pci_arfcn_r16:
        Free_PCI_ARFCN_EUTRA_r16(value.u.pci_arfcn_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16：ASN.1 nr-RLF-Report-r16/failedPCellId-r16；源文件第 2953 行；CHOICE。
// Encode_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16 只读不分配；Decode_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16 可能 malloc（失败时内部已释放并清零）；Free_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16(Encoder& enc, const RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_Tag_nrFailedPCellId_r16:
        Encode_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16(enc, value.u.nrFailedPCellId_r16);
        break;
    case RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_Tag_eutraFailedPCellId_r16:
        Encode_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16(enc, value.u.eutraFailedPCellId_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16(Decoder& dec, RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_Tag)root_index;
    switch (value.tag) {
    case RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_Tag_nrFailedPCellId_r16: {
        if (Decode_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16(dec, value.u.nrFailedPCellId_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_Tag_eutraFailedPCellId_r16: {
        if (Decode_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16(dec, value.u.eutraFailedPCellId_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16(RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16& value)
{
    switch (value.tag) {
    case RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_Tag_nrFailedPCellId_r16:
        Free_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16(value.u.nrFailedPCellId_r16);
        break;
    case RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_Tag_eutraFailedPCellId_r16:
        Free_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16(value.u.eutraFailedPCellId_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16：ASN.1 nr-RLF-Report-r16/reconnectCellId-r16；源文件第 2963 行；CHOICE。
// Encode_RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16 只读不分配；Decode_RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16 可能 malloc（失败时内部已释放并清零）；Free_RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16(Encoder& enc, const RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16_Tag_nrReconnectCellId_r16:
        Encode_CGI_Info_Logging_r16(enc, value.u.nrReconnectCellId_r16);
        break;
    case RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16_Tag_eutraReconnectCellId_r16:
        Encode_CGI_InfoEUTRALogging(enc, value.u.eutraReconnectCellId_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16(Decoder& dec, RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16_Tag)root_index;
    switch (value.tag) {
    case RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16_Tag_nrReconnectCellId_r16: {
        if (Decode_CGI_Info_Logging_r16(dec, value.u.nrReconnectCellId_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16_Tag_eutraReconnectCellId_r16: {
        if (Decode_CGI_InfoEUTRALogging(dec, value.u.eutraReconnectCellId_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16(RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16& value)
{
    switch (value.tag) {
    case RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16_Tag_nrReconnectCellId_r16:
        Free_CGI_Info_Logging_r16(value.u.nrReconnectCellId_r16);
        break;
    case RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16_Tag_eutraReconnectCellId_r16:
        Free_CGI_InfoEUTRALogging(value.u.eutraReconnectCellId_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLF_Report_r16_Nr_RLF_Report_r16：ASN.1 nr-RLF-Report-r16；源文件第 2942 行；SEQUENCE。
// Encode_RLF_Report_r16_Nr_RLF_Report_r16 只读不分配；Decode_RLF_Report_r16_Nr_RLF_Report_r16 可能 malloc（失败时内部已释放并清零）；Free_RLF_Report_r16_Nr_RLF_Report_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLF_Report_r16_Nr_RLF_Report_r16(Encoder& enc, const RLF_Report_r16_Nr_RLF_Report_r16& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_measResultNeighCells_r16);
    enc.WriteBit(value.has_previousPCellId_r16);
    enc.WriteBit(value.has_reconnectCellId_r16);
    enc.WriteBit(value.has_timeUntilReconnection_r16);
    enc.WriteBit(value.has_reestablishmentCellId_r16);
    enc.WriteBit(value.has_timeConnFailure_r16);
    enc.WriteBit(value.has_locationInfo_r16);
    enc.WriteBit(value.has_noSuitableCellFound_r16);
    enc.WriteBit(value.has_ra_InformationCommon_r16);
    Encode_MeasResultRLFNR_r16(enc, value.measResultLastServCell_r16);
    if (value.has_measResultNeighCells_r16) {
        Encode_RLF_Report_r16_Nr_RLF_Report_r16_MeasResultNeighCells_r16(enc, value.measResultNeighCells_r16);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.c_RNTI_r16), 0, 65535);
    if (value.has_previousPCellId_r16) {
        Encode_RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16(enc, value.previousPCellId_r16);
    }
    Encode_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16(enc, value.failedPCellId_r16);
    if (value.has_reconnectCellId_r16) {
        Encode_RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16(enc, value.reconnectCellId_r16);
    }
    if (value.has_timeUntilReconnection_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.timeUntilReconnection_r16), 0, 172800);
    }
    if (value.has_reestablishmentCellId_r16) {
        Encode_CGI_Info_Logging_r16(enc, value.reestablishmentCellId_r16);
    }
    if (value.has_timeConnFailure_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.timeConnFailure_r16), 0, 1023);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.timeSinceFailure_r16), 0, 172800);
    enc.WriteConstrainedInteger((std::int64_t)(value.connectionFailureType_r16), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.rlf_Cause_r16), 0, 7);
    if (value.has_locationInfo_r16) {
        Encode_LocationInfo_r16(enc, value.locationInfo_r16);
    }
    if (value.has_noSuitableCellFound_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.noSuitableCellFound_r16), 0, 0);
    }
    if (value.has_ra_InformationCommon_r16) {
        Encode_RA_InformationCommon_r16(enc, value.ra_InformationCommon_r16);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_RLF_Report_r16_Nr_RLF_Report_r16(Decoder& dec, RLF_Report_r16_Nr_RLF_Report_r16& value)
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
    {
        if (Decode_MeasResultRLFNR_r16(dec, value.measResultLastServCell_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_RLF_Report_r16_Nr_RLF_Report_r16_MeasResultNeighCells_r16(dec, value.measResultNeighCells_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.c_RNTI_r16 = (RNTI_Value)tmp_value;
    }
    if (present_1) {
        if (Decode_RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16(dec, value.previousPCellId_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16(dec, value.failedPCellId_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16(dec, value.reconnectCellId_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 172800, tmp_value)) { goto fail; }
        value.timeUntilReconnection_r16 = (TimeUntilReconnection_r16)tmp_value;
    }
    if (present_4) {
        if (Decode_CGI_Info_Logging_r16(dec, value.reestablishmentCellId_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.timeConnFailure_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 172800, tmp_value)) { goto fail; }
        value.timeSinceFailure_r16 = (TimeSinceFailure_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.connectionFailureType_r16 = (RLF_Report_r16_Nr_RLF_Report_r16_ConnectionFailureType_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.rlf_Cause_r16 = (RLF_Report_r16_Nr_RLF_Report_r16_Rlf_Cause_r16)tmp_value;
    }
    if (present_6) {
        if (Decode_LocationInfo_r16(dec, value.locationInfo_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        value.noSuitableCellFound_r16 = (RLF_Report_r16_Nr_RLF_Report_r16_NoSuitableCellFound_r16)0;
    }
    if (present_8) {
        if (Decode_RA_InformationCommon_r16(dec, value.ra_InformationCommon_r16) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    Free_RLF_Report_r16_Nr_RLF_Report_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLF_Report_r16_Nr_RLF_Report_r16(RLF_Report_r16_Nr_RLF_Report_r16& value)
{
    Free_MeasResultRLFNR_r16(value.measResultLastServCell_r16);
    if (value.has_measResultNeighCells_r16) {
        Free_RLF_Report_r16_Nr_RLF_Report_r16_MeasResultNeighCells_r16(value.measResultNeighCells_r16);
    }
    if (value.has_previousPCellId_r16) {
        Free_RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16(value.previousPCellId_r16);
    }
    Free_RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16(value.failedPCellId_r16);
    if (value.has_reconnectCellId_r16) {
        Free_RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16(value.reconnectCellId_r16);
    }
    if (value.has_timeUntilReconnection_r16) {
    }
    if (value.has_reestablishmentCellId_r16) {
        Free_CGI_Info_Logging_r16(value.reestablishmentCellId_r16);
    }
    if (value.has_timeConnFailure_r16) {
    }
    if (value.has_locationInfo_r16) {
        Free_LocationInfo_r16(value.locationInfo_r16);
    }
    if (value.has_noSuitableCellFound_r16) {
    }
    if (value.has_ra_InformationCommon_r16) {
        Free_RA_InformationCommon_r16(value.ra_InformationCommon_r16);
    }
    if (value.has_extGroup1) {
        Free_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLF_Report_r16_Eutra_RLF_Report_r16_ExtGroup1：ASN.1 RLF_Report_r16_Eutra_RLF_Report_r16_ExtGroup1；源文件第 3015 行；扩展添加组 [[ ]]。
// Encode_RLF_Report_r16_Eutra_RLF_Report_r16_ExtGroup1 只读不分配；Decode_RLF_Report_r16_Eutra_RLF_Report_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_RLF_Report_r16_Eutra_RLF_Report_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLF_Report_r16_Eutra_RLF_Report_r16_ExtGroup1(Encoder& enc, const RLF_Report_r16_Eutra_RLF_Report_r16_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_measResult_RLF_Report_EUTRA_v1690);
    if (value.has_measResult_RLF_Report_EUTRA_v1690) {
        enc.WriteSemiConstrainedOctetString(value.measResult_RLF_Report_EUTRA_v1690.bytes, value.measResult_RLF_Report_EUTRA_v1690.length, 0, 0xFFFFFFFFu);
    }
    return enc.Error();
}

ErrorCode Decode_RLF_Report_r16_Eutra_RLF_Report_r16_ExtGroup1(Decoder& dec, RLF_Report_r16_Eutra_RLF_Report_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.measResult_RLF_Report_EUTRA_v1690.bytes = string_bytes;
        value.measResult_RLF_Report_EUTRA_v1690.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLF_Report_r16_Eutra_RLF_Report_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLF_Report_r16_Eutra_RLF_Report_r16_ExtGroup1(RLF_Report_r16_Eutra_RLF_Report_r16_ExtGroup1& value)
{
    if (value.has_measResult_RLF_Report_EUTRA_v1690) {
        std::free(value.measResult_RLF_Report_EUTRA_v1690.bytes);
        value.measResult_RLF_Report_EUTRA_v1690.bytes = nullptr;
        value.measResult_RLF_Report_EUTRA_v1690.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLF_Report_r16_Eutra_RLF_Report_r16：ASN.1 eutra-RLF-Report-r16；源文件第 3011 行；SEQUENCE。
// Encode_RLF_Report_r16_Eutra_RLF_Report_r16 只读不分配；Decode_RLF_Report_r16_Eutra_RLF_Report_r16 可能 malloc（失败时内部已释放并清零）；Free_RLF_Report_r16_Eutra_RLF_Report_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLF_Report_r16_Eutra_RLF_Report_r16(Encoder& enc, const RLF_Report_r16_Eutra_RLF_Report_r16& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    Encode_CGI_InfoEUTRALogging(enc, value.failedPCellId_EUTRA);
    enc.WriteSemiConstrainedOctetString(value.measResult_RLF_Report_EUTRA_r16.bytes, value.measResult_RLF_Report_EUTRA_r16.length, 0, 0xFFFFFFFFu);
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_RLF_Report_r16_Eutra_RLF_Report_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_RLF_Report_r16_Eutra_RLF_Report_r16(Decoder& dec, RLF_Report_r16_Eutra_RLF_Report_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
        if (Decode_CGI_InfoEUTRALogging(dec, value.failedPCellId_EUTRA) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.measResult_RLF_Report_EUTRA_r16.bytes = string_bytes;
        value.measResult_RLF_Report_EUTRA_r16.length = string_length;
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
    if (Decode_RLF_Report_r16_Eutra_RLF_Report_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_RLF_Report_r16_Eutra_RLF_Report_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLF_Report_r16_Eutra_RLF_Report_r16(RLF_Report_r16_Eutra_RLF_Report_r16& value)
{
    Free_CGI_InfoEUTRALogging(value.failedPCellId_EUTRA);
    std::free(value.measResult_RLF_Report_EUTRA_r16.bytes);
    value.measResult_RLF_Report_EUTRA_r16.bytes = nullptr;
    value.measResult_RLF_Report_EUTRA_r16.length = 0;
    if (value.has_extGroup1) {
        Free_RLF_Report_r16_Eutra_RLF_Report_r16_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RLF_Report_r16：ASN.1 RLF-Report-r16；源文件第 2941 行；CHOICE。
// Encode_RLF_Report_r16 只读不分配；Decode_RLF_Report_r16 可能 malloc（失败时内部已释放并清零）；Free_RLF_Report_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RLF_Report_r16(Encoder& enc, const RLF_Report_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RLF_Report_r16_Tag_nr_RLF_Report_r16:
        Encode_RLF_Report_r16_Nr_RLF_Report_r16(enc, value.u.nr_RLF_Report_r16);
        break;
    case RLF_Report_r16_Tag_eutra_RLF_Report_r16:
        Encode_RLF_Report_r16_Eutra_RLF_Report_r16(enc, value.u.eutra_RLF_Report_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RLF_Report_r16(Decoder& dec, RLF_Report_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RLF_Report_r16_Tag)root_index;
    switch (value.tag) {
    case RLF_Report_r16_Tag_nr_RLF_Report_r16: {
        if (Decode_RLF_Report_r16_Nr_RLF_Report_r16(dec, value.u.nr_RLF_Report_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RLF_Report_r16_Tag_eutra_RLF_Report_r16: {
        if (Decode_RLF_Report_r16_Eutra_RLF_Report_r16(dec, value.u.eutra_RLF_Report_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLF_Report_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLF_Report_r16(RLF_Report_r16& value)
{
    switch (value.tag) {
    case RLF_Report_r16_Tag_nr_RLF_Report_r16:
        Free_RLF_Report_r16_Nr_RLF_Report_r16(value.u.nr_RLF_Report_r16);
        break;
    case RLF_Report_r16_Tag_eutra_RLF_Report_r16:
        Free_RLF_Report_r16_Eutra_RLF_Report_r16(value.u.eutra_RLF_Report_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// VisitedCellInfoList_r16：ASN.1 VisitedCellInfoList-r16；源文件第 21847 行；SEQUENCE OF。
// Encode_VisitedCellInfoList_r16 只读不分配；Decode_VisitedCellInfoList_r16 可能 malloc（失败时内部已释放并清零）；Free_VisitedCellInfoList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_VisitedCellInfoList_r16(Encoder& enc, const VisitedCellInfoList_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_VisitedCellInfo_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_VisitedCellInfoList_r16(Decoder& dec, VisitedCellInfoList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (VisitedCellInfo_r16*)std::malloc((std::size_t)value.count * sizeof(VisitedCellInfo_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(VisitedCellInfo_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_VisitedCellInfo_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_VisitedCellInfoList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_VisitedCellInfoList_r16(VisitedCellInfoList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_VisitedCellInfo_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEInformationResponse_r16_IEs：ASN.1 UEInformationResponse-r16-IEs；源文件第 2696 行；SEQUENCE。
// Encode_UEInformationResponse_r16_IEs 只读不分配；Decode_UEInformationResponse_r16_IEs 可能 malloc（失败时内部已释放并清零）；Free_UEInformationResponse_r16_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEInformationResponse_r16_IEs(Encoder& enc, const UEInformationResponse_r16_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_measResultIdleEUTRA_r16);
    enc.WriteBit(value.has_measResultIdleNR_r16);
    enc.WriteBit(value.has_logMeasReport_r16);
    enc.WriteBit(value.has_connEstFailReport_r16);
    enc.WriteBit(value.has_ra_ReportList_r16);
    enc.WriteBit(value.has_rlf_Report_r16);
    enc.WriteBit(value.has_mobilityHistoryReport_r16);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_measResultIdleEUTRA_r16) {
        Encode_MeasResultIdleEUTRA_r16(enc, value.measResultIdleEUTRA_r16);
    }
    if (value.has_measResultIdleNR_r16) {
        Encode_MeasResultIdleNR_r16(enc, value.measResultIdleNR_r16);
    }
    if (value.has_logMeasReport_r16) {
        Encode_LogMeasReport_r16(enc, value.logMeasReport_r16);
    }
    if (value.has_connEstFailReport_r16) {
        Encode_ConnEstFailReport_r16(enc, value.connEstFailReport_r16);
    }
    if (value.has_ra_ReportList_r16) {
        Encode_RA_ReportList_r16(enc, value.ra_ReportList_r16);
    }
    if (value.has_rlf_Report_r16) {
        Encode_RLF_Report_r16(enc, value.rlf_Report_r16);
    }
    if (value.has_mobilityHistoryReport_r16) {
        Encode_VisitedCellInfoList_r16(enc, value.mobilityHistoryReport_r16);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UEInformationResponse_v1700_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UEInformationResponse_r16_IEs(Decoder& dec, UEInformationResponse_r16_IEs& value)
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
        if (Decode_MeasResultIdleEUTRA_r16(dec, value.measResultIdleEUTRA_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MeasResultIdleNR_r16(dec, value.measResultIdleNR_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_LogMeasReport_r16(dec, value.logMeasReport_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_ConnEstFailReport_r16(dec, value.connEstFailReport_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_RA_ReportList_r16(dec, value.ra_ReportList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_RLF_Report_r16(dec, value.rlf_Report_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_VisitedCellInfoList_r16(dec, value.mobilityHistoryReport_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_8) {
        if (Decode_UEInformationResponse_v1700_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UEInformationResponse_r16_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEInformationResponse_r16_IEs(UEInformationResponse_r16_IEs& value)
{
    if (value.has_measResultIdleEUTRA_r16) {
        Free_MeasResultIdleEUTRA_r16(value.measResultIdleEUTRA_r16);
    }
    if (value.has_measResultIdleNR_r16) {
        Free_MeasResultIdleNR_r16(value.measResultIdleNR_r16);
    }
    if (value.has_logMeasReport_r16) {
        Free_LogMeasReport_r16(value.logMeasReport_r16);
    }
    if (value.has_connEstFailReport_r16) {
        Free_ConnEstFailReport_r16(value.connEstFailReport_r16);
    }
    if (value.has_ra_ReportList_r16) {
        Free_RA_ReportList_r16(value.ra_ReportList_r16);
    }
    if (value.has_rlf_Report_r16) {
        Free_RLF_Report_r16(value.rlf_Report_r16);
    }
    if (value.has_mobilityHistoryReport_r16) {
        Free_VisitedCellInfoList_r16(value.mobilityHistoryReport_r16);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_UEInformationResponse_v1700_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEInformationResponse_r16_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 2692 行；空 SEQUENCE{}。
// Encode_UEInformationResponse_r16_CriticalExtensionsFuture 只读不分配；Decode_UEInformationResponse_r16_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_UEInformationResponse_r16_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEInformationResponse_r16_CriticalExtensionsFuture(Encoder& enc, const UEInformationResponse_r16_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_UEInformationResponse_r16_CriticalExtensionsFuture(Decoder& dec, UEInformationResponse_r16_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEInformationResponse_r16_CriticalExtensionsFuture(UEInformationResponse_r16_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEInformationResponse_r16_CriticalExtensions：ASN.1 criticalExtensions；源文件第 2690 行；CHOICE。
// Encode_UEInformationResponse_r16_CriticalExtensions 只读不分配；Decode_UEInformationResponse_r16_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_UEInformationResponse_r16_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEInformationResponse_r16_CriticalExtensions(Encoder& enc, const UEInformationResponse_r16_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case UEInformationResponse_r16_CriticalExtensions_Tag_ueInformationResponse_r16:
        Encode_UEInformationResponse_r16_IEs(enc, value.u.ueInformationResponse_r16);
        break;
    case UEInformationResponse_r16_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_UEInformationResponse_r16_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_UEInformationResponse_r16_CriticalExtensions(Decoder& dec, UEInformationResponse_r16_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (UEInformationResponse_r16_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case UEInformationResponse_r16_CriticalExtensions_Tag_ueInformationResponse_r16: {
        if (Decode_UEInformationResponse_r16_IEs(dec, value.u.ueInformationResponse_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case UEInformationResponse_r16_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_UEInformationResponse_r16_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UEInformationResponse_r16_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEInformationResponse_r16_CriticalExtensions(UEInformationResponse_r16_CriticalExtensions& value)
{
    switch (value.tag) {
    case UEInformationResponse_r16_CriticalExtensions_Tag_ueInformationResponse_r16:
        Free_UEInformationResponse_r16_IEs(value.u.ueInformationResponse_r16);
        break;
    case UEInformationResponse_r16_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_UEInformationResponse_r16_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEInformationResponse_r16：ASN.1 UEInformationResponse-r16；源文件第 2688 行；SEQUENCE。
// Encode_UEInformationResponse_r16 只读不分配；Decode_UEInformationResponse_r16 可能 malloc（失败时内部已释放并清零）；Free_UEInformationResponse_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEInformationResponse_r16(Encoder& enc, const UEInformationResponse_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.rrc_TransactionIdentifier), 0, 3);
    Encode_UEInformationResponse_r16_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_UEInformationResponse_r16(Decoder& dec, UEInformationResponse_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.rrc_TransactionIdentifier = (RRC_TransactionIdentifier)tmp_value;
    }
    {
        if (Decode_UEInformationResponse_r16_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UEInformationResponse_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEInformationResponse_r16(UEInformationResponse_r16& value)
{
    Free_UEInformationResponse_r16_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// WayPoint_r18：ASN.1 WayPoint-r18；源文件第 2724 行；SEQUENCE。
// Encode_WayPoint_r18 只读不分配；Decode_WayPoint_r18 可能 malloc（失败时内部已释放并清零）；Free_WayPoint_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_WayPoint_r18(Encoder& enc, const WayPoint_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_timeStamp_r18);
    enc.WriteSemiConstrainedOctetString(value.wayPointLocation_r18.bytes, value.wayPointLocation_r18.length, 0, 0xFFFFFFFFu);
    if (value.has_timeStamp_r18) {
        enc.WriteFixedBitString(value.timeStamp_r18.bytes, value.timeStamp_r18.bitLength, 48, 48);
    }
    return enc.Error();
}

ErrorCode Decode_WayPoint_r18(Decoder& dec, WayPoint_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.wayPointLocation_r18.bytes = string_bytes;
        value.wayPointLocation_r18.length = string_length;
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 48)) { goto fail; }
        string_length = 48;
        value.timeStamp_r18.bytes = string_bytes;
        value.timeStamp_r18.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_WayPoint_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_WayPoint_r18(WayPoint_r18& value)
{
    std::free(value.wayPointLocation_r18.bytes);
    value.wayPointLocation_r18.bytes = nullptr;
    value.wayPointLocation_r18.length = 0;
    if (value.has_timeStamp_r18) {
        std::free(value.timeStamp_r18.bytes);
        value.timeStamp_r18.bytes = nullptr;
        value.timeStamp_r18.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LogMeasInfo_r16_ExtGroup1：ASN.1 LogMeasInfo_r16_ExtGroup1；源文件第 2754 行；扩展添加组 [[ ]]。
// Encode_LogMeasInfo_r16_ExtGroup1 只读不分配；Decode_LogMeasInfo_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_LogMeasInfo_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LogMeasInfo_r16_ExtGroup1(Encoder& enc, const LogMeasInfo_r16_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_inDeviceCoexDetected_r17);
    if (value.has_inDeviceCoexDetected_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.inDeviceCoexDetected_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_LogMeasInfo_r16_ExtGroup1(Decoder& dec, LogMeasInfo_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.inDeviceCoexDetected_r17 = (LogMeasInfo_r16_ExtGroup1_InDeviceCoexDetected_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_LogMeasInfo_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LogMeasInfo_r16_ExtGroup1(LogMeasInfo_r16_ExtGroup1& value)
{
    if (value.has_inDeviceCoexDetected_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultServingCell_r16_ResultsSSB：ASN.1 resultsSSB；源文件第 2776 行；SEQUENCE。
// Encode_MeasResultServingCell_r16_ResultsSSB 只读不分配；Decode_MeasResultServingCell_r16_ResultsSSB 可能 malloc（失败时内部已释放并清零）；Free_MeasResultServingCell_r16_ResultsSSB 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultServingCell_r16_ResultsSSB(Encoder& enc, const MeasResultServingCell_r16_ResultsSSB& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.best_ssb_Index), 0, 63);
    Encode_MeasQuantityResults(enc, value.best_ssb_Results);
    enc.WriteConstrainedInteger((std::int64_t)(value.numberOfGoodSSB), 1, 64);
    return enc.Error();
}

ErrorCode Decode_MeasResultServingCell_r16_ResultsSSB(Decoder& dec, MeasResultServingCell_r16_ResultsSSB& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.best_ssb_Index = (SSB_Index)tmp_value;
    }
    {
        if (Decode_MeasQuantityResults(dec, value.best_ssb_Results) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.numberOfGoodSSB = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultServingCell_r16_ResultsSSB(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultServingCell_r16_ResultsSSB(MeasResultServingCell_r16_ResultsSSB& value)
{
    Free_MeasQuantityResults(value.best_ssb_Results);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultServingCell_r16：ASN.1 MeasResultServingCell-r16；源文件第 2774 行；SEQUENCE。
// Encode_MeasResultServingCell_r16 只读不分配；Decode_MeasResultServingCell_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultServingCell_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultServingCell_r16(Encoder& enc, const MeasResultServingCell_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_resultsSSB);
    Encode_MeasQuantityResults(enc, value.resultsSSB_Cell);
    if (value.has_resultsSSB) {
        Encode_MeasResultServingCell_r16_ResultsSSB(enc, value.resultsSSB);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultServingCell_r16(Decoder& dec, MeasResultServingCell_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_MeasQuantityResults(dec, value.resultsSSB_Cell) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_MeasResultServingCell_r16_ResultsSSB(dec, value.resultsSSB) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultServingCell_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultServingCell_r16(MeasResultServingCell_r16& value)
{
    Free_MeasQuantityResults(value.resultsSSB_Cell);
    if (value.has_resultsSSB) {
        Free_MeasResultServingCell_r16_ResultsSSB(value.resultsSSB);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultListLogging2NR_r16：ASN.1 MeasResultListLogging2NR-r16；源文件第 3103 行；SEQUENCE OF。
// Encode_MeasResultListLogging2NR_r16 只读不分配；Decode_MeasResultListLogging2NR_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultListLogging2NR_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultListLogging2NR_r16(Encoder& enc, const MeasResultListLogging2NR_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MeasResultLogging2NR_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultListLogging2NR_r16(Decoder& dec, MeasResultListLogging2NR_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MeasResultLogging2NR_r16*)std::malloc((std::size_t)value.count * sizeof(MeasResultLogging2NR_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResultLogging2NR_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MeasResultLogging2NR_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultListLogging2NR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultListLogging2NR_r16(MeasResultListLogging2NR_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MeasResultLogging2NR_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LogMeasInfo_r16_MeasResultNeighCells_r16：ASN.1 measResultNeighCells-r16；源文件第 2748 行；SEQUENCE。
// Encode_LogMeasInfo_r16_MeasResultNeighCells_r16 只读不分配；Decode_LogMeasInfo_r16_MeasResultNeighCells_r16 可能 malloc（失败时内部已释放并清零）；Free_LogMeasInfo_r16_MeasResultNeighCells_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LogMeasInfo_r16_MeasResultNeighCells_r16(Encoder& enc, const LogMeasInfo_r16_MeasResultNeighCells_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_measResultNeighCellListNR);
    enc.WriteBit(value.has_measResultNeighCellListEUTRA);
    if (value.has_measResultNeighCellListNR) {
        Encode_MeasResultListLogging2NR_r16(enc, value.measResultNeighCellListNR);
    }
    if (value.has_measResultNeighCellListEUTRA) {
        Encode_MeasResultList2EUTRA_r16(enc, value.measResultNeighCellListEUTRA);
    }
    return enc.Error();
}

ErrorCode Decode_LogMeasInfo_r16_MeasResultNeighCells_r16(Decoder& dec, LogMeasInfo_r16_MeasResultNeighCells_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MeasResultListLogging2NR_r16(dec, value.measResultNeighCellListNR) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MeasResultList2EUTRA_r16(dec, value.measResultNeighCellListEUTRA) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_LogMeasInfo_r16_MeasResultNeighCells_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LogMeasInfo_r16_MeasResultNeighCells_r16(LogMeasInfo_r16_MeasResultNeighCells_r16& value)
{
    if (value.has_measResultNeighCellListNR) {
        Free_MeasResultListLogging2NR_r16(value.measResultNeighCellListNR);
    }
    if (value.has_measResultNeighCellListEUTRA) {
        Free_MeasResultList2EUTRA_r16(value.measResultNeighCellListEUTRA);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LogMeasInfo_r16：ASN.1 LogMeasInfo-r16；源文件第 2743 行；SEQUENCE。
// Encode_LogMeasInfo_r16 只读不分配；Decode_LogMeasInfo_r16 可能 malloc（失败时内部已释放并清零）；Free_LogMeasInfo_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LogMeasInfo_r16(Encoder& enc, const LogMeasInfo_r16& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_locationInfo_r16);
    enc.WriteBit(value.has_servCellIdentity_r16);
    enc.WriteBit(value.has_measResultServingCell_r16);
    enc.WriteBit(value.has_anyCellSelectionDetected_r16);
    if (value.has_locationInfo_r16) {
        Encode_LocationInfo_r16(enc, value.locationInfo_r16);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.relativeTimeStamp_r16), 0, 7200);
    if (value.has_servCellIdentity_r16) {
        Encode_CGI_Info_Logging_r16(enc, value.servCellIdentity_r16);
    }
    if (value.has_measResultServingCell_r16) {
        Encode_MeasResultServingCell_r16(enc, value.measResultServingCell_r16);
    }
    Encode_LogMeasInfo_r16_MeasResultNeighCells_r16(enc, value.measResultNeighCells_r16);
    if (value.has_anyCellSelectionDetected_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.anyCellSelectionDetected_r16), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_LogMeasInfo_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_LogMeasInfo_r16(Decoder& dec, LogMeasInfo_r16& value)
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
        if (Decode_LocationInfo_r16(dec, value.locationInfo_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7200, tmp_value)) { goto fail; }
        value.relativeTimeStamp_r16 = (int64_t)tmp_value;
    }
    if (present_1) {
        if (Decode_CGI_Info_Logging_r16(dec, value.servCellIdentity_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_MeasResultServingCell_r16(dec, value.measResultServingCell_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_LogMeasInfo_r16_MeasResultNeighCells_r16(dec, value.measResultNeighCells_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        value.anyCellSelectionDetected_r16 = (LogMeasInfo_r16_AnyCellSelectionDetected_r16)0;
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
    if (Decode_LogMeasInfo_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_LogMeasInfo_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LogMeasInfo_r16(LogMeasInfo_r16& value)
{
    if (value.has_locationInfo_r16) {
        Free_LocationInfo_r16(value.locationInfo_r16);
    }
    if (value.has_servCellIdentity_r16) {
        Free_CGI_Info_Logging_r16(value.servCellIdentity_r16);
    }
    if (value.has_measResultServingCell_r16) {
        Free_MeasResultServingCell_r16(value.measResultServingCell_r16);
    }
    Free_LogMeasInfo_r16_MeasResultNeighCells_r16(value.measResultNeighCells_r16);
    if (value.has_anyCellSelectionDetected_r16) {
    }
    if (value.has_extGroup1) {
        Free_LogMeasInfo_r16_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RA_Report_r16_ExtGroup1：ASN.1 RA_Report_r16_ExtGroup1；源文件第 2808 行；扩展添加组 [[ ]]。
// Encode_RA_Report_r16_ExtGroup1 只读不分配；Decode_RA_Report_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_RA_Report_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RA_Report_r16_ExtGroup1(Encoder& enc, const RA_Report_r16_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_spCellID_r17);
    if (value.has_spCellID_r17) {
        Encode_CGI_Info_Logging_r16(enc, value.spCellID_r17);
    }
    return enc.Error();
}

ErrorCode Decode_RA_Report_r16_ExtGroup1(Decoder& dec, RA_Report_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_CGI_Info_Logging_r16(dec, value.spCellID_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RA_Report_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RA_Report_r16_ExtGroup1(RA_Report_r16_ExtGroup1& value)
{
    if (value.has_spCellID_r17) {
        Free_CGI_Info_Logging_r16(value.spCellID_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RA_Report_r16_CellId_r16：ASN.1 cellId-r16；源文件第 2798 行；CHOICE。
// Encode_RA_Report_r16_CellId_r16 只读不分配；Decode_RA_Report_r16_CellId_r16 可能 malloc（失败时内部已释放并清零）；Free_RA_Report_r16_CellId_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RA_Report_r16_CellId_r16(Encoder& enc, const RA_Report_r16_CellId_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RA_Report_r16_CellId_r16_Tag_cellGlobalId_r16:
        Encode_CGI_Info_Logging_r16(enc, value.u.cellGlobalId_r16);
        break;
    case RA_Report_r16_CellId_r16_Tag_pci_arfcn_r16:
        Encode_PCI_ARFCN_NR_r16(enc, value.u.pci_arfcn_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RA_Report_r16_CellId_r16(Decoder& dec, RA_Report_r16_CellId_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RA_Report_r16_CellId_r16_Tag)root_index;
    switch (value.tag) {
    case RA_Report_r16_CellId_r16_Tag_cellGlobalId_r16: {
        if (Decode_CGI_Info_Logging_r16(dec, value.u.cellGlobalId_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case RA_Report_r16_CellId_r16_Tag_pci_arfcn_r16: {
        if (Decode_PCI_ARFCN_NR_r16(dec, value.u.pci_arfcn_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RA_Report_r16_CellId_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RA_Report_r16_CellId_r16(RA_Report_r16_CellId_r16& value)
{
    switch (value.tag) {
    case RA_Report_r16_CellId_r16_Tag_cellGlobalId_r16:
        Free_CGI_Info_Logging_r16(value.u.cellGlobalId_r16);
        break;
    case RA_Report_r16_CellId_r16_Tag_pci_arfcn_r16:
        Free_PCI_ARFCN_NR_r16(value.u.pci_arfcn_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RA_Report_r16：ASN.1 RA-Report-r16；源文件第 2797 行；SEQUENCE。
// Encode_RA_Report_r16 只读不分配；Decode_RA_Report_r16 可能 malloc（失败时内部已释放并清零）；Free_RA_Report_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RA_Report_r16(Encoder& enc, const RA_Report_r16& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_ra_InformationCommon_r16);
    Encode_RA_Report_r16_CellId_r16(enc, value.cellId_r16);
    if (value.has_ra_InformationCommon_r16) {
        Encode_RA_InformationCommon_r16(enc, value.ra_InformationCommon_r16);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.raPurpose_r16), 0, 15);
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_RA_Report_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_RA_Report_r16(Decoder& dec, RA_Report_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_RA_Report_r16_CellId_r16(dec, value.cellId_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_RA_InformationCommon_r16(dec, value.ra_InformationCommon_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.raPurpose_r16 = (RA_Report_r16_RaPurpose_r16)tmp_value;
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
    if (Decode_RA_Report_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_RA_Report_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RA_Report_r16(RA_Report_r16& value)
{
    Free_RA_Report_r16_CellId_r16(value.cellId_r16);
    if (value.has_ra_InformationCommon_r16) {
        Free_RA_InformationCommon_r16(value.ra_InformationCommon_r16);
    }
    if (value.has_extGroup1) {
        Free_RA_Report_r16_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PerRAAttemptInfoList_r16：ASN.1 PerRAAttemptInfoList-r16；源文件第 2923 行；SEQUENCE OF。
// Encode_PerRAAttemptInfoList_r16 只读不分配；Decode_PerRAAttemptInfoList_r16 可能 malloc（失败时内部已释放并清零）；Free_PerRAAttemptInfoList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PerRAAttemptInfoList_r16(Encoder& enc, const PerRAAttemptInfoList_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 200u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PerRAAttemptInfo_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_PerRAAttemptInfoList_r16(Decoder& dec, PerRAAttemptInfoList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 200u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 200u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PerRAAttemptInfo_r16*)std::malloc((std::size_t)value.count * sizeof(PerRAAttemptInfo_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PerRAAttemptInfo_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PerRAAttemptInfo_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_PerRAAttemptInfoList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PerRAAttemptInfoList_r16(PerRAAttemptInfoList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PerRAAttemptInfo_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PerRASSBInfo_r16：ASN.1 PerRASSBInfo-r16；源文件第 2896 行；SEQUENCE。
// Encode_PerRASSBInfo_r16 只读不分配；Decode_PerRASSBInfo_r16 可能 malloc（失败时内部已释放并清零）；Free_PerRASSBInfo_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PerRASSBInfo_r16(Encoder& enc, const PerRASSBInfo_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.ssb_Index_r16), 0, 63);
    enc.WriteConstrainedInteger((std::int64_t)(value.numberOfPreamblesSentOnSSB_r16), 1, 200);
    Encode_PerRAAttemptInfoList_r16(enc, value.perRAAttemptInfoList_r16);
    return enc.Error();
}

ErrorCode Decode_PerRASSBInfo_r16(Decoder& dec, PerRASSBInfo_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.ssb_Index_r16 = (SSB_Index)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 200, tmp_value)) { goto fail; }
        value.numberOfPreamblesSentOnSSB_r16 = (int64_t)tmp_value;
    }
    {
        if (Decode_PerRAAttemptInfoList_r16(dec, value.perRAAttemptInfoList_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PerRASSBInfo_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PerRASSBInfo_r16(PerRASSBInfo_r16& value)
{
    Free_PerRAAttemptInfoList_r16(value.perRAAttemptInfoList_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PerRACSI_RSInfo_r16：ASN.1 PerRACSI-RSInfo-r16；源文件第 2908 行；SEQUENCE。
// Encode_PerRACSI_RSInfo_r16 只读不分配；Decode_PerRACSI_RSInfo_r16 可能 malloc（失败时内部已释放并清零）；Free_PerRACSI_RSInfo_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PerRACSI_RSInfo_r16(Encoder& enc, const PerRACSI_RSInfo_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.csi_RS_Index_r16), 0, 95);
    enc.WriteConstrainedInteger((std::int64_t)(value.numberOfPreamblesSentOnCSI_RS_r16), 1, 200);
    return enc.Error();
}

ErrorCode Decode_PerRACSI_RSInfo_r16(Decoder& dec, PerRACSI_RSInfo_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 95, tmp_value)) { goto fail; }
        value.csi_RS_Index_r16 = (CSI_RS_Index)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 200, tmp_value)) { goto fail; }
        value.numberOfPreamblesSentOnCSI_RS_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PerRACSI_RSInfo_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PerRACSI_RSInfo_r16(PerRACSI_RSInfo_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PerRAInfo_r16：ASN.1 PerRAInfo-r16；源文件第 2884 行；CHOICE。
// Encode_PerRAInfo_r16 只读不分配；Decode_PerRAInfo_r16 可能 malloc（失败时内部已释放并清零）；Free_PerRAInfo_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PerRAInfo_r16(Encoder& enc, const PerRAInfo_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case PerRAInfo_r16_Tag_perRASSBInfoList_r16:
        Encode_PerRASSBInfo_r16(enc, value.u.perRASSBInfoList_r16);
        break;
    case PerRAInfo_r16_Tag_perRACSI_RSInfoList_r16:
        Encode_PerRACSI_RSInfo_r16(enc, value.u.perRACSI_RSInfoList_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PerRAInfo_r16(Decoder& dec, PerRAInfo_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (PerRAInfo_r16_Tag)root_index;
    switch (value.tag) {
    case PerRAInfo_r16_Tag_perRASSBInfoList_r16: {
        if (Decode_PerRASSBInfo_r16(dec, value.u.perRASSBInfoList_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PerRAInfo_r16_Tag_perRACSI_RSInfoList_r16: {
        if (Decode_PerRACSI_RSInfo_r16(dec, value.u.perRACSI_RSInfoList_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PerRAInfo_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PerRAInfo_r16(PerRAInfo_r16& value)
{
    switch (value.tag) {
    case PerRAInfo_r16_Tag_perRASSBInfoList_r16:
        Free_PerRASSBInfo_r16(value.u.perRASSBInfoList_r16);
        break;
    case PerRAInfo_r16_Tag_perRACSI_RSInfoList_r16:
        Free_PerRACSI_RSInfo_r16(value.u.perRACSI_RSInfoList_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PerRASSBInfo_v1800：ASN.1 PerRASSBInfo-v1800；源文件第 2902 行；SEQUENCE。
// Encode_PerRASSBInfo_v1800 只读不分配；Decode_PerRASSBInfo_v1800 可能 malloc（失败时内部已释放并清零）；Free_PerRASSBInfo_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PerRASSBInfo_v1800(Encoder& enc, const PerRASSBInfo_v1800& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_allPreamblesBlocked);
    enc.WriteBit(value.has_lbt_Detected_r18);
    if (value.has_allPreamblesBlocked) {
        enc.WriteConstrainedInteger((std::int64_t)(value.allPreamblesBlocked), 0, 0);
    }
    if (value.has_lbt_Detected_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.lbt_Detected_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PerRASSBInfo_v1800(Decoder& dec, PerRASSBInfo_v1800& value)
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
        value.allPreamblesBlocked = (PerRASSBInfo_v1800_AllPreamblesBlocked)0;
    }
    if (present_1) {
        value.lbt_Detected_r18 = (PerRASSBInfo_v1800_Lbt_Detected_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PerRASSBInfo_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PerRASSBInfo_v1800(PerRASSBInfo_v1800& value)
{
    if (value.has_allPreamblesBlocked) {
    }
    if (value.has_lbt_Detected_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PerRACSI_RSInfo_v1800：ASN.1 PerRACSI-RSInfo-v1800；源文件第 2917 行；SEQUENCE。
// Encode_PerRACSI_RSInfo_v1800 只读不分配；Decode_PerRACSI_RSInfo_v1800 可能 malloc（失败时内部已释放并清零）；Free_PerRACSI_RSInfo_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PerRACSI_RSInfo_v1800(Encoder& enc, const PerRACSI_RSInfo_v1800& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_allPreamblesBlocked);
    enc.WriteBit(value.has_lbt_Detected_r18);
    if (value.has_allPreamblesBlocked) {
        enc.WriteConstrainedInteger((std::int64_t)(value.allPreamblesBlocked), 0, 0);
    }
    if (value.has_lbt_Detected_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.lbt_Detected_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PerRACSI_RSInfo_v1800(Decoder& dec, PerRACSI_RSInfo_v1800& value)
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
        value.allPreamblesBlocked = (PerRACSI_RSInfo_v1800_AllPreamblesBlocked)0;
    }
    if (present_1) {
        value.lbt_Detected_r18 = (PerRACSI_RSInfo_v1800_Lbt_Detected_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PerRACSI_RSInfo_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PerRACSI_RSInfo_v1800(PerRACSI_RSInfo_v1800& value)
{
    if (value.has_allPreamblesBlocked) {
    }
    if (value.has_lbt_Detected_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PerRAInfo_v1800：ASN.1 PerRAInfo-v1800；源文件第 2891 行；CHOICE。
// Encode_PerRAInfo_v1800 只读不分配；Decode_PerRAInfo_v1800 可能 malloc（失败时内部已释放并清零）；Free_PerRAInfo_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PerRAInfo_v1800(Encoder& enc, const PerRAInfo_v1800& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case PerRAInfo_v1800_Tag_perRASSBInfoList_v1800:
        Encode_PerRASSBInfo_v1800(enc, value.u.perRASSBInfoList_v1800);
        break;
    case PerRAInfo_v1800_Tag_perRACSI_RSInfoList_v1800:
        Encode_PerRACSI_RSInfo_v1800(enc, value.u.perRACSI_RSInfoList_v1800);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PerRAInfo_v1800(Decoder& dec, PerRAInfo_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (PerRAInfo_v1800_Tag)root_index;
    switch (value.tag) {
    case PerRAInfo_v1800_Tag_perRASSBInfoList_v1800: {
        if (Decode_PerRASSBInfo_v1800(dec, value.u.perRASSBInfoList_v1800) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PerRAInfo_v1800_Tag_perRACSI_RSInfoList_v1800: {
        if (Decode_PerRACSI_RSInfo_v1800(dec, value.u.perRACSI_RSInfoList_v1800) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PerRAInfo_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PerRAInfo_v1800(PerRAInfo_v1800& value)
{
    switch (value.tag) {
    case PerRAInfo_v1800_Tag_perRASSBInfoList_v1800:
        Free_PerRASSBInfo_v1800(value.u.perRASSBInfoList_v1800);
        break;
    case PerRAInfo_v1800_Tag_perRACSI_RSInfoList_v1800:
        Free_PerRACSI_RSInfo_v1800(value.u.perRACSI_RSInfoList_v1800);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PerRACSI_RSInfo_v1660：ASN.1 PerRACSI-RSInfo-v1660；源文件第 2913 行；SEQUENCE。
// Encode_PerRACSI_RSInfo_v1660 只读不分配；Decode_PerRACSI_RSInfo_v1660 可能 malloc（失败时内部已释放并清零）；Free_PerRACSI_RSInfo_v1660 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PerRACSI_RSInfo_v1660(Encoder& enc, const PerRACSI_RSInfo_v1660& value)
{
    (void)value;
    enc.WriteBit(value.has_csi_RS_Index_v1660);
    if (value.has_csi_RS_Index_v1660) {
        enc.WriteConstrainedInteger((std::int64_t)(value.csi_RS_Index_v1660), 1, 96);
    }
    return enc.Error();
}

ErrorCode Decode_PerRACSI_RSInfo_v1660(Decoder& dec, PerRACSI_RSInfo_v1660& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 96, tmp_value)) { goto fail; }
        value.csi_RS_Index_v1660 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PerRACSI_RSInfo_v1660(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PerRACSI_RSInfo_v1660(PerRACSI_RSInfo_v1660& value)
{
    if (value.has_csi_RS_Index_v1660) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PerRAAttemptInfo_r16_ExtGroup1：ASN.1 PerRAAttemptInfo_r16_ExtGroup1；源文件第 2929 行；扩展添加组 [[ ]]。
// Encode_PerRAAttemptInfo_r16_ExtGroup1 只读不分配；Decode_PerRAAttemptInfo_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_PerRAAttemptInfo_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PerRAAttemptInfo_r16_ExtGroup1(Encoder& enc, const PerRAAttemptInfo_r16_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_fallbackToFourStepRA_r17);
    if (value.has_fallbackToFourStepRA_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fallbackToFourStepRA_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PerRAAttemptInfo_r16_ExtGroup1(Decoder& dec, PerRAAttemptInfo_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.fallbackToFourStepRA_r17 = (PerRAAttemptInfo_r16_ExtGroup1_FallbackToFourStepRA_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PerRAAttemptInfo_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PerRAAttemptInfo_r16_ExtGroup1(PerRAAttemptInfo_r16_ExtGroup1& value)
{
    if (value.has_fallbackToFourStepRA_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PerRAAttemptInfo_r16：ASN.1 PerRAAttemptInfo-r16；源文件第 2925 行；SEQUENCE。
// Encode_PerRAAttemptInfo_r16 只读不分配；Decode_PerRAAttemptInfo_r16 可能 malloc（失败时内部已释放并清零）；Free_PerRAAttemptInfo_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PerRAAttemptInfo_r16(Encoder& enc, const PerRAAttemptInfo_r16& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_contentionDetected_r16);
    enc.WriteBit(value.has_dlRSRPAboveThreshold_r16);
    if (value.has_contentionDetected_r16) {
        enc.WriteBool(value.contentionDetected_r16);
    }
    if (value.has_dlRSRPAboveThreshold_r16) {
        enc.WriteBool(value.dlRSRPAboveThreshold_r16);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_PerRAAttemptInfo_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PerRAAttemptInfo_r16(Decoder& dec, PerRAAttemptInfo_r16& value)
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
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.contentionDetected_r16 = tmp_value;
    }
    if (present_1) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.dlRSRPAboveThreshold_r16 = tmp_value;
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
    if (Decode_PerRAAttemptInfo_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_PerRAAttemptInfo_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PerRAAttemptInfo_r16(PerRAAttemptInfo_r16& value)
{
    if (value.has_contentionDetected_r16) {
    }
    if (value.has_dlRSRPAboveThreshold_r16) {
    }
    if (value.has_extGroup1) {
        Free_PerRAAttemptInfo_r16_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultNeighFreq_RSSI_r18：ASN.1 MeasResultNeighFreq-RSSI-r18；源文件第 3087 行；SEQUENCE。
// Encode_MeasResultNeighFreq_RSSI_r18 只读不分配；Decode_MeasResultNeighFreq_RSSI_r18 可能 malloc（失败时内部已释放并清零）；Free_MeasResultNeighFreq_RSSI_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultNeighFreq_RSSI_r18(Encoder& enc, const MeasResultNeighFreq_RSSI_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_ssbFrequency_r18);
    enc.WriteBit(value.has_ssbSubcarrierSpacing_r18);
    enc.WriteBit(value.has_refFreqCSI_RS_r18);
    enc.WriteBit(value.has_measResult_RSSI_r18);
    if (value.has_ssbFrequency_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssbFrequency_r18), 0, 3279165);
    }
    if (value.has_ssbSubcarrierSpacing_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssbSubcarrierSpacing_r18), 0, 7);
    }
    if (value.has_refFreqCSI_RS_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.refFreqCSI_RS_r18), 0, 3279165);
    }
    if (value.has_measResult_RSSI_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.measResult_RSSI_r18), 0, 76);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultNeighFreq_RSSI_r18(Decoder& dec, MeasResultNeighFreq_RSSI_r18& value)
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
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.ssbFrequency_r18 = (ARFCN_ValueNR)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.ssbSubcarrierSpacing_r18 = (SubcarrierSpacing)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.refFreqCSI_RS_r18 = (ARFCN_ValueNR)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 76, tmp_value)) { goto fail; }
        value.measResult_RSSI_r18 = (RSSI_Range_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultNeighFreq_RSSI_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultNeighFreq_RSSI_r18(MeasResultNeighFreq_RSSI_r18& value)
{
    if (value.has_ssbFrequency_r18) {
    }
    if (value.has_ssbSubcarrierSpacing_r18) {
    }
    if (value.has_refFreqCSI_RS_r18) {
    }
    if (value.has_measResult_RSSI_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResult2NR_r16：ASN.1 MeasResult2NR-r16；源文件第 3097 行；SEQUENCE。
// Encode_MeasResult2NR_r16 只读不分配；Decode_MeasResult2NR_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResult2NR_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResult2NR_r16(Encoder& enc, const MeasResult2NR_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_ssbFrequency_r16);
    enc.WriteBit(value.has_refFreqCSI_RS_r16);
    if (value.has_ssbFrequency_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssbFrequency_r16), 0, 3279165);
    }
    if (value.has_refFreqCSI_RS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.refFreqCSI_RS_r16), 0, 3279165);
    }
    Encode_MeasResultListNR(enc, value.measResultList_r16);
    return enc.Error();
}

ErrorCode Decode_MeasResult2NR_r16(Decoder& dec, MeasResult2NR_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.ssbFrequency_r16 = (ARFCN_ValueNR)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.refFreqCSI_RS_r16 = (ARFCN_ValueNR)tmp_value;
    }
    {
        if (Decode_MeasResultListNR(dec, value.measResultList_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResult2NR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResult2NR_r16(MeasResult2NR_r16& value)
{
    if (value.has_ssbFrequency_r16) {
    }
    if (value.has_refFreqCSI_RS_r16) {
    }
    Free_MeasResultListNR(value.measResultList_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultListLoggingNR_r16：ASN.1 MeasResultListLoggingNR-r16；源文件第 3110 行；SEQUENCE OF。
// Encode_MeasResultListLoggingNR_r16 只读不分配；Decode_MeasResultListLoggingNR_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultListLoggingNR_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultListLoggingNR_r16(Encoder& enc, const MeasResultListLoggingNR_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MeasResultLoggingNR_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultListLoggingNR_r16(Decoder& dec, MeasResultListLoggingNR_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MeasResultLoggingNR_r16*)std::malloc((std::size_t)value.count * sizeof(MeasResultLoggingNR_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResultLoggingNR_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MeasResultLoggingNR_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultListLoggingNR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultListLoggingNR_r16(MeasResultListLoggingNR_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MeasResultLoggingNR_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultLogging2NR_r16：ASN.1 MeasResultLogging2NR-r16；源文件第 3105 行；SEQUENCE。
// Encode_MeasResultLogging2NR_r16 只读不分配；Decode_MeasResultLogging2NR_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultLogging2NR_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultLogging2NR_r16(Encoder& enc, const MeasResultLogging2NR_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierFreq_r16), 0, 3279165);
    Encode_MeasResultListLoggingNR_r16(enc, value.measResultListLoggingNR_r16);
    return enc.Error();
}

ErrorCode Decode_MeasResultLogging2NR_r16(Decoder& dec, MeasResultLogging2NR_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.carrierFreq_r16 = (ARFCN_ValueNR)tmp_value;
    }
    {
        if (Decode_MeasResultListLoggingNR_r16(dec, value.measResultListLoggingNR_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultLogging2NR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultLogging2NR_r16(MeasResultLogging2NR_r16& value)
{
    Free_MeasResultListLoggingNR_r16(value.measResultListLoggingNR_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultLoggingNR_r16：ASN.1 MeasResultLoggingNR-r16；源文件第 3112 行；SEQUENCE。
// Encode_MeasResultLoggingNR_r16 只读不分配；Decode_MeasResultLoggingNR_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultLoggingNR_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultLoggingNR_r16(Encoder& enc, const MeasResultLoggingNR_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_numberOfGoodSSB_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.physCellId_r16), 0, 1007);
    Encode_MeasQuantityResults(enc, value.resultsSSB_Cell_r16);
    if (value.has_numberOfGoodSSB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.numberOfGoodSSB_r16), 1, 64);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultLoggingNR_r16(Decoder& dec, MeasResultLoggingNR_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
        value.physCellId_r16 = (PhysCellId)tmp_value;
    }
    {
        if (Decode_MeasQuantityResults(dec, value.resultsSSB_Cell_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.numberOfGoodSSB_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultLoggingNR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultLoggingNR_r16(MeasResultLoggingNR_r16& value)
{
    Free_MeasQuantityResults(value.resultsSSB_Cell_r16);
    if (value.has_numberOfGoodSSB_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResult2EUTRA_r16：ASN.1 MeasResult2EUTRA-r16；源文件第 3118 行；SEQUENCE。
// Encode_MeasResult2EUTRA_r16 只读不分配；Decode_MeasResult2EUTRA_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResult2EUTRA_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResult2EUTRA_r16(Encoder& enc, const MeasResult2EUTRA_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierFreq_r16), 0, 262143);
    Encode_MeasResultListEUTRA(enc, value.measResultList_r16);
    return enc.Error();
}

ErrorCode Decode_MeasResult2EUTRA_r16(Decoder& dec, MeasResult2EUTRA_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 262143, tmp_value)) { goto fail; }
        value.carrierFreq_r16 = (ARFCN_ValueEUTRA)tmp_value;
    }
    {
        if (Decode_MeasResultListEUTRA(dec, value.measResultList_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResult2EUTRA_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResult2EUTRA_r16(MeasResult2EUTRA_r16& value)
{
    Free_MeasResultListEUTRA(value.measResultList_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ChoCandidateCell_r17：ASN.1 ChoCandidateCell-r17；源文件第 3153 行；CHOICE。
// Encode_ChoCandidateCell_r17 只读不分配；Decode_ChoCandidateCell_r17 可能 malloc（失败时内部已释放并清零）；Free_ChoCandidateCell_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ChoCandidateCell_r17(Encoder& enc, const ChoCandidateCell_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case ChoCandidateCell_r17_Tag_cellGlobalId_r17:
        Encode_CGI_Info_Logging_r16(enc, value.u.cellGlobalId_r17);
        break;
    case ChoCandidateCell_r17_Tag_pci_arfcn_r17:
        Encode_PCI_ARFCN_NR_r16(enc, value.u.pci_arfcn_r17);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_ChoCandidateCell_r17(Decoder& dec, ChoCandidateCell_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (ChoCandidateCell_r17_Tag)root_index;
    switch (value.tag) {
    case ChoCandidateCell_r17_Tag_cellGlobalId_r17: {
        if (Decode_CGI_Info_Logging_r16(dec, value.u.cellGlobalId_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case ChoCandidateCell_r17_Tag_pci_arfcn_r17: {
        if (Decode_PCI_ARFCN_NR_r16(dec, value.u.pci_arfcn_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ChoCandidateCell_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ChoCandidateCell_r17(ChoCandidateCell_r17& value)
{
    switch (value.tag) {
    case ChoCandidateCell_r17_Tag_cellGlobalId_r17:
        Free_CGI_Info_Logging_r16(value.u.cellGlobalId_r17);
        break;
    case ChoCandidateCell_r17_Tag_pci_arfcn_r17:
        Free_PCI_ARFCN_NR_r16(value.u.pci_arfcn_r17);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEPositioningAssistanceInfo_v1720_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 3212 行；空 SEQUENCE{}。
// Encode_UEPositioningAssistanceInfo_v1720_IEs_NonCriticalExtension 只读不分配；Decode_UEPositioningAssistanceInfo_v1720_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_UEPositioningAssistanceInfo_v1720_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEPositioningAssistanceInfo_v1720_IEs_NonCriticalExtension(Encoder& enc, const UEPositioningAssistanceInfo_v1720_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_UEPositioningAssistanceInfo_v1720_IEs_NonCriticalExtension(Decoder& dec, UEPositioningAssistanceInfo_v1720_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEPositioningAssistanceInfo_v1720_IEs_NonCriticalExtension(UEPositioningAssistanceInfo_v1720_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEPositioningAssistanceInfo_v1720_IEs：ASN.1 UEPositioningAssistanceInfo-v1720-IEs；源文件第 3209 行；SEQUENCE。
// Encode_UEPositioningAssistanceInfo_v1720_IEs 只读不分配；Decode_UEPositioningAssistanceInfo_v1720_IEs 可能 malloc（失败时内部已释放并清零）；Free_UEPositioningAssistanceInfo_v1720_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEPositioningAssistanceInfo_v1720_IEs(Encoder& enc, const UEPositioningAssistanceInfo_v1720_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_ue_TxTEG_TimingErrorMarginValue_r17);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_ue_TxTEG_TimingErrorMarginValue_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ue_TxTEG_TimingErrorMarginValue_r17), 0, 15);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UEPositioningAssistanceInfo_v1720_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UEPositioningAssistanceInfo_v1720_IEs(Decoder& dec, UEPositioningAssistanceInfo_v1720_IEs& value)
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
        value.ue_TxTEG_TimingErrorMarginValue_r17 = (UEPositioningAssistanceInfo_v1720_IEs_Ue_TxTEG_TimingErrorMarginValue_r17)tmp_value;
    }
    if (present_1) {
        if (Decode_UEPositioningAssistanceInfo_v1720_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UEPositioningAssistanceInfo_v1720_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEPositioningAssistanceInfo_v1720_IEs(UEPositioningAssistanceInfo_v1720_IEs& value)
{
    if (value.has_ue_TxTEG_TimingErrorMarginValue_r17) {
    }
    if (value.has_nonCriticalExtension) {
        Free_UEPositioningAssistanceInfo_v1720_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UE_TxTEG_AssociationList_r17：ASN.1 UE-TxTEG-AssociationList-r17；源文件第 3215 行；SEQUENCE OF。
// Encode_UE_TxTEG_AssociationList_r17 只读不分配；Decode_UE_TxTEG_AssociationList_r17 可能 malloc（失败时内部已释放并清零）；Free_UE_TxTEG_AssociationList_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UE_TxTEG_AssociationList_r17(Encoder& enc, const UE_TxTEG_AssociationList_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 256u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_UE_TxTEG_Association_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_UE_TxTEG_AssociationList_r17(Decoder& dec, UE_TxTEG_AssociationList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 256u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 256u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (UE_TxTEG_Association_r17*)std::malloc((std::size_t)value.count * sizeof(UE_TxTEG_Association_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(UE_TxTEG_Association_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_UE_TxTEG_Association_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_UE_TxTEG_AssociationList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_TxTEG_AssociationList_r17(UE_TxTEG_AssociationList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_UE_TxTEG_Association_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEPositioningAssistanceInfo_r17_IEs：ASN.1 UEPositioningAssistanceInfo-r17-IEs；源文件第 3203 行；SEQUENCE。
// Encode_UEPositioningAssistanceInfo_r17_IEs 只读不分配；Decode_UEPositioningAssistanceInfo_r17_IEs 可能 malloc（失败时内部已释放并清零）；Free_UEPositioningAssistanceInfo_r17_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEPositioningAssistanceInfo_r17_IEs(Encoder& enc, const UEPositioningAssistanceInfo_r17_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_ue_TxTEG_AssociationList_r17);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_ue_TxTEG_AssociationList_r17) {
        Encode_UE_TxTEG_AssociationList_r17(enc, value.ue_TxTEG_AssociationList_r17);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UEPositioningAssistanceInfo_v1720_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UEPositioningAssistanceInfo_r17_IEs(Decoder& dec, UEPositioningAssistanceInfo_r17_IEs& value)
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
        if (Decode_UE_TxTEG_AssociationList_r17(dec, value.ue_TxTEG_AssociationList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_2) {
        if (Decode_UEPositioningAssistanceInfo_v1720_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UEPositioningAssistanceInfo_r17_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEPositioningAssistanceInfo_r17_IEs(UEPositioningAssistanceInfo_r17_IEs& value)
{
    if (value.has_ue_TxTEG_AssociationList_r17) {
        Free_UE_TxTEG_AssociationList_r17(value.ue_TxTEG_AssociationList_r17);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_UEPositioningAssistanceInfo_v1720_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEPositioningAssistanceInfo_r17_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 3199 行；空 SEQUENCE{}。
// Encode_UEPositioningAssistanceInfo_r17_CriticalExtensionsFuture 只读不分配；Decode_UEPositioningAssistanceInfo_r17_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_UEPositioningAssistanceInfo_r17_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEPositioningAssistanceInfo_r17_CriticalExtensionsFuture(Encoder& enc, const UEPositioningAssistanceInfo_r17_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_UEPositioningAssistanceInfo_r17_CriticalExtensionsFuture(Decoder& dec, UEPositioningAssistanceInfo_r17_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEPositioningAssistanceInfo_r17_CriticalExtensionsFuture(UEPositioningAssistanceInfo_r17_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEPositioningAssistanceInfo_r17_CriticalExtensions：ASN.1 criticalExtensions；源文件第 3197 行；CHOICE。
// Encode_UEPositioningAssistanceInfo_r17_CriticalExtensions 只读不分配；Decode_UEPositioningAssistanceInfo_r17_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_UEPositioningAssistanceInfo_r17_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEPositioningAssistanceInfo_r17_CriticalExtensions(Encoder& enc, const UEPositioningAssistanceInfo_r17_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case UEPositioningAssistanceInfo_r17_CriticalExtensions_Tag_uePositioningAssistanceInfo_r17:
        Encode_UEPositioningAssistanceInfo_r17_IEs(enc, value.u.uePositioningAssistanceInfo_r17);
        break;
    case UEPositioningAssistanceInfo_r17_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_UEPositioningAssistanceInfo_r17_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_UEPositioningAssistanceInfo_r17_CriticalExtensions(Decoder& dec, UEPositioningAssistanceInfo_r17_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (UEPositioningAssistanceInfo_r17_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case UEPositioningAssistanceInfo_r17_CriticalExtensions_Tag_uePositioningAssistanceInfo_r17: {
        if (Decode_UEPositioningAssistanceInfo_r17_IEs(dec, value.u.uePositioningAssistanceInfo_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case UEPositioningAssistanceInfo_r17_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_UEPositioningAssistanceInfo_r17_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UEPositioningAssistanceInfo_r17_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEPositioningAssistanceInfo_r17_CriticalExtensions(UEPositioningAssistanceInfo_r17_CriticalExtensions& value)
{
    switch (value.tag) {
    case UEPositioningAssistanceInfo_r17_CriticalExtensions_Tag_uePositioningAssistanceInfo_r17:
        Free_UEPositioningAssistanceInfo_r17_IEs(value.u.uePositioningAssistanceInfo_r17);
        break;
    case UEPositioningAssistanceInfo_r17_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_UEPositioningAssistanceInfo_r17_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UEPositioningAssistanceInfo_r17：ASN.1 UEPositioningAssistanceInfo-r17；源文件第 3196 行；SEQUENCE。
// Encode_UEPositioningAssistanceInfo_r17 只读不分配；Decode_UEPositioningAssistanceInfo_r17 可能 malloc（失败时内部已释放并清零）；Free_UEPositioningAssistanceInfo_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UEPositioningAssistanceInfo_r17(Encoder& enc, const UEPositioningAssistanceInfo_r17& value)
{
    (void)value;
    Encode_UEPositioningAssistanceInfo_r17_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_UEPositioningAssistanceInfo_r17(Decoder& dec, UEPositioningAssistanceInfo_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_UEPositioningAssistanceInfo_r17_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UEPositioningAssistanceInfo_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UEPositioningAssistanceInfo_r17(UEPositioningAssistanceInfo_r17& value)
{
    Free_UEPositioningAssistanceInfo_r17_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NR_TimeStamp_r17_Nr_Slot_r17：ASN.1 nr-Slot-r17；源文件第 3226 行；CHOICE。
// Encode_NR_TimeStamp_r17_Nr_Slot_r17 只读不分配；Decode_NR_TimeStamp_r17_Nr_Slot_r17 可能 malloc（失败时内部已释放并清零）；Free_NR_TimeStamp_r17_Nr_Slot_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NR_TimeStamp_r17_Nr_Slot_r17(Encoder& enc, const NR_TimeStamp_r17_Nr_Slot_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 3);
    switch (value.tag) {
    case NR_TimeStamp_r17_Nr_Slot_r17_Tag_scs15_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.scs15_r17), 0, 9);
        break;
    case NR_TimeStamp_r17_Nr_Slot_r17_Tag_scs30_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.scs30_r17), 0, 19);
        break;
    case NR_TimeStamp_r17_Nr_Slot_r17_Tag_scs60_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.scs60_r17), 0, 39);
        break;
    case NR_TimeStamp_r17_Nr_Slot_r17_Tag_scs120_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.scs120_r17), 0, 79);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_NR_TimeStamp_r17_Nr_Slot_r17(Decoder& dec, NR_TimeStamp_r17_Nr_Slot_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 3, root_index)) {
        goto fail;
    }
    value.tag = (NR_TimeStamp_r17_Nr_Slot_r17_Tag)root_index;
    switch (value.tag) {
    case NR_TimeStamp_r17_Nr_Slot_r17_Tag_scs15_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.u.scs15_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_TimeStamp_r17_Nr_Slot_r17_Tag_scs30_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 19, tmp_value)) { goto fail; }
        value.u.scs30_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_TimeStamp_r17_Nr_Slot_r17_Tag_scs60_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.scs60_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_TimeStamp_r17_Nr_Slot_r17_Tag_scs120_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.scs120_r17 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NR_TimeStamp_r17_Nr_Slot_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NR_TimeStamp_r17_Nr_Slot_r17(NR_TimeStamp_r17_Nr_Slot_r17& value)
{
    switch (value.tag) {
    case NR_TimeStamp_r17_Nr_Slot_r17_Tag_scs15_r17:
        break;
    case NR_TimeStamp_r17_Nr_Slot_r17_Tag_scs30_r17:
        break;
    case NR_TimeStamp_r17_Nr_Slot_r17_Tag_scs60_r17:
        break;
    case NR_TimeStamp_r17_Nr_Slot_r17_Tag_scs120_r17:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NR_TimeStamp_r17：ASN.1 NR-TimeStamp-r17；源文件第 3224 行；SEQUENCE。
// Encode_NR_TimeStamp_r17 只读不分配；Decode_NR_TimeStamp_r17 可能 malloc（失败时内部已释放并清零）；Free_NR_TimeStamp_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NR_TimeStamp_r17(Encoder& enc, const NR_TimeStamp_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.nr_SFN_r17), 0, 1023);
    Encode_NR_TimeStamp_r17_Nr_Slot_r17(enc, value.nr_Slot_r17);
    return enc.Error();
}

ErrorCode Decode_NR_TimeStamp_r17(Decoder& dec, NR_TimeStamp_r17& value)
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
        value.nr_SFN_r17 = (int64_t)tmp_value;
    }
    {
        if (Decode_NR_TimeStamp_r17_Nr_Slot_r17(dec, value.nr_Slot_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_NR_TimeStamp_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NR_TimeStamp_r17(NR_TimeStamp_r17& value)
{
    Free_NR_TimeStamp_r17_Nr_Slot_r17(value.nr_Slot_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UE_TxTEG_Association_r17：ASN.1 UE-TxTEG-Association-r17；源文件第 3217 行；SEQUENCE。
// Encode_UE_TxTEG_Association_r17 只读不分配；Decode_UE_TxTEG_Association_r17 可能 malloc（失败时内部已释放并清零）；Free_UE_TxTEG_Association_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UE_TxTEG_Association_r17(Encoder& enc, const UE_TxTEG_Association_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_servCellId_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.ue_TxTEG_ID_r17), 0, 7);
    Encode_NR_TimeStamp_r17(enc, value.nr_TimeStamp_r17);
enc.WriteConstrainedLength(value.associatedSRS_PosResourceIdList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.associatedSRS_PosResourceIdList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.associatedSRS_PosResourceIdList_r17_items[i]), 0, 63);
}
    if (value.has_servCellId_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.servCellId_r17), 0, 31);
    }
    return enc.Error();
}

ErrorCode Decode_UE_TxTEG_Association_r17(Decoder& dec, UE_TxTEG_Association_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.ue_TxTEG_ID_r17 = (int64_t)tmp_value;
    }
    {
        if (Decode_NR_TimeStamp_r17(dec, value.nr_TimeStamp_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.associatedSRS_PosResourceIdList_r17_count)) { goto fail; }
if (value.associatedSRS_PosResourceIdList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.associatedSRS_PosResourceIdList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.associatedSRS_PosResourceIdList_r17_count > 0u) {
    value.associatedSRS_PosResourceIdList_r17_items = (SRS_PosResourceId_r16*)std::malloc((std::size_t)value.associatedSRS_PosResourceIdList_r17_count * sizeof(SRS_PosResourceId_r16));
    if (value.associatedSRS_PosResourceIdList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.associatedSRS_PosResourceIdList_r17_items, 0, (std::size_t)value.associatedSRS_PosResourceIdList_r17_count * sizeof(SRS_PosResourceId_r16));
}
for (std::uint32_t i = 0; i < value.associatedSRS_PosResourceIdList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.associatedSRS_PosResourceIdList_r17_items[i] = (SRS_PosResourceId_r16)tmp_value;
}
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.servCellId_r17 = (ServCellIndex)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_TxTEG_Association_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_TxTEG_Association_r17(UE_TxTEG_Association_r17& value)
{
    Free_NR_TimeStamp_r17(value.nr_TimeStamp_r17);
    if (value.associatedSRS_PosResourceIdList_r17_items != nullptr) {
        for (std::uint32_t i = 0; i < value.associatedSRS_PosResourceIdList_r17_count; ++i) {
        }
        std::free(value.associatedSRS_PosResourceIdList_r17_items);
        value.associatedSRS_PosResourceIdList_r17_items = nullptr;
    }
    value.associatedSRS_PosResourceIdList_r17_count = 0;
    if (value.has_servCellId_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ULDedicatedMessageSegment_r16_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 3250 行；空 SEQUENCE{}。
// Encode_ULDedicatedMessageSegment_r16_IEs_NonCriticalExtension 只读不分配；Decode_ULDedicatedMessageSegment_r16_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_ULDedicatedMessageSegment_r16_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ULDedicatedMessageSegment_r16_IEs_NonCriticalExtension(Encoder& enc, const ULDedicatedMessageSegment_r16_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_ULDedicatedMessageSegment_r16_IEs_NonCriticalExtension(Decoder& dec, ULDedicatedMessageSegment_r16_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ULDedicatedMessageSegment_r16_IEs_NonCriticalExtension(ULDedicatedMessageSegment_r16_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ULDedicatedMessageSegment_r16_IEs：ASN.1 ULDedicatedMessageSegment-r16-IEs；源文件第 3245 行；SEQUENCE。
// Encode_ULDedicatedMessageSegment_r16_IEs 只读不分配；Decode_ULDedicatedMessageSegment_r16_IEs 可能 malloc（失败时内部已释放并清零）；Free_ULDedicatedMessageSegment_r16_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ULDedicatedMessageSegment_r16_IEs(Encoder& enc, const ULDedicatedMessageSegment_r16_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    enc.WriteConstrainedInteger((std::int64_t)(value.segmentNumber_r16), 0, 15);
    enc.WriteSemiConstrainedOctetString(value.rrc_MessageSegmentContainer_r16.bytes, value.rrc_MessageSegmentContainer_r16.length, 0, 0xFFFFFFFFu);
    enc.WriteConstrainedInteger((std::int64_t)(value.rrc_MessageSegmentType_r16), 0, 1);
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_ULDedicatedMessageSegment_r16_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_ULDedicatedMessageSegment_r16_IEs(Decoder& dec, ULDedicatedMessageSegment_r16_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.segmentNumber_r16 = (int64_t)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.rrc_MessageSegmentContainer_r16.bytes = string_bytes;
        value.rrc_MessageSegmentContainer_r16.length = string_length;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.rrc_MessageSegmentType_r16 = (ULDedicatedMessageSegment_r16_IEs_Rrc_MessageSegmentType_r16)tmp_value;
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_1) {
        if (Decode_ULDedicatedMessageSegment_r16_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ULDedicatedMessageSegment_r16_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ULDedicatedMessageSegment_r16_IEs(ULDedicatedMessageSegment_r16_IEs& value)
{
    std::free(value.rrc_MessageSegmentContainer_r16.bytes);
    value.rrc_MessageSegmentContainer_r16.bytes = nullptr;
    value.rrc_MessageSegmentContainer_r16.length = 0;
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_ULDedicatedMessageSegment_r16_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ULDedicatedMessageSegment_r16_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 3241 行；空 SEQUENCE{}。
// Encode_ULDedicatedMessageSegment_r16_CriticalExtensionsFuture 只读不分配；Decode_ULDedicatedMessageSegment_r16_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_ULDedicatedMessageSegment_r16_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ULDedicatedMessageSegment_r16_CriticalExtensionsFuture(Encoder& enc, const ULDedicatedMessageSegment_r16_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_ULDedicatedMessageSegment_r16_CriticalExtensionsFuture(Decoder& dec, ULDedicatedMessageSegment_r16_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ULDedicatedMessageSegment_r16_CriticalExtensionsFuture(ULDedicatedMessageSegment_r16_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ULDedicatedMessageSegment_r16_CriticalExtensions：ASN.1 criticalExtensions；源文件第 3239 行；CHOICE。
// Encode_ULDedicatedMessageSegment_r16_CriticalExtensions 只读不分配；Decode_ULDedicatedMessageSegment_r16_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_ULDedicatedMessageSegment_r16_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ULDedicatedMessageSegment_r16_CriticalExtensions(Encoder& enc, const ULDedicatedMessageSegment_r16_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case ULDedicatedMessageSegment_r16_CriticalExtensions_Tag_ulDedicatedMessageSegment_r16:
        Encode_ULDedicatedMessageSegment_r16_IEs(enc, value.u.ulDedicatedMessageSegment_r16);
        break;
    case ULDedicatedMessageSegment_r16_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_ULDedicatedMessageSegment_r16_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_ULDedicatedMessageSegment_r16_CriticalExtensions(Decoder& dec, ULDedicatedMessageSegment_r16_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (ULDedicatedMessageSegment_r16_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case ULDedicatedMessageSegment_r16_CriticalExtensions_Tag_ulDedicatedMessageSegment_r16: {
        if (Decode_ULDedicatedMessageSegment_r16_IEs(dec, value.u.ulDedicatedMessageSegment_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case ULDedicatedMessageSegment_r16_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_ULDedicatedMessageSegment_r16_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ULDedicatedMessageSegment_r16_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ULDedicatedMessageSegment_r16_CriticalExtensions(ULDedicatedMessageSegment_r16_CriticalExtensions& value)
{
    switch (value.tag) {
    case ULDedicatedMessageSegment_r16_CriticalExtensions_Tag_ulDedicatedMessageSegment_r16:
        Free_ULDedicatedMessageSegment_r16_IEs(value.u.ulDedicatedMessageSegment_r16);
        break;
    case ULDedicatedMessageSegment_r16_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_ULDedicatedMessageSegment_r16_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ULDedicatedMessageSegment_r16：ASN.1 ULDedicatedMessageSegment-r16；源文件第 3238 行；SEQUENCE。
// Encode_ULDedicatedMessageSegment_r16 只读不分配；Decode_ULDedicatedMessageSegment_r16 可能 malloc（失败时内部已释放并清零）；Free_ULDedicatedMessageSegment_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ULDedicatedMessageSegment_r16(Encoder& enc, const ULDedicatedMessageSegment_r16& value)
{
    (void)value;
    Encode_ULDedicatedMessageSegment_r16_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_ULDedicatedMessageSegment_r16(Decoder& dec, ULDedicatedMessageSegment_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_ULDedicatedMessageSegment_r16_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ULDedicatedMessageSegment_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ULDedicatedMessageSegment_r16(ULDedicatedMessageSegment_r16& value)
{
    Free_ULDedicatedMessageSegment_r16_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ULInformationTransfer_v1700_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 3271 行；空 SEQUENCE{}。
// Encode_ULInformationTransfer_v1700_IEs_NonCriticalExtension 只读不分配；Decode_ULInformationTransfer_v1700_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_ULInformationTransfer_v1700_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ULInformationTransfer_v1700_IEs_NonCriticalExtension(Encoder& enc, const ULInformationTransfer_v1700_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_ULInformationTransfer_v1700_IEs_NonCriticalExtension(Decoder& dec, ULInformationTransfer_v1700_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ULInformationTransfer_v1700_IEs_NonCriticalExtension(ULInformationTransfer_v1700_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ULInformationTransfer_v1700_IEs：ASN.1 ULInformationTransfer-v1700-IEs；源文件第 3269 行；SEQUENCE。
// Encode_ULInformationTransfer_v1700_IEs 只读不分配；Decode_ULInformationTransfer_v1700_IEs 可能 malloc（失败时内部已释放并清零）；Free_ULInformationTransfer_v1700_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ULInformationTransfer_v1700_IEs(Encoder& enc, const ULInformationTransfer_v1700_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_dedicatedInfoF1c_r17);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_dedicatedInfoF1c_r17) {
        enc.WriteSemiConstrainedOctetString(value.dedicatedInfoF1c_r17.bytes, value.dedicatedInfoF1c_r17.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_ULInformationTransfer_v1700_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_ULInformationTransfer_v1700_IEs(Decoder& dec, ULInformationTransfer_v1700_IEs& value)
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
        value.dedicatedInfoF1c_r17.bytes = string_bytes;
        value.dedicatedInfoF1c_r17.length = string_length;
    }
    if (present_1) {
        if (Decode_ULInformationTransfer_v1700_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ULInformationTransfer_v1700_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ULInformationTransfer_v1700_IEs(ULInformationTransfer_v1700_IEs& value)
{
    if (value.has_dedicatedInfoF1c_r17) {
        std::free(value.dedicatedInfoF1c_r17.bytes);
        value.dedicatedInfoF1c_r17.bytes = nullptr;
        value.dedicatedInfoF1c_r17.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_ULInformationTransfer_v1700_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ULInformationTransfer_IEs：ASN.1 ULInformationTransfer-IEs；源文件第 3263 行；SEQUENCE。
// Encode_ULInformationTransfer_IEs 只读不分配；Decode_ULInformationTransfer_IEs 可能 malloc（失败时内部已释放并清零）；Free_ULInformationTransfer_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ULInformationTransfer_IEs(Encoder& enc, const ULInformationTransfer_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_dedicatedNAS_Message);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_dedicatedNAS_Message) {
        enc.WriteSemiConstrainedOctetString(value.dedicatedNAS_Message.bytes, value.dedicatedNAS_Message.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_ULInformationTransfer_v1700_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_ULInformationTransfer_IEs(Decoder& dec, ULInformationTransfer_IEs& value)
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
        value.dedicatedNAS_Message.bytes = string_bytes;
        value.dedicatedNAS_Message.length = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_2) {
        if (Decode_ULInformationTransfer_v1700_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ULInformationTransfer_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ULInformationTransfer_IEs(ULInformationTransfer_IEs& value)
{
    if (value.has_dedicatedNAS_Message) {
        std::free(value.dedicatedNAS_Message.bytes);
        value.dedicatedNAS_Message.bytes = nullptr;
        value.dedicatedNAS_Message.length = 0;
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_ULInformationTransfer_v1700_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ULInformationTransfer_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 3259 行；空 SEQUENCE{}。
// Encode_ULInformationTransfer_CriticalExtensionsFuture 只读不分配；Decode_ULInformationTransfer_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_ULInformationTransfer_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ULInformationTransfer_CriticalExtensionsFuture(Encoder& enc, const ULInformationTransfer_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_ULInformationTransfer_CriticalExtensionsFuture(Decoder& dec, ULInformationTransfer_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ULInformationTransfer_CriticalExtensionsFuture(ULInformationTransfer_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ULInformationTransfer_CriticalExtensions：ASN.1 criticalExtensions；源文件第 3257 行；CHOICE。
// Encode_ULInformationTransfer_CriticalExtensions 只读不分配；Decode_ULInformationTransfer_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_ULInformationTransfer_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ULInformationTransfer_CriticalExtensions(Encoder& enc, const ULInformationTransfer_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case ULInformationTransfer_CriticalExtensions_Tag_ulInformationTransfer:
        Encode_ULInformationTransfer_IEs(enc, value.u.ulInformationTransfer);
        break;
    case ULInformationTransfer_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_ULInformationTransfer_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_ULInformationTransfer_CriticalExtensions(Decoder& dec, ULInformationTransfer_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (ULInformationTransfer_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case ULInformationTransfer_CriticalExtensions_Tag_ulInformationTransfer: {
        if (Decode_ULInformationTransfer_IEs(dec, value.u.ulInformationTransfer) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case ULInformationTransfer_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_ULInformationTransfer_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ULInformationTransfer_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ULInformationTransfer_CriticalExtensions(ULInformationTransfer_CriticalExtensions& value)
{
    switch (value.tag) {
    case ULInformationTransfer_CriticalExtensions_Tag_ulInformationTransfer:
        Free_ULInformationTransfer_IEs(value.u.ulInformationTransfer);
        break;
    case ULInformationTransfer_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_ULInformationTransfer_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ULInformationTransfer：ASN.1 ULInformationTransfer；源文件第 3256 行；SEQUENCE。
// Encode_ULInformationTransfer 只读不分配；Decode_ULInformationTransfer 可能 malloc（失败时内部已释放并清零）；Free_ULInformationTransfer 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ULInformationTransfer(Encoder& enc, const ULInformationTransfer& value)
{
    (void)value;
    Encode_ULInformationTransfer_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_ULInformationTransfer(Decoder& dec, ULInformationTransfer& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_ULInformationTransfer_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ULInformationTransfer(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ULInformationTransfer(ULInformationTransfer& value)
{
    Free_ULInformationTransfer_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ULInformationTransferIRAT_r16_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 3290 行；空 SEQUENCE{}。
// Encode_ULInformationTransferIRAT_r16_IEs_NonCriticalExtension 只读不分配；Decode_ULInformationTransferIRAT_r16_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_ULInformationTransferIRAT_r16_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ULInformationTransferIRAT_r16_IEs_NonCriticalExtension(Encoder& enc, const ULInformationTransferIRAT_r16_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_ULInformationTransferIRAT_r16_IEs_NonCriticalExtension(Decoder& dec, ULInformationTransferIRAT_r16_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ULInformationTransferIRAT_r16_IEs_NonCriticalExtension(ULInformationTransferIRAT_r16_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ULInformationTransferIRAT_r16_IEs：ASN.1 ULInformationTransferIRAT-r16-IEs；源文件第 3287 行；SEQUENCE。
// Encode_ULInformationTransferIRAT_r16_IEs 只读不分配；Decode_ULInformationTransferIRAT_r16_IEs 可能 malloc（失败时内部已释放并清零）；Free_ULInformationTransferIRAT_r16_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ULInformationTransferIRAT_r16_IEs(Encoder& enc, const ULInformationTransferIRAT_r16_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_ul_DCCH_MessageEUTRA_r16);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_ul_DCCH_MessageEUTRA_r16) {
        enc.WriteSemiConstrainedOctetString(value.ul_DCCH_MessageEUTRA_r16.bytes, value.ul_DCCH_MessageEUTRA_r16.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_ULInformationTransferIRAT_r16_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_ULInformationTransferIRAT_r16_IEs(Decoder& dec, ULInformationTransferIRAT_r16_IEs& value)
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
        value.ul_DCCH_MessageEUTRA_r16.bytes = string_bytes;
        value.ul_DCCH_MessageEUTRA_r16.length = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_2) {
        if (Decode_ULInformationTransferIRAT_r16_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ULInformationTransferIRAT_r16_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ULInformationTransferIRAT_r16_IEs(ULInformationTransferIRAT_r16_IEs& value)
{
    if (value.has_ul_DCCH_MessageEUTRA_r16) {
        std::free(value.ul_DCCH_MessageEUTRA_r16.bytes);
        value.ul_DCCH_MessageEUTRA_r16.bytes = nullptr;
        value.ul_DCCH_MessageEUTRA_r16.length = 0;
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_ULInformationTransferIRAT_r16_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ULInformationTransferIRAT_r16_CriticalExtensions_C1：ASN.1 criticalExtensions/c1；源文件第 3279 行；CHOICE。
// Encode_ULInformationTransferIRAT_r16_CriticalExtensions_C1 只读不分配；Decode_ULInformationTransferIRAT_r16_CriticalExtensions_C1 可能 malloc（失败时内部已释放并清零）；Free_ULInformationTransferIRAT_r16_CriticalExtensions_C1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ULInformationTransferIRAT_r16_CriticalExtensions_C1(Encoder& enc, const ULInformationTransferIRAT_r16_CriticalExtensions_C1& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 3);
    switch (value.tag) {
    case ULInformationTransferIRAT_r16_CriticalExtensions_C1_Tag_ulInformationTransferIRAT_r16:
        Encode_ULInformationTransferIRAT_r16_IEs(enc, value.u.ulInformationTransferIRAT_r16);
        break;
    case ULInformationTransferIRAT_r16_CriticalExtensions_C1_Tag_spare3:
        (void)0;
        break;
    case ULInformationTransferIRAT_r16_CriticalExtensions_C1_Tag_spare2:
        (void)0;
        break;
    case ULInformationTransferIRAT_r16_CriticalExtensions_C1_Tag_spare1:
        (void)0;
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_ULInformationTransferIRAT_r16_CriticalExtensions_C1(Decoder& dec, ULInformationTransferIRAT_r16_CriticalExtensions_C1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 3, root_index)) {
        goto fail;
    }
    value.tag = (ULInformationTransferIRAT_r16_CriticalExtensions_C1_Tag)root_index;
    switch (value.tag) {
    case ULInformationTransferIRAT_r16_CriticalExtensions_C1_Tag_ulInformationTransferIRAT_r16: {
        if (Decode_ULInformationTransferIRAT_r16_IEs(dec, value.u.ulInformationTransferIRAT_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case ULInformationTransferIRAT_r16_CriticalExtensions_C1_Tag_spare3: {
        (void)0;
        break;
    }
    case ULInformationTransferIRAT_r16_CriticalExtensions_C1_Tag_spare2: {
        (void)0;
        break;
    }
    case ULInformationTransferIRAT_r16_CriticalExtensions_C1_Tag_spare1: {
        (void)0;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ULInformationTransferIRAT_r16_CriticalExtensions_C1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ULInformationTransferIRAT_r16_CriticalExtensions_C1(ULInformationTransferIRAT_r16_CriticalExtensions_C1& value)
{
    switch (value.tag) {
    case ULInformationTransferIRAT_r16_CriticalExtensions_C1_Tag_ulInformationTransferIRAT_r16:
        Free_ULInformationTransferIRAT_r16_IEs(value.u.ulInformationTransferIRAT_r16);
        break;
    case ULInformationTransferIRAT_r16_CriticalExtensions_C1_Tag_spare3:
        break;
    case ULInformationTransferIRAT_r16_CriticalExtensions_C1_Tag_spare2:
        break;
    case ULInformationTransferIRAT_r16_CriticalExtensions_C1_Tag_spare1:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ULInformationTransferIRAT_r16_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 3283 行；空 SEQUENCE{}。
// Encode_ULInformationTransferIRAT_r16_CriticalExtensionsFuture 只读不分配；Decode_ULInformationTransferIRAT_r16_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_ULInformationTransferIRAT_r16_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ULInformationTransferIRAT_r16_CriticalExtensionsFuture(Encoder& enc, const ULInformationTransferIRAT_r16_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_ULInformationTransferIRAT_r16_CriticalExtensionsFuture(Decoder& dec, ULInformationTransferIRAT_r16_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ULInformationTransferIRAT_r16_CriticalExtensionsFuture(ULInformationTransferIRAT_r16_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ULInformationTransferIRAT_r16_CriticalExtensions：ASN.1 criticalExtensions；源文件第 3278 行；CHOICE。
// Encode_ULInformationTransferIRAT_r16_CriticalExtensions 只读不分配；Decode_ULInformationTransferIRAT_r16_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_ULInformationTransferIRAT_r16_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ULInformationTransferIRAT_r16_CriticalExtensions(Encoder& enc, const ULInformationTransferIRAT_r16_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case ULInformationTransferIRAT_r16_CriticalExtensions_Tag_c1:
        Encode_ULInformationTransferIRAT_r16_CriticalExtensions_C1(enc, value.u.c1);
        break;
    case ULInformationTransferIRAT_r16_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_ULInformationTransferIRAT_r16_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_ULInformationTransferIRAT_r16_CriticalExtensions(Decoder& dec, ULInformationTransferIRAT_r16_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (ULInformationTransferIRAT_r16_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case ULInformationTransferIRAT_r16_CriticalExtensions_Tag_c1: {
        if (Decode_ULInformationTransferIRAT_r16_CriticalExtensions_C1(dec, value.u.c1) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case ULInformationTransferIRAT_r16_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_ULInformationTransferIRAT_r16_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ULInformationTransferIRAT_r16_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ULInformationTransferIRAT_r16_CriticalExtensions(ULInformationTransferIRAT_r16_CriticalExtensions& value)
{
    switch (value.tag) {
    case ULInformationTransferIRAT_r16_CriticalExtensions_Tag_c1:
        Free_ULInformationTransferIRAT_r16_CriticalExtensions_C1(value.u.c1);
        break;
    case ULInformationTransferIRAT_r16_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_ULInformationTransferIRAT_r16_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ULInformationTransferIRAT_r16：ASN.1 ULInformationTransferIRAT-r16；源文件第 3277 行；SEQUENCE。
// Encode_ULInformationTransferIRAT_r16 只读不分配；Decode_ULInformationTransferIRAT_r16 可能 malloc（失败时内部已释放并清零）；Free_ULInformationTransferIRAT_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ULInformationTransferIRAT_r16(Encoder& enc, const ULInformationTransferIRAT_r16& value)
{
    (void)value;
    Encode_ULInformationTransferIRAT_r16_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_ULInformationTransferIRAT_r16(Decoder& dec, ULInformationTransferIRAT_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_ULInformationTransferIRAT_r16_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ULInformationTransferIRAT_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ULInformationTransferIRAT_r16(ULInformationTransferIRAT_r16& value)
{
    Free_ULInformationTransferIRAT_r16_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ULInformationTransferMRDC_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 3310 行；空 SEQUENCE{}。
// Encode_ULInformationTransferMRDC_IEs_NonCriticalExtension 只读不分配；Decode_ULInformationTransferMRDC_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_ULInformationTransferMRDC_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ULInformationTransferMRDC_IEs_NonCriticalExtension(Encoder& enc, const ULInformationTransferMRDC_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_ULInformationTransferMRDC_IEs_NonCriticalExtension(Decoder& dec, ULInformationTransferMRDC_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ULInformationTransferMRDC_IEs_NonCriticalExtension(ULInformationTransferMRDC_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ULInformationTransferMRDC_IEs：ASN.1 ULInformationTransferMRDC-IEs；源文件第 3306 行；SEQUENCE。
// Encode_ULInformationTransferMRDC_IEs 只读不分配；Decode_ULInformationTransferMRDC_IEs 可能 malloc（失败时内部已释放并清零）；Free_ULInformationTransferMRDC_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ULInformationTransferMRDC_IEs(Encoder& enc, const ULInformationTransferMRDC_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_ul_DCCH_MessageNR);
    enc.WriteBit(value.has_ul_DCCH_MessageEUTRA);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_ul_DCCH_MessageNR) {
        enc.WriteSemiConstrainedOctetString(value.ul_DCCH_MessageNR.bytes, value.ul_DCCH_MessageNR.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_ul_DCCH_MessageEUTRA) {
        enc.WriteSemiConstrainedOctetString(value.ul_DCCH_MessageEUTRA.bytes, value.ul_DCCH_MessageEUTRA.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_ULInformationTransferMRDC_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_ULInformationTransferMRDC_IEs(Decoder& dec, ULInformationTransferMRDC_IEs& value)
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
        value.ul_DCCH_MessageNR.bytes = string_bytes;
        value.ul_DCCH_MessageNR.length = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.ul_DCCH_MessageEUTRA.bytes = string_bytes;
        value.ul_DCCH_MessageEUTRA.length = string_length;
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_3) {
        if (Decode_ULInformationTransferMRDC_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ULInformationTransferMRDC_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ULInformationTransferMRDC_IEs(ULInformationTransferMRDC_IEs& value)
{
    if (value.has_ul_DCCH_MessageNR) {
        std::free(value.ul_DCCH_MessageNR.bytes);
        value.ul_DCCH_MessageNR.bytes = nullptr;
        value.ul_DCCH_MessageNR.length = 0;
    }
    if (value.has_ul_DCCH_MessageEUTRA) {
        std::free(value.ul_DCCH_MessageEUTRA.bytes);
        value.ul_DCCH_MessageEUTRA.bytes = nullptr;
        value.ul_DCCH_MessageEUTRA.length = 0;
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_ULInformationTransferMRDC_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
