/* ============================================================================
 * src/generated/codec_part012.cpp — 生成的编解码函数
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
// ULInformationTransferMRDC_CriticalExtensions_C1：ASN.1 criticalExtensions/c1；源文件第 3298 行；CHOICE。
// Encode_ULInformationTransferMRDC_CriticalExtensions_C1 只读不分配；Decode_ULInformationTransferMRDC_CriticalExtensions_C1 可能 malloc（失败时内部已释放并清零）；Free_ULInformationTransferMRDC_CriticalExtensions_C1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ULInformationTransferMRDC_CriticalExtensions_C1(Encoder& enc, const ULInformationTransferMRDC_CriticalExtensions_C1& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 3);
    switch (value.tag) {
    case ULInformationTransferMRDC_CriticalExtensions_C1_Tag_ulInformationTransferMRDC:
        Encode_ULInformationTransferMRDC_IEs(enc, value.u.ulInformationTransferMRDC);
        break;
    case ULInformationTransferMRDC_CriticalExtensions_C1_Tag_spare3:
        (void)0;
        break;
    case ULInformationTransferMRDC_CriticalExtensions_C1_Tag_spare2:
        (void)0;
        break;
    case ULInformationTransferMRDC_CriticalExtensions_C1_Tag_spare1:
        (void)0;
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_ULInformationTransferMRDC_CriticalExtensions_C1(Decoder& dec, ULInformationTransferMRDC_CriticalExtensions_C1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 3, root_index)) {
        goto fail;
    }
    value.tag = (ULInformationTransferMRDC_CriticalExtensions_C1_Tag)root_index;
    switch (value.tag) {
    case ULInformationTransferMRDC_CriticalExtensions_C1_Tag_ulInformationTransferMRDC: {
        if (Decode_ULInformationTransferMRDC_IEs(dec, value.u.ulInformationTransferMRDC) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case ULInformationTransferMRDC_CriticalExtensions_C1_Tag_spare3: {
        (void)0;
        break;
    }
    case ULInformationTransferMRDC_CriticalExtensions_C1_Tag_spare2: {
        (void)0;
        break;
    }
    case ULInformationTransferMRDC_CriticalExtensions_C1_Tag_spare1: {
        (void)0;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ULInformationTransferMRDC_CriticalExtensions_C1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ULInformationTransferMRDC_CriticalExtensions_C1(ULInformationTransferMRDC_CriticalExtensions_C1& value)
{
    switch (value.tag) {
    case ULInformationTransferMRDC_CriticalExtensions_C1_Tag_ulInformationTransferMRDC:
        Free_ULInformationTransferMRDC_IEs(value.u.ulInformationTransferMRDC);
        break;
    case ULInformationTransferMRDC_CriticalExtensions_C1_Tag_spare3:
        break;
    case ULInformationTransferMRDC_CriticalExtensions_C1_Tag_spare2:
        break;
    case ULInformationTransferMRDC_CriticalExtensions_C1_Tag_spare1:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ULInformationTransferMRDC_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 3302 行；空 SEQUENCE{}。
// Encode_ULInformationTransferMRDC_CriticalExtensionsFuture 只读不分配；Decode_ULInformationTransferMRDC_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_ULInformationTransferMRDC_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ULInformationTransferMRDC_CriticalExtensionsFuture(Encoder& enc, const ULInformationTransferMRDC_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_ULInformationTransferMRDC_CriticalExtensionsFuture(Decoder& dec, ULInformationTransferMRDC_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ULInformationTransferMRDC_CriticalExtensionsFuture(ULInformationTransferMRDC_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ULInformationTransferMRDC_CriticalExtensions：ASN.1 criticalExtensions；源文件第 3297 行；CHOICE。
// Encode_ULInformationTransferMRDC_CriticalExtensions 只读不分配；Decode_ULInformationTransferMRDC_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_ULInformationTransferMRDC_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ULInformationTransferMRDC_CriticalExtensions(Encoder& enc, const ULInformationTransferMRDC_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case ULInformationTransferMRDC_CriticalExtensions_Tag_c1:
        Encode_ULInformationTransferMRDC_CriticalExtensions_C1(enc, value.u.c1);
        break;
    case ULInformationTransferMRDC_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_ULInformationTransferMRDC_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_ULInformationTransferMRDC_CriticalExtensions(Decoder& dec, ULInformationTransferMRDC_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (ULInformationTransferMRDC_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case ULInformationTransferMRDC_CriticalExtensions_Tag_c1: {
        if (Decode_ULInformationTransferMRDC_CriticalExtensions_C1(dec, value.u.c1) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case ULInformationTransferMRDC_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_ULInformationTransferMRDC_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ULInformationTransferMRDC_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ULInformationTransferMRDC_CriticalExtensions(ULInformationTransferMRDC_CriticalExtensions& value)
{
    switch (value.tag) {
    case ULInformationTransferMRDC_CriticalExtensions_Tag_c1:
        Free_ULInformationTransferMRDC_CriticalExtensions_C1(value.u.c1);
        break;
    case ULInformationTransferMRDC_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_ULInformationTransferMRDC_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ULInformationTransferMRDC：ASN.1 ULInformationTransferMRDC；源文件第 3296 行；SEQUENCE。
// Encode_ULInformationTransferMRDC 只读不分配；Decode_ULInformationTransferMRDC 可能 malloc（失败时内部已释放并清零）；Free_ULInformationTransferMRDC 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ULInformationTransferMRDC(Encoder& enc, const ULInformationTransferMRDC& value)
{
    Encode_ULInformationTransferMRDC_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_ULInformationTransferMRDC(Decoder& dec, ULInformationTransferMRDC& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_ULInformationTransferMRDC_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ULInformationTransferMRDC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ULInformationTransferMRDC(ULInformationTransferMRDC& value)
{
    Free_ULInformationTransferMRDC_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16：ASN.1 relaxedMeasurement-r16/lowMobilityEvaluation-r16；源文件第 3389 行；SEQUENCE。
// Encode_SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16 只读不分配；Decode_SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16 可能 malloc（失败时内部已释放并清零）；Free_SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16(Encoder& enc, const SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.s_SearchDeltaP_r16), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.t_SearchDeltaP_r16), 0, 15);
    return enc.Error();
}

ErrorCode Decode_SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16(Decoder& dec, SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.s_SearchDeltaP_r16 = (SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_S_SearchDeltaP_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.t_SearchDeltaP_r16 = (SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_T_SearchDeltaP_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16(SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB2_ExtGroup1_RelaxedMeasurement_r16_CellEdgeEvaluation_r16：ASN.1 relaxedMeasurement-r16/cellEdgeEvaluation-r16；源文件第 3398 行；SEQUENCE。
// Encode_SIB2_ExtGroup1_RelaxedMeasurement_r16_CellEdgeEvaluation_r16 只读不分配；Decode_SIB2_ExtGroup1_RelaxedMeasurement_r16_CellEdgeEvaluation_r16 可能 malloc（失败时内部已释放并清零）；Free_SIB2_ExtGroup1_RelaxedMeasurement_r16_CellEdgeEvaluation_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB2_ExtGroup1_RelaxedMeasurement_r16_CellEdgeEvaluation_r16(Encoder& enc, const SIB2_ExtGroup1_RelaxedMeasurement_r16_CellEdgeEvaluation_r16& value)
{
    enc.WriteBit(value.has_s_SearchThresholdQ_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.s_SearchThresholdP_r16), 0, 31);
    if (value.has_s_SearchThresholdQ_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.s_SearchThresholdQ_r16), 0, 31);
    }
    return enc.Error();
}

ErrorCode Decode_SIB2_ExtGroup1_RelaxedMeasurement_r16_CellEdgeEvaluation_r16(Decoder& dec, SIB2_ExtGroup1_RelaxedMeasurement_r16_CellEdgeEvaluation_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.s_SearchThresholdP_r16 = (ReselectionThreshold)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.s_SearchThresholdQ_r16 = (ReselectionThresholdQ)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB2_ExtGroup1_RelaxedMeasurement_r16_CellEdgeEvaluation_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB2_ExtGroup1_RelaxedMeasurement_r16_CellEdgeEvaluation_r16(SIB2_ExtGroup1_RelaxedMeasurement_r16_CellEdgeEvaluation_r16& value)
{
    if (value.has_s_SearchThresholdQ_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB2_ExtGroup1_RelaxedMeasurement_r16：ASN.1 relaxedMeasurement-r16；源文件第 3388 行；SEQUENCE。
// Encode_SIB2_ExtGroup1_RelaxedMeasurement_r16 只读不分配；Decode_SIB2_ExtGroup1_RelaxedMeasurement_r16 可能 malloc（失败时内部已释放并清零）；Free_SIB2_ExtGroup1_RelaxedMeasurement_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB2_ExtGroup1_RelaxedMeasurement_r16(Encoder& enc, const SIB2_ExtGroup1_RelaxedMeasurement_r16& value)
{
    enc.WriteBit(value.has_lowMobilityEvaluation_r16);
    enc.WriteBit(value.has_cellEdgeEvaluation_r16);
    enc.WriteBit(value.has_combineRelaxedMeasCondition_r16);
    enc.WriteBit(value.has_highPriorityMeasRelax_r16);
    if (value.has_lowMobilityEvaluation_r16) {
        Encode_SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16(enc, value.lowMobilityEvaluation_r16);
    }
    if (value.has_cellEdgeEvaluation_r16) {
        Encode_SIB2_ExtGroup1_RelaxedMeasurement_r16_CellEdgeEvaluation_r16(enc, value.cellEdgeEvaluation_r16);
    }
    if (value.has_combineRelaxedMeasCondition_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.combineRelaxedMeasCondition_r16), 0, 0);
    }
    if (value.has_highPriorityMeasRelax_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.highPriorityMeasRelax_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SIB2_ExtGroup1_RelaxedMeasurement_r16(Decoder& dec, SIB2_ExtGroup1_RelaxedMeasurement_r16& value)
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
        if (Decode_SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16(dec, value.lowMobilityEvaluation_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SIB2_ExtGroup1_RelaxedMeasurement_r16_CellEdgeEvaluation_r16(dec, value.cellEdgeEvaluation_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        value.combineRelaxedMeasCondition_r16 = (SIB2_ExtGroup1_RelaxedMeasurement_r16_CombineRelaxedMeasCondition_r16)0;
    }
    if (present_3) {
        value.highPriorityMeasRelax_r16 = (SIB2_ExtGroup1_RelaxedMeasurement_r16_HighPriorityMeasRelax_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB2_ExtGroup1_RelaxedMeasurement_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB2_ExtGroup1_RelaxedMeasurement_r16(SIB2_ExtGroup1_RelaxedMeasurement_r16& value)
{
    if (value.has_lowMobilityEvaluation_r16) {
        Free_SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16(value.lowMobilityEvaluation_r16);
    }
    if (value.has_cellEdgeEvaluation_r16) {
        Free_SIB2_ExtGroup1_RelaxedMeasurement_r16_CellEdgeEvaluation_r16(value.cellEdgeEvaluation_r16);
    }
    if (value.has_combineRelaxedMeasCondition_r16) {
    }
    if (value.has_highPriorityMeasRelax_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB2_ExtGroup1：ASN.1 SIB2_ExtGroup1；源文件第 3387 行；扩展添加组 [[ ]]。
// Encode_SIB2_ExtGroup1 只读不分配；Decode_SIB2_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SIB2_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB2_ExtGroup1(Encoder& enc, const SIB2_ExtGroup1& value)
{
    enc.WriteBit(value.has_relaxedMeasurement_r16);
    if (value.has_relaxedMeasurement_r16) {
        Encode_SIB2_ExtGroup1_RelaxedMeasurement_r16(enc, value.relaxedMeasurement_r16);
    }
    return enc.Error();
}

ErrorCode Decode_SIB2_ExtGroup1(Decoder& dec, SIB2_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SIB2_ExtGroup1_RelaxedMeasurement_r16(dec, value.relaxedMeasurement_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB2_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB2_ExtGroup1(SIB2_ExtGroup1& value)
{
    if (value.has_relaxedMeasurement_r16) {
        Free_SIB2_ExtGroup1_RelaxedMeasurement_r16(value.relaxedMeasurement_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17：ASN.1 relaxedMeasurement-r17/stationaryMobilityEvaluation-r17；源文件第 3409 行；SEQUENCE。
// Encode_SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17 只读不分配；Decode_SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17 可能 malloc（失败时内部已释放并清零）；Free_SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17(Encoder& enc, const SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.s_SearchDeltaP_Stationary_r17), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.t_SearchDeltaP_Stationary_r17), 0, 15);
    return enc.Error();
}

ErrorCode Decode_SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17(Decoder& dec, SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.s_SearchDeltaP_Stationary_r17 = (SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_S_SearchDeltaP_Stationary_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.t_SearchDeltaP_Stationary_r17 = (SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_T_SearchDeltaP_Stationary_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17(SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB2_ExtGroup2_RelaxedMeasurement_r17_CellEdgeEvaluationWhileStationary_r17：ASN.1 relaxedMeasurement-r17/cellEdgeEvaluationWhileStationary-r17；源文件第 3414 行；SEQUENCE。
// Encode_SIB2_ExtGroup2_RelaxedMeasurement_r17_CellEdgeEvaluationWhileStationary_r17 只读不分配；Decode_SIB2_ExtGroup2_RelaxedMeasurement_r17_CellEdgeEvaluationWhileStationary_r17 可能 malloc（失败时内部已释放并清零）；Free_SIB2_ExtGroup2_RelaxedMeasurement_r17_CellEdgeEvaluationWhileStationary_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB2_ExtGroup2_RelaxedMeasurement_r17_CellEdgeEvaluationWhileStationary_r17(Encoder& enc, const SIB2_ExtGroup2_RelaxedMeasurement_r17_CellEdgeEvaluationWhileStationary_r17& value)
{
    enc.WriteBit(value.has_s_SearchThresholdQ2_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.s_SearchThresholdP2_r17), 0, 31);
    if (value.has_s_SearchThresholdQ2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.s_SearchThresholdQ2_r17), 0, 31);
    }
    return enc.Error();
}

ErrorCode Decode_SIB2_ExtGroup2_RelaxedMeasurement_r17_CellEdgeEvaluationWhileStationary_r17(Decoder& dec, SIB2_ExtGroup2_RelaxedMeasurement_r17_CellEdgeEvaluationWhileStationary_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.s_SearchThresholdP2_r17 = (ReselectionThreshold)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.s_SearchThresholdQ2_r17 = (ReselectionThresholdQ)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB2_ExtGroup2_RelaxedMeasurement_r17_CellEdgeEvaluationWhileStationary_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB2_ExtGroup2_RelaxedMeasurement_r17_CellEdgeEvaluationWhileStationary_r17(SIB2_ExtGroup2_RelaxedMeasurement_r17_CellEdgeEvaluationWhileStationary_r17& value)
{
    if (value.has_s_SearchThresholdQ2_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB2_ExtGroup2_RelaxedMeasurement_r17：ASN.1 relaxedMeasurement-r17；源文件第 3408 行；SEQUENCE。
// Encode_SIB2_ExtGroup2_RelaxedMeasurement_r17 只读不分配；Decode_SIB2_ExtGroup2_RelaxedMeasurement_r17 可能 malloc（失败时内部已释放并清零）；Free_SIB2_ExtGroup2_RelaxedMeasurement_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB2_ExtGroup2_RelaxedMeasurement_r17(Encoder& enc, const SIB2_ExtGroup2_RelaxedMeasurement_r17& value)
{
    enc.WriteBit(value.has_cellEdgeEvaluationWhileStationary_r17);
    enc.WriteBit(value.has_combineRelaxedMeasCondition2_r17);
    Encode_SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17(enc, value.stationaryMobilityEvaluation_r17);
    if (value.has_cellEdgeEvaluationWhileStationary_r17) {
        Encode_SIB2_ExtGroup2_RelaxedMeasurement_r17_CellEdgeEvaluationWhileStationary_r17(enc, value.cellEdgeEvaluationWhileStationary_r17);
    }
    if (value.has_combineRelaxedMeasCondition2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.combineRelaxedMeasCondition2_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SIB2_ExtGroup2_RelaxedMeasurement_r17(Decoder& dec, SIB2_ExtGroup2_RelaxedMeasurement_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        if (Decode_SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17(dec, value.stationaryMobilityEvaluation_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_SIB2_ExtGroup2_RelaxedMeasurement_r17_CellEdgeEvaluationWhileStationary_r17(dec, value.cellEdgeEvaluationWhileStationary_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.combineRelaxedMeasCondition2_r17 = (SIB2_ExtGroup2_RelaxedMeasurement_r17_CombineRelaxedMeasCondition2_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB2_ExtGroup2_RelaxedMeasurement_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB2_ExtGroup2_RelaxedMeasurement_r17(SIB2_ExtGroup2_RelaxedMeasurement_r17& value)
{
    Free_SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17(value.stationaryMobilityEvaluation_r17);
    if (value.has_cellEdgeEvaluationWhileStationary_r17) {
        Free_SIB2_ExtGroup2_RelaxedMeasurement_r17_CellEdgeEvaluationWhileStationary_r17(value.cellEdgeEvaluationWhileStationary_r17);
    }
    if (value.has_combineRelaxedMeasCondition2_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB2_ExtGroup2：ASN.1 SIB2_ExtGroup2；源文件第 3406 行；扩展添加组 [[ ]]。
// Encode_SIB2_ExtGroup2 只读不分配；Decode_SIB2_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_SIB2_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB2_ExtGroup2(Encoder& enc, const SIB2_ExtGroup2& value)
{
    enc.WriteBit(value.has_cellEquivalentSize_r17);
    enc.WriteBit(value.has_relaxedMeasurement_r17);
    if (value.has_cellEquivalentSize_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cellEquivalentSize_r17), 2, 16);
    }
    if (value.has_relaxedMeasurement_r17) {
        Encode_SIB2_ExtGroup2_RelaxedMeasurement_r17(enc, value.relaxedMeasurement_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SIB2_ExtGroup2(Decoder& dec, SIB2_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 16, tmp_value)) { goto fail; }
        value.cellEquivalentSize_r17 = (int64_t)tmp_value;
    }
    if (present_1) {
        if (Decode_SIB2_ExtGroup2_RelaxedMeasurement_r17(dec, value.relaxedMeasurement_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB2_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB2_ExtGroup2(SIB2_ExtGroup2& value)
{
    if (value.has_cellEquivalentSize_r17) {
    }
    if (value.has_relaxedMeasurement_r17) {
        Free_SIB2_ExtGroup2_RelaxedMeasurement_r17(value.relaxedMeasurement_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ThresholdNR：ASN.1 ThresholdNR；源文件第 7796 行；SEQUENCE。
// Encode_ThresholdNR 只读不分配；Decode_ThresholdNR 可能 malloc（失败时内部已释放并清零）；Free_ThresholdNR 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ThresholdNR(Encoder& enc, const ThresholdNR& value)
{
    enc.WriteBit(value.has_thresholdRSRP);
    enc.WriteBit(value.has_thresholdRSRQ);
    enc.WriteBit(value.has_thresholdSINR);
    if (value.has_thresholdRSRP) {
        enc.WriteConstrainedInteger((std::int64_t)(value.thresholdRSRP), 0, 127);
    }
    if (value.has_thresholdRSRQ) {
        enc.WriteConstrainedInteger((std::int64_t)(value.thresholdRSRQ), 0, 127);
    }
    if (value.has_thresholdSINR) {
        enc.WriteConstrainedInteger((std::int64_t)(value.thresholdSINR), 0, 127);
    }
    return enc.Error();
}

ErrorCode Decode_ThresholdNR(Decoder& dec, ThresholdNR& value)
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
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.thresholdRSRP = (RSRP_Range)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.thresholdRSRQ = (RSRQ_Range)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.thresholdSINR = (SINR_Range)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ThresholdNR(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ThresholdNR(ThresholdNR& value)
{
    if (value.has_thresholdRSRP) {
    }
    if (value.has_thresholdRSRQ) {
    }
    if (value.has_thresholdSINR) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MobilityStateParameters：ASN.1 MobilityStateParameters；源文件第 8306 行；SEQUENCE。
// Encode_MobilityStateParameters 只读不分配；Decode_MobilityStateParameters 可能 malloc（失败时内部已释放并清零）；Free_MobilityStateParameters 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MobilityStateParameters(Encoder& enc, const MobilityStateParameters& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.t_Evaluation), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.t_HystNormal), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.n_CellChangeMedium), 1, 16);
    enc.WriteConstrainedInteger((std::int64_t)(value.n_CellChangeHigh), 1, 16);
    return enc.Error();
}

ErrorCode Decode_MobilityStateParameters(Decoder& dec, MobilityStateParameters& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.t_Evaluation = (MobilityStateParameters_T_Evaluation)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.t_HystNormal = (MobilityStateParameters_T_HystNormal)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.n_CellChangeMedium = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.n_CellChangeHigh = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MobilityStateParameters(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MobilityStateParameters(MobilityStateParameters& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF：ASN.1 cellReselectionInfoCommon/speedStateReselectionPars/q-HystSF；源文件第 3334 行；SEQUENCE。
// Encode_SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF 只读不分配；Decode_SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF 可能 malloc（失败时内部已释放并清零）；Free_SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF(Encoder& enc, const SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.sf_Medium), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.sf_High), 0, 3);
    return enc.Error();
}

ErrorCode Decode_SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF(Decoder& dec, SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.sf_Medium = (SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF_Sf_Medium)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.sf_High = (SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF_Sf_High)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF(SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars：ASN.1 cellReselectionInfoCommon/speedStateReselectionPars；源文件第 3332 行；SEQUENCE。
// Encode_SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars 只读不分配；Decode_SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars 可能 malloc（失败时内部已释放并清零）；Free_SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars(Encoder& enc, const SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars& value)
{
    Encode_MobilityStateParameters(enc, value.mobilityStateParameters);
    Encode_SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF(enc, value.q_HystSF);
    return enc.Error();
}

ErrorCode Decode_SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars(Decoder& dec, SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MobilityStateParameters(dec, value.mobilityStateParameters) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF(dec, value.q_HystSF) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars(SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars& value)
{
    Free_MobilityStateParameters(value.mobilityStateParameters);
    Free_SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF(value.q_HystSF);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB2_CellReselectionInfoCommon：ASN.1 cellReselectionInfoCommon；源文件第 3325 行；SEQUENCE。
// Encode_SIB2_CellReselectionInfoCommon 只读不分配；Decode_SIB2_CellReselectionInfoCommon 可能 malloc（失败时内部已释放并清零）；Free_SIB2_CellReselectionInfoCommon 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB2_CellReselectionInfoCommon(Encoder& enc, const SIB2_CellReselectionInfoCommon& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_nrofSS_BlocksToAverage);
    enc.WriteBit(value.has_absThreshSS_BlocksConsolidation);
    enc.WriteBit(value.has_rangeToBestCell);
    enc.WriteBit(value.has_speedStateReselectionPars);
    if (value.has_nrofSS_BlocksToAverage) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrofSS_BlocksToAverage), 2, 16);
    }
    if (value.has_absThreshSS_BlocksConsolidation) {
        Encode_ThresholdNR(enc, value.absThreshSS_BlocksConsolidation);
    }
    if (value.has_rangeToBestCell) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rangeToBestCell), 0, 30);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.q_Hyst), 0, 15);
    if (value.has_speedStateReselectionPars) {
        Encode_SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars(enc, value.speedStateReselectionPars);
    }
    return enc.Error();
}

ErrorCode Decode_SIB2_CellReselectionInfoCommon(Decoder& dec, SIB2_CellReselectionInfoCommon& value)
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
        if (!dec.ReadConstrainedInteger(2, 16, tmp_value)) { goto fail; }
        value.nrofSS_BlocksToAverage = (int64_t)tmp_value;
    }
    if (present_1) {
        if (Decode_ThresholdNR(dec, value.absThreshSS_BlocksConsolidation) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.rangeToBestCell = (Q_OffsetRange)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.q_Hyst = (SIB2_CellReselectionInfoCommon_Q_Hyst)tmp_value;
    }
    if (present_3) {
        if (Decode_SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars(dec, value.speedStateReselectionPars) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB2_CellReselectionInfoCommon(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB2_CellReselectionInfoCommon(SIB2_CellReselectionInfoCommon& value)
{
    if (value.has_nrofSS_BlocksToAverage) {
    }
    if (value.has_absThreshSS_BlocksConsolidation) {
        Free_ThresholdNR(value.absThreshSS_BlocksConsolidation);
    }
    if (value.has_rangeToBestCell) {
    }
    if (value.has_speedStateReselectionPars) {
        Free_SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars(value.speedStateReselectionPars);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB2_CellReselectionServingFreqInfo：ASN.1 cellReselectionServingFreqInfo；源文件第 3341 行；SEQUENCE。
// Encode_SIB2_CellReselectionServingFreqInfo 只读不分配；Decode_SIB2_CellReselectionServingFreqInfo 可能 malloc（失败时内部已释放并清零）；Free_SIB2_CellReselectionServingFreqInfo 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB2_CellReselectionServingFreqInfo(Encoder& enc, const SIB2_CellReselectionServingFreqInfo& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_s_NonIntraSearchP);
    enc.WriteBit(value.has_s_NonIntraSearchQ);
    enc.WriteBit(value.has_threshServingLowQ);
    enc.WriteBit(value.has_cellReselectionSubPriority);
    if (value.has_s_NonIntraSearchP) {
        enc.WriteConstrainedInteger((std::int64_t)(value.s_NonIntraSearchP), 0, 31);
    }
    if (value.has_s_NonIntraSearchQ) {
        enc.WriteConstrainedInteger((std::int64_t)(value.s_NonIntraSearchQ), 0, 31);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.threshServingLowP), 0, 31);
    if (value.has_threshServingLowQ) {
        enc.WriteConstrainedInteger((std::int64_t)(value.threshServingLowQ), 0, 31);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.cellReselectionPriority), 0, 7);
    if (value.has_cellReselectionSubPriority) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cellReselectionSubPriority), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_SIB2_CellReselectionServingFreqInfo(Decoder& dec, SIB2_CellReselectionServingFreqInfo& value)
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
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.s_NonIntraSearchP = (ReselectionThreshold)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.s_NonIntraSearchQ = (ReselectionThresholdQ)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.threshServingLowP = (ReselectionThreshold)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.threshServingLowQ = (ReselectionThresholdQ)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.cellReselectionPriority = (CellReselectionPriority)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.cellReselectionSubPriority = (CellReselectionSubPriority)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB2_CellReselectionServingFreqInfo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB2_CellReselectionServingFreqInfo(SIB2_CellReselectionServingFreqInfo& value)
{
    if (value.has_s_NonIntraSearchP) {
    }
    if (value.has_s_NonIntraSearchQ) {
    }
    if (value.has_threshServingLowQ) {
    }
    if (value.has_cellReselectionSubPriority) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SSB_ToMeasure：ASN.1 SSB-ToMeasure；源文件第 13605 行；CHOICE。
// Encode_SSB_ToMeasure 只读不分配；Decode_SSB_ToMeasure 可能 malloc（失败时内部已释放并清零）；Free_SSB_ToMeasure 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SSB_ToMeasure(Encoder& enc, const SSB_ToMeasure& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case SSB_ToMeasure_Tag_shortBitmap:
        enc.WriteFixedBitString(value.u.shortBitmap.bytes, value.u.shortBitmap.bitLength, 4, 4);
        break;
    case SSB_ToMeasure_Tag_mediumBitmap:
        enc.WriteFixedBitString(value.u.mediumBitmap.bytes, value.u.mediumBitmap.bitLength, 8, 8);
        break;
    case SSB_ToMeasure_Tag_longBitmap:
        enc.WriteFixedBitString(value.u.longBitmap.bytes, value.u.longBitmap.bitLength, 64, 64);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SSB_ToMeasure(Decoder& dec, SSB_ToMeasure& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (SSB_ToMeasure_Tag)root_index;
    switch (value.tag) {
    case SSB_ToMeasure_Tag_shortBitmap: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 4)) { goto fail; }
        string_length = 4;
        value.u.shortBitmap.bytes = string_bytes;
        value.u.shortBitmap.bitLength = string_length;
        break;
    }
    case SSB_ToMeasure_Tag_mediumBitmap: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.u.mediumBitmap.bytes = string_bytes;
        value.u.mediumBitmap.bitLength = string_length;
        break;
    }
    case SSB_ToMeasure_Tag_longBitmap: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 64)) { goto fail; }
        string_length = 64;
        value.u.longBitmap.bytes = string_bytes;
        value.u.longBitmap.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SSB_ToMeasure(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SSB_ToMeasure(SSB_ToMeasure& value)
{
    switch (value.tag) {
    case SSB_ToMeasure_Tag_shortBitmap:
        std::free(value.u.shortBitmap.bytes);
        break;
    case SSB_ToMeasure_Tag_mediumBitmap:
        std::free(value.u.mediumBitmap.bytes);
        break;
    case SSB_ToMeasure_Tag_longBitmap:
        std::free(value.u.longBitmap.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SS_RSSI_Measurement：ASN.1 SS-RSSI-Measurement；源文件第 13614 行；SEQUENCE。
// Encode_SS_RSSI_Measurement 只读不分配；Decode_SS_RSSI_Measurement 可能 malloc（失败时内部已释放并清零）；Free_SS_RSSI_Measurement 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SS_RSSI_Measurement(Encoder& enc, const SS_RSSI_Measurement& value)
{
    enc.WriteConstrainedBitString(value.measurementSlots.bytes, value.measurementSlots.bitLength, 1, 80);
    enc.WriteConstrainedInteger((std::int64_t)(value.endSymbol), 0, 3);
    return enc.Error();
}

ErrorCode Decode_SS_RSSI_Measurement(Decoder& dec, SS_RSSI_Measurement& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 1, 80)) { goto fail; }
        value.measurementSlots.bytes = string_bytes;
        value.measurementSlots.bitLength = string_length;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.endSymbol = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SS_RSSI_Measurement(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SS_RSSI_Measurement(SS_RSSI_Measurement& value)
{
    std::free(value.measurementSlots.bytes);
    value.measurementSlots.bytes = nullptr;
    value.measurementSlots.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SpeedStateScaleFactors：ASN.1 SpeedStateScaleFactors；源文件第 12973 行；SEQUENCE。
// Encode_SpeedStateScaleFactors 只读不分配；Decode_SpeedStateScaleFactors 可能 malloc（失败时内部已释放并清零）；Free_SpeedStateScaleFactors 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SpeedStateScaleFactors(Encoder& enc, const SpeedStateScaleFactors& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.sf_Medium), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.sf_High), 0, 3);
    return enc.Error();
}

ErrorCode Decode_SpeedStateScaleFactors(Decoder& dec, SpeedStateScaleFactors& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.sf_Medium = (SpeedStateScaleFactors_Sf_Medium)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.sf_High = (SpeedStateScaleFactors_Sf_High)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SpeedStateScaleFactors(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SpeedStateScaleFactors(SpeedStateScaleFactors& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB2_IntraFreqCellReselectionInfo_ExtGroup1：ASN.1 SIB2_IntraFreqCellReselectionInfo_ExtGroup1；源文件第 3365 行；扩展添加组 [[ ]]。
// Encode_SIB2_IntraFreqCellReselectionInfo_ExtGroup1 只读不分配；Decode_SIB2_IntraFreqCellReselectionInfo_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SIB2_IntraFreqCellReselectionInfo_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB2_IntraFreqCellReselectionInfo_ExtGroup1(Encoder& enc, const SIB2_IntraFreqCellReselectionInfo_ExtGroup1& value)
{
    enc.WriteBit(value.has_t_ReselectionNR_SF);
    if (value.has_t_ReselectionNR_SF) {
        Encode_SpeedStateScaleFactors(enc, value.t_ReselectionNR_SF);
    }
    return enc.Error();
}

ErrorCode Decode_SIB2_IntraFreqCellReselectionInfo_ExtGroup1(Decoder& dec, SIB2_IntraFreqCellReselectionInfo_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SpeedStateScaleFactors(dec, value.t_ReselectionNR_SF) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB2_IntraFreqCellReselectionInfo_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB2_IntraFreqCellReselectionInfo_ExtGroup1(SIB2_IntraFreqCellReselectionInfo_ExtGroup1& value)
{
    if (value.has_t_ReselectionNR_SF) {
        Free_SpeedStateScaleFactors(value.t_ReselectionNR_SF);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SSB_MTC2_LP_r16：ASN.1 SSB-MTC2-LP-r16；源文件第 13554 行；SEQUENCE。
// Encode_SSB_MTC2_LP_r16 只读不分配；Decode_SSB_MTC2_LP_r16 可能 malloc（失败时内部已释放并清零）；Free_SSB_MTC2_LP_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SSB_MTC2_LP_r16(Encoder& enc, const SSB_MTC2_LP_r16& value)
{
    enc.WriteBit(value.has_pci_List);
    if (value.has_pci_List) {
enc.WriteConstrainedLength(value.pci_List_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pci_List_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.pci_List_items[i]), 0, 1007);
}
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.periodicity), 0, 7);
    return enc.Error();
}

ErrorCode Decode_SSB_MTC2_LP_r16(Decoder& dec, SSB_MTC2_LP_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.pci_List_count)) { goto fail; }
if (value.pci_List_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pci_List_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pci_List_count > 0u) {
    value.pci_List_items = (PhysCellId*)std::malloc((std::size_t)value.pci_List_count * sizeof(PhysCellId));
    if (value.pci_List_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pci_List_items, 0, (std::size_t)value.pci_List_count * sizeof(PhysCellId));
}
for (std::uint32_t i = 0; i < value.pci_List_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
    value.pci_List_items[i] = (PhysCellId)tmp_value;
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.periodicity = (SSB_MTC2_LP_r16_Periodicity)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SSB_MTC2_LP_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SSB_MTC2_LP_r16(SSB_MTC2_LP_r16& value)
{
    if (value.has_pci_List) {
        if (value.pci_List_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pci_List_count; ++i) {
            }
            std::free(value.pci_List_items);
            value.pci_List_items = nullptr;
        }
        value.pci_List_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB2_IntraFreqCellReselectionInfo_ExtGroup2：ASN.1 SIB2_IntraFreqCellReselectionInfo_ExtGroup2；源文件第 3368 行；扩展添加组 [[ ]]。
// Encode_SIB2_IntraFreqCellReselectionInfo_ExtGroup2 只读不分配；Decode_SIB2_IntraFreqCellReselectionInfo_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_SIB2_IntraFreqCellReselectionInfo_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB2_IntraFreqCellReselectionInfo_ExtGroup2(Encoder& enc, const SIB2_IntraFreqCellReselectionInfo_ExtGroup2& value)
{
    enc.WriteBit(value.has_smtc2_LP_r16);
    enc.WriteBit(value.has_ssb_PositionQCL_Common_r16);
    if (value.has_smtc2_LP_r16) {
        Encode_SSB_MTC2_LP_r16(enc, value.smtc2_LP_r16);
    }
    if (value.has_ssb_PositionQCL_Common_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_PositionQCL_Common_r16), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_SIB2_IntraFreqCellReselectionInfo_ExtGroup2(Decoder& dec, SIB2_IntraFreqCellReselectionInfo_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SSB_MTC2_LP_r16(dec, value.smtc2_LP_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.ssb_PositionQCL_Common_r16 = (SSB_PositionQCL_Relation_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB2_IntraFreqCellReselectionInfo_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB2_IntraFreqCellReselectionInfo_ExtGroup2(SIB2_IntraFreqCellReselectionInfo_ExtGroup2& value)
{
    if (value.has_smtc2_LP_r16) {
        Free_SSB_MTC2_LP_r16(value.smtc2_LP_r16);
    }
    if (value.has_ssb_PositionQCL_Common_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB2_IntraFreqCellReselectionInfo_ExtGroup3：ASN.1 SIB2_IntraFreqCellReselectionInfo_ExtGroup3；源文件第 3372 行；扩展添加组 [[ ]]。
// Encode_SIB2_IntraFreqCellReselectionInfo_ExtGroup3 只读不分配；Decode_SIB2_IntraFreqCellReselectionInfo_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_SIB2_IntraFreqCellReselectionInfo_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB2_IntraFreqCellReselectionInfo_ExtGroup3(Encoder& enc, const SIB2_IntraFreqCellReselectionInfo_ExtGroup3& value)
{
    enc.WriteBit(value.has_ssb_PositionQCL_Common_r17);
    if (value.has_ssb_PositionQCL_Common_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_PositionQCL_Common_r17), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_SIB2_IntraFreqCellReselectionInfo_ExtGroup3(Decoder& dec, SIB2_IntraFreqCellReselectionInfo_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.ssb_PositionQCL_Common_r17 = (SSB_PositionQCL_Relation_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB2_IntraFreqCellReselectionInfo_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB2_IntraFreqCellReselectionInfo_ExtGroup3(SIB2_IntraFreqCellReselectionInfo_ExtGroup3& value)
{
    if (value.has_ssb_PositionQCL_Common_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SSB_MTC4List_r17：ASN.1 SSB-MTC4List-r17；源文件第 7753 行；SEQUENCE OF。
// Encode_SSB_MTC4List_r17 只读不分配；Decode_SSB_MTC4List_r17 可能 malloc（失败时内部已释放并清零）；Free_SSB_MTC4List_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SSB_MTC4List_r17(Encoder& enc, const SSB_MTC4List_r17& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 3u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SSB_MTC4_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SSB_MTC4List_r17(Decoder& dec, SSB_MTC4List_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 3u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 3u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SSB_MTC4_r17*)std::malloc((std::size_t)value.count * sizeof(SSB_MTC4_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SSB_MTC4_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SSB_MTC4_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SSB_MTC4List_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SSB_MTC4List_r17(SSB_MTC4List_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SSB_MTC4_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB2_IntraFreqCellReselectionInfo_ExtGroup4：ASN.1 SIB2_IntraFreqCellReselectionInfo_ExtGroup4；源文件第 3375 行；扩展添加组 [[ ]]。
// Encode_SIB2_IntraFreqCellReselectionInfo_ExtGroup4 只读不分配；Decode_SIB2_IntraFreqCellReselectionInfo_ExtGroup4 可能 malloc（失败时内部已释放并清零）；Free_SIB2_IntraFreqCellReselectionInfo_ExtGroup4 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB2_IntraFreqCellReselectionInfo_ExtGroup4(Encoder& enc, const SIB2_IntraFreqCellReselectionInfo_ExtGroup4& value)
{
    enc.WriteBit(value.has_smtc4list_r17);
    if (value.has_smtc4list_r17) {
        Encode_SSB_MTC4List_r17(enc, value.smtc4list_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SIB2_IntraFreqCellReselectionInfo_ExtGroup4(Decoder& dec, SIB2_IntraFreqCellReselectionInfo_ExtGroup4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SSB_MTC4List_r17(dec, value.smtc4list_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB2_IntraFreqCellReselectionInfo_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB2_IntraFreqCellReselectionInfo_ExtGroup4(SIB2_IntraFreqCellReselectionInfo_ExtGroup4& value)
{
    if (value.has_smtc4list_r17) {
        Free_SSB_MTC4List_r17(value.smtc4list_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB2_IntraFreqCellReselectionInfo_ExtGroup5：ASN.1 SIB2_IntraFreqCellReselectionInfo_ExtGroup5；源文件第 3378 行；扩展添加组 [[ ]]。
// Encode_SIB2_IntraFreqCellReselectionInfo_ExtGroup5 只读不分配；Decode_SIB2_IntraFreqCellReselectionInfo_ExtGroup5 可能 malloc（失败时内部已释放并清零）；Free_SIB2_IntraFreqCellReselectionInfo_ExtGroup5 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB2_IntraFreqCellReselectionInfo_ExtGroup5(Encoder& enc, const SIB2_IntraFreqCellReselectionInfo_ExtGroup5& value)
{
    enc.WriteBit(value.has_frequencyBandList_v1760);
    enc.WriteBit(value.has_frequencyBandListSUL_v1760);
    if (value.has_frequencyBandList_v1760) {
        Encode_MultiFrequencyBandListNR_SIB_v1760(enc, value.frequencyBandList_v1760);
    }
    if (value.has_frequencyBandListSUL_v1760) {
        Encode_MultiFrequencyBandListNR_SIB_v1760(enc, value.frequencyBandListSUL_v1760);
    }
    return enc.Error();
}

ErrorCode Decode_SIB2_IntraFreqCellReselectionInfo_ExtGroup5(Decoder& dec, SIB2_IntraFreqCellReselectionInfo_ExtGroup5& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MultiFrequencyBandListNR_SIB_v1760(dec, value.frequencyBandList_v1760) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MultiFrequencyBandListNR_SIB_v1760(dec, value.frequencyBandListSUL_v1760) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB2_IntraFreqCellReselectionInfo_ExtGroup5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB2_IntraFreqCellReselectionInfo_ExtGroup5(SIB2_IntraFreqCellReselectionInfo_ExtGroup5& value)
{
    if (value.has_frequencyBandList_v1760) {
        Free_MultiFrequencyBandListNR_SIB_v1760(value.frequencyBandList_v1760);
    }
    if (value.has_frequencyBandListSUL_v1760) {
        Free_MultiFrequencyBandListNR_SIB_v1760(value.frequencyBandListSUL_v1760);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB2_IntraFreqCellReselectionInfo_ExtGroup6：ASN.1 SIB2_IntraFreqCellReselectionInfo_ExtGroup6；源文件第 3382 行；扩展添加组 [[ ]]。
// Encode_SIB2_IntraFreqCellReselectionInfo_ExtGroup6 只读不分配；Decode_SIB2_IntraFreqCellReselectionInfo_ExtGroup6 可能 malloc（失败时内部已释放并清零）；Free_SIB2_IntraFreqCellReselectionInfo_ExtGroup6 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB2_IntraFreqCellReselectionInfo_ExtGroup6(Encoder& enc, const SIB2_IntraFreqCellReselectionInfo_ExtGroup6& value)
{
    enc.WriteBit(value.has_frequencyBandListAerial_r18);
    if (value.has_frequencyBandListAerial_r18) {
        Encode_MultiFrequencyBandListNR_Aerial_SIB_r18(enc, value.frequencyBandListAerial_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SIB2_IntraFreqCellReselectionInfo_ExtGroup6(Decoder& dec, SIB2_IntraFreqCellReselectionInfo_ExtGroup6& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_MultiFrequencyBandListNR_Aerial_SIB_r18(dec, value.frequencyBandListAerial_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB2_IntraFreqCellReselectionInfo_ExtGroup6(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB2_IntraFreqCellReselectionInfo_ExtGroup6(SIB2_IntraFreqCellReselectionInfo_ExtGroup6& value)
{
    if (value.has_frequencyBandListAerial_r18) {
        Free_MultiFrequencyBandListNR_Aerial_SIB_r18(value.frequencyBandListAerial_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB2_IntraFreqCellReselectionInfo：ASN.1 intraFreqCellReselectionInfo；源文件第 3350 行；SEQUENCE。
// Encode_SIB2_IntraFreqCellReselectionInfo 只读不分配；Decode_SIB2_IntraFreqCellReselectionInfo 可能 malloc（失败时内部已释放并清零）；Free_SIB2_IntraFreqCellReselectionInfo 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB2_IntraFreqCellReselectionInfo(Encoder& enc, const SIB2_IntraFreqCellReselectionInfo& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4 || value.has_extGroup5 || value.has_extGroup6;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_q_RxLevMinSUL);
    enc.WriteBit(value.has_q_QualMin);
    enc.WriteBit(value.has_s_IntraSearchQ);
    enc.WriteBit(value.has_frequencyBandList);
    enc.WriteBit(value.has_frequencyBandListSUL);
    enc.WriteBit(value.has_p_Max);
    enc.WriteBit(value.has_smtc);
    enc.WriteBit(value.has_ss_RSSI_Measurement);
    enc.WriteBit(value.has_ssb_ToMeasure);
    enc.WriteConstrainedInteger((std::int64_t)(value.q_RxLevMin), -70, -22);
    if (value.has_q_RxLevMinSUL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.q_RxLevMinSUL), -70, -22);
    }
    if (value.has_q_QualMin) {
        enc.WriteConstrainedInteger((std::int64_t)(value.q_QualMin), -43, -12);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.s_IntraSearchP), 0, 31);
    if (value.has_s_IntraSearchQ) {
        enc.WriteConstrainedInteger((std::int64_t)(value.s_IntraSearchQ), 0, 31);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.t_ReselectionNR), 0, 7);
    if (value.has_frequencyBandList) {
        Encode_MultiFrequencyBandListNR_SIB(enc, value.frequencyBandList);
    }
    if (value.has_frequencyBandListSUL) {
        Encode_MultiFrequencyBandListNR_SIB(enc, value.frequencyBandListSUL);
    }
    if (value.has_p_Max) {
        enc.WriteConstrainedInteger((std::int64_t)(value.p_Max), -30, 33);
    }
    if (value.has_smtc) {
        Encode_SSB_MTC(enc, value.smtc);
    }
    if (value.has_ss_RSSI_Measurement) {
        Encode_SS_RSSI_Measurement(enc, value.ss_RSSI_Measurement);
    }
    if (value.has_ssb_ToMeasure) {
        Encode_SSB_ToMeasure(enc, value.ssb_ToMeasure);
    }
    enc.WriteBool(value.deriveSSB_IndexFromCell);
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
    Encode_SIB2_IntraFreqCellReselectionInfo_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SIB2_IntraFreqCellReselectionInfo_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_SIB2_IntraFreqCellReselectionInfo_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_SIB2_IntraFreqCellReselectionInfo_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup5) {
    Encoder sub;
    Encode_SIB2_IntraFreqCellReselectionInfo_ExtGroup5(sub, value.extGroup5);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup6) {
    Encoder sub;
    Encode_SIB2_IntraFreqCellReselectionInfo_ExtGroup6(sub, value.extGroup6);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SIB2_IntraFreqCellReselectionInfo(Decoder& dec, SIB2_IntraFreqCellReselectionInfo& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-70, -22, tmp_value)) { goto fail; }
        value.q_RxLevMin = (Q_RxLevMin)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-70, -22, tmp_value)) { goto fail; }
        value.q_RxLevMinSUL = (Q_RxLevMin)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-43, -12, tmp_value)) { goto fail; }
        value.q_QualMin = (Q_QualMin)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.s_IntraSearchP = (ReselectionThreshold)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.s_IntraSearchQ = (ReselectionThresholdQ)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.t_ReselectionNR = (T_Reselection)tmp_value;
    }
    if (present_3) {
        if (Decode_MultiFrequencyBandListNR_SIB(dec, value.frequencyBandList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_MultiFrequencyBandListNR_SIB(dec, value.frequencyBandListSUL) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-30, 33, tmp_value)) { goto fail; }
        value.p_Max = (P_Max)tmp_value;
    }
    if (present_6) {
        if (Decode_SSB_MTC(dec, value.smtc) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        if (Decode_SS_RSSI_Measurement(dec, value.ss_RSSI_Measurement) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        if (Decode_SSB_ToMeasure(dec, value.ssb_ToMeasure) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.deriveSSB_IndexFromCell = tmp_value;
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
    if (Decode_SIB2_IntraFreqCellReselectionInfo_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_SIB2_IntraFreqCellReselectionInfo_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_SIB2_IntraFreqCellReselectionInfo_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_SIB2_IntraFreqCellReselectionInfo_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    if (Decode_SIB2_IntraFreqCellReselectionInfo_ExtGroup5(sub, value.extGroup5) != ErrorCode_Ok) {
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
    if (Decode_SIB2_IntraFreqCellReselectionInfo_ExtGroup6(sub, value.extGroup6) != ErrorCode_Ok) {
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
    Free_SIB2_IntraFreqCellReselectionInfo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB2_IntraFreqCellReselectionInfo(SIB2_IntraFreqCellReselectionInfo& value)
{
    if (value.has_q_RxLevMinSUL) {
    }
    if (value.has_q_QualMin) {
    }
    if (value.has_s_IntraSearchQ) {
    }
    if (value.has_frequencyBandList) {
        Free_MultiFrequencyBandListNR_SIB(value.frequencyBandList);
    }
    if (value.has_frequencyBandListSUL) {
        Free_MultiFrequencyBandListNR_SIB(value.frequencyBandListSUL);
    }
    if (value.has_p_Max) {
    }
    if (value.has_smtc) {
        Free_SSB_MTC(value.smtc);
    }
    if (value.has_ss_RSSI_Measurement) {
        Free_SS_RSSI_Measurement(value.ss_RSSI_Measurement);
    }
    if (value.has_ssb_ToMeasure) {
        Free_SSB_ToMeasure(value.ssb_ToMeasure);
    }
    if (value.has_extGroup1) {
        Free_SIB2_IntraFreqCellReselectionInfo_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SIB2_IntraFreqCellReselectionInfo_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_SIB2_IntraFreqCellReselectionInfo_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_SIB2_IntraFreqCellReselectionInfo_ExtGroup4(value.extGroup4);
    }
    if (value.has_extGroup5) {
        Free_SIB2_IntraFreqCellReselectionInfo_ExtGroup5(value.extGroup5);
    }
    if (value.has_extGroup6) {
        Free_SIB2_IntraFreqCellReselectionInfo_ExtGroup6(value.extGroup6);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB2：ASN.1 SIB2；源文件第 3324 行；SEQUENCE。
// Encode_SIB2 只读不分配；Decode_SIB2 可能 malloc（失败时内部已释放并清零）；Free_SIB2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB2(Encoder& enc, const SIB2& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    Encode_SIB2_CellReselectionInfoCommon(enc, value.cellReselectionInfoCommon);
    Encode_SIB2_CellReselectionServingFreqInfo(enc, value.cellReselectionServingFreqInfo);
    Encode_SIB2_IntraFreqCellReselectionInfo(enc, value.intraFreqCellReselectionInfo);
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SIB2_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SIB2_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SIB2(Decoder& dec, SIB2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
        if (Decode_SIB2_CellReselectionInfoCommon(dec, value.cellReselectionInfoCommon) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_SIB2_CellReselectionServingFreqInfo(dec, value.cellReselectionServingFreqInfo) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_SIB2_IntraFreqCellReselectionInfo(dec, value.intraFreqCellReselectionInfo) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_SIB2_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_SIB2_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_SIB2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB2(SIB2& value)
{
    Free_SIB2_CellReselectionInfoCommon(value.cellReselectionInfoCommon);
    Free_SIB2_CellReselectionServingFreqInfo(value.cellReselectionServingFreqInfo);
    Free_SIB2_IntraFreqCellReselectionInfo(value.intraFreqCellReselectionInfo);
    if (value.has_extGroup1) {
        Free_SIB2_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SIB2_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IntraFreqNeighCellList_v1610：ASN.1 IntraFreqNeighCellList-v1610；源文件第 3449 行；SEQUENCE OF。
// Encode_IntraFreqNeighCellList_v1610 只读不分配；Decode_IntraFreqNeighCellList_v1610 可能 malloc（失败时内部已释放并清零）；Free_IntraFreqNeighCellList_v1610 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IntraFreqNeighCellList_v1610(Encoder& enc, const IntraFreqNeighCellList_v1610& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_IntraFreqNeighCellInfo_v1610(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_IntraFreqNeighCellList_v1610(Decoder& dec, IntraFreqNeighCellList_v1610& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (IntraFreqNeighCellInfo_v1610*)std::malloc((std::size_t)value.count * sizeof(IntraFreqNeighCellInfo_v1610));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(IntraFreqNeighCellInfo_v1610));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_IntraFreqNeighCellInfo_v1610(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_IntraFreqNeighCellList_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IntraFreqNeighCellList_v1610(IntraFreqNeighCellList_v1610& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_IntraFreqNeighCellInfo_v1610(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IntraFreqAllowedCellList_r16：ASN.1 IntraFreqAllowedCellList-r16；源文件第 3472 行；SEQUENCE OF。
// Encode_IntraFreqAllowedCellList_r16 只读不分配；Decode_IntraFreqAllowedCellList_r16 可能 malloc（失败时内部已释放并清零）；Free_IntraFreqAllowedCellList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IntraFreqAllowedCellList_r16(Encoder& enc, const IntraFreqAllowedCellList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PCI_Range(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_IntraFreqAllowedCellList_r16(Decoder& dec, IntraFreqAllowedCellList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PCI_Range*)std::malloc((std::size_t)value.count * sizeof(PCI_Range));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PCI_Range));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PCI_Range(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_IntraFreqAllowedCellList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IntraFreqAllowedCellList_r16(IntraFreqAllowedCellList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PCI_Range(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB3_ExtGroup1：ASN.1 SIB3_ExtGroup1；源文件第 3433 行；扩展添加组 [[ ]]。
// Encode_SIB3_ExtGroup1 只读不分配；Decode_SIB3_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SIB3_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB3_ExtGroup1(Encoder& enc, const SIB3_ExtGroup1& value)
{
    enc.WriteBit(value.has_intraFreqNeighCellList_v1610);
    enc.WriteBit(value.has_intraFreqAllowedCellList_r16);
    enc.WriteBit(value.has_intraFreqCAG_CellList_r16);
    if (value.has_intraFreqNeighCellList_v1610) {
        Encode_IntraFreqNeighCellList_v1610(enc, value.intraFreqNeighCellList_v1610);
    }
    if (value.has_intraFreqAllowedCellList_r16) {
        Encode_IntraFreqAllowedCellList_r16(enc, value.intraFreqAllowedCellList_r16);
    }
    if (value.has_intraFreqCAG_CellList_r16) {
enc.WriteConstrainedLength(value.intraFreqCAG_CellList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.intraFreqCAG_CellList_r16_count; ++i) {
    Encode_IntraFreqCAG_CellListPerPLMN_r16(enc, value.intraFreqCAG_CellList_r16_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_SIB3_ExtGroup1(Decoder& dec, SIB3_ExtGroup1& value)
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
        if (Decode_IntraFreqNeighCellList_v1610(dec, value.intraFreqNeighCellList_v1610) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_IntraFreqAllowedCellList_r16(dec, value.intraFreqAllowedCellList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.intraFreqCAG_CellList_r16_count)) { goto fail; }
if (value.intraFreqCAG_CellList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.intraFreqCAG_CellList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.intraFreqCAG_CellList_r16_count > 0u) {
    value.intraFreqCAG_CellList_r16_items = (IntraFreqCAG_CellListPerPLMN_r16*)std::malloc((std::size_t)value.intraFreqCAG_CellList_r16_count * sizeof(IntraFreqCAG_CellListPerPLMN_r16));
    if (value.intraFreqCAG_CellList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.intraFreqCAG_CellList_r16_items, 0, (std::size_t)value.intraFreqCAG_CellList_r16_count * sizeof(IntraFreqCAG_CellListPerPLMN_r16));
}
for (std::uint32_t i = 0; i < value.intraFreqCAG_CellList_r16_count; ++i) {
    if (Decode_IntraFreqCAG_CellListPerPLMN_r16(dec, value.intraFreqCAG_CellList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB3_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB3_ExtGroup1(SIB3_ExtGroup1& value)
{
    if (value.has_intraFreqNeighCellList_v1610) {
        Free_IntraFreqNeighCellList_v1610(value.intraFreqNeighCellList_v1610);
    }
    if (value.has_intraFreqAllowedCellList_r16) {
        Free_IntraFreqAllowedCellList_r16(value.intraFreqAllowedCellList_r16);
    }
    if (value.has_intraFreqCAG_CellList_r16) {
        if (value.intraFreqCAG_CellList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.intraFreqCAG_CellList_r16_count; ++i) {
                Free_IntraFreqCAG_CellListPerPLMN_r16(value.intraFreqCAG_CellList_r16_items[i]);
            }
            std::free(value.intraFreqCAG_CellList_r16_items);
            value.intraFreqCAG_CellList_r16_items = nullptr;
        }
        value.intraFreqCAG_CellList_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IntraFreqNeighCellList_v1710：ASN.1 IntraFreqNeighCellList-v1710；源文件第 3451 行；SEQUENCE OF。
// Encode_IntraFreqNeighCellList_v1710 只读不分配；Decode_IntraFreqNeighCellList_v1710 可能 malloc（失败时内部已释放并清零）；Free_IntraFreqNeighCellList_v1710 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IntraFreqNeighCellList_v1710(Encoder& enc, const IntraFreqNeighCellList_v1710& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_IntraFreqNeighCellInfo_v1710(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_IntraFreqNeighCellList_v1710(Decoder& dec, IntraFreqNeighCellList_v1710& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (IntraFreqNeighCellInfo_v1710*)std::malloc((std::size_t)value.count * sizeof(IntraFreqNeighCellInfo_v1710));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(IntraFreqNeighCellInfo_v1710));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_IntraFreqNeighCellInfo_v1710(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_IntraFreqNeighCellList_v1710(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IntraFreqNeighCellList_v1710(IntraFreqNeighCellList_v1710& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_IntraFreqNeighCellInfo_v1710(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IntraFreqNeighHSDN_CellList_r17：ASN.1 IntraFreqNeighHSDN-CellList-r17；源文件第 3479 行；SEQUENCE OF。
// Encode_IntraFreqNeighHSDN_CellList_r17 只读不分配；Decode_IntraFreqNeighHSDN_CellList_r17 可能 malloc（失败时内部已释放并清零）；Free_IntraFreqNeighHSDN_CellList_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IntraFreqNeighHSDN_CellList_r17(Encoder& enc, const IntraFreqNeighHSDN_CellList_r17& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PCI_Range(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_IntraFreqNeighHSDN_CellList_r17(Decoder& dec, IntraFreqNeighHSDN_CellList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PCI_Range*)std::malloc((std::size_t)value.count * sizeof(PCI_Range));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PCI_Range));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PCI_Range(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_IntraFreqNeighHSDN_CellList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IntraFreqNeighHSDN_CellList_r17(IntraFreqNeighHSDN_CellList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PCI_Range(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB3_ExtGroup2：ASN.1 SIB3_ExtGroup2；源文件第 3438 行；扩展添加组 [[ ]]。
// Encode_SIB3_ExtGroup2 只读不分配；Decode_SIB3_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_SIB3_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB3_ExtGroup2(Encoder& enc, const SIB3_ExtGroup2& value)
{
    enc.WriteBit(value.has_intraFreqNeighHSDN_CellList_r17);
    enc.WriteBit(value.has_intraFreqNeighCellList_v1710);
    if (value.has_intraFreqNeighHSDN_CellList_r17) {
        Encode_IntraFreqNeighHSDN_CellList_r17(enc, value.intraFreqNeighHSDN_CellList_r17);
    }
    if (value.has_intraFreqNeighCellList_v1710) {
        Encode_IntraFreqNeighCellList_v1710(enc, value.intraFreqNeighCellList_v1710);
    }
    return enc.Error();
}

ErrorCode Decode_SIB3_ExtGroup2(Decoder& dec, SIB3_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_IntraFreqNeighHSDN_CellList_r17(dec, value.intraFreqNeighHSDN_CellList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_IntraFreqNeighCellList_v1710(dec, value.intraFreqNeighCellList_v1710) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB3_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB3_ExtGroup2(SIB3_ExtGroup2& value)
{
    if (value.has_intraFreqNeighHSDN_CellList_r17) {
        Free_IntraFreqNeighHSDN_CellList_r17(value.intraFreqNeighHSDN_CellList_r17);
    }
    if (value.has_intraFreqNeighCellList_v1710) {
        Free_IntraFreqNeighCellList_v1710(value.intraFreqNeighCellList_v1710);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB3_ExtGroup3：ASN.1 SIB3_ExtGroup3；源文件第 3442 行；扩展添加组 [[ ]]。
// Encode_SIB3_ExtGroup3 只读不分配；Decode_SIB3_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_SIB3_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB3_ExtGroup3(Encoder& enc, const SIB3_ExtGroup3& value)
{
    enc.WriteBit(value.has_channelAccessMode2_r17);
    if (value.has_channelAccessMode2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.channelAccessMode2_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SIB3_ExtGroup3(Decoder& dec, SIB3_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.channelAccessMode2_r17 = (SIB3_ExtGroup3_ChannelAccessMode2_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB3_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB3_ExtGroup3(SIB3_ExtGroup3& value)
{
    if (value.has_channelAccessMode2_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IntraFreqNeighCellList：ASN.1 IntraFreqNeighCellList；源文件第 3447 行；SEQUENCE OF。
// Encode_IntraFreqNeighCellList 只读不分配；Decode_IntraFreqNeighCellList 可能 malloc（失败时内部已释放并清零）；Free_IntraFreqNeighCellList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IntraFreqNeighCellList(Encoder& enc, const IntraFreqNeighCellList& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_IntraFreqNeighCellInfo(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_IntraFreqNeighCellList(Decoder& dec, IntraFreqNeighCellList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (IntraFreqNeighCellInfo*)std::malloc((std::size_t)value.count * sizeof(IntraFreqNeighCellInfo));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(IntraFreqNeighCellInfo));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_IntraFreqNeighCellInfo(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_IntraFreqNeighCellList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IntraFreqNeighCellList(IntraFreqNeighCellList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_IntraFreqNeighCellInfo(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IntraFreqExcludedCellList：ASN.1 IntraFreqExcludedCellList；源文件第 3470 行；SEQUENCE OF。
// Encode_IntraFreqExcludedCellList 只读不分配；Decode_IntraFreqExcludedCellList 可能 malloc（失败时内部已释放并清零）；Free_IntraFreqExcludedCellList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IntraFreqExcludedCellList(Encoder& enc, const IntraFreqExcludedCellList& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PCI_Range(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_IntraFreqExcludedCellList(Decoder& dec, IntraFreqExcludedCellList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PCI_Range*)std::malloc((std::size_t)value.count * sizeof(PCI_Range));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PCI_Range));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PCI_Range(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_IntraFreqExcludedCellList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IntraFreqExcludedCellList(IntraFreqExcludedCellList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PCI_Range(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB3：ASN.1 SIB3；源文件第 3428 行；SEQUENCE。
// Encode_SIB3 只读不分配；Decode_SIB3 可能 malloc（失败时内部已释放并清零）；Free_SIB3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB3(Encoder& enc, const SIB3& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_intraFreqNeighCellList);
    enc.WriteBit(value.has_intraFreqExcludedCellList);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    if (value.has_intraFreqNeighCellList) {
        Encode_IntraFreqNeighCellList(enc, value.intraFreqNeighCellList);
    }
    if (value.has_intraFreqExcludedCellList) {
        Encode_IntraFreqExcludedCellList(enc, value.intraFreqExcludedCellList);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SIB3_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SIB3_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_SIB3_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SIB3(Decoder& dec, SIB3& value)
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
        if (Decode_IntraFreqNeighCellList(dec, value.intraFreqNeighCellList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_IntraFreqExcludedCellList(dec, value.intraFreqExcludedCellList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
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
    if (Decode_SIB3_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_SIB3_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_SIB3_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    Free_SIB3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB3(SIB3& value)
{
    if (value.has_intraFreqNeighCellList) {
        Free_IntraFreqNeighCellList(value.intraFreqNeighCellList);
    }
    if (value.has_intraFreqExcludedCellList) {
        Free_IntraFreqExcludedCellList(value.intraFreqExcludedCellList);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_extGroup1) {
        Free_SIB3_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SIB3_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_SIB3_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IntraFreqNeighCellInfo：ASN.1 IntraFreqNeighCellInfo；源文件第 3453 行；SEQUENCE。
// Encode_IntraFreqNeighCellInfo 只读不分配；Decode_IntraFreqNeighCellInfo 可能 malloc（失败时内部已释放并清零）；Free_IntraFreqNeighCellInfo 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IntraFreqNeighCellInfo(Encoder& enc, const IntraFreqNeighCellInfo& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_q_RxLevMinOffsetCell);
    enc.WriteBit(value.has_q_RxLevMinOffsetCellSUL);
    enc.WriteBit(value.has_q_QualMinOffsetCell);
    enc.WriteConstrainedInteger((std::int64_t)(value.physCellId), 0, 1007);
    enc.WriteConstrainedInteger((std::int64_t)(value.q_OffsetCell), 0, 30);
    if (value.has_q_RxLevMinOffsetCell) {
        enc.WriteConstrainedInteger((std::int64_t)(value.q_RxLevMinOffsetCell), 1, 8);
    }
    if (value.has_q_RxLevMinOffsetCellSUL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.q_RxLevMinOffsetCellSUL), 1, 8);
    }
    if (value.has_q_QualMinOffsetCell) {
        enc.WriteConstrainedInteger((std::int64_t)(value.q_QualMinOffsetCell), 1, 8);
    }
    return enc.Error();
}

ErrorCode Decode_IntraFreqNeighCellInfo(Decoder& dec, IntraFreqNeighCellInfo& value)
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
        if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
        value.physCellId = (PhysCellId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.q_OffsetCell = (Q_OffsetRange)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.q_RxLevMinOffsetCell = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.q_RxLevMinOffsetCellSUL = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.q_QualMinOffsetCell = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_IntraFreqNeighCellInfo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IntraFreqNeighCellInfo(IntraFreqNeighCellInfo& value)
{
    if (value.has_q_RxLevMinOffsetCell) {
    }
    if (value.has_q_RxLevMinOffsetCellSUL) {
    }
    if (value.has_q_QualMinOffsetCell) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IntraFreqNeighCellInfo_v1610：ASN.1 IntraFreqNeighCellInfo-v1610；源文件第 3462 行；SEQUENCE。
// Encode_IntraFreqNeighCellInfo_v1610 只读不分配；Decode_IntraFreqNeighCellInfo_v1610 可能 malloc（失败时内部已释放并清零）；Free_IntraFreqNeighCellInfo_v1610 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IntraFreqNeighCellInfo_v1610(Encoder& enc, const IntraFreqNeighCellInfo_v1610& value)
{
    enc.WriteBit(value.has_ssb_PositionQCL_r16);
    if (value.has_ssb_PositionQCL_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_PositionQCL_r16), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_IntraFreqNeighCellInfo_v1610(Decoder& dec, IntraFreqNeighCellInfo_v1610& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.ssb_PositionQCL_r16 = (SSB_PositionQCL_Relation_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_IntraFreqNeighCellInfo_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IntraFreqNeighCellInfo_v1610(IntraFreqNeighCellInfo_v1610& value)
{
    if (value.has_ssb_PositionQCL_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IntraFreqNeighCellInfo_v1710：ASN.1 IntraFreqNeighCellInfo-v1710；源文件第 3466 行；SEQUENCE。
// Encode_IntraFreqNeighCellInfo_v1710 只读不分配；Decode_IntraFreqNeighCellInfo_v1710 可能 malloc（失败时内部已释放并清零）；Free_IntraFreqNeighCellInfo_v1710 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IntraFreqNeighCellInfo_v1710(Encoder& enc, const IntraFreqNeighCellInfo_v1710& value)
{
    enc.WriteBit(value.has_ssb_PositionQCL_r17);
    if (value.has_ssb_PositionQCL_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_PositionQCL_r17), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_IntraFreqNeighCellInfo_v1710(Decoder& dec, IntraFreqNeighCellInfo_v1710& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.ssb_PositionQCL_r17 = (SSB_PositionQCL_Relation_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_IntraFreqNeighCellInfo_v1710(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IntraFreqNeighCellInfo_v1710(IntraFreqNeighCellInfo_v1710& value)
{
    if (value.has_ssb_PositionQCL_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IntraFreqCAG_CellListPerPLMN_r16：ASN.1 IntraFreqCAG-CellListPerPLMN-r16；源文件第 3474 行；SEQUENCE。
// Encode_IntraFreqCAG_CellListPerPLMN_r16 只读不分配；Decode_IntraFreqCAG_CellListPerPLMN_r16 可能 malloc（失败时内部已释放并清零）；Free_IntraFreqCAG_CellListPerPLMN_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IntraFreqCAG_CellListPerPLMN_r16(Encoder& enc, const IntraFreqCAG_CellListPerPLMN_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.plmn_IdentityIndex_r16), 1, 12);
enc.WriteConstrainedLength(value.cag_CellList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cag_CellList_r16_count; ++i) {
    Encode_PCI_Range(enc, value.cag_CellList_r16_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_IntraFreqCAG_CellListPerPLMN_r16(Decoder& dec, IntraFreqCAG_CellListPerPLMN_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 12, tmp_value)) { goto fail; }
        value.plmn_IdentityIndex_r16 = (int64_t)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.cag_CellList_r16_count)) { goto fail; }
if (value.cag_CellList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cag_CellList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cag_CellList_r16_count > 0u) {
    value.cag_CellList_r16_items = (PCI_Range*)std::malloc((std::size_t)value.cag_CellList_r16_count * sizeof(PCI_Range));
    if (value.cag_CellList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cag_CellList_r16_items, 0, (std::size_t)value.cag_CellList_r16_count * sizeof(PCI_Range));
}
for (std::uint32_t i = 0; i < value.cag_CellList_r16_count; ++i) {
    if (Decode_PCI_Range(dec, value.cag_CellList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_IntraFreqCAG_CellListPerPLMN_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IntraFreqCAG_CellListPerPLMN_r16(IntraFreqCAG_CellListPerPLMN_r16& value)
{
    if (value.cag_CellList_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.cag_CellList_r16_count; ++i) {
            Free_PCI_Range(value.cag_CellList_r16_items[i]);
        }
        std::free(value.cag_CellList_r16_items);
        value.cag_CellList_r16_items = nullptr;
    }
    value.cag_CellList_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InterFreqCarrierFreqList_v1610：ASN.1 InterFreqCarrierFreqList-v1610；源文件第 3510 行；SEQUENCE OF。
// Encode_InterFreqCarrierFreqList_v1610 只读不分配；Decode_InterFreqCarrierFreqList_v1610 可能 malloc（失败时内部已释放并清零）；Free_InterFreqCarrierFreqList_v1610 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InterFreqCarrierFreqList_v1610(Encoder& enc, const InterFreqCarrierFreqList_v1610& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_InterFreqCarrierFreqInfo_v1610(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_InterFreqCarrierFreqList_v1610(Decoder& dec, InterFreqCarrierFreqList_v1610& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (InterFreqCarrierFreqInfo_v1610*)std::malloc((std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo_v1610));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo_v1610));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_InterFreqCarrierFreqInfo_v1610(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_InterFreqCarrierFreqList_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterFreqCarrierFreqList_v1610(InterFreqCarrierFreqList_v1610& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_InterFreqCarrierFreqInfo_v1610(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB4_ExtGroup1：ASN.1 SIB4_ExtGroup1；源文件第 3488 行；扩展添加组 [[ ]]。
// Encode_SIB4_ExtGroup1 只读不分配；Decode_SIB4_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SIB4_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB4_ExtGroup1(Encoder& enc, const SIB4_ExtGroup1& value)
{
    enc.WriteBit(value.has_interFreqCarrierFreqList_v1610);
    if (value.has_interFreqCarrierFreqList_v1610) {
        Encode_InterFreqCarrierFreqList_v1610(enc, value.interFreqCarrierFreqList_v1610);
    }
    return enc.Error();
}

ErrorCode Decode_SIB4_ExtGroup1(Decoder& dec, SIB4_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_InterFreqCarrierFreqList_v1610(dec, value.interFreqCarrierFreqList_v1610) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB4_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB4_ExtGroup1(SIB4_ExtGroup1& value)
{
    if (value.has_interFreqCarrierFreqList_v1610) {
        Free_InterFreqCarrierFreqList_v1610(value.interFreqCarrierFreqList_v1610);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InterFreqCarrierFreqList_v1700：ASN.1 InterFreqCarrierFreqList-v1700；源文件第 3512 行；SEQUENCE OF。
// Encode_InterFreqCarrierFreqList_v1700 只读不分配；Decode_InterFreqCarrierFreqList_v1700 可能 malloc（失败时内部已释放并清零）；Free_InterFreqCarrierFreqList_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InterFreqCarrierFreqList_v1700(Encoder& enc, const InterFreqCarrierFreqList_v1700& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_InterFreqCarrierFreqInfo_v1700(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_InterFreqCarrierFreqList_v1700(Decoder& dec, InterFreqCarrierFreqList_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (InterFreqCarrierFreqInfo_v1700*)std::malloc((std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo_v1700));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo_v1700));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_InterFreqCarrierFreqInfo_v1700(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_InterFreqCarrierFreqList_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterFreqCarrierFreqList_v1700(InterFreqCarrierFreqList_v1700& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_InterFreqCarrierFreqInfo_v1700(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB4_ExtGroup2：ASN.1 SIB4_ExtGroup2；源文件第 3491 行；扩展添加组 [[ ]]。
// Encode_SIB4_ExtGroup2 只读不分配；Decode_SIB4_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_SIB4_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB4_ExtGroup2(Encoder& enc, const SIB4_ExtGroup2& value)
{
    enc.WriteBit(value.has_interFreqCarrierFreqList_v1700);
    if (value.has_interFreqCarrierFreqList_v1700) {
        Encode_InterFreqCarrierFreqList_v1700(enc, value.interFreqCarrierFreqList_v1700);
    }
    return enc.Error();
}

ErrorCode Decode_SIB4_ExtGroup2(Decoder& dec, SIB4_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_InterFreqCarrierFreqList_v1700(dec, value.interFreqCarrierFreqList_v1700) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB4_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB4_ExtGroup2(SIB4_ExtGroup2& value)
{
    if (value.has_interFreqCarrierFreqList_v1700) {
        Free_InterFreqCarrierFreqList_v1700(value.interFreqCarrierFreqList_v1700);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InterFreqCarrierFreqList_v1720：ASN.1 InterFreqCarrierFreqList-v1720；源文件第 3514 行；SEQUENCE OF。
// Encode_InterFreqCarrierFreqList_v1720 只读不分配；Decode_InterFreqCarrierFreqList_v1720 可能 malloc（失败时内部已释放并清零）；Free_InterFreqCarrierFreqList_v1720 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InterFreqCarrierFreqList_v1720(Encoder& enc, const InterFreqCarrierFreqList_v1720& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_InterFreqCarrierFreqInfo_v1720(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_InterFreqCarrierFreqList_v1720(Decoder& dec, InterFreqCarrierFreqList_v1720& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (InterFreqCarrierFreqInfo_v1720*)std::malloc((std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo_v1720));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo_v1720));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_InterFreqCarrierFreqInfo_v1720(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_InterFreqCarrierFreqList_v1720(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterFreqCarrierFreqList_v1720(InterFreqCarrierFreqList_v1720& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_InterFreqCarrierFreqInfo_v1720(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB4_ExtGroup3：ASN.1 SIB4_ExtGroup3；源文件第 3494 行；扩展添加组 [[ ]]。
// Encode_SIB4_ExtGroup3 只读不分配；Decode_SIB4_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_SIB4_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB4_ExtGroup3(Encoder& enc, const SIB4_ExtGroup3& value)
{
    enc.WriteBit(value.has_interFreqCarrierFreqList_v1720);
    if (value.has_interFreqCarrierFreqList_v1720) {
        Encode_InterFreqCarrierFreqList_v1720(enc, value.interFreqCarrierFreqList_v1720);
    }
    return enc.Error();
}

ErrorCode Decode_SIB4_ExtGroup3(Decoder& dec, SIB4_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_InterFreqCarrierFreqList_v1720(dec, value.interFreqCarrierFreqList_v1720) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB4_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB4_ExtGroup3(SIB4_ExtGroup3& value)
{
    if (value.has_interFreqCarrierFreqList_v1720) {
        Free_InterFreqCarrierFreqList_v1720(value.interFreqCarrierFreqList_v1720);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InterFreqCarrierFreqList_v1730：ASN.1 InterFreqCarrierFreqList-v1730；源文件第 3516 行；SEQUENCE OF。
// Encode_InterFreqCarrierFreqList_v1730 只读不分配；Decode_InterFreqCarrierFreqList_v1730 可能 malloc（失败时内部已释放并清零）；Free_InterFreqCarrierFreqList_v1730 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InterFreqCarrierFreqList_v1730(Encoder& enc, const InterFreqCarrierFreqList_v1730& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_InterFreqCarrierFreqInfo_v1730(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_InterFreqCarrierFreqList_v1730(Decoder& dec, InterFreqCarrierFreqList_v1730& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (InterFreqCarrierFreqInfo_v1730*)std::malloc((std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo_v1730));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo_v1730));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_InterFreqCarrierFreqInfo_v1730(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_InterFreqCarrierFreqList_v1730(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterFreqCarrierFreqList_v1730(InterFreqCarrierFreqList_v1730& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_InterFreqCarrierFreqInfo_v1730(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB4_ExtGroup4：ASN.1 SIB4_ExtGroup4；源文件第 3497 行；扩展添加组 [[ ]]。
// Encode_SIB4_ExtGroup4 只读不分配；Decode_SIB4_ExtGroup4 可能 malloc（失败时内部已释放并清零）；Free_SIB4_ExtGroup4 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB4_ExtGroup4(Encoder& enc, const SIB4_ExtGroup4& value)
{
    enc.WriteBit(value.has_interFreqCarrierFreqList_v1730);
    if (value.has_interFreqCarrierFreqList_v1730) {
        Encode_InterFreqCarrierFreqList_v1730(enc, value.interFreqCarrierFreqList_v1730);
    }
    return enc.Error();
}

ErrorCode Decode_SIB4_ExtGroup4(Decoder& dec, SIB4_ExtGroup4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_InterFreqCarrierFreqList_v1730(dec, value.interFreqCarrierFreqList_v1730) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB4_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB4_ExtGroup4(SIB4_ExtGroup4& value)
{
    if (value.has_interFreqCarrierFreqList_v1730) {
        Free_InterFreqCarrierFreqList_v1730(value.interFreqCarrierFreqList_v1730);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InterFreqCarrierFreqList_v1760：ASN.1 InterFreqCarrierFreqList-v1760；源文件第 3518 行；SEQUENCE OF。
// Encode_InterFreqCarrierFreqList_v1760 只读不分配；Decode_InterFreqCarrierFreqList_v1760 可能 malloc（失败时内部已释放并清零）；Free_InterFreqCarrierFreqList_v1760 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InterFreqCarrierFreqList_v1760(Encoder& enc, const InterFreqCarrierFreqList_v1760& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_InterFreqCarrierFreqInfo_v1760(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_InterFreqCarrierFreqList_v1760(Decoder& dec, InterFreqCarrierFreqList_v1760& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (InterFreqCarrierFreqInfo_v1760*)std::malloc((std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo_v1760));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo_v1760));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_InterFreqCarrierFreqInfo_v1760(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_InterFreqCarrierFreqList_v1760(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterFreqCarrierFreqList_v1760(InterFreqCarrierFreqList_v1760& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_InterFreqCarrierFreqInfo_v1760(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB4_ExtGroup5：ASN.1 SIB4_ExtGroup5；源文件第 3500 行；扩展添加组 [[ ]]。
// Encode_SIB4_ExtGroup5 只读不分配；Decode_SIB4_ExtGroup5 可能 malloc（失败时内部已释放并清零）；Free_SIB4_ExtGroup5 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB4_ExtGroup5(Encoder& enc, const SIB4_ExtGroup5& value)
{
    enc.WriteBit(value.has_interFreqCarrierFreqList_v1760);
    if (value.has_interFreqCarrierFreqList_v1760) {
        Encode_InterFreqCarrierFreqList_v1760(enc, value.interFreqCarrierFreqList_v1760);
    }
    return enc.Error();
}

ErrorCode Decode_SIB4_ExtGroup5(Decoder& dec, SIB4_ExtGroup5& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_InterFreqCarrierFreqList_v1760(dec, value.interFreqCarrierFreqList_v1760) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB4_ExtGroup5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB4_ExtGroup5(SIB4_ExtGroup5& value)
{
    if (value.has_interFreqCarrierFreqList_v1760) {
        Free_InterFreqCarrierFreqList_v1760(value.interFreqCarrierFreqList_v1760);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InterFreqCarrierFreqList_v1800：ASN.1 InterFreqCarrierFreqList-v1800；源文件第 3520 行；SEQUENCE OF。
// Encode_InterFreqCarrierFreqList_v1800 只读不分配；Decode_InterFreqCarrierFreqList_v1800 可能 malloc（失败时内部已释放并清零）；Free_InterFreqCarrierFreqList_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InterFreqCarrierFreqList_v1800(Encoder& enc, const InterFreqCarrierFreqList_v1800& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_InterFreqCarrierFreqInfo_v1800(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_InterFreqCarrierFreqList_v1800(Decoder& dec, InterFreqCarrierFreqList_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (InterFreqCarrierFreqInfo_v1800*)std::malloc((std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo_v1800));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo_v1800));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_InterFreqCarrierFreqInfo_v1800(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_InterFreqCarrierFreqList_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterFreqCarrierFreqList_v1800(InterFreqCarrierFreqList_v1800& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_InterFreqCarrierFreqInfo_v1800(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB4_ExtGroup6：ASN.1 SIB4_ExtGroup6；源文件第 3503 行；扩展添加组 [[ ]]。
// Encode_SIB4_ExtGroup6 只读不分配；Decode_SIB4_ExtGroup6 可能 malloc（失败时内部已释放并清零）；Free_SIB4_ExtGroup6 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB4_ExtGroup6(Encoder& enc, const SIB4_ExtGroup6& value)
{
    enc.WriteBit(value.has_interFreqCarrierFreqList_v1800);
    if (value.has_interFreqCarrierFreqList_v1800) {
        Encode_InterFreqCarrierFreqList_v1800(enc, value.interFreqCarrierFreqList_v1800);
    }
    return enc.Error();
}

ErrorCode Decode_SIB4_ExtGroup6(Decoder& dec, SIB4_ExtGroup6& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_InterFreqCarrierFreqList_v1800(dec, value.interFreqCarrierFreqList_v1800) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB4_ExtGroup6(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB4_ExtGroup6(SIB4_ExtGroup6& value)
{
    if (value.has_interFreqCarrierFreqList_v1800) {
        Free_InterFreqCarrierFreqList_v1800(value.interFreqCarrierFreqList_v1800);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InterFreqCarrierFreqList：ASN.1 InterFreqCarrierFreqList；源文件第 3508 行；SEQUENCE OF。
// Encode_InterFreqCarrierFreqList 只读不分配；Decode_InterFreqCarrierFreqList 可能 malloc（失败时内部已释放并清零）；Free_InterFreqCarrierFreqList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InterFreqCarrierFreqList(Encoder& enc, const InterFreqCarrierFreqList& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_InterFreqCarrierFreqInfo(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_InterFreqCarrierFreqList(Decoder& dec, InterFreqCarrierFreqList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (InterFreqCarrierFreqInfo*)std::malloc((std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(InterFreqCarrierFreqInfo));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_InterFreqCarrierFreqInfo(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_InterFreqCarrierFreqList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterFreqCarrierFreqList(InterFreqCarrierFreqList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_InterFreqCarrierFreqInfo(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB4：ASN.1 SIB4；源文件第 3484 行；SEQUENCE。
// Encode_SIB4 只读不分配；Decode_SIB4 可能 malloc（失败时内部已释放并清零）；Free_SIB4 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB4(Encoder& enc, const SIB4& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4 || value.has_extGroup5 || value.has_extGroup6;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    Encode_InterFreqCarrierFreqList(enc, value.interFreqCarrierFreqList);
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
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
    Encode_SIB4_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SIB4_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_SIB4_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_SIB4_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup5) {
    Encoder sub;
    Encode_SIB4_ExtGroup5(sub, value.extGroup5);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup6) {
    Encoder sub;
    Encode_SIB4_ExtGroup6(sub, value.extGroup6);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SIB4(Decoder& dec, SIB4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_InterFreqCarrierFreqList(dec, value.interFreqCarrierFreqList) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_SIB4_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_SIB4_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_SIB4_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_SIB4_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    if (Decode_SIB4_ExtGroup5(sub, value.extGroup5) != ErrorCode_Ok) {
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
    if (Decode_SIB4_ExtGroup6(sub, value.extGroup6) != ErrorCode_Ok) {
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
    Free_SIB4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB4(SIB4& value)
{
    Free_InterFreqCarrierFreqList(value.interFreqCarrierFreqList);
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_extGroup1) {
        Free_SIB4_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SIB4_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_SIB4_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_SIB4_ExtGroup4(value.extGroup4);
    }
    if (value.has_extGroup5) {
        Free_SIB4_ExtGroup5(value.extGroup5);
    }
    if (value.has_extGroup6) {
        Free_SIB4_ExtGroup6(value.extGroup6);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InterFreqNeighCellList：ASN.1 InterFreqNeighCellList；源文件第 3594 行；SEQUENCE OF。
// Encode_InterFreqNeighCellList 只读不分配；Decode_InterFreqNeighCellList 可能 malloc（失败时内部已释放并清零）；Free_InterFreqNeighCellList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InterFreqNeighCellList(Encoder& enc, const InterFreqNeighCellList& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_InterFreqNeighCellInfo(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_InterFreqNeighCellList(Decoder& dec, InterFreqNeighCellList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (InterFreqNeighCellInfo*)std::malloc((std::size_t)value.count * sizeof(InterFreqNeighCellInfo));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(InterFreqNeighCellInfo));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_InterFreqNeighCellInfo(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_InterFreqNeighCellList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterFreqNeighCellList(InterFreqNeighCellList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_InterFreqNeighCellInfo(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InterFreqExcludedCellList：ASN.1 InterFreqExcludedCellList；源文件第 3617 行；SEQUENCE OF。
// Encode_InterFreqExcludedCellList 只读不分配；Decode_InterFreqExcludedCellList 可能 malloc（失败时内部已释放并清零）；Free_InterFreqExcludedCellList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InterFreqExcludedCellList(Encoder& enc, const InterFreqExcludedCellList& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PCI_Range(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_InterFreqExcludedCellList(Decoder& dec, InterFreqExcludedCellList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PCI_Range*)std::malloc((std::size_t)value.count * sizeof(PCI_Range));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PCI_Range));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PCI_Range(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_InterFreqExcludedCellList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterFreqExcludedCellList(InterFreqExcludedCellList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PCI_Range(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InterFreqCarrierFreqInfo_ThreshX_Q：ASN.1 threshX-Q；源文件第 3541 行；SEQUENCE。
// Encode_InterFreqCarrierFreqInfo_ThreshX_Q 只读不分配；Decode_InterFreqCarrierFreqInfo_ThreshX_Q 可能 malloc（失败时内部已释放并清零）；Free_InterFreqCarrierFreqInfo_ThreshX_Q 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InterFreqCarrierFreqInfo_ThreshX_Q(Encoder& enc, const InterFreqCarrierFreqInfo_ThreshX_Q& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.threshX_HighQ), 0, 31);
    enc.WriteConstrainedInteger((std::int64_t)(value.threshX_LowQ), 0, 31);
    return enc.Error();
}

ErrorCode Decode_InterFreqCarrierFreqInfo_ThreshX_Q(Decoder& dec, InterFreqCarrierFreqInfo_ThreshX_Q& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.threshX_HighQ = (ReselectionThresholdQ)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.threshX_LowQ = (ReselectionThresholdQ)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_InterFreqCarrierFreqInfo_ThreshX_Q(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterFreqCarrierFreqInfo_ThreshX_Q(InterFreqCarrierFreqInfo_ThreshX_Q& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InterFreqCarrierFreqInfo：ASN.1 InterFreqCarrierFreqInfo；源文件第 3522 行；SEQUENCE。
// Encode_InterFreqCarrierFreqInfo 只读不分配；Decode_InterFreqCarrierFreqInfo 可能 malloc（失败时内部已释放并清零）；Free_InterFreqCarrierFreqInfo 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InterFreqCarrierFreqInfo(Encoder& enc, const InterFreqCarrierFreqInfo& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_frequencyBandList);
    enc.WriteBit(value.has_frequencyBandListSUL);
    enc.WriteBit(value.has_nrofSS_BlocksToAverage);
    enc.WriteBit(value.has_absThreshSS_BlocksConsolidation);
    enc.WriteBit(value.has_smtc);
    enc.WriteBit(value.has_ssb_ToMeasure);
    enc.WriteBit(value.has_ss_RSSI_Measurement);
    enc.WriteBit(value.has_q_RxLevMinSUL);
    enc.WriteBit(value.has_q_QualMin);
    enc.WriteBit(value.has_p_Max);
    enc.WriteBit(value.has_t_ReselectionNR_SF);
    enc.WriteBit(value.has_threshX_Q);
    enc.WriteBit(value.has_cellReselectionPriority);
    enc.WriteBit(value.has_cellReselectionSubPriority);
    enc.WriteBit(value.q_OffsetFreq != Q_OffsetRange_dB0);
    enc.WriteBit(value.has_interFreqNeighCellList);
    enc.WriteBit(value.has_interFreqExcludedCellList);
    enc.WriteConstrainedInteger((std::int64_t)(value.dl_CarrierFreq), 0, 3279165);
    if (value.has_frequencyBandList) {
        Encode_MultiFrequencyBandListNR_SIB(enc, value.frequencyBandList);
    }
    if (value.has_frequencyBandListSUL) {
        Encode_MultiFrequencyBandListNR_SIB(enc, value.frequencyBandListSUL);
    }
    if (value.has_nrofSS_BlocksToAverage) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrofSS_BlocksToAverage), 2, 16);
    }
    if (value.has_absThreshSS_BlocksConsolidation) {
        Encode_ThresholdNR(enc, value.absThreshSS_BlocksConsolidation);
    }
    if (value.has_smtc) {
        Encode_SSB_MTC(enc, value.smtc);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.ssbSubcarrierSpacing), 0, 7);
    if (value.has_ssb_ToMeasure) {
        Encode_SSB_ToMeasure(enc, value.ssb_ToMeasure);
    }
    enc.WriteBool(value.deriveSSB_IndexFromCell);
    if (value.has_ss_RSSI_Measurement) {
        Encode_SS_RSSI_Measurement(enc, value.ss_RSSI_Measurement);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.q_RxLevMin), -70, -22);
    if (value.has_q_RxLevMinSUL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.q_RxLevMinSUL), -70, -22);
    }
    if (value.has_q_QualMin) {
        enc.WriteConstrainedInteger((std::int64_t)(value.q_QualMin), -43, -12);
    }
    if (value.has_p_Max) {
        enc.WriteConstrainedInteger((std::int64_t)(value.p_Max), -30, 33);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.t_ReselectionNR), 0, 7);
    if (value.has_t_ReselectionNR_SF) {
        Encode_SpeedStateScaleFactors(enc, value.t_ReselectionNR_SF);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.threshX_HighP), 0, 31);
    enc.WriteConstrainedInteger((std::int64_t)(value.threshX_LowP), 0, 31);
    if (value.has_threshX_Q) {
        Encode_InterFreqCarrierFreqInfo_ThreshX_Q(enc, value.threshX_Q);
    }
    if (value.has_cellReselectionPriority) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cellReselectionPriority), 0, 7);
    }
    if (value.has_cellReselectionSubPriority) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cellReselectionSubPriority), 0, 3);
    }
    if (value.q_OffsetFreq != Q_OffsetRange_dB0) {
        enc.WriteConstrainedInteger((std::int64_t)(value.q_OffsetFreq), 0, 30);
    }
    if (value.has_interFreqNeighCellList) {
        Encode_InterFreqNeighCellList(enc, value.interFreqNeighCellList);
    }
    if (value.has_interFreqExcludedCellList) {
        Encode_InterFreqExcludedCellList(enc, value.interFreqExcludedCellList);
    }
    return enc.Error();
}

ErrorCode Decode_InterFreqCarrierFreqInfo(Decoder& dec, InterFreqCarrierFreqInfo& value)
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
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.dl_CarrierFreq = (ARFCN_ValueNR)tmp_value;
    }
    if (present_0) {
        if (Decode_MultiFrequencyBandListNR_SIB(dec, value.frequencyBandList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MultiFrequencyBandListNR_SIB(dec, value.frequencyBandListSUL) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 16, tmp_value)) { goto fail; }
        value.nrofSS_BlocksToAverage = (int64_t)tmp_value;
    }
    if (present_3) {
        if (Decode_ThresholdNR(dec, value.absThreshSS_BlocksConsolidation) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SSB_MTC(dec, value.smtc) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.ssbSubcarrierSpacing = (SubcarrierSpacing)tmp_value;
    }
    if (present_5) {
        if (Decode_SSB_ToMeasure(dec, value.ssb_ToMeasure) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.deriveSSB_IndexFromCell = tmp_value;
    }
    if (present_6) {
        if (Decode_SS_RSSI_Measurement(dec, value.ss_RSSI_Measurement) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-70, -22, tmp_value)) { goto fail; }
        value.q_RxLevMin = (Q_RxLevMin)tmp_value;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-70, -22, tmp_value)) { goto fail; }
        value.q_RxLevMinSUL = (Q_RxLevMin)tmp_value;
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-43, -12, tmp_value)) { goto fail; }
        value.q_QualMin = (Q_QualMin)tmp_value;
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-30, 33, tmp_value)) { goto fail; }
        value.p_Max = (P_Max)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.t_ReselectionNR = (T_Reselection)tmp_value;
    }
    if (present_10) {
        if (Decode_SpeedStateScaleFactors(dec, value.t_ReselectionNR_SF) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.threshX_HighP = (ReselectionThreshold)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.threshX_LowP = (ReselectionThreshold)tmp_value;
    }
    if (present_11) {
        if (Decode_InterFreqCarrierFreqInfo_ThreshX_Q(dec, value.threshX_Q) != ErrorCode_Ok) { goto fail; }
    }
    if (present_12) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.cellReselectionPriority = (CellReselectionPriority)tmp_value;
    }
    if (present_13) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.cellReselectionSubPriority = (CellReselectionSubPriority)tmp_value;
    }
    if (present_14) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.q_OffsetFreq = (Q_OffsetRange)tmp_value;
    } else {
        value.q_OffsetFreq = Q_OffsetRange_dB0;
    }
    if (present_15) {
        if (Decode_InterFreqNeighCellList(dec, value.interFreqNeighCellList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_16) {
        if (Decode_InterFreqExcludedCellList(dec, value.interFreqExcludedCellList) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_InterFreqCarrierFreqInfo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterFreqCarrierFreqInfo(InterFreqCarrierFreqInfo& value)
{
    if (value.has_frequencyBandList) {
        Free_MultiFrequencyBandListNR_SIB(value.frequencyBandList);
    }
    if (value.has_frequencyBandListSUL) {
        Free_MultiFrequencyBandListNR_SIB(value.frequencyBandListSUL);
    }
    if (value.has_nrofSS_BlocksToAverage) {
    }
    if (value.has_absThreshSS_BlocksConsolidation) {
        Free_ThresholdNR(value.absThreshSS_BlocksConsolidation);
    }
    if (value.has_smtc) {
        Free_SSB_MTC(value.smtc);
    }
    if (value.has_ssb_ToMeasure) {
        Free_SSB_ToMeasure(value.ssb_ToMeasure);
    }
    if (value.has_ss_RSSI_Measurement) {
        Free_SS_RSSI_Measurement(value.ss_RSSI_Measurement);
    }
    if (value.has_q_RxLevMinSUL) {
    }
    if (value.has_q_QualMin) {
    }
    if (value.has_p_Max) {
    }
    if (value.has_t_ReselectionNR_SF) {
        Free_SpeedStateScaleFactors(value.t_ReselectionNR_SF);
    }
    if (value.has_threshX_Q) {
        Free_InterFreqCarrierFreqInfo_ThreshX_Q(value.threshX_Q);
    }
    if (value.has_cellReselectionPriority) {
    }
    if (value.has_cellReselectionSubPriority) {
    }
    if (value.has_interFreqNeighCellList) {
        Free_InterFreqNeighCellList(value.interFreqNeighCellList);
    }
    if (value.has_interFreqExcludedCellList) {
        Free_InterFreqExcludedCellList(value.interFreqExcludedCellList);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InterFreqNeighCellList_v1610：ASN.1 InterFreqNeighCellList-v1610；源文件第 3596 行；SEQUENCE OF。
// Encode_InterFreqNeighCellList_v1610 只读不分配；Decode_InterFreqNeighCellList_v1610 可能 malloc（失败时内部已释放并清零）；Free_InterFreqNeighCellList_v1610 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InterFreqNeighCellList_v1610(Encoder& enc, const InterFreqNeighCellList_v1610& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_InterFreqNeighCellInfo_v1610(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_InterFreqNeighCellList_v1610(Decoder& dec, InterFreqNeighCellList_v1610& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (InterFreqNeighCellInfo_v1610*)std::malloc((std::size_t)value.count * sizeof(InterFreqNeighCellInfo_v1610));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(InterFreqNeighCellInfo_v1610));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_InterFreqNeighCellInfo_v1610(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_InterFreqNeighCellList_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterFreqNeighCellList_v1610(InterFreqNeighCellList_v1610& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_InterFreqNeighCellInfo_v1610(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InterFreqAllowedCellList_r16：ASN.1 InterFreqAllowedCellList-r16；源文件第 3619 行；SEQUENCE OF。
// Encode_InterFreqAllowedCellList_r16 只读不分配；Decode_InterFreqAllowedCellList_r16 可能 malloc（失败时内部已释放并清零）；Free_InterFreqAllowedCellList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InterFreqAllowedCellList_r16(Encoder& enc, const InterFreqAllowedCellList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PCI_Range(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_InterFreqAllowedCellList_r16(Decoder& dec, InterFreqAllowedCellList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PCI_Range*)std::malloc((std::size_t)value.count * sizeof(PCI_Range));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PCI_Range));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PCI_Range(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_InterFreqAllowedCellList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterFreqAllowedCellList_r16(InterFreqAllowedCellList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PCI_Range(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InterFreqCarrierFreqInfo_v1610：ASN.1 InterFreqCarrierFreqInfo-v1610；源文件第 3554 行；SEQUENCE。
// Encode_InterFreqCarrierFreqInfo_v1610 只读不分配；Decode_InterFreqCarrierFreqInfo_v1610 可能 malloc（失败时内部已释放并清零）；Free_InterFreqCarrierFreqInfo_v1610 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InterFreqCarrierFreqInfo_v1610(Encoder& enc, const InterFreqCarrierFreqInfo_v1610& value)
{
    enc.WriteBit(value.has_interFreqNeighCellList_v1610);
    enc.WriteBit(value.has_smtc2_LP_r16);
    enc.WriteBit(value.has_interFreqAllowedCellList_r16);
    enc.WriteBit(value.has_ssb_PositionQCL_Common_r16);
    enc.WriteBit(value.has_interFreqCAG_CellList_r16);
    if (value.has_interFreqNeighCellList_v1610) {
        Encode_InterFreqNeighCellList_v1610(enc, value.interFreqNeighCellList_v1610);
    }
    if (value.has_smtc2_LP_r16) {
        Encode_SSB_MTC2_LP_r16(enc, value.smtc2_LP_r16);
    }
    if (value.has_interFreqAllowedCellList_r16) {
        Encode_InterFreqAllowedCellList_r16(enc, value.interFreqAllowedCellList_r16);
    }
    if (value.has_ssb_PositionQCL_Common_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_PositionQCL_Common_r16), 0, 3);
    }
    if (value.has_interFreqCAG_CellList_r16) {
enc.WriteConstrainedLength(value.interFreqCAG_CellList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.interFreqCAG_CellList_r16_count; ++i) {
    Encode_InterFreqCAG_CellListPerPLMN_r16(enc, value.interFreqCAG_CellList_r16_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_InterFreqCarrierFreqInfo_v1610(Decoder& dec, InterFreqCarrierFreqInfo_v1610& value)
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
        if (Decode_InterFreqNeighCellList_v1610(dec, value.interFreqNeighCellList_v1610) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SSB_MTC2_LP_r16(dec, value.smtc2_LP_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_InterFreqAllowedCellList_r16(dec, value.interFreqAllowedCellList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.ssb_PositionQCL_Common_r16 = (SSB_PositionQCL_Relation_r16)tmp_value;
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.interFreqCAG_CellList_r16_count)) { goto fail; }
if (value.interFreqCAG_CellList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.interFreqCAG_CellList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.interFreqCAG_CellList_r16_count > 0u) {
    value.interFreqCAG_CellList_r16_items = (InterFreqCAG_CellListPerPLMN_r16*)std::malloc((std::size_t)value.interFreqCAG_CellList_r16_count * sizeof(InterFreqCAG_CellListPerPLMN_r16));
    if (value.interFreqCAG_CellList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.interFreqCAG_CellList_r16_items, 0, (std::size_t)value.interFreqCAG_CellList_r16_count * sizeof(InterFreqCAG_CellListPerPLMN_r16));
}
for (std::uint32_t i = 0; i < value.interFreqCAG_CellList_r16_count; ++i) {
    if (Decode_InterFreqCAG_CellListPerPLMN_r16(dec, value.interFreqCAG_CellList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_InterFreqCarrierFreqInfo_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterFreqCarrierFreqInfo_v1610(InterFreqCarrierFreqInfo_v1610& value)
{
    if (value.has_interFreqNeighCellList_v1610) {
        Free_InterFreqNeighCellList_v1610(value.interFreqNeighCellList_v1610);
    }
    if (value.has_smtc2_LP_r16) {
        Free_SSB_MTC2_LP_r16(value.smtc2_LP_r16);
    }
    if (value.has_interFreqAllowedCellList_r16) {
        Free_InterFreqAllowedCellList_r16(value.interFreqAllowedCellList_r16);
    }
    if (value.has_ssb_PositionQCL_Common_r16) {
    }
    if (value.has_interFreqCAG_CellList_r16) {
        if (value.interFreqCAG_CellList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.interFreqCAG_CellList_r16_count; ++i) {
                Free_InterFreqCAG_CellListPerPLMN_r16(value.interFreqCAG_CellList_r16_items[i]);
            }
            std::free(value.interFreqCAG_CellList_r16_items);
            value.interFreqCAG_CellList_r16_items = nullptr;
        }
        value.interFreqCAG_CellList_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InterFreqNeighHSDN_CellList_r17：ASN.1 InterFreqNeighHSDN-CellList-r17；源文件第 3592 行；SEQUENCE OF。
// Encode_InterFreqNeighHSDN_CellList_r17 只读不分配；Decode_InterFreqNeighHSDN_CellList_r17 可能 malloc（失败时内部已释放并清零）；Free_InterFreqNeighHSDN_CellList_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InterFreqNeighHSDN_CellList_r17(Encoder& enc, const InterFreqNeighHSDN_CellList_r17& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PCI_Range(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_InterFreqNeighHSDN_CellList_r17(Decoder& dec, InterFreqNeighHSDN_CellList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PCI_Range*)std::malloc((std::size_t)value.count * sizeof(PCI_Range));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PCI_Range));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PCI_Range(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_InterFreqNeighHSDN_CellList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterFreqNeighHSDN_CellList_r17(InterFreqNeighHSDN_CellList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PCI_Range(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InterFreqNeighCellList_v1710：ASN.1 InterFreqNeighCellList-v1710；源文件第 3598 行；SEQUENCE OF。
// Encode_InterFreqNeighCellList_v1710 只读不分配；Decode_InterFreqNeighCellList_v1710 可能 malloc（失败时内部已释放并清零）；Free_InterFreqNeighCellList_v1710 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InterFreqNeighCellList_v1710(Encoder& enc, const InterFreqNeighCellList_v1710& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_InterFreqNeighCellInfo_v1710(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_InterFreqNeighCellList_v1710(Decoder& dec, InterFreqNeighCellList_v1710& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (InterFreqNeighCellInfo_v1710*)std::malloc((std::size_t)value.count * sizeof(InterFreqNeighCellInfo_v1710));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(InterFreqNeighCellInfo_v1710));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_InterFreqNeighCellInfo_v1710(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_InterFreqNeighCellList_v1710(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterFreqNeighCellList_v1710(InterFreqNeighCellList_v1710& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_InterFreqNeighCellInfo_v1710(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InterFreqCarrierFreqInfo_v1700：ASN.1 InterFreqCarrierFreqInfo-v1700；源文件第 3562 行；SEQUENCE。
// Encode_InterFreqCarrierFreqInfo_v1700 只读不分配；Decode_InterFreqCarrierFreqInfo_v1700 可能 malloc（失败时内部已释放并清零）；Free_InterFreqCarrierFreqInfo_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InterFreqCarrierFreqInfo_v1700(Encoder& enc, const InterFreqCarrierFreqInfo_v1700& value)
{
    enc.WriteBit(value.has_interFreqNeighHSDN_CellList_r17);
    enc.WriteBit(value.has_highSpeedMeasInterFreq_r17);
    enc.WriteBit(value.has_redCapAccessAllowed_r17);
    enc.WriteBit(value.has_ssb_PositionQCL_Common_r17);
    enc.WriteBit(value.has_interFreqNeighCellList_v1710);
    if (value.has_interFreqNeighHSDN_CellList_r17) {
        Encode_InterFreqNeighHSDN_CellList_r17(enc, value.interFreqNeighHSDN_CellList_r17);
    }
    if (value.has_highSpeedMeasInterFreq_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.highSpeedMeasInterFreq_r17), 0, 0);
    }
    if (value.has_redCapAccessAllowed_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.redCapAccessAllowed_r17), 0, 0);
    }
    if (value.has_ssb_PositionQCL_Common_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_PositionQCL_Common_r17), 0, 1);
    }
    if (value.has_interFreqNeighCellList_v1710) {
        Encode_InterFreqNeighCellList_v1710(enc, value.interFreqNeighCellList_v1710);
    }
    return enc.Error();
}

ErrorCode Decode_InterFreqCarrierFreqInfo_v1700(Decoder& dec, InterFreqCarrierFreqInfo_v1700& value)
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
        if (Decode_InterFreqNeighHSDN_CellList_r17(dec, value.interFreqNeighHSDN_CellList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.highSpeedMeasInterFreq_r17 = (InterFreqCarrierFreqInfo_v1700_HighSpeedMeasInterFreq_r17)0;
    }
    if (present_2) {
        value.redCapAccessAllowed_r17 = (InterFreqCarrierFreqInfo_v1700_RedCapAccessAllowed_r17)0;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.ssb_PositionQCL_Common_r17 = (SSB_PositionQCL_Relation_r17)tmp_value;
    }
    if (present_4) {
        if (Decode_InterFreqNeighCellList_v1710(dec, value.interFreqNeighCellList_v1710) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_InterFreqCarrierFreqInfo_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterFreqCarrierFreqInfo_v1700(InterFreqCarrierFreqInfo_v1700& value)
{
    if (value.has_interFreqNeighHSDN_CellList_r17) {
        Free_InterFreqNeighHSDN_CellList_r17(value.interFreqNeighHSDN_CellList_r17);
    }
    if (value.has_highSpeedMeasInterFreq_r17) {
    }
    if (value.has_redCapAccessAllowed_r17) {
    }
    if (value.has_ssb_PositionQCL_Common_r17) {
    }
    if (value.has_interFreqNeighCellList_v1710) {
        Free_InterFreqNeighCellList_v1710(value.interFreqNeighCellList_v1710);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InterFreqCarrierFreqInfo_v1720：ASN.1 InterFreqCarrierFreqInfo-v1720；源文件第 3570 行；SEQUENCE。
// Encode_InterFreqCarrierFreqInfo_v1720 只读不分配；Decode_InterFreqCarrierFreqInfo_v1720 可能 malloc（失败时内部已释放并清零）；Free_InterFreqCarrierFreqInfo_v1720 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InterFreqCarrierFreqInfo_v1720(Encoder& enc, const InterFreqCarrierFreqInfo_v1720& value)
{
    enc.WriteBit(value.has_smtc4list_r17);
    if (value.has_smtc4list_r17) {
        Encode_SSB_MTC4List_r17(enc, value.smtc4list_r17);
    }
    return enc.Error();
}

ErrorCode Decode_InterFreqCarrierFreqInfo_v1720(Decoder& dec, InterFreqCarrierFreqInfo_v1720& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SSB_MTC4List_r17(dec, value.smtc4list_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_InterFreqCarrierFreqInfo_v1720(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterFreqCarrierFreqInfo_v1720(InterFreqCarrierFreqInfo_v1720& value)
{
    if (value.has_smtc4list_r17) {
        Free_SSB_MTC4List_r17(value.smtc4list_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InterFreqCarrierFreqInfo_v1730：ASN.1 InterFreqCarrierFreqInfo-v1730；源文件第 3574 行；SEQUENCE。
// Encode_InterFreqCarrierFreqInfo_v1730 只读不分配；Decode_InterFreqCarrierFreqInfo_v1730 可能 malloc（失败时内部已释放并清零）；Free_InterFreqCarrierFreqInfo_v1730 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InterFreqCarrierFreqInfo_v1730(Encoder& enc, const InterFreqCarrierFreqInfo_v1730& value)
{
    enc.WriteBit(value.has_channelAccessMode2_r17);
    if (value.has_channelAccessMode2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.channelAccessMode2_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_InterFreqCarrierFreqInfo_v1730(Decoder& dec, InterFreqCarrierFreqInfo_v1730& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.channelAccessMode2_r17 = (InterFreqCarrierFreqInfo_v1730_ChannelAccessMode2_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_InterFreqCarrierFreqInfo_v1730(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterFreqCarrierFreqInfo_v1730(InterFreqCarrierFreqInfo_v1730& value)
{
    if (value.has_channelAccessMode2_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InterFreqCarrierFreqInfo_v1760：ASN.1 InterFreqCarrierFreqInfo-v1760；源文件第 3578 行；SEQUENCE。
// Encode_InterFreqCarrierFreqInfo_v1760 只读不分配；Decode_InterFreqCarrierFreqInfo_v1760 可能 malloc（失败时内部已释放并清零）；Free_InterFreqCarrierFreqInfo_v1760 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InterFreqCarrierFreqInfo_v1760(Encoder& enc, const InterFreqCarrierFreqInfo_v1760& value)
{
    enc.WriteBit(value.has_frequencyBandList_v1760);
    enc.WriteBit(value.has_frequencyBandListSUL_v1760);
    if (value.has_frequencyBandList_v1760) {
        Encode_MultiFrequencyBandListNR_SIB_v1760(enc, value.frequencyBandList_v1760);
    }
    if (value.has_frequencyBandListSUL_v1760) {
        Encode_MultiFrequencyBandListNR_SIB_v1760(enc, value.frequencyBandListSUL_v1760);
    }
    return enc.Error();
}

ErrorCode Decode_InterFreqCarrierFreqInfo_v1760(Decoder& dec, InterFreqCarrierFreqInfo_v1760& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MultiFrequencyBandListNR_SIB_v1760(dec, value.frequencyBandList_v1760) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MultiFrequencyBandListNR_SIB_v1760(dec, value.frequencyBandListSUL_v1760) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_InterFreqCarrierFreqInfo_v1760(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterFreqCarrierFreqInfo_v1760(InterFreqCarrierFreqInfo_v1760& value)
{
    if (value.has_frequencyBandList_v1760) {
        Free_MultiFrequencyBandListNR_SIB_v1760(value.frequencyBandList_v1760);
    }
    if (value.has_frequencyBandListSUL_v1760) {
        Free_MultiFrequencyBandListNR_SIB_v1760(value.frequencyBandListSUL_v1760);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PCI_Range：ASN.1 PCI-Range；源文件第 9117 行；SEQUENCE。
// Encode_PCI_Range 只读不分配；Decode_PCI_Range 可能 malloc（失败时内部已释放并清零）；Free_PCI_Range 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PCI_Range(Encoder& enc, const PCI_Range& value)
{
    enc.WriteBit(value.has_range);
    enc.WriteConstrainedInteger((std::int64_t)(value.start), 0, 1007);
    if (value.has_range) {
        enc.WriteConstrainedInteger((std::int64_t)(value.range), 0, 15);
    }
    return enc.Error();
}

ErrorCode Decode_PCI_Range(Decoder& dec, PCI_Range& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
        value.start = (PhysCellId)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.range = (PCI_Range_2)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PCI_Range(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PCI_Range(PCI_Range& value)
{
    if (value.has_range) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InterFreqCarrierFreqInfo_v1800：ASN.1 InterFreqCarrierFreqInfo-v1800；源文件第 3583 行；SEQUENCE。
// Encode_InterFreqCarrierFreqInfo_v1800 只读不分配；Decode_InterFreqCarrierFreqInfo_v1800 可能 malloc（失败时内部已释放并清零）；Free_InterFreqCarrierFreqInfo_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InterFreqCarrierFreqInfo_v1800(Encoder& enc, const InterFreqCarrierFreqInfo_v1800& value)
{
    enc.WriteBit(value.has_frequencyBandListAerial_r18);
    enc.WriteBit(value.has_mobileIAB_CellList_r18);
    enc.WriteBit(value.has_mobileIAB_Freq_r18);
    enc.WriteBit(value.has_eRedCapAccessAllowed_r18);
    enc.WriteBit(value.has_tn_AreaIdList_r18);
    enc.WriteBit(value.has_accessAllowed2RxXR_r18);
    if (value.has_frequencyBandListAerial_r18) {
        Encode_MultiFrequencyBandListNR_Aerial_SIB_r18(enc, value.frequencyBandListAerial_r18);
    }
    if (value.has_mobileIAB_CellList_r18) {
        Encode_PCI_Range(enc, value.mobileIAB_CellList_r18);
    }
    if (value.has_mobileIAB_Freq_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mobileIAB_Freq_r18), 0, 0);
    }
    if (value.has_eRedCapAccessAllowed_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eRedCapAccessAllowed_r18), 0, 0);
    }
    if (value.has_tn_AreaIdList_r18) {
enc.WriteConstrainedLength(value.tn_AreaIdList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.tn_AreaIdList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.tn_AreaIdList_r18_items[i]), 1, 32);
}
    }
    if (value.has_accessAllowed2RxXR_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.accessAllowed2RxXR_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_InterFreqCarrierFreqInfo_v1800(Decoder& dec, InterFreqCarrierFreqInfo_v1800& value)
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
        if (Decode_MultiFrequencyBandListNR_Aerial_SIB_r18(dec, value.frequencyBandListAerial_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_PCI_Range(dec, value.mobileIAB_CellList_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        value.mobileIAB_Freq_r18 = (InterFreqCarrierFreqInfo_v1800_MobileIAB_Freq_r18)0;
    }
    if (present_3) {
        value.eRedCapAccessAllowed_r18 = (InterFreqCarrierFreqInfo_v1800_ERedCapAccessAllowed_r18)0;
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.tn_AreaIdList_r18_count)) { goto fail; }
if (value.tn_AreaIdList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.tn_AreaIdList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.tn_AreaIdList_r18_count > 0u) {
    value.tn_AreaIdList_r18_items = (TN_AreaId_r18*)std::malloc((std::size_t)value.tn_AreaIdList_r18_count * sizeof(TN_AreaId_r18));
    if (value.tn_AreaIdList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.tn_AreaIdList_r18_items, 0, (std::size_t)value.tn_AreaIdList_r18_count * sizeof(TN_AreaId_r18));
}
for (std::uint32_t i = 0; i < value.tn_AreaIdList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
    value.tn_AreaIdList_r18_items[i] = (TN_AreaId_r18)tmp_value;
}
    }
    if (present_5) {
        value.accessAllowed2RxXR_r18 = (InterFreqCarrierFreqInfo_v1800_AccessAllowed2RxXR_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_InterFreqCarrierFreqInfo_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterFreqCarrierFreqInfo_v1800(InterFreqCarrierFreqInfo_v1800& value)
{
    if (value.has_frequencyBandListAerial_r18) {
        Free_MultiFrequencyBandListNR_Aerial_SIB_r18(value.frequencyBandListAerial_r18);
    }
    if (value.has_mobileIAB_CellList_r18) {
        Free_PCI_Range(value.mobileIAB_CellList_r18);
    }
    if (value.has_mobileIAB_Freq_r18) {
    }
    if (value.has_eRedCapAccessAllowed_r18) {
    }
    if (value.has_tn_AreaIdList_r18) {
        if (value.tn_AreaIdList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.tn_AreaIdList_r18_count; ++i) {
            }
            std::free(value.tn_AreaIdList_r18_items);
            value.tn_AreaIdList_r18_items = nullptr;
        }
        value.tn_AreaIdList_r18_count = 0;
    }
    if (value.has_accessAllowed2RxXR_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InterFreqNeighCellInfo：ASN.1 InterFreqNeighCellInfo；源文件第 3600 行；SEQUENCE。
// Encode_InterFreqNeighCellInfo 只读不分配；Decode_InterFreqNeighCellInfo 可能 malloc（失败时内部已释放并清零）；Free_InterFreqNeighCellInfo 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InterFreqNeighCellInfo(Encoder& enc, const InterFreqNeighCellInfo& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_q_RxLevMinOffsetCell);
    enc.WriteBit(value.has_q_RxLevMinOffsetCellSUL);
    enc.WriteBit(value.has_q_QualMinOffsetCell);
    enc.WriteConstrainedInteger((std::int64_t)(value.physCellId), 0, 1007);
    enc.WriteConstrainedInteger((std::int64_t)(value.q_OffsetCell), 0, 30);
    if (value.has_q_RxLevMinOffsetCell) {
        enc.WriteConstrainedInteger((std::int64_t)(value.q_RxLevMinOffsetCell), 1, 8);
    }
    if (value.has_q_RxLevMinOffsetCellSUL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.q_RxLevMinOffsetCellSUL), 1, 8);
    }
    if (value.has_q_QualMinOffsetCell) {
        enc.WriteConstrainedInteger((std::int64_t)(value.q_QualMinOffsetCell), 1, 8);
    }
    return enc.Error();
}

ErrorCode Decode_InterFreqNeighCellInfo(Decoder& dec, InterFreqNeighCellInfo& value)
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
        if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
        value.physCellId = (PhysCellId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.q_OffsetCell = (Q_OffsetRange)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.q_RxLevMinOffsetCell = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.q_RxLevMinOffsetCellSUL = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.q_QualMinOffsetCell = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_InterFreqNeighCellInfo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterFreqNeighCellInfo(InterFreqNeighCellInfo& value)
{
    if (value.has_q_RxLevMinOffsetCell) {
    }
    if (value.has_q_RxLevMinOffsetCellSUL) {
    }
    if (value.has_q_QualMinOffsetCell) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InterFreqNeighCellInfo_v1610：ASN.1 InterFreqNeighCellInfo-v1610；源文件第 3609 行；SEQUENCE。
// Encode_InterFreqNeighCellInfo_v1610 只读不分配；Decode_InterFreqNeighCellInfo_v1610 可能 malloc（失败时内部已释放并清零）；Free_InterFreqNeighCellInfo_v1610 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InterFreqNeighCellInfo_v1610(Encoder& enc, const InterFreqNeighCellInfo_v1610& value)
{
    enc.WriteBit(value.has_ssb_PositionQCL_r16);
    if (value.has_ssb_PositionQCL_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_PositionQCL_r16), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_InterFreqNeighCellInfo_v1610(Decoder& dec, InterFreqNeighCellInfo_v1610& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.ssb_PositionQCL_r16 = (SSB_PositionQCL_Relation_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_InterFreqNeighCellInfo_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterFreqNeighCellInfo_v1610(InterFreqNeighCellInfo_v1610& value)
{
    if (value.has_ssb_PositionQCL_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InterFreqNeighCellInfo_v1710：ASN.1 InterFreqNeighCellInfo-v1710；源文件第 3613 行；SEQUENCE。
// Encode_InterFreqNeighCellInfo_v1710 只读不分配；Decode_InterFreqNeighCellInfo_v1710 可能 malloc（失败时内部已释放并清零）；Free_InterFreqNeighCellInfo_v1710 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InterFreqNeighCellInfo_v1710(Encoder& enc, const InterFreqNeighCellInfo_v1710& value)
{
    enc.WriteBit(value.has_ssb_PositionQCL_r17);
    if (value.has_ssb_PositionQCL_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_PositionQCL_r17), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_InterFreqNeighCellInfo_v1710(Decoder& dec, InterFreqNeighCellInfo_v1710& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.ssb_PositionQCL_r17 = (SSB_PositionQCL_Relation_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_InterFreqNeighCellInfo_v1710(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterFreqNeighCellInfo_v1710(InterFreqNeighCellInfo_v1710& value)
{
    if (value.has_ssb_PositionQCL_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// InterFreqCAG_CellListPerPLMN_r16：ASN.1 InterFreqCAG-CellListPerPLMN-r16；源文件第 3621 行；SEQUENCE。
// Encode_InterFreqCAG_CellListPerPLMN_r16 只读不分配；Decode_InterFreqCAG_CellListPerPLMN_r16 可能 malloc（失败时内部已释放并清零）；Free_InterFreqCAG_CellListPerPLMN_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_InterFreqCAG_CellListPerPLMN_r16(Encoder& enc, const InterFreqCAG_CellListPerPLMN_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.plmn_IdentityIndex_r16), 1, 12);
enc.WriteConstrainedLength(value.cag_CellList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cag_CellList_r16_count; ++i) {
    Encode_PCI_Range(enc, value.cag_CellList_r16_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_InterFreqCAG_CellListPerPLMN_r16(Decoder& dec, InterFreqCAG_CellListPerPLMN_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 12, tmp_value)) { goto fail; }
        value.plmn_IdentityIndex_r16 = (int64_t)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.cag_CellList_r16_count)) { goto fail; }
if (value.cag_CellList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cag_CellList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cag_CellList_r16_count > 0u) {
    value.cag_CellList_r16_items = (PCI_Range*)std::malloc((std::size_t)value.cag_CellList_r16_count * sizeof(PCI_Range));
    if (value.cag_CellList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cag_CellList_r16_items, 0, (std::size_t)value.cag_CellList_r16_count * sizeof(PCI_Range));
}
for (std::uint32_t i = 0; i < value.cag_CellList_r16_count; ++i) {
    if (Decode_PCI_Range(dec, value.cag_CellList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_InterFreqCAG_CellListPerPLMN_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterFreqCAG_CellListPerPLMN_r16(InterFreqCAG_CellListPerPLMN_r16& value)
{
    if (value.cag_CellList_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.cag_CellList_r16_count; ++i) {
            Free_PCI_Range(value.cag_CellList_r16_items[i]);
        }
        std::free(value.cag_CellList_r16_items);
        value.cag_CellList_r16_items = nullptr;
    }
    value.cag_CellList_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CarrierFreqListEUTRA_v1610：ASN.1 CarrierFreqListEUTRA-v1610；源文件第 3649 行；SEQUENCE OF。
// Encode_CarrierFreqListEUTRA_v1610 只读不分配；Decode_CarrierFreqListEUTRA_v1610 可能 malloc（失败时内部已释放并清零）；Free_CarrierFreqListEUTRA_v1610 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CarrierFreqListEUTRA_v1610(Encoder& enc, const CarrierFreqListEUTRA_v1610& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_CarrierFreqEUTRA_v1610(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_CarrierFreqListEUTRA_v1610(Decoder& dec, CarrierFreqListEUTRA_v1610& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (CarrierFreqEUTRA_v1610*)std::malloc((std::size_t)value.count * sizeof(CarrierFreqEUTRA_v1610));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(CarrierFreqEUTRA_v1610));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_CarrierFreqEUTRA_v1610(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_CarrierFreqListEUTRA_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CarrierFreqListEUTRA_v1610(CarrierFreqListEUTRA_v1610& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_CarrierFreqEUTRA_v1610(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB5_ExtGroup1：ASN.1 SIB5_ExtGroup1；源文件第 3635 行；扩展添加组 [[ ]]。
// Encode_SIB5_ExtGroup1 只读不分配；Decode_SIB5_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SIB5_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB5_ExtGroup1(Encoder& enc, const SIB5_ExtGroup1& value)
{
    enc.WriteBit(value.has_carrierFreqListEUTRA_v1610);
    if (value.has_carrierFreqListEUTRA_v1610) {
        Encode_CarrierFreqListEUTRA_v1610(enc, value.carrierFreqListEUTRA_v1610);
    }
    return enc.Error();
}

ErrorCode Decode_SIB5_ExtGroup1(Decoder& dec, SIB5_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_CarrierFreqListEUTRA_v1610(dec, value.carrierFreqListEUTRA_v1610) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB5_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB5_ExtGroup1(SIB5_ExtGroup1& value)
{
    if (value.has_carrierFreqListEUTRA_v1610) {
        Free_CarrierFreqListEUTRA_v1610(value.carrierFreqListEUTRA_v1610);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CarrierFreqListEUTRA_v1700：ASN.1 CarrierFreqListEUTRA-v1700；源文件第 3651 行；SEQUENCE OF。
// Encode_CarrierFreqListEUTRA_v1700 只读不分配；Decode_CarrierFreqListEUTRA_v1700 可能 malloc（失败时内部已释放并清零）；Free_CarrierFreqListEUTRA_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CarrierFreqListEUTRA_v1700(Encoder& enc, const CarrierFreqListEUTRA_v1700& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_CarrierFreqEUTRA_v1700(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_CarrierFreqListEUTRA_v1700(Decoder& dec, CarrierFreqListEUTRA_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (CarrierFreqEUTRA_v1700*)std::malloc((std::size_t)value.count * sizeof(CarrierFreqEUTRA_v1700));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(CarrierFreqEUTRA_v1700));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_CarrierFreqEUTRA_v1700(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_CarrierFreqListEUTRA_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CarrierFreqListEUTRA_v1700(CarrierFreqListEUTRA_v1700& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_CarrierFreqEUTRA_v1700(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB5_ExtGroup2：ASN.1 SIB5_ExtGroup2；源文件第 3638 行；扩展添加组 [[ ]]。
// Encode_SIB5_ExtGroup2 只读不分配；Decode_SIB5_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_SIB5_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB5_ExtGroup2(Encoder& enc, const SIB5_ExtGroup2& value)
{
    enc.WriteBit(value.has_carrierFreqListEUTRA_v1700);
    enc.WriteBit(value.has_idleModeMeasVoiceFallback_r17);
    if (value.has_carrierFreqListEUTRA_v1700) {
        Encode_CarrierFreqListEUTRA_v1700(enc, value.carrierFreqListEUTRA_v1700);
    }
    if (value.has_idleModeMeasVoiceFallback_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.idleModeMeasVoiceFallback_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SIB5_ExtGroup2(Decoder& dec, SIB5_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_CarrierFreqListEUTRA_v1700(dec, value.carrierFreqListEUTRA_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.idleModeMeasVoiceFallback_r17 = (SIB5_ExtGroup2_IdleModeMeasVoiceFallback_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB5_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB5_ExtGroup2(SIB5_ExtGroup2& value)
{
    if (value.has_carrierFreqListEUTRA_v1700) {
        Free_CarrierFreqListEUTRA_v1700(value.carrierFreqListEUTRA_v1700);
    }
    if (value.has_idleModeMeasVoiceFallback_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CarrierFreqListEUTRA_v1800：ASN.1 CarrierFreqListEUTRA-v1800；源文件第 3653 行；SEQUENCE OF。
// Encode_CarrierFreqListEUTRA_v1800 只读不分配；Decode_CarrierFreqListEUTRA_v1800 可能 malloc（失败时内部已释放并清零）；Free_CarrierFreqListEUTRA_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CarrierFreqListEUTRA_v1800(Encoder& enc, const CarrierFreqListEUTRA_v1800& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_CarrierFreqEUTRA_v1800(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_CarrierFreqListEUTRA_v1800(Decoder& dec, CarrierFreqListEUTRA_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (CarrierFreqEUTRA_v1800*)std::malloc((std::size_t)value.count * sizeof(CarrierFreqEUTRA_v1800));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(CarrierFreqEUTRA_v1800));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_CarrierFreqEUTRA_v1800(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_CarrierFreqListEUTRA_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CarrierFreqListEUTRA_v1800(CarrierFreqListEUTRA_v1800& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_CarrierFreqEUTRA_v1800(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB5_ExtGroup3：ASN.1 SIB5_ExtGroup3；源文件第 3642 行；扩展添加组 [[ ]]。
// Encode_SIB5_ExtGroup3 只读不分配；Decode_SIB5_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_SIB5_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB5_ExtGroup3(Encoder& enc, const SIB5_ExtGroup3& value)
{
    enc.WriteBit(value.has_carrierFreqListEUTRA_v1800);
    if (value.has_carrierFreqListEUTRA_v1800) {
        Encode_CarrierFreqListEUTRA_v1800(enc, value.carrierFreqListEUTRA_v1800);
    }
    return enc.Error();
}

ErrorCode Decode_SIB5_ExtGroup3(Decoder& dec, SIB5_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_CarrierFreqListEUTRA_v1800(dec, value.carrierFreqListEUTRA_v1800) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB5_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB5_ExtGroup3(SIB5_ExtGroup3& value)
{
    if (value.has_carrierFreqListEUTRA_v1800) {
        Free_CarrierFreqListEUTRA_v1800(value.carrierFreqListEUTRA_v1800);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CarrierFreqListEUTRA：ASN.1 CarrierFreqListEUTRA；源文件第 3647 行；SEQUENCE OF。
// Encode_CarrierFreqListEUTRA 只读不分配；Decode_CarrierFreqListEUTRA 可能 malloc（失败时内部已释放并清零）；Free_CarrierFreqListEUTRA 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CarrierFreqListEUTRA(Encoder& enc, const CarrierFreqListEUTRA& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_CarrierFreqEUTRA(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_CarrierFreqListEUTRA(Decoder& dec, CarrierFreqListEUTRA& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (CarrierFreqEUTRA*)std::malloc((std::size_t)value.count * sizeof(CarrierFreqEUTRA));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(CarrierFreqEUTRA));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_CarrierFreqEUTRA(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_CarrierFreqListEUTRA(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CarrierFreqListEUTRA(CarrierFreqListEUTRA& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_CarrierFreqEUTRA(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB5：ASN.1 SIB5；源文件第 3629 行；SEQUENCE。
// Encode_SIB5 只读不分配；Decode_SIB5 可能 malloc（失败时内部已释放并清零）；Free_SIB5 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB5(Encoder& enc, const SIB5& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_carrierFreqListEUTRA);
    enc.WriteBit(value.has_t_ReselectionEUTRA_SF);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    if (value.has_carrierFreqListEUTRA) {
        Encode_CarrierFreqListEUTRA(enc, value.carrierFreqListEUTRA);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.t_ReselectionEUTRA), 0, 7);
    if (value.has_t_ReselectionEUTRA_SF) {
        Encode_SpeedStateScaleFactors(enc, value.t_ReselectionEUTRA_SF);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SIB5_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SIB5_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_SIB5_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SIB5(Decoder& dec, SIB5& value)
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
        if (Decode_CarrierFreqListEUTRA(dec, value.carrierFreqListEUTRA) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.t_ReselectionEUTRA = (T_Reselection)tmp_value;
    }
    if (present_1) {
        if (Decode_SpeedStateScaleFactors(dec, value.t_ReselectionEUTRA_SF) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
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
    if (Decode_SIB5_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_SIB5_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_SIB5_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    Free_SIB5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB5(SIB5& value)
{
    if (value.has_carrierFreqListEUTRA) {
        Free_CarrierFreqListEUTRA(value.carrierFreqListEUTRA);
    }
    if (value.has_t_ReselectionEUTRA_SF) {
        Free_SpeedStateScaleFactors(value.t_ReselectionEUTRA_SF);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_extGroup1) {
        Free_SIB5_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SIB5_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_SIB5_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EUTRA_FreqExcludedCellList：ASN.1 EUTRA-FreqExcludedCellList；源文件第 3690 行；SEQUENCE OF。
// Encode_EUTRA_FreqExcludedCellList 只读不分配；Decode_EUTRA_FreqExcludedCellList 可能 malloc（失败时内部已释放并清零）；Free_EUTRA_FreqExcludedCellList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EUTRA_FreqExcludedCellList(Encoder& enc, const EUTRA_FreqExcludedCellList& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_EUTRA_PhysCellIdRange(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_EUTRA_FreqExcludedCellList(Decoder& dec, EUTRA_FreqExcludedCellList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (EUTRA_PhysCellIdRange*)std::malloc((std::size_t)value.count * sizeof(EUTRA_PhysCellIdRange));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(EUTRA_PhysCellIdRange));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_EUTRA_PhysCellIdRange(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_EUTRA_FreqExcludedCellList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EUTRA_FreqExcludedCellList(EUTRA_FreqExcludedCellList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_EUTRA_PhysCellIdRange(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EUTRA_FreqNeighCellList：ASN.1 EUTRA-FreqNeighCellList；源文件第 3692 行；SEQUENCE OF。
// Encode_EUTRA_FreqNeighCellList 只读不分配；Decode_EUTRA_FreqNeighCellList 可能 malloc（失败时内部已释放并清零）；Free_EUTRA_FreqNeighCellList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EUTRA_FreqNeighCellList(Encoder& enc, const EUTRA_FreqNeighCellList& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_EUTRA_FreqNeighCellInfo(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_EUTRA_FreqNeighCellList(Decoder& dec, EUTRA_FreqNeighCellList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (EUTRA_FreqNeighCellInfo*)std::malloc((std::size_t)value.count * sizeof(EUTRA_FreqNeighCellInfo));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(EUTRA_FreqNeighCellInfo));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_EUTRA_FreqNeighCellInfo(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_EUTRA_FreqNeighCellList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EUTRA_FreqNeighCellList(EUTRA_FreqNeighCellList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_EUTRA_FreqNeighCellInfo(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EUTRA_MultiBandInfoList：ASN.1 EUTRA-MultiBandInfoList；源文件第 21436 行；SEQUENCE OF。
// Encode_EUTRA_MultiBandInfoList 只读不分配；Decode_EUTRA_MultiBandInfoList 可能 malloc（失败时内部已释放并清零）；Free_EUTRA_MultiBandInfoList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EUTRA_MultiBandInfoList(Encoder& enc, const EUTRA_MultiBandInfoList& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_EUTRA_MultiBandInfo(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_EUTRA_MultiBandInfoList(Decoder& dec, EUTRA_MultiBandInfoList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (EUTRA_MultiBandInfo*)std::malloc((std::size_t)value.count * sizeof(EUTRA_MultiBandInfo));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(EUTRA_MultiBandInfo));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_EUTRA_MultiBandInfo(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_EUTRA_MultiBandInfoList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EUTRA_MultiBandInfoList(EUTRA_MultiBandInfoList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_EUTRA_MultiBandInfo(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CarrierFreqEUTRA_ThreshX_Q：ASN.1 threshX-Q；源文件第 3669 行；SEQUENCE。
// Encode_CarrierFreqEUTRA_ThreshX_Q 只读不分配；Decode_CarrierFreqEUTRA_ThreshX_Q 可能 malloc（失败时内部已释放并清零）；Free_CarrierFreqEUTRA_ThreshX_Q 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CarrierFreqEUTRA_ThreshX_Q(Encoder& enc, const CarrierFreqEUTRA_ThreshX_Q& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.threshX_HighQ), 0, 31);
    enc.WriteConstrainedInteger((std::int64_t)(value.threshX_LowQ), 0, 31);
    return enc.Error();
}

ErrorCode Decode_CarrierFreqEUTRA_ThreshX_Q(Decoder& dec, CarrierFreqEUTRA_ThreshX_Q& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.threshX_HighQ = (ReselectionThresholdQ)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.threshX_LowQ = (ReselectionThresholdQ)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CarrierFreqEUTRA_ThreshX_Q(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CarrierFreqEUTRA_ThreshX_Q(CarrierFreqEUTRA_ThreshX_Q& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CarrierFreqEUTRA：ASN.1 CarrierFreqEUTRA；源文件第 3655 行；SEQUENCE。
// Encode_CarrierFreqEUTRA 只读不分配；Decode_CarrierFreqEUTRA 可能 malloc（失败时内部已释放并清零）；Free_CarrierFreqEUTRA 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CarrierFreqEUTRA(Encoder& enc, const CarrierFreqEUTRA& value)
{
    enc.WriteBit(value.has_eutra_multiBandInfoList);
    enc.WriteBit(value.has_eutra_FreqNeighCellList);
    enc.WriteBit(value.has_eutra_ExcludedCellList);
    enc.WriteBit(value.has_cellReselectionPriority);
    enc.WriteBit(value.has_cellReselectionSubPriority);
    enc.WriteBit(value.has_threshX_Q);
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierFreq), 0, 262143);
    if (value.has_eutra_multiBandInfoList) {
        Encode_EUTRA_MultiBandInfoList(enc, value.eutra_multiBandInfoList);
    }
    if (value.has_eutra_FreqNeighCellList) {
        Encode_EUTRA_FreqNeighCellList(enc, value.eutra_FreqNeighCellList);
    }
    if (value.has_eutra_ExcludedCellList) {
        Encode_EUTRA_FreqExcludedCellList(enc, value.eutra_ExcludedCellList);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.allowedMeasBandwidth), 0, 5);
    enc.WriteBool(value.presenceAntennaPort1);
    if (value.has_cellReselectionPriority) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cellReselectionPriority), 0, 7);
    }
    if (value.has_cellReselectionSubPriority) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cellReselectionSubPriority), 0, 3);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.threshX_High), 0, 31);
    enc.WriteConstrainedInteger((std::int64_t)(value.threshX_Low), 0, 31);
    enc.WriteConstrainedInteger((std::int64_t)(value.q_RxLevMin), -70, -22);
    enc.WriteConstrainedInteger((std::int64_t)(value.q_QualMin), -34, -3);
    enc.WriteConstrainedInteger((std::int64_t)(value.p_MaxEUTRA), -30, 33);
    if (value.has_threshX_Q) {
        Encode_CarrierFreqEUTRA_ThreshX_Q(enc, value.threshX_Q);
    }
    return enc.Error();
}

ErrorCode Decode_CarrierFreqEUTRA(Decoder& dec, CarrierFreqEUTRA& value)
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
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 262143, tmp_value)) { goto fail; }
        value.carrierFreq = (ARFCN_ValueEUTRA)tmp_value;
    }
    if (present_0) {
        if (Decode_EUTRA_MultiBandInfoList(dec, value.eutra_multiBandInfoList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_EUTRA_FreqNeighCellList(dec, value.eutra_FreqNeighCellList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_EUTRA_FreqExcludedCellList(dec, value.eutra_ExcludedCellList) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.allowedMeasBandwidth = (EUTRA_AllowedMeasBandwidth)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.presenceAntennaPort1 = tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.cellReselectionPriority = (CellReselectionPriority)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.cellReselectionSubPriority = (CellReselectionSubPriority)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.threshX_High = (ReselectionThreshold)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.threshX_Low = (ReselectionThreshold)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-70, -22, tmp_value)) { goto fail; }
        value.q_RxLevMin = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-34, -3, tmp_value)) { goto fail; }
        value.q_QualMin = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-30, 33, tmp_value)) { goto fail; }
        value.p_MaxEUTRA = (int64_t)tmp_value;
    }
    if (present_5) {
        if (Decode_CarrierFreqEUTRA_ThreshX_Q(dec, value.threshX_Q) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CarrierFreqEUTRA(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CarrierFreqEUTRA(CarrierFreqEUTRA& value)
{
    if (value.has_eutra_multiBandInfoList) {
        Free_EUTRA_MultiBandInfoList(value.eutra_multiBandInfoList);
    }
    if (value.has_eutra_FreqNeighCellList) {
        Free_EUTRA_FreqNeighCellList(value.eutra_FreqNeighCellList);
    }
    if (value.has_eutra_ExcludedCellList) {
        Free_EUTRA_FreqExcludedCellList(value.eutra_ExcludedCellList);
    }
    if (value.has_cellReselectionPriority) {
    }
    if (value.has_cellReselectionSubPriority) {
    }
    if (value.has_threshX_Q) {
        Free_CarrierFreqEUTRA_ThreshX_Q(value.threshX_Q);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CarrierFreqEUTRA_v1610：ASN.1 CarrierFreqEUTRA-v1610；源文件第 3675 行；SEQUENCE。
// Encode_CarrierFreqEUTRA_v1610 只读不分配；Decode_CarrierFreqEUTRA_v1610 可能 malloc（失败时内部已释放并清零）；Free_CarrierFreqEUTRA_v1610 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CarrierFreqEUTRA_v1610(Encoder& enc, const CarrierFreqEUTRA_v1610& value)
{
    enc.WriteBit(value.has_highSpeedEUTRACarrier_r16);
    if (value.has_highSpeedEUTRACarrier_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.highSpeedEUTRACarrier_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CarrierFreqEUTRA_v1610(Decoder& dec, CarrierFreqEUTRA_v1610& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.highSpeedEUTRACarrier_r16 = (CarrierFreqEUTRA_v1610_HighSpeedEUTRACarrier_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CarrierFreqEUTRA_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CarrierFreqEUTRA_v1610(CarrierFreqEUTRA_v1610& value)
{
    if (value.has_highSpeedEUTRACarrier_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EUTRA_FreqNeighHSDN_CellList_r17：ASN.1 EUTRA-FreqNeighHSDN-CellList-r17；源文件第 3688 行；SEQUENCE OF。
// Encode_EUTRA_FreqNeighHSDN_CellList_r17 只读不分配；Decode_EUTRA_FreqNeighHSDN_CellList_r17 可能 malloc（失败时内部已释放并清零）；Free_EUTRA_FreqNeighHSDN_CellList_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EUTRA_FreqNeighHSDN_CellList_r17(Encoder& enc, const EUTRA_FreqNeighHSDN_CellList_r17& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_EUTRA_PhysCellIdRange(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_EUTRA_FreqNeighHSDN_CellList_r17(Decoder& dec, EUTRA_FreqNeighHSDN_CellList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (EUTRA_PhysCellIdRange*)std::malloc((std::size_t)value.count * sizeof(EUTRA_PhysCellIdRange));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(EUTRA_PhysCellIdRange));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_EUTRA_PhysCellIdRange(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_EUTRA_FreqNeighHSDN_CellList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EUTRA_FreqNeighHSDN_CellList_r17(EUTRA_FreqNeighHSDN_CellList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_EUTRA_PhysCellIdRange(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CarrierFreqEUTRA_v1700：ASN.1 CarrierFreqEUTRA-v1700；源文件第 3679 行；SEQUENCE。
// Encode_CarrierFreqEUTRA_v1700 只读不分配；Decode_CarrierFreqEUTRA_v1700 可能 malloc（失败时内部已释放并清零）；Free_CarrierFreqEUTRA_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CarrierFreqEUTRA_v1700(Encoder& enc, const CarrierFreqEUTRA_v1700& value)
{
    enc.WriteBit(value.has_eutra_FreqNeighHSDN_CellList_r17);
    if (value.has_eutra_FreqNeighHSDN_CellList_r17) {
        Encode_EUTRA_FreqNeighHSDN_CellList_r17(enc, value.eutra_FreqNeighHSDN_CellList_r17);
    }
    return enc.Error();
}

ErrorCode Decode_CarrierFreqEUTRA_v1700(Decoder& dec, CarrierFreqEUTRA_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_EUTRA_FreqNeighHSDN_CellList_r17(dec, value.eutra_FreqNeighHSDN_CellList_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CarrierFreqEUTRA_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CarrierFreqEUTRA_v1700(CarrierFreqEUTRA_v1700& value)
{
    if (value.has_eutra_FreqNeighHSDN_CellList_r17) {
        Free_EUTRA_FreqNeighHSDN_CellList_r17(value.eutra_FreqNeighHSDN_CellList_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EUTRA_MultiBandInfoListAerial_r18：ASN.1 EUTRA-MultiBandInfoListAerial-r18；源文件第 21446 行；SEQUENCE OF。
// Encode_EUTRA_MultiBandInfoListAerial_r18 只读不分配；Decode_EUTRA_MultiBandInfoListAerial_r18 可能 malloc（失败时内部已释放并清零）；Free_EUTRA_MultiBandInfoListAerial_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EUTRA_MultiBandInfoListAerial_r18(Encoder& enc, const EUTRA_MultiBandInfoListAerial_r18& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_EUTRA_MultiBandInfoAerial_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_EUTRA_MultiBandInfoListAerial_r18(Decoder& dec, EUTRA_MultiBandInfoListAerial_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (EUTRA_MultiBandInfoAerial_r18*)std::malloc((std::size_t)value.count * sizeof(EUTRA_MultiBandInfoAerial_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(EUTRA_MultiBandInfoAerial_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_EUTRA_MultiBandInfoAerial_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_EUTRA_MultiBandInfoListAerial_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EUTRA_MultiBandInfoListAerial_r18(EUTRA_MultiBandInfoListAerial_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_EUTRA_MultiBandInfoAerial_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CarrierFreqEUTRA_v1800：ASN.1 CarrierFreqEUTRA-v1800；源文件第 3683 行；SEQUENCE。
// Encode_CarrierFreqEUTRA_v1800 只读不分配；Decode_CarrierFreqEUTRA_v1800 可能 malloc（失败时内部已释放并清零）；Free_CarrierFreqEUTRA_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CarrierFreqEUTRA_v1800(Encoder& enc, const CarrierFreqEUTRA_v1800& value)
{
    enc.WriteBit(value.has_eutra_MultiBandInfoListAerial_r18);
    enc.WriteBit(value.has_tn_AreaIdList_r18);
    if (value.has_eutra_MultiBandInfoListAerial_r18) {
        Encode_EUTRA_MultiBandInfoListAerial_r18(enc, value.eutra_MultiBandInfoListAerial_r18);
    }
    if (value.has_tn_AreaIdList_r18) {
enc.WriteConstrainedLength(value.tn_AreaIdList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.tn_AreaIdList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.tn_AreaIdList_r18_items[i]), 1, 32);
}
    }
    return enc.Error();
}

ErrorCode Decode_CarrierFreqEUTRA_v1800(Decoder& dec, CarrierFreqEUTRA_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_EUTRA_MultiBandInfoListAerial_r18(dec, value.eutra_MultiBandInfoListAerial_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.tn_AreaIdList_r18_count)) { goto fail; }
if (value.tn_AreaIdList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.tn_AreaIdList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.tn_AreaIdList_r18_count > 0u) {
    value.tn_AreaIdList_r18_items = (TN_AreaId_r18*)std::malloc((std::size_t)value.tn_AreaIdList_r18_count * sizeof(TN_AreaId_r18));
    if (value.tn_AreaIdList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.tn_AreaIdList_r18_items, 0, (std::size_t)value.tn_AreaIdList_r18_count * sizeof(TN_AreaId_r18));
}
for (std::uint32_t i = 0; i < value.tn_AreaIdList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
    value.tn_AreaIdList_r18_items[i] = (TN_AreaId_r18)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CarrierFreqEUTRA_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CarrierFreqEUTRA_v1800(CarrierFreqEUTRA_v1800& value)
{
    if (value.has_eutra_MultiBandInfoListAerial_r18) {
        Free_EUTRA_MultiBandInfoListAerial_r18(value.eutra_MultiBandInfoListAerial_r18);
    }
    if (value.has_tn_AreaIdList_r18) {
        if (value.tn_AreaIdList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.tn_AreaIdList_r18_count; ++i) {
            }
            std::free(value.tn_AreaIdList_r18_items);
            value.tn_AreaIdList_r18_items = nullptr;
        }
        value.tn_AreaIdList_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EUTRA_FreqNeighCellInfo：ASN.1 EUTRA-FreqNeighCellInfo；源文件第 3694 行；SEQUENCE。
// Encode_EUTRA_FreqNeighCellInfo 只读不分配；Decode_EUTRA_FreqNeighCellInfo 可能 malloc（失败时内部已释放并清零）；Free_EUTRA_FreqNeighCellInfo 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EUTRA_FreqNeighCellInfo(Encoder& enc, const EUTRA_FreqNeighCellInfo& value)
{
    enc.WriteBit(value.has_q_RxLevMinOffsetCell);
    enc.WriteBit(value.has_q_QualMinOffsetCell);
    enc.WriteConstrainedInteger((std::int64_t)(value.physCellId), 0, 503);
    enc.WriteConstrainedInteger((std::int64_t)(value.dummy), 0, 30);
    if (value.has_q_RxLevMinOffsetCell) {
        enc.WriteConstrainedInteger((std::int64_t)(value.q_RxLevMinOffsetCell), 1, 8);
    }
    if (value.has_q_QualMinOffsetCell) {
        enc.WriteConstrainedInteger((std::int64_t)(value.q_QualMinOffsetCell), 1, 8);
    }
    return enc.Error();
}

ErrorCode Decode_EUTRA_FreqNeighCellInfo(Decoder& dec, EUTRA_FreqNeighCellInfo& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 503, tmp_value)) { goto fail; }
        value.physCellId = (EUTRA_PhysCellId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.dummy = (EUTRA_Q_OffsetRange)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.q_RxLevMinOffsetCell = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.q_QualMinOffsetCell = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EUTRA_FreqNeighCellInfo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EUTRA_FreqNeighCellInfo(EUTRA_FreqNeighCellInfo& value)
{
    if (value.has_q_RxLevMinOffsetCell) {
    }
    if (value.has_q_QualMinOffsetCell) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB6：ASN.1 SIB6；源文件第 3704 行；SEQUENCE。
// Encode_SIB6 只读不分配；Decode_SIB6 可能 malloc（失败时内部已释放并清零）；Free_SIB6 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB6(Encoder& enc, const SIB6& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteFixedBitString(value.messageIdentifier.bytes, value.messageIdentifier.bitLength, 16, 16);
    enc.WriteFixedBitString(value.serialNumber.bytes, value.serialNumber.bitLength, 16, 16);
    enc.WriteFixedOctetString(value.warningType.bytes, value.warningType.length, 2, 2);
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    return enc.Error();
}

ErrorCode Decode_SIB6(Decoder& dec, SIB6& value)
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
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.messageIdentifier.bytes = string_bytes;
        value.messageIdentifier.bitLength = string_length;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.serialNumber.bytes = string_bytes;
        value.serialNumber.bitLength = string_length;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedOctetString(string_bytes, 2)) { goto fail; }
        string_length = 2;
        value.warningType.bytes = string_bytes;
        value.warningType.length = string_length;
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
    Free_SIB6(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB6(SIB6& value)
{
    std::free(value.messageIdentifier.bytes);
    value.messageIdentifier.bytes = nullptr;
    value.messageIdentifier.bitLength = 0;
    std::free(value.serialNumber.bytes);
    value.serialNumber.bytes = nullptr;
    value.serialNumber.bitLength = 0;
    std::free(value.warningType.bytes);
    value.warningType.bytes = nullptr;
    value.warningType.length = 0;
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB7：ASN.1 SIB7；源文件第 3715 行；SEQUENCE。
// Encode_SIB7 只读不分配；Decode_SIB7 可能 malloc（失败时内部已释放并清零）；Free_SIB7 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB7(Encoder& enc, const SIB7& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_dataCodingScheme);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteFixedBitString(value.messageIdentifier.bytes, value.messageIdentifier.bitLength, 16, 16);
    enc.WriteFixedBitString(value.serialNumber.bytes, value.serialNumber.bitLength, 16, 16);
    enc.WriteConstrainedInteger((std::int64_t)(value.warningMessageSegmentType), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.warningMessageSegmentNumber), 0, 63);
    enc.WriteSemiConstrainedOctetString(value.warningMessageSegment.bytes, value.warningMessageSegment.length, 0, 0xFFFFFFFFu);
    if (value.has_dataCodingScheme) {
        enc.WriteFixedOctetString(value.dataCodingScheme.bytes, value.dataCodingScheme.length, 1, 1);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    return enc.Error();
}

ErrorCode Decode_SIB7(Decoder& dec, SIB7& value)
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
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.messageIdentifier.bytes = string_bytes;
        value.messageIdentifier.bitLength = string_length;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.serialNumber.bytes = string_bytes;
        value.serialNumber.bitLength = string_length;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.warningMessageSegmentType = (SIB7_WarningMessageSegmentType)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.warningMessageSegmentNumber = (int64_t)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.warningMessageSegment.bytes = string_bytes;
        value.warningMessageSegment.length = string_length;
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedOctetString(string_bytes, 1)) { goto fail; }
        string_length = 1;
        value.dataCodingScheme.bytes = string_bytes;
        value.dataCodingScheme.length = string_length;
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
    Free_SIB7(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB7(SIB7& value)
{
    std::free(value.messageIdentifier.bytes);
    value.messageIdentifier.bytes = nullptr;
    value.messageIdentifier.bitLength = 0;
    std::free(value.serialNumber.bytes);
    value.serialNumber.bytes = nullptr;
    value.serialNumber.bitLength = 0;
    std::free(value.warningMessageSegment.bytes);
    value.warningMessageSegment.bytes = nullptr;
    value.warningMessageSegment.length = 0;
    if (value.has_dataCodingScheme) {
        std::free(value.dataCodingScheme.bytes);
        value.dataCodingScheme.bytes = nullptr;
        value.dataCodingScheme.length = 0;
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB8：ASN.1 SIB8；源文件第 3729 行；SEQUENCE。
// Encode_SIB8 只读不分配；Decode_SIB8 可能 malloc（失败时内部已释放并清零）；Free_SIB8 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB8(Encoder& enc, const SIB8& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_dataCodingScheme);
    enc.WriteBit(value.has_warningAreaCoordinatesSegment);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteFixedBitString(value.messageIdentifier.bytes, value.messageIdentifier.bitLength, 16, 16);
    enc.WriteFixedBitString(value.serialNumber.bytes, value.serialNumber.bitLength, 16, 16);
    enc.WriteConstrainedInteger((std::int64_t)(value.warningMessageSegmentType), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.warningMessageSegmentNumber), 0, 63);
    enc.WriteSemiConstrainedOctetString(value.warningMessageSegment.bytes, value.warningMessageSegment.length, 0, 0xFFFFFFFFu);
    if (value.has_dataCodingScheme) {
        enc.WriteFixedOctetString(value.dataCodingScheme.bytes, value.dataCodingScheme.length, 1, 1);
    }
    if (value.has_warningAreaCoordinatesSegment) {
        enc.WriteSemiConstrainedOctetString(value.warningAreaCoordinatesSegment.bytes, value.warningAreaCoordinatesSegment.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    return enc.Error();
}

ErrorCode Decode_SIB8(Decoder& dec, SIB8& value)
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
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.messageIdentifier.bytes = string_bytes;
        value.messageIdentifier.bitLength = string_length;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.serialNumber.bytes = string_bytes;
        value.serialNumber.bitLength = string_length;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.warningMessageSegmentType = (SIB8_WarningMessageSegmentType)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.warningMessageSegmentNumber = (int64_t)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.warningMessageSegment.bytes = string_bytes;
        value.warningMessageSegment.length = string_length;
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedOctetString(string_bytes, 1)) { goto fail; }
        string_length = 1;
        value.dataCodingScheme.bytes = string_bytes;
        value.dataCodingScheme.length = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.warningAreaCoordinatesSegment.bytes = string_bytes;
        value.warningAreaCoordinatesSegment.length = string_length;
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
    Free_SIB8(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB8(SIB8& value)
{
    std::free(value.messageIdentifier.bytes);
    value.messageIdentifier.bytes = nullptr;
    value.messageIdentifier.bitLength = 0;
    std::free(value.serialNumber.bytes);
    value.serialNumber.bytes = nullptr;
    value.serialNumber.bitLength = 0;
    std::free(value.warningMessageSegment.bytes);
    value.warningMessageSegment.bytes = nullptr;
    value.warningMessageSegment.length = 0;
    if (value.has_dataCodingScheme) {
        std::free(value.dataCodingScheme.bytes);
        value.dataCodingScheme.bytes = nullptr;
        value.dataCodingScheme.length = 0;
    }
    if (value.has_warningAreaCoordinatesSegment) {
        std::free(value.warningAreaCoordinatesSegment.bytes);
        value.warningAreaCoordinatesSegment.bytes = nullptr;
        value.warningAreaCoordinatesSegment.length = 0;
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB9_ExtGroup1：ASN.1 SIB9_ExtGroup1；源文件第 3753 行；扩展添加组 [[ ]]。
// Encode_SIB9_ExtGroup1 只读不分配；Decode_SIB9_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SIB9_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB9_ExtGroup1(Encoder& enc, const SIB9_ExtGroup1& value)
{
    enc.WriteBit(value.has_referenceTimeInfo_r16);
    if (value.has_referenceTimeInfo_r16) {
        Encode_ReferenceTimeInfo_r16(enc, value.referenceTimeInfo_r16);
    }
    return enc.Error();
}

ErrorCode Decode_SIB9_ExtGroup1(Decoder& dec, SIB9_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_ReferenceTimeInfo_r16(dec, value.referenceTimeInfo_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB9_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB9_ExtGroup1(SIB9_ExtGroup1& value)
{
    if (value.has_referenceTimeInfo_r16) {
        Free_ReferenceTimeInfo_r16(value.referenceTimeInfo_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB9_ExtGroup2：ASN.1 SIB9_ExtGroup2；源文件第 3756 行；扩展添加组 [[ ]]。
// Encode_SIB9_ExtGroup2 只读不分配；Decode_SIB9_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_SIB9_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB9_ExtGroup2(Encoder& enc, const SIB9_ExtGroup2& value)
{
    enc.WriteBit(value.has_eventID_TSS_r18);
    if (value.has_eventID_TSS_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eventID_TSS_r18), 0, 63);
    }
    return enc.Error();
}

ErrorCode Decode_SIB9_ExtGroup2(Decoder& dec, SIB9_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.eventID_TSS_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB9_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB9_ExtGroup2(SIB9_ExtGroup2& value)
{
    if (value.has_eventID_TSS_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB9_TimeInfo：ASN.1 timeInfo；源文件第 3745 行；SEQUENCE。
// Encode_SIB9_TimeInfo 只读不分配；Decode_SIB9_TimeInfo 可能 malloc（失败时内部已释放并清零）；Free_SIB9_TimeInfo 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB9_TimeInfo(Encoder& enc, const SIB9_TimeInfo& value)
{
    enc.WriteBit(value.has_dayLightSavingTime);
    enc.WriteBit(value.has_leapSeconds);
    enc.WriteBit(value.has_localTimeOffset);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeInfoUTC), 0, 549755813887);
    if (value.has_dayLightSavingTime) {
        enc.WriteFixedBitString(value.dayLightSavingTime.bytes, value.dayLightSavingTime.bitLength, 2, 2);
    }
    if (value.has_leapSeconds) {
        enc.WriteConstrainedInteger((std::int64_t)(value.leapSeconds), -127, 128);
    }
    if (value.has_localTimeOffset) {
        enc.WriteConstrainedInteger((std::int64_t)(value.localTimeOffset), -63, 64);
    }
    return enc.Error();
}

ErrorCode Decode_SIB9_TimeInfo(Decoder& dec, SIB9_TimeInfo& value)
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
        if (!dec.ReadConstrainedInteger(0, 549755813887, tmp_value)) { goto fail; }
        value.timeInfoUTC = (int64_t)tmp_value;
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 2)) { goto fail; }
        string_length = 2;
        value.dayLightSavingTime.bytes = string_bytes;
        value.dayLightSavingTime.bitLength = string_length;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-127, 128, tmp_value)) { goto fail; }
        value.leapSeconds = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-63, 64, tmp_value)) { goto fail; }
        value.localTimeOffset = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB9_TimeInfo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB9_TimeInfo(SIB9_TimeInfo& value)
{
    if (value.has_dayLightSavingTime) {
        std::free(value.dayLightSavingTime.bytes);
        value.dayLightSavingTime.bytes = nullptr;
        value.dayLightSavingTime.bitLength = 0;
    }
    if (value.has_leapSeconds) {
    }
    if (value.has_localTimeOffset) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB9：ASN.1 SIB9；源文件第 3744 行；SEQUENCE。
// Encode_SIB9 只读不分配；Decode_SIB9 可能 malloc（失败时内部已释放并清零）；Free_SIB9 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB9(Encoder& enc, const SIB9& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_timeInfo);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    if (value.has_timeInfo) {
        Encode_SIB9_TimeInfo(enc, value.timeInfo);
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
    Encode_SIB9_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SIB9_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SIB9(Decoder& dec, SIB9& value)
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
        if (Decode_SIB9_TimeInfo(dec, value.timeInfo) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_SIB9_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_SIB9_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_SIB9(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB9(SIB9& value)
{
    if (value.has_timeInfo) {
        Free_SIB9_TimeInfo(value.timeInfo);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_extGroup1) {
        Free_SIB9_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SIB9_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// HRNN_List_r16：ASN.1 HRNN-List-r16；源文件第 3770 行；SEQUENCE OF。
// Encode_HRNN_List_r16 只读不分配；Decode_HRNN_List_r16 可能 malloc（失败时内部已释放并清零）；Free_HRNN_List_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_HRNN_List_r16(Encoder& enc, const HRNN_List_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 12u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_HRNN_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_HRNN_List_r16(Decoder& dec, HRNN_List_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 12u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 12u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (HRNN_r16*)std::malloc((std::size_t)value.count * sizeof(HRNN_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(HRNN_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_HRNN_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_HRNN_List_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_HRNN_List_r16(HRNN_List_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_HRNN_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB10_r16：ASN.1 SIB10-r16；源文件第 3764 行；SEQUENCE。
// Encode_SIB10_r16 只读不分配；Decode_SIB10_r16 可能 malloc（失败时内部已释放并清零）；Free_SIB10_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB10_r16(Encoder& enc, const SIB10_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_hrnn_List_r16);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    if (value.has_hrnn_List_r16) {
        Encode_HRNN_List_r16(enc, value.hrnn_List_r16);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    return enc.Error();
}

ErrorCode Decode_SIB10_r16(Decoder& dec, SIB10_r16& value)
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
        if (Decode_HRNN_List_r16(dec, value.hrnn_List_r16) != ErrorCode_Ok) { goto fail; }
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
    Free_SIB10_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB10_r16(SIB10_r16& value)
{
    if (value.has_hrnn_List_r16) {
        Free_HRNN_List_r16(value.hrnn_List_r16);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// HRNN_r16：ASN.1 HRNN-r16；源文件第 3772 行；SEQUENCE。
// Encode_HRNN_r16 只读不分配；Decode_HRNN_r16 可能 malloc（失败时内部已释放并清零）；Free_HRNN_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_HRNN_r16(Encoder& enc, const HRNN_r16& value)
{
    enc.WriteBit(value.has_hrnn_r16);
    if (value.has_hrnn_r16) {
        enc.WriteConstrainedOctetString(value.hrnn_r16.bytes, value.hrnn_r16.length, 1, 48);
    }
    return enc.Error();
}

ErrorCode Decode_HRNN_r16(Decoder& dec, HRNN_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedOctetString(string_bytes, string_length, 1, 48)) { goto fail; }
        value.hrnn_r16.bytes = string_bytes;
        value.hrnn_r16.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_HRNN_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_HRNN_r16(HRNN_r16& value)
{
    if (value.has_hrnn_r16) {
        std::free(value.hrnn_r16.bytes);
        value.hrnn_r16.bytes = nullptr;
        value.hrnn_r16.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasIdleConfigSIB_r16_ExtGroup1：ASN.1 MeasIdleConfigSIB_r16_ExtGroup1；源文件第 7513 行；扩展添加组 [[ ]]。
// Encode_MeasIdleConfigSIB_r16_ExtGroup1 只读不分配；Decode_MeasIdleConfigSIB_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_MeasIdleConfigSIB_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasIdleConfigSIB_r16_ExtGroup1(Encoder& enc, const MeasIdleConfigSIB_r16_ExtGroup1& value)
{
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

ErrorCode Decode_MeasIdleConfigSIB_r16_ExtGroup1(Decoder& dec, MeasIdleConfigSIB_r16_ExtGroup1& value)
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
    Free_MeasIdleConfigSIB_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasIdleConfigSIB_r16_ExtGroup1(MeasIdleConfigSIB_r16_ExtGroup1& value)
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
// MeasIdleConfigSIB_r16：ASN.1 MeasIdleConfigSIB-r16；源文件第 7509 行；SEQUENCE。
// Encode_MeasIdleConfigSIB_r16 只读不分配；Decode_MeasIdleConfigSIB_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasIdleConfigSIB_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasIdleConfigSIB_r16(Encoder& enc, const MeasIdleConfigSIB_r16& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_measIdleCarrierListNR_r16);
    enc.WriteBit(value.has_measIdleCarrierListEUTRA_r16);
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
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_MeasIdleConfigSIB_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_MeasIdleConfigSIB_r16(Decoder& dec, MeasIdleConfigSIB_r16& value)
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
    if (Decode_MeasIdleConfigSIB_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_MeasIdleConfigSIB_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasIdleConfigSIB_r16(MeasIdleConfigSIB_r16& value)
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
    if (value.has_extGroup1) {
        Free_MeasIdleConfigSIB_r16_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB11_r16：ASN.1 SIB11-r16；源文件第 3779 行；SEQUENCE。
// Encode_SIB11_r16 只读不分配；Decode_SIB11_r16 可能 malloc（失败时内部已释放并清零）；Free_SIB11_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB11_r16(Encoder& enc, const SIB11_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_measIdleConfigSIB_r16);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    if (value.has_measIdleConfigSIB_r16) {
        Encode_MeasIdleConfigSIB_r16(enc, value.measIdleConfigSIB_r16);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    return enc.Error();
}

ErrorCode Decode_SIB11_r16(Decoder& dec, SIB11_r16& value)
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
        if (Decode_MeasIdleConfigSIB_r16(dec, value.measIdleConfigSIB_r16) != ErrorCode_Ok) { goto fail; }
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
    Free_SIB11_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB11_r16(SIB11_r16& value)
{
    if (value.has_measIdleConfigSIB_r16) {
        Free_MeasIdleConfigSIB_r16(value.measIdleConfigSIB_r16);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB12_r16：ASN.1 SIB12-r16；源文件第 3788 行；SEQUENCE。
// Encode_SIB12_r16 只读不分配；Decode_SIB12_r16 可能 malloc（失败时内部已释放并清零）；Free_SIB12_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB12_r16(Encoder& enc, const SIB12_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.segmentNumber_r16), 0, 63);
    enc.WriteConstrainedInteger((std::int64_t)(value.segmentType_r16), 0, 1);
    enc.WriteSemiConstrainedOctetString(value.segmentContainer_r16.bytes, value.segmentContainer_r16.length, 0, 0xFFFFFFFFu);
    return enc.Error();
}

ErrorCode Decode_SIB12_r16(Decoder& dec, SIB12_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.segmentNumber_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.segmentType_r16 = (SIB12_r16_SegmentType_r16)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.segmentContainer_r16.bytes = string_bytes;
        value.segmentContainer_r16.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB12_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB12_r16(SIB12_r16& value)
{
    std::free(value.segmentContainer_r16.bytes);
    value.segmentContainer_r16.bytes = nullptr;
    value.segmentContainer_r16.length = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_DiscConfigCommon_r17：ASN.1 SL-DiscConfigCommon-r17；源文件第 3836 行；SEQUENCE。
// Encode_SL_DiscConfigCommon_r17 只读不分配；Decode_SL_DiscConfigCommon_r17 可能 malloc（失败时内部已释放并清零）；Free_SL_DiscConfigCommon_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_DiscConfigCommon_r17(Encoder& enc, const SL_DiscConfigCommon_r17& value)
{
    Encode_SL_RelayUE_Config_r17(enc, value.sl_RelayUE_ConfigCommon_r17);
    Encode_SL_RemoteUE_Config_r17(enc, value.sl_RemoteUE_ConfigCommon_r17);
    return enc.Error();
}

ErrorCode Decode_SL_DiscConfigCommon_r17(Decoder& dec, SL_DiscConfigCommon_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_SL_RelayUE_Config_r17(dec, value.sl_RelayUE_ConfigCommon_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_SL_RemoteUE_Config_r17(dec, value.sl_RemoteUE_ConfigCommon_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_DiscConfigCommon_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_DiscConfigCommon_r17(SL_DiscConfigCommon_r17& value)
{
    Free_SL_RelayUE_Config_r17(value.sl_RelayUE_ConfigCommon_r17);
    Free_SL_RemoteUE_Config_r17(value.sl_RemoteUE_ConfigCommon_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UE_TimersAndConstantsRemoteUE_r17：ASN.1 UE-TimersAndConstantsRemoteUE-r17；源文件第 13883 行；SEQUENCE。
// Encode_UE_TimersAndConstantsRemoteUE_r17 只读不分配；Decode_UE_TimersAndConstantsRemoteUE_r17 可能 malloc（失败时内部已释放并清零）；Free_UE_TimersAndConstantsRemoteUE_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UE_TimersAndConstantsRemoteUE_r17(Encoder& enc, const UE_TimersAndConstantsRemoteUE_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_t300_RemoteUE_r17);
    enc.WriteBit(value.has_t301_RemoteUE_r17);
    enc.WriteBit(value.has_t319_RemoteUE_r17);
    if (value.has_t300_RemoteUE_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.t300_RemoteUE_r17), 0, 7);
    }
    if (value.has_t301_RemoteUE_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.t301_RemoteUE_r17), 0, 7);
    }
    if (value.has_t319_RemoteUE_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.t319_RemoteUE_r17), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_UE_TimersAndConstantsRemoteUE_r17(Decoder& dec, UE_TimersAndConstantsRemoteUE_r17& value)
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
        value.t300_RemoteUE_r17 = (UE_TimersAndConstantsRemoteUE_r17_T300_RemoteUE_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.t301_RemoteUE_r17 = (UE_TimersAndConstantsRemoteUE_r17_T301_RemoteUE_r17)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.t319_RemoteUE_r17 = (UE_TimersAndConstantsRemoteUE_r17_T319_RemoteUE_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_TimersAndConstantsRemoteUE_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_TimersAndConstantsRemoteUE_r17(UE_TimersAndConstantsRemoteUE_r17& value)
{
    if (value.has_t300_RemoteUE_r17) {
    }
    if (value.has_t301_RemoteUE_r17) {
    }
    if (value.has_t319_RemoteUE_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB12_IEs_r16_ExtGroup1：ASN.1 SIB12_IEs_r16_ExtGroup1；源文件第 3798 行；扩展添加组 [[ ]]。
// Encode_SIB12_IEs_r16_ExtGroup1 只读不分配；Decode_SIB12_IEs_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SIB12_IEs_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB12_IEs_r16_ExtGroup1(Encoder& enc, const SIB12_IEs_r16_ExtGroup1& value)
{
    enc.WriteBit(value.has_sl_DRX_ConfigCommonGC_BC_r17);
    enc.WriteBit(value.has_sl_DiscConfigCommon_r17);
    enc.WriteBit(value.has_sl_L2U2N_Relay_r17);
    enc.WriteBit(value.has_sl_NonRelayDiscovery_r17);
    enc.WriteBit(value.has_sl_L3U2N_RelayDiscovery_r17);
    enc.WriteBit(value.has_sl_TimersAndConstantsRemoteUE_r17);
    if (value.has_sl_DRX_ConfigCommonGC_BC_r17) {
        Encode_SL_DRX_ConfigGC_BC_r17(enc, value.sl_DRX_ConfigCommonGC_BC_r17);
    }
    if (value.has_sl_DiscConfigCommon_r17) {
        Encode_SL_DiscConfigCommon_r17(enc, value.sl_DiscConfigCommon_r17);
    }
    if (value.has_sl_L2U2N_Relay_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_L2U2N_Relay_r17), 0, 0);
    }
    if (value.has_sl_NonRelayDiscovery_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_NonRelayDiscovery_r17), 0, 0);
    }
    if (value.has_sl_L3U2N_RelayDiscovery_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_L3U2N_RelayDiscovery_r17), 0, 0);
    }
    if (value.has_sl_TimersAndConstantsRemoteUE_r17) {
        Encode_UE_TimersAndConstantsRemoteUE_r17(enc, value.sl_TimersAndConstantsRemoteUE_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SIB12_IEs_r16_ExtGroup1(Decoder& dec, SIB12_IEs_r16_ExtGroup1& value)
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
        if (Decode_SL_DRX_ConfigGC_BC_r17(dec, value.sl_DRX_ConfigCommonGC_BC_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SL_DiscConfigCommon_r17(dec, value.sl_DiscConfigCommon_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        value.sl_L2U2N_Relay_r17 = (SIB12_IEs_r16_ExtGroup1_Sl_L2U2N_Relay_r17)0;
    }
    if (present_3) {
        value.sl_NonRelayDiscovery_r17 = (SIB12_IEs_r16_ExtGroup1_Sl_NonRelayDiscovery_r17)0;
    }
    if (present_4) {
        value.sl_L3U2N_RelayDiscovery_r17 = (SIB12_IEs_r16_ExtGroup1_Sl_L3U2N_RelayDiscovery_r17)0;
    }
    if (present_5) {
        if (Decode_UE_TimersAndConstantsRemoteUE_r17(dec, value.sl_TimersAndConstantsRemoteUE_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB12_IEs_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB12_IEs_r16_ExtGroup1(SIB12_IEs_r16_ExtGroup1& value)
{
    if (value.has_sl_DRX_ConfigCommonGC_BC_r17) {
        Free_SL_DRX_ConfigGC_BC_r17(value.sl_DRX_ConfigCommonGC_BC_r17);
    }
    if (value.has_sl_DiscConfigCommon_r17) {
        Free_SL_DiscConfigCommon_r17(value.sl_DiscConfigCommon_r17);
    }
    if (value.has_sl_L2U2N_Relay_r17) {
    }
    if (value.has_sl_NonRelayDiscovery_r17) {
    }
    if (value.has_sl_L3U2N_RelayDiscovery_r17) {
    }
    if (value.has_sl_TimersAndConstantsRemoteUE_r17) {
        Free_UE_TimersAndConstantsRemoteUE_r17(value.sl_TimersAndConstantsRemoteUE_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_DiscConfigCommon_v1800：ASN.1 SL-DiscConfigCommon-v1800；源文件第 3841 行；SEQUENCE。
// Encode_SL_DiscConfigCommon_v1800 只读不分配；Decode_SL_DiscConfigCommon_v1800 可能 malloc（失败时内部已释放并清零）；Free_SL_DiscConfigCommon_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_DiscConfigCommon_v1800(Encoder& enc, const SL_DiscConfigCommon_v1800& value)
{
    Encode_SL_RelayUE_ConfigU2U_r18(enc, value.sl_RelayUE_ConfigCommonU2U_r18);
    Encode_SL_RemoteUE_ConfigU2U_r18(enc, value.sl_RemoteUE_ConfigCommonU2U_r18);
    return enc.Error();
}

ErrorCode Decode_SL_DiscConfigCommon_v1800(Decoder& dec, SL_DiscConfigCommon_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_SL_RelayUE_ConfigU2U_r18(dec, value.sl_RelayUE_ConfigCommonU2U_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_SL_RemoteUE_ConfigU2U_r18(dec, value.sl_RemoteUE_ConfigCommonU2U_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_DiscConfigCommon_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_DiscConfigCommon_v1800(SL_DiscConfigCommon_v1800& value)
{
    Free_SL_RelayUE_ConfigU2U_r18(value.sl_RelayUE_ConfigCommonU2U_r18);
    Free_SL_RemoteUE_ConfigU2U_r18(value.sl_RemoteUE_ConfigCommonU2U_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB12_IEs_r16_ExtGroup2：ASN.1 SIB12_IEs_r16_ExtGroup2；源文件第 3806 行；扩展添加组 [[ ]]。
// Encode_SIB12_IEs_r16_ExtGroup2 只读不分配；Decode_SIB12_IEs_r16_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_SIB12_IEs_r16_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB12_IEs_r16_ExtGroup2(Encoder& enc, const SIB12_IEs_r16_ExtGroup2& value)
{
    enc.WriteBit(value.has_sl_FreqInfoListSizeExt_v1800);
    enc.WriteBit(value.has_sl_RLC_BearerConfigListSizeExt_v1800);
    enc.WriteBit(value.has_sl_SyncFreqList_r18);
    enc.WriteBit(value.has_sl_SyncTxMultiFreq_r18);
    enc.WriteBit(value.has_sl_MaxTransPowerCA_r18);
    enc.WriteBit(value.has_sl_DiscConfigCommon_v1800);
    enc.WriteBit(value.has_sl_L2U2U_Relay_r18);
    if (value.has_sl_FreqInfoListSizeExt_v1800) {
enc.WriteConstrainedLength(value.sl_FreqInfoListSizeExt_v1800_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_FreqInfoListSizeExt_v1800_count; ++i) {
    Encode_SL_FreqConfigCommon_r16(enc, value.sl_FreqInfoListSizeExt_v1800_items[i]);
}
    }
    if (value.has_sl_RLC_BearerConfigListSizeExt_v1800) {
enc.WriteConstrainedLength(value.sl_RLC_BearerConfigListSizeExt_v1800_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_RLC_BearerConfigListSizeExt_v1800_count; ++i) {
    Encode_SL_RLC_BearerConfig_r16(enc, value.sl_RLC_BearerConfigListSizeExt_v1800_items[i]);
}
    }
    if (value.has_sl_SyncFreqList_r18) {
enc.WriteConstrainedLength(value.sl_SyncFreqList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_SyncFreqList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_SyncFreqList_r18_items[i]), 1, 8);
}
    }
    if (value.has_sl_SyncTxMultiFreq_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_SyncTxMultiFreq_r18), 0, 0);
    }
    if (value.has_sl_MaxTransPowerCA_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_MaxTransPowerCA_r18), -30, 33);
    }
    if (value.has_sl_DiscConfigCommon_v1800) {
        Encode_SL_DiscConfigCommon_v1800(enc, value.sl_DiscConfigCommon_v1800);
    }
    if (value.has_sl_L2U2U_Relay_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_L2U2U_Relay_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SIB12_IEs_r16_ExtGroup2(Decoder& dec, SIB12_IEs_r16_ExtGroup2& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_FreqInfoListSizeExt_v1800_count)) { goto fail; }
if (value.sl_FreqInfoListSizeExt_v1800_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_FreqInfoListSizeExt_v1800_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_FreqInfoListSizeExt_v1800_count > 0u) {
    value.sl_FreqInfoListSizeExt_v1800_items = (SL_FreqConfigCommon_r16*)std::malloc((std::size_t)value.sl_FreqInfoListSizeExt_v1800_count * sizeof(SL_FreqConfigCommon_r16));
    if (value.sl_FreqInfoListSizeExt_v1800_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_FreqInfoListSizeExt_v1800_items, 0, (std::size_t)value.sl_FreqInfoListSizeExt_v1800_count * sizeof(SL_FreqConfigCommon_r16));
}
for (std::uint32_t i = 0; i < value.sl_FreqInfoListSizeExt_v1800_count; ++i) {
    if (Decode_SL_FreqConfigCommon_r16(dec, value.sl_FreqInfoListSizeExt_v1800_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_RLC_BearerConfigListSizeExt_v1800_count)) { goto fail; }
if (value.sl_RLC_BearerConfigListSizeExt_v1800_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_RLC_BearerConfigListSizeExt_v1800_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_RLC_BearerConfigListSizeExt_v1800_count > 0u) {
    value.sl_RLC_BearerConfigListSizeExt_v1800_items = (SL_RLC_BearerConfig_r16*)std::malloc((std::size_t)value.sl_RLC_BearerConfigListSizeExt_v1800_count * sizeof(SL_RLC_BearerConfig_r16));
    if (value.sl_RLC_BearerConfigListSizeExt_v1800_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_RLC_BearerConfigListSizeExt_v1800_items, 0, (std::size_t)value.sl_RLC_BearerConfigListSizeExt_v1800_count * sizeof(SL_RLC_BearerConfig_r16));
}
for (std::uint32_t i = 0; i < value.sl_RLC_BearerConfigListSizeExt_v1800_count; ++i) {
    if (Decode_SL_RLC_BearerConfig_r16(dec, value.sl_RLC_BearerConfigListSizeExt_v1800_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_SyncFreqList_r18_count)) { goto fail; }
if (value.sl_SyncFreqList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_SyncFreqList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_SyncFreqList_r18_count > 0u) {
    value.sl_SyncFreqList_r18_items = (SL_Freq_Id_r16*)std::malloc((std::size_t)value.sl_SyncFreqList_r18_count * sizeof(SL_Freq_Id_r16));
    if (value.sl_SyncFreqList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_SyncFreqList_r18_items, 0, (std::size_t)value.sl_SyncFreqList_r18_count * sizeof(SL_Freq_Id_r16));
}
for (std::uint32_t i = 0; i < value.sl_SyncFreqList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
    value.sl_SyncFreqList_r18_items[i] = (SL_Freq_Id_r16)tmp_value;
}
    }
    if (present_3) {
        value.sl_SyncTxMultiFreq_r18 = (SIB12_IEs_r16_ExtGroup2_Sl_SyncTxMultiFreq_r18)0;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-30, 33, tmp_value)) { goto fail; }
        value.sl_MaxTransPowerCA_r18 = (P_Max)tmp_value;
    }
    if (present_5) {
        if (Decode_SL_DiscConfigCommon_v1800(dec, value.sl_DiscConfigCommon_v1800) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        value.sl_L2U2U_Relay_r18 = (SIB12_IEs_r16_ExtGroup2_Sl_L2U2U_Relay_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB12_IEs_r16_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB12_IEs_r16_ExtGroup2(SIB12_IEs_r16_ExtGroup2& value)
{
    if (value.has_sl_FreqInfoListSizeExt_v1800) {
        if (value.sl_FreqInfoListSizeExt_v1800_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_FreqInfoListSizeExt_v1800_count; ++i) {
                Free_SL_FreqConfigCommon_r16(value.sl_FreqInfoListSizeExt_v1800_items[i]);
            }
            std::free(value.sl_FreqInfoListSizeExt_v1800_items);
            value.sl_FreqInfoListSizeExt_v1800_items = nullptr;
        }
        value.sl_FreqInfoListSizeExt_v1800_count = 0;
    }
    if (value.has_sl_RLC_BearerConfigListSizeExt_v1800) {
        if (value.sl_RLC_BearerConfigListSizeExt_v1800_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_RLC_BearerConfigListSizeExt_v1800_count; ++i) {
                Free_SL_RLC_BearerConfig_r16(value.sl_RLC_BearerConfigListSizeExt_v1800_items[i]);
            }
            std::free(value.sl_RLC_BearerConfigListSizeExt_v1800_items);
            value.sl_RLC_BearerConfigListSizeExt_v1800_items = nullptr;
        }
        value.sl_RLC_BearerConfigListSizeExt_v1800_count = 0;
    }
    if (value.has_sl_SyncFreqList_r18) {
        if (value.sl_SyncFreqList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_SyncFreqList_r18_count; ++i) {
            }
            std::free(value.sl_SyncFreqList_r18_items);
            value.sl_SyncFreqList_r18_items = nullptr;
        }
        value.sl_SyncFreqList_r18_count = 0;
    }
    if (value.has_sl_SyncTxMultiFreq_r18) {
    }
    if (value.has_sl_MaxTransPowerCA_r18) {
    }
    if (value.has_sl_DiscConfigCommon_v1800) {
        Free_SL_DiscConfigCommon_v1800(value.sl_DiscConfigCommon_v1800);
    }
    if (value.has_sl_L2U2U_Relay_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_NR_AnchorCarrierFreqList_r16：ASN.1 SL-NR-AnchorCarrierFreqList-r16；源文件第 3832 行；SEQUENCE OF。
// Encode_SL_NR_AnchorCarrierFreqList_r16 只读不分配；Decode_SL_NR_AnchorCarrierFreqList_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_NR_AnchorCarrierFreqList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_NR_AnchorCarrierFreqList_r16(Encoder& enc, const SL_NR_AnchorCarrierFreqList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 3279165);
    }
    return enc.Error();
}

ErrorCode Decode_SL_NR_AnchorCarrierFreqList_r16(Decoder& dec, SL_NR_AnchorCarrierFreqList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
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
    Free_SL_NR_AnchorCarrierFreqList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_NR_AnchorCarrierFreqList_r16(SL_NR_AnchorCarrierFreqList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_EUTRA_AnchorCarrierFreqList_r16：ASN.1 SL-EUTRA-AnchorCarrierFreqList-r16；源文件第 3834 行；SEQUENCE OF。
// Encode_SL_EUTRA_AnchorCarrierFreqList_r16 只读不分配；Decode_SL_EUTRA_AnchorCarrierFreqList_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_EUTRA_AnchorCarrierFreqList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_EUTRA_AnchorCarrierFreqList_r16(Encoder& enc, const SL_EUTRA_AnchorCarrierFreqList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 262143);
    }
    return enc.Error();
}

ErrorCode Decode_SL_EUTRA_AnchorCarrierFreqList_r16(Decoder& dec, SL_EUTRA_AnchorCarrierFreqList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (ARFCN_ValueEUTRA*)std::malloc((std::size_t)value.count * sizeof(ARFCN_ValueEUTRA));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(ARFCN_ValueEUTRA));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 262143, tmp_value)) { goto fail; }
    value.items[i] = (ARFCN_ValueEUTRA)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_EUTRA_AnchorCarrierFreqList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_EUTRA_AnchorCarrierFreqList_r16(SL_EUTRA_AnchorCarrierFreqList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_MeasIdList_r16：ASN.1 SL-MeasIdList-r16；源文件第 22624 行；SEQUENCE OF。
// Encode_SL_MeasIdList_r16 只读不分配；Decode_SL_MeasIdList_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_MeasIdList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_MeasIdList_r16(Encoder& enc, const SL_MeasIdList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 64u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SL_MeasIdInfo_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SL_MeasIdList_r16(Decoder& dec, SL_MeasIdList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 64u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 64u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_MeasIdInfo_r16*)std::malloc((std::size_t)value.count * sizeof(SL_MeasIdInfo_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_MeasIdInfo_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SL_MeasIdInfo_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_MeasIdList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_MeasIdList_r16(SL_MeasIdList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SL_MeasIdInfo_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_MeasObjectList_r16：ASN.1 SL-MeasObjectList-r16；源文件第 22638 行；SEQUENCE OF。
// Encode_SL_MeasObjectList_r16 只读不分配；Decode_SL_MeasObjectList_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_MeasObjectList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_MeasObjectList_r16(Encoder& enc, const SL_MeasObjectList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 64u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SL_MeasObjectInfo_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SL_MeasObjectList_r16(Decoder& dec, SL_MeasObjectList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 64u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 64u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_MeasObjectInfo_r16*)std::malloc((std::size_t)value.count * sizeof(SL_MeasObjectInfo_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_MeasObjectInfo_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SL_MeasObjectInfo_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_MeasObjectList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_MeasObjectList_r16(SL_MeasObjectList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SL_MeasObjectInfo_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
